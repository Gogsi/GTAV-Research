#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 1000;
	var uLocal_57 = 1000;
	var uLocal_58 = 0;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	var uLocal_89 = 16;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	char cLocal_255[24] = "";
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	struct<5> Local_295[30];
	int iLocal_446 = 0;
	struct<6> Local_447[60];
	var uLocal_808 = 0;
	int iLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	int iLocal_816[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_969 = 0;
	var uLocal_970 = 10;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	struct<21> Local_989 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 4;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 4;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 4;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 4;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 4;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 4;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 4;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	struct<40> Local_1070[55];
	struct<40> Local_3271[40];
	struct<40> Local_4872[3];
	struct<19> Local_4993[35];
	var uLocal_5659 = 0;
	struct<10> Local_5660[16];
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	char* sLocal_5826 = NULL;
	char* sLocal_5827 = NULL;
	char* sLocal_5828 = NULL;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	int iLocal_5831 = 0;
	int iLocal_5832 = 0;
	int iLocal_5833 = 0;
	int iLocal_5834[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5845 = 0;
	int iLocal_5846 = 0;
	int iLocal_5847 = 0;
	int iLocal_5848 = 0;
	bool bLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	int iLocal_5859 = 0;
	int iLocal_5860 = 0;
	int iLocal_5861 = 0;
	int iLocal_5862 = 0;
	float fLocal_5863 = 0f;
	float fLocal_5864 = 0f;
	float fLocal_5865 = 0f;
	var uLocal_5866 = 0;
	int iLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5875 = 0;
	var uLocal_5876[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5902 = 0;
	int iLocal_5903[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5909[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5935[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5961 = 5;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	struct<3> Local_5977 = { 0, 0, 0 } ;
	struct<3> Local_5980 = { 0, 0, 0 } ;
	struct<3> Local_5983 = { 0, 0, 0 } ;
	struct<3> Local_5986 = { 0, 0, 0 } ;
	int iLocal_5989[3] = { 0, 0, 0 };
	int iLocal_5993 = 0;
	int iLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	int iLocal_5998[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6032 = 0;
	int iLocal_6033 = 0;
	int iLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038[4] = { 0, 0, 0, 0 };
	int iLocal_6043 = 0;
	int iLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_6059 = 0;
	int iLocal_6060 = 0;
	int iLocal_6061 = 0;
	int iLocal_6062 = 0;
	int iLocal_6063 = 0;
	int iLocal_6064 = 0;
	int iLocal_6065 = 0;
	int iLocal_6066 = 0;
	int iLocal_6067 = 0;
	int iLocal_6068 = 0;
	int iLocal_6069 = 0;
	var uLocal_6070 = 4;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	int iLocal_6077 = 0;
	var uLocal_6078 = 0;
	int iLocal_6079 = 0;
	var uLocal_6080 = 3;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	int iLocal_6089 = 0;
	int iLocal_6090 = 0;
	int iLocal_6091 = 0;
	int iLocal_6092 = 0;
	var uLocal_6093 = 0;
	int iLocal_6094 = 0;
	int iLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	int iLocal_6098 = 0;
	int iLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	int iLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	int iLocal_6111 = 0;
	int iLocal_6112 = 0;
	int iLocal_6113 = 0;
	struct<20> Local_6114 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	int iLocal_6148 = 0;
	int iLocal_6149 = 0;
	int iLocal_6150 = 0;
	int iLocal_6151 = 0;
	bool bLocal_6152 = 0;
	float fLocal_6153 = 0f;
	struct<3> Local_6154 = { 0, 0, 0 } ;
	var uLocal_6157 = 2;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	struct<3> Local_6165 = { 0, 0, 0 } ;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	float fLocal_6170 = 0f;
	float fLocal_6171 = 0f;
	float fLocal_6172 = 0f;
	float fLocal_6173 = 0f;
	float fLocal_6174 = 0f;
	float fLocal_6175 = 0f;
	float fLocal_6176 = 0f;
	float fLocal_6177 = 0f;
	float fLocal_6178 = 0f;
	float fLocal_6179 = 0f;
	float fLocal_6180 = 0f;
	float fLocal_6181 = 0f;
	struct<3> Local_6182 = { 0, 0, 0 } ;
	struct<3> Local_6185 = { 0, 0, 0 } ;
	struct<3> Local_6188 = { 0, 0, 0 } ;
	struct<3> Local_6191 = { 0, 0, 0 } ;
	struct<3> Local_6194 = { 0, 0, 0 } ;
	struct<3> Local_6197 = { 0, 0, 0 } ;
	struct<3> Local_6200 = { 0, 0, 0 } ;
	struct<3> Local_6203 = { 0, 0, 0 } ;
	struct<3> Local_6206 = { 0, 0, 0 } ;
	struct<3> Local_6209 = { 0, 0, 0 } ;
	float fLocal_6212 = 0f;
	float fLocal_6213 = 0f;
	struct<3> Local_6214 = { 0, 0, 0 } ;
	struct<3> Local_6217 = { 0, 0, 0 } ;
	struct<3> Local_6220 = { 0, 0, 0 } ;
	struct<3> Local_6223 = { 0, 0, 0 } ;
	struct<3> Local_6226 = { 0, 0, 0 } ;
	struct<3> Local_6229 = { 0, 0, 0 } ;
	struct<3> Local_6232 = { 0, 0, 0 } ;
	struct<3> Local_6235 = { 0, 0, 0 } ;
	struct<3> Local_6238 = { 0, 0, 0 } ;
	struct<3> Local_6241 = { 0, 0, 0 } ;
	struct<3> Local_6244 = { 0, 0, 0 } ;
	struct<3> Local_6247 = { 0, 0, 0 } ;
	struct<3> Local_6250 = { 0, 0, 0 } ;
	struct<3> Local_6253 = { 0, 0, 0 } ;
	struct<3> Local_6256 = { 0, 0, 0 } ;
	struct<3> Local_6259 = { 0, 0, 0 } ;
	var uLocal_6262 = 0;
	int iLocal_6263 = 0;
	float fLocal_6264 = 0f;
	float fLocal_6265 = 0f;
	float fLocal_6266 = 0f;
	var uLocal_6267 = 0;
	struct<15> Local_6268 = { 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6283 = 8;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 8;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 5;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 1065353216;
	var uLocal_6435 = 1065353216;
	var uLocal_6436 = 1036831949;
	var uLocal_6437 = 1000593162;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 5;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 1065353216;
	var uLocal_6532 = 1065353216;
	var uLocal_6533 = 1036831949;
	var uLocal_6534 = 1000593162;
	struct<19> Local_6535[2];
	struct<6> Local_6574 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_6580 = 0;
	var uLocal_6581 = 1092616192;
	var uLocal_6582 = 1101004800;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 3;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	struct<5> Local_6599 = { 0, 0, 0, 0, 0 } ;
	struct<27> Local_6604[15];
	int iLocal_7010 = 0;
	int iLocal_7011 = 0;
	int iLocal_7012 = 0;
	int iLocal_7013 = 0;
	var uLocal_7014 = 10;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	float fLocal_7046 = 0f;
	int iLocal_7047 = 0;
	struct<1233> Local_7048 = { 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 20, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_8281 = -1082130432;
	var uLocal_8282 = -1082130432;
	var uLocal_8283 = 1;
	var uLocal_8284 = 1;
	var uLocal_8285 = 1;
	var uLocal_8286 = -1;
	var uLocal_8287 = -1;
	var uLocal_8288 = -1;
	float fLocal_8289 = 0f;
	float fLocal_8290 = 0f;
	float fLocal_8291 = 0f;
	float fLocal_8292 = 0f;
	float fLocal_8293 = 0f;
	int iLocal_8294 = 0;
	float fLocal_8295 = 0f;
	int iLocal_8296 = 0;
	int iLocal_8297 = 0;
	int iLocal_8298 = 0;
	var uLocal_8299 = 0;
	int iLocal_8300 = 0;
	struct<3> Local_8301 = { 0, 0, 0 } ;
	int iLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	char* sLocal_8315 = NULL;
	int iLocal_8316 = 0;
	int iLocal_8317 = 0;
	int iLocal_8318 = 0;
	int iLocal_8319 = 0;
	int iLocal_8320 = 0;
	int iLocal_8321 = 0;
	int iLocal_8322 = 0;
	int iLocal_8323 = 0;
	int iLocal_8324 = 0;
	char* sLocal_8325 = NULL;
	int iLocal_8326 = 0;
	var uLocal_8327 = 0;
	int iLocal_8328 = 0;
	int iLocal_8329 = 0;
	var uLocal_8330 = 3;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	int iLocal_8334 = 0;
	int iLocal_8335 = 0;
	struct<3> Local_8336 = { 0, 0, 0 } ;
	int iLocal_8339 = 0;
	int iLocal_8340 = 0;
	int iLocal_8341 = 0;
	int iLocal_8342 = 0;
	struct<3> Local_8343 = { 0, 0, 0 } ;
	struct<3> Local_8346 = { 0, 0, 0 } ;
	int iLocal_8349 = 0;
	int iLocal_8350 = 0;
	int iLocal_8351 = 0;
	int iLocal_8352 = 0;
	int iLocal_8353 = 0;
	int iLocal_8354 = 0;
	int iLocal_8355 = 0;
	int iLocal_8356 = 0;
	int iLocal_8357 = 0;
	int iLocal_8358 = 0;
	int iLocal_8359 = 0;
	int iLocal_8360 = 0;
	int iLocal_8361 = 0;
	int iLocal_8362 = 0;
	int iLocal_8363 = 0;
	int iLocal_8364 = 0;
	int iLocal_8365 = 0;
	int iLocal_8366 = 0;
	int iLocal_8367 = 0;
	int iLocal_8368 = 0;
	int iLocal_8369 = 0;
	int iLocal_8370 = 0;
	int iLocal_8371 = 0;
	int iLocal_8372 = 0;
	int iLocal_8373 = 0;
	int iLocal_8374 = 0;
	int iLocal_8375 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_59 = 1f;
	iLocal_261 = -1;
	sLocal_5826 = "missbigscore2big_5";
	sLocal_5827 = "missbigscore2big_6";
	sLocal_5828 = "missbigscore2big_7_p2";
	fLocal_5863 = 4f;
	fLocal_5864 = 6f;
	fLocal_5865 = -6f;
	Local_5977 = { 486.5248f, -3201.529f, 39.754f };
	Local_5980 = { 491.3913f, -3408.279f, 0.5384f };
	Local_5986 = { 527.26f, -3164.78f, -0.6f };
	iLocal_6104 = 3;
	iLocal_6148 = AUDIO::GET_SOUND_ID();
	iLocal_6149 = AUDIO::GET_SOUND_ID();
	iLocal_6150 = AUDIO::GET_SOUND_ID();
	iLocal_6151 = AUDIO::GET_SOUND_ID();
	bLocal_6152 = true;
	Local_6165 = { 488.4018f, -3159.706f, 5f };
	fLocal_6170 = 5.5f;
	fLocal_6171 = -7.6f;
	fLocal_6172 = -4.8f;
	fLocal_6173 = -14f;
	fLocal_6174 = 15f;
	fLocal_6175 = -76.6f;
	fLocal_6176 = 5f;
	fLocal_6177 = 5f;
	fLocal_6178 = 2f;
	fLocal_6179 = 5f;
	fLocal_6180 = 5f;
	fLocal_6181 = 2f;
	Local_6182 = { -15.1069f, -25.8024f, 8.8412f };
	Local_6185 = { -15.1064f, -25.8022f, 8.841f };
	Local_6188 = { -13.6553f, -23.6718f, 7.3063f };
	Local_6191 = { -7.4302f, -25.8017f, 11.759f };
	Local_6194 = { -6.4453f, -23.4199f, 10.2238f };
	Local_6197 = { -13.6548f, -23.6745f, 8.3039f };
	Local_6200 = { -15.1069f, -25.5991f, -10f };
	Local_6203 = { -13.6548f, -23.1884f, -10.5f };
	Local_6206 = { -1.512f, 3f, -3.678f };
	Local_6209 = { -89f, 0f, -90f };
	fLocal_6212 = 100f;
	fLocal_6213 = 45.0193f;
	Local_6214 = { -0.6f, -0.7f, -0.3f };
	Local_6217 = { -0.6f, -0.7f, 0.2f };
	Local_6220 = { 0.6f, -0.7f, -0.3f };
	Local_6223 = { 0.6f, -0.7f, 0.2f };
	Local_6226 = { -0.6f, 0.7f, -0.3f };
	Local_6229 = { -0.6f, 0.7f, 0.2f };
	Local_6232 = { 0.6f, 0.7f, -0.3f };
	Local_6235 = { 0.6f, 0.7f, 0.2f };
	Local_6238 = { 2.6f, 0.05f, 0.3f };
	Local_6241 = { 2.65f, -0.05f, 0.2f };
	Local_6244 = { 2.6f, 0.05f, 0.3f };
	Local_6247 = { 2.65f, 0.05f, 0.2f };
	Local_6250 = { -2.6f, 0.05f, 0.3f };
	Local_6253 = { -2.65f, -0.05f, 0.2f };
	Local_6256 = { -2.6f, 0.05f, 0.3f };
	Local_6259 = { -2.65f, 0.05f, 0.2f };
	iLocal_6263 = 120;
	fLocal_6264 = 3.5f;
	fLocal_6265 = 2f;
	fLocal_6266 = 1.3f;
	fLocal_7046 = 25f;
	fLocal_8289 = 15f;
	fLocal_8290 = 0.2f;
	fLocal_8291 = 10f;
	fLocal_8292 = 0f;
	fLocal_8293 = 0f;
	fLocal_8295 = 0.18f;
	sLocal_8315 = "D2BAUD";
	iLocal_8364 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
		func_822(1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_6066)
		{
		}
		func_819();
		func_799();
		func_798();
		GlobalFunc_587();
		func_795();
		if (iLocal_7010 > 3)
		{
		}
		if (iLocal_7010 > 5 || iLocal_7010 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (func_794("STABALISE"))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
					{
						VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
						func_791("STABALISE", 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
				{
					VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
					func_791("STABALISE", 1);
				}
			}
		}
		if (iLocal_7010 > 3 && iLocal_7010 < 6)
		{
			if (func_794("SEE THE PLANE"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[26 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[26 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[26 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[26 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_4993[26 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[10 /*40*/]))
								{
									PED::DELETE_PED(&(Local_3271[10 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[30 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[30 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[30 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[30 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_4993[30 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[11 /*40*/]))
								{
									PED::DELETE_PED(&(Local_3271[11 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[31 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[31 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[31 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[31 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_4993[31 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[12 /*40*/]))
								{
									PED::DELETE_PED(&(Local_3271[12 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
			}
			if (func_794("SEE THE SHIPS"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[27 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[27 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[27 /*19*/]) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_4993[27 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[27 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[7 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3271[7 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4993[27 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(27, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[28 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[28 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[28 /*19*/]) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_4993[28 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[28 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[8 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3271[8 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4993[28 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(28, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[29 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[29 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[29 /*19*/]) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_4993[29 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[29 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3271[9 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3271[9 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4993[29 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(29, "DHF2");
							}
						}
					}
				}
			}
		}
		switch (iLocal_7010)
		{
			case 0:
				func_772();
				break;
			
			case 1:
				func_751();
				break;
			
			case 2:
				func_743();
				break;
			
			case 3:
				func_738();
				break;
			
			case 4:
				func_732();
				break;
			
			case 5:
				func_730();
				break;
			
			case 6:
				func_719();
				break;
			
			case 7:
				func_712();
				break;
			
			case 8:
				func_706();
				break;
			
			case 9:
				func_586();
				break;
			
			case 10:
				func_261();
				break;
			
			case 11:
				func_203();
				break;
			
			case 12:
				func_53();
				break;
			
			case 13:
				func_29();
				break;
			
			case 14:
				func_3();
				break;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 621);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 625);
			}
			else
			{
				GlobalFunc_503(0, 625);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			GlobalFunc_504(Local_4993[1 /*19*/], 626);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			GlobalFunc_504(Local_4993[0 /*19*/], 627);
		}
	}
}



void func_3()//Position - 0xA4A
{
	char* sVar0;
	int iVar1;
	
	switch (iLocal_7012)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FAILED";
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_TREVDEAD";
			break;
		
		case 6:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_TREVLEFT";
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MICHDEAD";
			break;
		
		case 7:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MICHLEFT";
			break;
		
		case 3:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FRANDEAD";
			break;
		
		case 8:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FRANLEFT";
			break;
		
		case 5:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FLOYDDEAD";
			break;
		
		case 4:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_WADEDEAD";
			break;
		
		case 13:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FABANCREW";
			break;
		
		case 9:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_HELIDEAD";
			break;
		
		case 10:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_HELISTUCK";
			break;
		
		case 12:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_SUBDEAD";
			break;
		
		case 11:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MCARDEAD";
			break;
		
		case 14:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_CARGOAB";
			break;
		
		case 15:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_BANKALERT";
			break;
		
		case 16:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MERRYWF";
			break;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
	if (((((iLocal_7011 == 6 || iLocal_7011 == 7) || iLocal_7011 == 5) || iLocal_7011 == 8) || iLocal_7011 == 4) || iLocal_7011 == 9)
	{
		GlobalFunc_5129(-1577.832f, 5175.624f, 18.5209f, 130.8145f);
		GlobalFunc_5166(-1574.948f, 5169.657f, 18.5775f, 163.3193f);
	}
	if (((iLocal_7011 == 10 || iLocal_7011 == 11) || iLocal_7011 == 3) || iLocal_7011 == 12)
	{
		GlobalFunc_5129(1745.939f, 3292.626f, 40.1041f, 182.7365f);
		GlobalFunc_5166(1756.646f, 3283.661f, 40.1061f, 274.9329f);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("annihilator") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("submersible"))
		{
		}
	}
	GlobalFunc_10835(sVar0);
	GlobalFunc_4927(38, 1);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_822(1);
}


























void func_29()//Position - 0x1E61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < GlobalFunc_5882(1))
	{
		GlobalFunc_5156(1, GlobalFunc_5133(1, iVar0), 1);
		iVar0++;
	}
	GlobalFunc_706(1, 10000000);
	GlobalFunc_2771(1, 10000000);
	GlobalFunc_9804(7, 0);
	GlobalFunc_5103(0, 0);
	func_822(1);
}
























void func_53()//Position - 0x2431
{
	switch (iLocal_6092)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
			}
			GlobalFunc_7621(94, 1, 0, 1, 0);
			iLocal_6032 = 0;
			GlobalFunc_4935();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			func_195();
			GlobalFunc_Checkpoint1(10, "Closing Cutscene", 0, 0, 0, 1);
			iLocal_6032 = 0;
			iLocal_6112 = 0;
			RECORDING::_0x293220DA1B46CEBC(6f, 0f, 4);
			iLocal_6092++;
			break;
		
		case 1:
			if (func_195())
			{
				func_54();
				iLocal_6092++;
			}
			break;
		
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_6092 = 0;
			iLocal_7010 = 13;
			break;
	}
}

void func_54()//Position - 0x24EA
{
	iLocal_6060 = 0;
	iLocal_6062 = 0;
	iLocal_6069 = 1;
	iLocal_6061 = 0;
	while (iLocal_6069)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_ThePortOfLSHeist2B", 0);
		if (iLocal_6060 == 0)
		{
			if (iLocal_6063)
			{
				iLocal_6063 = 0;
			}
			else if (iLocal_6062 == 0)
			{
				iLocal_6069 = 1;
				GlobalFunc_7621(94, 1, 0, 1, 0);
				CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
				iLocal_8371 = 0;
				iLocal_6064 = 0;
				iLocal_6062++;
			}
			else if (iLocal_6062 == 1)
			{
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					if (!PED::IS_PED_INJURED(iLocal_5846))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5846, "Wade", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_5847))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5847, "Lester", 1, 0, 0);
					}
					if (GlobalFunc_4931(0, 0) == joaat("tailgater"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4993[4 /*19*/], "michaels_car", 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "showroom_car", 3, joaat("premier"), 0);
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4993[4 /*19*/], "Showroom_Car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michaels_car", 3, joaat("tailgater"), 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[0], "Michael", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[2], "Trevor", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[1], 0))
						{
							ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[1], "Franklin", 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::DETACH_ENTITY(Local_4993[1 /*19*/], 1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4993[1 /*19*/], "Submarine", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4993[0 /*19*/], "FBI_5_Heli", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 0, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						PED::REMOVE_PED_HELMET(uLocal_1023[2], 1);
						PED::SET_ENABLE_SCUBA(uLocal_1023[2], 0);
					}
					HUD::CLEAR_HELP(1);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					GlobalFunc_8316(1, 1, 1, 0);
					iLocal_6061 = 0;
					iLocal_6062 = 0;
					iLocal_6060 = 1;
				}
			}
		}
		if (iLocal_6060 == 1)
		{
			if (!iLocal_8371)
			{
				iLocal_8373 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FBI_5_Heli", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_8373))
				{
					iLocal_8372 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_8373);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_8372, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_8372, 0, 0);
						iLocal_8371 = 1;
					}
				}
			}
			if (iLocal_6064 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_8315() != 2)
					{
						GlobalFunc_9134(&uLocal_1023, 2);
						func_60(&uLocal_1023, 1, 1, 1);
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[0], iLocal_1068);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						PED::REMOVE_PED_HELMET(uLocal_1023[2], 1);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						PED::SET_ENABLE_SCUBA(uLocal_1023[2], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_5909[1]));
					}
					iLocal_6064 = 1;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 75000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (!iLocal_6061 && iLocal_6064 == 1)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_6061 = 1;
					}
				}
				if (iLocal_6033 == 1 && iLocal_6034 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)), 0))
						{
							VEHICLE::SET_VEHICLE_COLOURS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)), iLocal_5861, iLocal_5862);
							iLocal_6034 = 1;
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), GlobalFunc_2366(0), 0f);
				GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), 30000, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					PED::DELETE_PED(&(uLocal_1023[1]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
				{
					PED::DELETE_PED(&(uLocal_1023[0]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_5_Heli", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[0 /*19*/]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Submarine", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_4993[1 /*19*/], 1763.78f, 3289.082f, 41.8658f, 0, 0, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_6064 == 1)
			{
				while (CAM::IS_SCREEN_FADING_OUT())
				{
					SYSTEM::WAIT(0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_6060 = 2;
			}
		}
		if (iLocal_6060 == 2)
		{
			if (iLocal_6061)
			{
				RECORDING::_0x13B350B8AD0EEE10();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_8316(0, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_6062 = 0;
			iLocal_6069 = 0;
			iLocal_6060 = 0;
		}
		if (iLocal_6060 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
			iLocal_6061 = 1;
			iLocal_6060 = 1;
		}
	}
}






int func_60(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2C57
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9014(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9014((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_Running_Missions[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_Running_Missions[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		GlobalFunc_10840(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}







































































































































int func_195()//Position - 0xFEC1
{
	var uVar0;
	
	uVar0 = GlobalFunc_2366(0);
	STREAMING::REQUEST_CLIP_SET(uVar0);
	if (!STREAMING::HAS_CLIP_SET_LOADED(uVar0))
	{
		return 0;
	}
	return 1;
}








void func_203()//Position - 0x1426C
{
	CAM::_0x4008EDF7D6E48175(1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1750.633f, 3285.028f, 40.0871f, 250f, 250f, 130f, 0, 1, 0))
		{
			VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 0f);
		}
		else
		{
			VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 1f);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1754.472f, 3283.072f, 40.0925f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 300f)
	{
		if (iLocal_8370 == 0)
		{
			iLocal_8370 = 1;
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
		}
	}
	else if (iLocal_8370 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1754.472f, 3283.072f, 40.0925f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 400f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_8370 = 0;
		}
	}
	if (iLocal_6033 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(Local_4993[4 /*19*/], &iLocal_5861, &iLocal_5862);
			iLocal_6033 = 1;
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
				}
			}
			iLocal_6032 = 0;
			GlobalFunc_4935();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_PLANE");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
			}
			GlobalFunc_7621(94, 1, 0, 1, 0);
			GlobalFunc_5652(&Local_6574, 1, 0);
			iLocal_6032 = 0;
			iLocal_6112 = 0;
			GlobalFunc_Checkpoint1(9, "Drop the sub at airstrip", 0, 0, 0, 1);
			GlobalFunc_2781(500);
			iLocal_8375 = -1;
			iLocal_6092++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (GlobalFunc_9194(&Local_6574, 1754.472f, 3283.072f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_4993[0 /*19*/], "DS2_DROP_SUB", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1750.633f, 3285.028f, 40.0871f, 250f, 250f, 130f, 0, 1, 0))
					{
						if (iLocal_6032 == 1)
						{
							if (GlobalFunc_663("DS2_FLYTLOD", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_981))
							{
								HUD::REMOVE_BLIP(&uLocal_981);
							}
							GlobalFunc_164("DS2_DROP_SUB", 7500, 0);
							iLocal_6032 = 0;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1683.872f, 3247.429f, 39.81261f, 1804.121f, 3280.57f, 63.77226f, 65f, 0, 1, 0))
						{
							if (!GlobalFunc_74("DS2_GRAP_HELP2"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_8374 + 1000)
								{
									GlobalFunc_Display_Help_Text("DS2_GRAP_HELP2");
									iLocal_8374 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
								{
									PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
								}
							}
							if (GlobalFunc_74("DS2_GRAP_HELP2"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_8374 + 1000)
								{
									HUD::CLEAR_HELP(1);
									iLocal_8374 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
							{
								PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
							}
						}
						if (iLocal_6032 == 0)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("DS2_FLYTLOD", 7500, 0);
							iLocal_6032 = 1;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_SUB_RETURNED"))
							{
								ENTITY::DETACH_ENTITY(Local_4993[1 /*19*/], 1, 1);
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::REMOVE_BLIP(&(Local_6574.f_5));
								}
								if (GlobalFunc_663("DS2_DROP_SUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								HUD::CLEAR_HELP(1);
								GlobalFunc_729(&uLocal_1023, 1, 1);
								GlobalFunc_729(&uLocal_1023, 2, 0);
								Local_989.f_15 = 0;
								CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
								iLocal_6092++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (iLocal_8375 < 0)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4993[1 /*19*/]))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOCKS_HEIST_FINALE_2A_SUB_LAND", Local_4993[1 /*19*/], "DOCKS_HEIST_FINALE_2A_SOUNDS", 0, 0);
						iLocal_8375 = MISC::GET_GAME_TIMER();
					}
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_8375 + 3000)
				{
					iLocal_6092++;
				}
			}
			break;
		
		case 3:
			iLocal_6092 = 0;
			iLocal_7010 = 12;
			break;
	}
}


























































void func_261()//Position - 0x1746F
{
	func_584();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.675f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 550f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
		{
			func_277(22, 0f, 0f, 0f, 0f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			func_277(24, 0f, 0f, 0f, 0f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
		{
			func_277(23, 0f, 0f, 0f, 0f, 0, 1);
		}
		else if (iLocal_6033 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Local_4993[4 /*19*/], &iLocal_5861, &iLocal_5862);
				iLocal_6033 = 1;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.675f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
	{
		if (iLocal_8370 == 0)
		{
			iLocal_8370 = 1;
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
		}
	}
	else if (iLocal_8370 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.675f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_8370 = 0;
		}
	}
	CAM::_0x4008EDF7D6E48175(1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
			}
		}
	}
	if (bLocal_5849 == 1)
	{
		if (GlobalFunc_8315() == 1)
		{
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
			CAM::_CLAMP_GAMEPLAY_CAM_YAW(-20f, 50f);
			CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-60f, 0f);
			CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(1f, 1f);
		}
	}
	func_276(Local_4993[10 /*19*/], joaat("dinghy"), 1);
	func_276(Local_4993[11 /*19*/], joaat("dinghy"), 1);
	func_276(Local_4993[12 /*19*/], joaat("dinghy"), 1);
	func_276(Local_4993[13 /*19*/], joaat("dinghy"), 1);
	func_276(Local_4993[14 /*19*/], joaat("buzzard"), 1);
	func_276(Local_4993[15 /*19*/], joaat("buzzard"), 1);
	func_276(Local_4993[16 /*19*/], joaat("buzzard"), 1);
	func_276(Local_4993[17 /*19*/], joaat("buzzard"), 1);
	func_276(Local_4993[18 /*19*/], joaat("buzzard"), 1);
	func_276(Local_4993[19 /*19*/], joaat("buzzard"), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5903[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_5903[1]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_lev_des_barge_01"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5903[2]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_5903[2]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_lev_des_barge_01"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
	{
		PED::DELETE_PED(&iLocal_5846);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
	{
		PED::DELETE_PED(&iLocal_5845);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
	}
	if (GlobalFunc_8315() == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	}
	switch (iLocal_6092)
	{
		case 0:
			iLocal_6032 = 0;
			iLocal_6089 = 0;
			GlobalFunc_729(&uLocal_1023, 0, 0);
			GlobalFunc_729(&uLocal_1023, 1, 0);
			GlobalFunc_729(&uLocal_1023, 2, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			iLocal_6094 = 0;
			while (iLocal_6094 <= 39)
			{
				if (HUD::DOES_BLIP_EXIST(Local_3271[iLocal_6094 /*40*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_3271[iLocal_6094 /*40*/].f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3271[iLocal_6094 /*40*/]))
				{
					GlobalFunc_2782(Local_3271[iLocal_6094 /*40*/], joaat("s_m_y_blackops_01"), 0, 0, 0);
				}
				iLocal_6094++;
			}
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
			AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 1))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
			}
			HUD::CLEAR_HELP(1);
			RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
			func_791("DROPPED THE SUB", 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			GlobalFunc_5652(&Local_6574, 1, 0);
			GlobalFunc_2781(500);
			iLocal_6099 = 0;
			GlobalFunc_7621(94, 1, 0, 1, 0);
			GlobalFunc_Checkpoint1(8, "Fly Away", 0, 0, 0, 1);
			iLocal_6095 = MISC::GET_GAME_TIMER();
			MISC::CLEAR_AREA(1754.472f, 3283.072f, 40.0925f, 200f, 1, 0, 0, 0);
			iLocal_6092++;
			break;
		
		case 1:
			if (GlobalFunc_9194(&Local_6574, 1754.472f, 3283.072f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_4993[0 /*19*/], "DS2_FLYTD", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1754.472f, 3283.072f, 40.0925f, 250f, 250f, 250f, 0, 1, 0))
					{
						if (!func_794("DS2A_SEEAIR"))
						{
							if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SEEAIR", 8, 0, 0, 0))
								{
									func_791("DS2A_SEEAIR", 1);
								}
							}
						}
						else
						{
							GlobalFunc_5652(&Local_6574, 1, 0);
							iLocal_6092++;
						}
					}
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (func_265(0))
						{
							if (iLocal_6089 == 0)
							{
								if (!func_794("DS2A_P8"))
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P8", 8, 0, 0, 0))
									{
										func_791("DS2A_P8", 1);
										iLocal_6089 = 1;
									}
								}
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
						{
							if (func_794("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_6574.f_5, 255);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
								{
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
								}
								if (GlobalFunc_663("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									HUD::REMOVE_BLIP(&uLocal_6046);
								}
								func_791("DROPPED THE SUB", 0);
							}
						}
						else if (!func_794("DROPPED THE SUB"))
						{
							if (iLocal_6089 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									if (GlobalFunc_620())
									{
										HUD::CLEAR_PRINTS();
										GlobalFunc_619(0);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
							}
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_6574.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									uLocal_6046 = GlobalFunc_6783(Local_4993[1 /*19*/], 0, 0);
									GlobalFunc_5884("DS2_GIPOSFSUB");
								}
							}
							RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
							func_791("DROPPED THE SUB", 1);
						}
					}
				}
				if (iLocal_6089 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
					{
						if (GlobalFunc_620())
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_619(0);
						}
					}
					else if (!GlobalFunc_620())
					{
						if (GlobalFunc_663("DS2_FLYGB", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						GlobalFunc_619(1);
					}
				}
			}
			break;
		
		case 2:
			CAM::DO_SCREEN_FADE_IN(2500);
			HUD::CLEAR_HELP(1);
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_5993 = 0;
			iLocal_6092 = 0;
			iLocal_6032 = 0;
			iLocal_7010 = 11;
			break;
	}
}




int func_265(bool bParam0)//Position - 0x17C94
{
	if (!GlobalFunc_111())
	{
		if (bParam0)
		{
			return 1;
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
	}
	return 0;
}











void func_276(int iParam0, int iParam1, bool bParam2)//Position - 0x1832A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (bParam2)
			{
				VEHICLE::DELETE_VEHICLE(&iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		}
	}
}

int func_277(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)//Position - 0x1835F
{
	struct<3> Var0;
	
	if (!GlobalFunc_105(Param1))
	{
	}
	if (fParam4 != 0f)
	{
	}
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[3 /*19*/]))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				GlobalFunc_9808(&(Local_4993[3 /*19*/]), 2, Param1, fParam4, 1, 0);
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[3 /*19*/], 0))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[3 /*19*/], 1);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_4993[3 /*19*/], 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_4993[3 /*19*/], 0, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[3 /*19*/]);
						return 1;
					}
				}
			}
			break;
		
		case 1:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
				STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
			if (STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					GlobalFunc_9808(&(Local_4993[4 /*19*/]), 0, Param1, fParam4, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[4 /*19*/], 1);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_4993[4 /*19*/], 1);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_4993[4 /*19*/], 1);
							return 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
				STREAMING::REQUEST_MODEL(GlobalFunc_4931(1, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(1, 0));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buffalo")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("buffalo")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[32 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
					GlobalFunc_9808(&(Local_4993[32 /*19*/]), 1, Param1, fParam4, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("buffalo")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[32 /*19*/], 0))
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[32 /*19*/], 1);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_4993[32 /*19*/], 1);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_4993[32 /*19*/], 1);
							return 1;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[5 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("packer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("packer")))
				{
					Local_4993[5 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 1731.78f, 3443.08f, 38.54f, 205.99f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4993[5 /*19*/], 0);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("packer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1731.78f, 3443.08f, 38.54f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4993[5 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[5 /*19*/]);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[5 /*19*/], 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[5 /*19*/], "DH_2B_TRUCK_GROUP", 0);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[6 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("armytrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
				{
					Local_4993[6 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 1728.12f, 3450.66f, 40.74f, 205.34f, 1, 1);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("armytrailer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.12f, 3450.66f, 40.74f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[6 /*19*/]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4993[6 /*19*/], 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_4993[5 /*19*/]))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_4993[5 /*19*/], Local_4993[6 /*19*/], 1065353216);
				}
				else
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_4993[6 /*19*/], 0, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_4993[5 /*19*/], 0, 0);
					return 1;
				}
			}
			break;
		
		case 8:
			if (func_277(7, Param1, fParam4, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
				{
					if (func_277(6, 1729.84f, 3447.04f, 41.36f, 205.41f, 0, 1))
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_4993[1 /*19*/]))
							{
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
								VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_4993[1 /*19*/], Local_4993[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
							}
							else
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0);
								return 1;
							}
						}
					}
				}
			}
			break;
		
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[5 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("packer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("packer")))
				{
					Local_4993[5 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 1728.96f, 3264.86f, 41.22f, 116.4f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4993[5 /*19*/], 0);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("packer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.96f, 3264.86f, 41.22f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[5 /*19*/]);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[5 /*19*/], 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[6 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("armytrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
				{
					Local_4993[6 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 1736.6f, 3268.56f, 43.06f, 115.39f, 1, 1);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("armytrailer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.96f, 3264.86f, 41.22f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[6 /*19*/]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4993[6 /*19*/], 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_4993[5 /*19*/]))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_4993[5 /*19*/], Local_4993[6 /*19*/], 1065353216);
				}
				else
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_4993[6 /*19*/], 0, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_4993[5 /*19*/], 0, 0);
					return 1;
				}
			}
			break;
		
		case 9:
			if (func_277(10, Param1, fParam4, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
				{
					if (func_277(6, 1733f, 3266.85f, 43.81f, 115.47f, 0, 1))
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_4993[1 /*19*/]))
							{
								VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_4993[1 /*19*/], Local_4993[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
							}
							else
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0);
								return 1;
							}
						}
					}
				}
			}
			break;
		
		case 11:
			if (func_277(7, 0f, 0f, 0f, 0, 0, 1))
			{
				if (func_277(6, 1732.576f, 3270.578f, 44.1069f, 139.4393f, 0, 1))
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_4993[1 /*19*/]))
						{
							VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_4993[1 /*19*/], Local_4993[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5903[0]))
						{
							STREAMING::REQUEST_MODEL(joaat("prop_sub_cover_01"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_cover_01")))
							{
								iLocal_5903[0] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 1732.576f, 3270.578f, 54.1069f, 1, 1, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5903[0], Local_4993[1 /*19*/], 0, -0.02f, -2.38f, 0.17f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
						else
						{
							return 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
			{
				func_403(&(uLocal_1023[0]), 0, Param1, fParam4, 1, 0, 0);
			}
			else
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[0]))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_1023[0], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[0], iLocal_1068);
					if (bParam6)
					{
						GlobalFunc_11047(uLocal_1023[0], 49);
						GlobalFunc_11257(uLocal_1023[0], 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						PED::CLEAR_PED_PROP(uLocal_1023[0], 1);
					}
				}
				return 1;
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
			{
				func_403(&(uLocal_1023[1]), 1, Param1, fParam4, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_1023[1], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[1], iLocal_1068);
				if (bParam6)
				{
					GlobalFunc_11047(uLocal_1023[1], 41);
					GlobalFunc_11257(uLocal_1023[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				return 1;
			}
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
			{
				func_403(&(uLocal_1023[2]), 2, Param1, fParam4, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_1023[2], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[2], iLocal_1068);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_1023[2], 1);
				if (bParam6)
				{
					GlobalFunc_11047(uLocal_1023[2], 47);
					GlobalFunc_11257(uLocal_1023[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::CLEAR_PED_PROP(uLocal_1023[2], 0);
					PED::CLEAR_PED_PROP(uLocal_1023[2], 1);
				}
				return 1;
			}
			break;
		
		case 22:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
			{
				if (GlobalFunc_7047(&iLocal_5847, 12, 1743.23f, 3295.97f, 41.11f, -136.36f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5847, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5847, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5847, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5847, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5847, iLocal_1068);
					PED::SET_PED_AS_ENEMY(iLocal_5847, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5847, 1, 0);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_5847))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5847, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5847, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5847, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5847, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5847, iLocal_1068);
					PED::SET_PED_AS_ENEMY(iLocal_5847, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5847, 1, 0);
				}
				return 1;
			}
			break;
		
		case 23:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
				STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(0, 0));
			if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4931(0, 0)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					GlobalFunc_9808(&(Local_4993[4 /*19*/]), 0, 1740.76f, 3294.06f, 40.76f, 247.69f, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[4 /*19*/], 1);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_4993[4 /*19*/], 1);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_4993[4 /*19*/], 1);
							return 1;
						}
					}
				}
			}
			break;
		
		case 24:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				if (GlobalFunc_7047(&iLocal_5846, 24, 1743.55f, 3297.09f, 41.15f, -133.5f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5846, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5846, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5846, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, iLocal_1068);
					PED::SET_PED_CONFIG_FLAG(iLocal_5846, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_5846, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5846, 1, 0);
					GlobalFunc_173(&Local_5660, 4, iLocal_5846, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_5660[4 /*10*/] != iLocal_5846)
				{
					GlobalFunc_173(&Local_5660, 4, iLocal_5846, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_5846))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5846, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5846, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5846, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, iLocal_1068);
					PED::SET_PED_CONFIG_FLAG(iLocal_5846, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_5846, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5846, 1, 0);
				}
				return 1;
			}
			break;
		
		case 20:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				if (GlobalFunc_7047(&iLocal_5846, 24, Param1, fParam4, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5846, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5846, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5846, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, iLocal_1068);
					PED::SET_PED_CONFIG_FLAG(iLocal_5846, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_5846, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5846, 1, 0);
					GlobalFunc_173(&Local_5660, 4, iLocal_5846, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_5660[4 /*10*/] != iLocal_5846)
				{
					GlobalFunc_173(&Local_5660, 4, iLocal_5846, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_5846))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5846, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5846, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5846, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5846, iLocal_1068);
					PED::SET_PED_CONFIG_FLAG(iLocal_5846, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_5846, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5846, 1, 0);
				}
				return 1;
			}
			break;
		
		case 21:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
			{
				if (GlobalFunc_7047(&iLocal_5845, 32, Param1, fParam4, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5845, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5845, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5845, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5845, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5845, iLocal_1068);
					PED::SET_PED_AS_ENEMY(iLocal_5845, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_5845, 151, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5845, 1, 0);
					GlobalFunc_173(&Local_5660, 5, iLocal_5845, "FLOYD", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_5660[3 /*10*/] != iLocal_5845)
				{
					GlobalFunc_173(&Local_5660, 5, iLocal_5845, "FLOYD", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_5845))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_5845, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5845, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_5845, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5845, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5845, iLocal_1068);
					PED::SET_PED_AS_ENEMY(iLocal_5845, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_5845, 151, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5845, 1, 0);
				}
				return 1;
			}
			break;
		
		case 16:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
			}
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					Local_4993[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_4993[0 /*19*/], 1);
					GlobalFunc_743(Local_4993[0 /*19*/], 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[0 /*19*/], 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_4993[0 /*19*/], 1);
					VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 0);
					func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cargobob3")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
						{
							VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_4993[0 /*19*/], 0);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 1);
							VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
							VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_4993[0 /*19*/], 1);
							VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 0);
							func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
							GlobalFunc_743(Local_4993[0 /*19*/], 0);
							return 1;
						}
					}
				}
			}
			break;
		
		case 17:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
			}
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					Local_4993[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_4993[0 /*19*/], 1);
					GlobalFunc_743(Local_4993[0 /*19*/], 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[0 /*19*/], 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_4993[0 /*19*/], 1);
					func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cargobob3")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 1);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
						VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_4993[0 /*19*/], 1);
						func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
						GlobalFunc_743(Local_4993[0 /*19*/], 0);
						return 1;
					}
				}
			}
			break;
		
		case 12:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				STREAMING::REQUEST_MODEL(joaat("submersible"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			STREAMING::REQUEST_MODEL(joaat("submersible"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
					Local_4993[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_4993[0 /*19*/], 1);
					GlobalFunc_743(Local_4993[0 /*19*/], 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 1);
					VEHICLE::SET_VEHICLE_STRONG(Local_4993[0 /*19*/], 1);
					if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_4993[0 /*19*/], 0);
					}
					VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[0 /*19*/], 0);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("submersible")))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
					Local_4993[1 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), Param1.x, Param1.f_1, (Param1.f_2 - 10f), fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4993[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0);
					GlobalFunc_743(Local_4993[1 /*19*/], 1);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("submersible")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						Local_8301 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
						Local_8301 = { Local_8301 + Vector(-10f, 0f, 0f) };
						if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
								return 1;
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(Local_4993[1 /*19*/], Local_8301, 1, 0, 0, 1);
								VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/], -1, 0f, 0f, 1f);
							}
						}
						else
						{
							VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_4993[0 /*19*/], 0);
							VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 1);
							ENTITY::SET_ENTITY_COORDS(Local_4993[1 /*19*/], Local_8301, 1, 0, 0, 1);
							VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/], -1, 0f, 0f, 1f);
						}
					}
				}
			}
			break;
		
		case 6:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("submersible"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("submersible"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("submersible")))
				{
					Local_4993[1 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), Param1, fParam4, 1, 1);
					ENTITY::SET_ENTITY_COORDS(Local_4993[1 /*19*/], Param1, 1, 0, 0, 1);
					GlobalFunc_743(Local_4993[1 /*19*/], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[1 /*19*/], 1);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("submersible"));
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
					STREAMING::REQUEST_COLLISION_AT_COORD(Param1);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("submersible")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
						return 1;
					}
				}
			}
			break;
		
		case 13:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("dinghy"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[2 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")))
				{
					Local_4993[2 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), Param1, fParam4, 1, 1);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("dinghy")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[2 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_4993[2 /*19*/], 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_4993[2 /*19*/], 1000);
						return 1;
					}
				}
			}
			break;
		
		case 18:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_military_pickup_01"));
			}
			STREAMING::REQUEST_MODEL(joaat("prop_military_pickup_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_military_pickup_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
				{
					iLocal_5909[1] = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), Param1, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_5909[1], fParam4);
					ENTITY::SET_ENTITY_ROTATION(iLocal_5909[1], 0f, 0f, -89.8046f, 2, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_5909[1], 0f, 0f, -0.7059f, 0.7083f);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_5909[1], -1255.38f, 6795.72f, -179.1137f, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5909[1], 1);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 33:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("a_c_fish"));
			}
			STREAMING::REQUEST_MODEL(joaat("a_c_fish"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_fish")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5935[1]))
				{
					iLocal_5935[1] = PED::CREATE_PED(26, joaat("a_c_fish"), -1260.04f, 6802.21f, -174.41f, 0, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_5935[1], -159.48f);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_5935[1], 100);
					TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_5935[1], "WORLD_FISH_FLEE", 0, 0);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 27:
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("a_c_sharktiger"));
			}
			STREAMING::REQUEST_MODEL(joaat("a_c_sharktiger"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_sharktiger")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5935[0]))
				{
					iLocal_5935[0] = PED::CREATE_PED(26, joaat("a_c_sharktiger"), -1244.662f, 6783.503f, -177.7454f, 0, 1, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_5935[0], 49.7381f);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_5935[0], 200);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 19:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(joaat("a_c_sharktiger"));
			}
			STREAMING::REQUEST_MODEL(joaat("a_c_sharktiger"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_sharktiger")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5935[2]))
				{
					iLocal_5935[2] = PED::CREATE_PED(26, joaat("a_c_sharktiger"), (Var0.x + 2f), Var0.f_1, Var0.f_2, 0, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_5935[2], 100);
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_5935[2]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5935[2], 1);
					}
					return 1;
				}
			}
			break;
		
		case 25:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[20 /*19*/]))
				{
					func_281(20, joaat("dinghy"), -1393.809f, 6161.465f, 0.505434f, -128.4666f, joaat("s_m_y_blackops_01"), 1, 0, 1, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[20 /*19*/], 700);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[21 /*19*/]))
				{
					func_281(21, joaat("dinghy"), -1387.405f, 6134.791f, 0.492382f, -87.67314f, joaat("s_m_y_blackops_01"), 1, 2, 2, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[21 /*19*/], 700);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[22 /*19*/]))
				{
					func_281(22, joaat("dinghy"), -1369.533f, 6161.245f, 0.307101f, 112.635f, joaat("s_m_y_blackops_01"), 1, 5, 1, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[22 /*19*/], 700);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 28:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(27, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(28, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(29, "DHF2");
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "DHF2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(28, "DHF2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "DHF2"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[27 /*19*/]))
				{
					func_281(27, joaat("dinghy"), -406.5101f, 4449.457f, 27.6139f, 257.3971f, joaat("s_m_y_blackops_01"), 1, 7, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[27 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4993[27 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[27 /*19*/], 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[28 /*19*/]))
				{
					func_281(28, joaat("dinghy"), -441.2678f, 4432.411f, 26.8193f, 280.1574f, joaat("s_m_y_blackops_01"), 1, 8, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[28 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4993[28 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[28 /*19*/], 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[29 /*19*/]))
				{
					func_281(29, joaat("dinghy"), -376.0573f, 4423.987f, 27.5698f, 236.8367f, joaat("s_m_y_blackops_01"), 1, 9, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[29 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4993[29 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[29 /*19*/], 1);
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[27 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[27 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[27 /*19*/], 27, "DHF2", 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[28 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[28 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[28 /*19*/], 28, "DHF2", 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[29 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[29 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[29 /*19*/], 29, "DHF2", 1);
						}
					}
					return 1;
				}
			}
			break;
		
		case 29:
			STREAMING::REQUEST_MODEL(joaat("lazer"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(97, "DHF2");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("lazer")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(97, "DHF2"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[26 /*19*/]))
				{
					func_281(26, joaat("lazer"), 1010.17f, 7373.888f, 433.244f, 100.0127f, joaat("s_m_y_blackops_01"), 1, 10, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[26 /*19*/], 3000);
					GlobalFunc_743(Local_4993[26 /*19*/], 2);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[30 /*19*/]))
				{
					func_281(30, joaat("lazer"), 1010.17f, 7373.888f, 533.244f, -128.4666f, joaat("s_m_y_blackops_01"), 1, 11, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[30 /*19*/], 3000);
					GlobalFunc_743(Local_4993[30 /*19*/], 3);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[31 /*19*/]))
				{
					func_281(31, joaat("lazer"), -214.0745f, 7287.873f, 256.5554f, -128.4666f, joaat("s_m_y_blackops_01"), 1, 12, 0, 0, -1, joaat("weapon_microsmg"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_4993[31 /*19*/], 3000);
					GlobalFunc_743(Local_4993[31 /*19*/], 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[26 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[30 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[31 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[26 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[26 /*19*/], 97, "DHF2", 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[26 /*19*/], 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4993[26 /*19*/], 1.6f);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[30 /*19*/], 97, "DHF2", 1);
						VEHICLE::_0xFAF2A78061FD9EF4(Local_4993[30 /*19*/], -100f, 20f, -10f);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[30 /*19*/], 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4993[30 /*19*/], 1.6f);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[31 /*19*/], 97, "DHF2", 1);
						VEHICLE::_0xFAF2A78061FD9EF4(Local_4993[31 /*19*/], 50f, -20f, -8f);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[31 /*19*/], 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4993[31 /*19*/], 1.6f);
						return 1;
					}
				}
			}
			break;
		
		case 30:
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[0 /*40*/]))
				{
					func_278(0, -1309.16f, 6145.46f, 3.1f, -50.31f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1070[0 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("s_m_y_blackops_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1070[0 /*40*/], 1);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[0 /*40*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[1 /*40*/]))
				{
					func_278(1, -1310.03f, 6122.33f, 3.1f, 156.17f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1070[1 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("s_m_y_blackops_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1070[1 /*40*/], 1);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[1 /*40*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[2 /*40*/]))
				{
					func_278(2, -1308.89f, 6145.38f, 3.1f, -74.23f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1070[2 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("s_m_y_blackops_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1070[2 /*40*/], 1);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[2 /*40*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[3 /*40*/]))
				{
					func_278(3, -1311.39f, 6123.26f, 3.01f, -97.4f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1070[3 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("s_m_y_blackops_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1070[3 /*40*/], 1);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[3 /*40*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1070[4 /*40*/]))
				{
					func_278(4, -1293.21f, 6134.04f, 3.1f, -80.79f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_1070[4 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("s_m_y_blackops_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1070[4 /*40*/], 1);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_1070[4 /*40*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 31:
			STREAMING::REQUEST_MODEL(joaat("prop_lev_des_barge_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_lev_des_barge_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5903[1]))
				{
					iLocal_5903[1] = OBJECT::CREATE_OBJECT(joaat("prop_lev_des_barge_01"), -1301.52f, 6128.91f, -0.79f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_5903[1], -3.45f, 2.11f, -33.1f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5903[1], 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_5903[1], 2500);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5903[2]))
				{
					iLocal_5903[2] = OBJECT::CREATE_OBJECT(joaat("prop_lev_des_barge_01"), -1316.14f, 6137.97f, -0.63f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_5903[2], 0f, 0f, -33.55f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_5903[2], 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_5903[2], 2500);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 32:
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 1;
			}
			break;
		
		case 26:
			if (bParam5)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buzzard"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[23 /*19*/]))
				{
					func_281(23, joaat("buzzard"), -1393.809f, 6161.465f, 24.50543f, -128.4666f, joaat("s_m_y_blackops_01"), 1, 7, 1, 0, -1, joaat("weapon_microsmg"));
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[23 /*19*/], 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[24 /*19*/]))
				{
					func_281(24, joaat("buzzard"), -1387.405f, 6134.791f, 27.49238f, -87.67314f, joaat("s_m_y_blackops_01"), 1, 9, 1, 0, -1, joaat("weapon_microsmg"));
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[24 /*19*/], 1);
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_278(int iParam0, struct<3> Param1, int iParam4, bool bParam5, int iParam6)//Position - 0x1A46A
{
	char cVar0[24];
	
	TASK::REMOVE_COVER_POINT(Local_1070[iParam0 /*40*/].f_13);
	Local_1070[iParam0 /*40*/] = PED::CREATE_PED(26, Local_1070[iParam0 /*40*/].f_7, Param1, iParam4, 1, 1);
	if (bParam5)
	{
		Local_1070[iParam0 /*40*/].f_1 = GlobalFunc_6797(Local_1070[iParam0 /*40*/], 1, 145);
		HUD::SET_BLIP_SCALE(Local_1070[iParam0 /*40*/].f_1, 0.5f);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_1070[iParam0 /*40*/]);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1070[iParam0 /*40*/], 1);
	GlobalFunc_593(Local_1070[iParam0 /*40*/], 1);
	GlobalFunc_593(Local_1070[iParam0 /*40*/], 1);
	PED::SET_PED_MONEY(Local_1070[iParam0 /*40*/], 0);
	ENTITY::SET_ENTITY_HEALTH(Local_1070[iParam0 /*40*/], 110);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1070[iParam0 /*40*/], 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1070[iParam0 /*40*/], iLocal_1069);
	WEAPON::GIVE_WEAPON_TO_PED(Local_1070[iParam0 /*40*/], Local_1070[iParam0 /*40*/].f_6, 999, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_1070[iParam0 /*40*/], Local_1070[iParam0 /*40*/].f_6, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1070[iParam0 /*40*/], iParam6);
	PED::SET_PED_AS_ENEMY(Local_1070[iParam0 /*40*/], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1070[iParam0 /*40*/], 1, 0);
	PED::SET_PED_COMBAT_MOVEMENT(Local_1070[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_RANGE(Local_1070[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ABILITY(Local_1070[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_1070[iParam0 /*40*/], 49, 1);
	PED::SET_PED_ACCURACY(Local_1070[iParam0 /*40*/], 10);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_1070[iParam0 /*40*/], 1);
	StringCopy(&cVar0, "Enemy ", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	PED::SET_PED_NAME_DEBUG(Local_1070[iParam0 /*40*/], &cVar0);
}



void func_281(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1A6D4
{
	int iVar0;
	
	Local_4993[iParam0 /*19*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (iParam0 != 2)
	{
		if (iParam11 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4993[iParam0 /*19*/], iParam11);
		}
	}
	if (bParam7)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[iParam0 /*19*/], -1))
		{
			Local_3271[iParam8 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4993[iParam0 /*19*/], 26, iParam6, -1, 1, 1);
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_3271[iParam8 /*40*/], iParam12, 999, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_3271[iParam8 /*40*/], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3271[iParam8 /*40*/], iLocal_1069);
		PED::SET_PED_AS_ENEMY(Local_3271[iParam8 /*40*/], 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3271[iParam8 /*40*/], 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[iParam8 /*40*/], 1);
		PED::SET_PED_MONEY(Local_3271[iParam8 /*40*/], 0);
		PED::SET_PED_ACCURACY(Local_3271[iParam8 /*40*/], 3);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4993[iParam0 /*19*/], 1);
		PED::_0xF2BEBCDFAFDAA19E(0);
		PED::SET_PED_DIES_WHEN_INJURED(Local_3271[iParam8 /*40*/], 1);
		if (Local_3271[iParam8 /*40*/] != 0)
		{
			GlobalFunc_593(Local_3271[iParam8 /*40*/], 1);
		}
	}
	if (iParam9 > 0)
	{
		if (iParam9 > VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_4993[iParam0 /*19*/]))
		{
			iParam9 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_4993[iParam0 /*19*/]);
		}
		iVar0 = 1;
		while (iVar0 <= iParam9)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[iParam0 /*19*/], (iVar0 - 1)))
			{
				Local_3271[(iParam8 + iVar0) /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4993[iParam0 /*19*/], 26, iParam6, (iVar0 - 1), 1, 1);
			}
			PED::SET_PED_MONEY(Local_3271[iParam8 + 1 /*40*/], 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_3271[(iParam8 + iVar0) /*40*/], joaat("weapon_carbinerifle"), 200, 1, 1);
			PED::SET_PED_COMBAT_ABILITY(Local_3271[(iParam8 + iVar0) /*40*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_3271[(iParam8 + iVar0) /*40*/], 13, 1);
			PED::SET_PED_ACCURACY(Local_3271[(iParam8 + iVar0) /*40*/], 5);
			PED::SET_PED_COMBAT_MOVEMENT(Local_3271[(iParam8 + iVar0) /*40*/], 2);
			PED::SET_PED_COMBAT_RANGE(Local_3271[(iParam8 + iVar0) /*40*/], 2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3271[(iParam8 + iVar0) /*40*/], iLocal_1069);
			PED::SET_PED_AS_ENEMY(Local_3271[(iParam8 + iVar0) /*40*/], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[(iParam8 + iVar0) /*40*/], 1);
			ENTITY::SET_ENTITY_PROOFS(Local_4993[iParam0 /*19*/], 0, 0, 0, iParam10, iParam10, 0, 0, 0);
			PED::_0xF2BEBCDFAFDAA19E(0);
			PED::SET_PED_DIES_WHEN_INJURED(Local_3271[(iParam8 + iVar0) /*40*/], 1);
			GlobalFunc_593(Local_3271[(iParam8 + iVar0) /*40*/], 1);
			iVar0++;
		}
	}
}

void func_282(int iParam0, int iParam1)//Position - 0x1A91B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam1 >= 90)
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.75f);
		}
		else if (iParam1 >= 80)
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.8f);
		}
		else if (iParam1 >= 70)
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.85f);
		}
		else if (iParam1 >= 60)
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.9f);
		}
		else if (iParam1 >= 50)
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.95f);
		}
		else
		{
			VEHICLE::_0xE5810AC70602F2F5(iParam0, 1f);
		}
	}
}

























































































































int func_403(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x36CB0
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11318(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11333(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}





















































































































































































void func_584()//Position - 0x67D56
{
	switch (iLocal_8316)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4993[1 /*19*/]))
				{
					iLocal_8318 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
					if (iLocal_8318 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG1", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 2)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG2", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 3)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG3", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 4)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG4", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 5)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG5", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 6)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_BANG6", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
					else if (iLocal_8318 == 7)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_GENBANG", 8, 0, 0, 0))
							{
								iLocal_8317 = MISC::GET_GAME_TIMER();
								iLocal_8316++;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_COOLMC", 8, 0, 0, 0))
				{
					iLocal_8317 = MISC::GET_GAME_TIMER();
					iLocal_8316++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_8317, MISC::GET_RANDOM_INT_IN_RANGE(10000, 16000)))
			{
				iLocal_8316 = 0;
			}
			break;
	}
}


void func_586()//Position - 0x67F8F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	int iVar14;
	
	if (GlobalFunc_8315() == 1)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		GlobalFunc_460();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_4993[0 /*19*/], 300f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
		}
	}
	CAM::_0x4008EDF7D6E48175(1);
	if (!PED::IS_PED_INJURED(uLocal_1023[1]))
	{
		PED::SET_PED_FIRING_PATTERN(uLocal_1023[1], -753768974);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_1023[1], 0);
	}
	if (GlobalFunc_8315() == 1)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_4993[0 /*19*/], 0, iLocal_1069);
		}
	}
	else
	{
		iVar0 = uLocal_1023[1];
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_4993[0 /*19*/], 1, iLocal_1069);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_4993[12 /*19*/]))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_4993[12 /*19*/], 1) };
		if (Var1.f_2 > 4.5f || Var1.f_2 < -4f)
		{
			if ((!ENTITY::IS_ENTITY_IN_WATER(Local_4993[12 /*19*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[12 /*19*/])) && !CAM::IS_SPHERE_VISIBLE(-1049.782f, 5635.912f, 0.8559f, 5f))
			{
				ENTITY::SET_ENTITY_COORDS(Local_4993[12 /*19*/], -1049.782f, 5635.912f, 0.8559f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4993[12 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_4993[13 /*19*/]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_4993[13 /*19*/], 1) };
		if (Var4.f_2 > 4.5f || Var4.f_2 < -4f)
		{
			if ((!ENTITY::IS_ENTITY_IN_WATER(Local_4993[13 /*19*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[13 /*19*/])) && !CAM::IS_SPHERE_VISIBLE(-1039.442f, 5640.936f, 0.9954f, 5f))
			{
				ENTITY::SET_ENTITY_COORDS(Local_4993[13 /*19*/], -1039.442f, 5640.936f, 0.9954f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4993[13 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
			}
		}
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 95, 1);
		WEAPON::GET_AMMO_IN_CLIP(iVar0, joaat("weapon_combatmg"), &iVar8);
		if (PED::IS_PED_RELOADING(iVar0) || iVar8 <= 0)
		{
			if (iLocal_8300 != 2)
			{
				TASK::CLEAR_PED_TASKS(iVar0);
			}
		}
		if (iVar7 != joaat("weapon_combatmg"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("weapon_combatmg"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("weapon_combatmg"), joaat("component_combatmg_clip_02"));
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 1);
			WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("weapon_combatmg"), 100);
		}
		else
		{
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 1);
			WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("weapon_combatmg"), 100);
		}
	}
	func_704();
	if (iLocal_6092 > 0)
	{
		if (iLocal_6092 < 4)
		{
			func_702(&Local_1070);
			func_702(&Local_3271);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
			}
		}
	}
	if (GlobalFunc_588(&iLocal_8341, 5000))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5866))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5866, 0);
		}
	}
	if (iLocal_6092 > 1)
	{
		func_653(0, 0, 1, 1, 0, 1);
		func_651();
		func_650(&(Local_4993[10 /*19*/].f_8));
		func_649(&(Local_4993[11 /*19*/].f_8));
	}
	switch (iLocal_6092)
	{
		case 0:
			iLocal_6032 = 0;
			iLocal_6089 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_4993[0 /*19*/], 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
				ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_combatmg"), 31, 0);
			GlobalFunc_619(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_ENEMIES"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
			}
			AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
			GlobalFunc_5652(&Local_6574, 1, 0);
			GlobalFunc_2781(500);
			iLocal_6099 = 0;
			GlobalFunc_238(iLocal_6099);
			iLocal_8357 = 0;
			iLocal_8300 = 0;
			iLocal_8350 = 0;
			GlobalFunc_7621(94, 1, 0, 1, 0);
			GlobalFunc_Checkpoint1(7, "Defend Against Merryweather", 0, 0, 0, 1);
			func_647();
			iLocal_6095 = MISC::GET_GAME_TIMER();
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			iLocal_8361 = 0;
			bLocal_5849 = false;
			iLocal_8353 = 0;
			STREAMING::REQUEST_ANIM_DICT("missheistdocks2bcarbob_cams");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_8367 = MISC::GET_GAME_TIMER();
			iLocal_6092++;
			break;
		
		case 1:
			if (GlobalFunc_9194(&Local_6574, 1754.472f, 3283.072f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_4993[0 /*19*/], "DS2_FLYTD", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (Var9.f_1 >= 6280f)
					{
						fVar12 = -1018f;
					}
					else
					{
						fVar12 = -1180f;
					}
					if (Var9.x >= fVar12 && GlobalFunc_588(&iLocal_8367, 17000))
					{
						GlobalFunc_5652(&Local_6574, 1, 0);
						GlobalFunc_4935();
						GlobalFunc_729(&uLocal_1023, 0, 0);
						GlobalFunc_729(&uLocal_1023, 1, 1);
						GlobalFunc_729(&uLocal_1023, 2, 1);
						iLocal_8367 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(uLocal_1023[1]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[1], 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[1], 3, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[1], 2, 1);
							PED::SET_PED_ACCURACY(uLocal_1023[1], 100);
							PED::SET_PED_FIRING_PATTERN(uLocal_1023[1], -957453492);
							PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_1023[1], 1000f, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_4993[1 /*19*/], 1, 0);
							}
						}
						iLocal_8368 = 0;
						iLocal_6092++;
					}
					else if (!func_794("DS2A_P7"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P7", 8, 0, 0, 0))
								{
									func_791("DS2A_P7", 1);
								}
							}
						}
					}
					else if (!func_794("DS2A_EXPL"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_EXPL", 8, 0, 0, 0))
								{
									func_791("DS2A_EXPL", 1);
								}
							}
						}
					}
					else if (!func_794("DS2A_PISSD"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_PISSD", 8, 0, 0, 0))
								{
									func_791("DS2A_PISSD", 1);
								}
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
						{
							if (func_794("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_6574.f_5, 255);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
								{
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
								}
								if (GlobalFunc_663("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									HUD::REMOVE_BLIP(&uLocal_6046);
								}
								func_791("DROPPED THE SUB", 0);
							}
						}
						else if (!func_794("DROPPED THE SUB"))
						{
							if (iLocal_6089 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									if (GlobalFunc_620())
									{
										HUD::CLEAR_PRINTS();
										GlobalFunc_619(0);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
							}
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_6574.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									uLocal_6046 = GlobalFunc_6783(Local_4993[1 /*19*/], 0, 0);
									GlobalFunc_5884("DS2_GIPOSFSUB");
								}
							}
							func_791("DROPPED THE SUB", 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!iLocal_8368)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_8367 + 1000)
				{
					GlobalFunc_729(&uLocal_1023, 0, 0);
					GlobalFunc_729(&uLocal_1023, 1, 0);
					GlobalFunc_729(&uLocal_1023, 2, 1);
					GlobalFunc_2518(&uLocal_1023, 1, 1);
					iLocal_8368 = 1;
				}
			}
			if (GlobalFunc_8315() != 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1023[1], -1442466670) == 7)
					{
						PED::SET_PED_ACCURACY(uLocal_1023[1], 100);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[1], 23, 0);
						PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
						PED::SET_PED_FIRING_PATTERN(uLocal_1023[1], -957453492);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_1023[1], 1000f, 0);
					}
				}
			}
			if (!func_794("DS2A_SBOATS"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SBOATS", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
							func_791("DS2A_SBOATS", 1);
						}
					}
				}
			}
			else if (!func_794("DS2A_P6c"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6c", 8, 0, 0, 0))
					{
						func_791("DS2A_P6c", 1);
					}
				}
			}
			else
			{
				if (GlobalFunc_588(&iLocal_8367, 40000))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bcarbob_cams"))
					{
						if (GlobalFunc_663("DS2_S2FH", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_AS_MICHAEL"))
						{
							AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
						}
						iLocal_6092++;
					}
				}
				if (GlobalFunc_8315() != 1)
				{
					if (!GlobalFunc_5172(&Local_6574, 2))
					{
						if (GlobalFunc_588(&iLocal_8367, 4000))
						{
							if (!func_794("DS2_S2FH"))
							{
								GlobalFunc_5884("DS2_S2FH");
								func_791("DS2_S2FH", 1);
							}
						}
					}
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bcarbob_cams"))
				{
					if (GlobalFunc_663("DS2_S2FH", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
					PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_CLEAR_MERRY");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_AS_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
					}
					iLocal_6092++;
				}
			}
			if (iLocal_6092 > 2)
			{
				GlobalFunc_574(633, 0);
			}
			break;
		
		case 3:
			if (GlobalFunc_8315() != 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1023[1], -1442466670) == 7)
					{
						PED::SET_PED_ACCURACY(uLocal_1023[1], 100);
						PED::SET_PED_FIRING_PATTERN(uLocal_1023[1], -957453492);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_1023[1], 1000f, 0);
					}
				}
			}
			else
			{
				GlobalFunc_2518(&uLocal_1023, 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				Local_8346 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
			}
			VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(200f);
			func_642();
			if (func_625())
			{
				GlobalFunc_571(1, 633);
				GlobalFunc_5105();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
				{
					OBJECT::DELETE_OBJECT(&iLocal_5831);
				}
				iVar13 = 0;
				while (iVar13 <= 39)
				{
					GlobalFunc_589(&(Local_3271[iVar13 /*40*/].f_23));
					iVar13++;
				}
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
				AUDIO::TRIGGER_MUSIC_EVENT("DH2B_ALL_DEAD");
				iLocal_8369 = MISC::GET_GAME_TIMER();
				Local_6114.f_12 = uLocal_1023[0];
				GlobalFunc_9134(&uLocal_1023, 0);
				if (GlobalFunc_8315() == 1)
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				}
				else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_1023[1], 1);
				}
				iLocal_6092++;
			}
			else if (GlobalFunc_8315() == 1)
			{
			}
			else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_1023[1], 1);
			}
			break;
		
		case 4:
			func_611();
			if (!func_794("DS2A_P6k"))
			{
				if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6k", 8, 0, 0, 0))
				{
					func_791("DS2A_P6k", 1);
					iLocal_6089 = 1;
				}
			}
			else if (GlobalFunc_8315() != 0)
			{
				if (!GlobalFunc_5172(&Local_6574, 2))
				{
					if (!func_794("DS2_S2MH"))
					{
						GlobalFunc_729(&uLocal_1023, 0, 0);
						GlobalFunc_729(&uLocal_1023, 1, 1);
						GlobalFunc_729(&uLocal_1023, 2, 1);
						GlobalFunc_5884("DS2_S2MH");
						GlobalFunc_2518(&uLocal_1023, 0, 1);
						HUD::CLEAR_HELP(1);
						func_791("DS2_S2MH", 1);
					}
				}
				if (GlobalFunc_588(&iLocal_8369, 12000))
				{
					if (!GlobalFunc_10239(&Local_6114, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
					{
					}
					else if (Local_6114.f_18)
					{
						if (!Local_6114.f_19)
						{
							if (func_60(&uLocal_1023, 1, 1, 0))
							{
								Local_6114.f_19 = 1;
							}
						}
					}
				}
			}
			else
			{
				GlobalFunc_2518(&uLocal_1023, 0, 0);
				if (GlobalFunc_663("DS2_S2MH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::CLEAR_HELP(1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_4993[1 /*19*/], 1, 0);
				}
				iVar14 = 0;
				while (iVar14 <= 39)
				{
					GlobalFunc_589(&(Local_3271[iVar14 /*40*/].f_23));
					iVar14++;
				}
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4993[0 /*19*/], 2, 0);
				iLocal_6092++;
			}
			break;
		
		case 5:
			func_587();
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 0);
			CAM::DO_SCREEN_FADE_IN(2500);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_5993 = 0;
			iLocal_6092 = 0;
			iLocal_6032 = 0;
			iLocal_7010 = 10;
			break;
	}
}

