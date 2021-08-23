import re
import os, fnmatch

# Loops through all files in @directory matching @filePattern and replaces any known names of fields/structs
def findReplace(directory, findArray, replaceArray, filePattern, structArrayMap):
    for path, dirs, files in os.walk(os.path.abspath(directory)):
        for filename in fnmatch.filter(files, filePattern):
            filepath = os.path.join(path, filename)
            with open(filepath) as f:
                s = f.read()

            #Loop through each known mapping   
            for i in range(len(findArray)):
                prefix = ".".join(findArray[i].split(".")[:-1]) # Get the name without the last field

                if prefix == "": # If there are no fields before this one (so it is a global)
                    s = re.sub(r"\b%s\b" % findArray[i], ("Global_" + replaceArray[i]), s)
                else:    
                    # If the next symbol is ".", use the struct name
                    if findArray[i] in structArrayMap :
                        s = re.sub(r"\b%s(?=[\.])" % findArray[i], (prefix + "." + structArrayMap[findArray[i]]), s)

                    # Otherwise use the name of the 0-th field
                    s = re.sub(r"\b%s\b" % findArray[i], (prefix + "." + replaceArray[i]), s)

            with open(filepath, "w") as f:
                f.write(s)
                print("Replaced all in " + filepath)

# Patterns for field names: (&Global_*, "NAME") and (&(Global_*.*), "NAME")
pattern = [re.compile("\(&\((Global_[\w.]+)\), \"(\w+)\"\)"),                       # \(&\((Global_[\w.]+)\), "(\w+)"\)
            re.compile("\(&(Global_[\w.]+), \"(\w+)\"\)")]                          # \(&(Global_[\w.]+), "(\w+)"\)

# Pattern for array and struct names: (&(Global_*.*), SIZE, "NAME")
structArrayPattern = [ re.compile("\(&\((Global_[\w.]+)\), [0-9]+, \"(\w+)\"\)") ]  # \(&\((Global_[\w.]+)\), [0-9]+, "(\w+)"\)

# Folder and file filter to use
folder = "Scripts 1.27/decompiled_scripts/"
file_filter = "*.c"

# Map of known field names, e.g. {'Global_97353.f_29607.f_153': 'Player_heading'}
fieldMap = {
}

# Map of known struct and array names, e.g {'Global_97353.f_8270': 'FLOW_CUSTOM_STRUCT'}
structArrayMap = {
}

# For each line in standard_global_reg.c
for i, line in enumerate(open(folder + 'standard_global_reg.c')):
    # Match field names
    for pt in pattern:
        for match in re.finditer(pt, line):
            if "f_" in match.group(1):
                fieldMap[match.group(1)] = match.group(2)

    # Match struct and array names
    for pt in structArrayPattern:
        for match in re.finditer(pt, line):
            if "f_" in match.group(1):
                structArrayMap[match.group(1)] = match.group(2)

# Also add every struct/array as a field because we loop through fields in findReplace. This is bad code but I can't be bothered to do it properly.
for (k,v) in structArrayMap.items():
    if k not in fieldMap:
        fieldMap[k] = v


# Sort the field names so that the ones containing the deepest level of sub-structs go first.
# This way you can find&replace the names in order, starting from the deepest level
# Example:
# Global_97353.f_18227.[f_3] -> Global_97353.f_18227.TOWING_iJobsCompleted
# Global_97353.[f_18227].TOWING_iJobsCompleted -> Global_97353.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted
# [Global_97353].TOWING_SAVED_STRUCT.TOWING_iJobsCompleted -> Global_fSaveVersion.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted
sorted_map = dict(sorted(fieldMap.items(), key=lambda x: x[0].count('.'), reverse=True))
print(sorted_map)
print("===============================")
print(structArrayMap)

# Do the actual find & replace
findReplace(folder, list(sorted_map.keys()), list(sorted_map.values()), file_filter, structArrayMap)