void func_587()//Position - 0x68D6B
{
	if (((((((((((((((((((((((((((((((((((PED::IS_PED_INJURED(Local_3271[0 /*40*/]) && PED::IS_PED_INJURED(Local_3271[1 /*40*/])) && PED::IS_PED_INJURED(Local_3271[2 /*40*/])) && PED::IS_PED_INJURED(Local_3271[3 /*40*/])) && PED::IS_PED_INJURED(Local_3271[4 /*40*/])) && PED::IS_PED_INJURED(Local_3271[5 /*40*/])) && PED::IS_PED_INJURED(Local_3271[6 /*40*/])) && PED::IS_PED_INJURED(Local_3271[7 /*40*/])) && PED::IS_PED_INJURED(Local_3271[8 /*40*/])) && PED::IS_PED_INJURED(Local_3271[9 /*40*/])) && PED::IS_PED_INJURED(Local_3271[10 /*40*/])) && PED::IS_PED_INJURED(Local_3271[11 /*40*/])) && PED::IS_PED_INJURED(Local_3271[12 /*40*/])) && PED::IS_PED_INJURED(Local_3271[13 /*40*/])) && PED::IS_PED_INJURED(Local_3271[14 /*40*/])) && PED::IS_PED_INJURED(Local_3271[15 /*40*/])) && PED::IS_PED_INJURED(Local_3271[16 /*40*/])) && PED::IS_PED_INJURED(Local_3271[17 /*40*/])) && PED::IS_PED_INJURED(Local_3271[18 /*40*/])) && PED::IS_PED_INJURED(Local_3271[19 /*40*/])) && PED::IS_PED_INJURED(Local_3271[24 /*40*/])) && PED::IS_PED_INJURED(Local_3271[25 /*40*/])) && PED::IS_PED_INJURED(Local_3271[26 /*40*/])) && PED::IS_PED_INJURED(Local_3271[27 /*40*/])) && PED::IS_PED_INJURED(Local_3271[28 /*40*/])) && PED::IS_PED_INJURED(Local_3271[29 /*40*/])) && PED::IS_PED_INJURED(Local_3271[30 /*40*/])) && PED::IS_PED_INJURED(Local_3271[31 /*40*/])) && PED::IS_PED_INJURED(Local_3271[32 /*40*/])) && PED::IS_PED_INJURED(Local_3271[33 /*40*/])) && PED::IS_PED_INJURED(Local_3271[34 /*40*/])) && PED::IS_PED_INJURED(Local_3271[35 /*40*/])) && PED::IS_PED_INJURED(Local_3271[36 /*40*/])) && PED::IS_PED_INJURED(Local_3271[37 /*40*/])) && PED::IS_PED_INJURED(Local_3271[38 /*40*/])) && PED::IS_PED_INJURED(Local_3271[39 /*40*/]))
	{
		GlobalFunc_553(632);
	}
}
























void func_611()//Position - 0x69AD2
{
	float fVar0;
	bool bVar1;
	
	if (CAM::DOES_CAM_EXIST(uLocal_8352))
	{
		CAM::DESTROY_CAM(iLocal_8352, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		func_620(iLocal_8300 == 0);
	}
	if (bLocal_5849 == 1)
	{
		if (GlobalFunc_8315() == 1)
		{
			fVar0 = 0.4f;
			if (MISC::IS_PC_VERSION() && GRAPHICS::_GET_ASPECT_RATIO(1) > 1.8f)
			{
				fVar0 = 0.2f;
			}
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
			CAM::_CLAMP_GAMEPLAY_CAM_YAW(-20f, 50f);
			CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-60f, 0f);
			CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(1f, 1f);
			CAM::SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(fVar0);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		}
		switch (iLocal_8300)
		{
			case 0:
				if (((!GlobalFunc_579() && !GlobalFunc_126(1)) && !func_618(1)) && !GlobalFunc_5885(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 51))
					{
						if (iLocal_8351)
						{
							iLocal_8355 = 2;
							func_615();
						}
						else
						{
							iLocal_8355 = 1;
							func_614();
						}
					}
				}
				break;
			
			case 1:
				if (((!GlobalFunc_579() && !GlobalFunc_126(1)) && !func_618(1)) && !GlobalFunc_5885(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 51))
					{
						if (iLocal_8351 || iLocal_8350)
						{
							iLocal_8355 = 2;
							func_615();
						}
						else
						{
							iLocal_8355 = 0;
							func_612();
						}
					}
				}
				break;
			
			case 2:
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				if (((!GlobalFunc_579() && !GlobalFunc_126(1)) && !func_618(1)) && !GlobalFunc_5885(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 51))
					{
						bVar1 = false;
						if (!iLocal_8354)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
							{
								iLocal_8355 = 1;
								func_614();
								iLocal_8354 = 1;
								bVar1 = true;
							}
						}
						if (!bVar1)
						{
							iLocal_8355 = 0;
							func_612();
						}
					}
				}
				break;
			}
	}
}

void func_612()//Position - 0x69CB6
{
	if (GlobalFunc_74("DS2_SWITCHS") || GlobalFunc_74("DS2_SWITCHS2"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_791("DS2_SWITCHS", 1);
	if (GlobalFunc_8315() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_613();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]))
				{
					ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 1))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 1);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 1);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
			func_791("GO TO REAR", 0);
			bLocal_5849 = false;
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
			iLocal_8353 = 0;
			iLocal_8300 = 0;
		}
	}
	else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[1], 0))
			{
				ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
			}
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 1))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
		}
		func_791("GO TO REAR", 0);
		bLocal_5849 = false;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", uLocal_1023[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
		iLocal_8300 = 0;
	}
}

void func_613()//Position - 0x69E4A
{
	iLocal_8352 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	CAM::SET_CAM_COORD(iLocal_8352, CAM::GET_GAMEPLAY_CAM_COORD() + ENTITY::GET_ENTITY_VELOCITY(Local_4993[0 /*19*/]) * FtoV(MISC::GET_FRAME_TIME()));
	CAM::SET_CAM_ROT(iLocal_8352, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
	CAM::SET_CAM_FOV(iLocal_8352, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_614()//Position - 0x69E9F
{
	if (GlobalFunc_74("DS2_SWITCHS") || GlobalFunc_74("DS2_SWITCHS2"))
	{
	}
	func_791("DS2_SWITCHS", 1);
	if (GlobalFunc_8315() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_613();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]))
				{
					ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 2))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 2);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 1);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
			func_791("GO TO REAR", 0);
			bLocal_5849 = false;
			func_791("FORCE CAM INTO POSITION", 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
			if (iLocal_8353 == 1)
			{
			}
			iLocal_8353 = 0;
			iLocal_8300 = 1;
		}
	}
	else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
		if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[1], 0))
			{
				ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 2))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 2);
		}
		func_791("GO TO REAR", 0);
		bLocal_5849 = false;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", uLocal_1023[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
		iLocal_8300 = 1;
	}
}

void func_615()//Position - 0x6A03F
{
	if (GlobalFunc_74("DS2_SWITCHS") || GlobalFunc_74("DS2_SWITCHS2"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_791("DS2_SWITCHS", 1);
	if (GlobalFunc_8315() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatmg"), joaat("component_combatmg_clip_02"));
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1, 0.0477f, -3.6f, 0.2f, 0f, 0f, 180f, 1, 0, 1, 1, 2, 1);
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 1);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		bLocal_5849 = true;
		iLocal_8351 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
		iLocal_8353 = 0;
		iLocal_8300 = 2;
	}
	else if (!PED::IS_PED_INJURED(uLocal_1023[1]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[1], 0))
			{
				ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
			}
		}
		ENTITY::SET_ENTITY_VISIBLE(uLocal_1023[1], 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1023[1]);
		PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_1023[1], Local_4993[0 /*19*/], -1, 0.0477f, -3.6f, 0.2f, 0f, 0f, 180f, 1, 0, 1, 1, 2, 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_1023[1], Local_4993[0 /*19*/], 1);
		bLocal_5849 = true;
		iLocal_8351 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", uLocal_1023[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
		iLocal_8300 = 2;
	}
}



int func_618(bool bParam0)//Position - 0x6A369
{
	if (Global_17098.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 19)))
	{
		return 1;
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_CONTROL_JUST_PRESSED(0, 166) || PAD::IS_CONTROL_JUST_PRESSED(0, 167)) || PAD::IS_CONTROL_JUST_PRESSED(0, 168)) || PAD::IS_CONTROL_JUST_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_620(bool bParam0)//Position - 0x6A445
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	var uVar14;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	
	bVar2 = false;
	iVar4 = -1;
	fVar5 = 999999f;
	iVar3 = 10;
	while (iVar3 <= 25)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[iVar3 /*19*/], 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[iVar3 /*19*/], -1)))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[iVar3 /*19*/], 1), 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_4993[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_4993[iVar3 /*19*/], 1)) };
				if ((Var7.x < 0f && bParam0) || (Var7.x > 0f && !bParam0))
				{
					if (fVar6 < fVar5)
					{
						fVar5 = fVar6;
						iVar4 = iVar3;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar4 >= 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[iVar4 /*19*/], 0))
		{
			Var10 = { ENTITY::GET_ENTITY_COORDS(Local_4993[iVar4 /*19*/], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar13 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var10.x, Var10.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar13 > 360f)
			{
				fVar13 = (fVar13 - 360f);
			}
			else if (fVar13 < 0f)
			{
				fVar13 = (fVar13 + 360f);
			}
			if (bParam0)
			{
				if (fVar13 > 180f)
				{
					if (fVar13 > 270f)
					{
						fVar13 = 0f;
					}
					else
					{
						fVar13 = 180f;
					}
				}
			}
			else
			{
				fVar13 = (fVar13 - 360f);
				if (fVar13 < -180f)
				{
					if (fVar13 < -270f)
					{
						fVar13 = 0f;
					}
					else
					{
						fVar13 = 180f;
					}
				}
			}
			Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_4993[iVar4 /*19*/], 1)) };
			fVar18 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_4993[iVar4 /*19*/], 0);
			fVar19 = Var15.f_2;
			uVar14 = MISC::ATAN((fVar19 / fVar18));
			fVar0 = fVar13;
			fVar1 = uVar14;
		}
		else
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bParam0)
		{
			fVar0 = 90f;
		}
		else
		{
			fVar0 = -90f;
		}
		fVar1 = 0f;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar1, 1065353216);
}





int func_625()//Position - 0x6A776
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	func_640(10, 0);
	func_640(11, 0);
	func_640(14, 1);
	func_640(15, 1);
	func_640(16, 1);
	func_640(17, 1);
	func_640(18, 1);
	func_640(19, 1);
	func_640(12, 0);
	func_640(13, 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_8357 > 0)
	{
	}
	if (iLocal_8357 > 2)
	{
		if (iLocal_8355 == 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_4993[12 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[13 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_4993[14 /*19*/]))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[12 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[13 /*19*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
				{
					if (!func_794("DS2A_RIGHTDR"))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_RIGHTDR", 8, 0, 0, 0))
							{
								func_791("DS2A_RIGHTDR", 1);
							}
						}
					}
				}
			}
		}
		func_639();
		func_638(&(Local_4993[12 /*19*/].f_8));
		func_633(&(Local_4993[13 /*19*/].f_8));
		func_632(&(Local_4993[14 /*19*/].f_8));
	}
	if (iLocal_8357 > 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[14 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_01_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_01_ARRIVES");
				}
			}
		}
	}
	if (iLocal_8357 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[19 /*19*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
			{
				if (!func_794("DS2A_MOREHEL"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_MOREHEL", 8, 0, 0, 0))
						{
							func_791("DS2A_MOREHEL", 1);
						}
					}
				}
			}
		}
		func_631(&(Local_4993[18 /*19*/].f_8));
		func_630(&(Local_4993[19 /*19*/].f_8));
	}
	if (iLocal_8357 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[18 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_02_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
				}
			}
			if (!func_794("DS2A_P6i_1"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6i", 8, 0, 0, 0))
					{
						func_791("DS2A_P6i_1", 1);
					}
				}
			}
		}
	}
	if (iLocal_8357 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[17 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[16 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
			{
				if (!func_794("DS2A_MHELI"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_MHELI", 8, 0, 0, 0))
						{
							func_791("DS2A_MHELI", 1);
						}
					}
				}
			}
		}
		func_629(&(Local_4993[16 /*19*/].f_8));
		func_626(&(Local_4993[17 /*19*/].f_8));
	}
	if (iLocal_8357 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[17 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_03_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_03_ARRIVES");
				}
				if (!func_794("DS2A_P6i_2"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6i", 8, 0, 0, 0))
						{
							func_791("DS2A_P6i_2", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_8361)
	{
		func_611();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		Local_8343 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
	}
	if (iLocal_8357 >= 4)
	{
		if (GlobalFunc_8315() == 0)
		{
			if (!iLocal_8365)
			{
				GlobalFunc_Display_Help_Text("DS2_SWITCHS2");
				iLocal_8365 = 1;
			}
		}
	}
	if (iLocal_8357 >= 3 && iLocal_8357 <= 6)
	{
		if (GlobalFunc_8315() == 1)
		{
			if (!func_794("DS2_SWITCHS"))
			{
				GlobalFunc_Display_Help_Text("DS2_SWITCHS");
				func_791("DS2_SWITCHS", 1);
			}
		}
	}
	switch (iLocal_8357)
	{
		case 0:
			if (!GlobalFunc_5172(&Local_6574, 2))
			{
				GlobalFunc_5884("DS2_DEFTM");
				bLocal_5849 = false;
				iLocal_8351 = 0;
				iLocal_8365 = 0;
				iLocal_8354 = 0;
				iLocal_8355 = 0;
				iLocal_8357++;
			}
			break;
		
		case 1:
			if ((Local_8343.x < -1030f && (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[10 /*19*/], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[11 /*19*/], 0))) && !func_794("DS2A_P6d"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6d", 8, 0, 0, 0))
					{
						func_791("DS2A_P6d", 1);
					}
				}
			}
			else
			{
				iLocal_8359 = MISC::GET_GAME_TIMER();
				iLocal_8360 = MISC::GET_GAME_TIMER() + 11000;
				iLocal_8357++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[10 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[11 /*19*/]))
			{
				if (Local_8343.f_1 > 6280f)
				{
					fVar0 = -730f;
				}
				else
				{
					fVar0 = -970f;
				}
				if ((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[10 /*19*/], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[11 /*19*/], 0)) || PED::IS_PED_INJURED(Local_3271[0 /*40*/])) || PED::IS_PED_INJURED(Local_3271[4 /*40*/])) || GlobalFunc_588(&iLocal_8359, 90000)) || Local_8343.x > fVar0) || (GlobalFunc_8315() != 1 && GlobalFunc_588(&iLocal_8359, 30000)))
				{
					iLocal_8359 = MISC::GET_GAME_TIMER();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_01_ARRIVES"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_01_ARRIVES");
					}
					iLocal_8361 = 1;
					iLocal_8357++;
				}
			}
			break;
		
		case 3:
			if (!func_794("DS2A_P6e"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6e", 8, 0, 0, 0))
					{
						func_791("DS2A_P6e", 1);
					}
				}
			}
			else
			{
				iLocal_8361 = 1;
				iLocal_8364 = -1;
				iLocal_8357++;
			}
			break;
		
		case 4:
			if (iLocal_8355 == 1)
			{
				if (!func_794("DS2A_P6g"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6g", 8, 0, 0, 0))
						{
							func_791("DS2A_P6g", 1);
						}
					}
				}
			}
			if (iLocal_8364 >= 0)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_8364 + 2000)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_02_ARRIVES"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_HELIS_ARRIVE");
					iLocal_8362 = 0;
					iLocal_8363 = 0;
					iLocal_8364 = -1;
					iLocal_8357++;
				}
			}
			else if ((ENTITY::DOES_ENTITY_EXIST(Local_4993[12 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[13 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_4993[14 /*19*/]))
			{
				iVar1 = 0;
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
				{
					iVar1 = 1;
				}
				else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[14 /*19*/], -1)))
				{
					iVar1 = 1;
				}
				if (iVar1 || GlobalFunc_588(&iLocal_8359, 120000))
				{
					iLocal_8359 = MISC::GET_GAME_TIMER();
					iLocal_8364 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 5:
			if (iLocal_8364 < 0)
			{
				if (!func_794("DS2A_P6mo"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6mo", 8, 0, 0, 0))
						{
							func_791("DS2A_P6mo", 1);
						}
					}
				}
				if (!func_794("Speed up"))
				{
					if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[12 /*19*/], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[13 /*19*/], 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
					{
						func_791("Speed up", 1);
					}
				}
				if (iLocal_8362 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[18 /*19*/], 300f, 300f, 300f, 0, 0, 0))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[18 /*19*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_4993[18 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 195f, -195f, 50f), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_4993[18 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
								VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[18 /*19*/]);
								iLocal_8362 = 1;
							}
						}
						else
						{
							iLocal_8362 = 1;
						}
					}
				}
				if (iLocal_8363 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4993[19 /*19*/], 300f, 300f, 300f, 0, 0, 0))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[19 /*19*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_4993[19 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -135f, -285f, 60f), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_4993[19 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
								VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[19 /*19*/]);
								iLocal_8363 = 1;
							}
						}
						else
						{
							iLocal_8363 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[19 /*19*/]))
				{
					bVar2 = true;
					bVar3 = true;
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
					{
						bVar2 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[18 /*19*/], -1)))
					{
						bVar2 = false;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
					{
						bVar3 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[19 /*19*/], -1)))
					{
						bVar3 = false;
					}
					if (!bVar2 && !bVar3)
					{
						iLocal_8364 = MISC::GET_GAME_TIMER();
						AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HELICOPTER_DOOR_SMASH", 0);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_8364 + 2500)
			{
				iLocal_8349 = MISC::GET_GAME_TIMER();
				iLocal_8364 = -1;
				iLocal_8357++;
			}
			break;
		
		case 6:
			if (!func_794("DS2A_P6f"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6f", 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
						func_791("DS2A_P6f", 1);
					}
				}
			}
			else
			{
				iLocal_8351 = 1;
				iLocal_8350 = 1;
				iLocal_8357++;
			}
			break;
		
		case 7:
			if (bLocal_5849)
			{
				if (GlobalFunc_663("DS2_GETREAR", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				GlobalFunc_5105();
				if (!func_794("DS2A_P6g"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6g", 8, 0, 0, 0))
						{
							func_791("DS2A_P6g", 1);
						}
					}
				}
				else
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
					AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_03_ARRIVES");
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Door_Open", "DOCKS_HEIST_FINALE_2B_SOUNDS", 1);
					iLocal_8358 = MISC::GET_GAME_TIMER();
					iLocal_8362 = 0;
					iLocal_8363 = 0;
					iLocal_8357++;
				}
			}
			else if (!func_794("DS2_GETREAR"))
			{
				if (!GlobalFunc_5172(&Local_6574, 2))
				{
					GlobalFunc_5884("DS2_GETREAR");
					func_791("DS2_SWITCHS", 0);
					func_791("DS2_GETREAR", 1);
				}
			}
			else if (GlobalFunc_8315() == 1)
			{
				if (!func_794("DS2_SWITCHS"))
				{
					GlobalFunc_Display_Help_Text("DS2_SWITCHS");
					func_791("DS2_SWITCHS", 1);
				}
			}
			else if (!func_794("DS2_SWITCHS"))
			{
				GlobalFunc_Display_Help_Text("DS2_SWITCHS2");
				func_791("DS2_SWITCHS", 1);
			}
			break;
		
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (GlobalFunc_588(&iLocal_8358, 800))
				{
					if (iLocal_8362 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[15 /*19*/], 0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_4993[15 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -45f, -95f, 6f), 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_4993[15 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[15 /*19*/]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_4993[16 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 45f, -65f, 6f), 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_4993[16 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[16 /*19*/]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_4993[17 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 0f, -55f, 10f), 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_4993[17 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[17 /*19*/]);
						}
						iLocal_8362 = 1;
					}
				}
				if (GlobalFunc_588(&iLocal_8358, 1000))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_4993[0 /*19*/], 2, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_4993[0 /*19*/], 2, 0);
					iLocal_8362 = 0;
					iLocal_8357++;
				}
			}
			break;
		
		case 9:
			if (!func_794("DS2A_P6f"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6f", 8, 0, 0, 0))
					{
						func_791("DS2A_P6f", 1);
					}
				}
			}
			else
			{
				iLocal_8359 = MISC::GET_GAME_TIMER();
				iLocal_8357++;
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[17 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
				{
					iLocal_8357++;
				}
			}
			break;
		
		case 11:
			if (iLocal_8364 < 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4993[17 /*19*/]))
				{
					bVar4 = true;
					bVar5 = true;
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
					{
						bVar4 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[16 /*19*/], -1)))
					{
						bVar4 = false;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						bVar5 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[17 /*19*/], -1)))
					{
						bVar5 = false;
					}
					if (!bVar4 && !bVar5)
					{
						iLocal_8364 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_588(&iLocal_8359, 60000))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[15 /*19*/], 0), 1) > 420f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[16 /*19*/], 0), 1) > 420f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[17 /*19*/], 0), 1) > 420f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[15 /*19*/], 0))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_4993[15 /*19*/], 1, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_4993[16 /*19*/], 1, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_4993[17 /*19*/], 1, 0);
							}
						}
					}
				}
				else
				{
					iLocal_8364 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_8364 + 1500)
			{
				iLocal_8362 = 0;
				iLocal_8357 = 99;
			}
			break;
		
		case 99:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[1 /*19*/], 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_626(var uParam0)//Position - 0x6B6E4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
	{
		func_628(&(Local_4993[17 /*19*/].f_12));
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[17 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(17, joaat("buzzard"), Local_4993[17 /*19*/].f_14, Local_4993[17 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 28, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_4993[17 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 0f, -65f, 35f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4993[17 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
				}
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_4993[17 /*19*/], 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), Local_4993[17 /*19*/], Local_3271[28 /*40*/]);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[17 /*19*/], 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[28 /*40*/], joaat("vehicle_weapon_player_buzzard"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[28 /*40*/], 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[17 /*19*/], "DH_2B_HELI_GROUP_03", 0);
				iLocal_5998[17] = 0;
				GlobalFunc_722(Local_3271[28 /*40*/], 634);
				GlobalFunc_722(Local_3271[29 /*40*/], 634);
				GlobalFunc_722(Local_3271[30 /*40*/], 634);
				GlobalFunc_722(Local_3271[31 /*40*/], 634);
				*uParam0++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[28 /*40*/], Local_4993[17 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 3f, -65f, -7f), 4, 120f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), (SYSTEM::ROUND(Local_8343.f_2) - 2), 8, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[29 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[29 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[29 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[30 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[30 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[30 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[31 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[31 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[31 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							Local_4993[17 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}


void func_628(var uParam0)//Position - 0x6BA38
{
	if (*uParam0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[17 /*19*/]))
		{
			if (GlobalFunc_588(&iLocal_8349, 35000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_4993[17 /*19*/]))
					{
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::DISABLE_VEHICLE_WEAPON(0, joaat("vehicle_weapon_space_rocket"), Local_4993[17 /*19*/], Local_3271[28 /*40*/]);
							WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[28 /*40*/], joaat("vehicle_weapon_space_rocket"));
							if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
							{
								PED::SET_PED_ACCURACY(Local_3271[28 /*40*/], 100);
							}
							*uParam0 = 3;
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
				{
					STREAMING::REQUEST_MODEL(joaat("prop_pool_ball_01"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pool_ball_01")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							iLocal_5831 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pool_ball_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(15, 20)), 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 10))), 1, 1, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pool_ball_01"));
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5831, 1);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_5831, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
							if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
							{
								PED::SET_PED_ACCURACY(Local_3271[28 /*40*/], 100);
							}
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
			{
				if (bLocal_5849 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
					{
						VEHICLE::DISABLE_VEHICLE_WEAPON(0, joaat("vehicle_weapon_space_rocket"), Local_4993[17 /*19*/], Local_3271[28 /*40*/]);
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[28 /*40*/], joaat("vehicle_weapon_space_rocket"));
						Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), 2000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 15f, 0f, 10f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 12f, 0f, 7f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 12f, 0f, 8f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -12f, 0f, 10f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 12f, 0f, 8f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -12f, 0f, 10f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_5831, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 15f, 0f, 8f), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5831, 1);
						}
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], iLocal_5831, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 9:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], Local_4993[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 10:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], Local_4993[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 11:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], Local_4993[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 12:
			if (GlobalFunc_588(&(Local_4993[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[17 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_3271[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_3271[28 /*40*/], Local_4993[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_4993[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
							Local_4993[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0 = (*uParam0 - 1);
						}
					}
				}
			}
			break;
	}
}

void func_629(var uParam0)//Position - 0x6C367
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[16 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(16, joaat("buzzard"), Local_4993[16 /*19*/].f_14, Local_4993[16 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 24, 3, 1, -1, joaat("weapon_carbinerifle"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[16 /*19*/], 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), Local_4993[16 /*19*/], Local_3271[24 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[24 /*40*/], joaat("vehicle_weapon_player_buzzard"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[24 /*40*/], 1);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_4993[16 /*19*/], 1);
				Local_4993[16 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[16 /*19*/], "DH_2B_HELI_GROUP_03", 0);
				iLocal_5998[16] = 0;
				GlobalFunc_722(Local_3271[24 /*40*/], 634);
				GlobalFunc_722(Local_3271[25 /*40*/], 634);
				GlobalFunc_722(Local_3271[26 /*40*/], 634);
				GlobalFunc_722(Local_3271[27 /*40*/], 634);
				*uParam0++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&(Local_4993[16 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[24 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[24 /*40*/], Local_4993[16 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 45f, 20f, 5f), 4, 70f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), SYSTEM::ROUND(Local_8343.f_2), 10, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[25 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[25 /*40*/], 2104565373) != 1)
								{
									PED::SET_PED_ACCURACY(Local_3271[25 /*40*/], 50);
									TASK::TASK_DRIVE_BY(Local_3271[25 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[26 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[26 /*40*/], 2104565373) != 1)
								{
									PED::SET_PED_ACCURACY(Local_3271[26 /*40*/], 50);
									TASK::TASK_DRIVE_BY(Local_3271[26 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[27 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[27 /*40*/], 2104565373) != 1)
								{
									PED::SET_PED_ACCURACY(Local_3271[27 /*40*/], 10);
									TASK::TASK_DRIVE_BY(Local_3271[27 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, 1, -753768974);
								}
							}
							Local_4993[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (GlobalFunc_588(&(Local_4993[16 /*19*/].f_18), 4000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[16 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						Local_4993[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_4993[16 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&(Local_4993[16 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[24 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[16 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[24 /*40*/], Local_4993[16 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 45f, 42f, 8f), 4, 70f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), SYSTEM::ROUND(Local_8343.f_2), 10, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[25 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[25 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[25 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[26 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[26 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[26 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[27 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[27 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[27 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, 1, -753768974);
								}
							}
							Local_4993[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_630(var uParam0)//Position - 0x6C7EF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[19 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(19, joaat("buzzard"), Local_4993[19 /*19*/].f_14, Local_4993[19 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 36, 3, 1, -1, joaat("weapon_carbinerifle"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[19 /*19*/], 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), Local_4993[19 /*19*/], Local_3271[36 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[36 /*40*/], joaat("vehicle_weapon_player_buzzard"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[36 /*40*/], 1);
				Local_4993[19 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				iLocal_5998[19] = 0;
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[19 /*19*/], "DH_2B_HELI_GROUP_02", 0);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_4993[19 /*19*/], 1);
				GlobalFunc_722(Local_3271[36 /*40*/], 634);
				GlobalFunc_722(Local_3271[37 /*40*/], 634);
				GlobalFunc_722(Local_3271[38 /*40*/], 634);
				GlobalFunc_722(Local_3271[39 /*40*/], 634);
				*uParam0++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&(Local_4993[19 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[36 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[36 /*40*/], Local_4993[19 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 45f, 40f, 5f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), SYSTEM::ROUND(Local_8343.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[37 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[37 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[37 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[37 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[38 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[38 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[38 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[38 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[39 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[39 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[39 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[39 /*40*/], 40);
								}
							}
							Local_4993[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (GlobalFunc_588(&(Local_4993[19 /*19*/].f_18), 2000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[19 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						Local_4993[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_4993[19 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&(Local_4993[19 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[36 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[19 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[36 /*40*/], Local_4993[19 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 45f, 30f, 0f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), SYSTEM::ROUND(Local_8343.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[37 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[37 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[37 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[37 /*40*/], 60);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[38 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[38 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[38 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[38 /*40*/], 60);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[39 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[39 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[39 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[39 /*40*/], 60);
								}
							}
							Local_4993[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_631(var uParam0)//Position - 0x6CC9E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[18 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(18, joaat("buzzard"), Local_4993[18 /*19*/].f_14, Local_4993[18 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 32, 3, 1, -1, joaat("weapon_carbinerifle"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[18 /*19*/], 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), Local_4993[18 /*19*/], Local_3271[32 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[32 /*40*/], joaat("vehicle_weapon_player_buzzard"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[32 /*40*/], 1);
				Local_4993[18 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[18 /*19*/], "DH_2B_HELI_GROUP_02", 0);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_4993[18 /*19*/], 1);
				iLocal_5998[18] = 0;
				GlobalFunc_722(Local_3271[32 /*40*/], 634);
				GlobalFunc_722(Local_3271[33 /*40*/], 634);
				GlobalFunc_722(Local_3271[34 /*40*/], 634);
				GlobalFunc_722(Local_3271[35 /*40*/], 634);
				*uParam0++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&(Local_4993[18 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[32 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[32 /*40*/], Local_4993[18 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -30f, 30f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_8343.f_2) + 10, 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[33 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[33 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[33 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[33 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[34 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[34 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[34 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[34 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[35 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[35 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[35 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
									PED::SET_PED_ACCURACY(Local_3271[35 /*40*/], 40);
								}
							}
							Local_4993[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (GlobalFunc_588(&(Local_4993[18 /*19*/].f_18), 4000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[18 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						Local_4993[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_4993[18 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&(Local_4993[18 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[32 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[18 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[32 /*40*/], Local_4993[18 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -50f, 43f, 12f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]), SYSTEM::ROUND(Local_8343.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[33 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[33 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[33 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[34 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[34 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[34 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[35 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[35 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[35 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							Local_4993[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_632(var uParam0)//Position - 0x6D123
{
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(14, joaat("buzzard"), Local_4993[14 /*19*/].f_14, Local_4993[14 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 16, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_4993[14 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 95f, -95f, 65f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4993[14 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
				}
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_4993[14 /*19*/], 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), Local_4993[14 /*19*/], Local_3271[16 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_3271[16 /*40*/], joaat("vehicle_weapon_player_buzzard"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3271[16 /*40*/], 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[14 /*19*/], "DH_2B_HELI_GROUP_01", 0);
				Local_4993[14 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				iLocal_5998[14] = 0;
				GlobalFunc_722(Local_3271[16 /*40*/], 634);
				GlobalFunc_722(Local_3271[17 /*40*/], 634);
				GlobalFunc_722(Local_3271[18 /*40*/], 634);
				GlobalFunc_722(Local_3271[19 /*40*/], 634);
				*uParam0++;
			}
			break;
		
		case 1:
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[14 /*19*/], 0f);
			if (GlobalFunc_588(&(Local_4993[14 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[16 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[16 /*40*/], Local_4993[14 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 30f, 17f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_8343.f_2) + 10, 25, -1f, 320);
						}
						if (!PED::IS_PED_INJURED(Local_3271[17 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[17 /*40*/], 2104565373) != 1)
							{
								if (GlobalFunc_8315() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[17 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_3271[17 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[18 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[18 /*40*/], 2104565373) != 1)
							{
								if (GlobalFunc_8315() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[18 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_3271[18 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[19 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[19 /*40*/], 2104565373) != 1)
							{
								if (GlobalFunc_8315() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[19 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, 1, -753768974);
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_3271[19 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 100, 1, -753768974);
								}
							}
						}
						Local_4993[14 /*19*/].f_9 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (GlobalFunc_588(&(Local_4993[14 /*19*/].f_18), 5000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[14 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						Local_4993[14 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&(Local_4993[14 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_3271[16 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[14 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							TASK::TASK_HELI_MISSION(Local_3271[16 /*40*/], Local_4993[14 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 30f, 35f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_8343.f_2) + 10, 25, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_3271[17 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[17 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[17 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[18 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[18 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[18 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							if (!PED::IS_PED_INJURED(Local_3271[19 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[19 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[19 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							Local_4993[14 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_633(var uParam0)//Position - 0x6D613
{
	struct<3> Var0;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(13, joaat("dinghy"), Local_4993[13 /*19*/].f_14, Local_4993[13 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 12, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[13 /*19*/], 0))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 140f, -65f, 0f) };
						Var0.f_2 = 0.62f;
						ENTITY::SET_ENTITY_COORDS(Local_4993[13 /*19*/], Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4993[13 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[13 /*19*/], 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_4993[13 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_4993[13 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[13 /*19*/], 1);
				if (!PED::IS_PED_INJURED(Local_3271[12 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[12 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[12 /*40*/], 118, 0);
					GlobalFunc_722(Local_3271[12 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[13 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[13 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[13 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[13 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[13 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[14 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[14 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[14 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[14 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[14 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[15 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[15 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[15 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[15 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[15 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[13 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0);
				*uParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_3271[12 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[13 /*19*/], 0))
					{
						func_637(Local_3271[12 /*40*/], Local_4993[13 /*19*/], 1, &(Local_4993[13 /*19*/].f_9), 90, 55, 100f, 30f, 0f);
						func_634(Local_4993[13 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_3271[13 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[13 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[13 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[13 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[13 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[13 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[14 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[14 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[14 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[14 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[14 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[14 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[15 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[15 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[15 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[15 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[15 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[15 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_634(int iParam0)//Position - 0x6DA2C
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (func_635(iParam0, Local_4993[0 /*19*/], 25f))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_4993[0 /*19*/], ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
				if (Var0.f_1 < -3f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 2, 0f, 20f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
			}
		}
	}
}

int func_635(int iParam0, int iParam1, float fParam2)//Position - 0x6DAA4
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		fVar0 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam0));
		fVar1 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam1));
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
		if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
		{
			return 1;
		}
	}
	return 0;
}


void func_637(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8)//Position - 0x6DB43
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (GlobalFunc_105(fParam6, fParam7, fParam8))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
			Var0.f_2 = 0f;
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], fParam6, fParam7, fParam8) };
			Var0.f_2 = 0f;
		}
	}
	if (!GlobalFunc_105(Var0))
	{
		if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
			{
				if ((MISC::GET_GAME_TIMER() - *uParam3) > 2000)
				{
					if (bParam2)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_microsmg"), 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_microsmg"), -1, 1, 1);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(iParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 50, 1, -753768974);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1);
					if (iParam5 > 0)
					{
					}
					if (iParam4 > 0)
					{
					}
					TASK::TASK_BOAT_MISSION(iParam0, iParam1, 0, 0, Var0, 4, SYSTEM::TO_FLOAT(iParam4), 786469, -1f, 7);
					*uParam3 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_638(var uParam0)//Position - 0x6DC6F
{
	struct<3> Var0;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				func_281(12, joaat("dinghy"), Local_4993[12 /*19*/].f_14, Local_4993[12 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 8, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[12 /*19*/], 0))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], 110f, -60f, 0f) };
						Var0.f_2 = 0.62f;
						ENTITY::SET_ENTITY_COORDS(Local_4993[12 /*19*/], Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4993[12 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[12 /*19*/], 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_4993[12 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_4993[12 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[12 /*19*/], 1);
				if (!PED::IS_PED_INJURED(Local_3271[8 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[8 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[8 /*40*/], 118, 0);
					GlobalFunc_722(Local_3271[8 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[9 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[9 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[9 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[9 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[9 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[10 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[10 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[10 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[10 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[10 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[11 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[11 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[11 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[11 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[11 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[12 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0);
				*uParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_3271[8 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[12 /*19*/], 0))
					{
						func_637(Local_3271[8 /*40*/], Local_4993[12 /*19*/], 1, &(Local_4993[12 /*19*/].f_9), 90, 55, 80f, 50f, 0f);
						func_634(Local_4993[12 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_3271[9 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[9 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[9 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[9 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[9 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[9 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[10 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[10 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[10 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[10 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[10 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[10 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[11 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[11 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[11 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[11 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[11 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[11 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_639()//Position - 0x6E088
{
	int iVar0;
	bool bVar1;
	
	if (MISC::GET_GAME_TIMER() >= iLocal_8360)
	{
		bVar1 = false;
		if (iLocal_8357 != 7)
		{
			iVar0 = 10;
			while (iVar0 <= 25)
			{
				if (!bVar1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[iVar0 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4993[iVar0 /*19*/], -1)))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[iVar0 /*19*/], 1), 0) < 100f)
							{
								bVar1 = true;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (bVar1)
		{
			if (!GlobalFunc_5172(&Local_6574, 2) && !GlobalFunc_111())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[iVar0 /*19*/]))
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_4993[iVar0 /*19*/]) == joaat("buzzard"))
					{
						if (iVar0 == 17 && bLocal_5849)
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
							{
								iLocal_8360 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
							}
						}
						else if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
						{
							iLocal_8360 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
						}
					}
					else if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
					{
						iLocal_8360 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
					}
				}
			}
		}
		else
		{
			iLocal_8360 = MISC::GET_GAME_TIMER() + 5000;
		}
	}
}

void func_640(int iParam0, bool bParam1)//Position - 0x6E1E1
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[iParam0 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4993[iParam0 /*19*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar0 = true;
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4993[iParam0 /*19*/], uLocal_1023[1], 1))
				{
					bVar0 = true;
				}
			}
		}
	}
	switch (Local_4993[iParam0 /*19*/].f_10)
	{
		case 0:
			Local_4993[iParam0 /*19*/].f_10++;
			break;
		
		case 1:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/]) < 1000)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 800);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 500);
					}
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 2:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/]) < 500)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 450);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 400);
					}
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 3:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/]) < 400)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 350);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 300);
					}
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 4:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/]) < 300)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 250);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/], 200);
					}
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4993[iParam0 /*19*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4993[iParam0 /*19*/]) < 200)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[iParam0 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4993[iParam0 /*19*/]);
					}
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4993[iParam0 /*19*/], -100f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4993[iParam0 /*19*/], -500f);
					Local_4993[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4993[iParam0 /*19*/]))
			{
				if (!GlobalFunc_588(&(Local_4993[iParam0 /*19*/].f_11), 600))
				{
					if (GlobalFunc_745())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[iParam0 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(33f, 48f), 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(Local_4993[iParam0 /*19*/], 1, 0);
					}
					Local_4993[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4993[iParam0 /*19*/]))
			{
				if (!GlobalFunc_588(&(Local_4993[iParam0 /*19*/].f_11), 600))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[iParam0 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(33f, 48f), 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::EXPLODE_VEHICLE(Local_4993[iParam0 /*19*/], 1, 0);
					Local_4993[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_4993[iParam0 /*19*/].f_10++;
				}
			}
			else
			{
				Local_4993[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
				Local_4993[iParam0 /*19*/].f_10++;
			}
			break;
		
		case 8:
			if (GlobalFunc_588(&(Local_4993[iParam0 /*19*/].f_11), MISC::GET_RANDOM_INT_IN_RANGE(600, 2000)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4993[iParam0 /*19*/]))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4993[iParam0 /*19*/]))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_4993[iParam0 /*19*/], 1, 0);
						Local_4993[iParam0 /*19*/].f_10++;
					}
				}
			}
			break;
	}
	iVar1 = iParam0;
	if ((((((((iVar1 == 14 || iVar1 == 15) || iVar1 == 16) || iVar1 == 17) || iVar1 == 18) || iVar1 == 19) || iVar1 == 23) || iVar1 == 24) || iVar1 == 25)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[iParam0 /*19*/], 0))
		{
			bVar2 = false;
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[iParam0 /*19*/], 0), 1);
			if (fVar3 > 1000f)
			{
				if (iLocal_5998[iParam0])
				{
					bVar2 = true;
				}
			}
			else if (fVar3 > 350f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4993[iParam0 /*19*/]))
				{
					bVar2 = true;
				}
			}
			else if (fVar3 < 400f)
			{
				iLocal_5998[iParam0] = 1;
			}
			if (bVar2)
			{
				VEHICLE::EXPLODE_VEHICLE(Local_4993[iParam0 /*19*/], 1, 0);
			}
		}
	}
}


void func_642()//Position - 0x6E6F0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_644(PLAYER::PLAYER_PED_ID(), iLocal_1069, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_MODEL(iVar0, joaat("s_m_y_blackops_01")))
			{
				if (GlobalFunc_588(&iLocal_8366, 9000))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 120f)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar1 == 0)
						{
							GlobalFunc_5653(iVar0, "DH2B_HGAA", "MERRYWEATHER1", 15);
							iLocal_8366 = MISC::GET_GAME_TIMER();
						}
						if (iVar1 == 1)
						{
							GlobalFunc_5653(iVar0, "DH2B_HHAA", "MERRYWEATHER1", 15);
							iLocal_8366 = MISC::GET_GAME_TIMER();
						}
						if (iVar1 == 2)
						{
							GlobalFunc_5653(iVar0, "DH2B_HIAA", "MERRYWEATHER1", 15);
							iLocal_8366 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}


int func_644(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6E7D6
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, -1);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}



void func_647()//Position - 0x6E93B
{
	Local_4993[10 /*19*/].f_14 = { -991.26f, 6330.41f, 0.62f };
	Local_4993[10 /*19*/].f_17 = 113.26f;
	Local_4993[11 /*19*/].f_14 = { -1032.55f, 6303.47f, 0.24f };
	Local_4993[11 /*19*/].f_17 = 131.26f;
	Local_4993[12 /*19*/].f_14 = { -1527.605f, 5411.432f, 0f };
	Local_4993[12 /*19*/].f_17 = 327.8288f;
	Local_4993[13 /*19*/].f_14 = { -1646.516f, 5654.109f, 0f };
	Local_4993[13 /*19*/].f_17 = 326.2217f;
	Local_4993[14 /*19*/].f_14 = { -1147.552f, 4923.691f, 120.0419f };
	Local_4993[14 /*19*/].f_17 = 1.1023f;
	Local_4993[15 /*19*/].f_14 = { -1147.552f, 4923.691f, 320.0419f };
	Local_4993[15 /*19*/].f_17 = 264.5329f;
	Local_4993[16 /*19*/].f_14 = { -769.4426f, 5541.166f, 232.4886f };
	Local_4993[16 /*19*/].f_17 = 196.6876f;
	Local_4993[17 /*19*/].f_14 = { -732.1653f, 5812.672f, 216.4172f };
	Local_4993[17 /*19*/].f_17 = 236.9917f;
	Local_4993[18 /*19*/].f_14 = { -1147.552f, 4923.691f, 150.0419f };
	Local_4993[18 /*19*/].f_17 = 264.5329f;
	Local_4993[19 /*19*/].f_14 = { -769.4426f, 5541.166f, 152.4886f };
	Local_4993[19 /*19*/].f_17 = 196.6876f;
}


void func_649(var uParam0)//Position - 0x6EAD9
{
	struct<3> Var0;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -100f, -55f, 0f) };
				Var0.f_2 = 0.62f;
				func_281(11, joaat("dinghy"), Var0, Local_4993[11 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 4, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[11 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_4993[11 /*19*/], Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4993[11 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[11 /*19*/], 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_4993[11 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_4993[11 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[11 /*19*/], 1);
				if (!PED::IS_PED_INJURED(Local_3271[4 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[4 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[4 /*40*/], 118, 0);
					GlobalFunc_722(Local_3271[4 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[5 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[5 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[5 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[5 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[5 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[6 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[6 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[6 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[6 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[6 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[7 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[7 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[7 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[7 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[7 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[11 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0);
				*uParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_3271[4 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[11 /*19*/], 0))
					{
						if (Local_8346.f_2 < 50f)
						{
							func_637(Local_3271[4 /*40*/], Local_4993[11 /*19*/], 1, &(Local_4993[11 /*19*/].f_9), 1000, 55, -90f, 55f, 0f);
						}
						else
						{
							func_637(Local_3271[4 /*40*/], Local_4993[11 /*19*/], 1, &(Local_4993[11 /*19*/].f_9), 1000, 55, -95f, 55f, 0f);
						}
						func_634(Local_4993[11 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_3271[5 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[5 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[5 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[5 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[5 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[5 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[6 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[6 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[6 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[6 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[6 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[6 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[7 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[7 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[7 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[7 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[7 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[7 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_650(var uParam0)//Position - 0x6EF01
{
	struct<3> Var0;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -95f, -50f, 0f) };
				Var0.f_2 = 0.62f;
				func_281(10, joaat("dinghy"), Var0, Local_4993[10 /*19*/].f_17, joaat("s_m_y_blackops_01"), 1, 0, 3, 1, -1, joaat("weapon_carbinerifle"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[10 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_4993[10 /*19*/], Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4993[10 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOD_DIST(Local_4993[10 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_4993[10 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_4993[10 /*19*/], 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[10 /*19*/], 1);
				if (!PED::IS_PED_INJURED(Local_3271[0 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[0 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[0 /*40*/], 118, 0);
					GlobalFunc_722(Local_3271[0 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[1 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[1 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[1 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[1 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[1 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[2 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[2 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[2 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[2 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[2 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_3271[3 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3271[3 /*40*/], 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_3271[3 /*40*/], 118, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_3271[3 /*40*/], joaat("weapon_microsmg"), -1, 1, 1);
					GlobalFunc_722(Local_3271[3 /*40*/], 634);
				}
				iLocal_6090 = 0;
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[10 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0);
				*uParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_3271[0 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[10 /*19*/], 0))
					{
						if (Local_8346.f_2 < 50f)
						{
							func_637(Local_3271[0 /*40*/], Local_4993[10 /*19*/], 1, &(Local_4993[10 /*19*/].f_9), 1000, 55, -70f, 30f, 0f);
						}
						else
						{
							func_637(Local_3271[0 /*40*/], Local_4993[10 /*19*/], 1, &(Local_4993[10 /*19*/].f_9), 1000, 55, -90f, 30f, 0f);
						}
						func_634(Local_4993[10 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_3271[1 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[1 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[1 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[1 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[1 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[1 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[2 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[2 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[2 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[2 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[2 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[2 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_3271[3 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3271[3 /*40*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[3 /*40*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_3271[3 /*40*/], 0, Local_4993[0 /*19*/], 0f, 0f, 0f, -1f, 60, 1, -753768974);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_3271[3 /*40*/], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_3271[3 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_651()//Position - 0x6F32D
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	bool bVar7;
	float fVar8;
	struct<3> Var9;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
	}
	if (GlobalFunc_8315() == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			}
			Var3 = { ENTITY::GET_ENTITY_ROTATION(Local_4993[0 /*19*/], 2) };
			if (Var3.x > 15f)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[0 /*19*/], 2, 0f, 0f, 1f, 0f, -12f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[0 /*19*/], 2, 0f, 0f, -1f, 0f, 12f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Var3.x < -15f)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[0 /*19*/], 2, 0f, 0f, -1f, 0f, -12f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[0 /*19*/], 2, 0f, 0f, 1f, 0f, 12f, 0f, 0, 1, 1, 1, 0, 1);
			}
		}
	}
	if (iLocal_8356 == 0)
	{
		if (GlobalFunc_8315() == 1)
		{
			if (!PED::IS_PED_INJURED(uLocal_1023[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[0], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[1 /*19*/], 1);
				}
				bVar7 = false;
				fVar8 = 30f;
				iVar6 = 0;
				while (iVar6 < 5)
				{
					if (!bVar7)
					{
						Var9 = { func_652(iVar6) };
						if (Var0.x < Var9.x && !ENTITY::IS_ENTITY_AT_COORD(Local_4993[0 /*19*/], Var9, 35f, 35f, 35f, 0, 1, 0))
						{
							switch (iVar6)
							{
								case 0:
									fVar8 = 13f;
									break;
								
								case 1:
									fVar8 = 15f;
									break;
								
								case 2:
									fVar8 = 22f;
									break;
								
								case 3:
									fVar8 = 28f;
									break;
							}
							Local_5983 = { Var9 };
							bVar7 = true;
						}
					}
					iVar6++;
				}
				if (!bVar7)
				{
					Local_5983 = { 1754.472f, 3283.072f, 40.0925f };
				}
				TASK::TASK_HELI_MISSION(uLocal_1023[0], Local_4993[0 /*19*/], 0, 0, Local_5983, 4, fVar8, 5f, -1f, SYSTEM::FLOOR(Local_5983.f_2), 15, -1f, 320);
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[0 /*19*/], 0f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_4993[1 /*19*/], 0, 0);
				}
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_FRANKLIN");
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_1023[1], 0);
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_8356 = 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(Local_4993[0 /*19*/], Local_5983, 30f, 30f, 30f, 0, 1, 0) || Var0.x > Local_5983.x)
	{
		iLocal_8356 = 0;
	}
	if (GlobalFunc_8315() == 0)
	{
		if (iLocal_8356 == 1)
		{
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[1 /*19*/], 0);
				}
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_AS_FRANKLIN");
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_1023[1], "DH_2B_FRANKLIN_GROUP", 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[1], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[1], 3, 0);
				PED::SET_PED_ACCURACY(uLocal_1023[1], 100);
				PED::SET_PED_FIRING_PATTERN(uLocal_1023[1], -687903391);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_1023[1], 1000f, 0);
				PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_4993[1 /*19*/], 1, 0);
				}
				iLocal_8356 = 0;
			}
		}
	}
}

Vector3 func_652(int iParam0)//Position - 0x6F6B9
{
	switch (iParam0)
	{
		case 0:
			return -963f, 5561f, 60f;
			break;
		
		case 1:
			return -701f, 5412f, 136f;
			break;
		
		case 2:
			return -343f, 4842f, 266f;
			break;
		
		case 3:
			return 468f, 4066f, 220f;
			break;
		
		case 4:
			return 1754.472f, 3283.072f, 40.0925f;
			break;
	}
	return 1754.472f, 3283.072f, 40.0925f;
}

void func_653(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x6F75E
{
	float fVar0;
	int iVar1;
	
	switch (iLocal_6112)
	{
		case 0:
			if (GlobalFunc_10061(&uLocal_1023, 0, 1))
			{
				HUD::CLEAR_HELP(1);
				CAM::DESTROY_ALL_CAMS(0);
				Local_6114.f_12 = uLocal_1023[uLocal_1023.f_7];
				if (iLocal_7010 == 8)
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
							}
						}
					}
				}
				iLocal_6112++;
			}
			if (bParam4 == 1)
			{
				Local_6114.f_12 = uLocal_1023[2];
				iLocal_7047 = 2;
				iLocal_6112++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_6114.f_12))
			{
				if (PED::IS_PED_IN_COVER(Local_6114.f_12, 0))
				{
					if (PED::IS_PED_IN_COVER_FACING_LEFT(Local_6114.f_12))
					{
						fVar0 = -90f;
					}
					else
					{
						fVar0 = 90f;
					}
				}
			}
			if (bParam0)
			{
				if (!GlobalFunc_10239(&Local_6114, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if (func_60(&uLocal_1023, 1, 1, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_1023[uLocal_1023.f_5]))
						{
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_1023[uLocal_1023.f_5], 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1023[uLocal_1023.f_5], 0);
							PED::SET_PED_DIES_WHEN_INJURED(uLocal_1023[uLocal_1023.f_5], 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[uLocal_1023.f_5], iLocal_1068);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 12, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 29, 1);
							PED::SET_PED_MAX_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
							ENTITY::SET_ENTITY_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
						}
						GlobalFunc_565(624, 1, 0);
						iLocal_6112 = 0;
					}
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
				}
			}
			if (bParam1)
			{
				if (!GlobalFunc_10239(&Local_6114, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if (func_60(&uLocal_1023, 1, 1, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_1023[uLocal_1023.f_5]))
						{
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_1023[uLocal_1023.f_5], 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1023[uLocal_1023.f_5], 0);
							PED::SET_PED_DIES_WHEN_INJURED(uLocal_1023[uLocal_1023.f_5], 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[uLocal_1023.f_5], iLocal_1068);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 12, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 29, 1);
							PED::SET_PED_MAX_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
							ENTITY::SET_ENTITY_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
						}
						GlobalFunc_565(624, 1, 0);
						iLocal_6112 = 0;
					}
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
				}
			}
			if (bParam4)
			{
				if (!func_655(&Local_7048, 0))
				{
					if (CAM::DOES_CAM_EXIST(Local_7048.f_1))
					{
						if (GlobalFunc_8315() != 2)
						{
							if (CAM::GET_CAM_SPLINE_NODE_INDEX(Local_7048.f_1) >= Local_7048.f_1218)
							{
								if (GlobalFunc_9134(&uLocal_1023, 2))
								{
									if (func_60(&uLocal_1023, 1, 1, 1))
									{
										if (!PED::IS_PED_INJURED(uLocal_1023[uLocal_1023.f_5]))
										{
											PED::SET_PED_CAN_BE_TARGETTED(uLocal_1023[uLocal_1023.f_5], 0);
											PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1023[uLocal_1023.f_5], 0);
											PED::SET_PED_DIES_WHEN_INJURED(uLocal_1023[uLocal_1023.f_5], 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[uLocal_1023.f_5], iLocal_1068);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 12, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 29, 1);
											PED::SET_PED_MAX_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
											ENTITY::SET_ENTITY_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
										}
										GlobalFunc_565(624, 1, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					iLocal_6112 = 0;
				}
			}
			if (bParam2)
			{
				if (bParam3)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 0;
				}
				iVar1 = 0;
				if (!GlobalFunc_10239(&Local_6114, iVar1, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					GlobalFunc_565(624, 1, 0);
					iLocal_6112 = 0;
				}
				else
				{
					if (Local_6114.f_19)
					{
						if (GlobalFunc_8315() == 1)
						{
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
						}
					}
					if (Local_6114.f_18)
					{
						if (!Local_6114.f_19)
						{
							if (func_60(&uLocal_1023, 1, 1, 0))
							{
								if (!PED::IS_PED_INJURED(uLocal_1023[uLocal_1023.f_5]))
								{
									PED::SET_PED_CAN_BE_TARGETTED(uLocal_1023[uLocal_1023.f_5], 0);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_1023[uLocal_1023.f_5], 0);
									PED::SET_PED_DIES_WHEN_INJURED(uLocal_1023[uLocal_1023.f_5], 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[uLocal_1023.f_5], iLocal_1068);
									PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 12, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1023[uLocal_1023.f_5], 29, 1);
									PED::SET_PED_MAX_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
									ENTITY::SET_ENTITY_HEALTH(uLocal_1023[uLocal_1023.f_5], 1800);
								}
								if (GlobalFunc_8315() == 1)
								{
									PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
									PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
									func_654();
									if (bParam5)
									{
										if (iLocal_8300 <= 1)
										{
											func_620(iLocal_8300 == 0);
										}
									}
								}
								else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								}
								Local_6114.f_19 = 1;
							}
						}
					}
				}
			}
			break;
	}
}

void func_654()//Position - 0x6FC62
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (!iLocal_6090)
	{
		if (GlobalFunc_8315() == 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
				if (Var0.f_1 > 6280f)
				{
					fVar3 = -750f;
				}
				else
				{
					fVar3 = -920f;
				}
				if (Var0.x < fVar3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[10 /*19*/], 0))
					{
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_4993[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_4993[10 /*19*/], 1)) };
						if (Var4.f_1 < -10f)
						{
							Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -70f, -10f, 0f) };
							Var7.f_2 = 0f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var7, &fVar10);
							if ((fVar10 <= 0f && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, -995.7561f, 6278.966f, -8.795349f, -772.1373f, 5839.614f, 27.65045f, 90f, 0, 1)) && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, -892.7561f, 6052.966f, -8.795349f, -772.1373f, 5839.614f, 27.65045f, 150f, 0, 1))
							{
								ENTITY::SET_ENTITY_COORDS(Local_4993[10 /*19*/], Var7, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_4993[10 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[10 /*19*/], 30f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[11 /*19*/], 0))
					{
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_4993[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_4993[11 /*19*/], 1)) };
						if (Var4.f_1 < -5f)
						{
							Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[0 /*19*/], -90f, -5f, 0f) };
							Var7.f_2 = 0f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var7, &fVar10);
							if ((fVar10 <= 0f && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, -995.7561f, 6278.966f, -8.795349f, -772.1373f, 5839.614f, 27.65045f, 90f, 0, 1)) && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, -892.7561f, 6052.966f, -8.795349f, -772.1373f, 5839.614f, 27.65045f, 150f, 0, 1))
							{
								ENTITY::SET_ENTITY_COORDS(Local_4993[11 /*19*/], Var7, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_4993[11 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_4993[0 /*19*/]));
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[11 /*19*/], 30f);
							}
						}
					}
				}
			}
		}
		iLocal_6090 = 1;
	}
}

int func_655(var uParam0, bool bParam1)//Position - 0x6FEC8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	switch (iLocal_7047)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			func_687(uParam0, Local_4993[1 /*19*/]);
			if (GlobalFunc_5163(uParam0) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch"))
			{
				CAM::DESTROY_ALL_CAMS(0);
				GlobalFunc_7718(uParam0);
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_4993[1 /*19*/], 3);
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1) };
				Var1.f_2 = fLocal_8289;
				ENTITY::SET_ENTITY_COORDS(Local_4993[0 /*19*/], -1389.212f, 6163.068f, 16.4602f, 1, 1, 1, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_4993[0 /*19*/], -1.218f, 0.0503f, 39.5149f, 2, 1);
				if (ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]) && Var4.f_2 > 9.5f)
				{
					CAM::SET_CAM_SPLINE_PHASE(uParam0->f_1, 0.5f);
				}
				else
				{
					Var1.f_2 = (Var1.f_2 - 6.7f);
					ENTITY::SET_ENTITY_COORDS(Local_4993[1 /*19*/], -1389.249f, 6163.116f, 10.2905f, 1, 1, 1, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_4993[1 /*19*/], -27.9389f, 1.3027f, 39.7102f, 2, 1);
				}
				ENTITY::SET_ENTITY_VELOCITY(Local_4993[0 /*19*/], ENTITY::GET_ENTITY_VELOCITY(Local_4993[0 /*19*/]) * Vector(fLocal_8290, fLocal_8290, fLocal_8290));
				ENTITY::SET_ENTITY_VELOCITY(Local_4993[1 /*19*/], ENTITY::GET_ENTITY_VELOCITY(Local_4993[1 /*19*/]) * Vector(fLocal_8290, fLocal_8290, fLocal_8290));
				iLocal_8294 = 0;
				iLocal_8296 = 0;
				iLocal_8297 = 0;
				iLocal_7047 = 3;
			}
			break;
		
		case 3:
			iVar0 = func_656(uParam0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_8292);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_8293, 1065353216);
			if (!iLocal_8294)
			{
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_8295)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missswitch", "mid_mission_inside_helicopter_trevor", 4f, -8f, -1, 8, 0, 0, 0, 0);
					iLocal_8294 = 1;
				}
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218 + 1 && !iLocal_8296)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_6098 = MISC::GET_GAME_TIMER();
					iLocal_8296 = 1;
				}
				if (((iVar0 >= uParam0->f_1218 + 2 && iLocal_8296) && !iLocal_8297) && MISC::GET_GAME_TIMER() >= iLocal_6098 + 300)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_8297 = 1;
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_7047 = 5;
				}
				else
				{
					return 0;
				}
			}
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
			}
			CAM::DESTROY_ALL_CAMS(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_VELOCITY(Local_4993[1 /*19*/], ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_4993[1 /*19*/]) * Vector(fLocal_8291, fLocal_8291, fLocal_8291));
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 1, 1);
			SYSTEM::SETTIMERA(0);
			iLocal_7047 = 0;
			uParam0->f_1232 = 1;
			Local_989.f_20 = 0;
			STREAMING::REMOVE_ANIM_DICT("missswitch");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

int func_656(var uParam0)//Position - 0x70229
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_59 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_59 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_59 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_59 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_59);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}































void func_687(var uParam0, var uParam1)//Position - 0x71DC3
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -6.3674f, 8.7696f, 13f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 2.641f, -1.973f, 5.2269f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 20f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { -6.361f, 9.2298f, 13.5f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.57f, -1.3947f, 3.8611f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 20f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0.965f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.05f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 10;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1000;
		uParam0->f_10[2 /*57*/].f_6 = { -6.361f, 9.2298f, 13.5f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 2.57f, -1.3947f, 3.8611f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 20f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0.965f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.5f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1000;
		uParam0->f_10[3 /*57*/].f_6 = { -6.4675f, 9.8042f, 6.2917f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 0.2768f, -0.5341f, 1.5624f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 1;
		uParam0->f_10[3 /*57*/].f_21 = 25f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0.3f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 1000;
		uParam0->f_10[4 /*57*/].f_6 = { -4.4901f, 10.2047f, 3.243f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { 0.546f, 0.4726f, -0.4947f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0.5f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { 3.5055f, 8.4825f, 1.0037f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 35f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 2f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 10.1406f, -1.3298f, 2.2008f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.064f, -0.0139f, 0.3411f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 1000;
		uParam0->f_10[7 /*57*/].f_6 = { 1.068f, -14.402f, 2.1636f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.3122f, -0.0042f, 2.1375f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 49f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 0;
		uParam0->f_10[7 /*57*/].f_23 = 0f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 0f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 1;
		uParam0->f_10[7 /*57*/].f_37 = 11;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.4f;
		uParam0->f_1151[1 /*2*/] = 1f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.4f;
		uParam0->f_1151[2 /*2*/] = 1f;
		uParam0->f_1151[2 /*2*/].f_1 = 1f;
		uParam0->f_1151[3 /*2*/] = 2f;
		uParam0->f_1151[3 /*2*/].f_1 = 10f;
		uParam0->f_1151[4 /*2*/] = 3f;
		uParam0->f_1151[4 /*2*/].f_1 = 20f;
		uParam0->f_1151[5 /*2*/] = 3.6f;
		uParam0->f_1151[5 /*2*/].f_1 = 20f;
		uParam0->f_1151[6 /*2*/] = 4.4f;
		uParam0->f_1151[6 /*2*/].f_1 = 5f;
		uParam0->f_1151[7 /*2*/] = 5.8f;
		uParam0->f_1151[7 /*2*/].f_1 = 20f;
		uParam0->f_1151[8 /*2*/] = 6f;
		uParam0->f_1151[8 /*2*/].f_1 = 20f;
		uParam0->f_1151[9 /*2*/] = 7f;
		uParam0->f_1151[9 /*2*/].f_1 = 40f;
		uParam0->f_1184[0 /*2*/] = 0f;
		uParam0->f_1184[0 /*2*/].f_1 = 0f;
		uParam0->f_1184[1 /*2*/] = 0f;
		uParam0->f_1184[1 /*2*/].f_1 = 0f;
		uParam0->f_1184[2 /*2*/] = 0f;
		uParam0->f_1184[2 /*2*/].f_1 = 0f;
		uParam0->f_1184[3 /*2*/] = 0f;
		uParam0->f_1184[3 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = 0.13f;
		uParam0->f_1234 = 0.5f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 100;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine_B.txt";
		uParam0->f_1225 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine_B.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
}















void func_702(int iParam0)//Position - 0x74461
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*40*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*iParam0)[iVar0 /*40*/], 1) < 320f || (iParam0[iVar0 /*40*/])->f_39 == 1)
			{
				GlobalFunc_661((*iParam0)[iVar0 /*40*/], &((iParam0[iVar0 /*40*/])->f_23), -1, PLAYER::PLAYER_ID(), 1, 0, 300f, 0);
			}
			else
			{
				GlobalFunc_589(&((iParam0[iVar0 /*40*/])->f_23));
			}
		}
		iVar0++;
	}
}


void func_704()//Position - 0x74603
{
	if (GlobalFunc_8315() == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	}
	else if (GlobalFunc_8315() == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
	}
}


void func_706()//Position - 0x7469C
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_4993[0 /*19*/], 100f);
	}
	if (GlobalFunc_8315() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5935[0]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5935[0], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5935[0]))
			{
				PED::DELETE_PED(&(iLocal_5935[0]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_sharktiger"));
			}
		}
	}
	if (iLocal_6092 == 1)
	{
		func_653(0, 1, 0, 1, 0, 0);
		if (GlobalFunc_8315() == 0 && iLocal_6112 == 0)
		{
			if (iLocal_8340 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_1023[2], 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_8340 = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		iLocal_5833 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/]);
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5833))
			{
				GlobalFunc_159("DS2_REL_WRONG", -1);
			}
			else if (GlobalFunc_74("DS2_REL_WRONG"))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (GlobalFunc_74("DS2_REL_WRONG"))
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (iLocal_6092 > 0)
	{
		if (GlobalFunc_588(&iLocal_8342, 60000))
		{
			if (!func_794("FLYING SKILL PICK"))
			{
				if (GlobalFunc_485(71))
				{
					if ((GlobalFunc_2784(0, 0) == 2 && GlobalFunc_2784(0, 1) == 2) || (GlobalFunc_2784(0, 0) == 3 && GlobalFunc_2784(0, 1) == 3))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYLOT", 8, 0, 0, 0))
								{
									func_791("FLYING SKILL PICK", 1);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FEWFLY", 8, 0, 0, 0))
							{
								func_791("FLYING SKILL PICK", 1);
							}
						}
					}
				}
				else if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_NOFLY", 8, 0, 0, 0))
						{
							func_791("FLYING SKILL PICK", 1);
						}
					}
				}
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			iLocal_6032 = 0;
			iLocal_6089 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			GlobalFunc_619(0);
			if (GlobalFunc_8315() == 2)
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			}
			else if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_1023[2], 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 1))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_4993[1 /*19*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4993[1 /*19*/], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
				ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 1, 0, 0, 0, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_5909[1], 1, 1);
					}
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5909[1], -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1f);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 20f);
				VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 0f);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_1023[2], 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			GlobalFunc_729(&uLocal_1023, 2, 0);
			GlobalFunc_1998(1);
			GlobalFunc_2781(500);
			iLocal_6089 = 0;
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_2B_SUB_LIFT", 0);
			if (GlobalFunc_8315() != 0)
			{
				GlobalFunc_164("DS2_S2MH", 7500, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
				{
					VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_4993[0 /*19*/], 0);
				}
				VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 0);
			}
			GlobalFunc_Checkpoint1(6, "Pick Up Sub", 0, 0, 0, 1);
			iLocal_6095 = MISC::GET_GAME_TIMER();
			iLocal_8340 = 0;
			func_791("DROPPED THE SUB", 0);
			func_791("DS2_SUBBLIP", 0);
			STREAMING::REQUEST_PTFX_ASSET();
			iLocal_8342 = MISC::GET_GAME_TIMER();
			func_791("FLYING SKILL PICK", 0);
			iLocal_6092++;
			break;
		
		case 1:
			if (GlobalFunc_8315() == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_4993[0 /*19*/], 0);
						VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 0);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4993[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0);
				}
				GlobalFunc_2518(&uLocal_1023, 0, 0);
				GlobalFunc_729(&uLocal_1023, 0, 0);
				GlobalFunc_729(&uLocal_1023, 1, 1);
				GlobalFunc_729(&uLocal_1023, 2, 1);
				if (!func_794("CLEAR TC"))
				{
					func_791("CLEAR TC", 1);
				}
				if (GlobalFunc_663("DS2_S2MH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					if (GlobalFunc_9194(&Local_6574, ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 0.1f, 0.1f, 0.1f, 0, Local_4993[0 /*19*/], "DS2_FLYO", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
							{
								AUDIO::START_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
							}
							if (HUD::GET_BLIP_COLOUR(Local_6574.f_5) != 3)
							{
								HUD::SET_BLIP_COLOUR(Local_6574.f_5, 3);
							}
							if (!func_794("DS2_SUBBLIP"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_6574.f_5, "DS2_SUBBLIP");
									func_791("DS2_SUBBLIP", 1);
								}
							}
							if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
							{
								if (!func_794("DS2_GRAP_HELP1"))
								{
									GlobalFunc_159("DS2_GRAP_HELP1", -1);
									func_791("DS2_GRAP_HELP1", 1);
								}
							}
							else if (GlobalFunc_74("DS2_GRAP_HELP1"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_2B_SUB_LIFT", 0))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(1);
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
									if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
									{
										if (STREAMING::HAS_PTFX_ASSET_LOADED())
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
											{
												uLocal_5866 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_pls_sub_water_drips", Local_4993[1 /*19*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												iLocal_8341 = MISC::GET_GAME_TIMER();
											}
											HUD::REMOVE_BLIP(&(Local_6574.f_5));
											GlobalFunc_5652(&Local_6574, 1, 0);
											VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Sub_Lift", Local_4993[1 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
											}
											if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
											{
												AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
											}
											RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
											iLocal_6089 = 0;
											if (!PED::IS_PED_INJURED(uLocal_1023[2]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
												{
													if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
													{
														PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
														VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
													}
												}
											}
											GlobalFunc_4948(&uLocal_47, 0, 0);
											iLocal_6092++;
										}
									}
								}
								else if (GlobalFunc_588(&iLocal_6095, 30000))
								{
									if (!func_794("DS2A_P6"))
									{
										if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6", 8, 0, 0, 0))
											{
												func_791("DS2A_P6", 1);
												iLocal_6113 = MISC::GET_GAME_TIMER();
											}
										}
									}
									else if (GlobalFunc_588(&iLocal_6113, (15000 + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000))))
									{
										func_791("DS2A_P6", 1);
									}
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (func_265(0))
								{
									if (iLocal_6089 == 0)
									{
										if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P6", 8, 0, 0, 0))
											{
												iLocal_6089 = 1;
											}
										}
									}
								}
							}
						}
						if (iLocal_6089 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								if (GlobalFunc_620())
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_619(0);
								}
							}
							else if (!GlobalFunc_620())
							{
								if (GlobalFunc_663("DS2_FLYGB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								GlobalFunc_619(1);
							}
						}
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
				}
				if (!func_794("ASSIGN MICHAEL TASK"))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1) };
					Var0.f_2 = 60.8358f;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_1023[0]))
						{
							TASK::TASK_HELI_MISSION(uLocal_1023[0], Local_4993[0 /*19*/], 0, 0, Var0, 4, 50f, 2f, -1f, 100, 60, -1082130432, 0);
							func_791("ASSIGN MICHAEL TASK", 1);
						}
					}
				}
				else if (!func_794("DS2A_P5a"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P5a", 8, 0, 0, 0))
						{
							func_791("DS2A_P5a", 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (!func_794("DS2A_CONNECT"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_CONNECT", 8, 0, 0, 0))
						{
							func_791("DS2A_CONNECT", 1);
						}
					}
				}
				else
				{
					iLocal_6092++;
				}
			}
			break;
		
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_SUB_2ND"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_6574.f_5));
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[1 /*19*/], -1))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
								ENTITY::SET_ENTITY_VISIBLE(uLocal_1023[2], 1);
							}
						}
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
				}
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_164("DS2_S2MH", 7500, 0);
				}
				GlobalFunc_2511(&uLocal_1023, 0, 2, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					iLocal_6092++;
				}
			}
			break;
		
		case 4:
			func_653(0, 0, 1, 1, 0, 0);
			if (GlobalFunc_8315() == 0 && iLocal_6112 == 0)
			{
				func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_5993 = 0;
				iLocal_6092 = 0;
				iLocal_6032 = 0;
				iLocal_7010 = 9;
			}
			break;
	}
}






void func_712()//Position - 0x75448
{
	struct<3> Var0;
	
	if (GlobalFunc_8315() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
		}
	}
	if (GlobalFunc_8315() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_1023[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
			}
		}
	}
	func_715();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5935[0]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5935[0], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 75f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5935[0]))
			{
				PED::DELETE_PED(&(iLocal_5935[0]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_sharktiger"));
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_1023[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (iLocal_8335 == 0)
			{
				Local_8336 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_4993[1 /*19*/], 100f, 100f, 0f) };
				Local_8336.f_2 = 80f;
				TASK::TASK_HELI_MISSION(uLocal_1023[0], Local_4993[0 /*19*/], 0, 0, Local_8336, 4, 20f, 30f, -1f, 80, 70, -1f, 320);
				iLocal_8339 = MISC::GET_GAME_TIMER();
				iLocal_8335 = 1;
			}
			else if (GlobalFunc_588(&iLocal_8339, 3000))
			{
				iLocal_8335 = 0;
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[0]))
			{
				GlobalFunc_173(&Local_5660, 1, uLocal_1023[0], "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[2], "FRANKLIN", 0, 1);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
			}
			MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[1], 101, 1);
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[0 /*19*/], 1))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[1 /*19*/], -1))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
							ENTITY::SET_ENTITY_VISIBLE(uLocal_1023[2], 1);
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
				if (!PED::IS_PED_INJURED(uLocal_1023[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[0], Local_4993[0 /*19*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_1023[0], Local_4993[0 /*19*/], -1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_4993[1 /*19*/], 3);
			}
			GlobalFunc_1998(1);
			GlobalFunc_2781(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
			iLocal_6095 = MISC::GET_GAME_TIMER();
			GlobalFunc_Checkpoint1(5, "Get to the surface", 0, 0, 0, 1);
			iLocal_6066 = 1;
			iLocal_8335 = 0;
			iLocal_6092++;
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_6095, 1000))
			{
				iLocal_6066 = 1;
				iLocal_6089 = 0;
				GlobalFunc_164("DS2_ASSSUR", 7500, 0);
				iLocal_6095 = MISC::GET_GAME_TIMER();
				GlobalFunc_4935();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				iLocal_6092++;
			}
			break;
		
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (GlobalFunc_588(&iLocal_6095, 60000))
			{
				if (!func_794("DS2A_P5c"))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P5c", 8, 0, 0, 0))
					{
						func_791("DS2A_P5c", 1);
						iLocal_6113 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (GlobalFunc_588(&iLocal_6113, 10000))
			{
				if (func_794("DS2A_P5c"))
				{
					func_791("DS2A_P5c", 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
				{
					if (Var0.f_2 > -2f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						GlobalFunc_729(&uLocal_1023, 0, 0);
						GlobalFunc_729(&uLocal_1023, 1, 1);
						GlobalFunc_729(&uLocal_1023, 2, 1);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						GlobalFunc_164("DS2_S2MH", 7500, 0);
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
						iLocal_6092++;
					}
					if (GlobalFunc_588(&iLocal_6095, 5000))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (func_265(0))
							{
								if (iLocal_6089 == 0)
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P5", 8, 0, 0, 0))
									{
										iLocal_6089 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			GlobalFunc_2511(&uLocal_1023, 0, 2, 1);
			GlobalFunc_2518(&uLocal_1023, 0, 1);
			func_714();
			iLocal_6092++;
			break;
		
		case 4:
			GlobalFunc_2785(&uLocal_1023);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_5993 = 0;
			iLocal_6092 = 0;
			iLocal_6032 = 0;
			iLocal_7010 = 8;
			break;
	}
}


void func_714()//Position - 0x759F5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_982))
	{
		HUD::REMOVE_BLIP(&uLocal_982);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_981))
	{
		HUD::REMOVE_BLIP(&uLocal_981);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_983))
	{
		HUD::REMOVE_BLIP(&uLocal_983);
	}
}

void func_715()//Position - 0x75A30
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	
	iVar0 = iLocal_5909[1];
	iVar1 = Local_4993[1 /*19*/];
	if (GlobalFunc_115(iVar0) && GlobalFunc_115(iVar1))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, iVar1))
		{
			func_717();
		}
		else if (!iLocal_8304)
		{
			if ((!func_716(iVar0, -1255.311f, 6793.455f, -183.5455f, -1255.444f, 6787.877f, -178.7532f, 4f) && !func_716(iVar0, -1255.536f, 6803.393f, -183.5122f, -1255.366f, 6797.565f, -177.5468f, 4f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, -1258.615f, 6783.494f, -182.6219f, -1257.913f, 6807.972f, -173.9417f, 20f, 0, 1, 0))
			{
				fVar2 = 1.4f;
				fVar3 = 1f;
				fVar4 = 400f;
				Var5 = { -1f, -1f, -1f };
				Var8 = { -1f, -1f, -0.99f };
				Var11 = { 0f, -2.2f, -2.9f };
				Var14 = { 0f, 0f, 0f };
				Var17 = { 0f, 0f, -90f };
				if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
				{
					ENTITY::DETACH_ENTITY(iVar0, 0, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iVar1, 0);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iVar0, fVar4, fVar3, Var8, Var5, -1082130432, -1082130432, fVar2);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iVar0, iVar1, -1, 1, Var11, Var14, Var17, -1f, 1, 1, 0, 1, 2);
				iLocal_8304 = 1;
			}
		}
	}
}

int func_716(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x75BA0
{
	struct<3> Var0;
	struct<2> Var3;
	struct<2> Var6;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param4, fParam7, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var6);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6, Var6.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6, Var3.f_1, 0f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Param1, Param4, fParam7, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_717()//Position - 0x75CE4
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_5909[1];
	iVar1 = Local_4993[1 /*19*/];
	if (GlobalFunc_115(iVar0) && GlobalFunc_115(iVar1))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, iVar1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iVar1, 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, iVar1, 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar1, iVar0, 0);
			iLocal_8304 = 0;
		}
	}
}


void func_719()//Position - 0x75D76
{
	if (GlobalFunc_8315() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_1023[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1260.04f, 6802.21f, -174.41f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 200f)
	{
		func_277(27, 0f, 0f, 0f, 0f, 0, 1);
	}
	if (!func_794("WORLD_SHARK_SWIM"))
	{
		if (!PED::IS_PED_INJURED(iLocal_5935[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1), 50f, 50f, 100f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5935[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1291.66f, 6841.873f, -176.0327f, 1f, -1, 1193033728, 1056964608);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1310.588f, 6952.566f, -208.4632f, 1f, -1, 1193033728, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_SHARK_SWIM", 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_5935[0], uLocal_6267);
						func_791("WORLD_SHARK_SWIM", 1);
					}
				}
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			if (func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1))
			{
				GlobalFunc_2781(500);
				iLocal_6032 = 0;
				iLocal_6089 = 0;
				iLocal_6095 = MISC::GET_GAME_TIMER();
				GlobalFunc_164("DS2_USESON", 7500, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
				{
					AUDIO::START_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
				}
				GlobalFunc_835(1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
				{
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[1 /*19*/], 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4993[1 /*19*/], 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_4993[1 /*19*/], 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[26 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[26 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3271[10 /*40*/]))
				{
					PED::DELETE_PED(&(Local_3271[10 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[30 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[30 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3271[11 /*40*/]))
				{
					PED::DELETE_PED(&(Local_3271[11 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[31 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[31 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3271[12 /*40*/]))
				{
					PED::DELETE_PED(&(Local_3271[12 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[10 /*40*/]))
				{
					PED::DELETE_PED(&(Local_1070[10 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[11 /*40*/]))
				{
					PED::DELETE_PED(&(Local_1070[11 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1070[12 /*40*/]))
				{
					PED::DELETE_PED(&(Local_1070[12 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_blackops_01"));
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(30, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(31, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(34, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(35, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(97, "DHF2");
				if (!PED::IS_PED_INJURED(uLocal_1023[0]))
				{
					GlobalFunc_173(&Local_5660, 1, uLocal_1023[0], "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&Local_5660, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 0);
				}
				ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 1, 0, 0, 0, 0);
				GlobalFunc_1998(1);
				iLocal_6095 = MISC::GET_GAME_TIMER();
				GlobalFunc_Checkpoint1(4, "Find the crate", 0, 0, 0, 1);
				GlobalFunc_574(628, 0);
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
				iLocal_6092++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_6095, 2000))
			{
				GlobalFunc_883(-1241.86f, 6796.08f, -180.88f, 1, 0);
				func_722(0);
				iLocal_6032 = 0;
				iLocal_6095 = MISC::GET_GAME_TIMER();
				GlobalFunc_159("DS2_TRACK_HELP", -1);
				iLocal_6092++;
			}
			else
			{
				GlobalFunc_7629();
				if (!func_794("DS2A_NOAPP"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_NOAPP", 8, 0, 0, 0))
							{
								func_791("DS2A_NOAPP", 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_794("DS2_SUB_CONT"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("DS2_SUB_CONT", -1);
					func_791("DS2_SUB_CONT", 1);
				}
			}
			if (GlobalFunc_836())
			{
				if (!func_794("DS2A_LIVEAPP"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_LIVEAPP", 8, 0, 0, 0))
							{
								func_791("DS2A_LIVEAPP", 1);
							}
						}
					}
				}
			}
			else if (iLocal_6032 == 0)
			{
				if (GlobalFunc_588(&iLocal_6095, 5000))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_164("DS2_LAPP", 7500, 0);
					iLocal_6032 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
				{
					if (GlobalFunc_9194(&Local_6574, ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1), 0.1f, 0.1f, 0.1f, 0, Local_4993[1 /*19*/], "DS2_USESON", "DS2_CONG", "DS2_CONGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (iLocal_6089 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
								{
									if (GlobalFunc_620())
									{
										HUD::CLEAR_PRINTS();
										GlobalFunc_619(0);
									}
								}
								else if (!GlobalFunc_620())
								{
									if (GlobalFunc_663("DS2_FLYGB", 0, 0))
									{
										HUD::CLEAR_PRINTS();
									}
									GlobalFunc_619(1);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							HUD::SET_BLIP_ALPHA(Local_6574.f_5, 0);
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1), 30f, 30f, 30f, 0, 1, 0))
							{
								if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO", 0))
								{
									if (!func_794("DS2A_SEEDEV"))
									{
										if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (!GlobalFunc_111())
											{
												if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SEEDEV", 8, 0, 0, 0))
												{
													func_791("DS2A_SEEDEV", 1);
												}
											}
										}
									}
									else
									{
										GlobalFunc_6685(1);
										GlobalFunc_5652(&Local_6574, 1, 0);
										iLocal_6092++;
									}
								}
							}
							else if (iLocal_6089 == 0)
							{
								if (func_794("DS2A_LIVEAPP"))
								{
									if (GlobalFunc_588(&iLocal_6095, 2000))
									{
										if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (func_265(0))
											{
												if (iLocal_6089 == 0)
												{
													if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P2", 8, 0, 0, 0))
													{
														iLocal_6095 = MISC::GET_GAME_TIMER();
														iLocal_6089 = 1;
													}
												}
											}
										}
									}
								}
							}
							else if (!func_794("DS2A_UPD1"))
							{
								if (GlobalFunc_588(&iLocal_6095, 30000))
								{
									if (!GlobalFunc_5172(&Local_6574, 1))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_UPD1", 8, 0, 0, 0))
											{
												func_791("DS2A_UPD1", 1);
												iLocal_6095 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (!func_794("DS2A_UPD2"))
							{
								if (GlobalFunc_588(&iLocal_6095, 24000))
								{
									if (!GlobalFunc_5172(&Local_6574, 1))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_UPD2", 8, 0, 0, 0))
											{
												func_791("DS2A_UPD2", 1);
												iLocal_6095 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (!func_794("DS2A_UPD3"))
							{
								if (GlobalFunc_588(&iLocal_6095, 24000))
								{
									if (!GlobalFunc_5172(&Local_6574, 1))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_UPD3", 8, 0, 0, 0))
											{
												func_791("DS2A_UPD3", 1);
												iLocal_6095 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
				{
					if (GlobalFunc_9194(&Local_6574, ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1), 0.1f, 0.1f, 0.1f, 0, Local_4993[1 /*19*/], "DS2_GETCON", "DS2_CONG", "DS2_CONGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (!func_794("DS2_CONTBLIP"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_6574.f_5, "DS2_CONTBLIP");
									func_791("DS2_CONTBLIP", 1);
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(1);
									if (HUD::DOES_BLIP_EXIST(uLocal_981))
									{
										HUD::REMOVE_BLIP(&uLocal_981);
									}
									func_717();
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Cargo", Local_4993[1 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", 0, 0);
									GlobalFunc_5652(&Local_6574, 1, 0);
									GlobalFunc_571(1, 628);
									GlobalFunc_835(0);
									GlobalFunc_6685(1);
									iLocal_6112 = 0;
									iLocal_6092++;
								}
								else if (!func_794("DS2_PICKUPCH"))
								{
									GlobalFunc_159("DS2_PICKUPCH", -1);
									func_791("DS2_PICKUPCH", 1);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], 0))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1), 40f, 40f, 40f, 0, 1, 0))
								{
									if (iLocal_6032 == 0)
									{
										HUD::CLEAR_PRINTS();
										HUD::CLEAR_HELP(1);
										if (!HUD::DOES_BLIP_EXIST(uLocal_981))
										{
											uLocal_981 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5909[1], 1));
										}
										GlobalFunc_164("DS2_RETCON", 7500, 0);
										iLocal_6032 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
			func_717();
			if (HUD::DOES_BLIP_EXIST(uLocal_981))
			{
				HUD::REMOVE_BLIP(&uLocal_981);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_4993[0 /*19*/], -1411.909f, 5957.873f, 40.3783f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4993[0 /*19*/], 221f);
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
			}
			iLocal_6092++;
			break;
		
		case 5:
			if (!func_794("DS2A_GETDEV"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_GETDEV", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
							func_791("DS2A_GETDEV", 1);
						}
					}
				}
			}
			else if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_CONTAINER"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_6092 = 0;
				iLocal_6112 = 0;
				iLocal_7010 = 7;
			}
			break;
	}
}



int func_722(int iParam0)//Position - 0x7693B
{
	if (GlobalFunc_10240(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_2264, 22);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_2264, 22);
		}
		return 1;
	}
	return 0;
}








void func_730()//Position - 0x7720B
{
	struct<3> Var0;
	
	if (!func_794("DS2A_SPLANE"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 1500f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[26 /*19*/], 0))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_4993[26 /*19*/], 1), 1))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[26 /*19*/]))
					{
						if (GlobalFunc_588(&iLocal_5860, 12000))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
							{
								AUDIO::START_AUDIO_SCENE("DH_2B_SEE_PLANE");
							}
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SPLANE", 8, 0, 0, 0))
							{
								func_791("DS2A_SPLANE", 1);
							}
						}
					}
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 250f, 250f, 130f, 0, 1, 0))
		{
			VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 0f);
		}
		else
		{
			VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 1f);
		}
	}
	if (iLocal_6092 > 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]))
			{
				if (!func_794("VEHICLE_WATER_SPLASH_HEAVY_SCRIPT"))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "VEHICLE_WATER_SPLASH_HEAVY_SCRIPT", Local_4993[1 /*19*/], 0, 0, 0);
					func_791("VEHICLE_WATER_SPLASH_HEAVY_SCRIPT", 1);
				}
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
				}
			}
			GlobalFunc_2781(500);
			iLocal_6032 = 0;
			GlobalFunc_4935();
			GlobalFunc_619(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_RELEASE_SUB");
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 0);
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 6.5f, 4);
			iLocal_6032 = 0;
			iLocal_6066 = 1;
			iLocal_6112 = 0;
			func_791("DS2_GRAP_HELP2", 0);
			GlobalFunc_Checkpoint1(3, "Drop the sub", 0, 0, 0, 1);
			iLocal_8298 = 0;
			iLocal_6092++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (GlobalFunc_9194(&Local_6574, -1388.26f, 6160.88f, 0.34f, 0.1f, 0.1f, 0.1f, 0, Local_4993[0 /*19*/], "DS2_RELSUB", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 250f, 250f, 130f, 0, 1, 0))
					{
						if (iLocal_8298 == 0)
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
							{
								iLocal_8298 = MISC::GET_GAME_TIMER();
							}
						}
						iLocal_8334 = 1;
						if (!func_794("DS2_GRAP_HELP2"))
						{
							GlobalFunc_159("DS2_GRAP_HELP2", -1);
							func_791("DS2_GRAP_HELP2", 1);
						}
						if (iLocal_6032 == 1)
						{
							if (GlobalFunc_663("DS2_FLYRET", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_981))
							{
								HUD::REMOVE_BLIP(&uLocal_981);
							}
							GlobalFunc_164("DS2_RELSUB", 7500, 0);
							iLocal_6032 = 0;
						}
						if (!func_731() || (ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]) && ENTITY::GET_ENTITY_HEIGHT(Local_4993[1 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 1, 1) < 1f))
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
								{
									if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
									{
										HUD::REMOVE_BLIP(&(Local_6574.f_5));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
									{
										VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
									}
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(1);
									GlobalFunc_729(&uLocal_1023, 1, 1);
									GlobalFunc_729(&uLocal_1023, 2, 0);
									Local_989.f_15 = 0;
									iLocal_8298 = MISC::GET_GAME_TIMER();
									iLocal_6092++;
								}
							}
						}
						else
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							if (!func_794("DS2A_P1c"))
							{
								if (Var0.f_2 > 100f)
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P1c", 8, 0, 0, 0))
									{
										func_791("DS2A_P1c", 1);
										iLocal_6113 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (GlobalFunc_588(&iLocal_6113, (15000 + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000))))
							{
								func_791("DS2A_P1c", 1);
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
							{
								PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 260f, 260f, 130f, 0, 1, 0))
						{
							if (iLocal_6032 == 0)
							{
								if (iLocal_8334 == 1)
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(1);
									GlobalFunc_164("DS2_FLYRET", 7500, 0);
									iLocal_6032 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_RELEASE_SUB");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4993[1 /*19*/], -1))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
			}
			iLocal_6092++;
			break;
		
		case 3:
			func_653(0, 0, 0, 0, 1, 0);
			if (Local_7048.f_1232)
			{
				if (GlobalFunc_8315() == 2 && iLocal_6112 == 0)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_4993[1 /*19*/], 0);
					func_791("SUB IN WATER", 1);
					GlobalFunc_2518(&uLocal_1023, 2, 0);
					if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_TREV_SUB"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4993[1 /*19*/], 1);
						}
						AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
						GlobalFunc_2785(&uLocal_1023);
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						Local_7048.f_1232 = 0;
						iLocal_6092++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(uLocal_1023[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						TASK::TASK_HELI_MISSION(uLocal_1023[0], Local_4993[0 /*19*/], Local_4993[1 /*19*/], 0, 0f, 0f, 0f, 12, 20f, 20f, -1f, 30, 20, -1082130432, 0);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
			}
			iLocal_5993 = 0;
			iLocal_6092 = 0;
			iLocal_7010 = 6;
			break;
	}
}

int func_731()//Position - 0x77927
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4993[1 /*19*/], -1331.4f, 6129.2f, 6.6f, -1284.1f, 6136.8f, 6f, 60f, 1, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_732()//Position - 0x77963
{
	func_584();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_1023[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
			}
		}
	}
	if (!func_794("TURN OFF PROOFS"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4993[6 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 1) > 30f)
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
					ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
					func_791("TURN OFF PROOFS", 1);
				}
			}
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SUB_PICKED_UP_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4993[6 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 1) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_SUB_PICKED_UP_SCENE");
				}
			}
		}
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1388.26f, 6160.88f, 0.34f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 2500f)
		{
			func_277(31, 0f, 0f, 0f, 0, 0, 1);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.633f, 3285.028f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 400f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5845))
				{
					PED::DELETE_PED(&iLocal_5845);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5846))
				{
					PED::DELETE_PED(&iLocal_5846);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[5 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[5 /*19*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_4993[5 /*19*/], 0);
					VEHICLE::DELETE_VEHICLE(&(Local_4993[5 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[6 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[6 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[6 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[4 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4993[4 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(0, 0));
				}
			}
		}
	}
	if (iLocal_6092 > 0)
	{
		GlobalFunc_587();
		if (!func_794("SEE THE SHIPS"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-164.3709f, 4176.941f, 30.3069f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 1000f)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), -164.3709f, 4176.941f, 30.3069f, 1))
				{
					if (func_277(28, 0f, 0f, 0f, 0, 0, 1))
					{
						func_791("SEE THE SHIPS", 1);
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						iLocal_5859 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		else if (!func_794("DS2A_SBOATS"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[27 /*19*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4993[27 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 300f)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[27 /*19*/]))
					{
						if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_4993[27 /*19*/], 1), 0))
						{
							if (GlobalFunc_588(&iLocal_5859, 4000))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_BOATS"))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
									{
										AUDIO::START_AUDIO_SCENE("DH_2B_SEE_BOATS");
									}
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SBOATS", 8, 0, 0, 0))
									{
										func_791("DS2A_SBOATS", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[27 /*19*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-164.3709f, 4176.941f, 30.3069f, ENTITY::GET_ENTITY_COORDS(Local_4993[27 /*19*/], 1), 0) < 300f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[27 /*19*/], 0))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_4993[27 /*19*/], 786469);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[28 /*19*/], 0))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_4993[28 /*19*/], 786469);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[29 /*19*/], 0))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_4993[29 /*19*/], 786469);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[27 /*19*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4993[27 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) > 700f)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
			}
		}
		if (!func_794("SEE THE PLANE"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 1000f)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), -1131.804f, 5913.641f, 25.2705f, 1))
				{
					if (func_277(29, 0f, 0f, 0f, 0, 0, 1))
					{
						func_791("SEE THE PLANE", 1);
						iLocal_5860 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		else if (!func_794("DS2A_SPLANE"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 1500f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[26 /*19*/], 0))
				{
					if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_4993[26 /*19*/], 1), 1))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4993[26 /*19*/]))
						{
							if (GlobalFunc_588(&iLocal_5860, 12000))
							{
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
								{
									AUDIO::START_AUDIO_SCENE("DH_2B_SEE_PLANE");
								}
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_SPLANE", 8, 0, 0, 0))
								{
									func_791("DS2A_SPLANE", 1);
								}
							}
						}
					}
				}
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			GlobalFunc_619(0);
			if (GlobalFunc_8315() != 0)
			{
				func_733(0, 1);
			}
			else
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
					GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
				}
				GlobalFunc_2511(&uLocal_1023, 0, 2, 1);
				GlobalFunc_Checkpoint1(2, "FLY_TO_SEA", 0, 0, 0, 1);
				iLocal_6089 = 0;
				VEHICLE::REMOVE_VEHICLE_RECORDING(33, "DHF2");
				iLocal_6092++;
			}
			break;
		
		case 1:
			GlobalFunc_2781(500);
			iLocal_6066 = 1;
			iLocal_6089 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
			}
			iLocal_6092++;
			break;
		
		case 2:
			if (GlobalFunc_9194(&Local_6574, -1388.26f, 6160.88f, 0.34f, 600f, 600f, 600f, 0, Local_4993[0 /*19*/], "DS2_FLY", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
						{
							iLocal_6092++;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
						{
							if (func_794("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									if (GlobalFunc_620())
									{
										HUD::CLEAR_PRINTS();
										GlobalFunc_619(0);
									}
								}
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_6574.f_5, 255);
								}
								if (GlobalFunc_663("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									HUD::REMOVE_BLIP(&uLocal_6046);
								}
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
								func_791("DROPPED THE SUB", 0);
							}
						}
						else if (!func_794("DROPPED THE SUB"))
						{
							if (iLocal_6089 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
								{
									if (!GlobalFunc_620())
									{
										HUD::CLEAR_PRINTS();
										GlobalFunc_619(1);
									}
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_6574.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], 0, fLocal_5865);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_6046))
								{
									uLocal_6046 = GlobalFunc_6783(Local_4993[1 /*19*/], 0, 0);
									GlobalFunc_5884("DS2_GIPOSFSUB");
								}
							}
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							func_791("DROPPED THE SUB", 1);
						}
					}
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (func_265(0))
						{
							if (iLocal_6089 == 0)
							{
								if (!func_794("DS2A_P1"))
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P1", 8, 0, 0, 0))
									{
										func_791("DS2A_P1", 1);
										iLocal_6089 = 1;
									}
								}
							}
							else if (!func_794("DS2A_P1a"))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 850f, 850f, 850f, 0, 1, 0))
								{
									if (!PED::IS_PED_INJURED(uLocal_1023[1]))
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_1023[1]))
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_P1a", 8, 0, 0, 0))
											{
												func_791("DS2A_P1a", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_6089 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
					{
						if (GlobalFunc_620() && !func_794("DROPPED THE SUB"))
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_619(0);
						}
					}
					else if (!GlobalFunc_620())
					{
						if (GlobalFunc_663("DS2_FLYGB", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						GlobalFunc_619(1);
					}
				}
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			func_714();
			iLocal_6092++;
			break;
		
		case 4:
			iLocal_5993 = 0;
			iLocal_6092 = 0;
			iLocal_6032 = 0;
			iLocal_7010 = 5;
			break;
	}
}

int func_733(int iParam0, bool bParam1)//Position - 0x783D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_736(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_403(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_60(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_736(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x78591
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8364(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11318(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11333(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}


void func_738()//Position - 0x7864B
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1723.261f, 3262.076f, 40.15289f, 1743.889f, 3271.97f, 45.1896f, 7.4375f, 0, 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4993[0 /*19*/]) != 1)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4993[0 /*19*/], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4993[1 /*19*/]) != 1)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4993[1 /*19*/], 1);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		iLocal_5833 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/]);
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5833))
			{
				if (!func_794("DS2_REL_WRONG"))
				{
					GlobalFunc_159("DS2_REL_WRONG", -1);
					func_791("DS2_REL_WRONG", 1);
				}
			}
			else if (GlobalFunc_74("DS2_REL_WRONG"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		else if (GlobalFunc_74("DS2_REL_WRONG"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
				{
					if (!func_794("DS2_GRAPPLEH"))
					{
						VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_4993[0 /*19*/], fLocal_5864, fLocal_5863, 0);
						HUD::CLEAR_HELP(1);
						GlobalFunc_159("DS2_GRAPPLEH", -1);
						func_791("DS2_GRAPPLEH", 1);
					}
				}
				else if (!func_794("DS2_GRAP_HELP1"))
				{
					GlobalFunc_159("DS2_GRAP_HELP1", -1);
					func_791("DS2_GRAP_HELP1", 1);
				}
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 103, 1);
				}
			}
			if (GlobalFunc_74("DS2_GRAPPLEH"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	if (!func_794("DH2B_START"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_START"))
				{
					func_791("DH2B_START", 1);
					RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
				}
			}
		}
	}
	if (!func_794("BUDDIES LEAVE"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.633f, 3285.028f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_5845))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1728.44f, 3294.27f, 41.22f, 1f, 45000, 0.25f, 0, -112.87f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_5845, uLocal_6267);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_5846))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1727.38f, 3293.09f, 41.2f, 1f, 45000, 0.25f, 0, -144.39f);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_5846, uLocal_6267);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			func_791("BUDDIES LEAVE", 1);
		}
	}
	if (!func_794("ASSIGN TREVOR GET IN SUB"))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[2]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[2], 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(uLocal_1023[2], 0);
				if (PED::IS_PED_IN_ANY_HELI(uLocal_1023[2]))
				{
					if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.1f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 0.2f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_1023[2], uLocal_6267);
							PED::REMOVE_PED_FROM_GROUP(uLocal_1023[2]);
							func_791("ASSIGN TREVOR GET IN SUB", 1);
							STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_1023[2], uLocal_6267);
					PED::REMOVE_PED_FROM_GROUP(uLocal_1023[2]);
					func_791("ASSIGN TREVOR GET IN SUB", 1);
					STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1023[2], uLocal_6267);
				PED::REMOVE_PED_FROM_GROUP(uLocal_1023[2]);
				func_791("ASSIGN TREVOR GET IN SUB", 1);
				STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
			}
		}
	}
	else if (!func_794("PLAY GET IN ANIM"))
	{
		STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
		if (STREAMING::HAS_ANIM_DICT_LOADED("missdocksheist2bfinale"))
		{
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				if (func_741(uLocal_1023[2], 1738.64f, 3267.09f, 41.18f, 25f, 0.3f, 0.3f, 0.3f, 1135869952, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1738.64f, 3267.09f, 41.18f, 1f, 1f, 1f, 0, 1, 2))
				{
					uLocal_8327 = PED::CREATE_SYNCHRONIZED_SCENE(1738.643f, 3267.095f, 41.179f, 0f, 0f, 25f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1023[2], uLocal_8327, "missdocksheist2bfinale", "get_in_sub", 8f, -1000f, 2052, 16, 4f, 0);
					func_791("PLAY GET IN ANIM", 1);
				}
			}
		}
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_8327))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_8327) > 0.768f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_8327) < 0.99f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_4993[1 /*19*/], 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_1023[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_8327))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_8327) > 0.99f)
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1023[2]);
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4993[1 /*19*/], 0, 1);
							STREAMING::REMOVE_ANIM_DICT("missdocksheist2bfinale");
						}
					}
				}
			}
		}
	}
	switch (iLocal_6092)
	{
		case 0:
			iLocal_6032 = 0;
			iLocal_6089 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
			}
			GlobalFunc_619(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_4993[0 /*19*/], 0f);
				VEHICLE::_0xE5810AC70602F2F5(Local_4993[0 /*19*/], 0f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
				ENTITY::SET_ENTITY_PROOFS(Local_4993[1 /*19*/], 0, 0, 0, 1, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1023[2], 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_1023[2], 29, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
			}
			GlobalFunc_Checkpoint1(1, "PICK_UP_THE_SUB_FROM_AIRSTRIP", 0, 0, 0, 1);
			GlobalFunc_729(&uLocal_1023, 2, 0);
			GlobalFunc_5652(&Local_6574, 0, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_ATTACH_SUB");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			GlobalFunc_1998(1);
			GlobalFunc_5105();
			GlobalFunc_2781(500);
			iLocal_6066 = 1;
			iLocal_6089 = 0;
			iLocal_6092++;
			break;
		
		case 1:
			if (!func_794("DS2A_TGIS"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_TGIS", 8, 0, 0, 0))
						{
							func_791("DS2A_TGIS", 1);
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
				{
					if (!func_794("DS2A_CHOP"))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_CHOP", 8, 0, 0, 0))
								{
									func_791("DS2A_CHOP", 1);
								}
							}
						}
					}
					else
					{
						iLocal_8328 = MISC::GET_GAME_TIMER();
						iLocal_6092++;
					}
				}
				else if (!func_794("DS2A_CHOP"))
				{
					if (!GlobalFunc_5172(&Local_6574, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_CHOP", 8, 0, 0, 0))
							{
								func_791("DS2A_CHOP", 1);
							}
						}
					}
				}
				else
				{
					iLocal_8328 = MISC::GET_GAME_TIMER();
					iLocal_6092++;
				}
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_8327))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_8327) < 0.1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
						}
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_8327) && !PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
					}
				}
				else if (!func_794("DS2A_GETIN"))
				{
					if (GlobalFunc_588(&iLocal_8328, MISC::GET_RANDOM_INT_IN_RANGE(20000, 24000)))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_GETIN", 8, 0, 0, 0))
								{
									func_791("DS2A_GETIN", 1);
									iLocal_8328 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_8328, MISC::GET_RANDOM_INT_IN_RANGE(20000, 24000)))
				{
					func_791("DS2A_GETIN", 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0) && !PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5903[0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_5903[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sub_cover_01"));
				}
				if (func_739(&Local_6574, ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 0.1f, 0.1f, 0.1f, 0, uLocal_1023[1], Local_4993[0 /*19*/], "DS2_GIPOSFSUB", "", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0) && !PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
						{
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_6574.f_5, 0);
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
							}
							if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_6574.f_5, 255);
							}
							if (GlobalFunc_663("DS2A_WAITTREV", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
						}
					}
					if (!func_794("DS2_SUBBLIP"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_6574.f_5, "DS2_SUBBLIP");
							func_791("DS2_SUBBLIP", 1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
					{
						if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
						{
							if (!func_794("DS2_GRAP_HELP1"))
							{
								GlobalFunc_159("DS2_GRAP_HELP1", -1);
								func_791("DS2_GRAP_HELP1", 1);
							}
						}
						else if (GlobalFunc_74("DS2_GRAP_HELP1"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (HUD::GET_BLIP_COLOUR(Local_6574.f_5) != 3)
						{
							HUD::SET_BLIP_COLOUR(Local_6574.f_5, 3);
						}
						if (PED::IS_PED_IN_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], 0))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_4993[0 /*19*/]))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(1);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
									{
										VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_4993[1 /*19*/], 1);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
										VEHICLE::SET_VEHICLE_LIGHTS(Local_4993[1 /*19*/], 4);
									}
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_4993[0 /*19*/], Local_4993[1 /*19*/], fLocal_5865);
									if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
									{
										HUD::REMOVE_BLIP(&(Local_6574.f_5));
									}
									GlobalFunc_5652(&Local_6574, 1, 0);
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
									{
										AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
									}
									AUDIO::START_AUDIO_SCENE("DH_2B_SUB_PICKED_UP_SCENE");
									iLocal_6089 = 0;
									iLocal_6092++;
								}
								else
								{
									if (func_794("DS2A_GSUB_DONE"))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4993[0 /*19*/], 1723.023f, 3291.411f, 39.20444f, 1740.888f, 3254.186f, 69.64639f, 36f, 0, 1, 0))
										{
											if (!func_794("DS2A_LOWER"))
											{
												if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4993[0 /*19*/]) > 56.2049f)
												{
													if (!GlobalFunc_5172(&Local_6574, 1))
													{
														if (!GlobalFunc_111())
														{
															if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_LOWER", 8, 0, 0, 0))
															{
																func_791("DS2A_LOWER", 1);
																iLocal_8329 = MISC::GET_GAME_TIMER();
															}
														}
													}
												}
											}
											else if (GlobalFunc_588(&iLocal_8329, MISC::GET_RANDOM_INT_IN_RANGE(14000, 16000)))
											{
												func_791("DS2A_LOWER", 0);
											}
										}
										else if (!func_794("DS2A_FLYOFF"))
										{
											if (!GlobalFunc_5172(&Local_6574, 1))
											{
												if (!GlobalFunc_111())
												{
													if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYOFF", 8, 0, 0, 0))
													{
														func_791("DS2A_FLYOFF", 1);
														iLocal_8329 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										else if (GlobalFunc_588(&iLocal_8329, MISC::GET_RANDOM_INT_IN_RANGE(14000, 16000)))
										{
											func_791("DS2A_FLYOFF", 0);
										}
									}
									if (!func_794("FLYING SKILL AIRSTRIP"))
									{
										if (GlobalFunc_485(71))
										{
											if ((GlobalFunc_2784(0, 0) == 2 || GlobalFunc_2784(0, 0) == 3) && (GlobalFunc_2784(0, 1) == 2 || GlobalFunc_2784(0, 1) == 3))
											{
												if (!GlobalFunc_5172(&Local_6574, 1))
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYLOT", 8, 0, 0, 0))
														{
															func_791("FLYING SKILL AIRSTRIP", 1);
														}
													}
												}
											}
											else if (!GlobalFunc_5172(&Local_6574, 1))
											{
												if (!GlobalFunc_111())
												{
													if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FEWFLY", 8, 0, 0, 0))
													{
														func_791("FLYING SKILL AIRSTRIP", 1);
													}
												}
											}
										}
										else if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (!GlobalFunc_111())
											{
												if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_NOFLY", 8, 0, 0, 0))
												{
													func_791("FLYING SKILL AIRSTRIP", 1);
												}
											}
										}
									}
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
					{
						if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (func_265(0))
							{
								if (iLocal_6089 == 0)
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_PSUB", 8, 0, 0, 0))
									{
										iLocal_6089 = 1;
										iLocal_5848 = MISC::GET_GAME_TIMER();
									}
								}
								else if (!func_794("DS2A_GSUB"))
								{
									if (GlobalFunc_588(&iLocal_5848, 7000))
									{
										if (!GlobalFunc_5172(&Local_6574, 1))
										{
											if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_GSUB", 8, 0, 0, 0))
											{
												func_791("DS2A_GSUB", 1);
												func_791("DS2A_GSUB_DONE", 1);
												iLocal_6095 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (GlobalFunc_588(&iLocal_6095, 16000))
								{
									func_791("DS2A_GSUB", 0);
								}
							}
						}
					}
					if (iLocal_6089 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (GlobalFunc_620())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_619(0);
							}
						}
						else if (!GlobalFunc_620())
						{
							if (GlobalFunc_663("DS2_FLYGB", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							GlobalFunc_619(1);
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				iLocal_6092++;
			}
			break;
		
		case 4:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_SUB"))
				{
					iLocal_6092++;
				}
			}
			break;
		
		case 5:
			if (!func_794("DS2A_GRABBED"))
			{
				if (!GlobalFunc_5172(&Local_6574, 1))
				{
					if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_GRABBED", 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						func_791("DS2A_GRABBED", 1);
					}
				}
			}
			else
			{
				func_653(0, 0, 1, 1, 0, 0);
				if (GlobalFunc_8315() == 0 && iLocal_6112 == 0)
				{
					func_282(Local_4993[0 /*19*/], GlobalFunc_6814(0, 5));
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_5993 = 0;
					iLocal_6092 = 0;
					iLocal_6032 = 0;
					iLocal_7010 = 4;
				}
			}
			break;
	}
}

bool func_739(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x797D1
{
	return func_740(uParam0, Param1, Param4, iParam7, uParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_740(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x79805
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_741(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, float fParam8, int iParam9)//Position - 0x7984F
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam9 == 0)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param5, 0, 1, 0) && GlobalFunc_2786(iParam0, fParam4, fParam8))
				{
					return 1;
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param5, 0, 1, 0) && GlobalFunc_2786(iParam0, fParam4, fParam8))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_743()//Position - 0x79978
{
	var uVar0[1];
	
	func_750();
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[3 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[3 /*19*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[3 /*19*/], 0))
			{
				if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), Local_4993[3 /*19*/], -1, 0, 0))
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.819f, 3270.454f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 300f)
		{
			func_277(17, 1750.633f, 3285.028f, 40.0871f, 134.9916f, 0, 1);
		}
	}
	else
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.819f, 3270.454f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 350f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4993[0 /*19*/]));
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob3"));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4993[0 /*19*/]) != 2)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4993[0 /*19*/], 2);
			}
		}
	}
	if (iLocal_8324 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[5 /*19*/]))
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!func_794("GO TO AI RECORDING"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1728.97f, 3264.86f, 41.22f, ENTITY::GET_ENTITY_COORDS(Local_4993[5 /*19*/], 1), 1) < 2f)
					{
					}
				}
			}
			else if (!func_794("GO TO AI RECORDING"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[6 /*19*/], 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4993[5 /*19*/], 1);
					func_791("GO TO AI RECORDING", 1);
				}
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.675f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 560f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
		{
			func_277(21, 1730.73f, 3265.25f, 41.16f, -124.36f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			func_277(20, 1729.204f, 3262.776f, 40.1735f, 274.1224f, 0, 1);
		}
		if (iLocal_8323 == 0)
		{
			if (iLocal_8324 == 0)
			{
				if (func_277(8, 1745.6f, 3418.234f, 36.9515f, 209.7394f, 0, 1))
				{
					iLocal_8323 = 1;
				}
			}
		}
		else if (iLocal_8324 == 0)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(34, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(35, "DHF2");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(34, "DHF2") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "DHF2"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[6 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[5 /*19*/]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[6 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[5 /*19*/], 34, "DHF2", 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4993[6 /*19*/], 35, "DHF2", 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4993[5 /*19*/], 1.2f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4993[6 /*19*/], 1.2f);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
					{
						if (!PED::IS_PED_INJURED(iLocal_5845) && !PED::IS_PED_INJURED(iLocal_5846))
						{
							if (!GlobalFunc_1533(iLocal_5845, Local_4993[5 /*19*/], -1))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_5845, Local_4993[5 /*19*/], -1);
							}
							if (!GlobalFunc_1533(iLocal_5846, Local_4993[5 /*19*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_5846, Local_4993[5 /*19*/], 0);
							}
							iLocal_8324 = 1;
						}
					}
				}
			}
		}
		if (iLocal_8324 == 1)
		{
			if (iLocal_8323 == 0)
			{
				if (func_277(9, 1728.97f, 3264.86f, 40.0871f, 116.37f, 0, 1))
				{
					iLocal_8323 = 1;
				}
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.633f, 3285.028f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 650f)
	{
		if (iLocal_8324 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[5 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4993[5 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4993[1 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[6 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4993[6 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
			}
			if (iLocal_8323 == 1)
			{
				iLocal_8323 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
			{
				PED::DELETE_PED(&iLocal_5845);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				PED::DELETE_PED(&iLocal_5846);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4993[1 /*19*/]) != 2)
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4993[1 /*19*/], 0);
			}
		}
	}
	if (!func_794("DH_2B_DRIVE_TO_AIRSTRIP"))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
				func_791("DH_2B_DRIVE_TO_AIRSTRIP", 1);
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			}
		}
	}
	if (iLocal_6092 > 0)
	{
		GlobalFunc_587();
	}
	switch (iLocal_6092)
	{
		case 0:
			GlobalFunc_619(0);
			if (GlobalFunc_8315() != 0)
			{
				func_733(0, 1);
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_AREA_OCCUPIED(Vector(4.600849f, -1520.604f, -1155.634f) - Vector(1.5f, 4.5f, 3.5f), Vector(4.600849f, -1520.604f, -1155.634f) + Vector(1.5f, 4.5f, 3.5f), 0, 1, 0, 0, 0, 0, 0))
					{
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&Local_5660, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1023[2], joaat("weapon_unarmed"), 0);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_1023[2], 150);
					GlobalFunc_173(&Local_5660, 2, uLocal_1023[2], "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					GlobalFunc_173(&Local_5660, 3, uLocal_1023[1], "FRANKLIN", 0, 1);
				}
				GlobalFunc_2511(&uLocal_1023, 0, 2, 1);
				PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
				{
					uVar0[0] = Local_4993[4 /*19*/];
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[0], 0) && GlobalFunc_634(uVar0[0], &Local_6574, 3))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]) && PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						TASK::TASK_ENTER_VEHICLE(uLocal_1023[2], uVar0[0], 20000, 0, 1f, 1, 0);
						TASK::TASK_ENTER_VEHICLE(uLocal_1023[1], uVar0[0], 20000, 2, 1f, 1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_1023[2], 1f);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_1023[1], 1f);
				}
				GlobalFunc_4927(38, 0);
				GlobalFunc_7621(94, 1, 0, 1, 0);
				iLocal_8323 = 0;
				iLocal_8324 = 0;
				sLocal_8325 = "DS2_GTAIR";
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_6092++;
			}
			break;
		
		case 1:
			GlobalFunc_2781(500);
			iLocal_6066 = 1;
			iLocal_6089 = 0;
			if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_WHERET", 8, 0, 0, 0))
			{
				iLocal_6092++;
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				sLocal_8325 = "DS2_GTAIRFLY";
			}
			else
			{
				sLocal_8325 = "DS2_GTAIR";
			}
			if (func_748(&Local_6574, 1757.819f, 3270.454f, 40.2458f, 0.001f, 0.001f, 2f, 1, uLocal_1023[2], uLocal_1023[1], 0, sLocal_8325, "DS2_LEFTTREV", "DS2_LEFTFRAN", "", "DS2_WAITCREW", "DS2_FINDCAR", "DS2_AIRGBV", 0, 1, 3, 1, -1))
			{
			}
			else
			{
				func_746(uLocal_1023[1], &uLocal_6035);
				func_746(uLocal_1023[2], &uLocal_6036);
				if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
				{
					if (iLocal_5867 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_5867);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.819f, 3270.454f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 10f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1718.159f, 3255.241f, 39.38364f, 1760.722f, 3296.343f, 48.13359f, 39.25f, 0, 1, 0))
					{
						if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 8f, 1, 1056964608, 0, 1))
						{
							if (!PED::IS_PED_INJURED(uLocal_1023[1]))
							{
								TASK::TASK_PAUSE(uLocal_1023[1], 3000);
							}
							RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
							GlobalFunc_5105();
							iLocal_6092++;
						}
					}
					if (iLocal_6089 == 0)
					{
						if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), uLocal_1023[2]) && GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), uLocal_1023[1]))
						{
							if (!func_794("DS2A_DRI"))
							{
								if (!GlobalFunc_5172(&Local_6574, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_DRI", 8, 0, 0, 0))
										{
											func_791("DS2A_DRI", 1);
											iLocal_6089 = 1;
										}
									}
								}
							}
						}
					}
					else if (!func_794("DS2A_DRIb"))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_DRIb", 8, 0, 0, 0))
						{
							func_791("DS2A_DRIb", 1);
						}
					}
					else if (!func_794("FLYING SKILL"))
					{
						if (GlobalFunc_485(71))
						{
							if ((GlobalFunc_2784(0, 0) == 2 || GlobalFunc_2784(0, 0) == 3) && (GlobalFunc_2784(0, 1) == 2 || GlobalFunc_2784(0, 1) == 3))
							{
								if (!GlobalFunc_5172(&Local_6574, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYVG", 8, 0, 0, 0))
										{
											func_791("FLYING SKILL", 1);
										}
									}
								}
							}
							else if (!GlobalFunc_5172(&Local_6574, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYOK", 8, 0, 0, 0))
									{
										func_791("FLYING SKILL", 1);
									}
								}
							}
						}
						else if (!GlobalFunc_5172(&Local_6574, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_FLYSH", 8, 0, 0, 0))
								{
									func_791("FLYING SKILL", 1);
								}
							}
						}
					}
					else if (!func_794("DS2A_1"))
					{
						if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_1", 8, 0, 0, 0))
						{
							func_791("DS2A_1", 1);
						}
					}
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1713.685f, 3246.191f, 39.57296f, 1786.573f, 3298.622f, 44.28436f, 53.5f, 0, 1, 0))
							{
								GlobalFunc_5105();
								GlobalFunc_5652(&Local_6574, 1, 0);
								iLocal_6092++;
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.633f, 3285.028f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
				{
					if (!func_794("ASSIGN BUDDY TASKS"))
					{
						if (iLocal_8324 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[5 /*19*/]))
								{
									if (!PED::IS_PED_INJURED(iLocal_5845))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_5845, 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1730.73f, 3265.25f, 41.16f, 1f, 45000, 0.25f, 0, -124.36f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_5845, uLocal_6267);
									}
									if (!PED::IS_PED_INJURED(iLocal_5846))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_6267);
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_5846, 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1729.204f, 3262.776f, 40.1735f, 1f, 45000, 0.25f, 0, 274.1224f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_6267);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_5846, uLocal_6267);
									}
									func_791("ASSIGN BUDDY TASKS", 1);
								}
							}
						}
					}
				}
				if (iLocal_6092 == 2)
				{
					if (iLocal_6089 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
						{
							if (GlobalFunc_620())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_619(0);
							}
						}
						else if (!GlobalFunc_620())
						{
							if (GlobalFunc_663("DS2_AIRGB", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							GlobalFunc_619(1);
						}
					}
				}
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_6574.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_6574.f_5));
			}
			GlobalFunc_5105();
			func_714();
			iLocal_8326 = MISC::GET_GAME_TIMER();
			iLocal_6092++;
			break;
		
		case 4:
			if (!func_794("DS2A_ARRIVE"))
			{
				if (GlobalFunc_10607(&Local_5660, "D2BAUD", "DS2A_ARRIVE", 8, 0, 0, 0) || GlobalFunc_588(&iLocal_8326, 2000))
				{
					RECORDING::_0x293220DA1B46CEBC(7f, 4f, 3);
					func_791("DS2A_ARRIVE", 1);
				}
			}
			else
			{
				iLocal_5993 = 0;
				iLocal_6092 = 0;
				iLocal_6032 = 0;
				iLocal_7010 = 3;
			}
			break;
	}
}



void func_746(int iParam0, var uParam1)//Position - 0x7A843
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		if (!*uParam1)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(uLocal_1023[1], 1);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			iVar2 = GlobalFunc_708(iParam0);
			if (iVar1 == joaat("bodhi2") && (iVar2 != -1 && iVar2 != 0))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 106, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0, 107, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0, 108, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0, 109, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0, 110, 1);
			}
		}
		*uParam1 = 1;
	}
	else
	{
		if (*uParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 106, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 107, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 108, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 109, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 110, 0);
		}
		*uParam1 = 0;
	}
}


bool func_748(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, var uParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, bool bParam18, bool bParam19, int iParam20, bool bParam21, int iParam22)//Position - 0x7A97E
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, uParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, sParam16, bParam18, bParam19, sParam17, 0, iParam20, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}


void func_750()//Position - 0x7AA03
{
	switch (iLocal_8321)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4993[5 /*19*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1728.97f, 3264.86f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
					{
						AUDIO::_0x9D3AF56E94C9AE98(Local_4993[5 /*19*/], 500f);
						iLocal_8322 = MISC::GET_GAME_TIMER();
						iLocal_8321++;
					}
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0))
			{
				if (GlobalFunc_588(&iLocal_8322, 1000))
				{
					AUDIO::_0x9D3AF56E94C9AE98(Local_4993[5 /*19*/], 600f);
					iLocal_8321++;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[5 /*19*/], 0))
			{
				if (GlobalFunc_588(&iLocal_8322, 1000))
				{
					AUDIO::_0x9D3AF56E94C9AE98(Local_4993[5 /*19*/], 800f);
					iLocal_8321++;
				}
			}
			break;
	}
}

void func_751()//Position - 0x7AAF1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	int iVar10;
	
	iLocal_6069 = 1;
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[4 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[4 /*19*/], 0))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_4993[4 /*19*/]);
		}
	}
	if (iLocal_6060 == 0)
	{
		if (iLocal_6063)
		{
			GlobalFunc_2781(500);
			iLocal_6063 = 0;
		}
		else if (iLocal_6062 == 0)
		{
			MISC::SET_WEATHER_TYPE_PERSIST("extrasunny");
			iLocal_6069 = 1;
			if (GlobalFunc_8315() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_INT", 8);
			}
			if (GlobalFunc_8315() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LSDH_2B_INT", 124, 8);
			}
			if (GlobalFunc_8315() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LSDH_2B_INT", 112, 8);
			}
			if (!PED::IS_PED_INJURED(Global_86864.f_9[2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
				uLocal_1023[2] = Global_86864.f_9[2];
			}
			if (!PED::IS_PED_INJURED(Global_86864.f_9[3]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
				uLocal_1023[0] = Global_86864.f_9[3];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5832))
			{
				iLocal_5832 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1158.581f, -1519.247f, 9.6308f, 2f, joaat("v_res_tre_sofa_mess_c"), 1, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_5832, 0);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.80476f, -1523.046f, -1157.174f) - Vector(1.75f, 65f, 65f), Vector(4.80476f, -1523.046f, -1157.174f) + Vector(1.75f, 65f, 65f), 0, 1);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			iLocal_8320 = 0;
			iLocal_6064 = 0;
			iLocal_6062++;
		}
		else if (iLocal_6062 == 1)
		{
			if (GlobalFunc_Has_Cutscene_Loaded())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				else
				{
					SYSTEM::WAIT(0);
				}
				if (GlobalFunc_8315() != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
					{
						while (!func_277(5, -1155.21f, -1517.32f, 3.36f, 0f, 0, 1))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_8320 = 1;
					}
				}
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9134(&uLocal_1023, 0);
						func_60(&uLocal_1023, 1, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[2], iLocal_1068);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_1023[2]);
					}
				}
				if (GlobalFunc_8315() == 1)
				{
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9134(&uLocal_1023, 0);
						func_60(&uLocal_1023, 1, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_1023[1], iLocal_1068);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_1023[1]);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 0, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "Wade", 1, joaat("ig_wade"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 0, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[1], "Floyd", 1, joaat("ig_floyd"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_1023[2], 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[2], "Trevor", 0, joaat("player_two"), 0);
					}
				}
				else if (GlobalFunc_8315() != 2)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("player_two"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_1023[1], 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[1], "Franklin", 0, joaat("player_one"), 0);
					}
				}
				else if (GlobalFunc_8315() != 1)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, joaat("player_one"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_1023[0], 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_1023[0], "Michael", 0, joaat("player_zero"), 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6065))
				{
				}
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				if (GlobalFunc_8315() == 2)
				{
					CUTSCENE::START_CUTSCENE(256);
				}
				else if (GlobalFunc_8315() == 0)
				{
					CUTSCENE::START_CUTSCENE(0);
				}
				else if (GlobalFunc_8315() == 1)
				{
					CUTSCENE::START_CUTSCENE(256);
				}
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_8316(1, 1, 1, 0);
				iLocal_6061 = 0;
				iLocal_6060 = 1;
			}
		}
	}
	if (iLocal_6060 == 1)
	{
		if (!iLocal_6061)
		{
			if (iLocal_6064 == 1)
			{
				if (GlobalFunc_588(&iLocal_8319, 2000))
				{
					if (GlobalFunc_1080())
					{
						iLocal_6061 = 1;
					}
				}
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_6064 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")) && GlobalFunc_5667(ENTITY::GET_ENTITY_MODEL(iVar0), GlobalFunc_625(), 1))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							MISC::GET_MODEL_DIMENSIONS(iVar1, &Var2, &Var5);
							fVar8 = (-Var2.f_2 + Var5.f_2);
							if (GlobalFunc_99(iVar0) == 2 || fVar8 > 2.6f)
							{
								VEHICLE::DELETE_VEHICLE(&iVar0);
							}
							else if (!GlobalFunc_5886(2, 1, -1150.452f, -1531.427f, 3.2486f, 5f))
							{
								GlobalFunc_9754(iVar0, -1157.646f, -1522.122f, 3.3238f, 35.2272f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1157.646f, -1522.122f, 3.3238f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 35.2272f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
							else if (!MISC::IS_POSITION_OCCUPIED(-1155.505f, -1520.131f, 3.3472f, 5f, 0, 1, 0, 0, 0, 0, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, -1155.505f, -1520.131f, 3.3472f, 5f, 5f, 5f, 0, 1, 0))
							{
								GlobalFunc_9754(iVar0, -1155.505f, -1520.131f, 3.3472f, 35.1124f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1155.505f, -1520.131f, 3.3472f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 35.1124f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
							else
							{
								GlobalFunc_9754(iVar0, -1191.065f, -1504.345f, 3.3697f, 303.3213f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1191.065f, -1504.345f, 3.3697f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 303.3213f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
						}
					}
				}
				MISC::CLEAR_AREA(-1154.612f, -1520.07f, 3.3456f, 20f, 1, 0, 0, 0);
				GlobalFunc_76(24);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[0]))
					{
						if (PED::IS_PED_WEARING_HELMET(uLocal_1023[0]))
						{
							PED::REMOVE_PED_HELMET(uLocal_1023[0], 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (PED::IS_PED_WEARING_HELMET(uLocal_1023[1]))
						{
							PED::REMOVE_PED_HELMET(uLocal_1023[1], 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (PED::IS_PED_WEARING_HELMET(uLocal_1023[2]))
						{
							PED::REMOVE_PED_HELMET(uLocal_1023[2], 1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
				}
				iLocal_6065 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 49);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					GlobalFunc_11047(uLocal_1023[1], 41);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
				{
					GlobalFunc_11047(uLocal_1023[2], 47);
				}
				CAM::STOP_GAMEPLAY_HINT(1);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
				iLocal_8319 = MISC::GET_GAME_TIMER();
				iLocal_6064 = 1;
			}
		}
		if (!GlobalFunc_5886(2, 1, -1154.603f, -1524.279f, 3.2583f, 40f))
		{
			if (iLocal_8320 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[3 /*19*/]))
				{
					if (!MISC::IS_POSITION_OCCUPIED(-1155.508f, -1520.122f, 3.3467f, 5f, 0, 1, 0, 0, 0, 0, 0))
					{
						func_277(0, -1155.508f, -1520.122f, 3.3467f, 35.335f, 0, 1);
					}
					else if (!MISC::IS_POSITION_OCCUPIED(-1158.488f, -1529.37f, 3.2503f, 5f, 0, 1, 0, 0, 0, 0, 0))
					{
						func_277(0, -1158.488f, -1529.37f, 3.2503f, 35.6275f, 0, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[3 /*19*/]))
			{
				if (!MISC::IS_POSITION_OCCUPIED(-1155.508f, -1520.122f, 3.3467f, 5f, 0, 1, 0, 0, 0, 0, 0))
				{
					func_277(0, -1155.508f, -1520.122f, 3.3467f, 35.335f, 0, 1);
				}
				else if (!MISC::IS_POSITION_OCCUPIED(-1158.488f, -1529.37f, 3.2503f, 5f, 0, 1, 0, 0, 0, 0, 0))
				{
					func_277(0, -1158.488f, -1529.37f, 3.2503f, 35.6275f, 0, 1);
				}
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 134367)
		{
			if (!func_794("PRELOAD OUTFITS"))
			{
				GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 49);
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					GlobalFunc_11047(uLocal_1023[1], 41);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					GlobalFunc_11047(uLocal_1023[2], 47);
				}
				func_791("PRELOAD OUTFITS", 1);
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 144367)
		{
			if (!func_794("SWITCH OUTFIT"))
			{
				GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 49);
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_5128(0);
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					GlobalFunc_11047(uLocal_1023[1], 41);
					GlobalFunc_11257(uLocal_1023[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_5128(1);
				}
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					GlobalFunc_11047(uLocal_1023[2], 47);
					GlobalFunc_11257(uLocal_1023[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_5128(2);
				}
				func_791("SWITCH OUTFIT", 1);
			}
		}
		if (iLocal_6064 == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
			{
				iVar9 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					uLocal_1023[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
			{
				iVar10 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar10))
				{
					uLocal_1023[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!iLocal_6061)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1153.01f, -1524.73f, 4.26f, 1f, 20000, 1048576000, 0, 1193033728);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_1023[2], 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_1023[1], 1);
					PED::FORCE_PED_MOTION_STATE(uLocal_1023[1], -668482597, 1, 1, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_6064 == 1)
			{
				iLocal_6060 = 2;
			}
		}
	}
	if (iLocal_6060 == 2)
	{
		if (iLocal_6061)
		{
			RECORDING::_0x13B350B8AD0EEE10();
			CUTSCENE::STOP_CUTSCENE(0);
			if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_2787(500);
			}
			while (!func_277(4, -1155.21f, -1517.32f, 3.36f, 0, 0, 1) || !func_277(3, -1157.92f, -1519.33f, 3.36f, 0, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 49);
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_11047(uLocal_1023[1], 41);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				GlobalFunc_11047(uLocal_1023[2], 47);
			}
			while (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
			while (!PED::IS_PED_INJURED(uLocal_1023[2]) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_1023[2]))
			{
				SYSTEM::WAIT(0);
			}
			while (!PED::IS_PED_INJURED(uLocal_1023[1]) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_1023[1]))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11257(uLocal_1023[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11257(uLocal_1023[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5128(0);
			GlobalFunc_5128(2);
			GlobalFunc_5128(1);
			func_755(0);
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1149.655f, -1521.854f, 3.3298f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.515f);
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_1023[2], -1148.603f, -1525.542f, 3.3486f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_1023[2], 79.3802f);
			}
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_1023[1], -1148.945f, -1523.281f, 3.3434f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_1023[1], 48.7325f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5832))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_5832, 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_5832);
		}
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_657();
		GlobalFunc_8316(0, 1, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		iLocal_6062 = 0;
		iLocal_7010 = 2;
		iLocal_6060 = 0;
		GlobalFunc_695(0);
		GlobalFunc_562(75);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.80476f, -1523.046f, -1157.174f) - Vector(1.75f, 65f, 65f), Vector(4.80476f, -1523.046f, -1157.174f) + Vector(1.75f, 65f, 65f), 1, 1);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		MISC::SET_WEATHER_TYPE_PERSIST("extrasunny");
		iLocal_6069 = 0;
	}
	if (iLocal_6060 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_6061 = 1;
		iLocal_6060 = 1;
	}
}




void func_755(bool bParam0)//Position - 0x7B94A
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]) && !PED::IS_PED_INJURED(uLocal_1023[0]))
	{
		if (!bParam0)
		{
			GlobalFunc_11257(uLocal_1023[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			GlobalFunc_11293(uLocal_1023[0], 14, 112);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]) && !PED::IS_PED_INJURED(uLocal_1023[1]))
	{
		if (!bParam0)
		{
			GlobalFunc_11257(uLocal_1023[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			GlobalFunc_11293(uLocal_1023[1], 14, 158);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]) && !PED::IS_PED_INJURED(uLocal_1023[2]))
	{
		if (!bParam0)
		{
			GlobalFunc_11257(uLocal_1023[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			GlobalFunc_11293(uLocal_1023[2], 14, 154);
		}
	}
}

















void func_772()//Position - 0x7DA88
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.9403f, 3923.978f, 549.3435f) - Vector(29.25f, 250f, 250f), Vector(44.9403f, 3923.978f, 549.3435f) + Vector(29.25f, 250f, 250f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.61819f, 4237.475f, -148.3823f) - Vector(29.25f, 250f, 250f), Vector(44.61819f, 4237.475f, -148.3823f) + Vector(29.25f, 250f, 250f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.61047f, 3277.412f, 1740.101f) - Vector(18.5f, 78.25f, 78.25f), Vector(56.61047f, 3277.412f, 1740.101f) + Vector(18.5f, 78.25f, 78.25f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(51.0751f, 5189.528f, -2174.846f) - Vector(59f, 250f, 250f), Vector(51.0751f, 5189.528f, -2174.846f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(36.12573f, 6266.979f, -1002.455f) - Vector(59f, 250f, 250f), Vector(36.12573f, 6266.979f, -1002.455f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.04243f, 5366.79f, -1385.118f) - Vector(59f, 250f, 250f), Vector(37.04243f, 5366.79f, -1385.118f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
	MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-1063.621f, 6311.715f, -6.9619f, 500f, 1, 0, 0, 0);
	if (GlobalFunc_8315() == 0)
	{
		uLocal_5825 = GlobalFunc_5101(0);
	}
	if (GlobalFunc_8315() == 2)
	{
		uLocal_5825 = GlobalFunc_5101(2);
	}
	if (GlobalFunc_8315() == 1)
	{
		uLocal_5825 = GlobalFunc_5101(1);
	}
	GlobalFunc_563(1);
	GlobalFunc_2427(6, 1);
	GlobalFunc_4927(38, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKH2B", 0);
	GlobalFunc_7621(94, 1, 0, 1, 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1068);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1069);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_1068);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_1069);
	GlobalFunc_5168(0, 3, 1);
	GlobalFunc_5168(1, 3, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1069, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1069, iLocal_1068);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1068, iLocal_1069);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1068, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1068);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1069, iLocal_1069);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1735.59f, 3222.956f, 47.8356f, 1770.144f, 3264.656f, 28.1638f, 0, 1);
	MISC::CLEAR_AREA(1770.144f, 3264.656f, 28.1638f, 1000f, 1, 1, 0, 0);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\PORT_OF_LS_01_GENERAL", 0))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Get_Mission_Fail_Checkpoint() >= 0 && GlobalFunc_Get_Mission_Fail_Checkpoint() < 13)
		{
			iLocal_6111 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				if (iLocal_6111 < 13)
				{
					if (iLocal_6111 == 0)
					{
						GlobalFunc_5116(1751.707f, 3286.336f, 40.114f, 103.6627f, 1, 0);
						iLocal_7010 = 3;
					}
					else if (iLocal_6111 == 1)
					{
						GlobalFunc_5116(910.1729f, 3335.728f, 270.3783f, 39.5182f, 1, 0);
						iLocal_7010 = 4;
					}
					else if (iLocal_6111 == 2)
					{
						GlobalFunc_5116(-1389.311f, 6163.189f, 40.3783f, 39.5182f, 1, 0);
						iLocal_7010 = 5;
					}
					else if (iLocal_6111 == 3)
					{
						GlobalFunc_5116(-1402.376f, 6145.041f, -12.5895f, 39.5182f, 1, 0);
						iLocal_7010 = 6;
					}
					else if (iLocal_6111 == 4)
					{
						GlobalFunc_5116(-1255.28f, 6795.65f, -135.63f, 39.5182f, 1, 0);
						iLocal_7010 = 7;
					}
					else if (iLocal_6111 == 5)
					{
						GlobalFunc_5116(-1552.473f, 6488.566f, 118.626f, 347.6931f, 1, 0);
						iLocal_7010 = 8;
					}
					else if (iLocal_6111 == 6)
					{
						GlobalFunc_5116(-1411.909f, 5957.873f, 40.3783f, 221.983f, 1, 0);
						iLocal_7010 = 9;
					}
					else if (iLocal_6111 == 7)
					{
						GlobalFunc_5116(-152.3409f, 4654.342f, 261.3565f, 219.9027f, 1, 0);
						iLocal_7010 = 10;
					}
					else if (iLocal_6111 == 8)
					{
						GlobalFunc_5116(1748.017f, 3283.681f, 95.0743f, 186.6673f, 1, 0);
						iLocal_7010 = 11;
					}
					else if (iLocal_6111 == 9)
					{
						GlobalFunc_5116(1755.799f, 3275.817f, 40.1628f, 310.7707f, 1, 0);
						iLocal_7010 = 12;
					}
				}
				else
				{
					iLocal_7010 = 13;
				}
			}
			else if (iLocal_6111 < 13)
			{
				if (iLocal_6111 == 0)
				{
					GlobalFunc_5116(-1149.655f, -1521.854f, 3.3298f, 76.515f, 1, 0);
					iLocal_7010 = 2;
				}
				else if (iLocal_6111 == 1)
				{
					GlobalFunc_5116(1751.707f, 3286.336f, 40.114f, 103.6627f, 1, 0);
					iLocal_7010 = 3;
				}
				else if (iLocal_6111 == 2)
				{
					GlobalFunc_5116(910.1729f, 3335.728f, 270.3783f, 39.5182f, 1, 0);
					iLocal_7010 = 4;
				}
				else if (iLocal_6111 == 3)
				{
					GlobalFunc_5116(-1389.311f, 6163.189f, 40.3783f, 39.5182f, 1, 0);
					iLocal_7010 = 5;
				}
				else if (iLocal_6111 == 4)
				{
					GlobalFunc_5116(-1402.376f, 6145.041f, -12.5895f, 39.5182f, 1, 0);
					iLocal_7010 = 6;
				}
				else if (iLocal_6111 == 5)
				{
					GlobalFunc_5116(-1255.28f, 6795.65f, -135.63f, 39.5182f, 1, 0);
					iLocal_7010 = 7;
				}
				else if (iLocal_6111 == 6)
				{
					GlobalFunc_5116(-1552.473f, 6488.566f, 118.626f, 347.6931f, 1, 0);
					iLocal_7010 = 8;
				}
				else if (iLocal_6111 == 7)
				{
					GlobalFunc_5116(-1411.909f, 5957.873f, 40.3783f, 221.983f, 1, 0);
					iLocal_7010 = 9;
				}
				else if (iLocal_6111 == 8)
				{
					GlobalFunc_5116(-152.3409f, 4654.342f, 261.3565f, 221.983f, 1, 0);
					iLocal_7010 = 10;
				}
				else if (iLocal_6111 == 9)
				{
					GlobalFunc_5116(1748.017f, 3283.681f, 95.0743f, 186.6673f, 1, 0);
					iLocal_7010 = 11;
				}
				else if (iLocal_6111 == 10)
				{
					GlobalFunc_5116(1755.799f, 3275.817f, 40.1628f, 310.7707f, 1, 0);
					iLocal_7010 = 12;
				}
			}
			else
			{
				iLocal_7010 = 13;
			}
		}
		else if (iLocal_6111 == 0)
		{
			if (Global_84544 == 1)
			{
				iLocal_7010 = 3;
			}
			else
			{
				iLocal_7010 = 2;
			}
		}
		else
		{
			iLocal_7010 = 1;
		}
		func_782(iLocal_7010);
	}
	else
	{
		func_781();
		iLocal_7010 = 1;
	}
	if (iLocal_7010 != 1)
	{
		while (!iLocal_6068)
		{
			SYSTEM::WAIT(0);
			func_773(iLocal_7010);
		}
	}
}

void func_773(int iParam0)//Position - 0x7E1BF
{
	if (!iLocal_6067)
	{
		func_822(0);
		MISC::CLEAR_AREA(1764.937f, 3270.389f, 40.3731f, 1000f, 1, 1, 0, 0);
		MISC::CLEAR_AREA(1764.937f, 3270.389f, 40.3731f, 1000f, 1, 1, 0, 0);
		MISC::CLEAR_AREA(526.2101f, -3160.1f, -8.2578f, 1000f, 1, 1, 0, 0);
		iLocal_6067 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
		{
			VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_4993[1 /*19*/], 0, -190f, -190f, -190f);
		}
	}
	switch (iLocal_6091)
	{
		case 0:
			PED::REMOVE_SCENARIO_BLOCKING_AREAS();
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.9403f, 3923.978f, 549.3435f) - Vector(29.25f, 250f, 250f), Vector(44.9403f, 3923.978f, 549.3435f) + Vector(29.25f, 250f, 250f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.61819f, 4237.475f, -148.3823f) - Vector(29.25f, 250f, 250f), Vector(44.61819f, 4237.475f, -148.3823f) + Vector(29.25f, 250f, 250f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.61047f, 3277.412f, 1740.101f) - Vector(18.5f, 78.25f, 78.25f), Vector(56.61047f, 3277.412f, 1740.101f) + Vector(18.5f, 78.25f, 78.25f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(51.0751f, 5189.528f, -2174.846f) - Vector(59f, 250f, 250f), Vector(51.0751f, 5189.528f, -2174.846f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(36.12573f, 6266.979f, -1002.455f) - Vector(59f, 250f, 250f), Vector(36.12573f, 6266.979f, -1002.455f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.04243f, 5366.79f, -1385.118f) - Vector(59f, 250f, 250f), Vector(37.04243f, 5366.79f, -1385.118f) + Vector(59f, 250f, 250f), 0, 1, 1, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
			AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
			PHYSICS::ROPE_LOAD_TEXTURES();
			GlobalFunc_563(1);
			GlobalFunc_2427(6, 1);
			func_781();
			GlobalFunc_2787(200);
			GlobalFunc_4927(38, 0);
			iLocal_6092 = 0;
			if (iParam0 == 2)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					iLocal_7013 = GlobalFunc_8315();
					func_780(joaat("cargobob3"));
					MISC::CLEAR_AREA(-1151.15f, -1521.598f, 3.3605f, 100f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 3)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					GlobalFunc_7621(94, 1, 0, 1, 0);
					iLocal_7013 = GlobalFunc_8315();
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					iLocal_6091++;
				}
			}
			else if (iParam0 == 4)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					iLocal_7013 = GlobalFunc_8315();
					func_780(joaat("dinghy"));
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 5)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					iLocal_7013 = GlobalFunc_8315();
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 6)
			{
				if (GlobalFunc_8315() != 2)
				{
					func_733(2, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 7)
			{
				if (GlobalFunc_8315() != 2)
				{
					func_733(2, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 8)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 9)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					func_780(joaat("cargobob3"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, 1, 0, 0, 0);
					iLocal_6091++;
				}
			}
			else if (iParam0 == 10)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					func_780(joaat("cargobob3"));
					iLocal_6091++;
				}
			}
			else if (iParam0 == 11)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					func_780(joaat("cargobob3"));
					iLocal_6091++;
				}
			}
			else if (iParam0 == 12)
			{
				if (GlobalFunc_8315() != 0)
				{
					func_733(0, 1);
				}
				else
				{
					func_780(joaat("cargobob3"));
					func_780(joaat("submersible"));
					func_780(joaat("prop_military_pickup_01"));
					func_780(joaat("cargobob3"));
					iLocal_6091++;
				}
			}
			else if (iParam0 > 12)
			{
				iLocal_6091++;
			}
			break;
		
		case 1:
			if (func_779())
			{
				if (GlobalFunc_8315() == 0)
				{
				}
				if (GlobalFunc_8315() == 1)
				{
				}
				if (GlobalFunc_8315() == 2)
				{
				}
				GlobalFunc_5128(0);
				GlobalFunc_5128(2);
				GlobalFunc_5128(1);
				if (iParam0 == 2)
				{
					while ((!func_277(16, 1750.633f, 3285.028f, 40.0871f, 134.9916f, 0, 1) || !func_277(4, -1155.21f, -1517.32f, 3.36f, 0, 0, 1)) || !func_277(3, -1157.92f, -1519.33f, 3.36f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!GlobalFunc_5886(2, 1, -1154.711f, -1520.118f, 3.3521f, 60f))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_4993[3 /*19*/]))
						{
							if (!MISC::IS_POSITION_OCCUPIED(-1155.508f, -1520.122f, 3.3467f, 5f, 0, 1, 0, 0, 0, 0, 0))
							{
								while (!func_277(0, -1155.508f, -1520.122f, 3.3467f, 35.335f, 0, 1))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!MISC::IS_POSITION_OCCUPIED(-1158.488f, -1529.37f, 3.2503f, 5f, 0, 1, 0, 0, 0, 0, 0))
							{
								while (!func_277(0, -1158.488f, -1529.37f, 3.2503f, 35.6275f, 0, 1))
								{
									SYSTEM::WAIT(0);
								}
							}
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1068, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1068);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1149.655f, -1521.854f, 3.3298f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.515f);
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_1023[1], -1148.945f, -1523.281f, 3.3434f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_1023[1], 48.7325f);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_1023[2], -1148.603f, -1525.542f, 3.3486f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_1023[2], 79.3802f);
					}
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_777();
					func_755(0);
					iLocal_7010 = 2;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
					}
					else
					{
						STREAMING::LOAD_SCENE(-1149.655f, -1521.854f, 3.3298f);
					}
				}
				else if (iParam0 == 3)
				{
					while (((((!func_277(17, 1750.633f, 3285.028f, 40.0871f, 134.9916f, 0, 1) || !func_277(9, 1728.97f, 3264.86f, 40.0871f, 116.37f, 0, 1)) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(21, 1728.44f, 3294.27f, 41.22f, -112.87f, 0, 1)) || !func_277(20, 1727.38f, 3293.09f, 41.2f, -144.39f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 0);
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1068, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1068);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					}
					MISC::CLEAR_AREA(1750.633f, 3285.028f, 40.0871f, 1000f, 1, 1, 0, 0);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1750.633f, 3285.028f, 40.0871f);
					}
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_791("ASSIGN TREVOR GET IN SUB", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_PICK_UP_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 3;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 4)
				{
					while ((!func_277(12, 910.1729f, 3335.728f, 270.3783f, 39.5182f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_5909[0], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 1, 1);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1068, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1068);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(910.1729f, 3335.728f, 270.3783f);
					}
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_SEA_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 4;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 20f);
					}
				}
				else if (iParam0 == 5)
				{
					while ((((!func_277(12, -1389.311f, 6163.189f, 40.3783f, 39.5182f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_6685(1);
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 1, 1);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_5909[0], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 0, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1389.311f, 6163.189f, 40.3783f);
					}
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_DROP_SUB_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 5;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 6)
				{
					while (((((!func_277(16, -1388.26f, 6160.88f, 370.3783f, 39.5182f, 0, 1) || !func_277(6, -1402.376f, 6145.041f, -12.5895f, 39.5182f, 0, 1)) || !func_277(5, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_6685(1);
					if (!PED::IS_PED_INJURED(uLocal_1023[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[0], Local_4993[0 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_5909[0], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_4993[1 /*19*/], 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[1 /*19*/], 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[1 /*19*/], 8f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 1);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[1 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1402.376f, 6145.041f, -12.5895f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FIND_CONT_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 6;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 7)
				{
					while (((((!func_277(16, -1388.26f, 6160.88f, 370.3783f, 39.5182f, 0, 1) || !func_277(5, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1)) || !func_277(6, -1255.28f, 6795.65f, -135.63f, 39.5182f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_6685(1);
					if (!PED::IS_PED_INJURED(uLocal_1023[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[0], Local_4993[0 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 1);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					func_715();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4993[1 /*19*/], 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_4993[1 /*19*/], 3);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4993[1 /*19*/], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_5909[0], 1);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[1 /*19*/], -1, 1);
					}
					else
					{
						STREAMING::LOAD_SCENE(-1255.28f, 6795.65f, -135.63f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_4993[1 /*19*/], 3, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GET_SURFACE_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 7;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 8)
				{
					while (((((!func_277(16, -1552.473f, 6488.566f, 118.626f, 347.6931f, 0, 1) || !func_277(6, -1255.28f, 6795.65f, 0.34f, 39.5182f, 0, 1)) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 20f);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_1023[2]))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1], 0);
							}
						}
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1552.473f, 6488.566f, 118.626f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_PICK_SUB_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 8;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 9)
				{
					while ((((!func_277(12, -1571.909f, 6204.873f, 40.3783f, -137.983f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 1, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1], 0);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1571.909f, 6204.873f, 40.3783f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 9;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 10)
				{
					while ((((!func_277(12, -152.3409f, 4654.342f, 261.3565f, 219.9027f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4993[0 /*19*/], 1, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1], 0);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[0 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_4993[1 /*19*/], 0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-152.3409f, 4654.342f, 261.3565f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 10;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 11)
				{
					while (((((((!func_277(12, 1748.017f, 3283.681f, 95.0743f, 186.6673f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(31, 0f, 0f, 0f, 0, 0, 1)) || !func_277(22, 0f, 0f, 0f, 0f, 0, 1)) || !func_277(24, 0f, 0f, 0f, 0f, 0, 1)) || !func_277(23, 0f, 0f, 0f, 0f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1], 0);
							}
						}
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1748.017f, 3283.681f, 95.0743f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_777();
					func_755(0);
					iLocal_7010 = 11;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
				else if (iParam0 == 12)
				{
					while ((((((!func_277(12, 1748.017f, 3283.681f, 95.0743f, 186.6673f, 0, 1) || !func_277(4, -1158.307f, -1518.44f, 9.6346f, 237.8801f, 0, 1)) || !func_277(3, -1154.94f, -1521.825f, 9.6346f, 113.9594f, 0, 1)) || !func_277(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_277(22, 0f, 0f, 0f, 0f, 0, 1)) || !func_277(24, 0f, 0f, 0f, 0f, 0, 1)) || !func_277(23, 0f, 0f, 0f, 0f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4993[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4993[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[1], Local_4993[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_1023[2], Local_4993[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5909[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, 1, 0, 1, 0, 2, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_5909[1], Local_4993[1 /*19*/], 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_4993[1 /*19*/], iLocal_5909[1], 0);
							}
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(uLocal_1023[1]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_1023[1], 0))
						{
							ENTITY::DETACH_ENTITY(uLocal_1023[1], 1, 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
					{
						ENTITY::DETACH_ENTITY(Local_4993[1 /*19*/], 1, 1);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_4993[1 /*19*/], 1), 100f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_4993[1 /*19*/], 1763.78f, 3289.082f, 41.8658f, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4993[1 /*19*/], 143.22f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4993[1 /*19*/]);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(Local_4993[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1755.799f, 3275.817f, 40.1628f);
					}
					CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_781();
					func_778();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_777();
					func_755(0);
					iLocal_7010 = 12;
					iLocal_6068 = 1;
					iLocal_6091 = 0;
				}
			}
			break;
	}
}




void func_777()//Position - 0x802D3
{
	if (GlobalFunc_8315() != 0)
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[0]))
		{
			GlobalFunc_11047(uLocal_1023[0], 49);
			GlobalFunc_11257(uLocal_1023[0], 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::CLEAR_PED_PROP(uLocal_1023[0], 1);
		}
	}
	else
	{
		GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 49);
		GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_8315() != 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
		{
			if (!PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				GlobalFunc_11047(uLocal_1023[1], 41);
				GlobalFunc_11257(uLocal_1023[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	else
	{
		GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 41);
		GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_8315() != 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
		{
			if (!PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				GlobalFunc_11047(uLocal_1023[2], 47);
				GlobalFunc_11257(uLocal_1023[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::CLEAR_PED_PROP(uLocal_1023[2], 0);
				PED::CLEAR_PED_PROP(uLocal_1023[2], 1);
			}
		}
	}
	else
	{
		GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 47);
		GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_778()//Position - 0x80444
{
	int iVar0;
	
	if (iLocal_947 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_947 - 1))
		{
			if (iLocal_948[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_948[iVar0]);
				iLocal_948[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_947 = 0;
}

int func_779()//Position - 0x8048B
{
	int iVar0;
	
	if (iLocal_947 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_947 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_948[iVar0]))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_780(int iParam0)//Position - 0x804C9
{
	int iVar0;
	bool bVar1;
	
	STREAMING::REQUEST_MODEL(iParam0);
	if (iLocal_947 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_947 - 1))
		{
			if (iLocal_948[iVar0] == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			iLocal_948[iLocal_947] = iParam0;
			iLocal_947++;
		}
	}
	else if (iLocal_947 == 0)
	{
		iLocal_948[0] = iParam0;
		iLocal_947++;
	}
}

void func_781()//Position - 0x80535
{
	Local_4872[0 /*40*/].f_2 = { -332.2557f, -2767.999f, 4.1403f };
	Local_4872[0 /*40*/].f_5 = 77.2407f;
	Local_4872[0 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_4872[0 /*40*/].f_7 = GlobalFunc_4946(20);
	Local_4993[7 /*19*/].f_2 = { 591.86f, -3126.65f, 5.53f };
	Local_4993[7 /*19*/].f_5 = 80.21f;
	Local_4993[23 /*19*/].f_2 = { 488.73f, -3120.27f, 6.15f };
	Local_4993[23 /*19*/].f_5 = 182.92f;
	Local_1070[0 /*40*/].f_2 = { 616.25f, -3197.86f, 6.07f };
	Local_1070[0 /*40*/].f_5 = 75.78f;
	Local_1070[0 /*40*/].f_6 = joaat("weapon_pistol");
	Local_1070[0 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[1 /*40*/].f_2 = { 613.19f, -3052.95f, 5.11f };
	Local_1070[1 /*40*/].f_5 = -7.38f;
	Local_1070[1 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[1 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[2 /*40*/].f_2 = { 609.54f, -3201.64f, 5.069f };
	Local_1070[2 /*40*/].f_5 = 61.53f;
	Local_1070[2 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[2 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[3 /*40*/].f_2 = { 599.0598f, -3140.726f, 5.069f };
	Local_1070[3 /*40*/].f_5 = 20.3269f;
	Local_1070[3 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[3 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[3 /*40*/].f_8 = { 581.1614f, -3122.662f, 5.0693f };
	Local_1070[4 /*40*/].f_2 = { 597.8522f, -3137.789f, 5.0694f };
	Local_1070[4 /*40*/].f_5 = 201.0221f;
	Local_1070[4 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[4 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[4 /*40*/].f_8 = { 581.4792f, -3125.019f, 5.0693f };
	Local_1070[5 /*40*/].f_2 = { 546.5981f, -3169.613f, 21.7621f };
	Local_1070[5 /*40*/].f_5 = 100.434f;
	Local_1070[5 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[5 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[6 /*40*/].f_2 = { 541.4543f, -3119.221f, 7.5634f };
	Local_1070[6 /*40*/].f_5 = 29.3428f;
	Local_1070[6 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[6 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[7 /*40*/].f_2 = { 587.0986f, -3118.357f, 17.7141f };
	Local_1070[7 /*40*/].f_5 = 180.4285f;
	Local_1070[7 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[7 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[8 /*40*/].f_2 = { 557.8976f, -3130.992f, 16.361f };
	Local_1070[8 /*40*/].f_5 = 91.5429f;
	Local_1070[8 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[8 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[9 /*40*/].f_2 = { 549.73f, -3175.39f, 6.07f };
	Local_1070[9 /*40*/].f_5 = 3.39f;
	Local_1070[9 /*40*/].f_6 = joaat("weapon_pistol");
	Local_1070[9 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[10 /*40*/].f_2 = { 576.4f, -3111.26f, 9.88f };
	Local_1070[10 /*40*/].f_5 = 13.53f;
	Local_1070[10 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[10 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[11 /*40*/].f_2 = { 567.7729f, -3126.293f, 17.7686f };
	Local_1070[11 /*40*/].f_5 = 183.7132f;
	Local_1070[11 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[11 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[12 /*40*/].f_2 = { 620.5584f, -3171.303f, 5.0687f };
	Local_1070[12 /*40*/].f_5 = 286.0132f;
	Local_1070[12 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[12 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[13 /*40*/].f_2 = { 591.06f, -3288.66f, 18.72f };
	Local_1070[13 /*40*/].f_5 = 0f;
	Local_1070[13 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[13 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[14 /*40*/].f_2 = { 591.47f, -3287.71f, 18.72f };
	Local_1070[14 /*40*/].f_5 = -178.76f;
	Local_1070[14 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[14 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[15 /*40*/].f_2 = { 596.5318f, -3288.624f, 17.7143f };
	Local_1070[15 /*40*/].f_5 = 220.6964f;
	Local_1070[15 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[15 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[16 /*40*/].f_2 = { 512.5623f, -3128.165f, 5.0696f };
	Local_1070[16 /*40*/].f_5 = 271.0057f;
	Local_1070[16 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[16 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[17 /*40*/].f_2 = { 495.7888f, -3142.6f, 5.0419f };
	Local_1070[17 /*40*/].f_5 = 9.4754f;
	Local_1070[17 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[17 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[18 /*40*/].f_2 = { 545.9113f, -3157.159f, 5.0699f };
	Local_1070[18 /*40*/].f_5 = -89.95f;
	Local_1070[18 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[18 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[19 /*40*/].f_2 = { 510.9347f, -3163.117f, 5.1579f };
	Local_1070[19 /*40*/].f_5 = 279.8616f;
	Local_1070[19 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[19 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[20 /*40*/].f_2 = { 566.8541f, -3123.135f, 17.7686f };
	Local_1070[20 /*40*/].f_5 = 118.0292f;
	Local_1070[20 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[20 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[21 /*40*/].f_2 = { 547.5675f, -3123.069f, 5.0699f };
	Local_1070[21 /*40*/].f_5 = 183.9746f;
	Local_1070[21 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[21 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[22 /*40*/].f_2 = { 549.0079f, -3127.408f, 5.0701f };
	Local_1070[22 /*40*/].f_5 = 175.374f;
	Local_1070[22 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[22 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[23 /*40*/].f_2 = { 509.53f, -3337.788f, 5.0699f };
	Local_1070[23 /*40*/].f_5 = 188.8407f;
	Local_1070[23 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[23 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[24 /*40*/].f_2 = { 503.9503f, -3128.246f, 5.0699f };
	Local_1070[24 /*40*/].f_5 = 278.316f;
	Local_1070[24 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[24 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[25 /*40*/].f_2 = { 500.2828f, -3132.62f, 5.0699f };
	Local_1070[25 /*40*/].f_5 = 272.6464f;
	Local_1070[25 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[25 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[26 /*40*/].f_2 = { 496.1426f, -3123.934f, 5.0699f };
	Local_1070[26 /*40*/].f_5 = 269.1508f;
	Local_1070[26 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[26 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[27 /*40*/].f_2 = { 507.8749f, -3124.624f, 5.0698f };
	Local_1070[27 /*40*/].f_5 = 271.4555f;
	Local_1070[27 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[27 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[28 /*40*/].f_2 = { 496.6405f, -3124.678f, 5.0699f };
	Local_1070[28 /*40*/].f_5 = 267.4851f;
	Local_1070[28 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[28 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[29 /*40*/].f_2 = { 496.7787f, -3121.928f, 5.0695f };
	Local_1070[29 /*40*/].f_5 = 353.9953f;
	Local_1070[29 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[29 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[30 /*40*/].f_2 = { 495.8472f, -3121.983f, 5.0699f };
	Local_1070[30 /*40*/].f_5 = 359.6471f;
	Local_1070[30 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[30 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[31 /*40*/].f_2 = { 533.1688f, -3119.378f, 11.9102f };
	Local_1070[31 /*40*/].f_5 = 274.4106f;
	Local_1070[31 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[31 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[32 /*40*/].f_2 = { 480.1254f, -3138.539f, 5.0695f };
	Local_1070[32 /*40*/].f_5 = 13.7647f;
	Local_1070[32 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[32 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[33 /*40*/].f_2 = { 471.6332f, -3123.832f, 5.0695f };
	Local_1070[33 /*40*/].f_5 = 13.7647f;
	Local_1070[33 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[33 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[34 /*40*/].f_2 = { 469.1807f, -3134.78f, 5.0695f };
	Local_1070[34 /*40*/].f_5 = 287.3908f;
	Local_1070[34 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[34 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[35 /*40*/].f_2 = { 587.5251f, -3119.08f, 17.7151f };
	Local_1070[35 /*40*/].f_5 = 182.4486f;
	Local_1070[35 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[35 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[36 /*40*/].f_2 = { 591.213f, -3131.069f, 16.3609f };
	Local_1070[36 /*40*/].f_5 = 90.3731f;
	Local_1070[36 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[36 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[37 /*40*/].f_2 = { 547.3473f, -3139.226f, 5.0699f };
	Local_1070[37 /*40*/].f_5 = 180.3411f;
	Local_1070[37 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[37 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[38 /*40*/].f_2 = { 501.7275f, -3119.66f, 5.0694f };
	Local_1070[38 /*40*/].f_5 = 269.4093f;
	Local_1070[38 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[38 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[39 /*40*/].f_2 = { 520.2127f, -3120.018f, 17.9144f };
	Local_1070[39 /*40*/].f_5 = 132.5665f;
	Local_1070[39 /*40*/].f_6 = joaat("weapon_sniperrifle");
	Local_1070[39 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[40 /*40*/].f_2 = { 528.5178f, -3121.279f, 5.0694f };
	Local_1070[40 /*40*/].f_5 = 176.8235f;
	Local_1070[40 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[40 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[41 /*40*/].f_2 = { 520.871f, -3126.488f, 5.0699f };
	Local_1070[41 /*40*/].f_5 = 2.4706f;
	Local_1070[41 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[41 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[42 /*40*/].f_2 = { 498.9655f, -3134.002f, 5.0699f };
	Local_1070[42 /*40*/].f_5 = 288.6624f;
	Local_1070[42 /*40*/].f_6 = joaat("weapon_pistol");
	Local_1070[42 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[43 /*40*/].f_2 = { 500.4205f, -3172.66f, 5.0693f };
	Local_1070[43 /*40*/].f_5 = 269.2941f;
	Local_1070[43 /*40*/].f_6 = joaat("weapon_assaultshotgun");
	Local_1070[43 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[44 /*40*/].f_2 = { 612.23f, -3147.81f, 6.11f };
	Local_1070[44 /*40*/].f_5 = 359.9166f;
	Local_1070[44 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[44 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[45 /*40*/].f_2 = { 614.52f, -3152.42f, 6.07f };
	Local_1070[45 /*40*/].f_5 = 2.1169f;
	Local_1070[45 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[45 /*40*/].f_7 = joaat("s_m_m_dockwork_01");
	Local_1070[46 /*40*/].f_2 = { 513.22f, -3123.82f, 6.07f };
	Local_1070[46 /*40*/].f_5 = -94.54f;
	Local_1070[46 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[46 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[47 /*40*/].f_2 = { 484.83f, -3110.55f, 6.11f };
	Local_1070[47 /*40*/].f_5 = 0f;
	Local_1070[47 /*40*/].f_6 = joaat("weapon_pistol");
	Local_1070[47 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[48 /*40*/].f_2 = { 500.26f, -3154.82f, 6.07f };
	Local_1070[48 /*40*/].f_5 = 120.89f;
	Local_1070[48 /*40*/].f_6 = joaat("weapon_advancedrifle");
	Local_1070[48 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[49 /*40*/].f_2 = { 500.23f, -3153.88f, 6.07f };
	Local_1070[49 /*40*/].f_5 = 0f;
	Local_1070[49 /*40*/].f_6 = joaat("weapon_pistol");
	Local_1070[49 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[50 /*40*/].f_2 = { 592.09f, -3156.96f, 6.07f };
	Local_1070[50 /*40*/].f_5 = -98.12f;
	Local_1070[50 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[50 /*40*/].f_7 = joaat("s_m_y_blackops_01");
	Local_1070[51 /*40*/].f_2 = { 500.74f, -3060.28f, 5.11f };
	Local_1070[51 /*40*/].f_5 = 0f;
	Local_1070[51 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_1070[51 /*40*/].f_7 = joaat("s_m_y_blackops_01");
}

void func_782(int iParam0)//Position - 0x8139E
{
	if (iParam0 == 0)
	{
		Local_6154 = { 910.1729f, 3335.728f, 270.3783f };
		fLocal_6153 = 39.5182f;
	}
	else if (iParam0 == 4)
	{
		Local_6154 = { 2129.443f, 4799.73f, 40.1567f };
		fLocal_6153 = 39.5182f;
	}
	else if (iParam0 == 5)
	{
		Local_6154 = { -2842.885f, 3567.469f, 2.0187f };
		fLocal_6153 = 39.5182f;
	}
	else if (iParam0 == 6)
	{
		Local_6154 = { -853.2222f, 6407.857f, -20.8874f };
		fLocal_6153 = 108.3685f;
	}
	else if (iParam0 == 9)
	{
		Local_6154 = { 526.2101f, -3160.1f, -8.2578f };
		fLocal_6153 = 108.3685f;
	}
	else if (iParam0 == 10)
	{
		Local_6154 = { 526.2101f, -3160.1f, -8.2578f };
		fLocal_6153 = 108.3685f;
	}
	if (!GlobalFunc_105(Local_6154))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(Local_6154);
		GlobalFunc_2788(Local_6154, fLocal_6153, 1);
	}
}









void func_791(char* sParam0, bool bParam1)//Position - 0x816C1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_816)
		{
			if (iLocal_816[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_816[iVar1] == 0)
			{
				iLocal_816[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_793(iVar0);
		if (iVar3 != -1)
		{
			iLocal_816[iVar3] = 0;
			func_792();
		}
	}
}

void func_792()//Position - 0x8173C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_816 - 1))
	{
		if (iLocal_816[iVar0] == 0)
		{
			if (iLocal_816[iVar0 + 1] != 0)
			{
				iLocal_816[iVar0] = iLocal_816[iVar0 + 1];
				iLocal_816[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_793(int iParam0)//Position - 0x8178F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_816)
	{
		if (iLocal_816[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_816[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_794(char* sParam0)//Position - 0x817D2
{
	return func_793(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_795()//Position - 0x817E6
{
	if (GlobalFunc_111())
	{
		if (GlobalFunc_81())
		{
			if (iLocal_6079 == 0)
			{
				GlobalFunc_619(1);
				iLocal_6079 = 1;
			}
		}
		else if (iLocal_6079 == 1)
		{
			GlobalFunc_619(0);
			iLocal_6079 = 0;
		}
	}
}



void func_798()//Position - 0x81830
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || ((((Var0.f_1 < 3726f && Var0.f_1 > 3709f) && Var0.x > 3509f) && Var0.x < 3541f) && Var0.f_2 < 17.5f))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
		}
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_6148))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_6148, "UW_Ambience", 0, 1);
		}
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_6149))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_6149, "UW_Rebreather", 0, 1);
		}
		if (GlobalFunc_8315() == 0)
		{
			if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 10))
			{
				fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar3 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_6151, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar3 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar3 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
				{
					AUDIO::STOP_SOUND(iLocal_6151);
				}
				if (bLocal_6152)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6150))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_6150, "FBI_05_RAID_BREATH", 0, 1);
					}
				}
			}
		}
		if (GlobalFunc_8315() == 1)
		{
			if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 3))
			{
				fVar4 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar4 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_6151, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar4 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar4 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
				{
					AUDIO::STOP_SOUND(iLocal_6151);
				}
				if (bLocal_6152)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6150))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_6150, "FBI_05_RAID_BREATH", 0, 1);
					}
				}
			}
		}
		if (GlobalFunc_8315() == 2)
		{
			if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				fVar5 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar5 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_6151, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar5 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_6151, "SwimSpeed", ((fVar5 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
				{
					AUDIO::STOP_SOUND(iLocal_6151);
				}
				if (bLocal_6152)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_6150))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_6150, "FBI_05_RAID_BREATH", 0, 1);
					}
				}
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
		}
		if (iLocal_6148 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6148))
			{
				AUDIO::STOP_SOUND(iLocal_6148);
			}
		}
		if (iLocal_6149 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6149))
			{
				AUDIO::STOP_SOUND(iLocal_6149);
			}
		}
		if (iLocal_6151 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6151))
			{
				AUDIO::STOP_SOUND(iLocal_6151);
			}
		}
		if (iLocal_6150 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_6150))
			{
				AUDIO::STOP_SOUND(iLocal_6150);
			}
		}
	}
}

void func_799()//Position - 0x81B30
{
	if (iLocal_7010 == 8)
	{
		if (iLocal_6092 < 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
					{
						func_800(&uLocal_47, Local_4993[1 /*19*/], 0, 0, 1, 1, 1);
					}
					else
					{
						GlobalFunc_4948(&uLocal_47, 0, 0);
					}
				}
				else
				{
					GlobalFunc_4948(&uLocal_47, 0, 0);
				}
			}
		}
	}
}

void func_800(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x81B9C
{
	func_801(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_801(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x81BB9
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_802(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_802(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x81BF1
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (GlobalFunc_162(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (GlobalFunc_7635(uParam0, bParam7, bParam9, 0))
			{
				func_809(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (GlobalFunc_6696(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!GlobalFunc_74(iVar0))
							{
								GlobalFunc_159(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									GlobalFunc_158(1);
								}
							}
						}
					}
				}
			}
			else if (GlobalFunc_6696(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (GlobalFunc_74(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						GlobalFunc_4948(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					GlobalFunc_4948(uParam0, iVar0, 1);
				}
			}
			if (!GlobalFunc_7635(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !GlobalFunc_157(uParam0))
				{
					GlobalFunc_4952(uParam0);
				}
			}
		}
	}
	else
	{
		GlobalFunc_4948(uParam0, iVar0, 0);
	}
}







void func_809(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x822D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	if (GlobalFunc_100(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!GlobalFunc_5113())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}










void func_819()//Position - 0x8292D
{
	if (iLocal_7010 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			if (PED::IS_PED_INJURED(iLocal_5846))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 4;
				iLocal_7010 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
		{
			if (PED::IS_PED_INJURED(iLocal_5845))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 5;
				iLocal_7010 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4993[0 /*19*/]))
				{
					if (iLocal_7010 == 9)
					{
						VEHICLE::EXPLODE_VEHICLE(Local_4993[0 /*19*/], 1, 0);
					}
				}
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 9;
				iLocal_7010 = 14;
			}
			else if (GlobalFunc_2250(&(Local_4993[0 /*19*/])))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 10;
				iLocal_7010 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[1 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[1 /*19*/], 0))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 12;
				iLocal_7010 = 14;
			}
			else
			{
				if (iLocal_7010 == 6)
				{
					if (!func_794("SUB OUT OF WATER"))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]))
						{
							uLocal_8299 = MISC::GET_GAME_TIMER();
							func_791("SUB OUT OF WATER", 1);
						}
					}
					else
					{
						if (ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]))
						{
							func_791("SUB OUT OF WATER", 0);
						}
						if (func_820(Local_4993[1 /*19*/], &uLocal_8299))
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 12;
							iLocal_7010 = 14;
						}
					}
				}
				if (iLocal_7010 == 5)
				{
					if (iLocal_6092 == 1)
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_4993[0 /*19*/], Local_4993[1 /*19*/]))
						{
							if (GlobalFunc_588(&iLocal_8298, 8000))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_5903[1]) || ENTITY::DOES_ENTITY_EXIST(iLocal_5903[2]))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_4993[1 /*19*/], iLocal_5903[1]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_4993[1 /*19*/], iLocal_5903[2]))
									{
										if (!ENTITY::IS_ENTITY_IN_WATER(Local_4993[1 /*19*/]))
										{
											iLocal_7011 = iLocal_7010;
											iLocal_7012 = 12;
											iLocal_7010 = 14;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_7010 == 6 || iLocal_7010 == 8)
				{
					if (GlobalFunc_2250(&(Local_4993[1 /*19*/])))
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 12;
						iLocal_7010 = 14;
					}
				}
			}
		}
		if (iLocal_7010 == 2)
		{
			if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[1], 1), 1) > 1200f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 8;
							iLocal_7010 = 14;
						}
					}
					else
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 3;
						iLocal_7010 = 14;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_1023[1]))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 3;
				iLocal_7010 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_1023[2]))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 1;
				iLocal_7010 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_1023[0]))
			{
				iLocal_7011 = iLocal_7010;
				iLocal_7012 = 1;
				iLocal_7010 = 14;
			}
		}
		if (((iLocal_7010 == 6 || iLocal_7010 == 7) || iLocal_7010 == 5) || iLocal_7010 == 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[0]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[0], 1), 1) > 1200f)
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 7;
						iLocal_7010 = 14;
					}
				}
				else
				{
					iLocal_7011 = iLocal_7010;
					iLocal_7012 = 2;
					iLocal_7010 = 14;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[2]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[2], 1), 1) > 1000f)
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 6;
						iLocal_7010 = 14;
					}
				}
				else
				{
					iLocal_7011 = iLocal_7010;
					iLocal_7012 = 1;
					iLocal_7010 = 14;
				}
			}
		}
		if ((iLocal_7010 == 6 || iLocal_7010 == 7) || iLocal_7010 == 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
			{
				if (!PED::IS_PED_INJURED(uLocal_1023[1]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[1], 1), 1) > 1200f)
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 8;
						iLocal_7010 = 14;
					}
				}
				else
				{
					iLocal_7011 = iLocal_7010;
					iLocal_7012 = 3;
					iLocal_7010 = 14;
				}
			}
		}
		else if (iLocal_7010 == 8)
		{
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[1], 1), 1) > 1200f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 8;
							iLocal_7010 = 14;
						}
					}
					else
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 3;
						iLocal_7010 = 14;
					}
				}
			}
			if (GlobalFunc_8315() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[1], 1), 1) > 300f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 8;
							iLocal_7010 = 14;
						}
					}
					else
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 3;
						iLocal_7010 = 14;
					}
				}
			}
		}
		if (iLocal_7010 == 10 || iLocal_7010 == 4)
		{
			if (GlobalFunc_8315() == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4993[0 /*19*/], 0))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(Local_4993[0 /*19*/]))
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 14;
							iLocal_7010 = 14;
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4993[0 /*19*/], 1), 1) > 25f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 14;
							iLocal_7010 = 14;
						}
					}
				}
			}
		}
		if (((iLocal_7010 == 5 || iLocal_7010 == 11) || iLocal_7010 == 8) || iLocal_7010 == 7)
		{
			if (GlobalFunc_8315() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[2], 1), 1) > 1000f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 6;
							iLocal_7010 = 14;
						}
					}
					else
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 1;
						iLocal_7010 = 14;
					}
				}
			}
		}
		else if (iLocal_7010 != 10)
		{
			if (GlobalFunc_8315() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_1023[2]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_1023[2], 1), 1) > 250f)
						{
							iLocal_7011 = iLocal_7010;
							iLocal_7012 = 6;
							iLocal_7010 = 14;
						}
					}
					else
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 1;
						iLocal_7010 = 14;
					}
				}
			}
		}
		if (iLocal_7010 == 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4993[0 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4993[0 /*19*/], 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1754.472f, 3283.072f, 40.0925f, 1) < 200f)
					{
						iLocal_7011 = iLocal_7010;
						iLocal_7012 = 16;
						iLocal_7010 = 14;
					}
				}
			}
		}
	}
}

int func_820(int iParam0, var uParam1)//Position - 0x8305F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (GlobalFunc_588(uParam1, 10000))
				{
					return 1;
				}
			}
			else
			{
				*uParam1 = MISC::GET_GAME_TIMER();
			}
		}
	}
	return 0;
}


void func_822(bool bParam0)//Position - 0x830F9
{
	int iVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
	if (bParam0 == 0)
	{
		GlobalFunc_5100(2, uLocal_5825);
		GlobalFunc_5100(0, uLocal_5825);
		GlobalFunc_5100(1, uLocal_5825);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_6038[iVar0])))
		{
			PHYSICS::DELETE_ROPE(&(uLocal_6038[iVar0]));
		}
		iVar0++;
	}
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5831))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5831);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5832))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_5832, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_5832);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[0]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(uLocal_1023[0]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_1023[0]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[2]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(uLocal_1023[2]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_1023[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_1023[1]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(uLocal_1023[1]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_1023[1]);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5866))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5866, 0);
	}
	GlobalFunc_695(1);
	func_833();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	GlobalFunc_7621(94, 1, 0, 1, 0);
	GlobalFunc_4948(&uLocal_47, 0, 0);
	func_832();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	GlobalFunc_835(0);
	GlobalFunc_5168(0, 3, 0);
	GlobalFunc_5168(1, 3, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	if (CAM::DOES_CAM_EXIST(Local_989.f_9))
	{
		CAM::DESTROY_CAM(Local_989.f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5935[0]))
	{
		PED::DELETE_PED(&(iLocal_5935[0]));
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		GlobalFunc_589(&(Local_3271[iVar0 /*40*/].f_23));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		GlobalFunc_589(&(Local_1070[iVar0 /*40*/].f_23));
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 0);
	}
	GlobalFunc_1998(0);
	func_831(0);
	iLocal_5989[0] = 0;
	iLocal_5989[1] = 0;
	iLocal_5989[2] = 0;
	iLocal_5994 = 0;
	func_830();
	if (HUD::DOES_BLIP_EXIST(uLocal_6045))
	{
		HUD::REMOVE_BLIP(&uLocal_6045);
	}
	iVar0 = 0;
	while (iVar0 < Local_6604)
	{
		func_829(&(Local_6604[iVar0 /*27*/]), bParam0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6043))
	{
		func_829(&iLocal_6043, bParam0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5909)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5909[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_5909[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5903)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5903[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_5903[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5935)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5935[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_5935[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5834)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_5834[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_5834[iVar0], 0);
		}
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::DOES_CAM_EXIST(uLocal_6044))
	{
		CAM::DESTROY_CAM(iLocal_6044, 0);
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 9)
	{
		TASK::REMOVE_COVER_POINT(uLocal_6048[iLocal_6094]);
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 34)
	{
		Local_4993[iLocal_6094 /*19*/].f_8 = 0;
		Local_4993[iLocal_6094 /*19*/].f_10 = 0;
		Local_4993[iLocal_6094 /*19*/].f_12 = 0;
		if (HUD::DOES_BLIP_EXIST(Local_4993[iLocal_6094 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_4993[iLocal_6094 /*19*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4993[iLocal_6094 /*19*/]))
		{
			if (bParam0)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4993[iLocal_6094 /*19*/]));
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_4993[iLocal_6094 /*19*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_4993[iLocal_6094 /*19*/]));
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_4993[iLocal_6094 /*19*/]))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_4993[iLocal_6094 /*19*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_4993[iLocal_6094 /*19*/]));
						}
					}
				}
			}
		}
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 54)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1070[iLocal_6094 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1070[iLocal_6094 /*40*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1070[iLocal_6094 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_1070[iLocal_6094 /*40*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[iLocal_6094 /*40*/], 40f, 0);
					PED::SET_PED_KEEP_TASK(Local_1070[iLocal_6094 /*40*/], 1);
				}
				Local_1070[iLocal_6094 /*40*/].f_15 = 0;
				TASK::REMOVE_COVER_POINT(Local_1070[iLocal_6094 /*40*/].f_13);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(Local_1070[iLocal_6094 /*40*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[iLocal_6094 /*40*/]));
				}
			}
			else
			{
				TASK::REMOVE_COVER_POINT(Local_1070[iLocal_6094 /*40*/].f_13);
				PED::DELETE_PED(&(Local_1070[iLocal_6094 /*40*/]));
			}
		}
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 39)
	{
		if (HUD::DOES_BLIP_EXIST(Local_3271[iLocal_6094 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_3271[iLocal_6094 /*40*/].f_1));
		}
		Local_3271[iLocal_6094 /*40*/].f_12 = 0;
		Local_3271[iLocal_6094 /*40*/].f_15 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_3271[iLocal_6094 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_1070[iLocal_6094 /*40*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1070[iLocal_6094 /*40*/], 40f, 0);
					PED::SET_PED_KEEP_TASK(Local_1070[iLocal_6094 /*40*/], 1);
				}
				TASK::REMOVE_COVER_POINT(Local_3271[iLocal_6094 /*40*/].f_13);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3271[iLocal_6094 /*40*/]));
			}
			else
			{
				TASK::REMOVE_COVER_POINT(Local_3271[iLocal_6094 /*40*/].f_13);
				PED::DELETE_PED(&(Local_3271[iLocal_6094 /*40*/]));
			}
		}
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 2)
	{
		if (HUD::DOES_BLIP_EXIST(Local_4872[iLocal_6094 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_4872[iLocal_6094 /*40*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4872[iLocal_6094 /*40*/]))
		{
			if (bParam0)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_4872[iLocal_6094 /*40*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_4872[iLocal_6094 /*40*/]));
			}
		}
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5876[iLocal_6094]))
		{
			if (bParam0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_5876[iLocal_6094]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(uLocal_5876[iLocal_6094]));
			}
		}
		iLocal_6094++;
	}
	iLocal_6094 = 0;
	while (iLocal_6094 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5869[iLocal_6094]))
		{
			if (bParam0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_5869[iLocal_6094]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(uLocal_5869[iLocal_6094]));
			}
		}
		iLocal_6094++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5875))
	{
		if (bParam0)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_5875);
		}
		else
		{
			OBJECT::DELETE_OBJECT(&iLocal_5875);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[0]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1023[0]));
		}
		else
		{
			PED::DELETE_PED(&(uLocal_1023[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[2]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1023[2]));
		}
		else
		{
			PED::DELETE_PED(&(uLocal_1023[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1023[1]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1023[1]));
		}
		else
		{
			PED::DELETE_PED(&(uLocal_1023[1]));
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_6047);
	GlobalFunc_5652(&Local_6574, 1, 0);
	GlobalFunc_7139(&Local_6574, 0);
	func_778();
	func_714();
	func_827(0);
	if (Local_6599.f_4)
	{
		PHYSICS::DELETE_ROPE(&Local_6599);
		Local_6599.f_4 = 0;
	}
	func_823(&uLocal_6341);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	GlobalFunc_563(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		if (iLocal_6077 == 0)
		{
			GlobalFunc_4935();
		}
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		if (iLocal_6077 == 0)
		{
			GlobalFunc_4935();
		}
		iLocal_6092 = 0;
		iLocal_6091 = 0;
	}
}

void func_823(var uParam0)//Position - 0x839D4
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7));
	}
	func_825(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
	GlobalFunc_605(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_8));
	}
}


void func_825(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x83A77
{
	if (uParam0->f_55)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (uParam0->f_75)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, 1);
				}
				if (uParam0->f_76)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, 0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3, 1, 1);
					if (bParam4)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			uParam0->f_62 = 0;
		}
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			if (!bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
			}
		}
		if (bParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_8));
			}
		}
		if (iParam2 != joaat("weapon_unarmed"))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, iParam2, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iParam2, 1);
			}
		}
		if (bParam3)
		{
			GlobalFunc_606(uParam0);
		}
		uParam0->f_55 = 0;
	}
}


void func_827(bool bParam0)//Position - 0x83BCA
{
	int iVar0;
	
	func_829(&(Local_6268.f_2), 1);
	func_829(&(Local_6268.f_1), 1);
	func_829(&(Local_6268.f_3), 1);
	func_829(&Local_6268, 1);
	func_829(&(Local_6268.f_13), 1);
	func_829(&(Local_6268.f_14), 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_6535)
	{
		func_829(&(Local_6535[iVar0 /*19*/].f_1), bParam0);
		func_829(&(Local_6535[iVar0 /*19*/].f_2), bParam0);
		func_829(&(Local_6535[iVar0 /*19*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_6268.f_4)
	{
		func_829(&(Local_6268.f_4[iVar0]), 1);
		iVar0++;
	}
}


void func_829(var uParam0, bool bParam1)//Position - 0x83C83
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(uParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_830()//Position - 0x83CC7
{
	int iVar0;
	
	Local_79 = { 0f, 0f, 0f };
	Local_82 = { 0f, 0f, 0f };
	Local_85 = { 0f, 0f, 0f };
	iLocal_88 = 0;
	StringCopy(&cLocal_255, "", 24);
	iLocal_261 = -1;
	iLocal_446 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Local_295[iVar0 /*5*/].f_1 = -1;
		Local_295[iVar0 /*5*/].f_2 = 0;
		Local_295[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Local_447[iVar0 /*6*/].f_4 = 0;
		Local_447[iVar0 /*6*/].f_5 = 0;
		iVar0++;
	}
	iLocal_809 = 0;
}

void func_831(int iParam0)//Position - 0x83D53
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1070[44 /*40*/].f_19))
	{
		if (iParam0 == 0)
		{
			OBJECT::DELETE_OBJECT(&(Local_1070[44 /*40*/].f_19));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_1070[44 /*40*/].f_19))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1070[44 /*40*/].f_19))
			{
				ENTITY::DETACH_ENTITY(Local_1070[44 /*40*/].f_19, 1, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1070[44 /*40*/].f_19));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1070[44 /*40*/]))
	{
		if (iParam0 == 0)
		{
			PED::DELETE_PED(&(Local_1070[44 /*40*/]));
		}
		else if (!PED::IS_PED_INJURED(Local_1070[44 /*40*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[44 /*40*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1070[45 /*40*/].f_19))
	{
		if (iParam0 == 0)
		{
			OBJECT::DELETE_OBJECT(&(Local_1070[45 /*40*/].f_19));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_1070[45 /*40*/].f_19))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1070[45 /*40*/].f_19))
			{
				ENTITY::DETACH_ENTITY(Local_1070[45 /*40*/].f_19, 1, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1070[45 /*40*/].f_19));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1070[45 /*40*/]))
	{
		if (iParam0 == 0)
		{
			PED::DELETE_PED(&(Local_1070[45 /*40*/]));
		}
		else if (!PED::IS_PED_INJURED(Local_1070[45 /*40*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1070[45 /*40*/]));
		}
	}
	if (((!ENTITY::DOES_ENTITY_EXIST(Local_1070[44 /*40*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_1070[45 /*40*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_1070[44 /*40*/].f_19)) && !ENTITY::DOES_ENTITY_EXIST(Local_1070[45 /*40*/].f_19))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
		STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelroll");
	}
}

void func_832()//Position - 0x83EF1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_816)
	{
		iLocal_816[iVar0] = 0;
		iVar0++;
	}
}

void func_833()//Position - 0x83F18
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_CHOPPERS_APPEAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_CHOPPERS_APPEAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIGHT_CHOPPERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_FIGHT_CHOPPERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_RELEASE_SUB");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_ENEMIES"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
	}
}



