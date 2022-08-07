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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 4;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 4;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 4;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 4;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 4;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	struct<20> Local_92 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<2> Local_126 = { 0, 0 } ;
	int iLocal_128 = 0;
	int iLocal_129[3] = { 0, 0, 0 };
	int iLocal_133 = 0;
	int iLocal_134[2] = { 0, 0 };
	struct<14> Local_137[10];
	struct<14> Local_278[10];
	struct<16> Local_419[8];
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551[3] = { 0, 0, 0 };
	struct<4> Local_555[5];
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	var uLocal_587[2] = { 0, 0 };
	var uLocal_590[2] = { 0, 0 };
	int iLocal_593[4] = { 0, 0, 0, 0 };
	int iLocal_598[3] = { 0, 0, 0 };
	int iLocal_602[1] = { 0 };
	int iLocal_604 = 0;
	int iLocal_605[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632[3] = { 0, 0, 0 };
	var uLocal_636[2] = { 0, 0 };
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641[1] = { 0 };
	var uLocal_643[3] = { 0, 0, 0 };
	int iLocal_647 = 0;
	var uLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	var uLocal_651[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 21;
	var uLocal_680 = 6;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_714[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_725[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_744[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_758[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_765[1] = { 0 };
	int iLocal_767[2] = { 0, 0 };
	int iLocal_770[1] = { 0 };
	int iLocal_772 = 0;
	bool bLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	bool bLocal_778 = 0;
	bool bLocal_779[3] = { 0, 0, 0 };
	int iLocal_783[3] = { 0, 0, 0 };
	int iLocal_787[3] = { 0, 0, 0 };
	bool bLocal_791[3] = { 0, 0, 0 };
	int iLocal_795[3] = { 0, 0, 0 };
	bool bLocal_799[3] = { 0, 0, 0 };
	int iLocal_803[3] = { 0, 0, 0 };
	int iLocal_807[3] = { 0, 0, 0 };
	int iLocal_811 = 0;
	bool bLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	bool bLocal_821 = 0;
	bool bLocal_822 = 0;
	int iLocal_823 = 0;
	bool bLocal_824 = 0;
	bool bLocal_825 = 0;
	bool bLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	bool bLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	bool bLocal_834 = 0;
	bool bLocal_835 = 0;
	int iLocal_836 = 0;
	bool bLocal_837 = 0;
	int iLocal_838 = 0;
	bool bLocal_839 = 0;
	bool bLocal_840 = 0;
	bool bLocal_841 = 0;
	bool bLocal_842 = 0;
	int iLocal_843 = 0;
	bool bLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	bool bLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855[2] = { 0, 0 };
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	bool bLocal_860 = 0;
	int iLocal_861 = 0;
	bool bLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	bool bLocal_866 = 0;
	bool bLocal_867 = 0;
	bool bLocal_868 = 0;
	bool bLocal_869 = 0;
	bool bLocal_870 = 0;
	int iLocal_871 = 0;
	bool bLocal_872 = 0;
	bool bLocal_873 = 0;
	int iLocal_874 = 0;
	bool bLocal_875 = 0;
	bool bLocal_876 = 0;
	bool bLocal_877 = 0;
	bool bLocal_878 = 0;
	bool bLocal_879 = 0;
	int iLocal_880 = 0;
	bool bLocal_881 = 0;
	int iLocal_882[1] = { 0 };
	bool bLocal_884 = 0;
	bool bLocal_885 = 0;
	bool bLocal_886 = 0;
	bool bLocal_887 = 0;
	int iLocal_888 = 0;
	bool bLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	bool bLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	bool bLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	bool bLocal_902 = 0;
	bool bLocal_903 = 0;
	bool bLocal_904 = 0;
	bool bLocal_905 = 0;
	bool bLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	bool bLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	bool bLocal_916 = 0;
	int iLocal_917 = 0;
	bool bLocal_918 = 0;
	bool bLocal_919 = 0;
	bool bLocal_920 = 0;
	int iLocal_921 = 0;
	bool bLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	bool bLocal_933 = 0;
	bool bLocal_934 = 0;
	bool bLocal_935 = 0;
	bool bLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	struct<3> Local_946[1];
	struct<3> Local_950[1];
	struct<3> Local_954[3];
	struct<3> Local_964[3];
	struct<3> Local_974 = { 0, 0, 0 } ;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_980[1];
	struct<3> Local_984[3];
	struct<3> Local_994 = { 0, 0, 0 } ;
	struct<3> Local_997[3];
	struct<3> Local_1007[3];
	struct<3> Local_1017 = { 0, 0, 0 } ;
	float fLocal_1020 = 0f;
	float fLocal_1021 = 0f;
	float fLocal_1022 = 0f;
	float fLocal_1023 = 0f;
	float fLocal_1024 = 0f;
	float fLocal_1025 = 0f;
	var uLocal_1026[1] = { 0 };
	var uLocal_1028[1] = { 0 };
	var uLocal_1030[3] = { 0, 0, 0 };
	var uLocal_1034[3] = { 0, 0, 0 };
	float fLocal_1038 = 0f;
	float fLocal_1039 = 0f;
	float fLocal_1040 = 0f;
	float fLocal_1041 = 0f;
	float fLocal_1042[3] = { 0f, 0f, 0f };
	float fLocal_1046[3] = { 0f, 0f, 0f };
	float fLocal_1050[3] = { 0f, 0f, 0f };
	float fLocal_1054 = 0f;
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063[3] = { 0, 0, 0 };
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1086 = 0;
	int iLocal_1087 = 0;
	var uLocal_1088 = 0;
	int iLocal_1089[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1100 = 0;
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	var uLocal_1107[3] = { 0, 0, 0 };
	int iLocal_1111[3] = { 0, 0, 0 };
	int iLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	var uLocal_1123[1] = { 0 };
	var uLocal_1125[3] = { 0, 0, 0 };
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	var uLocal_1134 = 0;
	int iLocal_1135 = 0;
	int iLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	int iLocal_1139 = 0;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 16;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	struct<6> Local_1328 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1334[48] = "";
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 2;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 2;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 20;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = -1;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 1065353216;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = -1;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 1065353216;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = -1;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 1065353216;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = -1;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 1065353216;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = -1;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 1065353216;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = -1;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 1065353216;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = -1;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 1065353216;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = -1;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 1065353216;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = -1;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 1065353216;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = -1;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 1065353216;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = -1;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 1065353216;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = -1;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 1065353216;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = -1;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 1065353216;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = -1;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 1065353216;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = -1;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 1065353216;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = -1;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 1065353216;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = -1;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 1065353216;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = -1;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 1065353216;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = -1;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 1065353216;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = -1;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 1065353216;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 16;
	var uLocal_2493 = 0;
	var uLocal_2494 = -1082130432;
	var uLocal_2495 = 0;
	var uLocal_2496 = -1082130432;
	var uLocal_2497 = 0;
	var uLocal_2498 = -1082130432;
	var uLocal_2499 = 0;
	var uLocal_2500 = -1082130432;
	var uLocal_2501 = 0;
	var uLocal_2502 = -1082130432;
	var uLocal_2503 = 0;
	var uLocal_2504 = -1082130432;
	var uLocal_2505 = 0;
	var uLocal_2506 = -1082130432;
	var uLocal_2507 = 0;
	var uLocal_2508 = -1082130432;
	var uLocal_2509 = 0;
	var uLocal_2510 = -1082130432;
	var uLocal_2511 = 0;
	var uLocal_2512 = -1082130432;
	var uLocal_2513 = 0;
	var uLocal_2514 = -1082130432;
	var uLocal_2515 = 0;
	var uLocal_2516 = -1082130432;
	var uLocal_2517 = 0;
	var uLocal_2518 = -1082130432;
	var uLocal_2519 = 0;
	var uLocal_2520 = -1082130432;
	var uLocal_2521 = 0;
	var uLocal_2522 = -1082130432;
	var uLocal_2523 = 0;
	var uLocal_2524 = -1082130432;
	var uLocal_2525 = 16;
	var uLocal_2526 = 0;
	var uLocal_2527 = -1082130432;
	var uLocal_2528 = 0;
	var uLocal_2529 = -1082130432;
	var uLocal_2530 = 0;
	var uLocal_2531 = -1082130432;
	var uLocal_2532 = 0;
	var uLocal_2533 = -1082130432;
	var uLocal_2534 = 0;
	var uLocal_2535 = -1082130432;
	var uLocal_2536 = 0;
	var uLocal_2537 = -1082130432;
	var uLocal_2538 = 0;
	var uLocal_2539 = -1082130432;
	var uLocal_2540 = 0;
	var uLocal_2541 = -1082130432;
	var uLocal_2542 = 0;
	var uLocal_2543 = -1082130432;
	var uLocal_2544 = 0;
	var uLocal_2545 = -1082130432;
	var uLocal_2546 = 0;
	var uLocal_2547 = -1082130432;
	var uLocal_2548 = 0;
	var uLocal_2549 = -1082130432;
	var uLocal_2550 = 0;
	var uLocal_2551 = -1082130432;
	var uLocal_2552 = 0;
	var uLocal_2553 = -1082130432;
	var uLocal_2554 = 0;
	var uLocal_2555 = -1082130432;
	var uLocal_2556 = 0;
	var uLocal_2557 = -1082130432;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = -1082130432;
	var uLocal_2575 = -1082130432;
	var uLocal_2576 = 1;
	var uLocal_2577 = 1;
	var uLocal_2578 = 1;
	var uLocal_2579 = -1;
	var uLocal_2580 = -1;
	var uLocal_2581 = -1;
	struct<2> Local_2582 = { 0, 0 } ;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 2;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 2;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 20;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = -1;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 1065353216;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = -1;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 1065353216;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = -1;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 1065353216;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = -1;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 1065353216;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = -1;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 1065353216;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = -1;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 1065353216;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = -1;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 1065353216;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = -1;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 1065353216;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = -1;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 1065353216;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = -1;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 1065353216;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = -1;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 1065353216;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = -1;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 1065353216;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = -1;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 1065353216;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = -1;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 1065353216;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = -1;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 1065353216;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = -1;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 1065353216;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = -1;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 1065353216;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = -1;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 1065353216;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = -1;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 1065353216;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = -1;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 1065353216;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 16;
	var uLocal_3734 = 0;
	var uLocal_3735 = -1082130432;
	var uLocal_3736 = 0;
	var uLocal_3737 = -1082130432;
	var uLocal_3738 = 0;
	var uLocal_3739 = -1082130432;
	var uLocal_3740 = 0;
	var uLocal_3741 = -1082130432;
	var uLocal_3742 = 0;
	var uLocal_3743 = -1082130432;
	var uLocal_3744 = 0;
	var uLocal_3745 = -1082130432;
	var uLocal_3746 = 0;
	var uLocal_3747 = -1082130432;
	var uLocal_3748 = 0;
	var uLocal_3749 = -1082130432;
	var uLocal_3750 = 0;
	var uLocal_3751 = -1082130432;
	var uLocal_3752 = 0;
	var uLocal_3753 = -1082130432;
	var uLocal_3754 = 0;
	var uLocal_3755 = -1082130432;
	var uLocal_3756 = 0;
	var uLocal_3757 = -1082130432;
	var uLocal_3758 = 0;
	var uLocal_3759 = -1082130432;
	var uLocal_3760 = 0;
	var uLocal_3761 = -1082130432;
	var uLocal_3762 = 0;
	var uLocal_3763 = -1082130432;
	var uLocal_3764 = 0;
	var uLocal_3765 = -1082130432;
	var uLocal_3766 = 16;
	var uLocal_3767 = 0;
	var uLocal_3768 = -1082130432;
	var uLocal_3769 = 0;
	var uLocal_3770 = -1082130432;
	var uLocal_3771 = 0;
	var uLocal_3772 = -1082130432;
	var uLocal_3773 = 0;
	var uLocal_3774 = -1082130432;
	var uLocal_3775 = 0;
	var uLocal_3776 = -1082130432;
	var uLocal_3777 = 0;
	var uLocal_3778 = -1082130432;
	var uLocal_3779 = 0;
	var uLocal_3780 = -1082130432;
	var uLocal_3781 = 0;
	var uLocal_3782 = -1082130432;
	var uLocal_3783 = 0;
	var uLocal_3784 = -1082130432;
	var uLocal_3785 = 0;
	var uLocal_3786 = -1082130432;
	var uLocal_3787 = 0;
	var uLocal_3788 = -1082130432;
	var uLocal_3789 = 0;
	var uLocal_3790 = -1082130432;
	var uLocal_3791 = 0;
	var uLocal_3792 = -1082130432;
	var uLocal_3793 = 0;
	var uLocal_3794 = -1082130432;
	var uLocal_3795 = 0;
	var uLocal_3796 = -1082130432;
	var uLocal_3797 = 0;
	var uLocal_3798 = -1082130432;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = -1082130432;
	var uLocal_3816 = -1082130432;
	var uLocal_3817 = 1;
	var uLocal_3818 = 1;
	var uLocal_3819 = 1;
	var uLocal_3820 = -1;
	var uLocal_3821 = -1;
	var uLocal_3822 = -1;
	struct<2> Local_3823 = { 0, 0 } ;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 2;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 2;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 20;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = -1;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 1065353216;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = -1;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 1065353216;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = -1;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 1065353216;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = -1;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 1065353216;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = -1;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 1065353216;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = -1;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 1065353216;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = -1;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 1065353216;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = -1;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 1065353216;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = -1;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 1065353216;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = -1;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 1065353216;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = -1;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 1065353216;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = -1;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 1065353216;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = -1;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 1065353216;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = -1;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 1065353216;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = -1;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 1065353216;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = -1;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 1065353216;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = -1;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 1065353216;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = -1;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 1065353216;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = -1;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 1065353216;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = -1;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 1065353216;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 16;
	var uLocal_4975 = 0;
	var uLocal_4976 = -1082130432;
	var uLocal_4977 = 0;
	var uLocal_4978 = -1082130432;
	var uLocal_4979 = 0;
	var uLocal_4980 = -1082130432;
	var uLocal_4981 = 0;
	var uLocal_4982 = -1082130432;
	var uLocal_4983 = 0;
	var uLocal_4984 = -1082130432;
	var uLocal_4985 = 0;
	var uLocal_4986 = -1082130432;
	var uLocal_4987 = 0;
	var uLocal_4988 = -1082130432;
	var uLocal_4989 = 0;
	var uLocal_4990 = -1082130432;
	var uLocal_4991 = 0;
	var uLocal_4992 = -1082130432;
	var uLocal_4993 = 0;
	var uLocal_4994 = -1082130432;
	var uLocal_4995 = 0;
	var uLocal_4996 = -1082130432;
	var uLocal_4997 = 0;
	var uLocal_4998 = -1082130432;
	var uLocal_4999 = 0;
	var uLocal_5000 = -1082130432;
	var uLocal_5001 = 0;
	var uLocal_5002 = -1082130432;
	var uLocal_5003 = 0;
	var uLocal_5004 = -1082130432;
	var uLocal_5005 = 0;
	var uLocal_5006 = -1082130432;
	var uLocal_5007 = 16;
	var uLocal_5008 = 0;
	var uLocal_5009 = -1082130432;
	var uLocal_5010 = 0;
	var uLocal_5011 = -1082130432;
	var uLocal_5012 = 0;
	var uLocal_5013 = -1082130432;
	var uLocal_5014 = 0;
	var uLocal_5015 = -1082130432;
	var uLocal_5016 = 0;
	var uLocal_5017 = -1082130432;
	var uLocal_5018 = 0;
	var uLocal_5019 = -1082130432;
	var uLocal_5020 = 0;
	var uLocal_5021 = -1082130432;
	var uLocal_5022 = 0;
	var uLocal_5023 = -1082130432;
	var uLocal_5024 = 0;
	var uLocal_5025 = -1082130432;
	var uLocal_5026 = 0;
	var uLocal_5027 = -1082130432;
	var uLocal_5028 = 0;
	var uLocal_5029 = -1082130432;
	var uLocal_5030 = 0;
	var uLocal_5031 = -1082130432;
	var uLocal_5032 = 0;
	var uLocal_5033 = -1082130432;
	var uLocal_5034 = 0;
	var uLocal_5035 = -1082130432;
	var uLocal_5036 = 0;
	var uLocal_5037 = -1082130432;
	var uLocal_5038 = 0;
	var uLocal_5039 = -1082130432;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = -1082130432;
	var uLocal_5057 = -1082130432;
	var uLocal_5058 = 1;
	var uLocal_5059 = 1;
	var uLocal_5060 = 1;
	var uLocal_5061 = -1;
	var uLocal_5062 = -1;
	var uLocal_5063 = -1;
	bool bLocal_5064 = 0;
	bool bLocal_5065 = 0;
	int iLocal_5066 = 0;
	float fLocal_5067 = 0f;
	float fLocal_5068 = 0f;
	int iLocal_5069 = 0;
	struct<3> Local_5070 = { 0, 0, 0 } ;
	struct<3> Local_5073 = { 0, 0, 0 } ;
	float fLocal_5076 = 0f;
	float fLocal_5077 = 0f;
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
	sLocal_17 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	fLocal_39 = 1f;
	iLocal_584 = 786601;
	iLocal_1115 = AUDIO::GET_SOUND_ID();
	fLocal_5067 = 0f;
	fLocal_5068 = 0f;
	Local_5070 = { 0.05f, 0.2f, 0.5f };
	Local_5073 = { 0f, 0f, 0f };
	fLocal_5076 = 0.05f;
	fLocal_5077 = 1.31f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_927();
	}
	iLocal_816 = iLocal_816;
	uLocal_1154 = uLocal_1154;
	while (true)
	{
		RECORDING::_0x208784099002BC30("SaveMichaelAndTrevorP2", 0);
		if (func_916())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_914(0);
				func_911();
				func_906();
				func_903();
				func_901();
				switch (iLocal_42)
				{
					case 0:
						func_897();
						break;
					
					case 1:
						func_890();
						break;
					
					case 3:
						func_864();
						break;
					
					case 2:
						func_779();
						break;
					
					case 4:
						func_714();
						break;
					
					case 5:
						func_271();
						break;
					
					case 6:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x14A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (!bLocal_773)
	{
		if (!iLocal_818)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1061 + 10000)
			{
				iLocal_818 = func_268("FINC1_TGD", 0, 0, 0);
			}
		}
	}
	else
	{
		iLocal_818 = 1;
	}
	if (!iLocal_774)
	{
		func_266("fin_ext_p1", func_267(17), 100f, 120f);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 1, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 0, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 1, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 1, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 4, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 5, 0, joaat("cs_devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, joaat("cs_devin"));
		}
		if (!bLocal_933)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_593[3]))
				{
					bLocal_933 = GlobalFunc_2867("FINC2_DEVINS_CAR_RADIO");
				}
			}
		}
		if (!iLocal_831)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_593[1]) || !ENTITY::IS_ENTITY_DEAD(iLocal_593[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_593[1], 300f, 300f, 300f, 0, 0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_593[1]));
						func_264(6);
						iLocal_831 = 1;
					}
				}
			}
		}
		if (!iLocal_777)
		{
			if (func_255(1, 0, 1))
			{
				if (iLocal_925)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1143 || (MISC::GET_GAME_TIMER() >= iLocal_1117 && iLocal_926))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_593[3], 0, 0, 0);
						}
						if (iLocal_926 && MISC::GET_GAME_TIMER() < iLocal_1143)
						{
							iLocal_926 = 0;
						}
						else
						{
							iLocal_926 = 0;
							iLocal_925 = 0;
						}
					}
				}
				if (bLocal_909)
				{
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1576.909f, 5159.752f, 18.79768f, 100f, 100f, 25f, 0, 1, 0))
					{
						bLocal_909 = func_268("FINC1_DEVARR", 0, 0, 0);
					}
					switch (iLocal_576)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() >= iLocal_1116)
							{
								if (func_268("FINC1_DEVWAK", 0, 0, 0))
								{
									iLocal_925 = 1;
									iLocal_1143 = MISC::GET_GAME_TIMER() + 8200;
									iLocal_576 = 1;
									iLocal_1116 = MISC::GET_GAME_TIMER() + 7000;
								}
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() >= iLocal_1116)
							{
								if (func_268("FINC1_DHIDDN", 0, 0, 0))
								{
									iLocal_576 = 2;
									iLocal_1116 = MISC::GET_GAME_TIMER() + 4000;
								}
							}
							break;
						
						case 2:
							if (MISC::GET_GAME_TIMER() <= iLocal_1116)
							{
								if (func_268("FINC2_SHUTUP", 0, 0, 0))
								{
									iLocal_925 = 1;
									iLocal_1143 = MISC::GET_GAME_TIMER() + 9000;
									iLocal_576 = 3;
									iLocal_1116 = MISC::GET_GAME_TIMER() + 20000;
								}
							}
							else
							{
								iLocal_925 = 1;
								iLocal_1143 = MISC::GET_GAME_TIMER() + 9000;
								iLocal_576 = 3;
								iLocal_1116 = MISC::GET_GAME_TIMER() + 20000;
							}
							break;
						
						case 3:
							if (MISC::GET_GAME_TIMER() >= iLocal_1116)
							{
								if (func_268("FINC1_DEVTAK", 0, 0, 0))
								{
									iLocal_576 = 4;
								}
							}
							break;
						
						case 4:
							if (iLocal_819)
							{
								if (func_245())
								{
									iLocal_819 = 0;
								}
							}
							if (MISC::GET_GAME_TIMER() >= iLocal_1116)
							{
								if (func_268("FINC1_DEAD", 0, 0, 0))
								{
									iLocal_925 = 1;
									iLocal_1143 = MISC::GET_GAME_TIMER() + 3500;
									iLocal_576 = 5;
									iLocal_1116 = MISC::GET_GAME_TIMER() + 8000;
								}
							}
							break;
						
						case 5:
							if (MISC::GET_GAME_TIMER() >= iLocal_1116)
							{
								iLocal_576 = 6;
							}
							break;
						
						case 6:
							if (func_268("FINC1_BOOT", 0, 0, 0))
							{
								iLocal_576 = 7;
							}
							break;
						
						case 7:
							if (func_268("FINC2_SHUTUP", 0, 0, 0))
							{
								iLocal_1116 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000));
								iLocal_925 = 1;
								iLocal_926 = 1;
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
								{
									case 0:
										iVar1 = -3000;
										break;
									
									case 1:
										iVar1 = -2500;
										break;
									
									case 2:
										iVar1 = -2000;
										break;
									
									case 3:
										iVar1 = -1500;
										break;
									
									case 4:
										iVar1 = -1000;
										break;
									
									case 5:
										iVar1 = 500;
										break;
								}
								iLocal_1143 = (iLocal_1116 + iVar1);
								iLocal_1117 = (iLocal_1143 - MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
								iLocal_576 = 5;
							}
							break;
						}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_629))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
					func_243();
					func_242(0, 1, 1, 0);
					uLocal_629 = func_239(func_267(17), 1);
				}
				if (!bLocal_773)
				{
					if (!bLocal_778)
					{
						bLocal_778 = func_237("FC2_GORES", 1, 0);
					}
				}
				if (func_235())
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(17), 6f, 6f, 2f, 1, 1, 0)) && iVar0 == 0)
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_593[3], 1, 1, 1, 1, 1, 0, 0, 0);
						GlobalFunc_3001();
						func_243();
						GlobalFunc_4935();
						iLocal_1059 = MISC::GET_GAME_TIMER();
						iLocal_777 = 1;
					}
				}
			}
			else if (iLocal_576 >= 5)
			{
				iLocal_576 = 5;
				if (MISC::GET_GAME_TIMER() >= iLocal_1116)
				{
					iLocal_1116 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
			iVar2 = ENTITY::GET_ENTITY_HEALTH(iLocal_593[3]);
			if (iLocal_576 >= 2)
			{
				if (!iLocal_910)
				{
					if (iVar2 < iLocal_1139)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1138)
						{
							iLocal_1138 = MISC::GET_GAME_TIMER() + 800;
							iLocal_910 = 1;
						}
					}
					iLocal_1139 = iVar2;
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[3], 0))
				{
					if (func_268("FINC1_DEVCRA", 0, 0, 0))
					{
						iLocal_910 = 0;
						iLocal_1139 = iVar2;
						iLocal_1138 = MISC::GET_GAME_TIMER() + 12000;
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_1138)
					{
						iLocal_1139 = iVar2;
						iLocal_910 = 0;
					}
				}
				else
				{
					iLocal_1139 = iVar2;
					iLocal_910 = 0;
				}
			}
			else
			{
				iLocal_1139 = iVar2;
				iLocal_910 = 0;
			}
		}
		else
		{
			GlobalFunc_3001();
			if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10f, 1, 1056964608, 0, 1))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1059 + 1000)
				{
					if (!GlobalFunc_111())
					{
						if (func_235())
						{
							RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
							iLocal_774 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x766
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<20> Var9;
	struct<21> Var31;
	struct<21> Var53;
	struct<20> Var75;
	struct<21> Var97;
	struct<21> Var119;
	struct<20> Var141;
	struct<21> Var163;
	struct<21> Var185;
	var uVar207;
	int iVar208;
	var uVar209;
	var uVar210;
	struct<3> Var211;
	struct<3> Var214;
	
	iVar0 = func_229();
	iVar1 = func_228();
	iVar2 = func_227();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_47)
	{
		case 0:
			func_225(1, 1, 1, 0, 1, 0, 1000, 1);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
			MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
			func_223(15, 1, 8000);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
			GRAPHICS::_0x0AE73D8DF3A762B2(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FIN1_RADIO_FADE");
			Global_86810 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			MISC::CLEAR_AREA(-1577.772f, 5157.833f, 18.7777f, 5f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-1577.772f, 5157.833f, 18.7777f, 12f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-1577.772f, 5157.833f, 18.7777f, 12f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-1577.772f, 5157.833f, 18.7777f, 12f);
			MISC::CLEAR_AREA_OF_PEDS(-1577.772f, 5157.833f, 18.7777f, 120f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1577.772f, 5157.833f, 18.7777f, 120f, 0, 0, 0, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_593[3], -1577.772f, 5157.833f, 18.7777f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_593[3], 3.2f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_593[3]);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_593[3], 0, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_593[3], 0f);
			}
			iLocal_1058 = MISC::GET_GAME_TIMER();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_128)
			{
				case 0:
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
					func_266("fin_ext_p1", func_267(17), 100f, 120f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 8500)
					{
						if (func_197(27, &uLocal_672, 1, 0, 1, 1, 0))
						{
							while (!GlobalFunc_Has_Cutscene_Loaded())
							{
								PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
								PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
								SYSTEM::WAIT(0);
							}
							func_75(0, 0);
							func_75(2, 0);
							func_75(1, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_593[3], 2);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_593[3], "Trevor_Cliff_Car", 0, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iVar1))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar1, "Trevor", 0, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iVar0))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 0, 0, 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 2, func_69(0), 0);
							}
							if (!PED::IS_PED_INJURED(iVar2))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 0, 0, 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 2, func_69(1), 0);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_585, "Devin", 2, joaat("cs_devin"), 0);
							RECORDING::_0x48621C9FCA3EBD28(4);
							CUTSCENE::START_CUTSCENE(2048);
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							iLocal_128 = 1;
						}
					}
					break;
				
				case 1:
					if (!iLocal_776)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_56(&uLocal_672, 0, 0, 2000, 1, 1, 0, 1);
							func_41();
							if (bLocal_773)
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(800);
								}
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							func_75(2, 0);
							func_40(10);
							MISC::CLEAR_AREA(func_267(17), 12f, 1, 0, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[2], 0))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_593[2], 0, 0, 0f);
							}
							GlobalFunc_2882(iLocal_593[3]);
							ENTITY::SET_ENTITY_PROOFS(iLocal_593[3], 0, 0, 0, 0, 0, 0, 0, 0);
							iLocal_776 = 1;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_585))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devin", 0)))
						{
							iLocal_585 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devin", 0));
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
						{
							iLocal_48[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							iLocal_48[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								func_37(iVar1, 2, &Var3, &Var6, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar1, iLocal_593[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_593[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var9.f_4 = 1065353216;
								Var9.f_5 = 1065353216;
								Var9.f_9 = 1065353216;
								Var9.f_10 = 1065353216;
								Var9.f_14 = 1065353216;
								Var9.f_15 = 1065353216;
								Var9.f_17 = 1040187392;
								Var9.f_18 = 1040187392;
								Var9.f_19 = -1;
								Var31.f_4 = 1065353216;
								Var31.f_5 = 1065353216;
								Var31.f_9 = 1065353216;
								Var31.f_10 = 1065353216;
								Var31.f_14 = 1065353216;
								Var31.f_15 = 1065353216;
								Var31.f_17 = 1040187392;
								Var31.f_18 = 1040187392;
								Var31.f_19 = -1;
								Var31 = 1;
								Var31.f_2 = func_36(2);
								Var31.f_1 = func_35(9);
								Var31.f_3 = 0f;
								Var31.f_4 = 0f;
								Var31.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var31, &Var9, &Var9, 0f, 0f);
								Var53.f_4 = 1065353216;
								Var53.f_5 = 1065353216;
								Var53.f_9 = 1065353216;
								Var53.f_10 = 1065353216;
								Var53.f_14 = 1065353216;
								Var53.f_15 = 1065353216;
								Var53.f_17 = 1040187392;
								Var53.f_18 = 1040187392;
								Var53.f_19 = -1;
								Var53 = 1;
								Var53.f_2 = "PushCar_waitIdle_additive_T";
								Var53.f_1 = func_35(9);
								Var53.f_3 = 0f;
								Var53.f_4 = 1f;
								Var53.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var53, &Var9, &Var9, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar1, 0, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!PED::IS_PED_INJURED(iVar0))
							{
								func_37(iVar0, 0, &Var3, &Var6, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iLocal_593[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_593[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var75.f_4 = 1065353216;
								Var75.f_5 = 1065353216;
								Var75.f_9 = 1065353216;
								Var75.f_10 = 1065353216;
								Var75.f_14 = 1065353216;
								Var75.f_15 = 1065353216;
								Var75.f_17 = 1040187392;
								Var75.f_18 = 1040187392;
								Var75.f_19 = -1;
								Var97.f_4 = 1065353216;
								Var97.f_5 = 1065353216;
								Var97.f_9 = 1065353216;
								Var97.f_10 = 1065353216;
								Var97.f_14 = 1065353216;
								Var97.f_15 = 1065353216;
								Var97.f_17 = 1040187392;
								Var97.f_18 = 1040187392;
								Var97.f_19 = -1;
								Var97 = 1;
								Var97.f_2 = func_36(0);
								Var97.f_1 = func_35(9);
								Var97.f_3 = 0f;
								Var97.f_4 = 0f;
								Var97.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar0, &Var97, &Var75, &Var75, 0f, 0f);
								Var119.f_4 = 1065353216;
								Var119.f_5 = 1065353216;
								Var119.f_9 = 1065353216;
								Var119.f_10 = 1065353216;
								Var119.f_14 = 1065353216;
								Var119.f_15 = 1065353216;
								Var119.f_17 = 1040187392;
								Var119.f_18 = 1040187392;
								Var119.f_19 = -1;
								Var119 = 1;
								Var119.f_2 = "PushCar_waitIdle_additive_M";
								Var119.f_1 = func_35(9);
								Var119.f_3 = 0f;
								Var119.f_4 = 1f;
								Var119.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar0, &Var119, &Var75, &Var75, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
						{
							if (!PED::IS_PED_INJURED(iVar2))
							{
								func_37(iVar2, 1, &Var3, &Var6, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar2, iLocal_593[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_593[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var141.f_4 = 1065353216;
								Var141.f_5 = 1065353216;
								Var141.f_9 = 1065353216;
								Var141.f_10 = 1065353216;
								Var141.f_14 = 1065353216;
								Var141.f_15 = 1065353216;
								Var141.f_17 = 1040187392;
								Var141.f_18 = 1040187392;
								Var141.f_19 = -1;
								Var163.f_4 = 1065353216;
								Var163.f_5 = 1065353216;
								Var163.f_9 = 1065353216;
								Var163.f_10 = 1065353216;
								Var163.f_14 = 1065353216;
								Var163.f_15 = 1065353216;
								Var163.f_17 = 1040187392;
								Var163.f_18 = 1040187392;
								Var163.f_19 = -1;
								Var163 = 1;
								Var163.f_2 = func_36(1);
								Var163.f_1 = func_35(9);
								Var163.f_3 = 0f;
								Var163.f_4 = 0f;
								Var163.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar2, &Var163, &Var141, &Var141, 0f, 0f);
								Var185.f_4 = 1065353216;
								Var185.f_5 = 1065353216;
								Var185.f_9 = 1065353216;
								Var185.f_10 = 1065353216;
								Var185.f_14 = 1065353216;
								Var185.f_15 = 1065353216;
								Var185.f_17 = 1040187392;
								Var185.f_18 = 1040187392;
								Var185.f_19 = -1;
								Var185 = 1;
								Var185.f_2 = "PushCar_waitIdle_additive_F";
								Var185.f_1 = func_35(9);
								Var185.f_3 = 0f;
								Var185.f_4 = 1f;
								Var185.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar2, &Var185, &Var141, &Var141, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, 0, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor_Cliff_Car", 0))
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_593[3], 5, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_593[3]);
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1115, "CAR_WHEELS", iLocal_593[3], "FINALE_C2_SOUNDS", 0, 0);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin_Bike", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_585))
						{
							PED::DELETE_PED(&iLocal_585);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						RECORDING::_0x81CBAE94390F9F89();
						CLOCK::PAUSE_CLOCK(1);
						func_34();
						GlobalFunc_Display_Help_Text("FC2_PUSHHLP");
						func_237("FC2_KILLDEV", 1, 0);
						func_31(11);
						GRAPHICS::_0xE3E2C1B4C59DBC77(6);
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						iLocal_46 = 0;
						iLocal_1058 = MISC::GET_GAME_TIMER();
						iLocal_1143 = MISC::GET_GAME_TIMER() + 2000;
						GlobalFunc_702(0, 0, 1);
						iLocal_128 = 2;
					}
					break;
				
				case 2:
					PAD::_0x7F4724035FDCA1DD(0);
					GlobalFunc_612(&uVar207, &iVar208, &uVar209, &uVar210, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
					{
						Var211 = { func_28() };
						Local_977 = { Local_977 + Var211 - Local_977 * FtoV((5f * MISC::GET_FRAME_TIME())) };
						Local_977.f_2 = 20.3f;
						CAM::SET_CAM_COORD(uLocal_647, Local_977);
						Var214 = { ENTITY::GET_ENTITY_COORDS(iLocal_593[3], 1) };
						if ((iVar208 < -100 && !PAD::_IS_USING_KEYBOARD(0)) || ((PAD::IS_DISABLED_CONTROL_PRESSED(0, 32) && PAD::_IS_USING_KEYBOARD(0)) && Var214.x > -1588.87f))
						{
							if (!iLocal_915)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1141)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Car_Push_Flex", iLocal_593[3], "FINALE_C2_SOUNDS", 0, 0);
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
											}
											break;
										
										case 1:
											if (!PED::IS_PED_INJURED(iLocal_48[0]))
											{
												AUDIO::PLAY_PAIN(iLocal_48[0], 23, 0f, 0);
											}
											break;
										
										case 2:
											if (!PED::IS_PED_INJURED(iLocal_48[2]))
											{
												AUDIO::PLAY_PAIN(iLocal_48[2], 23, 0f, 0);
											}
											break;
									}
									iLocal_1141 = MISC::GET_GAME_TIMER() + 1500;
								}
								iLocal_915 = 1;
							}
							fLocal_1020 = (fLocal_1020 + (1.2f * SYSTEM::TIMESTEP()));
							if (fLocal_1020 > 14f)
							{
								fLocal_1020 = 14f;
							}
							fLocal_1024 = (fLocal_1024 + (1f * SYSTEM::TIMESTEP()));
							if (fLocal_1024 > 1f)
							{
								fLocal_1024 = 1f;
							}
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_593[3], 0, 0f, fLocal_1020, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						}
						else
						{
							iLocal_915 = 0;
							fLocal_1020 = (fLocal_1020 - (1.5f * SYSTEM::TIMESTEP()));
							if (fLocal_1020 < 9f)
							{
								fLocal_1020 = 9f;
							}
							fLocal_1024 = (fLocal_1024 - (1f * SYSTEM::TIMESTEP()));
							if (fLocal_1024 < 0f)
							{
								fLocal_1024 = 0f;
							}
						}
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::SET_ANIM_RATE(iVar0, fLocal_1024, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iVar1))
						{
							TASK::SET_ANIM_RATE(iVar1, fLocal_1024, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iVar2))
						{
							TASK::SET_ANIM_RATE(iVar2, fLocal_1024, 0, 0);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_1143)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_593[3], 0, 0, 0);
							iLocal_1143 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000));
						}
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_266("fin_ext_p2", -1584.7f, 5163.71f, 18.56f, 100f, 120f);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 1000)
						{
							if (Var214.x < -1588.87f)
							{
								if (GlobalFunc_Has_Cutscene_Loaded())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
									{
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_593[3], "Trevor_Cliff_Car", 0, 0, 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[2], 0))
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_593[2]) == joaat("tailgater"))
										{
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_593[2], "Michaels_car", 0, 0, 0);
										}
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[0], 0))
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_593[0]) == joaat("bagger"))
										{
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_593[0], "Franklin_Bike", 0, 0, 0);
										}
									}
									if (!PED::IS_PED_INJURED(iVar1))
									{
										ENTITY::DETACH_ENTITY(iVar1, 1, 1);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar1, "Trevor", 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(iVar0))
									{
										ENTITY::DETACH_ENTITY(iVar0, 1, 1);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(iVar2))
									{
										ENTITY::DETACH_ENTITY(iVar2, 1, 1);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 0, 0, 0);
									}
									AUDIO::STOP_SOUND(iLocal_1115);
									HUD::CLEAR_HELP(1);
									iLocal_1058 = MISC::GET_GAME_TIMER();
									iLocal_775 = 0;
									iLocal_776 = 0;
									RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
									RECORDING::_0x48621C9FCA3EBD28(4);
									CUTSCENE::START_CUTSCENE(2048);
									CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
									HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
									iLocal_128 = 3;
								}
							}
						}
					}
					else
					{
						HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
						func_26();
					}
					break;
				
				case 3:
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_775 = 1;
					}
					if (!iLocal_776)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_40(11);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							iLocal_776 = 1;
						}
					}
					if (!Global_86810)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 71400)
						{
							AUDIO::PLAY_END_CREDITS_MUSIC(1);
							AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
							AUDIO::SET_MOBILE_PHONE_RADIO_STATE(1);
							AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
							AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
							PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
							Global_86810 = 1;
						}
					}
					else
					{
						PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
					}
					if (!bLocal_935)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 90583)
						{
							GlobalFunc_5077();
							if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
							{
								RECORDING::_0x81CBAE94390F9F89();
								func_23();
							}
						}
					}
					if (!bLocal_905)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 95600)
						{
							GlobalFunc_9804(5, 0);
							bLocal_905 = true;
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						RECORDING::_0x81CBAE94390F9F89();
						func_26();
					}
					break;
				
				case 4:
					GlobalFunc_5077();
					if (MISC::GET_GAME_TIMER() >= (iLocal_1150 + 45000))
					{
						CAM::DO_SCREEN_FADE_OUT(5000);
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(0);
						}
						func_3();
					}
					break;
			}
			break;
		
		case 2:
			break;
	}
}

void func_3()//Position - 0x16C8
{
	GlobalFunc_565(264, 1, 0);
	if (!bLocal_905)
	{
		GlobalFunc_9804(5, 0);
	}
	Global_86811 = 2;
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54752 = 1;
		GlobalFunc_45(1, 1);
	}
	GlobalFunc_5103(1, 0);
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		Global_54750 = 0;
	}
	func_927();
}




















void func_23()//Position - 0x1C2F
{
	MISC::SET_CREDITS_ACTIVE(1);
	MISC::_0xB51B9AB9EF81868C(0);
	AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
	bLocal_935 = true;
}



void func_26()//Position - 0x1C71
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_48[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_585))
	{
		PED::DELETE_PED(&iLocal_585);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_593)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_593[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_775)
	{
	}
	func_27(&uLocal_647);
	CAM::SET_CAM_COORD(uLocal_647, -1573.803f, 5160.573f, 20.7951f);
	CAM::SET_CAM_ROT(uLocal_647, 5.998f, -0.0062f, 83.9225f, 2);
	CAM::SET_CAM_FOV(uLocal_647, 40f);
	func_27(&uLocal_648);
	CAM::SET_CAM_COORD(uLocal_648, -1573.803f, 5160.573f, 20.7951f);
	CAM::SET_CAM_ROT(uLocal_648, 5.998f, -0.0062f, 83.9225f, 2);
	CAM::SET_CAM_FOV(uLocal_648, 40f);
	CAM::SHAKE_CAM(uLocal_648, "HAND_SHAKE", 0.15f);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_648, uLocal_647, 2000, 1, 1);
	iLocal_1150 = MISC::GET_GAME_TIMER();
	iLocal_128 = 4;
	if (!bLocal_935)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		func_23();
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_27(var uParam0)//Position - 0x1DD9
{
	if (CAM::DOES_CAM_EXIST(uLocal_648))
	{
		CAM::DESTROY_CAM(uLocal_648, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
}

Vector3 func_28()//Position - 0x1E1C
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
	{
		Var0 = { 0.9f, (-4.3f + (fLocal_1024 / 3f)), 0.8f };
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_593[3], Var0);
	}
	return 0f, 0f, 0f;
}



var func_31(int iParam0)//Position - 0x1F65
{
	return AUDIO::START_AUDIO_SCENE(func_32(iParam0));
}

char* func_32(int iParam0)//Position - 0x1F77
{
	switch (iParam0)
	{
		case 0:
			return "FINALE_FRANKLIN_DRIVE";
			break;
		
		case 1:
			return "FINALE_FRANKLIN_ON_FOOT";
			break;
		
		case 2:
			return "FINALE_FRANKLIN_KILL_CHENG";
			break;
		
		case 3:
			return "FINALE_MICHAEL_DRIVE";
			break;
		
		case 4:
			return "FINALE_MICHAEL_ON_FOOT";
			break;
		
		case 5:
			return "FINALE_MICHAEL_KILL_STRETCH";
			break;
		
		case 6:
			return "FINALE_TREVOR_DRIVE";
			break;
		
		case 7:
			return "FINALE_TREVOR_ON_FOOT";
			break;
		
		case 8:
			return "FINALE_TREVOR_KILL_STEVE";
			break;
		
		case 9:
			return "FINALE_DRIVE_TO_DEVIN";
			break;
		
		case 10:
			return "FINALE_DRIVE_TO_OCEAN";
			break;
		
		case 11:
			return "FINALE_PUSH_CAR";
			break;
		
		case 12:
			return "FINALE_FRANKLIN_ESCAPE_TRIADS";
			break;
		
		case 13:
			return "FINALE_MICHAEL_KILL_BALLAS";
			break;
		
		case 14:
			return "FINALE_MICHAEL_ENEMY_CAR_ARRIVES";
			break;
		
		case 15:
			return "FINALE_TREVOR_FOCUS_ON_WHEEL";
			break;
		
		case 16:
			return "FINALE_TREVOR_WATCH_STEVE_CAMERA";
			break;
		
		case 17:
			return "FINALE_TREVOR_KILL_CAM";
			break;
		
		case 18:
			return "FINALE_DEVINS_HOUSE_OVERVIEW";
			break;
		
		case 19:
			return "FINALE_KIDNAP_DEVIN_STEALTH";
			break;
		
		case 20:
			return "FINALE_KIDNAP_DEVIN_ALERT";
			break;
	}
	return "";
}


void func_34()//Position - 0x20F0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
	{
		func_27(&uLocal_647);
		Local_977 = { func_28() };
		Local_977.f_2 = 20.3f;
		CAM::SET_CAM_COORD(uLocal_647, Local_977);
		CAM::SET_CAM_ROT(uLocal_647, -8.7f, 0f, 110.3f, 2);
		CAM::SET_CAM_FOV(uLocal_647, 41.5f);
		CAM::SHAKE_CAM(uLocal_647, "HAND_SHAKE", 0.3f);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	}
}

char* func_35(int iParam0)//Position - 0x2167
{
	switch (iParam0)
	{
		case 0:
			return "MISSFINALE_C2IG_1";
			break;
		
		case 3:
			return "MISSFINALE_C2MCS_1";
			break;
		
		case 1:
			return "MISSFINALE_C2IG_2";
			break;
		
		case 2:
			return "MISSFINALE_C2IG_4";
			break;
		
		case 4:
			return "MISSFINALE_C2STEVE_CAMERAMAN_DEATH";
			break;
		
		case 5:
			return "MISSFINALE_C2IG_5";
			break;
		
		case 6:
			return "MISSFINALE_C2IG_7_ALT1";
			break;
		
		case 7:
			return "MISSFINALE_C2MCS_2_B";
			break;
		
		case 8:
			return "MISSFINALE_C2IG_8";
			break;
		
		case 9:
			return "MISSFINALE_C2IG_11";
			break;
		
		case 10:
			return "reaction@gunfire@intro_v1";
			break;
		
		case 11:
			return "reaction@gunfire@runs_v1";
			break;
		
		case 12:
			return "MISSFINALE_C2CAPTURE_DEVIN";
			break;
	}
	return "invalid!";
}

char* func_36(int iParam0)//Position - 0x224A
{
	switch (iParam0)
	{
		case 2:
			return "PushCar_offCliff_T";
			break;
		
		case 0:
			return "PushCar_offCliff_M";
			break;
		
		case 1:
			return "PushCar_offCliff_F";
			break;
	}
	return "error";
}

void func_37(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4)//Position - 0x228D
{
	float fVar0;
	
	if (fParam4 >= 0f)
	{
		fVar0 = fParam4;
	}
	else
	{
		fVar0 = func_38(iParam0, iParam1);
	}
	*uParam2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_35(9), func_36(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
	*uParam3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_35(9), func_36(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
}

float func_38(int iParam0, int iParam1)//Position - 0x22E7
{
	char* sVar0;
	
	sVar0 = func_36(iParam1);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_35(9), sVar0, 3))
	{
		return ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_35(9), sVar0);
	}
	return 0f;
}


void func_40(int iParam0)//Position - 0x2397
{
	AUDIO::STOP_AUDIO_SCENE(func_32(iParam0));
}

void func_41()//Position - 0x23A9
{
	func_242(1, 1, 1, 0);
	GlobalFunc_8380(1, 1, 1, 0);
	GlobalFunc_8622();
}















void func_56(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x27AB
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	GlobalFunc_8380(bParam1, 1, 0, 0);
	GlobalFunc_737();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
		}
	}
}













int func_69(int iParam0)//Position - 0x2C30
{
	switch (iParam0)
	{
		case 0:
			return GlobalFunc_4917(0);
			break;
		
		case 1:
			return GlobalFunc_4917(1);
			break;
		
		case 2:
			return GlobalFunc_4917(2);
			break;
		
		case 3:
			return GlobalFunc_4946(29);
			break;
		
		case 4:
			return GlobalFunc_4931(0, 0);
			break;
		
		case 5:
			return GlobalFunc_4931(1, 2);
			break;
		
		case 6:
			return GlobalFunc_4931(2, 0);
			break;
		
		case 7:
			return joaat("tornado");
			break;
		
		case 8:
			return GlobalFunc_4946(35);
			break;
		
		case 9:
			return GlobalFunc_4946(21);
			break;
		
		case 10:
			return joaat("g_m_m_chigoon_02");
			break;
		
		case 11:
			return joaat("washington");
			break;
		
		case 12:
			return joaat("cavalcade");
			break;
		
		case 13:
			return joaat("felon");
			break;
		
		case 14:
			return joaat("cs_stevehains");
			break;
		
		case 15:
			return joaat("s_m_y_grip_01");
			break;
		
		case 16:
			return joaat("a_f_y_hipster_04");
			break;
		
		case 17:
			return joaat("prop_v_cam_01");
			break;
		
		case 18:
			return GlobalFunc_4946(37);
			break;
		
		case 19:
			return joaat("g_m_y_ballaorig_01");
			break;
		
		case 20:
			return joaat("s_m_y_cop_01");
			break;
		
		case 21:
			return joaat("s_m_y_blackops_01");
			break;
		
		case 22:
			return joaat("prop_phone_ing_02");
			break;
		
		case 23:
			return joaat("prop_bskball_01");
			break;
		
		case 24:
			return joaat("prop_ld_ferris_wheel");
			break;
		
		case 25:
			return joaat("prop_ferris_car_01");
			break;
		
		case 26:
			return joaat("p_devin_box_01_s");
			break;
		
		case 27:
			return joaat("prop_devin_box_dummy_01");
			break;
		
		case 28:
			return joaat("prop_cs_tablet");
			break;
	}
	return 0;
}






void func_75(int iParam0, bool bParam1)//Position - 0x314F
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar1 = 112;
			break;
		
		case 1:
			iVar1 = 158;
			break;
		
		case 2:
			iVar1 = 154;
			break;
	}
	if (GlobalFunc_8315() == iParam0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = iLocal_48[GlobalFunc_237(iParam0)];
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (bParam1)
		{
			func_169(iVar0, 14, iVar1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			func_76(iVar0, 14, iVar1);
		}
	}
}

int func_76(int iParam0, int iParam1, int iParam2)//Position - 0x31D4
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_76(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_76(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		func_169(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		func_169(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}





























































































int func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1CD74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_169(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_169(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11095(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_169(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_169(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_169(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_169(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_169(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_169(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_169(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_169(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_169(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_169(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_169(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_169(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}




























bool func_197(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1F961
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_198(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_198(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1F98F
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_56(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_56(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_56(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9196(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

























void func_223(int iParam0, bool bParam1, int iParam2)//Position - 0x21C04
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	
	func_224(iParam0, &Var0, &Var3, &uVar6);
	func_27(&uLocal_647);
	CAM::DETACH_CAM(uLocal_647);
	CAM::STOP_CAM_POINTING(uLocal_647);
	CAM::SET_CAM_COORD(uLocal_647, Var0);
	CAM::SET_CAM_ROT(uLocal_647, Var3, 2);
	CAM::SET_CAM_FOV(uLocal_647, uVar6);
	if (iParam0 != 11)
	{
		iVar7 = 1;
		iVar8 = 1;
	}
	else
	{
		iVar7 = 0;
		iVar8 = 0;
	}
	if (bParam1)
	{
		func_224(iParam0 + 1, &Var0, &Var3, &fVar6);
		func_27(&uLocal_648);
		CAM::SET_CAM_COORD(uLocal_648, Var0);
		CAM::SET_CAM_ROT(uLocal_648, Var3, 2);
		CAM::SET_CAM_FOV(uLocal_648, fVar6);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_648, uLocal_647, iParam2, iVar7, iVar8);
	}
	if (iParam0 == 9 || iParam0 == 11)
	{
		CAM::SHAKE_CAM(uLocal_647, "HAND_SHAKE", 0.3f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}

void func_224(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x21CDC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1049.7f, -2017.96f, 51.39f };
			*uParam2 = { 9.71f, 0f, 98.15f };
			*uParam3 = 20.049f;
			break;
		
		case 8:
			*uParam1 = { -204.37f, -1507.27f, 32.29f };
			*uParam2 = { -11.68f, 0f, -145.99f };
			*uParam3 = 50f;
			break;
		
		case 1:
			*uParam1 = { -1662.64f, -1130.31f, 43.65f };
			*uParam2 = { -5.97f, 0f, 147.26f };
			*uParam3 = 46.848f;
			break;
		
		case 2:
			*uParam1 = { -3004.91f, 105.2f, 20.73f };
			*uParam2 = { -17.32f, 0f, 141.87f };
			*uParam3 = 50f;
			break;
		
		case 3:
			*uParam1 = { -207.51f, -1487.31f, 31.75f };
			*uParam2 = { -5.94f, 0f, -167.82f };
			*uParam3 = 34f;
			break;
		
		case 4:
			*uParam1 = { -2652.32f, 1779.98f, 193.98f };
			*uParam2 = { -17.4f, 0f, -20.84f };
			*uParam3 = 35.217f;
			break;
		
		case 9:
			*uParam1 = { -2711.9f, 1910.3f, 175.9f };
			*uParam2 = { -1.4f, 0f, -102.8f };
			*uParam3 = 37.3f;
			break;
		
		case 10:
			*uParam1 = { -2710.6f, 1908.8f, 175.8f };
			*uParam2 = { -1.8f, 0f, -102.2f };
			*uParam3 = 37.3f;
			break;
		
		case 11:
			*uParam1 = { -2636f, 1881.8f, 160.1f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*uParam3 = 29.5f;
			break;
		
		case 12:
			*uParam1 = { -2636.4f, 1881.4f, 160.2f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*uParam3 = 29.5f;
			break;
		
		case 13:
			*uParam1 = { -2647.9f, 1870.5f, 159.8f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*uParam3 = 37.5f;
			break;
		
		case 14:
			*uParam1 = { -2648.1f, 1870.4f, 159.7f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*uParam3 = 37.5f;
			break;
		
		case 5:
			*uParam1 = { -2650.38f, 1863.76f, 160.21f };
			*uParam2 = { -1.2f, 0f, -7.92f };
			*uParam3 = 35.217f;
			break;
		
		case 15:
			*uParam1 = { -1570.94f, 5159f, 20.71f };
			*uParam2 = { 0.93f, 0f, 86.76f };
			*uParam3 = 40f;
			break;
		
		case 16:
			*uParam1 = { -1576.132f, 5160.888f, 24.1175f };
			*uParam2 = { 4.8389f, -0.011f, 92.1057f };
			*uParam3 = 40f;
			break;
		
		case 7:
			*uParam1 = { -1662.34f, -1123.84f, 43.28f };
			*uParam2 = { -3.22f, 0f, 28.53f };
			*uParam3 = 33.32f;
			break;
	}
}

void func_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x2201F
{
	func_242(bParam2, 1, 1, 0);
	GlobalFunc_8380(bParam0, 1, 1, 0);
	if (bParam0)
	{
		GlobalFunc_8622();
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		iLocal_1057 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_7632(0);
			CAM::RENDER_SCRIPT_CAMS(false, iParam3, iParam6, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_649))
			{
				CAM::DESTROY_CAM(uLocal_649, 0);
			}
			GlobalFunc_2866(&uLocal_647);
			GlobalFunc_2866(&uLocal_648);
			if (bParam7)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		else if (bParam5)
		{
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
		}
		iLocal_774 = 0;
		iLocal_775 = 0;
		iLocal_776 = 0;
		iLocal_777 = 0;
		iLocal_47 = 0;
		if (bParam4)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}


int func_227()//Position - 0x220FC
{
	if (GlobalFunc_8315() == 1)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_48[1];
}

int func_228()//Position - 0x2211B
{
	if (GlobalFunc_8315() == 2)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_48[2];
}

int func_229()//Position - 0x2213A
{
	if (GlobalFunc_8315() == 0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_48[0];
}






int func_235()//Position - 0x22389
{
	if ((iLocal_41 == 0 && Local_126.f_1 == 0) && !GlobalFunc_331())
	{
		return 1;
	}
	return 0;
}


int func_237(char* sParam0, int iParam1, int iParam2)//Position - 0x223C3
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((iParam2 || !GlobalFunc_111()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_235())
			{
				GlobalFunc_164(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}


int func_239(struct<3> Param0, int iParam3)//Position - 0x22425
{
	if (func_235())
	{
		return GlobalFunc_5914(Param0, iParam3);
	}
	return 0;
}



void func_242(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x22485
{
	if (bParam0)
	{
		GlobalFunc_4935();
	}
	if (bParam1)
	{
		if (!GlobalFunc_111() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_1062 + 1000)
		{
			HUD::CLEAR_HELP(1);
			iLocal_1062 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_243()//Position - 0x224D9
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_629))
	{
		HUD::REMOVE_BLIP(&uLocal_629);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_630))
	{
		HUD::REMOVE_BLIP(&uLocal_630);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_631))
	{
		HUD::REMOVE_BLIP(&uLocal_631);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_639))
	{
		HUD::REMOVE_BLIP(&uLocal_639);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_640))
	{
		HUD::REMOVE_BLIP(&uLocal_640);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_632[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_632[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_636[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_636[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		GlobalFunc_589(&(Local_137[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		GlobalFunc_589(&(Local_278[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_589(&(Local_419[iVar0 /*16*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_641[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_641[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_643[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_643[iVar0]));
		}
		iVar0++;
	}
}


int func_245()//Position - 0x226AF
{
	if (iLocal_819)
	{
		if (func_235())
		{
			if (GlobalFunc_10626(&uLocal_1155, "FINC1AU", &Local_1328, &cLocal_1334, 8, 0, 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}










int func_255(bool bParam0, bool bParam1, bool bParam2)//Position - 0x22CF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char* sVar9;
	
	iVar1 = GlobalFunc_8315();
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = true;
	bVar7 = true;
	bVar8 = false;
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar0 = 2;
			break;
		
		case 1:
			iVar0 = 0;
			break;
		
		case 2:
			if (iLocal_42 == 6)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (bParam1)
	{
		bVar5 = false;
	}
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[iVar0], 0))
		{
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_48[iVar2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_48[iVar2], iLocal_593[iVar0], 0))
					{
						bVar4 = false;
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[iVar0], 0))
			{
				bVar3 = false;
			}
		}
		else
		{
			bVar7 = false;
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar6 = false;
		}
	}
	if (bVar7)
	{
		if (bVar5)
		{
			if (bVar3)
			{
				if (iLocal_1063[iVar1] < 2)
				{
					iLocal_1063[iVar1] = 2;
				}
				if (bVar4)
				{
					if (bVar6)
					{
						bVar8 = true;
						if (!GlobalFunc_331())
						{
							iLocal_820 = 0;
							bLocal_821 = false;
							return 1;
						}
					}
					else
					{
						if (!iLocal_820)
						{
							func_243();
							iLocal_820 = 1;
						}
						else
						{
							func_262();
						}
						if (!bLocal_821)
						{
							bLocal_821 = func_237("LOSE_WANTED", 1, 0);
							MISC::ENABLE_DISPATCH_SERVICE(1, 1);
							MISC::ENABLE_DISPATCH_SERVICE(7, 1);
							PED::SET_CREATE_RANDOM_COPS(1);
						}
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_630))
				{
					func_242(0, 1, 0, 0);
					func_243();
					if (iLocal_1063[iVar1] == 0 || iLocal_1063[iVar1] == 2)
					{
						iLocal_817 = 1;
					}
					uLocal_630 = func_259(iLocal_593[iVar0], 0);
				}
				if (iLocal_817)
				{
					switch (iLocal_1063[iVar1])
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETINBK";
									break;
								
								case 2:
									sVar9 = "CMN_MGETIN";
									break;
								
								case 1:
									sVar9 = "CMN_TGETIN";
									break;
								
								case 3:
									sVar9 = "FC2_GODCAR1";
									break;
							}
							break;
						
						case 2:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETBCKBK";
									break;
								
								case 2:
									sVar9 = "CMN_MGETBCK";
									break;
								
								case 1:
									sVar9 = "CMN_TGETBCK";
									break;
								
								case 3:
									sVar9 = "FC2_GODCAR2";
									break;
							}
							break;
					}
					if (iLocal_818 || iLocal_42 != 6)
					{
						if (func_237(sVar9, 1, 0))
						{
							iLocal_817 = 0;
							iLocal_1063[iVar1]++;
						}
					}
				}
			}
		}
	}
	if (!bVar5)
	{
	}
	if (!bVar8)
	{
		if (!iLocal_819)
		{
			if (func_256())
			{
				GlobalFunc_4935();
			}
		}
	}
	return 0;
}

int func_256()//Position - 0x22F85
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "FINC1_DEVTAK"))
		{
			iLocal_819 = 1;
			Local_1328 = { Var0 };
			cLocal_1334 = { GlobalFunc_514() };
			return 1;
		}
	}
	return 0;
}



int func_259(int iParam0, bool bParam1)//Position - 0x23093
{
	if (func_235())
	{
		return GlobalFunc_6783(iParam0, bParam1, 0);
	}
	return 0;
}



void func_262()//Position - 0x23166
{
	if (HUD::DOES_BLIP_EXIST(uLocal_630))
	{
		HUD::REMOVE_BLIP(&uLocal_630);
	}
	if (((((((((GlobalFunc_663("CMN_GENGETINBK", 0, 0) || GlobalFunc_663("CMN_MGETIN", 0, 0)) || GlobalFunc_663("CMN_TGETIN", 0, 0)) || GlobalFunc_663("FC2_GODCAR1", 0, 0)) || GlobalFunc_663("CMN_GENGETIN", 0, 0)) || GlobalFunc_663("CMN_GENGETBCKBK", 0, 0)) || GlobalFunc_663("CMN_MGETBCK", 0, 0)) || GlobalFunc_663("CMN_TGETBCK", 0, 0)) || GlobalFunc_663("FC2_GODCAR2", 0, 0)) || GlobalFunc_663("CMN_GENGETBCK", 0, 0))
	{
		func_242(1, 1, 0, 0);
	}
}


void func_264(int iParam0)//Position - 0x23242
{
	int iVar0;
	
	if (iLocal_684[iParam0])
	{
		iVar0 = func_69(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_684[iParam0] = 0;
	}
}


void func_266(char* sParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x23281
{
	switch (iLocal_46)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam4, fParam4, fParam4, 0, 1, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_46 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam5, fParam5, fParam5, 0, 1, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_46 = 0;
			}
			break;
	}
}

Vector3 func_267(int iParam0)//Position - 0x232F8
{
	switch (iParam0)
	{
		case 0:
			return 1020.931f, -2038.863f, 29.85838f;
			break;
		
		case 1:
			return 1112.35f, -2003.9f, 34.44f;
			break;
		
		case 2:
			return 1114.1f, -2003.12f, 34.44f;
			break;
		
		case 3:
			return 1022.91f, -2041.58f, 30.01f;
			break;
		
		case 4:
			return 974.3848f, -2081.01f, 29.98432f;
			break;
		
		case 5:
			return 989.6733f, -2076.105f, 30.06461f;
			break;
		
		case 6:
			return -2997.288f, 93.6371f, 10.6077f;
			break;
		
		case 7:
			return -1602.93f, -1021.84f, 12.07f;
			break;
		
		case 8:
			return -2550.93f, 1912.22f, 167.96f;
			break;
		
		case 9:
			return -2637.536f, 1599.746f, 124.2257f;
			break;
		
		case 10:
			return -205.444f, -1489.52f, 30.9925f;
			break;
		
		case 11:
			return -2581.06f, 1930.49f, 166.3f;
			break;
		
		case 12:
			return -1608.71f, -1061.97f, 12.02f;
			break;
		
		case 13:
			return -210.93f, -1492.2f, 30.26f;
			break;
		
		case 14:
			return -1613.36f, -1010.51f, 12.04f;
			break;
		
		case 15:
			return -3008.57f, 109.54f, 12.07f;
			break;
		
		case 16:
			return -2555.514f, 1912.511f, 167.8971f;
			break;
		
		case 17:
			return -1576.47f, 5153.91f, 18.97f;
			break;
		
		case 18:
			return -1663.97f, -1120.88f, 41.7839f;
			break;
		
		case 19:
			return -2645.99f, 1871.412f, 159.1515f;
			break;
		
		case 20:
			return -1663.97f, -1126.7f, 30.7f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_268(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x23541
{
	struct<2> Var0;
	
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111())
		{
			if (func_235())
			{
				if (iParam2 == 0)
				{
					return GlobalFunc_10618(&uLocal_1155, "FINC1AU", sParam0, 8, 0, 0, 0);
				}
				else
				{
					StringCopy(&Var0, sParam0, 16);
					StringConCat(&Var0, "_", 16);
					StringIntConCat(&Var0, iParam2, 16);
					if (!bParam3)
					{
						return GlobalFunc_10630(&uLocal_1155, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
					else
					{
						return GlobalFunc_10626(&uLocal_1155, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}



void func_271()//Position - 0x2367D
{
	int iVar0;
	bool bVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_774)
	{
		func_698();
		if (!iLocal_871)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2654.7f, 1861.9f, 159.304f, -2602.7f, 1925.2f, 168.7f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2604.207f, 1859.182f, 164.8042f, -2598.302f, 1905.657f, 168.7f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (!PED::IS_PED_INJURED(Local_419[iVar0 /*16*/]))
					{
						PED::SET_PED_COMBAT_RANGE(Local_419[iVar0 /*16*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_419[iVar0 /*16*/], 57, 0);
					}
					iVar0++;
				}
				iLocal_871 = 1;
			}
		}
		if (!bLocal_867)
		{
			if (!bLocal_868)
			{
				bLocal_868 = func_237("FC2_KIDDEV", 1, 0);
			}
		}
		else if (!bLocal_870)
		{
			bVar1 = false;
			if (bLocal_916)
			{
				if ((PED::IS_PED_INJURED(Local_419[iLocal_941 /*16*/]) || bLocal_918) || MISC::GET_GAME_TIMER() >= iLocal_943 + 1200)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (GlobalFunc_663("FC2_KIDDEV", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				bLocal_870 = func_237("FC2_KILLGUA", 1, 0);
			}
		}
		else if (!bLocal_869)
		{
			if (iLocal_1119 == 0)
			{
				bLocal_869 = func_237("FC2_KIDDEV", 1, 0);
			}
		}
		if (!bLocal_902)
		{
			if (bLocal_867)
			{
				func_40(19);
				func_31(20);
				bLocal_902 = GlobalFunc_2867("FINC2_ALERTED");
			}
		}
		else if (!bLocal_903)
		{
			if (iLocal_1119 == 0)
			{
				bLocal_903 = GlobalFunc_2867("FINC2_ALL_DEAD");
			}
		}
		if (bLocal_867)
		{
			if (iLocal_1119 > 0)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					func_697("FINC1_TRECOM", 10000, 16000);
				}
				else
				{
					func_697("FINC1_DEVIN", 10000, 16000);
				}
			}
		}
		if (!bLocal_916)
		{
			if (iLocal_921 || bLocal_867)
			{
				if (GlobalFunc_663("FC2_KIDDEV", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
			}
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
			{
				if (iLocal_921 || bLocal_867)
				{
					if (iLocal_941 < 0)
					{
						iLocal_941 = func_696();
					}
					if (iLocal_941 >= 0)
					{
						if (!PED::IS_PED_INJURED(Local_419[iLocal_941 /*16*/]))
						{
							GlobalFunc_173(&uLocal_1155, 7, Local_419[iLocal_941 /*16*/], "MERRYGUARD2", 0, 1);
							iLocal_943 = MISC::GET_GAME_TIMER();
							bLocal_916 = true;
						}
					}
				}
			}
		}
		else if (!bLocal_918)
		{
			if (!PED::IS_PED_INJURED(Local_419[iLocal_941 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_419[iLocal_941 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (!bLocal_922)
					{
						bLocal_918 = func_268("FINC1_MW2", 0, 0, 0);
					}
					else
					{
						bLocal_918 = func_268("FINC1_MW5", 0, 0, 0);
					}
					iLocal_944 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else if (!bLocal_919)
		{
			if (!PED::IS_PED_INJURED(Local_419[iLocal_941 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_419[iLocal_941 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_944 + 8000)
					{
						if (!bLocal_922)
						{
							bLocal_919 = func_268("FINC1_MW3", 0, 0, 0);
						}
						else
						{
							bLocal_919 = func_268("FINC1_MW6", 0, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_867)
		{
			if (!iLocal_917)
			{
				if (bLocal_916)
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_943 + 45000) || iLocal_1119 < 4)
					{
						if (PED::IS_PED_INJURED(Local_419[iLocal_941 /*16*/]))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
							{
								iLocal_942 = func_696();
								if (iLocal_942 >= 0)
								{
									GlobalFunc_173(&uLocal_1155, 7, Local_419[iLocal_942 /*16*/], "MERRYGUARD2", 0, 1);
									iLocal_917 = 1;
								}
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(Local_419[iLocal_942 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_419[iLocal_942 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (!bLocal_920)
					{
						if (!bLocal_922)
						{
							bLocal_920 = func_268("FINC1_MW6", 0, 0, 0);
						}
						else
						{
							bLocal_920 = func_268("FINC1_MW3", 0, 0, 0);
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_585))
		{
			if (iLocal_1119 == 0)
			{
				func_266("fin_c2_mcs_5", -2648.757f, 1872.554f, 159.1507f, 50f, 75f);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(iLocal_585))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_585, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 0, 0, joaat("cs_devin"));
					}
				}
				if (!iLocal_777)
				{
					if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_585, 3.5f, 3.5f, 2.5f, 0, 1, 0) && iLocal_578 == 2) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						iLocal_777 = 1;
					}
				}
				else if (!GlobalFunc_111())
				{
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						iLocal_774 = 1;
					}
				}
			}
		}
	}
	else
	{
		func_272();
	}
}

void func_272()//Position - 0x23B5F
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 0:
			GlobalFunc_2790(14, 1, 1);
			GlobalFunc_2790(15, 1, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_585))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_585, "DEVIN", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[3]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_593[3]));
				MISC::CLEAR_AREA(func_267(11), 5f, 1, 0, 0, 0);
				func_648(6, 3, func_267(11), -106.61f, 1, 1, 0, 1, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_593[3], "TORNADO", 0, 0, 32);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_626))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_626, "p_devin_box_01_s", 0, 0, 0);
			}
			GlobalFunc_2867("FINC2_WE_GOT_HIM");
			func_40(19);
			func_40(20);
			CUTSCENE::START_CUTSCENE(2048);
			iLocal_939 = 0;
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1058 = MISC::GET_GAME_TIMER();
			iLocal_47 = 1;
			break;
		
		case 1:
			if (!iLocal_776)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_9805(-2550.604f, 1909.273f, 167.0294f, -2558.108f, 1912.693f, 172.8753f, 0.7f, -2551.91f, 1909.08f, 168.88f, 57.85f, GlobalFunc_625(), 1, 0, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_627))
					{
						OBJECT::DELETE_OBJECT(&iLocal_627);
					}
					func_41();
					MISC::CLEAR_AREA(-2649.059f, 1872.454f, 159.7203f, 8f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-2649.059f, 1872.454f, 159.7203f, 12f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-2649.059f, 1872.454f, 159.7203f, 12f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-2649.059f, 1872.454f, 159.7203f, 12f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_776 = 1;
				}
			}
			if (!iLocal_939)
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_939 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tornado", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
				{
					func_639(iLocal_593[3]);
					bLocal_904 = true;
				}
			}
			else if (!bLocal_904)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_593[3], 1, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[3], -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_585))
				{
					PED::DELETE_PED(&iLocal_585);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_419[iVar0 /*16*/]))
					{
						if (PED::IS_PED_INJURED(Local_419[iVar0 /*16*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_419[iVar0 /*16*/]));
						}
						else
						{
							PED::DELETE_PED(&(Local_419[iVar0 /*16*/]));
						}
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_626))
				{
					OBJECT::DELETE_OBJECT(&iLocal_626);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_627))
				{
					OBJECT::DELETE_OBJECT(&iLocal_627);
				}
				RECORDING::_0x81CBAE94390F9F89();
				func_225(0, 1, 1, 0, 1, 0, 1000, 1);
				func_273(6, 0, 1, 1, 0, 1, 1, 1);
			}
			break;
		
		case 2:
			break;
	}
}

void func_273(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x23EAE
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (bParam1 && iParam0 == 0)
	{
		func_638();
	}
	if (bParam1 && !bParam4)
	{
		switch (iParam0)
		{
			case 0:
				switch (GlobalFunc_8315())
				{
					case 1:
						if (iLocal_859)
						{
							Var0 = { func_637(1) - Vector(2f, 0f, 0f) };
							fVar3 = func_636(1);
						}
						else
						{
							Var0 = { func_267(3) };
							fVar3 = 144.89f;
						}
						break;
					
					case 0:
						if (iLocal_859)
						{
							Var0 = { func_637(0) - Vector(2f, 0f, 0f) };
							fVar3 = func_636(0);
						}
						else
						{
							Var0 = { func_267(5) };
							fVar3 = 88.6f;
						}
						break;
					
					case 2:
						if (iLocal_859)
						{
							Var0 = { func_637(2) - Vector(2f, 0f, 0f) };
							fVar3 = func_636(2);
						}
						else
						{
							Var0 = { func_267(4) };
							fVar3 = 86.1f;
						}
						break;
				}
				break;
			
			case 3:
				Var0 = { func_267(6) };
				fVar3 = 139.04f;
				break;
			
			case 1:
				Var0 = { func_267(7) };
				fVar3 = 226.07f;
				break;
			
			case 2:
				Var0 = { func_267(10) };
				fVar3 = 139.38f;
				break;
			
			case 4:
				Var0 = { func_267(9) };
				fVar3 = -24.33f;
				break;
			
			case 5:
				Var0 = { -2553.772f, 1911.678f, 167.9453f };
				fVar3 = 62.4f;
				break;
			
			case 6:
				if (!bLocal_773)
				{
					Var0 = { func_267(11) };
					fVar3 = -106.61f;
				}
				else
				{
					Var0 = { func_267(17) };
					fVar3 = 9.1f;
				}
				break;
		}
		GlobalFunc_2657();
		if (bParam5)
		{
			MISC::CLEAR_AREA(Var0, 10000f, 1, 0, 0, 0);
		}
		SYSTEM::WAIT(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
		if (GlobalFunc_Is_Mission_Retry() && !iLocal_898)
		{
			GlobalFunc_4972(Var0, fVar3, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
		}
	}
	if (bParam4)
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_593[0]))
			{
				iLocal_929 = 1;
			}
		}
	}
	if (bParam6)
	{
		func_631(iParam0, !bParam4, 0);
		func_627(iParam0, !bParam4, 0);
		func_623(iParam0, !bParam4, 0);
		func_619(iParam0, !bParam4, 0);
		func_615(iParam0, !bParam4, 0);
		func_611(iParam0, !bParam4, 0);
		func_607(iParam0, !bParam4, 0);
		func_603(iParam0, !bParam4, 0);
	}
	if (bParam4)
	{
		while (((((((!func_602() || !func_600()) || !func_598()) || !func_597()) || !func_596()) || !func_595()) || !func_593()) || !func_592())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bParam1)
	{
		bVar4 = false;
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar4 = true;
		bVar5 = true;
		bVar6 = true;
		if (GlobalFunc_Is_Mission_Retry() && !Global_84544)
		{
			if (GlobalFunc_7698())
			{
				bVar7 = true;
				GlobalFunc_8368();
				switch (iParam0)
				{
					case 1:
					case 4:
					case 5:
						bVar5 = false;
						break;
					
					case 3:
						bVar4 = false;
						break;
					
					case 2:
						bVar6 = false;
						break;
					}
				}
		}
		if (iParam0 < 4)
		{
			if (bVar4)
			{
				if (!Global_86806[1])
				{
					func_588(5);
				}
			}
			if (bVar6)
			{
				if (!Global_86806[0])
				{
					func_588(4);
				}
			}
			if (!Global_86806[1])
			{
				func_588(1);
			}
			if (!Global_86806[0])
			{
				func_588(0);
			}
		}
		if (bVar5)
		{
			func_588(6);
		}
		func_588(2);
		if (!bParam4)
		{
			GlobalFunc_2868();
		}
		while (!func_602())
		{
			SYSTEM::WAIT(0);
		}
		if (bVar7)
		{
			while (!GlobalFunc_8367())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bVar8)
		{
			while (!GlobalFunc_8573())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	func_579(1);
	CUTSCENE::REMOVE_CUTSCENE();
	iLocal_46 = 0;
	func_577(iParam0);
	if (bParam1)
	{
		func_243();
	}
	if (iParam0 == 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	GlobalFunc_2840(&uLocal_20, 0);
	GlobalFunc_2884(&uLocal_20);
	GlobalFunc_4948(&uLocal_20, 0, 0);
	func_242((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (bParam1)
	{
		iVar9 = 0;
		while (iVar9 < 3)
		{
			iLocal_129[iVar9] = 0;
			iVar9++;
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	if (bParam1)
	{
		if (iParam0 != 0 || !iLocal_859)
		{
			iVar10 = func_572(iParam0);
			iVar11 = GlobalFunc_237(iVar10);
			if (GlobalFunc_8315() != iVar10)
			{
				while (!func_571(&(iLocal_48[iVar11]), iVar10, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!GlobalFunc_9134(&iLocal_48, iVar11))
				{
					SYSTEM::WAIT(0);
				}
				while (!GlobalFunc_10991(&iLocal_48, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				iVar9 = 0;
				while (iVar9 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar9]))
					{
						PED::DELETE_PED(&(iLocal_48[iVar9]));
					}
					iVar9++;
				}
			}
		}
	}
	if (bParam1)
	{
		if (bParam1)
		{
			iVar9 = 0;
			while (iVar9 <= 9)
			{
				GlobalFunc_200(&uLocal_1155, iVar9);
				iVar9++;
			}
		}
		if (!iLocal_859)
		{
			PATHFIND::SET_GPS_DISABLED_ZONE(func_523(1), func_522(1));
		}
		switch (GlobalFunc_8315())
		{
			case 0:
				GlobalFunc_173(&uLocal_1155, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				break;
			
			case 2:
				GlobalFunc_173(&uLocal_1155, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				break;
			
			case 1:
				GlobalFunc_173(&uLocal_1155, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				break;
		}
		iLocal_48.f_6 = GlobalFunc_237(func_572(iParam0));
		if (!bParam4)
		{
			iLocal_593[0] = 0;
			iLocal_593[2] = 0;
			iLocal_593[1] = 0;
		}
		if (!bParam4)
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			}
		}
		func_356(iParam0, bParam4);
		func_355(PLAYER::PLAYER_PED_ID(), func_572(iParam0), iParam0);
		if (bParam4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[0], 0))
				{
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0) && !PED::IS_PED_INJURED(iLocal_48[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_48[2], iLocal_593[1], 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_48[2], iLocal_593[1], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[2], 0) && !PED::IS_PED_INJURED(iLocal_48[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_48[0], iLocal_593[2], 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_48[0], iLocal_593[2], -1);
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				GlobalFunc_2868();
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (bParam1)
	{
		if ((iParam0 == 3 || iParam0 == 2) || iParam0 == 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_858 = 1;
		}
		else
		{
			iLocal_858 = 0;
		}
	}
	else
	{
		iLocal_858 = 0;
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (bParam4)
			{
				func_75(0, 1);
				func_75(2, 1);
				func_75(1, 1);
			}
			if (bParam1)
			{
				GlobalFunc_587();
				func_353();
				bLocal_837 = false;
				iLocal_838 = 0;
				bLocal_839 = false;
				bLocal_840 = false;
				iLocal_1144 = -1;
			}
			else
			{
				func_351(1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				GlobalFunc_2867("FINC2_STEVE_START");
				iLocal_880 = 1;
				iLocal_787[2] = 1;
				iLocal_813 = 0;
				func_353();
				bLocal_850 = false;
				iLocal_851 = 0;
				iLocal_849 = 1;
			}
			else
			{
				iLocal_880 = 0;
				iLocal_783[2] = 1;
			}
			GlobalFunc_173(&uLocal_1155, 8, 0, "LESTER", 0, 1);
			func_31(8);
			func_350();
			func_348();
			break;
		
		case 3:
			GlobalFunc_2867("FINC2_CHENG_START");
			if (bParam1)
			{
				iLocal_928 = 1;
				iLocal_815 = 0;
				bLocal_830 = false;
			}
			else
			{
				iLocal_783[1] = 1;
			}
			func_31(2);
			func_348();
			break;
		
		case 2:
			GlobalFunc_2867("FINC2_STRETCH_START");
			if (bParam1)
			{
				iLocal_927 = 1;
				bLocal_862 = true;
				iLocal_814 = 0;
			}
			else
			{
				iLocal_783[0] = 1;
			}
			if (!iLocal_814)
			{
				iLocal_549 = 0;
			}
			func_347();
			func_31(5);
			func_348();
			func_346(10000);
			break;
		
		case 4:
			GlobalFunc_2785(&iLocal_48);
			if (bParam1)
			{
				iLocal_1063[2] = 2;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[1], 0))
				{
					iLocal_1063[2] = 2;
				}
				else
				{
					iLocal_1063[2] = 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_593[1]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_593[1]);
				}
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_339();
				GlobalFunc_2867("FINC2_OUTSIDE_DEVINS");
				func_31(19);
			}
			break;
		
		case 6:
			GlobalFunc_2790(14, 1, 1);
			GlobalFunc_2790(15, 1, 1);
			PATHFIND::SET_GPS_DISABLED_ZONE(-2553.461f, 1814.888f, 127.7201f, -2481.379f, 1859.365f, 194.8958f);
			GlobalFunc_200(&uLocal_1155, 8);
			GlobalFunc_173(&uLocal_1155, 7, 0, "DEVIN", 0, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[3], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_593[3], 1);
			}
			iLocal_1116 = (MISC::GET_GAME_TIMER() + 45000);
			break;
	}
	if (bParam1)
	{
		func_75(0, 1);
		func_75(2, 1);
		func_75(1, 1);
	}
	func_337();
	if (iParam0 == 3 || iParam0 == 2)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(7, 0);
	}
	else if (iParam0 == 5)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(7, 0);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(1, 1);
		MISC::ENABLE_DISPATCH_SERVICE(7, 1);
	}
	PED::SET_CREATE_RANDOM_COPS(0);
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_898)
		{
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					switch (iParam0)
					{
						case 0:
							switch (GlobalFunc_8315())
							{
								case 0:
									iVar12 = iLocal_593[2];
									break;
								
								case 1:
									iVar12 = iLocal_593[0];
									break;
								
								case 2:
									iVar12 = iLocal_593[1];
									break;
							}
							break;
						
						case 3:
							iVar12 = iLocal_593[0];
							break;
						
						case 2:
							iVar12 = iLocal_593[2];
							break;
						
						case 1:
						case 4:
							iVar12 = iLocal_593[1];
							break;
						
						case 6:
							iVar12 = iLocal_593[3];
							break;
					}
					iVar13 = 1;
					iVar14 = -1;
					GlobalFunc_4967(iVar12, iVar14, iVar13);
					iLocal_898 = 1;
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iParam0 == 4)
			{
				if (bParam1)
				{
					SYSTEM::WAIT(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_593[1], 20f);
					}
				}
			}
			else if (iParam0 == 0)
			{
				if (!bParam4)
				{
					if (iLocal_859)
					{
						switch (GlobalFunc_8315())
						{
							case 2:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_593[1], 20f);
								}
								break;
							
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[2], 0))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_593[2], 20f);
								}
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[0], 0))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_593[0], 20f);
								}
								break;
							}
					}
					if (GlobalFunc_8315() == 1)
					{
						SYSTEM::WAIT(1000);
					}
				}
			}
		}
		if (iParam0 == 1)
		{
			if (bParam1)
			{
				if (!iLocal_813)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-80f);
				}
			}
		}
		else if (iParam0 == 2)
		{
			if (!iLocal_814)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(35f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			}
		}
		else if (iParam0 == 3)
		{
			if (!iLocal_815)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-2984.577f, 443.1154f, 14.05719f, 10000f, 1, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			}
		}
		if (iLocal_929)
		{
			func_333(iLocal_593[0]);
			STREAMING::REQUEST_ANIM_DICT("veh@bike@police@front@base");
			while (!STREAMING::HAS_ANIM_DICT_LOADED("veh@bike@police@front@base"))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "veh@bike@police@front@base", "still", 1000f, -2f, 1000, 0, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			SYSTEM::WAIT(0);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			STREAMING::REMOVE_ANIM_DICT("veh@bike@police@front@base");
			iLocal_929 = 0;
		}
	}
	iParam7 = iParam7;
	iVar15 = 0;
	iVar16 = 0;
	if (iParam0 >= 6)
	{
		iVar15 = 1;
	}
	if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 3) || iParam0 == 0)
	{
		iVar16 = 1;
	}
	iLocal_1055 = iLocal_1055;
	if (func_332(iParam0))
	{
		GlobalFunc_Checkpoint2(iParam0, func_331(iParam0), iVar15, iVar16, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_1055 = 0;
		}
	}
	iLocal_1061 = MISC::GET_GAME_TIMER();
	iLocal_42 = iParam0;
}


























































char* func_331(int iParam0)//Position - 0x2B663
{
	switch (iParam0)
	{
		case 0:
			return "Get to the hits";
			break;
		
		case 1:
			return "Trevor kill Steve";
			break;
		
		case 2:
			return "Michael kill Stretch";
			break;
		
		case 3:
			return "Franklin kill Cheng";
			break;
		
		case 4:
			return "Get to Devin's house";
			break;
		
		case 5:
			return "Kidnap Devin";
			break;
		
		case 6:
			return "Get to the cliff";
			break;
	}
	return "invalid";
}

int func_332(int iParam0)//Position - 0x2B6E6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_333(int iParam0)//Position - 0x2B727
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
		}
	}
}




void func_337()//Position - 0x2B857
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		GlobalFunc_2518(&iLocal_48, iVar1, 0);
		iVar0++;
	}
}


void func_339()//Position - 0x2B896
{
	func_342();
	func_340(1);
	func_648(4, 3, func_267(11), -106.61f, 1, 1, 0, 1, 0);
}

void func_340(bool bParam0)//Position - 0x2B8BD
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	while (iVar8 < 8)
	{
		iVar6 = iVar8;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_419[iVar8 /*16*/]) || !bParam0)
		{
			bVar4 = false;
			iVar5 = 1;
			switch (iVar6)
			{
				case 0:
					iVar7 = 4;
					Var0 = { -2601.214f, 1931.047f, 166.2949f };
					fVar3 = 96.6f;
					iVar5 = 0;
					break;
				
				case 1:
					iVar7 = 5;
					Var0 = { -2584.213f, 1917.431f, 166.2966f };
					fVar3 = 0.4f;
					bVar4 = true;
					break;
				
				case 2:
					iVar7 = 4;
					Var0 = { -2568.892f, 1887.707f, 162.6965f };
					fVar3 = 143.3f;
					bVar4 = true;
					break;
				
				case 3:
					iVar7 = 4;
					Var0 = { -2600.317f, 1860.213f, 166.3041f };
					fVar3 = 128.8f;
					bVar4 = true;
					break;
				
				case 4:
					iVar7 = 5;
					Var0 = { -2626.87f, 1876.525f, 162.4264f };
					fVar3 = -160.1f;
					bVar4 = true;
					break;
				
				case 5:
					iVar7 = 4;
					Var0 = { -2606.689f, 1923.907f, 166.3839f };
					fVar3 = 4.7f;
					bVar4 = true;
					break;
				
				case 6:
					iVar7 = 4;
					Var0 = { -2624.308f, 1901.764f, 162.4265f };
					fVar3 = 40.6f;
					bVar4 = true;
					break;
				
				case 7:
					iVar7 = 4;
					Var0 = { -2613.511f, 1870.655f, 166.3036f };
					fVar3 = 127.4f;
					bVar4 = true;
					break;
			}
			if (bParam0)
			{
				Local_419[iVar8 /*16*/] = PED::CREATE_PED(26, func_69(21), Var0, fVar3, 1, 1);
			}
			else if (!PED::IS_PED_INJURED(Local_419[iVar8 /*16*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_419[iVar8 /*16*/]);
				ENTITY::SET_ENTITY_COORDS(Local_419[iVar8 /*16*/], Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_419[iVar8 /*16*/], fVar3);
			}
			if (bParam0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_419[iVar8 /*16*/], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_419[iVar8 /*16*/], 1);
				PED::SET_PED_KEEP_TASK(Local_419[iVar8 /*16*/], 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_419[iVar8 /*16*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_419[iVar8 /*16*/], iLocal_1321);
				WEAPON::GIVE_WEAPON_TO_PED(Local_419[iVar8 /*16*/], func_341(iVar7), -1, iVar5, 1);
				PED::SET_PED_CONFIG_FLAG(Local_419[iVar8 /*16*/], 249, 1);
				PED::SET_PED_CONFIG_FLAG(Local_419[iVar8 /*16*/], 42, 1);
				PED::SET_PED_CONFIG_FLAG(Local_419[iVar8 /*16*/], 188, 1);
				PED::SET_PED_SEEING_RANGE(Local_419[iVar8 /*16*/], 30f);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_419[iVar8 /*16*/]);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_419[iVar8 /*16*/], 0);
				PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_419[iVar8 /*16*/]);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_419[iVar8 /*16*/], Var0, 8f, 0, 0);
				PED::SET_PED_ACCURACY(Local_419[iVar8 /*16*/], 15);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_419[iVar8 /*16*/], "FINALE_MERRYWEATHER_GROUP", 0);
			}
			Local_419[iVar8 /*16*/].f_9 = 0;
			Local_419[iVar8 /*16*/].f_10 = 0;
			Local_419[iVar8 /*16*/].f_14 = -1;
			Local_419[iVar8 /*16*/].f_15 = 0f;
			if (!bVar4)
			{
				Local_419[iVar8 /*16*/].f_11 = 0;
			}
			else
			{
				Local_419[iVar8 /*16*/].f_11 = 1;
			}
			Local_419[iVar8 /*16*/].f_12 = 0;
			switch (iVar6)
			{
				case 0:
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_419[iVar8 /*16*/], "WORLD_HUMAN_SMOKING", -1, 0);
					break;
				}
		}
		iVar8++;
	}
	bLocal_918 = false;
	bLocal_919 = false;
	bLocal_920 = false;
	bLocal_916 = false;
	iLocal_917 = 0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		bLocal_922 = true;
	}
	else
	{
		bLocal_922 = false;
	}
	iLocal_921 = 0;
	iLocal_941 = -1;
	iLocal_942 = -1;
	bLocal_873 = false;
	iLocal_1145 = -1;
	bLocal_867 = false;
	iLocal_1120 = 0;
}

int func_341(int iParam0)//Position - 0x2BC41
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_heavysniper");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_microsmg");
			break;
		
		case 3:
			return joaat("weapon_stickybomb");
			break;
		
		case 4:
			return joaat("weapon_carbinerifle");
			break;
		
		case 5:
			return joaat("weapon_pumpshotgun");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_342()//Position - 0x2BCBB
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_585))
	{
		GlobalFunc_7047(&iLocal_585, 29, -2644.449f, 1872.912f, 159.1516f, -75.3f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_626))
	{
		iLocal_626 = OBJECT::CREATE_OBJECT(func_69(26), -2649.078f, 1872.52f, 159.1507f, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(iLocal_626, 120.81f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_626, 250);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_626, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_627))
	{
		iLocal_627 = OBJECT::CREATE_OBJECT(func_69(27), -2649.468f, 1872.29f, 159.0007f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_627, 65f, 0f, 120.81f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_627, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_628))
	{
		iLocal_628 = OBJECT::CREATE_OBJECT(func_69(28), -2644f, 1872f, 160f, 1, 1, 0);
	}
	uLocal_1134 = PED::CREATE_SYNCHRONIZED_SCENE(-2645.961f, 1872.599f, 159.153f, 0f, 0f, 102.44f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1134, 1);
	if (!PED::IS_PED_INJURED(iLocal_585))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_585, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_585, 1);
		PED::SET_PED_KEEP_TASK(iLocal_585, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_585, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 8, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 4, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 3, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_585, 11, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_585, uLocal_1134, func_35(12), "LOUNGE_LOOP_DEV", 1000f, -8f, 1, 0, 1148846080, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_626, uLocal_1134, "LOUNGE_LOOP_BOX", func_35(12), 1000f, 1090519040, 0, 1148846080);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_628, uLocal_1134, "LOUNGE_LOOP_TAB", func_35(12), 1000f, 1090519040, 0, 1148846080);
		PED::SET_PED_CONFIG_FLAG(iLocal_585, 227, 1);
		GlobalFunc_173(&uLocal_1155, 8, iLocal_585, "DEVIN", 0, 1);
		iLocal_578 = 0;
		iLocal_907 = 0;
		iLocal_908 = 0;
		iLocal_583 = 0;
	}
}




void func_346(int iParam0)//Position - 0x2BFCE
{
	if (iParam0 >= 0)
	{
		iLocal_1060 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		iLocal_1060 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
	}
}

void func_347()//Position - 0x2BFFB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_341(1), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_341(1), 32, 0, 0);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_341(1)) < 32)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), func_341(1), 32);
		}
	}
}

void func_348()//Position - 0x2C05B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = GlobalFunc_237(iVar1);
		if (Global_86806[iVar1])
		{
			iLocal_551[iVar1] = 1;
			iLocal_48.f_18[iVar2] = 1;
		}
		else
		{
			iLocal_1111[iVar0] = (func_349(iVar0) - 1);
			iLocal_807[iVar0] = 0;
			iLocal_551[iVar1] = 0;
			iLocal_48.f_18[iVar2] = 0;
		}
		iVar0++;
	}
}

int func_349(int iParam0)//Position - 0x2C0C8
{
	switch (iParam0)
	{
		case 2:
			return 9;
			break;
		
		case 1:
			return 11;
			break;
		
		case 0:
			return 3;
			break;
	}
	return 0;
}

void func_350()//Position - 0x2C101
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_341(0), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_341(0), 20, 0, 0);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_341(0)) < 20)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), func_341(0), 20);
		}
	}
}

void func_351(bool bParam0)//Position - 0x2C15C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iLocal_48)
	{
		if (!PED::IS_PED_INJURED(iLocal_48[iVar0]))
		{
			iVar1 = 1;
			func_352(iLocal_48[iVar0], iVar1);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 1);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 211, 0);
		if (iLocal_42 < 0)
		{
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
		}
	}
}

void func_352(int iParam0, int iParam1)//Position - 0x2C1FE
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1862763509);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, iParam1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
	PED::SET_PED_CAN_SWITCH_WEAPON(iParam0, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_MAX_HEALTH(iParam0, 10000);
	ENTITY::SET_ENTITY_HEALTH(iParam0, 10000);
}

void func_353()//Position - 0x2C276
{
	fLocal_1021 = 0f;
	fLocal_1022 = 0f;
	iLocal_849 = 0;
	iLocal_892 = 0;
}


void func_355(int iParam0, int iParam1, int iParam2)//Position - 0x2C296
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				func_169(iParam0, 12, 27, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			
			case 2:
				func_169(iParam0, 12, 46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			}
	}
}

void func_356(int iParam0, bool bParam1)//Position - 0x2C2EB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (iParam0)
	{
		case 0:
			if (iLocal_859)
			{
				if (GlobalFunc_8315() == 1)
				{
					Var0 = { func_637(1) };
					fVar9 = func_636(1);
				}
				else
				{
					Var0 = { func_521(1) };
					fVar9 = 0f;
				}
			}
			else
			{
				Var0 = { func_267(3) };
				fVar9 = 144.89f;
			}
			if (iLocal_859)
			{
				if (GlobalFunc_8315() == 0)
				{
					Var3 = { func_637(0) };
					fVar10 = func_636(0);
				}
				else
				{
					Var3 = { func_521(0) };
					fVar10 = 0f;
				}
			}
			else
			{
				Var3 = { func_521(0) };
				fVar10 = 0f;
			}
			if (iLocal_859)
			{
				if (GlobalFunc_8315() == 2)
				{
					Var6 = { func_637(2) };
					fVar11 = func_636(2);
				}
				else
				{
					Var6 = { func_521(2) };
					fVar11 = 0f;
				}
			}
			else
			{
				Var6 = { func_521(2) };
				fVar11 = 0f;
			}
			if (!Global_86806[1])
			{
				func_648(iParam0, 0, Var0, fVar9, 0, 1, 0, 0, !iLocal_859);
				if (GlobalFunc_8315() != 1)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[0], 1);
				}
			}
			if (!Global_86806[0])
			{
				func_648(iParam0, 2, Var3, fVar10, 0, 1, 0, 1, 1);
				if (GlobalFunc_8315() != 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[2], 1);
				}
			}
			func_648(iParam0, 1, Var6, fVar11, 0, 1, 0, 1, 1);
			if (GlobalFunc_8315() != 2)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[1], 1);
			}
			break;
		
		case 1:
		case 3:
		case 2:
			if (!Global_86806[1])
			{
				if (iParam0 == 3)
				{
					func_648(iParam0, 0, func_267(6), 139.04f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_648(iParam0, 0, func_521(1), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[0], 1);
				}
			}
			if (!Global_86806[0])
			{
				if (iParam0 == 2)
				{
					func_648(iParam0, 2, func_267(10), 139.38f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_648(iParam0, 2, func_521(0), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[2], 1);
				}
			}
			if (!Global_86806[2])
			{
				if (iParam0 == 1)
				{
					func_648(iParam0, 1, func_267(7), 226.07f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_648(iParam0, 1, func_521(2), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[1], 1);
				}
			}
			else
			{
				func_648(iParam0, 1, func_521(2), 226.07f, 0, 1, 0, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[1], 1);
			}
			break;
		
		case 4:
			func_648(iParam0, 1, func_267(9), -24.33f, 0, 1, 0, 1, 1);
			break;
		
		case 5:
			func_648(iParam0, 1, func_267(8), 71.08f, 0, 1, 0, 1, 1);
			break;
		
		case 6:
			func_648(iParam0, 1, func_267(8), 71.08f, 0, 0, 0, 1, 1);
			if (!bLocal_773)
			{
				func_648(iParam0, 3, func_267(11), -106.61f, 1, 1, 0, 1, 1);
			}
			else
			{
				func_648(iParam0, 3, func_267(17), 9.1f, 1, 1, 0, 1, 1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			switch (GlobalFunc_8315())
			{
				case 1:
					if (!Global_86806[0])
					{
						func_358(0, iParam0, 0f, 0f, 0f, 0f, iLocal_593[2], -1, 0);
					}
					else
					{
						GlobalFunc_173(&uLocal_1155, 0, 0, "MICHAEL", 0, 1);
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[0], 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[0], -1);
					}
					func_358(2, iParam0, 0f, 0f, 0f, 0f, iLocal_593[1], -1, 0);
					func_357();
					if (!bParam1)
					{
						func_333(iLocal_593[0]);
					}
					break;
				
				case 0:
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[2], -1);
					if (!Global_86806[1])
					{
						func_358(1, iParam0, 0f, 0f, 0f, 0f, iLocal_593[0], -1, 0);
					}
					else
					{
						GlobalFunc_173(&uLocal_1155, 2, 0, "FRANKLIN", 0, 1);
					}
					func_358(2, iParam0, 0f, 0f, 0f, 0f, iLocal_593[1], -1, 0);
					func_357();
					if (!bParam1)
					{
						func_333(iLocal_593[2]);
					}
					break;
				
				case 2:
					if (!Global_86806[0])
					{
						func_358(0, iParam0, 0f, 0f, 0f, 0f, iLocal_593[2], -1, 0);
					}
					else
					{
						GlobalFunc_173(&uLocal_1155, 0, 0, "MICHAEL", 0, 1);
					}
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[1], -1);
					if (!Global_86806[1])
					{
						func_358(1, iParam0, 0f, 0f, 0f, 0f, iLocal_593[0], -1, 0);
					}
					else
					{
						GlobalFunc_173(&uLocal_1155, 2, 0, "FRANKLIN", 0, 1);
					}
					func_357();
					if (!bParam1)
					{
						func_333(iLocal_593[1]);
					}
					break;
			}
			break;
		
		case 1:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[1], -1);
			if (!Global_86806[0])
			{
				func_358(0, iParam0, 0f, 0f, 0f, 0f, iLocal_593[2], -1, 0);
			}
			else
			{
				GlobalFunc_173(&uLocal_1155, 0, 0, "MICHAEL", 0, 1);
			}
			if (!Global_86806[1])
			{
				func_358(1, iParam0, 0f, 0f, 0f, 0f, iLocal_593[0], -1, 0);
			}
			else
			{
				GlobalFunc_173(&uLocal_1155, 2, 0, "FRANKLIN", 0, 1);
			}
			func_357();
			func_333(iLocal_593[1]);
			break;
		
		case 2:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[2], -1);
			if (!Global_86806[1])
			{
				func_358(1, iParam0, 0f, 0f, 0f, 0f, iLocal_593[0], -1, 0);
			}
			else
			{
				GlobalFunc_173(&uLocal_1155, 2, 0, "FRANKLIN", 0, 1);
			}
			func_358(2, iParam0, 0f, 0f, 0f, 0f, iLocal_593[1], -1, 0);
			func_357();
			func_333(iLocal_593[2]);
			break;
		
		case 3:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[0], -1);
			if (!Global_86806[0])
			{
				func_358(0, iParam0, 0f, 0f, 0f, 0f, iLocal_593[2], -1, 0);
			}
			else
			{
				GlobalFunc_173(&uLocal_1155, 0, 0, "MICHAEL", 0, 1);
			}
			func_358(2, iParam0, 0f, 0f, 0f, 0f, iLocal_593[1], -1, 0);
			func_357();
			func_333(iLocal_593[0]);
			break;
		
		case 4:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[1], -1);
			func_333(iLocal_593[1]);
			break;
		
		case 5:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2553.961f, 1910.755f, 167.9142f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 57.3f);
			func_333(iLocal_593[1]);
			break;
		
		case 6:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_593[3], -1);
			break;
	}
}

void func_357()//Position - 0x2C962
{
	int iVar0;
	
	iVar0 = func_227();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (!PED::IS_PED_WEARING_HELMET(iVar0))
		{
			PED::SET_PED_HELMET_PROP_INDEX(iVar0, 6, 1);
			PED::SET_PED_HELMET_TEXTURE_INDEX(iVar0, 0);
		}
	}
}

void func_358(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x2C993
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_237(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam6))
		{
			while (!func_359(&(iLocal_48[iVar0]), iParam0, iParam6, iParam7, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_571(&(iLocal_48[iVar0]), iParam0, Param2, fParam5, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam8)
		{
			bVar1 = false;
			while (!bVar1)
			{
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_48[iVar0]))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_48[iVar0]))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_48[iVar0]))
	{
		iVar2 = 0;
		iVar2 = 1;
		func_352(iLocal_48[iVar0], iVar2);
		switch (iParam0)
		{
			case 0:
				GlobalFunc_173(&uLocal_1155, 0, iLocal_48[iVar0], "MICHAEL", 0, 1);
				break;
			
			case 2:
				GlobalFunc_173(&uLocal_1155, 1, iLocal_48[iVar0], "TREVOR", 0, 1);
				break;
			
			case 1:
				GlobalFunc_173(&uLocal_1155, 2, iLocal_48[iVar0], "FRANKLIN", 0, 1);
				break;
		}
		func_355(iLocal_48[iVar0], iParam0, iParam1);
	}
}

int func_359(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2CAC4
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8642(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_513(*iParam0);
				GlobalFunc_8021(*iParam0, 1, 0);
				GlobalFunc_8030(*iParam0);
				GlobalFunc_7707(*iParam0);
				func_361(*iParam0, bParam6);
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


int func_361(int iParam0, bool bParam1)//Position - 0x2CBEF
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_365(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_365(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						func_169(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_169(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_169(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_169(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_169(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_169(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_169(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_169(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_365(int iParam0, int iParam1)//Position - 0x2D33E
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11095(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_372(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}







void func_372(int iParam0, var uParam1, bool bParam2)//Position - 0x2DC2F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				func_169(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				func_169(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11292(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11292(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}













































































































































void func_513(int iParam0)//Position - 0x59392
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_372(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11095(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11095(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11095(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11095(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_372(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








Vector3 func_521(int iParam0)//Position - 0x59DA0
{
	switch (iParam0)
	{
		case 0:
			return -2480.6f, 754.2f, 92.7f;
			break;
		
		case 2:
			return -2460.6f, 754.2f, 92.7f;
			break;
		
		case 1:
			return -2440.6f, 754.2f, 92.7f;
			break;
	}
	return 2163f, 7982f, 110f;
}

Vector3 func_522(int iParam0)//Position - 0x59E0F
{
	switch (iParam0)
	{
		case 2:
			return 588f, -357f, 100f;
			break;
		
		case 1:
			return 183f, -1040f, 100f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_523(int iParam0)//Position - 0x59E57
{
	switch (iParam0)
	{
		case 2:
			return -343f, -1993f, -100f;
			break;
		
		case 1:
			return -398f, -1862f, -100f;
			break;
	}
	return 0f, 0f, 0f;
}
















































int func_571(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x5F7CE
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8642(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_513(*iParam0);
			GlobalFunc_8021(*iParam0, 1, 0);
			GlobalFunc_8030(*iParam0);
			GlobalFunc_7707(*iParam0);
			func_361(*iParam0, bParam8);
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

int func_572(int iParam0)//Position - 0x5F86D
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 2;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}





void func_577(int iParam0)//Position - 0x5F9FB
{
	int iVar0;
	
	func_578();
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iLocal_1063[iVar0] = 2;
				bLocal_779[iVar0] = 0;
				iVar0++;
			}
			bLocal_834 = false;
			bLocal_835 = false;
			iLocal_836 = 0;
			bLocal_830 = false;
			iLocal_814 = 0;
			iLocal_813 = 0;
			iLocal_815 = 0;
			iLocal_827 = 0;
			iLocal_828 = 0;
			iLocal_854 = 0;
			iLocal_829 = 0;
			iLocal_549 = 0;
			break;
		
		case 1:
			iLocal_580 = 0;
			Global_86806[2] = 0;
			iLocal_787[2] = 0;
			iLocal_783[2] = 0;
			bLocal_791[2] = 0;
			iLocal_795[2] = 0;
			bLocal_799[2] = 0;
			iLocal_811 = 0;
			bLocal_812 = false;
			bLocal_824 = false;
			iLocal_854 = 0;
			bLocal_885 = false;
			bLocal_886 = false;
			iLocal_888 = 0;
			iLocal_893 = 0;
			bLocal_894 = false;
			iLocal_895 = 0;
			bLocal_896 = false;
			iLocal_897 = 0;
			bLocal_906 = false;
			iLocal_911 = 0;
			iLocal_930 = 0;
			iLocal_931 = 0;
			bLocal_934 = false;
			iLocal_5069 = 0;
			bLocal_936 = false;
			iLocal_937 = 0;
			iLocal_1341 = 0;
			Local_2582 = 0;
			Local_3823 = 0;
			bLocal_5064 = false;
			bLocal_5065 = false;
			iLocal_1340 = 0;
			iLocal_1131 = 0;
			iLocal_1140 = 0;
			fLocal_1041 = 0f;
			break;
		
		case 3:
			Global_86806[1] = 0;
			iLocal_832 = 0;
			iLocal_833 = 0;
			iLocal_787[1] = 0;
			iLocal_783[1] = 0;
			bLocal_791[1] = 0;
			iLocal_795[1] = 0;
			bLocal_799[1] = 0;
			iLocal_811 = 0;
			bLocal_812 = false;
			bLocal_825 = false;
			iLocal_847 = 0;
			iLocal_848 = 0;
			bLocal_884 = false;
			iLocal_891 = 0;
			iLocal_914 = 0;
			iLocal_924 = 0;
			iLocal_550 = 0;
			iLocal_1146 = 0;
			fLocal_1054 = 0f;
			break;
		
		case 2:
			Global_86806[0] = 0;
			iLocal_787[0] = 0;
			iLocal_783[0] = 0;
			bLocal_791[0] = 0;
			iLocal_795[0] = 0;
			bLocal_799[0] = 0;
			iLocal_811 = 0;
			bLocal_812 = false;
			iLocal_827 = 0;
			iLocal_828 = 0;
			iLocal_829 = 0;
			bLocal_841 = false;
			bLocal_862 = false;
			iLocal_863 = 0;
			bLocal_842 = false;
			iLocal_843 = 0;
			bLocal_844 = false;
			iLocal_845 = 0;
			iLocal_846 = 0;
			bLocal_826 = false;
			bLocal_860 = false;
			iLocal_861 = 0;
			iLocal_864 = 0;
			iLocal_874 = 0;
			iLocal_913 = 0;
			iLocal_923 = 0;
			iLocal_1102 = 0;
			iLocal_1103 = 0;
			iLocal_1149 = -1;
			iLocal_550 = 0;
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_86806[iVar0] = 1;
				iVar0++;
			}
			iLocal_579 = 0;
			iLocal_133 = 0;
			bLocal_879 = false;
			iLocal_912 = 0;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_86806[iVar0] = 1;
				iVar0++;
			}
			bLocal_868 = false;
			bLocal_869 = false;
			bLocal_870 = false;
			iLocal_871 = 0;
			bLocal_872 = false;
			bLocal_902 = false;
			bLocal_903 = false;
			bLocal_904 = false;
			iLocal_910 = 0;
			iLocal_1136 = 1;
			break;
		
		case 6:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_86806[iVar0] = 1;
				iVar0++;
			}
			iLocal_128 = 0;
			iLocal_576 = 0;
			iLocal_1063[2] = 2;
			iLocal_831 = 0;
			bLocal_909 = false;
			iLocal_915 = 0;
			iLocal_925 = 0;
			iLocal_926 = 0;
			bLocal_933 = false;
			fLocal_1020 = 9f;
			fLocal_1024 = 0f;
			break;
	}
}

void func_578()//Position - 0x5FCEA
{
	iLocal_44 = 0;
	iLocal_45 = 0;
	iLocal_47 = 0;
	iLocal_774 = 0;
	iLocal_775 = 0;
	iLocal_776 = 0;
	iLocal_777 = 0;
	bLocal_778 = false;
	iLocal_816 = 0;
	iLocal_817 = 0;
	iLocal_818 = 0;
	iLocal_819 = 0;
	iLocal_820 = 0;
	bLocal_821 = false;
	iLocal_852 = 0;
	iLocal_853 = 0;
	iLocal_1060 = -1;
	Local_126 = GlobalFunc_237(GlobalFunc_8315());
	Local_126.f_1 = 0;
}

void func_579(bool bParam0)//Position - 0x5FD42
{
	HUD::REQUEST_ADDITIONAL_TEXT("FINC", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}









void func_588(int iParam0)//Position - 0x5FFF2
{
	int iVar0;
	
	iVar0 = func_69(iParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	iLocal_684[iParam0] = 1;
}




int func_592()//Position - 0x60055
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_770[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					return 0;
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

int func_593()//Position - 0x6008E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_767[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_594(iVar0), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_594(int iParam0)//Position - 0x600C6
{
	switch (iParam0)
	{
		case 0:
			return "FINALE_C2_DEVIN_INSIDE_TRUNK";
			break;
		
		case 1:
			return "FINALE_C2_STEVE_CAMERAMAN_DEATH";
			break;
	}
	return "invalid!";
}

int func_595()//Position - 0x600FB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_765[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_596()//Position - 0x6012C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_758[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_341(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_597()//Position - 0x60163
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (iLocal_744[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_35(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_598()//Position - 0x6019B
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iLocal_725[iVar0])
		{
			Var1 = { func_599(iVar0) };
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<4> func_599(int iParam0)//Position - 0x601D9
{
	struct<4> Var0;
	
	StringCopy(&Var0, "finc2", 16);
	StringIntConCat(&Var0, iParam0 + 1, 16);
	return Var0;
}

int func_600()//Position - 0x601F6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_714[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_601()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_601()//Position - 0x60230
{
	return "finalec";
}

int func_602()//Position - 0x6023D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iLocal_684[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_69(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_603(int iParam0, bool bParam1, bool bParam2)//Position - 0x60276
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_606(iVar1, iParam0))
		{
			func_605(iVar1);
		}
		else if (!func_606(iVar1, iLocal_42) || !bParam2)
		{
			func_604(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_592())
		{
			GlobalFunc_2868();
			while (!func_592())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_604(int iParam0)//Position - 0x602E4
{
	if (iLocal_770[iParam0])
	{
		iLocal_770[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_605(int iParam0)//Position - 0x6030E
{
	iLocal_770[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_606(int iParam0, int iParam1)//Position - 0x6032E
{
	switch (iParam0)
	{
		case 0:
			if (((iParam1 == 0 || iParam1 == 1) || iParam1 == 3) || iParam1 == 2)
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_607(int iParam0, bool bParam1, bool bParam2)//Position - 0x60370
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (func_610(iVar1, iParam0))
		{
			func_609(iVar1);
		}
		else if (!func_610(iVar1, iLocal_42) || !bParam2)
		{
			func_608(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_593())
		{
			GlobalFunc_2868();
			while (!func_593())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_608(int iParam0)//Position - 0x603DE
{
	var uVar0;
	
	if (iLocal_767[iParam0])
	{
		iLocal_767[iParam0] = 0;
		uVar0 = func_594(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uVar0);
	}
}

void func_609(int iParam0)//Position - 0x60406
{
	var uVar0;
	
	iLocal_767[iParam0] = 1;
	uVar0 = func_594(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uVar0, 0);
}

int func_610(int iParam0, int iParam1)//Position - 0x60426
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_611(int iParam0, bool bParam1, bool bParam2)//Position - 0x6044D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (GlobalFunc_2869(iVar1, iParam0))
		{
			func_613(iVar1);
		}
		else if (!GlobalFunc_2869(iVar1, iLocal_42) || !bParam2)
		{
			func_612(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_595())
		{
			GlobalFunc_2868();
			while (!func_595())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_612(int iParam0)//Position - 0x604BB
{
	if (iLocal_765[iParam0])
	{
		iLocal_765[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_613(int iParam0)//Position - 0x604E0
{
	iLocal_765[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}


void func_615(int iParam0, bool bParam1, bool bParam2)//Position - 0x60511
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_618(iVar1, iParam0))
		{
			func_617(iVar1);
		}
		else if (!func_618(iVar1, iLocal_42) || !bParam2)
		{
			func_616(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_596())
		{
			GlobalFunc_2868();
			while (!func_596())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_616(int iParam0)//Position - 0x6057F
{
	var uVar0;
	
	if (iLocal_758[iParam0])
	{
		iLocal_758[iParam0] = 0;
		uVar0 = func_341(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(uVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(uVar0);
		}
	}
}

void func_617(int iParam0)//Position - 0x605B0
{
	var uVar0;
	
	iLocal_758[iParam0] = 1;
	uVar0 = func_341(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(uVar0, 31, 0);
}

int func_618(int iParam0, int iParam1)//Position - 0x605D1
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0 || iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0 || iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 5:
			if ((iParam1 == 5 || iParam1 == 0) || iParam1 == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_619(int iParam0, bool bParam1, bool bParam2)//Position - 0x6066B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = iVar0;
		if (func_622(iVar1, iParam0))
		{
			func_621(iVar1);
		}
		else if (!func_622(iVar1, iLocal_42) || !bParam2)
		{
			func_620(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_597())
		{
			GlobalFunc_2868();
			while (!func_597())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_620(int iParam0)//Position - 0x606DA
{
	var uVar0;
	
	if (iLocal_744[iParam0])
	{
		iLocal_744[iParam0] = 0;
		uVar0 = func_35(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_621(int iParam0)//Position - 0x6070B
{
	var uVar0;
	
	iLocal_744[iParam0] = 1;
	uVar0 = func_35(iParam0);
	STREAMING::REQUEST_ANIM_DICT(uVar0);
}

int func_622(int iParam0, int iParam1)//Position - 0x60729
{
	switch (iParam0)
	{
		case 9:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 12:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_623(int iParam0, bool bParam1, bool bParam2)//Position - 0x6075F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_626(iVar0, iParam0))
		{
			func_625(iVar0);
		}
		else if (!func_626(iVar0, iLocal_42) || !bParam2)
		{
			func_624(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_598())
		{
			GlobalFunc_2868();
			while (!func_598())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_624(int iParam0)//Position - 0x607CA
{
	struct<4> Var0;
	
	if (iLocal_725[iParam0])
	{
		iLocal_725[iParam0] = 0;
		Var0 = { func_599(iParam0) };
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var0) == 0)
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Var0);
		}
	}
}

void func_625(int iParam0)//Position - 0x607FE
{
	struct<4> Var0;
	
	iLocal_725[iParam0] = 1;
	Var0 = { func_599(iParam0) };
	TASK::REQUEST_WAYPOINT_RECORDING(&Var0);
}

int func_626(int iParam0, int iParam1)//Position - 0x6081E
{
	switch (iParam0 + 1)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_627(int iParam0, bool bParam1, bool bParam2)//Position - 0x60891
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_630(iVar0 + 1, iParam0))
		{
			func_629(iVar0 + 1);
		}
		else if (!func_630(iVar0 + 1, iLocal_42) || !bParam2)
		{
			func_628(iVar0 + 1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_600())
		{
			GlobalFunc_2868();
			while (!func_600())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_628(int iParam0)//Position - 0x60904
{
	if (iLocal_714[(iParam0 - 1)])
	{
		iLocal_714[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_601()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_601());
		}
	}
}

void func_629(int iParam0)//Position - 0x60939
{
	iLocal_714[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_601());
}

int func_630(var uParam0, int iParam1)//Position - 0x60955
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return 0;
}

void func_631(int iParam0, bool bParam1, bool bParam2)//Position - 0x60966
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_632(iVar0, iParam0))
		{
			func_588(iVar0);
		}
		else if (!func_632(iVar0, iLocal_42) || !bParam2)
		{
			func_264(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_602())
		{
			GlobalFunc_2868();
			while (!func_602())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_632(int iParam0, int iParam1)//Position - 0x609D1
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 1:
			break;
		
		case 5:
		case 6:
		case 4:
			break;
		
		case 3:
		case 21:
		case 26:
		case 27:
		case 28:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 >= 5)
			{
				return 1;
			}
			break;
		
		case 24:
		case 25:
			break;
	}
	return 0;
}




float func_636(int iParam0)//Position - 0x60B56
{
	switch (iParam0)
	{
		case 0:
			return 47.9f;
			break;
		
		case 2:
			return 139.6f;
			break;
		
		case 1:
			return 62f;
			break;
	}
	return 0f;
}

Vector3 func_637(int iParam0)//Position - 0x60B99
{
	switch (iParam0)
	{
		case 0:
			return 24.07882f, -1633.282f, 27.30396f;
			break;
		
		case 2:
			return -1463.517f, -781.0746f, 21.97596f;
			break;
		
		case 1:
			return -2419.62f, -232.6629f, 13.91232f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_638()//Position - 0x60BFC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!iLocal_859)
		{
			Global_86806[iVar0] = 0;
			iLocal_551[iVar0] = 0;
			iLocal_803[iVar0] = 0;
			iLocal_1111[iVar0] = 0;
			iLocal_807[iVar0] = 0;
			fLocal_1042[iVar0] = 50f;
		}
		else if (!Global_86806[iVar0])
		{
			iLocal_551[iVar0] = 0;
			iLocal_807[iVar0] = 0;
			iLocal_1111[iVar0] = (func_349(iVar0) - 1);
		}
		else
		{
			iLocal_551[iVar0] = 1;
		}
		iVar0++;
	}
	iLocal_48.f_18[2] = Global_86806[2];
	iLocal_48.f_18[0] = Global_86806[0];
	iLocal_48.f_18[1] = Global_86806[1];
}

void func_639(int iParam0)//Position - 0x60CB5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 2, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 3, 1);
		if (iParam0 == iLocal_593[3])
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 5, 1);
		}
	}
}









void func_648(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x61599
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[iParam1], 0))
	{
		iVar0 = func_693(iParam1);
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 3)
				{
					if (GlobalFunc_7698() && !Global_84544)
					{
						GlobalFunc_10627(&(iLocal_593[iParam1]), Param2, fParam5, 0, 0, 0, 0, 1, func_69(iVar0), 0, 145);
						iLocal_684[iVar0] = 0;
					}
					else
					{
						GlobalFunc_9748(&(iLocal_593[iParam1]), 1, Param2, fParam5, 0, 2);
					}
				}
				else
				{
					GlobalFunc_9748(&(iLocal_593[iParam1]), 1, Param2, fParam5, 0, 2);
				}
				break;
			
			case 1:
				if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5)
				{
					if (GlobalFunc_7698() && !Global_84544)
					{
						GlobalFunc_10627(&(iLocal_593[iParam1]), Param2, fParam5, 0, 0, 0, 0, 1, func_69(iVar0), 0, 145);
						iLocal_684[iVar0] = 0;
					}
					else
					{
						GlobalFunc_9748(&(iLocal_593[iParam1]), 2, Param2, fParam5, 0, 0);
					}
				}
				else
				{
					GlobalFunc_9748(&(iLocal_593[iParam1]), 2, Param2, fParam5, 0, 0);
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					if (GlobalFunc_7698() && !Global_84544)
					{
						GlobalFunc_10627(&(iLocal_593[iParam1]), Param2, fParam5, 0, 0, 0, 0, 1, func_69(iVar0), 0, 145);
						iLocal_684[iVar0] = 0;
					}
					else
					{
						GlobalFunc_9748(&(iLocal_593[iParam1]), 0, Param2, fParam5, 0, 0);
					}
				}
				else
				{
					GlobalFunc_9748(&(iLocal_593[iParam1]), 0, Param2, fParam5, 0, 0);
				}
				break;
			
			default:
				iLocal_593[iParam1] = VEHICLE::CREATE_VEHICLE(func_69(iVar0), Param2, fParam5, 1, 1);
				break;
		}
		if (bParam9)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_593[iParam1]);
			if (bParam10)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_593[iParam1], 1, 1);
			}
		}
		if (!bParam6)
		{
			func_264(iVar0);
		}
		if (bParam8)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_593[iParam1], false);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_593[iParam1], false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_593[iParam1], 1, 1, 1, 1, 1, 0, 0, 0);
		}
		func_649(iParam1);
		if (!bParam7)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_593[iParam1]));
		}
	}
}

void func_649(int iParam0)//Position - 0x617CC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[iParam0], 0))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_593[iParam0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_593[iParam0], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_593[iParam0], 1);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_593[iParam0])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_593[iParam0])))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_593[iParam0], false);
		}
		switch (iParam0)
		{
			case 3:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_593[iParam0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_593[iParam0], " M0NIED ");
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_593[iParam0], 5, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_593[iParam0], 0f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_593[iParam0], 2);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_593[iParam0], 1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_593[iParam0], false);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_593[iParam0], 1);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_593[iParam0], false);
				break;
			
			case 1:
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_593[iParam0], 1);
				break;
			
			case 2:
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_593[iParam0], 1);
				break;
			
			case 0:
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_593[iParam0], 1);
				break;
			}
	}
}












































int func_693(int iParam0)//Position - 0x68052
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 7;
			break;
	}
	return 4;
}



int func_696()//Position - 0x681E1
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 9999999f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((iVar0 != 1 && iVar0 != iLocal_941) && iVar0 != iLocal_942)
		{
			if (!PED::IS_PED_INJURED(Local_419[iVar0 /*16*/]))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_419[iVar0 /*16*/], 1), 0);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_697(char* sParam0, int iParam1, int iParam2)//Position - 0x68260
{
	int iVar0;
	
	if (iLocal_1060 < 0)
	{
		func_346(-1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_1060)
	{
		if (func_268(sParam0, 0, 0, 0))
		{
			iVar0 = -1;
			if (iParam1 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2);
			}
			func_346(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_698()//Position - 0x682A8
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(16), 300f, 300f, 300f, 0, 0, 0))
	{
		func_704(29);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_585))
	{
		if (iLocal_42 == 5)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_631))
			{
				uLocal_631 = func_702(iLocal_585, 0);
				if (HUD::DOES_BLIP_EXIST(uLocal_631))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_631, "BLIP_108");
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_585))
		{
			func_704(3);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_626))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_626, func_35(12), "LOUNGE_OUTRO_BOX", 3))
				{
					ENTITY::STOP_ENTITY_ANIM(iLocal_626, "LOUNGE_OUTRO_BOX", func_35(12), -1000f);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_628))
			{
				if (!iLocal_908)
				{
					bVar0 = false;
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1134))
					{
						if (iLocal_578 == 0)
						{
							bVar0 = true;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1134) >= 0.172f)
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_628, -1000f, 1);
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_628, 1, 0f, 0f, -0.1f, 0, 1, 1, 0);
						}
					}
					iLocal_908 = 1;
				}
			}
		}
		else
		{
			switch (iLocal_578)
			{
				case 0:
					bVar1 = false;
					if (bLocal_867)
					{
						bVar1 = true;
					}
					else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2659.052f, 1859.632f, 158.2922f, -2627.703f, 1874.209f, 194.4189f, 0, 1, 0) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2646.428f, 1867.557f, 159.244f, -2629.002f, 1882.919f, 162.444f, 15.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2627.605f, 1874.136f, 157.0591f, -2619.107f, 1880.352f, 161.9f, 2.9f, 0, 1, 0)))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (iLocal_583 == 0)
							{
								iLocal_583 = 2;
							}
						}
						else if (iLocal_583 == 0)
						{
							iLocal_583 = 1;
						}
						bVar1 = true;
					}
					if (bVar1)
					{
						uLocal_1134 = PED::CREATE_SYNCHRONIZED_SCENE(-2645.961f, 1872.599f, 159.153f, 0f, 0f, 102.44f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1134, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1134, 1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_585, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_585, uLocal_1134, func_35(12), "LOUNGE_OUTRO_DEV", 8f, -8f, 5, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_626, uLocal_1134, "LOUNGE_OUTRO_BOX", func_35(12), 8f, 1090519040, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_628, uLocal_1134, "LOUNGE_OUTRO_TAB", func_35(12), 8f, 1090519040, 0, 1148846080);
						iLocal_578 = 1;
					}
					break;
				
				case 1:
					if (!bLocal_872)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_585, 23f, 23f, 8f, 0, 1, 0))
						{
							switch (iLocal_583)
							{
								case 0:
									sVar2 = "FINC1_DEVSND";
									break;
								
								case 1:
									sVar2 = "FINC1_DEVTRV";
									break;
								
								case 2:
									sVar2 = "FINC1_DEVWRD";
									break;
								
								case 3:
									sVar2 = "FINC1_DEVHID";
									break;
								
								case 4:
									sVar2 = "FINC1_DEVSHO";
									break;
							}
							bLocal_872 = func_268(sVar2, 0, 0, 0);
						}
					}
					else
					{
						bLocal_867 = true;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1134))
					{
						if (!iLocal_907)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1134) >= 0.639f)
							{
								PED::SET_PED_CAN_RAGDOLL(iLocal_585, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_585, 227, 0);
								iLocal_907 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1134) >= 1f)
						{
							iLocal_578 = 2;
						}
					}
					else
					{
						iLocal_578 = 2;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_585, 10f, 10f, 2f, 0, 1, 0))
					{
						if (iLocal_1136 < 8)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1137)
							{
								if (func_268("FINC1_FNEBOX", 0, iLocal_1136, 0))
								{
									iLocal_1136++;
									iLocal_1137 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_626))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(iLocal_626))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_585, 1000, 1);
						}
					}
					break;
			}
			if (PED::IS_PED_RAGDOLL(iLocal_585))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_585, 1000, 1);
			}
		}
	}
	func_699();
}

void func_699()//Position - 0x686E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	char* sVar12;
	int iVar13;
	float fVar14;
	bool bVar15;
	
	iVar0 = 0;
	if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), -2659.445f, 1841.319f, 134.2405f, -2536.531f, 1949.558f, 180.4836f, 0, 1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if ((((((!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && iVar1 != joaat("weapon_stickybomb")) && iVar1 != joaat("weapon_grenade")) && iVar1 != joaat("weapon_smokegrenade")) && iVar1 != joaat("weapon_bzgas")) && iVar1 != joaat("weapon_molotov")) && iVar1 != joaat("weapon_stungun"))
		{
			iVar0 = 1;
		}
	}
	iVar2 = 0;
	if (FIRE::IS_EXPLOSION_IN_AREA(-1, -2659.445f, 1841.319f, 134.2405f, -2536.531f, 1949.558f, 180.4836f))
	{
		if (iLocal_583 == 0)
		{
			iLocal_583 = 3;
		}
		iVar2 = 1;
	}
	bVar3 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		bVar3 = true;
	}
	bLocal_873 = false;
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2604.264f, 1859.125f, 161.8173f, -2553.187f, 1938.961f, 180.0429f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2650.521f, 1860.736f, 159.9552f, -2605.26f, 1924.886f, 180.0464f, 0, 1, 0))
	{
		if (!func_701())
		{
			bLocal_873 = true;
			if (bVar3)
			{
				bLocal_867 = true;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (iLocal_42 == 4)
				{
					func_704(30);
				}
				bLocal_867 = true;
			}
		}
	}
	if (iLocal_1145 >= 0)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_1145 + 3000)
		{
			bLocal_867 = true;
		}
	}
	iLocal_1119 = 0;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		iVar5 = iVar4;
		if (!PED::IS_PED_INJURED(Local_419[iVar4 /*16*/]))
		{
			iLocal_1119++;
			if (!bLocal_867)
			{
				PED::SET_PED_RESET_FLAG(Local_419[iVar4 /*16*/], 126, 1);
			}
			if (PED::IS_PED_SHOOTING(Local_419[iVar4 /*16*/]) || bLocal_918)
			{
				bLocal_867 = true;
			}
			if (!Local_419[iVar4 /*16*/].f_9)
			{
				if (bLocal_873)
				{
					if (Local_419[iVar4 /*16*/].f_14 < 0)
					{
						if (PED::CAN_PED_SEE_HATED_PED(Local_419[iVar4 /*16*/], PLAYER::PLAYER_PED_ID()))
						{
							Local_419[iVar4 /*16*/].f_14 = MISC::GET_GAME_TIMER();
						}
					}
					else if (MISC::GET_GAME_TIMER() >= Local_419[iVar4 /*16*/].f_14 + 2000)
					{
						if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_419[iVar4 /*16*/]))
						{
							if (PED::CAN_PED_SEE_HATED_PED(Local_419[iVar4 /*16*/], PLAYER::PLAYER_PED_ID()))
							{
								iLocal_921 = 1;
								iLocal_941 = iVar4;
								Local_419[iVar4 /*16*/].f_9 = 1;
							}
							else if (MISC::GET_GAME_TIMER() >= Local_419[iVar4 /*16*/].f_14 + 3000)
							{
								Local_419[iVar4 /*16*/].f_14 = -1;
							}
						}
					}
				}
				if (!iLocal_921)
				{
					if (bLocal_873)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_419[iVar4 /*16*/]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_419[iVar4 /*16*/]))
							{
								iLocal_921 = 1;
								iLocal_941 = iVar4;
								Local_419[iVar4 /*16*/].f_9 = 1;
							}
						}
					}
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_419[iVar4 /*16*/], 1) };
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_419[iVar4 /*16*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_419[iVar4 /*16*/]))
					{
						if (iLocal_583 == 0)
						{
							iLocal_583 = 4;
						}
						Local_419[iVar4 /*16*/].f_9 = 1;
					}
				}
				else if (((MISC::IS_SNIPER_BULLET_IN_AREA(Var6 - Vector(2f, 2f, 2f), Var6 + Vector(2f, 2f, 2f)) || MISC::IS_BULLET_IN_AREA(Var6, 2f, 1)) || MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector(15f, 15f, 15f), Var6 + Vector(15f, 15f, 15f), 0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Var6, 30f) > 0)
				{
					if (iLocal_1145 < 0)
					{
						iLocal_1145 = MISC::GET_GAME_TIMER();
					}
					Local_419[iVar4 /*16*/].f_9 = 1;
				}
				if ((iVar0 || iVar2) || bLocal_867)
				{
					bLocal_867 = true;
					Local_419[iVar4 /*16*/].f_9 = 1;
				}
			}
			else
			{
				if (iLocal_1120 == 1)
				{
					if (iVar5 == 0)
					{
						if (!PED::IS_TRACKED_PED_VISIBLE(Local_419[iVar4 /*16*/]) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_419[iVar4 /*16*/], 40f, 40f, 40f, 0, 1, 0))
						{
							PED::APPLY_DAMAGE_TO_PED(Local_419[iVar4 /*16*/], 1000, 1);
						}
					}
				}
				Var9 = { ENTITY::GET_ENTITY_COORDS(Local_419[iVar4 /*16*/], 1) };
				if (Var9.f_2 < 159f)
				{
					PED::APPLY_DAMAGE_TO_PED(Local_419[iVar4 /*16*/], 1000, 1);
				}
				if (Local_419[iVar4 /*16*/].f_11 != 2)
				{
					PED::SET_PED_SEEING_RANGE(Local_419[iVar4 /*16*/], 60f);
					Local_419[iVar4 /*16*/].f_11 = 2;
				}
			}
			switch (Local_419[iVar4 /*16*/].f_11)
			{
				case 1:
					switch (Local_419[iVar4 /*16*/].f_12)
					{
						case 0:
						case 2:
							if (MISC::GET_GAME_TIMER() >= Local_419[iVar4 /*16*/].f_13)
							{
								switch (iVar5)
								{
									case 1:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc25";
										}
										else
										{
											sVar12 = "finc26";
										}
										break;
									
									case 2:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc27";
										}
										else
										{
											sVar12 = "finc28";
										}
										break;
									
									case 3:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc29";
										}
										else
										{
											sVar12 = "finc210";
										}
										break;
									
									case 6:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc211";
										}
										else
										{
											sVar12 = "finc212";
										}
										break;
									
									case 7:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc213";
										}
										else
										{
											sVar12 = "finc214";
										}
										break;
									
									case 4:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc215";
										}
										else
										{
											sVar12 = "finc216";
										}
										break;
									
									case 5:
										if (Local_419[iVar4 /*16*/].f_12 == 0)
										{
											sVar12 = "finc217";
										}
										else
										{
											sVar12 = "finc218";
										}
										break;
								}
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_419[iVar4 /*16*/], sVar12, 1, 1, -1);
								if (Local_419[iVar4 /*16*/].f_12 == 0)
								{
									Local_419[iVar4 /*16*/].f_12 = 1;
								}
								else
								{
									Local_419[iVar4 /*16*/].f_12 = 3;
								}
							}
							break;
						
						case 1:
						case 3:
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_419[iVar4 /*16*/]))
							{
								switch (iVar5)
								{
									case 1:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 15000;
										}
										else
										{
											iVar13 = 10000;
										}
										break;
									
									case 2:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 8000;
										}
										else
										{
											iVar13 = 7000;
										}
										break;
									
									case 3:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 10000;
										}
										else
										{
											iVar13 = 9000;
										}
										break;
									
									case 6:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 7000;
										}
										else
										{
											iVar13 = 12000;
										}
										break;
									
									case 7:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 11000;
										}
										else
										{
											iVar13 = 9000;
										}
										break;
									
									case 4:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 8000;
										}
										else
										{
											iVar13 = 8000;
										}
										break;
									
									case 5:
										if (Local_419[iVar4 /*16*/].f_12 == 1)
										{
											iVar13 = 9000;
										}
										else
										{
											iVar13 = 11000;
										}
										break;
								}
								if (iLocal_774)
								{
									iVar13 = 3000;
								}
								Local_419[iVar4 /*16*/].f_13 = (MISC::GET_GAME_TIMER() + iVar13);
								if (Local_419[iVar4 /*16*/].f_12 == 1)
								{
									Local_419[iVar4 /*16*/].f_12 = 2;
								}
								else
								{
									Local_419[iVar4 /*16*/].f_12 = 0;
								}
							}
							break;
					}
					break;
				
				case 2:
					if (!Local_419[iVar4 /*16*/].f_10)
					{
						bVar15 = false;
						switch (iVar5)
						{
							case 1:
								bVar15 = true;
								fVar14 = 0f;
								break;
							
							case 0:
								bVar15 = true;
								fVar14 = 5f;
								break;
							
							case 2:
							case 3:
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_419[iVar4 /*16*/], 20f, 20f, 20f, 0, 1, 0) || iLocal_871)
								{
									bVar15 = true;
									fVar14 = 4f;
								}
								break;
							
							case 4:
							case 5:
							case 6:
							case 7:
								if (iLocal_871)
								{
									bVar15 = true;
									fVar14 = 2f;
								}
								break;
						}
						if (bVar15)
						{
							Local_419[iVar4 /*16*/].f_15 = (Local_419[iVar4 /*16*/].f_15 + (1f * SYSTEM::TIMESTEP()));
							if (Local_419[iVar4 /*16*/].f_15 >= fVar14)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_419[iVar4 /*16*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_419[iVar4 /*16*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_419[iVar4 /*16*/], 50, 1);
								Local_419[iVar4 /*16*/].f_10 = 1;
							}
						}
					}
					if (!PED::IS_PED_IN_COMBAT(Local_419[iVar4 /*16*/], 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_419[iVar4 /*16*/], 993674639) != 7 || PED::IS_PED_USING_ANY_SCENARIO(Local_419[iVar4 /*16*/]))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_419[iVar4 /*16*/]);
						}
						TASK::TASK_COMBAT_PED(Local_419[iVar4 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				}
		}
		if (iLocal_42 == 5)
		{
			GlobalFunc_661(Local_419[iVar4 /*16*/], &(Local_419[iVar4 /*16*/].f_1), -1, 0, 0, 0, 100f, 0);
		}
		iVar4++;
	}
	iLocal_1120 = iLocal_1119;
}


bool func_701()//Position - 0x690E5
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2557.699f, 1913.68f, 167.8688f, -2549.767f, 1909.98f, 171.5165f, 6.86f, 0, 1, 0);
}

int func_702(int iParam0, bool bParam1)//Position - 0x6911B
{
	if (func_235())
	{
		return GlobalFunc_6797(iParam0, bParam1, 145);
	}
	return 0;
}


void func_704(int iParam0)//Position - 0x6918A
{
	char* sVar0;
	
	if (func_235())
	{
		func_243();
		func_242(1, 1, 1, 1);
		iLocal_41 = 1;
		iLocal_43 = iParam0;
		AUDIO::TRIGGER_MUSIC_EVENT("FINC2_FAIL");
		switch (iLocal_43)
		{
			case 0:
				sVar0 = "CMN_MDIED";
				break;
			
			case 1:
				sVar0 = "CMN_FDIED";
				break;
			
			case 2:
				sVar0 = "CMN_TDIED";
				break;
			
			case 3:
				sVar0 = "FC2_FAIL1";
				break;
			
			case 4:
				sVar0 = "FC2_FAIL2";
				break;
			
			case 5:
				sVar0 = "FC2_FAIL4";
				break;
			
			case 6:
				sVar0 = "FC2_FAIL3";
				break;
			
			case 7:
				sVar0 = "CMN_MDEST";
				break;
			
			case 8:
				sVar0 = "FC2_FAIL6";
				break;
			
			case 9:
				sVar0 = "FC2_FAIL5";
				break;
			
			case 10:
				sVar0 = "CMN_TDEST";
				break;
			
			case 11:
				sVar0 = "FC2_FAIL8";
				break;
			
			case 12:
				sVar0 = "FC2_FAIL7";
				break;
			
			case 13:
				sVar0 = "FC2_FAIL11";
				break;
			
			case 14:
				sVar0 = "FC2_FAIL9";
				break;
			
			case 15:
				sVar0 = "FC2_FAIL10";
				break;
			
			case 16:
				sVar0 = "FC2_FAIL12";
				break;
			
			case 17:
				sVar0 = "FC2_FAIL13";
				break;
			
			case 18:
				sVar0 = "FC2_FAIL15";
				break;
			
			case 19:
				sVar0 = "FC2_FAIL16";
				break;
			
			case 20:
				sVar0 = "FC2_FAIL17";
				break;
			
			case 21:
				sVar0 = "FC2_FAIL15B";
				break;
			
			case 22:
				sVar0 = "FC2_FAIL16B";
				break;
			
			case 23:
				sVar0 = "FC2_FAIL17B";
				break;
			
			case 24:
				sVar0 = "FC2_FAIL18";
				break;
			
			case 25:
				sVar0 = "FC2_FAIL19";
				break;
			
			case 26:
				sVar0 = "FC2_FAIL20";
				break;
			
			case 27:
				sVar0 = "FC2_FAIL21";
				break;
			
			case 28:
				sVar0 = "FC2_FAIL22";
				break;
			
			case 29:
				sVar0 = "FC2_FAIL23";
				break;
			
			case 30:
				sVar0 = "FC2_FAIL24";
				break;
		}
		GlobalFunc_10835(sVar0);
	}
}










void func_714()//Position - 0x6A1DB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (!iLocal_774)
	{
		func_721(1);
		switch (iLocal_133)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(16), 200f, 200f, 200f, 0, 0, 0))
				{
					func_588(3);
					func_588(7);
					func_588(21);
					func_588(26);
					func_588(27);
					func_588(28);
					func_617(4);
					func_617(5);
					func_621(12);
					func_625(4);
					func_625(5);
					func_625(6);
					func_625(7);
					func_625(8);
					func_625(9);
					func_625(10);
					func_625(11);
					func_625(12);
					func_625(13);
					func_625(14);
					func_625(15);
					func_625(16);
					func_625(17);
					iLocal_133 = 1;
				}
				break;
			
			case 1:
				if (((func_602() && func_597()) && func_596()) && func_598())
				{
					func_339();
					iLocal_133 = 2;
				}
				break;
			
			case 2:
				func_698();
				if ((bLocal_867 || iLocal_578 > 0) || bLocal_873)
				{
					if (func_235())
					{
						if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
						{
							STREAMING::STREAMVOL_DELETE(uLocal_582);
						}
						func_243();
						func_273(5, 0, 1, 1, 0, 1, 1, 1);
						func_40(19);
						func_31(20);
						GlobalFunc_2867("FINC2_OUTSIDE_DEVINS");
						GlobalFunc_2867("FINC2_ALERTED");
					}
				}
				break;
		}
		if (iLocal_42 == 4)
		{
			bVar1 = false;
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2679.9f, 1793.3f, 137.7f, 2468.1f, 1976f, 252.7f, 0, 1, 0))
						{
							bVar1 = true;
						}
					}
				}
			}
			if (!iLocal_777 && !bVar1)
			{
				if (func_255(0, 0, 1))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_629))
					{
						func_243();
						func_242(0, 1, 1, 0);
						uLocal_629 = func_239(func_267(16), 1);
					}
					if (!bLocal_778)
					{
						if (!GlobalFunc_111())
						{
							bLocal_778 = func_237("FC2_GODEV", 1, 0);
						}
					}
					if (!STREAMING::STREAMVOL_IS_VALID(uLocal_582))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(16), 50f, 50f, 50f, 0, 1, 0))
						{
							uLocal_582 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-2711.9f, 1910.3f, 175.9f, GlobalFunc_590(-1.4f, 0f, -102.8f), 200f, 12, 127);
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(16), 75f, 75f, 75f, 0, 1, 0))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_582);
					}
					if (iVar0 == 0)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(16), 1f, 1f, 2f, 1, 1, 0);
						if ((func_701() && iLocal_133 == 2) && GlobalFunc_552(1, 0, 1))
						{
							iLocal_1118 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_777 = 1;
						}
					}
				}
			}
			else
			{
				iVar3 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						iVar3 = GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 8f, 1, 1056964608, 0, 1);
					}
				}
				if (iVar3 || bVar1)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1118)
					{
						if (!GlobalFunc_111())
						{
							if (func_235())
							{
								iLocal_774 = 1;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_715();
	}
}

void func_715()//Position - 0x6A54F
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	struct<3> Var10;
	int iVar13;
	
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_47)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				iVar13 = iVar0;
				if (!PED::IS_PED_INJURED(Local_419[iVar0 /*16*/]))
				{
					bVar8 = true;
					bVar9 = false;
					iVar7 = -1;
					switch (iVar13)
					{
						case 0:
							bVar8 = false;
							break;
						
						case 1:
							Var1 = { -2574.571f, 1894.408f, 166.2991f };
							fVar4 = 33.8f;
							sVar5 = "finc26";
							iVar6 = 2;
							break;
						
						case 2:
							Var1 = { -2568.419f, 1879.077f, 162.696f };
							fVar4 = -170.8f;
							sVar5 = "finc27";
							iVar7 = 0;
							iVar6 = 8;
							break;
						
						case 3:
							Var1 = { -2580.296f, 1863.367f, 162.6944f };
							fVar4 = 93.9f;
							sVar5 = "finc210";
							iVar6 = 0;
							break;
						
						case 4:
							Var1 = { -2624.391f, 1878.724f, 162.4261f };
							fVar4 = -57.5f;
							sVar5 = "finc215";
							iVar7 = 0;
							iVar6 = 3;
							break;
						
						case 5:
							Var1 = { -2604.301f, 1898.969f, 166.3045f };
							fVar4 = 91.9f;
							sVar5 = "finc218";
							iVar6 = 7;
							iVar7 = 0;
							break;
						
						case 6:
							Var1 = { -2607.851f, 1878.903f, 162.4264f };
							fVar4 = 129.1f;
							iVar7 = 1200;
							bVar9 = true;
							Var10 = { -2614.58f, 1872.559f, 166.3037f };
							break;
						
						case 7:
							Var1 = { -2643.208f, 1872.867f, 159.1518f };
							fVar4 = -114.6f;
							iVar7 = 7200;
							bVar9 = true;
							Var10 = { -2637.02f, 1869.963f, 159.152f };
							break;
					}
					if (bVar8)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_419[iVar0 /*16*/]);
						ENTITY::SET_ENTITY_COORDS(Local_419[iVar0 /*16*/], Var1, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_419[iVar0 /*16*/], fVar4);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_1153);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_1153);
						if (iVar7 >= 0)
						{
							TASK::TASK_PAUSE(0, iVar7);
						}
						else
						{
							PED::FORCE_PED_MOTION_STATE(Local_419[iVar0 /*16*/], -668482597, 1, 1, 0);
						}
						if (!bVar9)
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sVar5, iVar6, 1, -1);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var10, 1f, 20000, 1193033728, 1056964608);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_1153);
						TASK::TASK_PERFORM_SEQUENCE(Local_419[iVar0 /*16*/], uLocal_1153);
					}
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_585) && !PED::IS_PED_INJURED(Local_419[7 /*16*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_585, Local_419[7 /*16*/], -1, 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(Local_419[7 /*16*/], iLocal_585, -1, 2048, 4);
			}
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 0);
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
			func_31(18);
			GlobalFunc_2867("FINC2_OUTSIDE_DEVINS");
			func_225(1, 1, 1, 0, 1, 0, 1000, 1);
			GlobalFunc_2885();
			func_243();
			func_237("FC2_PLC1", 1, 1);
			func_223(9, 1, 8000);
			iLocal_912 = 0;
			iLocal_939 = 0;
			RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_1058 = MISC::GET_GAME_TIMER();
			iLocal_47 = 1;
			break;
		
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			switch (iLocal_579)
			{
				case 0:
					if (!iLocal_912)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 100)
						{
							if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
							{
								STREAMING::STREAMVOL_DELETE(uLocal_582);
							}
							uLocal_582 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-2636f, 1881.8f, 160.1f, GlobalFunc_590(1.9f, 0f, 137.1f), 20f, 12, 127);
							iLocal_912 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 8000)
					{
						func_223(11, 1, 6000);
						func_242(1, 1, 1, 0);
						iLocal_1058 = MISC::GET_GAME_TIMER();
						iLocal_912 = 0;
						iLocal_579 = 2;
					}
					OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-2642.322f, 1870.602f, 159.313f, 10f);
					break;
				
				case 2:
					if (!iLocal_912)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 100)
						{
							if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
							{
								STREAMING::STREAMVOL_DELETE(uLocal_582);
							}
							uLocal_582 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_590(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 20f, 12, 127);
							iLocal_912 = 1;
						}
					}
					if (!bLocal_879)
					{
						bLocal_879 = func_268("FINC1_DGUARD", 0, 0, 0);
					}
					if (!iLocal_939)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 4700)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_939 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 5000)
					{
						iLocal_47 = 2;
					}
					break;
			}
			func_717();
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_585) && !PED::IS_PED_INJURED(Local_419[7 /*16*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_585);
				TASK::TASK_CLEAR_LOOK_AT(Local_419[7 /*16*/]);
			}
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_582);
			}
			RECORDING::_0x81CBAE94390F9F89();
			func_340(0);
			GlobalFunc_657();
			func_40(18);
			func_31(19);
			func_225(0, 1, 1, 0, 1, 0, 1000, 1);
			func_273(5, 0, 1, 1, 0, 1, 1, 1);
			break;
	}
}


void func_717()//Position - 0x6AA87
{
	if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_1057 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(800);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_6685(0);
		GlobalFunc_4935();
		iLocal_775 = 1;
		iLocal_47 = 2;
	}
}




void func_721(bool bParam0)//Position - 0x6ABE6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				Var2 = { func_267(13) };
				break;
			
			case 1:
				Var2 = { func_267(15) };
				break;
			
			case 2:
				Var2 = { func_267(18) };
				break;
		}
		switch (iLocal_129[iVar1])
		{
			case 0:
				if (!Global_86806[iVar1])
				{
					if (iLocal_42 == 0 || iVar1 == GlobalFunc_8315())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, 300f, 300f, 300f, 0, 0, 0))
						{
							if (iVar1 != 1 || GlobalFunc_8315() == 1)
							{
								switch (iVar1)
								{
									case 0:
										func_588(18);
										func_588(19);
										func_588(13);
										func_588(22);
										func_588(23);
										func_621(6);
										func_621(7);
										func_621(10);
										func_621(11);
										func_625(0);
										func_625(1);
										func_625(2);
										break;
									
									case 1:
										func_588(8);
										func_588(9);
										func_588(10);
										func_588(11);
										func_588(12);
										func_621(8);
										func_625(3);
										break;
									
									case 2:
										func_588(14);
										func_588(15);
										func_588(16);
										func_588(20);
										func_588(17);
										func_621(0);
										func_621(3);
										func_621(2);
										func_621(4);
										func_621(1);
										func_621(5);
										func_609(1);
										break;
								}
								iLocal_129[iVar1] = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (!Global_86806[iVar1])
				{
					if ((func_602() && func_597()) && func_598())
					{
						switch (iVar1)
						{
							case 0:
								func_773(iLocal_42);
								break;
							
							case 1:
								func_765(iLocal_42);
								break;
							
							case 2:
								func_760();
								break;
						}
						if (iLocal_858)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							CAM::DO_SCREEN_FADE_IN(800);
							iLocal_858 = 0;
						}
						if (iVar1 == 2)
						{
							iLocal_1340 = 1;
							func_727(&iLocal_1341, 1);
						}
						iLocal_129[iVar1] = 2;
					}
				}
				break;
			
			case 2:
				if (bParam0 || GlobalFunc_8315() != iVar1)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, 350f, 350f, 350f, 0, 0, 0))
					{
						switch (iVar1)
						{
							case 0:
								func_726();
								func_264(18);
								func_264(19);
								func_264(22);
								func_264(23);
								func_264(13);
								func_620(6);
								func_620(7);
								func_620(10);
								func_620(11);
								func_624(0);
								func_624(1);
								func_624(2);
								break;
							
							case 1:
								func_725();
								func_264(8);
								func_264(9);
								func_264(10);
								func_264(11);
								func_264(12);
								func_620(8);
								func_624(3);
								break;
							
							case 2:
								func_724();
								func_723();
								func_722();
								func_264(14);
								func_264(15);
								func_264(16);
								func_264(17);
								func_264(20);
								func_620(0);
								func_620(3);
								func_620(2);
								func_620(4);
								func_620(1);
								func_620(5);
								func_608(1);
								break;
						}
						iLocal_129[iVar1] = 0;
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_722()//Position - 0x6AF3E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_590[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_590[iVar0]));
		}
		iVar0++;
	}
}

void func_723()//Position - 0x6AF71
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_555[iVar0 /*4*/][iVar1]))
			{
				PED::DELETE_PED(&(Local_555[iVar0 /*4*/][iVar1]));
			}
			iVar1++;
		}
		Local_555[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_724()//Position - 0x6AFC8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_622))
	{
		OBJECT::DELETE_OBJECT(&iLocal_622);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_587[iVar0]));
		}
		iVar0++;
	}
}

void func_725()//Position - 0x6B00C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*14*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_278[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_598[iVar0]))
		{
			if ((iLocal_598[iVar0] != iLocal_593[0] && iLocal_598[iVar0] != iLocal_593[2]) && iLocal_598[iVar0] != iLocal_593[1])
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_598[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_726()//Position - 0x6B0A2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_624))
	{
		OBJECT::DELETE_OBJECT(&iLocal_624);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_623))
	{
		OBJECT::DELETE_OBJECT(&iLocal_623);
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_137[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_602[iVar0]))
		{
			if ((iLocal_602[iVar0] != iLocal_593[0] && iLocal_602[iVar0] != iLocal_593[2]) && iLocal_602[iVar0] != iLocal_593[1])
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_602[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_727(int iParam0, bool bParam1)//Position - 0x6B158
{
	int iVar0;
	
	switch (iLocal_1340)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_PTFX_ASSET();
			break;
		
		case 2:
			if (bLocal_5064)
			{
				func_759(iParam0, PLAYER::PLAYER_PED_ID(), uLocal_587[0]);
			}
			else if (bLocal_5065)
			{
				func_758(iParam0, PLAYER::PLAYER_PED_ID(), uLocal_587[0]);
			}
			else
			{
				func_757(iParam0, PLAYER::PLAYER_PED_ID(), uLocal_587[0]);
			}
			STREAMING::REQUEST_PTFX_ASSET();
			GlobalFunc_7718(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_5066 = 0;
			iLocal_1340 = 3;
			break;
		
		case 3:
			iVar0 = func_728(iParam0);
			if (!iLocal_5069)
			{
				if (!bLocal_5064 && !bLocal_5065)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= fLocal_5076)
					{
						if (!PED::IS_PED_INJURED(uLocal_587[0]))
						{
							GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(uLocal_587[0]);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_finale2_blood_entry", uLocal_587[0], Local_5070, Local_5073, fLocal_5077, 0, 0, 0);
							iLocal_5069 = 1;
						}
					}
				}
			}
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				if (iVar0 >= iParam0->f_1218)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5067);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5068, 1065353216);
				}
				if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 1f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5067);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5068, 1065353216);
					iLocal_1340 = 5;
				}
			}
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			if (!iLocal_5066)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_5066 = 1;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1340 = 0;
			iParam0->f_1232 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return iParam0->f_1232;
}

int func_728(var uParam0)//Position - 0x6B323
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
				fLocal_39 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_39 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_39 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_39 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_39);
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





























void func_757(var uParam0, int iParam1, var uParam2)//Position - 0x6CE55
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 5;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1654.309f, -1100.606f, 22.3126f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 15f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 60f;
		if (!iLocal_813)
		{
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 1f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_2 = 6;
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 300;
		uParam0->f_10[1 /*57*/].f_6 = { -1659.348f, -1107.988f, 23.3689f };
		uParam0->f_10[1 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
		uParam0->f_10[1 /*57*/].f_12 = 6f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 35f;
		if (!iLocal_813)
		{
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0.5f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
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
		uParam0->f_10[2 /*57*/].f_2 = 6;
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 500;
		uParam0->f_10[2 /*57*/].f_6 = { -1659.908f, -1108.808f, 23.4863f };
		uParam0->f_10[2 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
		uParam0->f_10[2 /*57*/].f_12 = 5f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 35f;
		if (!iLocal_813)
		{
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 6;
		uParam0->f_10[3 /*57*/].f_3 = 1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1;
		uParam0->f_10[3 /*57*/].f_6 = { -1659.908f, -1108.808f, 23.4863f };
		uParam0->f_10[3 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
		uParam0->f_10[3 /*57*/].f_12 = 5f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 35f;
		if (!iLocal_813)
		{
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 1;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 200f;
		uParam0->f_10[3 /*57*/].f_40 = 200f;
		uParam0->f_10[3 /*57*/].f_41 = 50;
		uParam0->f_10[3 /*57*/].f_42 = 50;
		uParam0->f_10[3 /*57*/].f_43 = 100;
		uParam0->f_10[3 /*57*/].f_38 = 0.41f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 4;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveBulletCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveBulletCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_758(var uParam0, int iParam1, var uParam2)//Position - 0x6D702
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1656.204f, -1122.471f, 16.6928f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 35f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 800;
		uParam0->f_10[1 /*57*/].f_6 = { -1656.204f, -1122.471f, 16.693f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 36f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
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
		uParam0->f_10[2 /*57*/].f_2 = 3;
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1500;
		uParam0->f_10[2 /*57*/].f_6 = { -1656.204f, -1122.471f, 16.693f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 35f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 3;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveGrenadeCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveGrenadeCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_759(var uParam0, int iParam1, var uParam2)//Position - 0x6DD0E
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1631.6f, -1085.84f, 42.3664f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 35f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0f, 0f, 0.0001f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 25f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 800;
		uParam0->f_10[1 /*57*/].f_6 = { -1632.053f, -1086.268f, 42.3135f };
		uParam0->f_10[1 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
		uParam0->f_10[1 /*57*/].f_12 = 36f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 25f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
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
		uParam0->f_10[2 /*57*/].f_2 = 3;
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1500;
		uParam0->f_10[2 /*57*/].f_6 = { -1633.539f, -1087.675f, 42.14f };
		uParam0->f_10[2 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
		uParam0->f_10[2 /*57*/].f_12 = 35f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 25f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 3;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveExplosionCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveExplosionCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_760()//Position - 0x6E336
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_587[0]))
	{
		uLocal_587[0] = PED::CREATE_PED(26, func_69(14), -1663.9f, -1132f, 41.8f, 0f, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_587[1]))
	{
		uLocal_587[1] = PED::CREATE_PED(26, func_69(15), -1663.9f, -1142f, 41.8f, 0f, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[1], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[1], 8, 1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!PED::IS_PED_INJURED(uLocal_587[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_587[iVar0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_587[iVar0], 1);
			PED::SET_PED_KEEP_TASK(uLocal_587[iVar0], 1);
			PED::SET_PED_DIES_WHEN_INJURED(uLocal_587[iVar0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_587[iVar0], 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_587[iVar0], 208, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_587[iVar0], 42, 1);
			PED::SET_PED_CAN_RAGDOLL(uLocal_587[iVar0], 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_587[iVar0], 0);
			PED::SET_PED_MAX_HEALTH(uLocal_587[iVar0], 10000);
			ENTITY::SET_ENTITY_HEALTH(uLocal_587[iVar0], 10000);
			iLocal_855[iVar0] = 0;
			if (iVar0 == 0)
			{
				GlobalFunc_593(uLocal_587[iVar0], 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_587[iVar0], 1, 25f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_587[iVar0], "FINALE_STEVE_GROUP", 0);
			}
		}
		iVar0++;
	}
	func_762(0, 0, 0);
	func_762(1, 0, 0);
	GlobalFunc_173(&uLocal_1155, 4, uLocal_587[0], "STEVE", 0, 1);
	GlobalFunc_173(&uLocal_1155, 7, uLocal_587[1], "CAMERAMAN", 0, 1);
	iLocal_622 = OBJECT::CREATE_OBJECT(func_69(17), -1663.9f, -1142f, 38.8f, 1, 1, 0);
	func_761();
	iLocal_823 = 0;
	iLocal_890 = 0;
}

void func_761()//Position - 0x6E527
{
	if (!PED::IS_PED_INJURED(uLocal_587[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_622))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_622, uLocal_587[1], PED::GET_PED_BONE_INDEX(uLocal_587[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	}
}

void func_762(int iParam0, int iParam1, int iParam2)//Position - 0x6E56F
{
	int iVar0;
	var uVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	bVar5 = false;
	bVar6 = false;
	fVar7 = 1f;
	if (iParam1 == 4)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_649))
		{
			CAM::DESTROY_CAM(uLocal_649, 0);
		}
	}
	switch (iParam1)
	{
		case 2:
			uVar1 = func_35(3);
			if (iParam0 == 0)
			{
				sVar2 = "FIN_C2_MCS_1_STEVE";
			}
			else
			{
				sVar2 = "FIN_C2_MCS_1_CAMMAN";
			}
			iVar4 = 0;
			bVar3 = true;
			bVar6 = true;
			break;
		
		case 0:
			uVar1 = func_35(0);
			if (iParam0 == 0)
			{
				sVar2 = "Film_Idle_PedA";
			}
			else
			{
				sVar2 = "Film_Idle_PedB";
			}
			iVar4 = 1;
			bVar3 = false;
			break;
		
		case 1:
			uVar1 = func_35(0);
			if (iParam0 == 0)
			{
				sVar2 = "Film_Idle_Outro_PedA";
			}
			else
			{
				sVar2 = "Film_Idle_Outro_PedB";
			}
			iVar4 = 0;
			bVar3 = false;
			break;
		
		case 3:
			uVar1 = func_35(0);
			if (iParam0 == 0)
			{
				sVar2 = "Relax_Idle_PedA";
			}
			else
			{
				sVar2 = "Relax_Idle_PedB";
			}
			iVar4 = 1;
			bVar3 = false;
			bVar5 = true;
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				uVar1 = func_35(2);
				sVar2 = "Reaction";
				bVar3 = false;
			}
			else
			{
				uVar1 = func_35(1);
				sVar2 = "Reaction";
				bVar3 = false;
			}
			fVar7 = 0.8f;
			iVar4 = 0;
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				uVar1 = func_35(2);
				sVar2 = "Idle";
			}
			else
			{
				uVar1 = func_35(1);
				sVar2 = "Idle";
			}
			iVar4 = 1;
			bVar3 = false;
			break;
		
		case 6:
			break;
	}
	if (iParam0 == 0)
	{
		iVar0 = uLocal_587[0];
	}
	else
	{
		iVar0 = uLocal_587[1];
	}
	if (bVar3 || iParam2)
	{
		fVar8 = 1000f;
	}
	else if (bVar5)
	{
		fVar8 = 2f;
	}
	else
	{
		fVar8 = 8f;
	}
	if (bVar6)
	{
		fVar9 = -2f;
	}
	else
	{
		fVar9 = -8f;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (iParam0 == 0)
		{
			if (iParam1 == 4)
			{
				TASK::TASK_LOOK_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			}
			func_763(&uLocal_1067, iVar4);
			TASK::TASK_SYNCHRONIZED_SCENE(iVar0, uLocal_1067, uVar1, sVar2, fVar8, fVar9, 4, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1067, fVar7);
			if (iParam1 == 4)
			{
				iLocal_1087 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			func_763(&uLocal_1068, iVar4);
			TASK::TASK_SYNCHRONIZED_SCENE(iVar0, uLocal_1068, uVar1, sVar2, fVar8, fVar9, 4, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1068, fVar7);
			if (iParam1 == 4)
			{
				uLocal_650 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_650, uLocal_1068, "Reaction_Cam", uVar1);
			}
		}
		if (bVar3)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
		}
	}
	iLocal_134[iParam0] = iParam1;
}

void func_763(var uParam0, int iParam1)//Position - 0x6E7F1
{
	*uParam0 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[3]))
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*uParam0, iLocal_605[3], -1);
	}
	else
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*uParam0, func_267(18), 0f, 0f, 0f, 2);
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam0, iParam1);
}


void func_765(int iParam0)//Position - 0x6E8E8
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_598[iVar0]))
		{
			iVar6 = iVar0;
			switch (iVar6)
			{
				case 0:
					iVar7 = 11;
					Var1 = { -3018.44f, 87.2183f, 10.6f };
					fVar4 = 62.91601f;
					break;
				
				case 1:
					iVar7 = 12;
					Var1 = { -3022.72f, 91.8035f, 10.6f };
					fVar4 = 41.65701f;
					break;
				
				case 2:
					iVar7 = 12;
					Var1 = { -3012.37f, 86.6375f, 10.6f };
					fVar4 = 97.91963f;
					break;
			}
			iLocal_598[iVar0] = VEHICLE::CREATE_VEHICLE(func_69(iVar7), Var1, fVar4, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_598[iVar0]);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_598[iVar0], 0);
			AUDIO::SET_HORN_ENABLED(iLocal_598[iVar0], 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_598[iVar0], 1, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_598[iVar0], 1);
			VEHICLE::SET_VEHICLE_STEERING_BIAS_SCALAR(iLocal_598[iVar0], 0.3f);
			VEHICLE::_0x88BC673CA9E0AE99(iLocal_598[iVar0], 1);
			if (iVar6 == 0)
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_598[iVar0], 0, 0, 0.5f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_598[iVar0], "FINALE_CHENGS_VEHICLE_GROUP", 0);
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_598[iVar0], "FINALE_TRIAD_VEHICLES_GROUP", 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*14*/]))
		{
			iVar8 = iVar0;
			iVar9 = 10;
			iVar5 = -1;
			switch (iVar8)
			{
				case 0:
					Var1 = { -3018.46f, 87.56f, 10.61f };
					fVar4 = -109.6f;
					iVar9 = 8;
					break;
				
				case 1:
					iVar5 = 0;
					iVar9 = 9;
					iVar10 = 2;
					break;
				
				case 2:
					Var1 = { -3018.43f, 85.71f, 10.61f };
					fVar4 = 62.4f;
					break;
				
				case 3:
					iVar5 = 0;
					iVar10 = 0;
					break;
				
				case 4:
					iVar5 = 1;
					iVar10 = -1;
					break;
				
				case 5:
					Var1 = { -3019.42f, 91.32f, 10.67f };
					fVar4 = -30.2f;
					break;
				
				case 6:
					Var1 = { -3019.3f, 89.01f, 10.74f };
					fVar4 = -83.2f;
					break;
				
				case 7:
					iVar5 = 2;
					iVar10 = -1;
					break;
				
				case 8:
					Var1 = { -3014f, 88.73f, 10.61f };
					fVar4 = 1.5f;
					break;
				
				case 9:
					Var1 = { -3016.98f, 87.08f, 10.69f };
					fVar4 = 67.2f;
					break;
			}
			Local_278[iVar0 /*14*/].f_9 = 0;
			Local_278[iVar0 /*14*/].f_10 = 0;
			Local_278[iVar0 /*14*/].f_11 = 0;
			Local_278[iVar0 /*14*/].f_13 = 0f;
			if (iVar8 == 0)
			{
				GlobalFunc_7047(&(Local_278[iVar0 /*14*/]), 35, Var1, fVar4, 0);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_278[iVar0 /*14*/]);
			}
			else if (iVar8 == 1)
			{
				func_772(&(Local_278[iVar0 /*14*/]), 21, iLocal_598[iVar5], iVar10, 0);
			}
			else
			{
				if (iVar5 >= 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar5], 0))
					{
						Local_278[iVar0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_598[iVar5], 26, func_69(iVar9), iVar10, 1, 1);
					}
				}
				else
				{
					Local_278[iVar0 /*14*/] = PED::CREATE_PED(26, func_69(iVar9), Var1, fVar4, 1, 1);
				}
				switch (iVar8)
				{
					case 2:
						iVar11 = 2;
						iVar12 = 1;
						iVar13 = 0;
						iVar14 = 0;
						iVar15 = 1;
						iVar16 = 0;
						iVar17 = 0;
						iVar18 = 1;
						iVar19 = 0;
						break;
					
					case 3:
						iVar11 = 0;
						iVar12 = 2;
						iVar13 = 0;
						iVar14 = 1;
						iVar15 = 1;
						iVar16 = 1;
						iVar17 = 0;
						iVar18 = 0;
						iVar19 = 0;
						break;
					
					case 4:
						iVar11 = 1;
						iVar12 = 0;
						iVar13 = 2;
						iVar14 = 0;
						iVar15 = 0;
						iVar16 = 1;
						iVar17 = 2;
						iVar18 = 0;
						iVar19 = 0;
						break;
					
					case 5:
						iVar11 = 0;
						iVar12 = 1;
						iVar13 = 2;
						iVar14 = 1;
						iVar15 = 0;
						iVar16 = 0;
						iVar17 = 1;
						iVar18 = 1;
						iVar19 = 1;
						break;
					
					case 6:
						iVar11 = 2;
						iVar12 = 2;
						iVar13 = 0;
						iVar14 = 1;
						iVar15 = 2;
						iVar16 = 0;
						iVar17 = 2;
						iVar18 = 0;
						iVar19 = 0;
						break;
					
					case 7:
						iVar11 = 0;
						iVar12 = 0;
						iVar13 = 0;
						iVar14 = 1;
						iVar15 = 1;
						iVar16 = 1;
						iVar17 = 0;
						iVar18 = 1;
						iVar19 = 0;
						break;
					
					case 8:
						iVar11 = 1;
						iVar12 = 2;
						iVar13 = 0;
						iVar14 = 0;
						iVar15 = 2;
						iVar16 = 1;
						iVar17 = 0;
						iVar18 = 0;
						iVar19 = 0;
						break;
					
					case 9:
						iVar11 = 2;
						iVar12 = 1;
						iVar13 = 1;
						iVar14 = 0;
						iVar15 = 1;
						iVar16 = 0;
						iVar17 = 0;
						iVar18 = 0;
						iVar19 = 0;
						break;
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_278[iVar0 /*14*/], 0, 0, iVar11, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_278[iVar0 /*14*/], 2, iVar12, iVar13, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_278[iVar0 /*14*/], 3, iVar14, iVar15, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_278[iVar0 /*14*/], 4, iVar16, iVar17, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_278[iVar0 /*14*/], 8, iVar18, iVar19, 0);
				if (iLocal_928)
				{
					bVar20 = false;
					while (!bVar20)
					{
						if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_278[iVar0 /*14*/]))
							{
								bVar20 = true;
							}
						}
						else
						{
							bVar20 = true;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		iVar0++;
	}
	iLocal_548 = 0;
	bLocal_830 = false;
	bLocal_878 = false;
	bLocal_889 = false;
	iLocal_928 = 0;
	func_771();
	if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
	{
		GlobalFunc_173(&uLocal_1155, 4, Local_278[0 /*14*/], "CHENGSR", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_278[4 /*14*/]))
	{
		GlobalFunc_173(&uLocal_1155, 5, Local_278[4 /*14*/], "F3TRIAD1", 0, 1);
	}
	if (iParam0 == 0)
	{
		func_766(2, 0, 1);
		bLocal_866 = true;
	}
	else if (iParam0 == 3)
	{
		func_766(2, 1, 0);
		bLocal_866 = false;
	}
}

void func_766(int iParam0, bool bParam1, bool bParam2)//Position - 0x6EE89
{
	int iVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	switch (iParam0)
	{
		case 2:
		case 0:
		case 1:
			uLocal_1086 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1086, iLocal_598[0], 0);
			}
			if (iParam0 == 0)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1086, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1086, 0);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1086, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1086, 1);
			}
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = iVar0;
				bVar4 = true;
				if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
				{
					switch (iParam0)
					{
						case 2:
							uVar3 = func_35(8);
							switch (iVar1)
							{
								case 0:
									sVar2 = "IG8_PEDC";
									break;
								
								case 1:
									sVar2 = "IG8_PEDE";
									break;
								
								case 2:
									sVar2 = "IG8_PEDD";
									break;
								
								case 3:
									bVar4 = false;
									break;
								
								case 4:
									sVar2 = "IG8_PEDI";
									break;
								
								case 5:
									sVar2 = "IG8_PEDH";
									break;
								
								case 6:
									sVar2 = "IG8_PEDB";
									break;
								
								case 7:
									sVar2 = "IG8_PEDG";
									break;
								
								case 8:
									sVar2 = "IG8_PEDF";
									break;
								
								case 9:
									sVar2 = "IG8_PEDA";
									break;
							}
							break;
						
						case 0:
							switch (iVar1)
							{
								case 0:
									sVar2 = "IDLE_PEDC";
									break;
								
								case 1:
									sVar2 = "IDLE_PEDE";
									break;
								
								case 2:
									sVar2 = "IDLE_PEDD";
									break;
								
								case 3:
									bVar4 = false;
									break;
								
								case 4:
									sVar2 = "IDLE_PEDI";
									break;
								
								case 5:
									sVar2 = "IDLE_PEDH";
									break;
								
								case 6:
									sVar2 = "IDLE_PEDB";
									break;
								
								case 7:
									sVar2 = "IDLE_PEDG";
									break;
								
								case 8:
									sVar2 = "IDLE_PEDF";
									break;
								
								case 9:
									sVar2 = "IDLE_PEDA";
									break;
							}
							break;
						
						case 1:
							switch (iVar1)
							{
								case 0:
									sVar2 = "OUTRO_PEDC";
									break;
								
								case 1:
									sVar2 = "OUTRO_PEDE";
									break;
								
								case 2:
									sVar2 = "OUTRO_PEDD";
									break;
								
								case 3:
									bVar4 = false;
									break;
								
								case 4:
									sVar2 = "OUTRO_PEDI";
									break;
								
								case 5:
									sVar2 = "OUTRO_PEDH";
									break;
								
								case 6:
									sVar2 = "OUTRO_PEDB";
									break;
								
								case 7:
									sVar2 = "OUTRO_PEDG";
									break;
								
								case 8:
									sVar2 = "OUTRO_PEDF";
									break;
								
								case 9:
									sVar2 = "OUTRO_PEDA";
									break;
							}
							break;
					}
					if (bVar4)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_278[iVar0 /*14*/], 0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_278[iVar0 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_278[iVar0 /*14*/], 1), 1, 0, 0, 1);
						}
						if (bParam1)
						{
							fVar5 = 1000f;
						}
						else
						{
							fVar5 = 8f;
						}
						TASK::TASK_SYNCHRONIZED_SCENE(Local_278[iVar0 /*14*/], uLocal_1086, uVar3, sVar2, fVar5, -8f, 0, 0, 1148846080, 0);
						if (bParam1)
						{
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_278[iVar1 /*14*/], 0, 0);
						}
					}
				}
				iVar0++;
			}
			if (iParam0 == 2)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar6 = iVar0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar6], 0))
					{
						switch (iVar6)
						{
							case 0:
								sVar2 = "IG8_WASH";
								break;
							
							case 1:
								sVar2 = "IG8_CAVFRONT";
								break;
							
							case 2:
								sVar2 = "IG8_CAVREAR";
								break;
						}
						if (bParam1)
						{
							fVar7 = 0.78f;
						}
						else
						{
							fVar7 = 0.6f;
						}
						ENTITY::PLAY_ENTITY_ANIM(iLocal_598[iVar6], sVar2, func_35(8), 1000f, 0, 0, 0, fVar7, 0);
					}
					iVar0++;
				}
				func_770(1);
				if (bParam1)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086, 0.78f);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086, 0.6f);
				}
				if (bParam2)
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1086, 0f);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1086, 1f);
				}
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = iVar0;
				if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_278[iVar0 /*14*/], 1785177548) == 1)
					{
						func_769(iVar1);
					}
					iVar8 = func_768(iVar1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar8], 0))
					{
						switch (iVar1)
						{
							case 4:
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_278[iVar1 /*14*/], iLocal_598[iVar8], "finc24", iLocal_584, 7, 0, -1, -1082130432, 0, 1073741824);
								break;
							
							case 2:
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1153);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1153);
								TASK::TASK_PAUSE(0, 600);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_598[iVar8], "finc24", iLocal_584, 4, 0, -1, -1082130432, 0, 1073741824);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1153);
								TASK::TASK_PERFORM_SEQUENCE(Local_278[iVar1 /*14*/], uLocal_1153);
								break;
							
							case 7:
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_1153);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_1153);
								TASK::TASK_PAUSE(0, 1200);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_598[iVar8], "finc24", iLocal_584, 3, 16, -1, -1082130432, 0, 1073741824);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_1153);
								TASK::TASK_PERFORM_SEQUENCE(Local_278[iVar1 /*14*/], uLocal_1153);
								break;
							}
						}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar0], 0))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_598[iVar0], -1000f, 1);
					func_767(iLocal_598[iVar0]);
					func_639(iLocal_598[iVar0]);
				}
				iVar0++;
			}
			break;
		
		case 4:
			iVar9 = 524462;
			switch (iLocal_1146)
			{
				case 0:
					Local_1017 = { -3067.67f, 1369.19f, 19.34f };
					break;
				
				case 1:
					Local_1017 = { -2618.688f, 2860.724f, 15.70077f };
					break;
				
				case 2:
					Local_1017 = { -1842.835f, 4669.329f, 56.04228f };
					break;
				
				case 3:
					Local_1017 = { -197.4871f, 6170.601f, 30.2401f };
					break;
				
				case 4:
					Local_1017 = { 245.7f, 6558.601f, 30.3401f };
					break;
				
				case 5:
					Local_1017 = { 617.3871f, 6526.602f, 27.22127f };
					break;
				
				case 6:
					Local_1017 = { 1495.682f, 6433.737f, 21.45721f };
					break;
				
				case 7:
					Local_1017 = { 1968.075f, 6174.223f, 44.76606f };
					break;
				
				case 8:
					Local_1017 = { 2681.716f, 4805.892f, 43.58303f };
					break;
				
				case 9:
					Local_1017 = { 2883.118f, 3700.993f, 51.67475f };
					break;
				
				case 10:
					Local_1017 = { 1845.995f, 2950.111f, 44.75816f };
					break;
				
				case 11:
					Local_1017 = { 982.8629f, 2695.797f, 38.91315f };
					break;
				
				case 12:
					Local_1017 = { -494.1223f, 2847.707f, 32.80378f };
					break;
				
				case 13:
					Local_1017 = { -1818.585f, 2398.818f, 30.0306f };
					break;
				
				case 14:
					Local_1017 = { -2680.566f, 2289.689f, 19.73934f };
					break;
				
				case 15:
					Local_1017 = { -494.1223f, 2847.707f, 32.80378f };
					break;
			}
			iLocal_1146++;
			if (iLocal_1146 == 16)
			{
				iLocal_1146 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0) && !PED::IS_PED_INJURED(Local_278[4 /*14*/]))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Local_278[4 /*14*/], iLocal_598[1], Local_1017, 16f, iVar9, 10f);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0)) && !PED::IS_PED_INJURED(Local_278[2 /*14*/]))
			{
				TASK::TASK_VEHICLE_ESCORT(Local_278[2 /*14*/], iLocal_598[0], iLocal_598[1], -1, 24f, iVar9, 12f, 20, 1101004800);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[2], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0)) && !PED::IS_PED_INJURED(Local_278[7 /*14*/]))
			{
				TASK::TASK_VEHICLE_ESCORT(Local_278[7 /*14*/], iLocal_598[2], iLocal_598[1], -1, 24f, iVar9, 24f, 20, 1101004800);
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0) && !PED::IS_PED_INJURED(Local_278[2 /*14*/]))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_278[2 /*14*/], iLocal_598[0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, -1f, -1f, 1);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[2], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0)) && !PED::IS_PED_INJURED(Local_278[7 /*14*/]))
			{
				TASK::TASK_VEHICLE_MISSION(Local_278[7 /*14*/], iLocal_598[2], iLocal_598[0], 7, 35f, 786469, -1f, -1f, 1);
			}
			iLocal_1142 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_1130 = MISC::GET_GAME_TIMER();
			break;
		
		case 6:
			iLocal_1142 = MISC::GET_GAME_TIMER() + 10000;
			break;
	}
	iLocal_1105 = MISC::GET_GAME_TIMER();
	iLocal_548 = iParam0;
}

void func_767(int iParam0)//Position - 0x6F7CA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 1, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 0, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 2, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 3, 1, 0f);
	}
}

int func_768(int iParam0)//Position - 0x6F800
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
			break;
		
		case 4:
		case 5:
		case 6:
			return 1;
			break;
		
		case 7:
		case 8:
		case 9:
			return 2;
			break;
	}
	return 0;
}

void func_769(int iParam0)//Position - 0x6F861
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(Local_278[iParam0 /*14*/]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_278[iParam0 /*14*/], 0))
		{
			iVar0 = func_768(iParam0);
			switch (iParam0)
			{
				case 0:
					iVar1 = 1;
					break;
				
				case 1:
					iVar1 = 2;
					break;
				
				case 2:
					iVar1 = -1;
					break;
				
				case 3:
					iVar1 = 0;
					break;
				
				case 4:
					iVar1 = -1;
					break;
				
				case 5:
					iVar1 = 0;
					break;
				
				case 6:
					iVar1 = 1;
					break;
				
				case 7:
					iVar1 = -1;
					break;
				
				case 8:
					iVar1 = 0;
					break;
				
				case 9:
					iVar1 = 1;
					break;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar0], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_278[iParam0 /*14*/]);
				PED::SET_PED_INTO_VEHICLE(Local_278[iParam0 /*14*/], iLocal_598[iVar0], iVar1);
			}
		}
	}
}

void func_770(bool bParam0)//Position - 0x6F93D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
		{
			if (bParam0)
			{
				PED::SET_PED_MAX_HEALTH(Local_278[iVar0 /*14*/], 400);
				ENTITY::SET_ENTITY_HEALTH(Local_278[iVar0 /*14*/], 400);
			}
			else
			{
				PED::SET_PED_MAX_HEALTH(Local_278[iVar0 /*14*/], 200);
				ENTITY::SET_ENTITY_HEALTH(Local_278[iVar0 /*14*/], 200);
			}
		}
		iVar0++;
	}
}

void func_771()//Position - 0x6F9A5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
		{
			iVar1 = iVar0;
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278[iVar0 /*14*/], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_278[iVar0 /*14*/], 1);
			PED::SET_PED_KEEP_TASK(Local_278[iVar0 /*14*/], 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_278[iVar0 /*14*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_278[iVar0 /*14*/], iLocal_1320);
			PED::SET_PED_ACCURACY(Local_278[iVar0 /*14*/], 2);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_278[iVar0 /*14*/]);
			if (!Local_278[iVar0 /*14*/].f_11)
			{
				GlobalFunc_593(Local_278[iVar0 /*14*/], 0);
				Local_278[iVar0 /*14*/].f_11 = 1;
			}
			if (iVar1 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(Local_278[iVar0 /*14*/], 188, 1);
			}
			PED::SET_PED_CONFIG_FLAG(Local_278[iVar0 /*14*/], 42, 1);
			bVar2 = true;
			iVar3 = 0;
			bVar4 = false;
			switch (iVar1)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 5:
					iVar3 = 1;
					break;
				
				case 8:
					iVar3 = 1;
					break;
			}
			if (bVar2)
			{
				if (bVar4)
				{
					iVar5 = func_341(5);
				}
				else
				{
					iVar5 = func_341(2);
				}
				WEAPON::GIVE_WEAPON_TO_PED(Local_278[iVar0 /*14*/], iVar5, -1, iVar3, 1);
			}
		}
		iVar0++;
	}
}

int func_772(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6FACD
{
	int iVar0;
	
	if (!GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4946(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
				GlobalFunc_189(*iParam0, iParam1);
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

void func_773(int iParam0)//Position - 0x6FB4D
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	char* sVar17;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_602[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -181.9921f, -1514.293f, 32.21401f };
					fVar4 = -42.7f;
					iVar5 = 0;
					break;
				
				case 1:
					Var1 = { -219.4083f, -1491.944f, 30.24725f };
					fVar4 = -44.4f;
					iVar5 = 0;
					break;
				
				case 2:
					Var1 = { -181.9921f, -1514.293f, 32.21401f };
					fVar4 = -42.7f;
					iVar5 = 0;
					break;
			}
			iLocal_882[iVar0] = 0;
			iLocal_602[iVar0] = VEHICLE::CREATE_VEHICLE(func_69(13), Var1, fVar4, 1, 1);
			VEHICLE::_0xAB04325045427AAE(iLocal_602[iVar0], 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_602[iVar0]);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_602[iVar0], iVar5);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_602[iVar0], "FINALE_BALLA_CARS", 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
		{
			iVar6 = iVar0;
			if (iVar6 == 0)
			{
				GlobalFunc_7047(&(Local_137[iVar0 /*14*/]), 37, func_778(iVar6), func_777(iVar6), 0);
			}
			else
			{
				if (iVar6 < 8)
				{
					Local_137[iVar0 /*14*/] = PED::CREATE_PED(26, func_69(19), func_778(iVar6), func_777(iVar6), 1, 1);
				}
				else
				{
					switch (iVar6)
					{
						case 8:
							iVar7 = 0;
							iVar8 = -1;
							break;
						
						case 9:
							iVar7 = 0;
							iVar8 = 0;
							break;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_602[iVar7], 0))
					{
						Local_137[iVar0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_602[iVar7], 26, func_69(19), iVar8, 1, 1);
					}
				}
				if (iVar6 <= 3)
				{
					switch (iVar6)
					{
						case 1:
							iVar9 = 0;
							iVar10 = 2;
							iVar11 = 0;
							iVar12 = 0;
							iVar13 = 1;
							iVar14 = 0;
							iVar15 = 0;
							break;
						
						case 2:
							iVar9 = 1;
							iVar10 = 0;
							iVar11 = 1;
							iVar12 = 3;
							iVar13 = 0;
							iVar14 = 0;
							iVar15 = 0;
							break;
						
						case 3:
							iVar9 = 1;
							iVar10 = 1;
							iVar11 = 0;
							iVar12 = 1;
							iVar13 = 2;
							iVar14 = 0;
							iVar15 = 0;
							break;
					}
					PED::SET_PED_COMPONENT_VARIATION(Local_137[iVar0 /*14*/], 0, iVar9, iVar10, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_137[iVar0 /*14*/], 3, iVar11, iVar12, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_137[iVar0 /*14*/], 4, 0, iVar13, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_137[iVar0 /*14*/], 8, iVar14, iVar15, 0);
					PED::CLEAR_ALL_PED_PROPS(Local_137[iVar0 /*14*/]);
					switch (iVar6)
					{
						case 1:
							PED::SET_PED_PROP_INDEX(Local_137[iVar0 /*14*/], 0, 1, 0, false);
							break;
					}
					if (iLocal_927)
					{
						bVar16 = false;
						while (!bVar16)
						{
							if (!PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
							{
								if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_137[iVar0 /*14*/]))
								{
									bVar16 = true;
								}
							}
							else
							{
								bVar16 = true;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
			{
				if (iVar6 > 3 && iVar6 < 8)
				{
					switch (iVar6)
					{
						case 4:
							sVar17 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						
						case 5:
							sVar17 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						
						case 6:
							sVar17 = "WORLD_HUMAN_SMOKING";
							break;
						
						case 7:
							sVar17 = "WORLD_HUMAN_DRINKING";
							break;
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_137[iVar0 /*14*/], sVar17, -1, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_137[iVar0 /*14*/], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_137[iVar0 /*14*/], 1);
				PED::SET_PED_KEEP_TASK(Local_137[iVar0 /*14*/], 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_137[iVar0 /*14*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_137[iVar0 /*14*/], iLocal_1322);
				PED::SET_PED_CONFIG_FLAG(Local_137[iVar0 /*14*/], 42, 1);
				if ((iVar6 != 1 && iVar6 != 2) && iVar6 != 3)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_137[iVar0 /*14*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 41, 1);
				}
				if (iVar6 >= 8)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 3, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 7, 1);
				}
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_137[iVar0 /*14*/]);
				PED::SET_PED_ACCURACY(Local_137[iVar0 /*14*/], 1);
				GlobalFunc_593(Local_137[iVar0 /*14*/], 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_137[iVar0 /*14*/], func_341(1), -1, 0, 1);
				if (iVar6 == 0)
				{
					iLocal_624 = OBJECT::CREATE_OBJECT(func_69(23), 0f, 1f, 2f, 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_624, 100);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_624, Local_137[iVar0 /*14*/], PED::GET_PED_BONE_INDEX(Local_137[iVar0 /*14*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					PED::SET_PED_CONFIG_FLAG(Local_137[iVar0 /*14*/], 188, 1);
					iLocal_623 = OBJECT::CREATE_OBJECT(func_69(22), 0f, 1f, 2f, 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_623, 100);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_623, Local_137[iVar0 /*14*/], PED::GET_PED_BONE_INDEX(Local_137[iVar0 /*14*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				if (iVar6 == 0)
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_137[iVar0 /*14*/], "FINALE_STRETCH_GROUP", 0);
				}
				else
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_137[iVar0 /*14*/], "FINALE_ENEMY_BALLAS", 0);
				}
				Local_137[iVar0 /*14*/].f_10 = 0;
				Local_137[iVar0 /*14*/].f_11 = 0;
				Local_137[iVar0 /*14*/].f_12 = 0;
				Local_137[iVar0 /*14*/].f_13 = -1;
			}
		}
		iVar0++;
	}
	if (iParam0 == 2)
	{
		func_774(2, 1);
	}
	else
	{
		func_774(1, 1);
	}
	GlobalFunc_173(&uLocal_1155, 4, Local_137[3 /*14*/], "GANGBANGER2", 0, 1);
	GlobalFunc_173(&uLocal_1155, 6, Local_137[2 /*14*/], "TEAMMATE", 0, 1);
	GlobalFunc_173(&uLocal_1155, 7, Local_137[0 /*14*/], "STRETCH", 0, 1);
	bLocal_877 = false;
	iLocal_901 = 0;
	iLocal_1133 = -1;
	iLocal_927 = 0;
}

void func_774(int iParam0, bool bParam1)//Position - 0x700AE
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 0:
			uLocal_1088 = PED::CREATE_SYNCHRONIZED_SCENE(-203.056f, -1509.578f, 34.581f, 0f, 0f, -64.8f, 2);
			break;
		
		case 1:
		case 2:
			uLocal_1088 = PED::CREATE_SYNCHRONIZED_SCENE(-203.056f, -1509.578f, 30.615f, 0f, 0f, -64.8f, 2);
			break;
	}
	if (bParam1)
	{
		fVar1 = 1000f;
	}
	else
	{
		fVar1 = 8f;
	}
	if (iParam0 == 2)
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = 0;
	}
	if (iParam0 == 1)
	{
		fVar3 = 0f;
		iLocal_865 = 1;
	}
	else
	{
		fVar3 = 1f;
		iLocal_865 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar4 = iVar0;
		if (!PED::IS_PED_INJURED(Local_137[iVar4 /*14*/]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Local_137[iVar4 /*14*/], uLocal_1088, func_776(iVar4, iParam0), func_775(iVar4, iParam0), fVar1, -8f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1088, iVar2);
			PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1088, fVar3);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_137[iVar4 /*14*/], 0, 0);
			iLocal_1089[iVar4] = MISC::GET_GAME_TIMER();
			Local_137[iVar4 /*14*/].f_9 = iParam0;
		}
		iVar0++;
	}
}

char* func_775(int iParam0, int iParam1)//Position - 0x701D0
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MCS_2_B_Leadin_C";
					break;
				
				case 1:
					return "MCS_2_B_Leadin_A";
					break;
				
				case 2:
					return "MCS_2_B_Leadin_B";
					break;
				
				case 3:
					return "MCS_2_B_Leadin_D";
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return "Idle_PEDC";
					break;
				
				case 1:
					return "Idle_PEDA";
					break;
				
				case 2:
					return "Idle_PEDB";
					break;
				
				case 3:
					return "Idle_PEDD";
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return "MCS_2_B_TakeOut_Phone_PEDC";
					break;
				
				case 1:
					return "MCS_2_B_TakeOut_Phone_PEDA";
					break;
				
				case 2:
					return "MCS_2_B_TakeOut_Phone_PEDB";
					break;
				
				case 3:
					return "MCS_2_B_TakeOut_Phone_PEDD";
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return "Outro_quick_PEDC";
					break;
				
				case 1:
					return "react_left";
					break;
				
				case 2:
					return "react_front";
					break;
				
				case 3:
					return "react_right";
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 1:
					return "react_left_run_fwd";
					break;
				
				case 2:
					return "react_front_run_left";
					break;
				
				case 3:
					return "react_right_run_bwd";
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return "Outro_quick_PEDC";
					break;
				
				case 1:
					return "Outro_PEDA";
					break;
				
				case 2:
					return "Outro_PEDB";
					break;
				
				case 3:
					return "Outro_PEDD";
					break;
			}
			break;
	}
	return "error";
}

char* func_776(int iParam0, int iParam1)//Position - 0x703CA
{
	switch (iParam1)
	{
		case 2:
			return func_35(6);
			break;
		
		case 4:
			return func_35(6);
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				return func_35(6);
			}
			else
			{
				return func_35(10);
			}
			break;
		
		case 6:
			return func_35(11);
			break;
		
		case 1:
			return func_35(7);
			break;
	}
	return "error";
}

float func_777(int iParam0)//Position - 0x70445
{
	switch (iParam0)
	{
		case 0:
			return 40f;
			break;
		
		case 1:
			return 88f;
			break;
		
		case 2:
			return 60f;
			break;
		
		case 3:
			return -95f;
			break;
		
		case 4:
			return 18.4f;
			break;
		
		case 5:
			return -159.8f;
			break;
		
		case 6:
			return -81.2f;
			break;
		
		case 7:
			return -46.3f;
			break;
	}
	return 0f;
}

Vector3 func_778(int iParam0)//Position - 0x704DD
{
	switch (iParam0)
	{
		case 0:
			return -204.24f, -1508.53f, 30.61f;
			break;
		
		case 1:
			return -202.8f, -1508.26f, 30.61f;
			break;
		
		case 2:
			return -203.45f, -1508.76f, 30.61f;
			break;
		
		case 3:
			return -205.2f, -1508.67f, 30.61f;
			break;
		
		case 4:
			return -230.2913f, -1525.715f, 30.53708f;
			break;
		
		case 5:
			return -230.8654f, -1524.27f, 30.49504f;
			break;
		
		case 6:
			return -231.6811f, -1525.036f, 30.49134f;
			break;
		
		case 7:
			return -229.5782f, -1548.573f, 30.58296f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_779()//Position - 0x705C7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	
	func_835();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_774)
	{
		if (!iLocal_923)
		{
			if (iLocal_549 > 0)
			{
				GlobalFunc_2867("FINC2_STRETCH_SHOT");
				iLocal_923 = 1;
			}
		}
		if (MISC::GET_GAME_TIMER() < iLocal_1104)
		{
			PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
		}
		if (!iLocal_874)
		{
			if (iLocal_549 > 0)
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				iLocal_874 = 1;
			}
		}
		bVar1 = false;
		if (Local_137[0 /*14*/].f_9 < 5 && !bLocal_877)
		{
			if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[0 /*14*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[0 /*14*/], -1, 2048, 2);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
		{
			if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[0 /*14*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		else if (!iLocal_911)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			iLocal_911 = 1;
		}
		if (!Global_86806[0])
		{
			if (iLocal_129[0] == 2)
			{
				if (!iLocal_787[0])
				{
					if (iLocal_549 == 0 && !iLocal_863)
					{
						if (bLocal_862)
						{
							if (func_268("FINC1_MHR", 0, 0, 0))
							{
								iLocal_787[0] = 1;
							}
						}
					}
					else
					{
						iLocal_787[0] = 1;
					}
				}
				else if (!iLocal_783[0] && !iLocal_863)
				{
					iLocal_783[0] = func_237("FC2_KILLSTR", 1, 0);
				}
				bVar2 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar3 = iVar0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
					{
						if (PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
						{
							if (iVar3 == 0)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_639))
								{
									HUD::REMOVE_BLIP(&uLocal_639);
								}
								bVar2 = true;
							}
						}
						else if (iVar3 == 0)
						{
							bVar4 = GlobalFunc_81();
							if (func_235())
							{
								if (bVar4)
								{
									if (!bLocal_826 || !HUD::DOES_BLIP_EXIST(uLocal_639))
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_639))
										{
											HUD::REMOVE_BLIP(&uLocal_639);
										}
										func_833(1);
									}
								}
								else if (bLocal_826 || !HUD::DOES_BLIP_EXIST(uLocal_639))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_639))
									{
										HUD::REMOVE_BLIP(&uLocal_639);
									}
									func_833(0);
								}
							}
							bLocal_826 = bVar4;
							bVar5 = false;
							if (!bLocal_826)
							{
								fVar6 = 150f;
							}
							else
							{
								fVar6 = 300f;
							}
							GlobalFunc_2216(uLocal_639, Local_137[iVar0 /*14*/], fVar6, 1061158912, 0);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[iVar0 /*14*/], fVar6, fVar6, fVar6, 0, 0, 0))
							{
								bVar5 = true;
							}
							if (bVar5)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_639))
								{
									HUD::REMOVE_BLIP(&uLocal_639);
								}
								func_704(25);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[0 /*14*/], 35f, 35f, 35f, 0, 0, 0))
					{
						if (!bLocal_841)
						{
							if (iLocal_549 == 1)
							{
								bLocal_841 = true;
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_137[0 /*14*/], 1), 1) < 17f && Local_137[0 /*14*/].f_9 >= 2)
							{
								if (!iLocal_863)
								{
									GlobalFunc_4935();
									iLocal_863 = 1;
								}
								if (func_268("FINC1_MCOMB", 1, 0, 0))
								{
									iLocal_1101 = MISC::GET_GAME_TIMER();
									bLocal_841 = true;
								}
							}
						}
						if (iLocal_549 != 0)
						{
							if (!bLocal_842)
							{
								if (bLocal_841)
								{
									iLocal_783[0] = 1;
									bLocal_842 = func_268("FINC1_SGCOMB", 1, 0, 0);
								}
							}
							else
							{
								if (!iLocal_843)
								{
									if (!PED::IS_PED_INJURED(Local_137[2 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[2 /*14*/], 30f, 30f, 6f, 0, 1, 0))
										{
											iLocal_843 = func_268("FINC1_COWARD", 0, 0, 0);
										}
										else
										{
											iLocal_843 = 1;
										}
									}
									else
									{
										iLocal_843 = 1;
									}
								}
								else if (!bLocal_844)
								{
									if ((PED::IS_PED_INJURED(Local_137[1 /*14*/]) && PED::IS_PED_INJURED(Local_137[2 /*14*/])) && PED::IS_PED_INJURED(Local_137[3 /*14*/]))
									{
										bLocal_844 = func_268("FINC_MSTRET", 0, 0, 0);
										if (bLocal_844)
										{
											RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
										}
									}
									else
									{
										bLocal_844 = func_268("FINC1_DISL", 0, 0, 0);
									}
								}
								else if (!iLocal_845)
								{
									if (func_268("FINC1_SICOMB", 0, 0, 0))
									{
										iLocal_845 = 1;
										iLocal_1060 = MISC::GET_GAME_TIMER() + 12000;
									}
								}
								else
								{
									func_697("FINC1_SATT", 12000, 16000);
								}
								if (!iLocal_846)
								{
									if (Local_137[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_1121 + 12000)
									{
										if (func_268("FINC1_SORDER", 0, 0, 0))
										{
											iLocal_846 = 1;
											iLocal_1060 = MISC::GET_GAME_TIMER() + 7000;
										}
									}
								}
							}
						}
						else if (!bLocal_841)
						{
							if (!bLocal_862)
							{
								if (Local_137[0 /*14*/].f_9 >= 1)
								{
									bLocal_862 = func_268("FINC1_SPHINT", 0, 0, 0);
								}
							}
							else if (Local_137[0 /*14*/].f_9 == 2)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (iLocal_1102 < 3)
									{
										if (func_697("FINC1_LPHONE", -1, -1))
										{
											iLocal_1102++;
										}
									}
								}
								else if (iLocal_1103 < 4)
								{
									if (func_697("FINC1_IG6", -1, -1))
									{
										iLocal_1103++;
									}
								}
							}
						}
					}
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_137[0 /*14*/]))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_137[0 /*14*/], 0, 1))
						{
							GlobalFunc_553(272);
						}
					}
					if (func_235())
					{
						if (Global_86806[0] == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						}
						iLocal_1122 = MISC::GET_GAME_TIMER();
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						iLocal_48.f_18[0] = 1;
						func_40(5);
						func_31(13);
						fLocal_1038 = 230f;
						Global_86806[0] = 1;
					}
				}
			}
		}
		else
		{
			fLocal_1038 = (fLocal_1038 - (0.4f * SYSTEM::TIMESTEP()));
			if (fLocal_1038 < 0f)
			{
				fLocal_1038 = 0f;
			}
			if (!iLocal_795[0])
			{
				if (GlobalFunc_663("FC2_KILLSTR", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				if (!bLocal_875)
				{
					iLocal_795[0] = 1;
					func_40(13);
					func_40(14);
					iVar0 = 0;
					while (iVar0 < 10)
					{
						GlobalFunc_589(&(Local_137[iVar0 /*14*/].f_1));
						if (ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_137[iVar0 /*14*/]));
						}
						iVar0++;
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						GlobalFunc_2867("FINC2_STRETCH_DONE_FOOT");
					}
					else
					{
						GlobalFunc_2867("FINC2_STRETCH_DONE");
					}
					func_243();
				}
				else if (!bLocal_799[0])
				{
					if (bLocal_860)
					{
						bLocal_799[0] = func_237("FC2_ESCHOOD", 1, 0);
					}
				}
			}
			else
			{
				if (GlobalFunc_663("FC2_ESCHOOD", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_126.f_1 != 0)
				{
					if (GlobalFunc_663("LOSE_WANTED", 0, 0))
					{
						func_242(0, 1, 0, 0);
					}
					bLocal_821 = false;
					if (!bLocal_791[0])
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						bLocal_791[0] = func_268("FINC1_MDH", 0, 0, 0);
					}
					else if (!iLocal_811)
					{
						iLocal_811 = func_830();
					}
					else
					{
						if (!bLocal_812)
						{
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
							bLocal_812 = func_829();
						}
						else
						{
							if (!iLocal_816)
							{
								if (Local_126.f_1 == 0)
								{
									iLocal_816 = func_237(func_828(), 1, 0);
								}
								if (!iLocal_48.f_18[2])
								{
									if (iLocal_48.f_18[1])
									{
										func_827(2);
									}
								}
								else if (!iLocal_48.f_18[1])
								{
									func_827(1);
								}
							}
							if (func_825())
							{
								func_782();
							}
						}
						if (iLocal_48.f_18[2])
						{
							if (func_781())
							{
								func_827(2);
								GlobalFunc_2511(&iLocal_48, 2, 0, 1);
								iLocal_48.f_18[2] = 0;
							}
						}
					}
				}
				else
				{
					if (!bLocal_821)
					{
						bLocal_821 = func_237("LOSE_WANTED", 1, 0);
						MISC::ENABLE_DISPATCH_SERVICE(1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(7, 1);
						PED::SET_CREATE_RANDOM_COPS(1);
					}
					iLocal_816 = 0;
				}
			}
		}
		if (func_235())
		{
			if (iLocal_938 == 0)
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
				iLocal_938 = 1;
			}
			bVar7 = false;
			if (Local_126.f_1 == 0)
			{
				if (GlobalFunc_8315() == 1)
				{
					func_273(0, 0, 1, 1, 0, 1, 0, 1);
					bVar7 = true;
				}
				else if (GlobalFunc_8315() == 2)
				{
					if (Global_86806[2])
					{
						func_273(4, 0, 1, 1, 0, 1, 1, 1);
						bVar7 = true;
					}
					else
					{
						func_273(0, 0, 1, 1, 0, 1, 0, 1);
						bVar7 = true;
					}
				}
				if (bVar7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						func_75(0, 0);
						func_365(iLocal_48[0], 1);
						PED::DELETE_PED(&(iLocal_48[0]));
						GlobalFunc_173(&uLocal_1155, 0, 0, "MICHAEL", 0, 1);
					}
					func_264(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_593[2]));
					}
					func_264(4);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_629))
	{
		HUD::REMOVE_BLIP(&uLocal_629);
	}
}


int func_781()//Position - 0x70E9E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!Global_86806[iVar1])
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_782()//Position - 0x70ECC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	var uVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	struct<3> Var20;
	int iVar23;
	int iVar24;
	bool bVar25;
	float fVar26;
	bool bVar27;
	bool bVar28;
	
	switch (Local_126.f_1)
	{
		case 0:
			if (!bLocal_822)
			{
				if (GlobalFunc_10061(&iLocal_48, 0, 1))
				{
					if (iLocal_42 < 4 || iLocal_550 == 2)
					{
						iLocal_44 = 0;
						Local_126 = iLocal_48.f_7;
						Local_126.f_1 = 1;
						iVar0 = GlobalFunc_584(Local_126);
						iVar0 = iVar0;
						GlobalFunc_565(269, 1, 0);
						if (iLocal_46 >= 1)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							iLocal_46 = 0;
						}
						iLocal_836 = 0;
						bLocal_835 = false;
						bLocal_834 = false;
						bLocal_899 = false;
						iLocal_900 = 0;
						Local_92.f_19 = 0;
						iVar1 = func_349(GlobalFunc_8315());
						iVar3 = -1;
						fVar4 = 9999999f;
						Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, func_810(GlobalFunc_8315(), iVar2), 0);
							if (fVar8 < fVar4 && fVar8 < 1000f)
							{
								fVar4 = fVar8;
								iVar3 = iVar2;
							}
							iVar2++;
						}
						if (iVar3 >= 0)
						{
							iLocal_1111[GlobalFunc_8315()] = iVar3;
						}
						else
						{
							iLocal_807[GlobalFunc_8315()] = 1;
							Local_997[GlobalFunc_8315() /*3*/] = { Var5 };
							fLocal_1046[GlobalFunc_8315()] = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						}
						iLocal_1152 = MISC::GET_GAME_TIMER();
						Local_126.f_1 = 1;
						if (((iLocal_42 == 0 || iLocal_42 == 1) || iLocal_42 == 3) || iLocal_42 == 2)
						{
							func_808(GlobalFunc_8315(), 1099956224, 0, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_900)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(iLocal_48[Local_126]))
					{
						if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_48[Local_126]) || MISC::GET_GAME_TIMER() >= iLocal_1152 + 10000)
						{
							STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
							iLocal_900 = 1;
						}
					}
					else
					{
						iLocal_900 = 1;
					}
				}
			}
			if (!bLocal_835)
			{
				bVar9 = true;
				if (bVar9)
				{
					if (!PED::IS_PED_INJURED(iLocal_48[Local_126]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_48[Local_126]);
						iVar10 = iLocal_593[func_807(GlobalFunc_584(Local_126))];
						Var11 = { Var11 };
						uVar14 = uVar14;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
						{
							Local_974 = { ENTITY::GET_ENTITY_COORDS(iVar10, 1) };
							fLocal_1040 = ENTITY::GET_ENTITY_HEADING(iVar10);
						}
						if (Global_86806[2] && GlobalFunc_584(Local_126) == 2)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_267(9), 0) > 300f)
							{
								Local_974 = { func_267(9) };
								fLocal_1040 = -24.33f;
							}
							else
							{
								Local_974 = { -2066.36f, 2011.39f, 190.49f };
								fLocal_1040 = 104.63f;
							}
						}
						else if (!iLocal_807[Local_126])
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_810(GlobalFunc_584(Local_126), iLocal_1111[GlobalFunc_584(Local_126)]), 0) > 400f)
							{
							}
							else
							{
								iVar15 = -1;
								fVar16 = 1E+08f;
								iVar17 = func_349(GlobalFunc_584(Local_126));
								iVar18 = 0;
								while (iVar18 < iVar17)
								{
									if (iVar18 != iLocal_1111[GlobalFunc_584(Local_126)])
									{
										fVar19 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_810(GlobalFunc_584(Local_126), iLocal_1111[GlobalFunc_584(Local_126)]), func_810(GlobalFunc_584(Local_126), iVar18), 0);
										if (iVar18 < iLocal_1111[GlobalFunc_584(Local_126)])
										{
											fVar19 = (fVar19 + 2000f);
										}
										if (fVar19 < fVar16)
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_810(GlobalFunc_584(Local_126), iVar18), 0) > 400f)
											{
												fVar16 = fVar19;
												iVar15 = iVar18;
											}
										}
									}
									iVar18++;
								}
								if (iVar15 >= 0)
								{
									iLocal_1111[GlobalFunc_584(Local_126)] = iVar15;
								}
							}
							Local_974 = { func_810(GlobalFunc_584(Local_126), iLocal_1111[GlobalFunc_584(Local_126)]) };
							fLocal_1040 = func_806(GlobalFunc_584(Local_126), iLocal_1111[GlobalFunc_584(Local_126)]);
						}
						else
						{
							Local_974 = { Local_997[Local_126 /*3*/] };
							fLocal_1040 = fLocal_1046[Local_126];
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_48[Local_126], iVar10, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_48[Local_126], iVar10, -1);
							}
							VEHICLE::_0x88BC673CA9E0AE99(iVar10, 1);
							ENTITY::SET_ENTITY_COORDS(iVar10, Local_974, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar10, fLocal_1040);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar10);
							ENTITY::FREEZE_ENTITY_POSITION(iVar10, 1);
							ENTITY::SET_ENTITY_VISIBLE(iVar10, 0);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_48[Local_126], 0);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1007[GlobalFunc_584(Local_126) /*3*/], 0) > 400f)
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_48[Local_126], Local_1007[GlobalFunc_584(Local_126) /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_48[Local_126], fLocal_1050[GlobalFunc_584(Local_126)]);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_48[Local_126], Local_974, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_48[Local_126], fLocal_1040);
						}
					}
				}
				bLocal_835 = true;
			}
			if (!iLocal_836)
			{
				if (Local_92.f_19)
				{
					if (!PED::IS_PED_INJURED(iLocal_48[iLocal_48.f_5]))
					{
						Local_1007[GlobalFunc_584(iLocal_48.f_5) /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_48[iLocal_48.f_5], 1) };
						fLocal_1050[GlobalFunc_584(iLocal_48.f_5)] = ENTITY::GET_ENTITY_HEADING(iLocal_48[iLocal_48.f_5]);
						if (iLocal_48.f_5 == 2 && Global_86806[2])
						{
							Local_1007[2 /*3*/] = { -2601.99f, 1685.07f, 140.71f };
							fLocal_1050[2] = 5.86f;
						}
						Var20 = { func_521(GlobalFunc_584(iLocal_48.f_5)) };
						iVar23 = iLocal_593[func_807(GlobalFunc_584(iLocal_48.f_5))];
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar23, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_48[iLocal_48.f_5], iVar23, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_48[iLocal_48.f_5], iVar23, -1);
							}
							ENTITY::SET_ENTITY_COORDS(iVar23, Var20, 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iVar23, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_48[iLocal_48.f_5], Var20, 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_48[iLocal_48.f_5], 1);
						}
					}
					func_243();
					iLocal_836 = 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar24 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (!bLocal_834 || !bLocal_899)
			{
				if (Local_92.f_19)
				{
					bVar25 = false;
					if (bLocal_835)
					{
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_900)
						{
							if ((STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0 && !bLocal_834) || STREAMING::GET_PLAYER_SWITCH_STATE() >= 9)
							{
								if (bLocal_834)
								{
									bLocal_899 = true;
								}
								bVar25 = true;
							}
						}
					}
					if (bVar25)
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
						if (!ENTITY::IS_ENTITY_DEAD(iVar24))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar24, 1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
						{
							if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar24))
							{
								bVar27 = false;
								fVar26 = 18f;
								if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									if (!bLocal_899 || !ENTITY::IS_ENTITY_AT_COORD(iVar24, Local_974, 10f, 10f, 10f, 0, 1, 0))
									{
										bVar27 = true;
										fVar26 = 8f;
									}
								}
								func_808(GlobalFunc_8315(), fVar26, bVar27, 1);
							}
						}
						else if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_1007[GlobalFunc_8315() /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1050[GlobalFunc_8315()]);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						bLocal_834 = true;
					}
				}
			}
			if (bLocal_834)
			{
				if (Local_92.f_19)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
					{
						if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar24))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar24, 12f);
						}
					}
				}
			}
			if (((iLocal_42 == 0 || iLocal_42 == 1) || iLocal_42 == 3) || iLocal_42 == 2)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
			}
			bVar28 = false;
			bVar28 = func_783(Local_126, 0, 0, 1);
			if (bVar28)
			{
				iVar24 = iLocal_593[func_807(GlobalFunc_8315())];
				if (!iLocal_803[GlobalFunc_8315()])
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(func_523(GlobalFunc_8315()), func_522(GlobalFunc_8315()));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
				{
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar24, 3);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar24, 2);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar24, 1);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar24, 0);
					VEHICLE::_0x88BC673CA9E0AE99(iVar24, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iVar24, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar24))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar24);
					}
				}
				iLocal_807[GlobalFunc_8315()] = 0;
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_243();
				iLocal_816 = 0;
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				Local_126.f_1 = 0;
				if (GlobalFunc_8315() == 1)
				{
					iLocal_1144 = MISC::GET_GAME_TIMER() + 5000;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
			}
			break;
	}
}

int func_783(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x7172F
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	
	switch (iLocal_44)
	{
		case 0:
			func_242(0, 1, 1, 0);
			if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_48.f_39 = 1;
			iLocal_48.f_7 = iParam0;
			Local_92.f_12 = iLocal_48[iParam0];
			Local_92.f_18 = 0;
			Local_92.f_19 = 0;
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
			iLocal_44 = 1;
			break;
		
		case 1:
			if (!bParam1)
			{
				switch (iParam2)
				{
					case 0:
						bVar1 = func_799(&Local_92, 0, 512, 1148829696, 1148829696, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						fVar2 = 0f;
						bVar1 = func_784(&Local_92, 0f, fVar2, iVar0, -1, 0, 800);
						break;
				}
				if (bVar1)
				{
					if (Local_92.f_18)
					{
						if (!Local_92.f_19)
						{
							if (GlobalFunc_10991(&iLocal_48, 1, 1, 1))
							{
								func_351(0);
								iLocal_853 = 0;
								iLocal_852 = 0;
								Local_92.f_19 = 1;
							}
						}
					}
				}
				else if (GlobalFunc_8315() == GlobalFunc_584(iParam0))
				{
					iVar3 = 0;
					while (iVar3 < Local_92)
					{
						if (CAM::DOES_CAM_EXIST(Local_92[iVar3]))
						{
							CAM::DESTROY_CAM(Local_92[iVar3], 0);
						}
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 20)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_651[iVar3]))
						{
							CAM::DESTROY_CAM(uLocal_651[iVar3], 0);
						}
						iVar3++;
					}
					iLocal_1056 = 0;
					if (CAM::DOES_CAM_EXIST(Local_92.f_9))
					{
						CAM::DESTROY_CAM(Local_92.f_9, 0);
					}
					func_351(1);
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
					iLocal_44 = 2;
					return 1;
				}
			}
			else if (GlobalFunc_10991(&iLocal_48, 1, bParam3, 0))
			{
				Local_92.f_19 = 1;
				func_351(1);
				iLocal_44 = 2;
				AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_784(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x718DB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	bool bVar27;
	float fVar28;
	int iVar29;
	struct<3> Var30;
	struct<3> Var33;
	
	if (!uParam0->f_15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			uParam0->f_27 = 0;
			Var19 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1) };
			Var22 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar25 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 0);
			fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 1);
			if (iParam3 == 0)
			{
				if (fVar26 < 8f)
				{
					uParam0->f_14 = 1;
				}
				else if (fVar25 < 30f)
				{
					uParam0->f_14 = 2;
				}
				else
				{
					uParam0->f_14 = 3;
				}
			}
			else
			{
				uParam0->f_14 = iParam3;
			}
			if (!CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			}
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
			switch (uParam0->f_14)
			{
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iParam6, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iParam6);
					uParam0->f_15 = 1;
					break;
				
				case 2:
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567((Var22.f_2 + 5f), (Var19.f_2 + fVar25));
					}
					else
					{
						fVar4 = GlobalFunc_567((Var19.f_2 + 5f), (Var22.f_2 + fVar25));
					}
					fVar3 = 10f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					iVar2 = SYSTEM::ROUND(((fVar26 / ((30f - 7.5f) / (800f - 200f))) + 500f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
				
				case 3:
					fVar4 = 450f;
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567(fVar4, (Var22.f_2 + 25f));
					}
					else
					{
						fVar4 = GlobalFunc_567(fVar4, (Var19.f_2 + 25f));
					}
					fVar3 = 20f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					fVar26 = GlobalFunc_253(fVar26, 50f, 4000f);
					iVar2 = SYSTEM::ROUND(((fVar26 / ((4000f - 50f) / (2000f - 1000f))) + 1000f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
			}
			else if (PED::IS_PED_INJURED(uParam0->f_12))
			{
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (uParam0->f_24 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (uParam0->f_24 - 1))
					{
						CAM::SET_CAM_ACTIVE((*uParam0)[iVar1], 1);
						iVar1++;
					}
				}
				GlobalFunc_8031(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
				if (iParam5 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				}
				else if (iParam5 > 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, true, iParam5, 1, 0, 0);
				}
				if (!Global_17098.f_111)
				{
					if (uParam0->f_14 == 3)
					{
						AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
						AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
						{
						}
					}
					else if (uParam0->f_14 == 2)
					{
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
				}
				uParam0->f_28 = GlobalFunc_2349(uParam0->f_9);
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
				}
				else
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
				}
				GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9));
			bVar27 = true;
			if (uParam0->f_24 > 0)
			{
				iVar1 = 0;
				while (iVar1 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
					{
						bVar27 = false;
					}
					iVar1++;
				}
			}
			if (bVar27)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (!Global_17098.f_111)
					{
						if (uParam0->f_14 == 3)
						{
							fVar28 = GlobalFunc_2349(uParam0->f_9);
							if (fVar28 > uParam0->f_28)
							{
								uParam0->f_28 = fVar28;
							}
							else if (uParam0->f_28 > (fVar28 + 1f))
							{
								if (Global_17098.f_107 == -1)
								{
									Global_17098.f_107 = AUDIO::GET_SOUND_ID();
									Global_17098.f_108 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
									AUDIO::PLAY_SOUND(Global_17098.f_107, "CHARACTER_CHANGE_DOWN_MASTER", 0, 0, 0, 1);
								}
								if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
								{
									AUDIO::STOP_SOUND(Global_17098.f_109);
									AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
									Global_17098.f_109 = -1;
									Global_17098.f_110 = 0;
									AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
								}
							}
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
					if (uParam0->f_18)
					{
						if (PLAYER::PLAYER_PED_ID() == uParam0->f_12)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_12))
							{
								if (uParam0->f_24 >= 1)
								{
									if (CAM::DOES_CAM_EXIST((*uParam0)[(uParam0->f_24 - 1)]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
										{
											iVar29 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
											Var30 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar29, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], iVar29, Var30, 1);
										}
										else
										{
											Var33 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_12, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], uParam0->f_12, Var33, 1);
										}
										CAM::SET_CAM_ROT((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
										CAM::SET_CAM_FOV((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_FOV());
										bVar0 = true;
									}
								}
							}
						}
					}
				}
				else if (!uParam0->f_18)
				{
					uParam0->f_18 = 1;
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			CAM::DESTROY_CAM(uParam0->f_9, 0);
		}
		if (uParam0->f_24 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
		}
		GlobalFunc_7632(uParam0->f_21);
		uParam0->f_15 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam2 <= 360f && fParam2 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
		}
		if (fParam1 <= 360f && fParam1 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (iParam4 == -1)
		{
			if (bVar0)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 100, 1, 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 1000, 1, 0, 0);
			}
		}
		else if (iParam4 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam4, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
		}
		GlobalFunc_749(0);
		if (!PED::IS_PED_INJURED(uParam0->f_13))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_12))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
		}
		GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		GlobalFunc_748(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}















int func_799(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x72F9F
{
	return func_800(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_800(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)//Position - 0x72FC6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(uParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_8031(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_8031(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_8031(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}






float func_806(int iParam0, int iParam1)//Position - 0x736F2
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 85.06f;
					break;
				
				case 1:
					return 46.3f;
					break;
				
				case 2:
					return 108.41f;
					break;
				
				case 3:
					return 64.5f;
					break;
				
				case 4:
					return -3.34f;
					break;
				
				case 5:
					return 27.76f;
					break;
				
				case 6:
					return 131.12f;
					break;
				
				case 7:
					return 36.14f;
					break;
				
				case 8:
					return func_636(iParam0);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return -9.81f;
					break;
				
				case 1:
					return 77.7f;
					break;
				
				case 2:
					return 83.3f;
					break;
				
				case 3:
					return 89.4f;
					break;
				
				case 4:
					return 65.5f;
					break;
				
				case 5:
					return 89.66f;
					break;
				
				case 6:
					return 87.87f;
					break;
				
				case 7:
					return 126.3f;
					break;
				
				case 8:
					return 47.89f;
					break;
				
				case 9:
					return 53.76f;
					break;
				
				case 10:
					return func_636(iParam0);
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 85.6f;
					break;
				
				case 1:
					return 42.76f;
					break;
				
				case 2:
					return func_636(iParam0);
					break;
			}
			break;
	}
	return func_636(iParam0);
}

int func_807(int iParam0)//Position - 0x738C1
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 2;
}

void func_808(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x738F8
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar0 = iLocal_593[func_807(iParam0)];
	Var1 = { func_809(iParam0) };
	if (iLocal_551[iParam0] != 1 || (Global_86806[2] && iParam0 == 2))
	{
		switch (iParam0)
		{
			case 0:
				iVar4 = func_229();
				break;
			
			case 1:
				iVar4 = func_227();
				break;
			
			case 2:
				iVar4 = func_228();
				break;
		}
		if (!PED::IS_PED_INJURED(iVar4) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar0);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(iVar4, Var1, 10f, 10f, 10f, 0, 0, 0) && (iLocal_551[iParam0] != 1 || (Global_86806[2] && iParam0 == 2)))
			{
				if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar0) || bParam2)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
					if (bParam2)
					{
						MISC::CLEAR_AREA(Local_974, 5f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_974, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_1040);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						fLocal_1040 = fLocal_1040;
					}
					if (!bParam3)
					{
					}
					TASK::TASK_VEHICLE_MISSION(iVar4, iVar0, 0, 1, fParam1, 786469, -1f, -1f, 1);
					if (bParam2)
					{
						if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1)))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 12f);
						}
					}
				}
			}
		}
	}
}

Vector3 func_809(int iParam0)//Position - 0x73A5E
{
	switch (iParam0)
	{
		case 0:
			return func_267(10);
			break;
		
		case 1:
			return func_267(15);
			break;
		
		case 2:
			if (!Global_86806[2])
			{
				return func_267(14);
			}
			else
			{
				return func_267(16);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_810(int iParam0, int iParam1)//Position - 0x73ABD
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 572.77f, -2041.91f, 28.29f;
					break;
				
				case 1:
					return 306.81f, -2130.84f, 13.98f;
					break;
				
				case 2:
					return -42.09f, -2043.54f, 19.06f;
					break;
				
				case 3:
					return -378.47f, -2076.81f, 24.75f;
					break;
				
				case 4:
					return -649.18f, -1472.77f, 9.62f;
					break;
				
				case 5:
					return -788.8f, -1074.18f, 10.28f;
					break;
				
				case 6:
					return -1123.68f, -792.15f, 16.45f;
					break;
				
				case 7:
					return -1296.71f, -880.73f, 10.7f;
					break;
				
				case 8:
					return func_637(iParam0);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 943.9f, -1977.8f, 28.73f;
					break;
				
				case 1:
					return 940.13f, -1754.73f, 29.66f;
					break;
				
				case 2:
					return 717.67f, -1428.46f, 29.99f;
					break;
				
				case 3:
					return 300.89f, -1294.41f, 29f;
					break;
				
				case 4:
					return 156.9f, -1012.33f, 27.89f;
					break;
				
				case 5:
					return -540.68f, -829.72f, 27.52f;
					break;
				
				case 6:
					return -888.03f, -828.43f, 16.87f;
					break;
				
				case 7:
					return -1264.5f, -618.77f, 25.58f;
					break;
				
				case 8:
					return -1571.62f, -637.31f, 28.35f;
					break;
				
				case 9:
					return -1829.25f, -503.28f, 27.06f;
					break;
				
				case 10:
					return func_637(iParam0);
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 612.07f, -2039.58f, 27.89f;
					break;
				
				case 1:
					return 455.97f, -2013.61f, 22.22f;
					break;
				
				case 2:
					return func_637(iParam0);
					break;
			}
			break;
	}
	return func_637(iParam0);
}















int func_825()//Position - 0x752C2
{
	if ((func_826() < 2 || iLocal_48.f_18[GlobalFunc_237(GlobalFunc_8315())]) || Local_126.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_826()//Position - 0x752F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iLocal_48.f_18[iVar1])
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_827(int iParam0)//Position - 0x75328
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (iVar1 == iParam0)
		{
			GlobalFunc_2518(&iLocal_48, iVar1, 1);
		}
		else
		{
			GlobalFunc_2518(&iLocal_48, iVar1, 0);
		}
		iVar0++;
	}
}

char* func_828()//Position - 0x75362
{
	switch (GlobalFunc_8315())
	{
		case 0:
			if (!iLocal_48.f_18[2])
			{
				if (!iLocal_48.f_18[1])
				{
					return "FC2_SWTF";
				}
				else
				{
					return "FC2_SWT";
				}
			}
			else if (!iLocal_48.f_18[1])
			{
				return "FC2_SWF";
			}
			break;
		
		case 1:
			if (!iLocal_48.f_18[2])
			{
				if (!iLocal_48.f_18[0])
				{
					return "FC2_SWMT";
				}
				else
				{
					return "FC2_SWT";
				}
			}
			else if (!iLocal_48.f_18[0])
			{
				return "FC2_SWM";
			}
			break;
		
		case 2:
			if (!iLocal_48.f_18[0])
			{
				if (!iLocal_48.f_18[1])
				{
					return "FC2_SWMF";
				}
				else
				{
					return "FC2_SWM";
				}
			}
			else if (!iLocal_48.f_18[1])
			{
				return "FC2_SWF";
			}
			break;
	}
	return "BADSTRING";
}

bool func_829()//Position - 0x75450
{
	char* sVar0;
	
	if (!func_781())
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				if (!iLocal_48.f_18[2])
				{
					if (!iLocal_48.f_18[1])
					{
						sVar0 = "FINC1_NFT";
					}
					else
					{
						sVar0 = "FINC1_NT";
					}
				}
				else if (!iLocal_48.f_18[1])
				{
					sVar0 = "FINC1_NF";
				}
				break;
			
			case 1:
				if (!iLocal_48.f_18[2])
				{
					if (!iLocal_48.f_18[0])
					{
						sVar0 = "FINC1_NTM";
					}
					else
					{
						sVar0 = "FINC1_NT";
					}
				}
				else if (!iLocal_48.f_18[0])
				{
					sVar0 = "FINC1_NM";
				}
				break;
			
			case 2:
				if (!iLocal_48.f_18[0])
				{
					if (!iLocal_48.f_18[1])
					{
						sVar0 = "FINC1_NFM";
					}
					else
					{
						sVar0 = "FINC1_NM";
					}
				}
				else if (!iLocal_48.f_18[1])
				{
					sVar0 = "FINC1_NF";
				}
				break;
		}
	}
	else
	{
		sVar0 = "FINC1_ND";
	}
	return func_268(sVar0, 0, 0, 0);
}

int func_830()//Position - 0x7554B
{
	char* sVar0;
	
	switch (GlobalFunc_8315())
	{
		case 0:
			if (func_781())
			{
				sVar0 = "FINC1_WF";
			}
			else if (!iLocal_48.f_18[2])
			{
				sVar0 = "FINC1_WF";
			}
			else
			{
				sVar0 = "FINC1_WT";
			}
			break;
		
		case 1:
			if (func_781())
			{
				sVar0 = "FINC1_WM";
			}
			else if (!iLocal_48.f_18[2])
			{
				if (!iLocal_48.f_18[0])
				{
					sVar0 = "FINC1_WT";
				}
				else
				{
					sVar0 = "FINC1_WM";
				}
			}
			else
			{
				sVar0 = "FINC1_WT";
			}
			break;
		
		case 2:
			if (!iLocal_48.f_18[0])
			{
				sVar0 = "FINC1_WF";
			}
			else
			{
				sVar0 = "FINC1_WM";
			}
			break;
	}
	return func_268(sVar0, 0, 0, 0);
}



void func_833(bool bParam0)//Position - 0x757D5
{
	if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
	{
		if (bParam0)
		{
		}
		else
		{
			uLocal_639 = func_702(Local_137[0 /*14*/], 1);
		}
	}
}


void func_835()//Position - 0x75808
{
	func_721(iLocal_42 == 0);
	func_859();
	func_855();
	if (!iLocal_774)
	{
		func_854();
		func_853();
		func_850();
		func_840();
		if (iLocal_42 < 4)
		{
			func_836();
		}
	}
}

void func_836()//Position - 0x75841
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	if (MISC::GET_GAME_TIMER() >= iLocal_1100)
	{
		if (Local_126.f_1 == 0)
		{
			Var0 = { Var0 };
			fVar3 = fVar3;
			iVar4 = 0;
			while (iVar4 < 3)
			{
				iVar5 = iVar4;
				iVar6 = GlobalFunc_237(iVar5);
				iVar8 = func_807(iVar5);
				switch (iVar5)
				{
					case 1:
						iVar7 = func_227();
						break;
					
					case 0:
						iVar7 = func_229();
						break;
					
					case 2:
						iVar7 = func_228();
						break;
				}
				if (!PED::IS_PED_INJURED(iVar7))
				{
					iVar9 = func_839(iVar5);
					bVar10 = true;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
					{
						iVar11 = ENTITY::GET_ENTITY_MODEL(iVar9);
						if ((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar11) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar11)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar11))
						{
							if (iVar9 != iLocal_593[iVar8])
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[iVar8]))
								{
									if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_593[iVar8]))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_593[iVar8]));
									}
								}
							}
							iLocal_593[iVar8] = iVar9;
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_593[iVar8]))
							{
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_593[iVar8], 1);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_593[iVar8], 1, 1);
							}
						}
						else
						{
							bVar10 = false;
						}
					}
					else
					{
						bVar10 = false;
					}
					if (iVar5 == GlobalFunc_8315())
					{
						bVar10 = false;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_593[iVar8]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_593[iVar8], bVar10);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_593[iVar8], !bVar10);
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_593[iVar8])))
						{
							VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_593[iVar8], !bVar10);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[iVar8]))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_593[iVar8]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_593[iVar8]));
						}
					}
				}
				if (iVar5 != GlobalFunc_8315() && !PED::IS_PED_INJURED(iLocal_48[iVar6]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[iVar8], 0))
					{
						switch (iLocal_551[iVar5])
						{
							case 0:
								if (MISC::GET_GAME_TIMER() >= uLocal_1107[iVar5])
								{
									if (!iLocal_807[iVar5])
									{
										iVar12 = func_349(iVar5);
										iLocal_1111[iVar5]++;
										if (iLocal_1111[iVar5] >= iVar12)
										{
											iLocal_1111[iVar5] = (iVar12 - 1);
										}
										uLocal_1107[iVar5] = MISC::GET_GAME_TIMER() + 15000;
									}
									else
									{
										Var13 = { func_810(iVar5, iLocal_1111[iVar5]) };
										Var16 = { Var13 - Local_997[iVar5 /*3*/] };
										fVar19 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_997[iVar5 /*3*/], Var13, 1);
										fVar20 = (fLocal_1042[iVar5] / fVar19);
										Var21 = { Var16 * Vector(fVar20, fVar20, fVar20) };
										Var24 = { Local_997[iVar5 /*3*/] + Var21 };
										if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var24, &Var0, &fVar3, 12, 1077936128, 0))
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var13, 1) < 1000f)
											{
												iLocal_807[iVar5] = 0;
											}
											else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_997[iVar5 /*3*/], 1) >= 15f)
											{
												fLocal_1042[iVar5] = 50f;
												fVar27 = GlobalFunc_830(Var0, Var13);
												if (!func_837(fVar3, fVar27, 1119092736))
												{
													fVar3 = (fVar3 + 180f);
												}
												Local_997[iVar5 /*3*/] = { Var0 };
												fLocal_1046[iVar5] = fVar3;
											}
											else
											{
												fLocal_1042[iVar5] = (fLocal_1042[iVar5] + 50f);
											}
										}
										else
										{
											fLocal_1042[iVar5] = (fLocal_1042[iVar5] + 50f);
										}
										uLocal_1107[iVar5] = MISC::GET_GAME_TIMER() + 3000;
									}
								}
								break;
							}
						}
				}
				iVar4++;
			}
		}
		iLocal_1100 = MISC::GET_GAME_TIMER() + 400;
	}
}

int func_837(float fParam0, float fParam1, float fParam2)//Position - 0x75BD9
{
	float fVar0;
	
	fVar0 = (fParam0 - fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	if (fVar0 <= fParam2 || fVar0 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}


int func_839(int iParam0)//Position - 0x75C2D
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = func_229();
			break;
		
		case 1:
			iVar0 = func_227();
			break;
		
		case 2:
			iVar0 = func_228();
			break;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == iVar0)
			{
				return iVar1;
			}
		}
	}
	return 0;
}

void func_840()//Position - 0x75C97
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	struct<3> Var18;
	
	if (iLocal_129[1] == 2)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*14*/]))
			{
				if (PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
				{
					bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_278[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1);
					if (!Local_278[iVar0 /*14*/].f_10)
					{
						if (bVar1)
						{
							GlobalFunc_565(264, 1, 0);
						}
						Local_278[iVar0 /*14*/].f_10 = 1;
					}
				}
			}
			iVar0++;
		}
		if (!bLocal_830)
		{
			if (iLocal_548 < 3)
			{
				if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-3016.44f, 89.4f, 11.98f, 15f) > 0 || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3021.878f, 79.211f, 0f, -2995.467f, 113.063f, 17.5f, 100f, 0, 1, 0)))
				{
					bLocal_830 = true;
				}
				else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3024.434f, 82.5896f, 10.60847f, -3010.138f, 89.91269f, 13.99329f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3024.434f, 82.5896f, 10.60847f, -3017.877f, 92.78082f, 13.99329f, 0, 1, 0))
				{
					bLocal_830 = true;
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_598)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar0], 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_598[iVar0], 20f, 20f, 20f, 0, 0, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							bLocal_830 = true;
						}
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_598[iVar0], 1), 10f, 1) || FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_598[iVar0], 1) - Vector(20f, 20f, 20f), ENTITY::GET_ENTITY_COORDS(iLocal_598[iVar0], 1) + Vector(20f, 20f, 20f)))
					{
						bLocal_830 = true;
					}
					fVar2 = ENTITY::GET_ENTITY_SPEED(iLocal_598[iVar0]);
					if (fVar2 <= 1f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_598[iVar0], 0f, 4f, 0f), 4f, 4f, 4f, 0, 1, 0))
						{
							fLocal_1054 = (fLocal_1054 + (1f * SYSTEM::TIMESTEP()));
							if (fLocal_1054 >= 1.5f)
							{
								bLocal_830 = true;
							}
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (!ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, iLocal_598[iVar0]) && ENTITY::GET_ENTITY_SPEED(iVar3) > 15f) && ENTITY::GET_ENTITY_SPEED(iVar3) > (fVar2 - 3f))
							{
								bLocal_830 = true;
							}
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_598[iVar0], PLAYER::PLAYER_PED_ID(), 1))
					{
						bLocal_830 = true;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_598[iVar0]))
				{
					bLocal_830 = true;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_278)
			{
				if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
				{
					if (iVar0 == 0)
					{
						PED::SET_PED_RESET_FLAG(Local_278[iVar0 /*14*/], 187, 1);
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_278[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						bLocal_830 = true;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*14*/]))
				{
					bLocal_830 = true;
				}
				iVar0++;
			}
		}
		if (iLocal_42 == 0 && !Global_86806[1])
		{
			if (bLocal_830 || !bLocal_866)
			{
				if (GlobalFunc_8315() == 1)
				{
					iLocal_815 = 1;
					func_273(3, 0, 0, 1, 0, 0, 0, 1);
				}
				else if (PED::IS_PED_INJURED(Local_278[0 /*14*/]))
				{
					func_704(23);
				}
				else
				{
					func_704(20);
				}
			}
		}
		switch (iLocal_548)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086))
				{
					if (iLocal_42 == 3)
					{
						if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
						{
							func_766(2, 0, 0);
						}
					}
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086) >= 0.98f)
					{
						func_766(2, 0, 0);
					}
				}
				break;
			
			case 2:
				if (bLocal_866)
				{
					iVar0 = 0;
					while (iVar0 < Local_278)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_278[iVar0 /*14*/]))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[iVar0 /*14*/], 85f, 85f, 85f, 0, 0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_278[iVar0 /*14*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_278[iVar0 /*14*/]))
							{
								if (PED::IS_TRACKED_PED_VISIBLE(Local_278[iVar0 /*14*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086))
									{
										PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1086, 1f);
									}
									bLocal_866 = false;
								}
							}
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < 3)
					{
						iVar5 = iVar0;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar5], 0))
						{
							switch (iVar5)
							{
								case 0:
									sVar4 = "IG8_WASH";
									break;
								
								case 1:
									sVar4 = "IG8_CAVFRONT";
									break;
								
								case 2:
									sVar4 = "IG8_CAVREAR";
									break;
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_598[iVar5], func_35(8), sVar4, 3))
							{
								if (bLocal_866)
								{
									fVar6 = 0f;
								}
								else
								{
									fVar6 = 1f;
								}
								ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_598[iVar5], func_35(8), sVar4, fVar6);
							}
						}
						iVar0++;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086) >= 0.94f || func_848())
					{
						func_766(3, 1, 0);
					}
				}
				break;
			
			case 3:
				iVar0 = 0;
				while (iVar0 < iLocal_598)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar0], 0))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_598[iVar0]))
						{
							if (bLocal_830)
							{
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_598[iVar0], 45f);
							}
							else
							{
								fVar7 = 18f;
								if (iVar0 == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_598[iVar0], iLocal_598[1], 10f, 10f, 10f, 0, 0, 0))
										{
											fVar7 = 14f;
										}
									}
								}
								else if (iVar0 == 2)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_598[iVar0], iLocal_598[0], 10f, 10f, 10f, 0, 0, 0))
										{
											fVar7 = 16f;
										}
									}
								}
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_598[iVar0], fVar7);
							}
						}
					}
					iVar0++;
				}
				if (bLocal_830)
				{
					func_847();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0))
				{
					Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_598[1], 1) };
					if (Var8.f_1 > 160f)
					{
						func_766(4, 1, 0);
					}
				}
				else
				{
					func_766(5, 1, 0);
				}
				break;
			
			case 4:
				if (bLocal_830)
				{
					func_766(5, 1, 0);
				}
				else if (!bLocal_889)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_598[1], Local_1017, 24f, 24f, 24f, 0, 0, 0))
						{
							func_766(4, 1, 0);
						}
					}
				}
				break;
			
			case 5:
				if (!iLocal_891)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1130 + 7000)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0)) && !PED::IS_PED_INJURED(Local_278[4 /*14*/]))
						{
							TASK::TASK_VEHICLE_MISSION(Local_278[4 /*14*/], iLocal_598[1], iLocal_598[0], 7, 35f, 786469, -1f, -1f, 1);
						}
						iLocal_891 = 1;
					}
				}
				func_847();
				break;
			
			case 6:
				break;
		}
		if (iLocal_548 != 6)
		{
			if (bLocal_878)
			{
				func_766(6, 1, 0);
			}
		}
		if (bLocal_830)
		{
			bLocal_876 = false;
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (PED::IS_PED_INJURED(Local_278[0 /*14*/]))
				{
					bVar11 = false;
					if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
					{
						iVar12 = 0;
						while (iVar12 < 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar12], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_278[iVar0 /*14*/], iLocal_598[iVar12], 0))
								{
									bVar11 = true;
								}
							}
							iVar12++;
						}
					}
					if (!bVar11)
					{
						if (!iLocal_795[1])
						{
							GlobalFunc_661(Local_278[iVar0 /*14*/], &(Local_278[iVar0 /*14*/].f_1), -1, 0, 0, 0, 320f, 0);
						}
					}
					else
					{
						GlobalFunc_589(&(Local_278[iVar0 /*14*/].f_1));
					}
				}
				iVar13 = iVar0;
				if (!PED::IS_PED_INJURED(Local_278[iVar13 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[iVar13 /*14*/], 250f, 250f, 250f, 0, 1, 0))
					{
						bLocal_876 = true;
					}
					if (!Local_278[iVar13 /*14*/].f_9)
					{
						bVar14 = false;
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086) <= func_846(iVar13))
							{
								bVar14 = true;
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_278[iVar13 /*14*/], 0))
						{
							bVar14 = true;
						}
						else
						{
							iVar15 = PED::GET_VEHICLE_PED_IS_USING(Local_278[iVar13 /*14*/]);
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, 0))
							{
								bVar14 = true;
							}
							else
							{
								fVar16 = ENTITY::GET_ENTITY_SPEED(iVar15);
								if (iLocal_548 == 6)
								{
									bVar14 = true;
								}
								iVar17 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar15, -1);
								if (PED::IS_PED_INJURED(iVar17) && fVar16 < 2f)
								{
									bVar14 = true;
								}
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar15, 0))
								{
									bVar14 = true;
								}
							}
						}
						if (bVar14)
						{
							Local_278[iVar13 /*14*/].f_9 = 1;
						}
					}
					else if (!PED::IS_PED_IN_COMBAT(Local_278[iVar0 /*14*/], 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*14*/], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*14*/], 41, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_278[iVar0 /*14*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*14*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_278[iVar0 /*14*/], 7, 1);
						TASK::TASK_COMBAT_PED(Local_278[iVar13 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				iVar0++;
			}
		}
		if (iLocal_548 == 6)
		{
			if (!iLocal_795[1])
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[iVar0], 0))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_598[iVar0], 320f, 320f, 320f, 0, 1, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_598[iVar0], 0)) && (((!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_598[iVar0], -1)) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_598[iVar0], 0))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_598[iVar0], 1))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_598[iVar0], 2))))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_643[iVar0]))
							{
								Local_984[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_598[iVar0], 1) };
								uLocal_643[iVar0] = func_239(Local_984[iVar0 /*3*/], 0);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_643[iVar0], false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_643[iVar0], "BLIP_VEH");
							}
							else
							{
								GlobalFunc_5915(&(Local_984[iVar0 /*3*/]), ENTITY::GET_ENTITY_COORDS(iLocal_598[iVar0], 1), 50f);
								HUD::SET_BLIP_COORDS(uLocal_643[iVar0], Local_984[iVar0 /*3*/]);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_643[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_643[iVar0]));
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_598[iVar0], -1)))
							{
								switch (iVar0)
								{
									case 0:
										Var18 = { -3f, 3f, 0f };
										break;
									
									case 1:
										Var18 = { 0f, -2.5f, 0f };
										break;
									
									case 2:
										Var18 = { 3f, 2f, 0f };
										break;
								}
								func_841(iLocal_598[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &(Local_954[iVar0 /*3*/]), &(uLocal_1030[iVar0]), &(Local_964[iVar0 /*3*/]), &(uLocal_1034[iVar0]), &(uLocal_1125[iVar0]), Var18, 3000, 45f, fLocal_1039);
							}
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_643[iVar0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_643[iVar0]));
					}
					iVar0++;
				}
			}
		}
	}
}

void func_841(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11, float fParam12)//Position - 0x7684B
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (uParam4->f_2 == 0f)
				{
					GlobalFunc_2525(iParam1, uParam4, uParam5);
				}
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				GlobalFunc_2525(iParam1, uParam4, uParam5);
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (((GlobalFunc_156(iParam0, iParam1, 1) > fParam11 && GlobalFunc_156(iParam0, iParam1, 1) < fParam12) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f) && !ENTITY::IS_ENTITY_IN_AIR(iParam1))
				{
					if (!GlobalFunc_105(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &fVar0);
							if (fVar0 > 2f)
							{
								if (((*uParam2 < -3068.506f || *uParam2 > -2848.356f) || uParam2->f_1 < -18.83005f) || uParam2->f_1 > 179.83f)
								{
									MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
									fVar1 = ENTITY::GET_ENTITY_SPEED(iParam1);
									if (fVar1 < 10f)
									{
										fVar1 = 10f;
									}
									else if (fVar1 > 40f)
									{
										fVar1 = 40f;
									}
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
									*uParam6 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}





float func_846(int iParam0)//Position - 0x76B18
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		
		case 1:
			return 0f;
			break;
		
		case 2:
			return 0f;
			break;
		
		case 3:
			return 0f;
			break;
		
		case 4:
			return 0f;
			break;
		
		case 5:
			return 0.771f;
			break;
		
		case 6:
			return 0.759f;
			break;
		
		case 7:
			return 0f;
			break;
		
		case 8:
			return 0.771f;
			break;
		
		case 9:
			return 0.853f;
			break;
	}
	return 0f;
}

void func_847()//Position - 0x76BBA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_278)
	{
		iVar1 = iVar0;
		if (!Local_278[iVar1 /*14*/].f_9)
		{
			if (!PED::IS_PED_INJURED(Local_278[iVar0 /*14*/]))
			{
				if (iVar1 != 0 && iVar1 != 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_278[iVar0 /*14*/], 0))
					{
						bVar2 = false;
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_278[iVar0 /*14*/], 2104565373) == 7 && MISC::GET_GAME_TIMER() >= iLocal_1105 + 2000)
						{
							if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_278[iVar0 /*14*/]))
							{
								if (MISC::GET_GAME_TIMER() >= Local_278[iVar0 /*14*/].f_12 + 10000)
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						if (bVar2)
						{
							TASK::TASK_DRIVE_BY(Local_278[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 120f, 10, 1, -753768974);
							Local_278[iVar0 /*14*/].f_12 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_278[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_278[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
		}
		iVar0++;
	}
}

int func_848()//Position - 0x76CC3
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1086) && MISC::GET_GAME_TIMER() >= iLocal_1105 + 1000)
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1086);
		iVar1 = 0;
		while (iVar1 < 10)
		{
			iVar2 = iVar1;
			if (!PED::IS_PED_INJURED(Local_278[iVar2 /*14*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_278[iVar2 /*14*/], 1785177548) == 1)
				{
					if (fVar0 < func_849(iVar2))
					{
						return 0;
					}
				}
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

float func_849(int iParam0)//Position - 0x76D40
{
	switch (iParam0)
	{
		case 0:
			return 0.694f;
			break;
		
		case 1:
			return 0f;
			break;
		
		case 2:
			return 0f;
			break;
		
		case 3:
			return 0f;
			break;
		
		case 4:
			return 0f;
			break;
		
		case 5:
			return 0.822f;
			break;
		
		case 6:
			return 0.827f;
			break;
		
		case 7:
			return 0f;
			break;
		
		case 8:
			return 0.84f;
			break;
		
		case 9:
			return 0.91f;
			break;
	}
	return 0f;
}

void func_850()//Position - 0x76DE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	
	if (iLocal_129[0] == 2)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = iVar0;
			if (!PED::IS_PED_INJURED(Local_137[iVar1 /*14*/]))
			{
				if (iVar1 == 0)
				{
					PED::SET_PED_RESET_FLAG(Local_137[iVar0 /*14*/], 187, 1);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_549 = 1;
				}
				switch (Local_137[iVar1 /*14*/].f_9)
				{
					case 0:
						if (iLocal_549 == 1)
						{
							func_852(iVar1, 3);
						}
						else if (iVar1 == 0)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1088))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1088) >= 0.98f)
								{
									func_774(1, 0);
								}
							}
						}
						break;
					
					case 1:
						if (iLocal_865)
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(Local_137[iVar0 /*14*/]))
							{
								if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[iVar0 /*14*/], 85f, 85f, 85f, 0, 0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_137[iVar0 /*14*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_137[iVar0 /*14*/]))
								{
									if (PED::IS_TRACKED_PED_VISIBLE(Local_137[iVar0 /*14*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1088))
										{
											PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_1088, 1f);
										}
										iLocal_865 = 0;
									}
								}
							}
						}
						if (iLocal_549 == 1)
						{
							func_852(iVar1, 3);
						}
						else if (iVar1 == 0)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1088))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1088) >= 0.98f)
								{
									func_774(2, 0);
								}
							}
						}
						break;
					
					case 2:
						if (iLocal_549 == 1)
						{
							switch (iVar1)
							{
								case 0:
									iVar2 = 0;
									break;
								
								case 1:
									iVar2 = 100;
									break;
								
								case 2:
									iVar2 = 0;
									break;
								
								case 3:
									iVar2 = 300;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iLocal_1133 + iVar2))
							{
								func_852(iVar1, 3);
							}
						}
						else if (iLocal_549 == 2)
						{
							func_852(iVar1, 4);
						}
						break;
					
					case 3:
						bVar3 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_137[iVar1 /*14*/], func_776(iVar1, 3), func_775(iVar1, 3), 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_137[iVar1 /*14*/], func_776(iVar1, 3), func_775(iVar1, 3)) >= 0.98f)
							{
								bVar3 = true;
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (iVar1 == 0)
							{
								func_852(iVar1, 5);
							}
							else
							{
								func_852(iVar1, 6);
							}
						}
						else if (iVar1 != 0)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_137[iVar1 /*14*/], 2f);
						}
						break;
					
					case 6:
						bVar4 = false;
						switch (iVar1)
						{
							case 1:
								fVar5 = 0.89f;
								break;
							
							case 2:
								fVar5 = 0.87f;
								break;
							
							case 3:
								fVar5 = 0.93f;
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_137[iVar1 /*14*/], func_776(iVar1, 6), func_775(iVar1, 6), 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_137[iVar1 /*14*/], func_776(iVar1, 6), func_775(iVar1, 6)) >= fVar5)
							{
								bVar4 = true;
							}
						}
						else
						{
							bVar4 = true;
						}
						if (bVar4)
						{
							func_852(iVar1, 7);
						}
						else
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_137[iVar1 /*14*/], 2f);
						}
						break;
					
					case 4:
						bVar6 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_137[iVar1 /*14*/], func_776(iVar1, 4), func_775(iVar1, 4), 3))
						{
							if (iVar1 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_137[iVar1 /*14*/], func_776(iVar1, 4), func_775(iVar1, 4)) >= 0.98f)
								{
									bVar6 = true;
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_137[iVar1 /*14*/], func_776(iVar1, 4), func_775(iVar1, 4)) >= 0.85f)
							{
								bVar6 = true;
							}
						}
						else
						{
							bVar6 = true;
						}
						if (bVar6)
						{
							if (iVar1 == 0)
							{
								func_852(iVar1, 5);
							}
							else
							{
								func_852(iVar1, 7);
							}
						}
						else if (iVar1 != 0)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_137[iVar1 /*14*/], 2f);
						}
						else if (iLocal_549 == 1)
						{
							func_852(iVar1, 5);
						}
						break;
					
					case 7:
						if (MISC::GET_GAME_TIMER() <= iLocal_1089[iVar1] + 2000)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_137[iVar1 /*14*/], 2f);
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_137[iVar1 /*14*/], 2f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_137[iVar1 /*14*/], -1689270312) == 7)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_137[iVar1 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_137[iVar1 /*14*/], 1), 8f, 0, 0);
							func_852(iVar1, 5);
						}
						break;
					
					case 5:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_137[iVar1 /*14*/], 242628503) == 7)
						{
							func_852(iVar1, 5);
						}
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
			{
				if (!Local_137[iVar0 /*14*/].f_10)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						GlobalFunc_565(264, 1, 0);
					}
					Local_137[iVar0 /*14*/].f_10 = 1;
				}
				iLocal_549 = 1;
				if (iLocal_1133 < 0)
				{
					iLocal_1133 = MISC::GET_GAME_TIMER();
				}
			}
			iVar0++;
		}
		if (Local_137[0 /*14*/].f_9 >= 2)
		{
			fVar7 = 15f;
		}
		else
		{
			fVar7 = 14f;
		}
		bVar8 = false;
		if (((MISC::IS_BULLET_IN_AREA(-202.7803f, -1509.742f, 30.61494f, 8f, 1) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-202.7803f, -1509.742f, 30.61494f, 14f) > 0) || ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_42 == 2)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -203.883f, -1509.373f, 30.61493f, 50f, 50f, 50f, 0, 0, 0))) || bLocal_877)
		{
			bVar8 = true;
			iLocal_549 = 1;
			if (iLocal_1133 < 0)
			{
				iLocal_1133 = MISC::GET_GAME_TIMER();
			}
		}
		else if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -202.7803f, -1509.742f, 30.61494f, 1) < fVar7 && !bLocal_841) && Local_137[0 /*14*/].f_9 >= 2) || (bLocal_841 && MISC::GET_GAME_TIMER() >= iLocal_1101 + 1000))
		{
			if (Local_137[0 /*14*/].f_9 >= 2)
			{
				if (iLocal_549 != 1)
				{
					bVar8 = true;
					iLocal_549 = 2;
					if (iLocal_1133 < 0)
					{
						iLocal_1133 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				bVar8 = true;
				iLocal_549 = 1;
				if (iLocal_1133 < 0)
				{
					iLocal_1133 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (bVar8)
		{
			if (!iLocal_864)
			{
				iLocal_864 = 1;
				GlobalFunc_4935();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_137[0 /*14*/]))
		{
			if (!iLocal_827)
			{
				bVar9 = false;
				bVar10 = false;
				if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_137[0 /*14*/], MISC::GET_HASH_KEY("HIDE_PHONE")))
					{
						bVar9 = true;
					}
					else if (PED::IS_PED_RAGDOLL(Local_137[0 /*14*/]) || PED::IS_PED_IN_COMBAT(Local_137[0 /*14*/], 0))
					{
						bVar10 = true;
					}
				}
				else
				{
					bVar10 = true;
				}
				if (bVar9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_623))
					{
						OBJECT::DELETE_OBJECT(&iLocal_623);
					}
					iLocal_827 = 1;
				}
				else if (bVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_623))
					{
						ENTITY::DETACH_ENTITY(iLocal_623, 1, 1);
					}
					iLocal_827 = 1;
				}
			}
			if (!iLocal_828)
			{
				bVar11 = false;
				bVar12 = false;
				if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_137[0 /*14*/], MISC::GET_HASH_KEY("THROW_BBALL")))
					{
						bVar11 = true;
						bVar12 = true;
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_137[0 /*14*/], MISC::GET_HASH_KEY("DROP_BALL")))
					{
						bVar11 = true;
					}
					else if ((PED::IS_PED_RAGDOLL(Local_137[0 /*14*/]) || PED::IS_PED_IN_COMBAT(Local_137[0 /*14*/], 0)) || Local_137[0 /*14*/].f_9 == 5)
					{
						bVar11 = true;
					}
				}
				else
				{
					bVar11 = true;
				}
				if (bVar11)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_624))
					{
						ENTITY::DETACH_ENTITY(iLocal_624, 0, 1);
						if (bVar12)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_624, 1, 0f, 8f, 4f, 0, 1, 1, 0);
						}
					}
					iLocal_828 = 1;
				}
			}
			if (!iLocal_829)
			{
				if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_137[0 /*14*/], MISC::GET_HASH_KEY("DRAW_GUN")))
					{
						if (!PED::IS_PED_INJURED(Local_137[0 /*14*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_137[0 /*14*/], func_341(1), 1);
							iLocal_829 = 1;
						}
					}
				}
			}
		}
		bLocal_875 = false;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			iVar13 = iVar0;
			if (iVar13 != 0)
			{
				if (PED::IS_PED_INJURED(Local_137[0 /*14*/]))
				{
					bVar14 = false;
					if (!PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
					{
						iVar15 = 0;
						while (iVar15 < 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_602[iVar15], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_137[iVar0 /*14*/], iLocal_602[iVar15], 0))
								{
									bVar14 = true;
								}
							}
							iVar15++;
						}
					}
					if (!bVar14)
					{
						if (!iLocal_795[0])
						{
							GlobalFunc_661(Local_137[iVar0 /*14*/], &(Local_137[iVar0 /*14*/].f_1), -1, 0, 0, 0, 320f, 0);
						}
					}
					else
					{
						GlobalFunc_589(&(Local_137[iVar0 /*14*/].f_1));
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_137[iVar0 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[iVar0 /*14*/], 250f, 250f, 250f, 0, 1, 0))
				{
					bLocal_875 = true;
				}
				if (iVar13 >= 4)
				{
					if (!Local_137[iVar0 /*14*/].f_11)
					{
						bVar16 = false;
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_137[iVar0 /*14*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_137[iVar0 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[iVar0 /*14*/], 20f, 20f, 4f, 0, 1, 0))
							{
								if (PED::CAN_PED_SEE_HATED_PED(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_901 = 1;
									bVar16 = true;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_137[iVar0 /*14*/], 0))
						{
							iVar17 = PED::GET_VEHICLE_PED_IS_IN(Local_137[iVar0 /*14*/], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar17))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar17, PLAYER::PLAYER_PED_ID(), 1))
								{
									iLocal_901 = 1;
									bVar16 = true;
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							iLocal_901 = 1;
							bVar16 = true;
						}
						if ((bLocal_877 || Local_137[0 /*14*/].f_9 == 5) || Global_86806[0])
						{
							if (iVar13 < 8)
							{
								bVar16 = true;
							}
						}
						if (bVar16)
						{
							bLocal_877 = true;
							Local_137[iVar0 /*14*/].f_11 = 1;
						}
						if (iVar13 >= 8)
						{
							bVar18 = true;
							switch (iVar13)
							{
								case 8:
									iVar19 = 4000;
									break;
								
								case 9:
									iVar19 = 3000;
									break;
								
								default:
									iVar19 = 0;
									break;
							}
							if ((MISC::GET_GAME_TIMER() <= (iLocal_1122 + iVar19) || !Global_86806[0]) && !(Local_137[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_1121 + 15000))
							{
								bVar18 = false;
							}
							if (bVar18)
							{
								Local_137[iVar0 /*14*/].f_11 = 1;
							}
							else if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							}
						}
					}
					else
					{
						if ((!Global_86806[0] && !(Local_137[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_1121 + 15000)) && !iLocal_901)
						{
							PED::SET_PED_RESET_FLAG(Local_137[iVar0 /*14*/], 128, 1);
						}
						iVar20 = func_851(iVar13);
						if (iVar20 >= 0)
						{
							iLocal_882[iVar20] = 1;
						}
						if (Local_137[iVar0 /*14*/].f_13 < 0)
						{
							Local_137[iVar0 /*14*/].f_13 = MISC::GET_GAME_TIMER();
						}
						if (!bLocal_860)
						{
							if (PED::IS_PED_INJURED(Local_137[0 /*14*/]))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1122 + 1000)
								{
									if (!iLocal_861)
									{
										iVar22 = -1;
										fVar23 = 1E+08f;
										iVar21 = 0;
										while (iVar21 < 10)
										{
											if (!PED::IS_PED_INJURED(Local_137[iVar21 /*14*/]))
											{
												if (iVar21 >= 4)
												{
													fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_137[iVar21 /*14*/], 1), 1);
													if (fVar24 < fVar23)
													{
														iVar22 = iVar21;
														fVar23 = fVar24;
													}
												}
											}
											iVar21++;
										}
										if (iVar22 >= 0)
										{
											iLocal_1149 = iVar22;
											GlobalFunc_173(&uLocal_1155, 5, Local_137[iLocal_1149 /*14*/], "GANGBANGER1", 0, 1);
											iLocal_861 = 1;
										}
										else
										{
											iLocal_861 = 1;
											bLocal_860 = true;
										}
									}
									else if (iLocal_1149 >= 0)
									{
										if (!PED::IS_PED_INJURED(Local_137[iLocal_1149 /*14*/]))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_137[iLocal_1149 /*14*/], 30f, 30f, 6f, 0, 1, 0))
											{
												bLocal_860 = func_268("FINC1_REVSTR", 0, 0, 0);
											}
											else
											{
												bLocal_860 = true;
											}
										}
										else
										{
											bLocal_860 = true;
										}
									}
									else
									{
										bLocal_860 = true;
									}
								}
							}
						}
						if (!Local_137[iVar0 /*14*/].f_12)
						{
							switch (iVar13)
							{
								case 8:
									iVar25 = 5000;
									break;
								
								case 9:
									iVar25 = 3000;
									break;
								
								default:
									iVar25 = 0;
									break;
							}
							if ((MISC::GET_GAME_TIMER() >= (Local_137[iVar0 /*14*/].f_13 + iVar25) || ENTITY::IS_ENTITY_AT_ENTITY(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 15f, 15f, 5f, 0, 1, 0)) || !Global_86806[0])
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_137[iVar0 /*14*/], 3, 1);
								Local_137[iVar0 /*14*/].f_12 = 1;
							}
						}
						if (!PED::IS_PED_IN_COMBAT(Local_137[iVar0 /*14*/], 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_137[iVar0 /*14*/], 993674639) != 7 || PED::IS_PED_USING_ANY_SCENARIO(Local_137[iVar0 /*14*/]))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_137[iVar0 /*14*/]);
							}
							TASK::TASK_COMBAT_PED(Local_137[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
			}
			else
			{
				if (iVar13 >= 4)
				{
					iLocal_901 = 1;
				}
				bLocal_877 = true;
			}
			iVar0++;
		}
		if (Global_86806[0])
		{
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_602[iVar0], 0))
				{
					if (!iLocal_795[0])
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_602[iVar0], 320f, 320f, 320f, 0, 1, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_602[iVar0], 0)) && (((!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_602[iVar0], -1)) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_602[iVar0], 0))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_602[iVar0], 1))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_602[iVar0], 2))))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_641[iVar0]))
							{
								Local_980[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_602[iVar0], 1) };
								uLocal_641[iVar0] = func_239(Local_980[iVar0 /*3*/], 0);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_641[iVar0], false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_641[iVar0], "BLIP_VEH");
							}
							else
							{
								GlobalFunc_5915(&(Local_980[iVar0 /*3*/]), ENTITY::GET_ENTITY_COORDS(iLocal_602[iVar0], 1), 50f);
								HUD::SET_BLIP_COORDS(uLocal_641[iVar0], Local_980[iVar0 /*3*/]);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_641[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_641[iVar0]));
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (iLocal_882[iVar0])
							{
								if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_602[iVar0], -1)))
								{
									if (!iLocal_913)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_602[iVar0], PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, 0, 1, 0))
										{
											func_31(14);
											iLocal_913 = 1;
										}
									}
									switch (iVar0)
									{
										case 0:
											Var26 = { -3f, -4f, 0f };
											break;
										
										case 1:
											Var26 = { 3f, 0f, 0f };
											break;
										
										case 2:
											Var26 = { 0f, 4f, 0f };
											break;
									}
									func_841(iLocal_602[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &(Local_946[iVar0 /*3*/]), &(uLocal_1026[iVar0]), &(Local_950[iVar0 /*3*/]), &(uLocal_1028[iVar0]), &(uLocal_1123[iVar0]), Var26, 3000, 45f, fLocal_1038);
								}
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_641[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_641[iVar0]));
				}
				iVar0++;
			}
		}
		if (!Global_86806[0])
		{
			if (iLocal_42 == 0)
			{
				if (iLocal_549 != 0)
				{
					if (GlobalFunc_8315() == 0)
					{
						iLocal_814 = 1;
						func_273(2, 0, 0, 1, 0, 0, 0, 1);
					}
					else if (PED::IS_PED_INJURED(Local_137[0 /*14*/]))
					{
						func_704(22);
					}
					else
					{
						func_704(19);
					}
				}
			}
		}
	}
}

int func_851(int iParam0)//Position - 0x77D50
{
	switch (iParam0)
	{
		case 8:
		case 9:
			return 0;
			break;
	}
	return -1;
}

void func_852(int iParam0, int iParam1)//Position - 0x77D73
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (!PED::IS_PED_INJURED(Local_137[iParam0 /*14*/]))
	{
		switch (iParam1)
		{
			case 5:
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1153);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1153);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 134217728, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1153);
				TASK::TASK_PERFORM_SEQUENCE(Local_137[iParam0 /*14*/], uLocal_1153);
				if (iParam0 == 0)
				{
					iLocal_1121 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 7:
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_137[iParam0 /*14*/], 2f);
				switch (iParam0)
				{
					case 1:
						if (Local_137[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc23";
							iVar1 = 23;
						}
						else
						{
							sVar0 = "finc22";
							iVar1 = 1;
						}
						break;
					
					case 2:
						if (Local_137[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc21";
							iVar1 = 8;
						}
						else
						{
							sVar0 = "finc23";
							iVar1 = 1;
						}
						break;
					
					case 3:
						if (Local_137[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc22";
							iVar1 = 12;
						}
						else
						{
							sVar0 = "finc21";
							iVar1 = 1;
						}
						break;
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_137[iParam0 /*14*/]);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_137[iParam0 /*14*/], sVar0, iVar1, 0, -1);
				break;
			
			default:
				bVar3 = false;
				switch (iParam1)
				{
					case 2:
						iVar6 = 1;
						bVar2 = true;
						break;
					
					case 4:
						if (iParam0 == 0)
						{
							iVar6 = 2;
							bVar3 = true;
						}
						else
						{
							iVar6 = 32768;
						}
						bVar2 = false;
						break;
					
					case 3:
						iVar6 = 2;
						bVar2 = false;
						if (iParam0 == 0)
						{
							bVar3 = true;
						}
						break;
					
					case 6:
						iVar6 = 32768;
						bVar2 = false;
						break;
				}
				if (bVar2)
				{
					fVar4 = 1000f;
				}
				else
				{
					fVar4 = 4f;
				}
				if (bVar3)
				{
					fVar5 = -1f;
				}
				else
				{
					fVar5 = -8f;
				}
				TASK::TASK_PLAY_ANIM(Local_137[iParam0 /*14*/], func_776(iParam0, iParam1), func_775(iParam0, iParam1), fVar4, fVar5, -1, iVar6, 0, 0, 0, 0);
				if (bVar2)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_137[iParam0 /*14*/], 0, 0);
				}
				if (iParam1 == 4 || iParam1 == 3)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_137[iParam0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2064, 4);
				}
				break;
		}
		iLocal_1089[iParam0] = MISC::GET_GAME_TIMER();
		Local_137[iParam0 /*14*/].f_9 = iParam1;
	}
}

void func_853()//Position - 0x77F93
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	bVar0 = false;
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 != joaat("weapon_unarmed"))
		{
			bVar0 = true;
		}
	}
	if (iLocal_129[2] == 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_590[iVar2]))
			{
				switch (iVar2)
				{
					case 0:
						Var3 = { -1619.979f, -1082.37f, 12.01724f };
						fVar6 = 47.6f;
						break;
					
					case 1:
						Var3 = { -1652.334f, -1093.494f, 12.12104f };
						fVar6 = -132.8f;
						break;
				}
				uLocal_590[iVar2] = PED::CREATE_PED(6, func_69(20), Var3, fVar6, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_590[iVar2], func_341(1), -1, 0, 1);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_590[iVar2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			else if (bVar0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_590[iVar2], 0f, 0f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_590[iVar2], 0f, 7f, 3f), 2f, 0, 1, 0))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
					}
				}
			}
			iVar2++;
		}
	}
}

void func_854()//Position - 0x780E6
{
	if (iLocal_129[2] == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_605[3]))
		{
		}
		else if (!iLocal_823)
		{
			if (iLocal_129[2] == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067))
				{
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_1067, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1067, iLocal_605[3], -1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1068))
				{
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_1068, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1068, iLocal_605[3], -1);
				}
				iLocal_823 = 1;
			}
		}
	}
}

void func_855()//Position - 0x78168
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	
	if (iLocal_129[2] == 2)
	{
		iLocal_854 = 0;
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), -1878.221f, -1214.366f, -100.0166f, -1479.246f, -977.3813f, 100.1158f, 0, 1))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
			if ((((((!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && iVar0 != joaat("weapon_stickybomb")) && iVar0 != joaat("weapon_grenade")) && iVar0 != joaat("weapon_smokegrenade")) && iVar0 != joaat("weapon_bzgas")) && iVar0 != joaat("weapon_molotov")) && iVar0 != joaat("weapon_stungun"))
			{
				iLocal_854 = 1;
			}
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = iVar1;
			if (!PED::IS_PED_INJURED(uLocal_587[iVar2]))
			{
				if (!iLocal_855[iVar2])
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_587[iVar1], PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_235())
						{
							if (iVar2 == 0)
							{
								func_763(&uLocal_1067, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_587[iVar1], uLocal_1067, func_35(4), "Death_Steve", 8f, -8f, 0, 0, 1148846080, 0);
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_587[iVar1], 0);
							}
							else
							{
								func_763(&uLocal_1068, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_587[iVar1], uLocal_1068, func_35(4), "Death_CamMan", -8f, -8f, 0, 0, 1148846080, 0);
							}
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_587[iVar1], 0);
							ENTITY::SET_ENTITY_PROOFS(uLocal_587[iVar1], 1, 1, 1, 1, 1, 0, 0, 0);
							AUDIO::STOP_PED_SPEAKING(uLocal_587[iVar1], 1);
							iLocal_1106 = MISC::GET_GAME_TIMER() + 100;
							iLocal_1135 = MISC::GET_GAME_TIMER();
							iLocal_855[iVar1] = 1;
							if (iVar2 == 0)
							{
								if (!PED::IS_PED_INJURED(uLocal_587[iVar1]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(uLocal_587[iVar1]))
									{
										GlobalFunc_4956();
									}
								}
								bLocal_5064 = false;
								bLocal_5065 = false;
								if (!PED::IS_PED_INJURED(uLocal_587[0]))
								{
									if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1), 30f))
									{
										if (FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1), 30f) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1), 30f))
										{
											bLocal_5065 = true;
										}
										else if (FIRE::IS_EXPLOSION_IN_SPHERE(18, ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1), 30f) || FIRE::IS_EXPLOSION_IN_SPHERE(33, ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1), 30f))
										{
											bLocal_5064 = false;
										}
										else
										{
											bLocal_5064 = true;
										}
									}
									else
									{
										bLocal_5064 = false;
									}
								}
								else
								{
									bLocal_5064 = true;
								}
							}
						}
					}
					else
					{
						switch (iLocal_134[iVar2])
						{
							case 2:
								if (iVar2 == 0)
								{
									fLocal_1041 = func_856(iVar2);
								}
								else
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_1068, fLocal_1041);
								}
								if (func_856(iVar2) >= 1f)
								{
									func_762(iVar2, 3, 0);
								}
								break;
							
							case 1:
								if (iVar2 == 0)
								{
									fVar3 = 0.98f;
								}
								else
								{
									fVar3 = 0.99f;
								}
								if (func_856(iVar2) >= fVar3)
								{
									func_762(iVar2, 3, 0);
								}
								break;
							
							case 4:
								if (func_856(iVar2) >= 0.98f)
								{
									func_762(iVar2, 5, 0);
									iLocal_1106 = MISC::GET_GAME_TIMER() + 100;
								}
								break;
							}
						}
					}
			}
			iVar1++;
		}
		bVar4 = false;
		if (((PED::IS_PED_INJURED(uLocal_587[1]) || PED::IS_PED_INJURED(uLocal_587[0])) || iLocal_855[0]) || iLocal_855[1])
		{
			bVar4 = true;
		}
		if (!PED::IS_PED_INJURED(uLocal_587[0]))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1) };
			if ((((((MISC::IS_SNIPER_BULLET_IN_AREA(Var5 - Vector(5f, 5f, 5f), Var5 + Vector(5f, 5f, 5f)) || MISC::IS_BULLET_IN_AREA(Var5, 5f, 1)) || FIRE::IS_EXPLOSION_IN_AREA(-1, -1878.221f, -1214.366f, -100.0166f, -1479.246f, -977.3813f, 100.1158f)) || iLocal_854) || MISC::IS_PROJECTILE_IN_AREA(Var5 - Vector(10f, 10f, 10f), Var5 + Vector(10f, 10f, 10f), 0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Var5, 10f) > 0) || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_42 == 1))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_587[0], 30f, 30f, 10f, 0, 1, 0))
				{
					bLocal_886 = true;
				}
				bLocal_887 = false;
				bVar4 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_587[0], 10f, 10f, 6f, 0, 1, 0))
			{
				bLocal_887 = true;
				bLocal_886 = true;
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			if (iLocal_134[0] < 4 && !iLocal_855[0])
			{
				func_762(0, 4, 0);
				iLocal_1106 = MISC::GET_GAME_TIMER() + 100;
			}
			if (iLocal_134[1] < 4 && !iLocal_855[1])
			{
				func_762(1, 4, 0);
				iLocal_1106 = MISC::GET_GAME_TIMER() + 100;
			}
			if (!Global_86806[2])
			{
				if (iLocal_42 == 0)
				{
					if (GlobalFunc_8315() == 2)
					{
						iLocal_813 = 1;
						func_273(1, 0, 0, 1, 0, 1, 0, 1);
						iLocal_880 = 1;
					}
					else if (iLocal_855[0])
					{
						func_704(21);
					}
					else
					{
						func_704(18);
					}
				}
			}
		}
	}
}

float func_856(int iParam0)//Position - 0x7869E
{
	if (iParam0 == 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067))
		{
			return PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1067);
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1068))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1068);
	}
	return 0f;
}



void func_859()//Position - 0x78709
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar3 = func_863(iVar0);
		switch (Local_555[iVar0 /*4*/].f_3)
		{
			case 0:
				if (iLocal_129[2] == 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar3]))
					{
						func_861(iVar0, 1);
						iVar1 = 0;
						while (iVar1 < 2)
						{
							Local_555[iVar0 /*4*/][iVar1] = PED::CREATE_PED(26, func_69(16), ENTITY::GET_ENTITY_COORDS(iLocal_605[iVar3], 1), 0f, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_555[iVar0 /*4*/][iVar1], 1);
							PED::SET_PED_KEEP_TASK(Local_555[iVar0 /*4*/][iVar1], 1);
							PED::SET_PED_CONFIG_FLAG(Local_555[iVar0 /*4*/][iVar1], 118, 0);
							PED::SET_PED_CONFIG_FLAG(Local_555[iVar0 /*4*/][iVar1], 208, 1);
							iVar4 = func_860(iVar0, iVar1);
							switch (iVar4)
							{
								case 0:
									sVar2 = "Stand_Idle_1_PEDA";
									break;
								
								case 1:
									sVar2 = "Stand_Idle_1_PEDB";
									break;
								
								case 2:
									sVar2 = "Stand_Idle_2_PEDA";
									break;
								
								case 3:
									sVar2 = "Stand_Idle_2_PEDB";
									break;
							}
							TASK::TASK_SYNCHRONIZED_SCENE(Local_555[iVar0 /*4*/][iVar1], uLocal_1069[iVar0], func_35(5), sVar2, 1000f, -8f, 0, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_555[iVar0 /*4*/][iVar1], 0, 0);
							iVar1++;
						}
						Local_555[iVar0 /*4*/].f_3 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar3]))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_605[iVar3], 1) };
					if ((((MISC::IS_SNIPER_BULLET_IN_AREA(Var5 - Vector(5f, 5f, 5f), Var5 + Vector(5f, 5f, 5f)) || MISC::IS_BULLET_IN_AREA(Var5, 5f, 1)) || iLocal_854) || Global_86806[2]) || (iLocal_774 && bLocal_881))
					{
						Local_555[iVar0 /*4*/].f_3 = 2;
					}
					if (iLocal_1147 == iVar0)
					{
						iVar1 = 0;
						while (iVar1 < 2)
						{
							if (!PED::IS_PED_INJURED(Local_555[iVar0 /*4*/][iVar1]))
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_555[iVar0 /*4*/][iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_555[iVar0 /*4*/][iVar1]))
								{
									Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_555[iVar0 /*4*/][iVar1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
									if (((Var8.f_1 > -0.5f && Var8.f_1 < 20f) && (Var8.x < 10f && Var8.x > -10f)) && (Var8.f_2 < 3f || Var8.f_2 > -3f))
									{
										Local_555[iVar0 /*4*/].f_3 = 2;
									}
								}
							}
							else
							{
								Local_555[iVar0 /*4*/].f_3 = 2;
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				if (MISC::GET_GAME_TIMER() >= iLocal_1106)
				{
					func_861(iVar0, 0);
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (!PED::IS_PED_INJURED(Local_555[iVar0 /*4*/][iVar1]))
						{
							iVar11 = func_860(iVar0, iVar1);
							switch (iVar11)
							{
								case 0:
									sVar2 = "Reaction_1_PEDA";
									break;
								
								case 1:
									sVar2 = "Reaction_1_PEDB";
									break;
								
								case 2:
									sVar2 = "Reaction_2_PEDA";
									break;
								
								case 3:
									sVar2 = "Reaction_2_PEDB";
									break;
							}
							TASK::TASK_LOOK_AT_ENTITY(Local_555[iVar0 /*4*/][iVar1], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_555[iVar0 /*4*/][iVar1], uLocal_1069[iVar0], func_35(5), sVar2, 8f, -8f, 0, 0, 1148846080, 0);
						}
						iVar1++;
					}
					Local_555[iVar0 /*4*/].f_3 = 3;
					iLocal_1106 = MISC::GET_GAME_TIMER() + 100;
				}
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar3]))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1069[iVar0]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1069[iVar0]) >= 0.98f)
						{
							func_861(iVar0, 1);
							iVar1 = 0;
							while (iVar1 < 2)
							{
								if (!PED::IS_PED_INJURED(Local_555[iVar0 /*4*/][iVar1]))
								{
									iVar12 = func_860(iVar0, iVar1);
									switch (iVar12)
									{
										case 0:
											sVar2 = "Cower_Idle_1_PEDA";
											break;
										
										case 1:
											sVar2 = "Cower_Idle_1_PEDB";
											break;
										
										case 2:
											sVar2 = "Cower_Idle_2_PEDA";
											break;
										
										case 3:
											sVar2 = "Cower_Idle_2_PEDB";
											break;
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_555[iVar0 /*4*/][iVar1], uLocal_1069[iVar0], func_35(5), sVar2, 8f, -8f, 0, 0, 1148846080, 0);
								}
								iVar1++;
							}
							Local_555[iVar0 /*4*/].f_3 = 4;
						}
					}
				}
				break;
		}
		iVar0++;
	}
	iLocal_1147++;
	if (iLocal_1147 >= 5)
	{
		iLocal_1147 = 0;
	}
}

int func_860(int iParam0, int iParam1)//Position - 0x78BC1
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_861(int iParam0, int iParam1)//Position - 0x78C6D
{
	float fVar0;
	
	fVar0 = func_862(iParam0);
	uLocal_1069[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, fVar0, 2);
	PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_1069[iParam0], 0f, 0f, 0f, 0f, 0f, fVar0, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1069[iParam0], iLocal_605[func_863(iParam0)], -1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_1069[iParam0], iParam1);
}

float func_862(int iParam0)//Position - 0x78CC7
{
	switch (iParam0)
	{
		case 0:
			return 180f;
			break;
		
		case 1:
			return 0f;
			break;
		
		case 2:
			return 90f;
			break;
		
		case 3:
			return 220f;
			break;
		
		case 4:
			return 317f;
			break;
		
		case 5:
			return 172f;
			break;
	}
	return 0f;
}

int func_863(int iParam0)//Position - 0x78D39
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 5;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 8;
			break;
		
		case 4:
			return 13;
			break;
		
		case 5:
			return 11;
			break;
	}
	return 0;
}

void func_864()//Position - 0x78D9A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	func_835();
	if (!iLocal_774)
	{
		if (!iLocal_847)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if ((MISC::GET_GAME_TIMER() >= iLocal_1061 + 20000 || iLocal_548 == 4) || iLocal_548 == 5)
			{
				iLocal_847 = 1;
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
		}
		if (!iLocal_924)
		{
			if (bLocal_830)
			{
				GlobalFunc_2867("FINC2_CHENG_SHOT");
				iLocal_924 = 1;
			}
		}
		GlobalFunc_10693(&uLocal_20, Local_278[0 /*14*/], 0, 0, 1, 1, 1);
		if (!iLocal_848)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_1061 + 10000)
			{
				func_770(0);
				iLocal_848 = 1;
			}
		}
		if (bLocal_830)
		{
			if (!PED::IS_PED_INJURED(Local_278[1 /*14*/]))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1142)
				{
					if (!GlobalFunc_111())
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							GlobalFunc_5122(Local_278[1 /*14*/], "GENERIC_CURSE_HIGH", 9);
						}
						else
						{
							GlobalFunc_5122(Local_278[1 /*14*/], "GENERIC_FUCK_YOU", 9);
						}
						iLocal_1142 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 14000));
					}
					else
					{
						iLocal_1142 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000));
					}
				}
			}
		}
		if (!Global_86806[1])
		{
			if (iLocal_129[1] == 2)
			{
				if (!iLocal_832)
				{
					if (iLocal_129[1] == 2)
					{
						if (bLocal_830)
						{
							iLocal_832 = 1;
						}
						else if (iLocal_548 == 2 && !bLocal_866)
						{
							if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[0 /*14*/], 40f, 40f, 10f, 0, 0, 0))
								{
									iLocal_832 = func_268("FINC1_CHLEA", 0, 11, 0);
								}
								else
								{
									iLocal_832 = 1;
								}
							}
						}
					}
				}
				else if (!iLocal_787[1])
				{
					if (!bLocal_830)
					{
						if (func_268("FINC1_FHR", 0, 0, 0))
						{
							iLocal_787[1] = 1;
						}
					}
					else
					{
						iLocal_787[1] = 1;
					}
				}
				else if (!iLocal_783[1])
				{
					iLocal_783[1] = func_237("FC2_KILLTRI", 1, 0);
					if (iLocal_783[1])
					{
						RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
					}
				}
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < 10)
				{
					iVar2 = iVar1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar1 /*14*/]))
					{
						if (PED::IS_PED_INJURED(Local_278[iVar1 /*14*/]))
						{
							if (iVar2 == 0)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_640))
								{
									HUD::REMOVE_BLIP(&uLocal_640);
								}
								bVar0 = true;
							}
						}
						else if (iVar2 == 0)
						{
							bVar3 = func_866();
							if (func_235())
							{
								if (bVar3)
								{
									if (!bLocal_825 || !HUD::DOES_BLIP_EXIST(uLocal_640))
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_640))
										{
											HUD::REMOVE_BLIP(&uLocal_640);
										}
										func_865(1);
									}
								}
								else if (bLocal_825 || !HUD::DOES_BLIP_EXIST(uLocal_640))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_640))
									{
										HUD::REMOVE_BLIP(&uLocal_640);
									}
									func_865(0);
								}
							}
							bLocal_825 = bVar3;
							bVar4 = false;
							GlobalFunc_2216(uLocal_640, Local_278[iVar1 /*14*/], 300f, 1061158912, 0);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[iVar1 /*14*/], 300f, 300f, 300f, 0, 0, 0))
							{
								bVar4 = true;
							}
							if (bVar4)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_640))
								{
									HUD::REMOVE_BLIP(&uLocal_640);
								}
								func_704(26);
							}
						}
					}
					iVar1++;
				}
				if (bLocal_830)
				{
					if (iLocal_548 == 5 || iLocal_548 == 3)
					{
						if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]) && !PED::IS_PED_INJURED(Local_278[2 /*14*/]))
						{
							if (!iLocal_833)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[0 /*14*/], 40f, 40f, 10f, 0, 0, 0))
								{
									if (func_268("FINC1_CHHIT", 0, 0, 0))
									{
										iLocal_833 = 1;
										func_346(8000);
									}
								}
							}
						}
					}
					bVar5 = false;
					if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[0 /*14*/], 25f, 25f, 10f, 0, 0, 0))
						{
							bVar5 = true;
						}
						if (!iLocal_914)
						{
							if (PED::IS_PED_INJURED(Local_278[1 /*14*/]))
							{
								if (bVar5)
								{
									iLocal_914 = func_268("FINC1_CHCD", 0, 0, 0);
								}
								else
								{
									iLocal_914 = 1;
								}
							}
						}
						if (bVar5)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_278[0 /*14*/], 0))
							{
								if (!PED::IS_PED_INJURED(Local_278[2 /*14*/]))
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_697("FINC1_CHGF", -1, -1);
									}
									else
									{
										func_697("FINC1_CHCS", -1, -1);
									}
								}
								else if (!PED::IS_PED_INJURED(Local_278[3 /*14*/]))
								{
									func_697("FINC1_CHGF", -1, -1);
								}
							}
							else
							{
								func_697("FINC1_CHSF", -1, -1);
							}
						}
					}
				}
				if (bVar0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_278[0 /*14*/]))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_278[0 /*14*/], func_341(3), 0))
						{
							GlobalFunc_553(270);
						}
					}
					if (func_235())
					{
						iLocal_48.f_18[1] = 1;
						func_766(6, 1, 0);
						fLocal_1039 = 230f;
						func_40(2);
						func_31(12);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_598[0], 0);
						}
						RECORDING::_0x293220DA1B46CEBC(12f, 8f, 3);
						Global_86806[1] = 1;
					}
				}
			}
		}
		else
		{
			fLocal_1039 = (fLocal_1039 - (0.4f * SYSTEM::TIMESTEP()));
			if (fLocal_1039 < 0f)
			{
				fLocal_1039 = 0f;
			}
			if (GlobalFunc_663("FC2_KILLTRI", 0, 0))
			{
				func_242(0, 1, 0, 0);
			}
			if (!bLocal_884)
			{
				bLocal_884 = func_268("FINC1_FKILCH", 0, 0, 0);
			}
			if (!iLocal_795[1])
			{
				if (!bLocal_876)
				{
					iVar6 = 0;
					while (iVar6 < 10)
					{
						GlobalFunc_589(&(Local_278[iVar6 /*14*/].f_1));
						if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar6 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_278[iVar6 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_278[iVar6 /*14*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_278[iVar6 /*14*/]));
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < 3)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_643[iVar6]))
						{
							HUD::REMOVE_BLIP(&(uLocal_643[iVar6]));
						}
						iVar6++;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[1], 0))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_598[1], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[2], 0))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_598[2], 0);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						GlobalFunc_2867("FINC2_CHENG_DONE_FOOT");
					}
					else
					{
						GlobalFunc_2867("FINC2_CHENG_DONE");
					}
					func_40(12);
					iLocal_795[1] = 1;
				}
				else if (!bLocal_799[1])
				{
					if (bLocal_884)
					{
						bLocal_799[1] = func_237("FC2_ESCTRI", 1, 0);
					}
				}
			}
			else
			{
				if (GlobalFunc_663("FC2_ESCTRI", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_126.f_1 != 0)
				{
					if (GlobalFunc_663("LOSE_WANTED", 0, 0))
					{
						func_242(0, 1, 0, 0);
					}
					bLocal_821 = false;
					if (!bLocal_791[1])
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						bLocal_791[1] = func_268("FINC1_FDH", 0, 0, 0);
					}
					else if (!iLocal_811)
					{
						iLocal_811 = func_830();
					}
					else
					{
						if (!bLocal_812)
						{
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
							bLocal_812 = func_829();
						}
						else
						{
							if (!iLocal_816)
							{
								if (Local_126.f_1 == 0)
								{
									iLocal_816 = func_237(func_828(), 1, 0);
								}
								if (!iLocal_48.f_18[2])
								{
									if (iLocal_48.f_18[0])
									{
										func_827(2);
									}
								}
								else if (!iLocal_48.f_18[0])
								{
									func_827(0);
								}
							}
							if (func_825())
							{
								func_782();
							}
						}
						if (iLocal_48.f_18[2])
						{
							if (func_781())
							{
								func_827(2);
								GlobalFunc_2511(&iLocal_48, 2, 0, 1);
								iLocal_48.f_18[2] = 0;
							}
						}
					}
				}
				else
				{
					if (!bLocal_821)
					{
						bLocal_821 = func_237("LOSE_WANTED", 1, 0);
						MISC::ENABLE_DISPATCH_SERVICE(1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(7, 1);
						PED::SET_CREATE_RANDOM_COPS(1);
					}
					iLocal_816 = 0;
				}
			}
		}
		if (func_235())
		{
			bVar7 = false;
			if (Local_126.f_1 == 0)
			{
				if (GlobalFunc_8315() == 0)
				{
					func_273(0, 0, 1, 1, 0, 1, 0, 1);
					bVar7 = true;
				}
				else if (GlobalFunc_8315() == 2)
				{
					if (Global_86806[2])
					{
						func_273(4, 0, 1, 1, 0, 1, 1, 1);
						bVar7 = true;
					}
					else
					{
						func_273(0, 0, 1, 1, 0, 1, 0, 1);
						bVar7 = true;
					}
				}
				if (bVar7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[1]))
					{
						func_75(1, 0);
						func_365(iLocal_48[1], 1);
						PED::DELETE_PED(&(iLocal_48[1]));
					}
					GlobalFunc_173(&uLocal_1155, 2, 0, "FRANKLIN", 0, 1);
					func_264(1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[0]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_593[0]));
					}
					func_264(5);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_629))
	{
		HUD::REMOVE_BLIP(&uLocal_629);
	}
}

void func_865(bool bParam0)//Position - 0x7962A
{
	if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
	{
		if (bParam0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0))
			{
				uLocal_640 = func_259(iLocal_598[0], 1);
			}
		}
		else
		{
			uLocal_640 = func_702(Local_278[0 /*14*/], 1);
		}
	}
}

int func_866()//Position - 0x79672
{
	if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_598[0], 0))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_278[0 /*14*/], iLocal_598[0], 0))
		{
			return 1;
		}
	}
	return 0;
}
























void func_890()//Position - 0x7A6A4
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	char* sVar6;
	bool bVar7;
	struct<3> Var8;
	bool bVar11;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	struct<3> Var20;
	struct<3> Var23;
	int iVar26;
	bool bVar27;
	
	func_835();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_774)
	{
		if (!Global_86806[2])
		{
			if (iLocal_129[2] == 2)
			{
				if (!iLocal_880 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (iLocal_129[2] == 2)
					{
						func_266("fin_c2_mcs_1", -1664.343f, -1125.821f, 12.23751f, 1000f, 2000f);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (!PED::IS_PED_INJURED(uLocal_587[0]))
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Steve_FBI", uLocal_587[0], 0);
							}
							if (!PED::IS_PED_INJURED(uLocal_587[1]))
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Grip_beside_director", uLocal_587[1], 0);
							}
						}
						if ((GlobalFunc_552(1, 0, 1) && func_235()) && !GlobalFunc_111())
						{
							if (iLocal_134[0] != 4 && iLocal_134[0] != 5)
							{
								if (iLocal_787[2])
								{
									if (GlobalFunc_Has_Cutscene_Loaded())
									{
										bLocal_881 = false;
										iLocal_774 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_851)
					{
						if (!bLocal_906)
						{
							if (iLocal_134[0] != 4 && iLocal_134[0] != 5)
							{
								bLocal_906 = func_896("FC2_STVHLP");
							}
						}
					}
					switch (iLocal_580)
					{
						case 0:
							if (iLocal_129[2] == 2)
							{
								AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("FIN_C2_MCS_1", uLocal_587[0]);
								iLocal_580 = 1;
							}
							break;
						
						case 1:
							if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("FIN_C2_MCS_1", 0))
							{
								if (iLocal_134[0] < 4)
								{
									func_762(0, 2, 0);
									func_762(1, 2, 0);
									func_895(0, 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_649, uLocal_1067, "FIN_C2_MCS_1_CAM", func_35(3));
									AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_1067);
								}
								iLocal_580 = 2;
							}
							break;
						}
				}
				if (iLocal_134[0] == 2)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				}
				if (iLocal_880)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067) && iLocal_134[0] == 2)
					{
						fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1067);
						if (fVar2 >= 0.3f)
						{
							iLocal_931 = 1;
						}
						if (iLocal_1131 < 4)
						{
							switch (iLocal_1131)
							{
								case 0:
									fVar3 = 0f;
									iVar1 = 1;
									break;
								
								case 1:
									fVar3 = 0.3405f;
									iVar1 = 0;
									break;
								
								case 2:
									fVar3 = 0.5027f;
									iVar1 = 1;
									break;
								
								case 3:
									fVar3 = 0.711f;
									iVar1 = 0;
									break;
							}
							if (fVar2 >= fVar3)
							{
								bLocal_896 = iVar1;
								iLocal_1131++;
							}
						}
					}
					else
					{
						bLocal_896 = false;
					}
					if (Global_67058)
					{
						iLocal_1148 = MISC::GET_GAME_TIMER();
					}
					if (!bLocal_850)
					{
						if ((CAM::DOES_CAM_EXIST(uLocal_649) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067)) && iLocal_134[0] == 2)
						{
							if (iLocal_580 == 2)
							{
								if (!iLocal_851)
								{
									iLocal_851 = func_896("FC2_WHLHLP");
									if (iLocal_851)
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
									}
								}
							}
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80))
							{
								if ((((MISC::GET_GAME_TIMER() >= iLocal_1148 + 1000 && !PAD::IS_CONTROL_PRESSED(0, 37)) && !PAD::IS_CONTROL_PRESSED(0, 25)) && !GlobalFunc_116(0)) && !iLocal_893)
								{
									func_894();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									SYSTEM::WAIT(0);
									CAM::SET_CAM_ACTIVE(iLocal_649, 1);
									func_31(16);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
									HUD::DISPLAY_RADAR(0);
									AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
									CAM::SET_CINEMATIC_MODE_ACTIVE(0);
									RECORDING::_0x48621C9FCA3EBD28(4);
									iLocal_851 = 1;
									bLocal_894 = false;
									iLocal_895 = 0;
									iLocal_1132 = MISC::GET_GAME_TIMER();
									bLocal_850 = true;
								}
							}
							else
							{
								iLocal_893 = 0;
							}
						}
					}
					else
					{
						if (GlobalFunc_74("FC2_WHLHLP"))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_1062 + 1000)
							{
								HUD::CLEAR_HELP(0);
								iLocal_1062 = MISC::GET_GAME_TIMER();
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_593[1], 1);
						}
						iVar4 = 0;
						if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, 80))
						{
							if (!iLocal_895)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1132 + 500)
								{
									iVar4 = 1;
									iLocal_893 = 0;
								}
								else
								{
									iLocal_895 = 1;
								}
								bLocal_894 = true;
							}
						}
						else if (bLocal_894)
						{
							iVar4 = 1;
							iLocal_893 = 1;
						}
						if (((iVar4 || !CAM::DOES_CAM_EXIST(iLocal_649)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067)) || iLocal_134[0] != 2)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_649))
							{
								CAM::SET_CAM_ACTIVE(iLocal_649, 0);
							}
							RECORDING::_0x81CBAE94390F9F89();
							func_40(16);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::DISPLAY_RADAR(1);
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							HUD::CLEAR_PRINTS();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
							iLocal_897 = 0;
							bLocal_850 = false;
						}
					}
					if (bLocal_850)
					{
						if (iLocal_897)
						{
							if (!bLocal_896)
							{
								GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
								iLocal_897 = 0;
							}
						}
						else if (bLocal_896)
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
							iLocal_897 = 1;
						}
					}
					if (bLocal_850)
					{
						func_894();
						GlobalFunc_7629();
						PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067) && iLocal_134[0] == 2)
				{
					bVar7 = false;
					switch (iLocal_1140)
					{
						case 0:
							fVar5 = 0f;
							sVar6 = "FC2_SUB1";
							break;
						
						case 1:
							fVar5 = 0.032f;
							bVar7 = true;
							break;
						
						case 2:
							fVar5 = 0.036f;
							sVar6 = "FC2_SUB2";
							break;
						
						case 3:
							fVar5 = 0.095f;
							bVar7 = true;
							break;
						
						case 4:
							fVar5 = 0.1f;
							sVar6 = "FC2_SUB3";
							break;
						
						case 5:
							fVar5 = 0.165f;
							bVar7 = true;
							break;
						
						case 6:
							fVar5 = 0.177f;
							sVar6 = "FC2_SUB4";
							break;
						
						case 7:
							fVar5 = 0.234f;
							bVar7 = true;
							break;
						
						case 8:
							fVar5 = 0.248f;
							sVar6 = "FC2_SUB5";
							break;
						
						case 9:
							fVar5 = 0.305f;
							bVar7 = true;
							break;
						
						case 10:
							fVar5 = 0.313f;
							sVar6 = "FC2_SUB6";
							break;
						
						case 11:
							fVar5 = 0.326f;
							bVar7 = true;
							break;
						
						case 12:
							fVar5 = 0.335f;
							sVar6 = "FC2_SUB7";
							break;
						
						case 13:
							fVar5 = 0.339f;
							bVar7 = true;
							break;
						
						case 14:
							fVar5 = 0.347f;
							sVar6 = "FC2_SUB8";
							break;
						
						case 15:
							fVar5 = 0.359f;
							bVar7 = true;
							break;
						
						case 16:
							fVar5 = 0.359f;
							sVar6 = "FC2_SUB9";
							break;
						
						case 17:
							fVar5 = 0.375f;
							bVar7 = true;
							break;
						
						case 18:
							fVar5 = 0.382f;
							sVar6 = "FC2_SUB10";
							break;
						
						case 19:
							fVar5 = 0.408f;
							bVar7 = true;
							break;
						
						case 20:
							fVar5 = 0.414f;
							sVar6 = "FC2_SUB11";
							break;
						
						case 21:
							fVar5 = 0.44f;
							bVar7 = true;
							break;
						
						case 22:
							fVar5 = 0.446f;
							sVar6 = "FC2_SUB12";
							break;
						
						case 23:
							fVar5 = 0.451f;
							bVar7 = true;
							break;
						
						case 24:
							fVar5 = 0.467f;
							sVar6 = "FC2_SUB13";
							break;
						
						case 25:
							fVar5 = 0.473f;
							bVar7 = true;
							break;
						
						case 26:
							fVar5 = 0.478f;
							sVar6 = "FC2_SUB14";
							break;
						
						case 27:
							fVar5 = 0.502f;
							bVar7 = true;
							break;
						
						case 28:
							fVar5 = 0.524f;
							sVar6 = "FC2_SUB15";
							break;
						
						case 29:
							fVar5 = 0.594f;
							bVar7 = true;
							break;
						
						case 30:
							fVar5 = 0.604f;
							sVar6 = "FC2_SUB16";
							break;
						
						case 31:
							fVar5 = 0.665f;
							bVar7 = true;
							break;
						
						case 32:
							fVar5 = 0.675f;
							sVar6 = "FC2_SUB17";
							break;
						
						case 33:
							fVar5 = 0.688f;
							bVar7 = true;
							break;
						
						case 34:
							fVar5 = 0.716f;
							sVar6 = "FC2_SUB18";
							break;
						
						case 35:
							fVar5 = 0.723f;
							bVar7 = true;
							break;
						
						case 36:
							fVar5 = 0.725f;
							sVar6 = "FC2_SUB19";
							break;
						
						case 37:
							fVar5 = 0.738f;
							bVar7 = true;
							break;
						
						case 38:
							fVar5 = 0.739f;
							sVar6 = "FC2_SUB20";
							break;
						
						case 39:
							fVar5 = 0.746f;
							bVar7 = true;
							break;
						
						case 40:
							fVar5 = 0.75f;
							sVar6 = "FC2_SUB21";
							break;
						
						case 41:
							fVar5 = 0.763f;
							bVar7 = true;
							break;
						
						case 42:
							fVar5 = 0.791f;
							sVar6 = "FC2_SUB22";
							break;
						
						case 43:
							fVar5 = 0.803f;
							bVar7 = true;
							break;
						
						case 44:
							fVar5 = 0.804f;
							sVar6 = "FC2_SUB23";
							break;
						
						case 45:
							fVar5 = 0.837f;
							bVar7 = true;
							break;
						
						case 46:
							fVar5 = 0.844f;
							sVar6 = "FC2_SUB24";
							break;
						
						case 47:
							fVar5 = 0.853f;
							bVar7 = true;
							break;
						
						case 48:
							fVar5 = 0.856f;
							sVar6 = "FC2_SUB25";
							break;
						
						case 49:
							fVar5 = 0.868f;
							bVar7 = true;
							break;
						
						case 50:
							fVar5 = 0.886f;
							sVar6 = "FC2_SUB26";
							break;
						
						case 51:
							fVar5 = 0.91f;
							bVar7 = true;
							break;
						
						case 52:
							fVar5 = 0.933f;
							sVar6 = "FC2_SUB27";
							break;
						
						case 53:
							fVar5 = 0.95f;
							bVar7 = true;
							break;
					}
					if (iLocal_1140 < 54)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1067) >= fVar5)
						{
							if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (!bVar7)
								{
									if (bLocal_850)
									{
										HUD::_0x57D760D55F54E071(1);
										GlobalFunc_164(sVar6, 7500, 1);
									}
								}
								else if (bLocal_850)
								{
									HUD::CLEAR_PRINTS();
								}
							}
							else if (bLocal_850)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_1140++;
						}
					}
				}
				if (!iLocal_787[2])
				{
					if (iLocal_134[0] < 4)
					{
						if (func_268("FINC1_THR", 0, 0, 0))
						{
							GlobalFunc_2867("FINC2_STEVE_START");
							iLocal_787[2] = 1;
						}
					}
					else
					{
						iLocal_787[2] = 1;
					}
				}
				else if (!iLocal_783[2])
				{
					if (!PED::IS_PED_INJURED(uLocal_587[0]))
					{
						if (iLocal_580 == 2)
						{
							iLocal_783[2] = func_237("FC2_KILLSTE", 1, 0);
						}
					}
				}
				if (iLocal_134[0] == 4 || iLocal_134[0] == 5)
				{
					if (!iLocal_855[0])
					{
						if (bLocal_886)
						{
							if (!bLocal_885)
							{
								if (bLocal_887)
								{
									bLocal_885 = func_268("FINC1_SSETRE", 0, 0, 0);
								}
								else
								{
									Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_587[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
									if (Var8.f_1 > 0f && Var8.f_2 > -1f)
									{
										bLocal_885 = func_268("FINC1_SSETRE", 0, 0, 0);
									}
									else
									{
										bLocal_885 = func_268("FINC1_STPAN", 0, 0, 0);
									}
								}
							}
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_587[0]))
					{
						bVar11 = false;
						if (MISC::GET_GAME_TIMER() >= iLocal_1087 + 7400)
						{
							bVar11 = true;
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1067))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1067) >= 0.98f)
							{
								bVar11 = true;
							}
						}
						if (bVar11)
						{
							Var12 = { ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1) };
							Var15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							if (Var12.f_2 > (Var15.f_2 + 5f) && !GlobalFunc_111())
							{
								func_704(17);
							}
						}
					}
				}
				iVar18 = 0;
				iVar0 = 0;
				while (iVar0 < 2)
				{
					iVar19 = iVar0;
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iVar0]))
					{
						if (PED::IS_PED_INJURED(uLocal_587[iVar0]) || iLocal_855[iVar0])
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_636[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_636[iVar0]));
							}
							if (iVar19 == 0)
							{
								iVar18 = 1;
								iLocal_1340 = 2;
								iLocal_945 = iLocal_945;
								if (bLocal_5064)
								{
									iLocal_940 = 0;
									iLocal_945 = MISC::GET_GAME_TIMER();
									while (!func_727(&Local_2582, 1))
									{
										if (!iLocal_940)
										{
											if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
											{
												if (CAM::IS_CAM_ACTIVE(Local_2582.f_1))
												{
													if (CAM::GET_CAM_SPLINE_PHASE(Local_2582.f_1) >= 0.89f)
													{
														GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
														AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
														iLocal_940 = 1;
													}
												}
											}
										}
										func_906();
										SYSTEM::WAIT(0);
									}
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
									bLocal_934 = true;
								}
								else if (bLocal_5065)
								{
									iLocal_940 = 0;
									iLocal_945 = MISC::GET_GAME_TIMER();
									while (!func_727(&Local_3823, 1))
									{
										if (!iLocal_940)
										{
											if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
											{
												if (CAM::IS_CAM_ACTIVE(Local_3823.f_1))
												{
													if (CAM::GET_CAM_SPLINE_PHASE(Local_3823.f_1) >= 0.89f)
													{
														GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
														AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
														iLocal_940 = 1;
													}
												}
											}
										}
										func_906();
										SYSTEM::WAIT(0);
									}
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
									bLocal_934 = true;
								}
								else
								{
									if (!iLocal_937)
									{
										if (!PED::IS_PED_INJURED(uLocal_587[0]))
										{
											Var20 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
											Var23 = { ENTITY::GET_ENTITY_COORDS(uLocal_587[0], 1) };
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var20, Var23, 1) < 5f)
											{
												bLocal_936 = true;
											}
											else
											{
												bLocal_936 = false;
											}
										}
										iLocal_937 = 1;
									}
									if (!bLocal_936)
									{
										while (!func_727(&iLocal_1341, 1))
										{
											func_906();
											SYSTEM::WAIT(0);
										}
									}
									if (!PED::IS_PED_INJURED(uLocal_587[1]) && !iLocal_855[1])
									{
										func_892();
									}
									else
									{
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
										bLocal_934 = true;
									}
								}
							}
						}
						else if (iVar19 == 0)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_636[iVar0]))
							{
								uLocal_636[iVar0] = func_702(uLocal_587[iVar0], 1);
							}
							if (!iLocal_890)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_587[iVar0], 150f, 150f, 150f, 0, 1, 0))
								{
									iLocal_890 = 1;
								}
								else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_587[iVar0], 330f, 330f, 330f, 0, 1, 0))
								{
									func_704(24);
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_587[iVar0], 210f, 210f, 210f, 0, 0, 0))
							{
								func_704(24);
							}
						}
					}
					iVar0++;
				}
				if (iVar18 && MISC::GET_GAME_TIMER() >= iLocal_1135 + 120)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[0]))
					{
						if (PED::GET_PED_LAST_DAMAGE_BONE(uLocal_587[0], &iVar26))
						{
							if (iVar26 == 31086)
							{
								GlobalFunc_553(271);
							}
						}
					}
					if (func_235())
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 15f, 4);
						GlobalFunc_565(264, 1, 0);
						iLocal_48.f_18[2] = 1;
						func_40(8);
						func_40(15);
						func_40(16);
						func_40(17);
						GlobalFunc_4948(&uLocal_20, 0, 0);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						Global_86806[2] = 1;
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						if (!bLocal_934)
						{
							if (!PED::IS_PED_INJURED(uLocal_587[1]) && !iLocal_855[1])
							{
								bLocal_881 = true;
								iLocal_774 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (!iLocal_888)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1129)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (!PED::IS_PED_INJURED(uLocal_590[iVar0]))
						{
							PED::SET_PED_ACCURACY(uLocal_590[iVar0], 40);
						}
						iVar0++;
					}
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FIN_C2_01", 0f);
					PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
					iLocal_888 = 1;
				}
			}
			if (!iLocal_795[2])
			{
				if (GlobalFunc_663("FC2_KILLSTE", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						GlobalFunc_2867("FINC2_STEVE_DONE_FOOT");
					}
					else
					{
						GlobalFunc_2867("FINC2_STEVE_DONE");
					}
					iLocal_795[2] = 1;
				}
				else if (!bLocal_799[2])
				{
					if (func_237("LOSE_WANTED", 1, 0))
					{
						bLocal_799[2] = 1;
						GlobalFunc_2867("FINC2_STEVE_LOSE_COPS");
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_126.f_1 != 0)
			{
				if (GlobalFunc_663("LOSE_WANTED", 0, 0))
				{
					func_242(0, 1, 0, 0);
				}
				bLocal_821 = false;
				if (!iLocal_930)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (!PED::IS_PED_INJURED(uLocal_590[iVar0]))
						{
							TASK::TASK_WANDER_STANDARD(uLocal_590[iVar0], 1193033728, 0);
						}
						iVar0++;
					}
					iLocal_930 = 1;
				}
				if (!bLocal_791[2])
				{
					bLocal_791[2] = func_268("FINC1_TDH", 0, 0, 0);
				}
				else if (!iLocal_811)
				{
					if (func_781())
					{
						iLocal_811 = 1;
					}
					else
					{
						iLocal_811 = func_830();
					}
				}
				else if (func_781())
				{
					func_273(4, 0, 0, 1, 0, 1, 1, 1);
				}
				else if (!bLocal_812)
				{
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
					bLocal_812 = func_829();
				}
				else
				{
					if (!iLocal_816)
					{
						if (Local_126.f_1 == 0)
						{
							iLocal_816 = func_237(func_828(), 1, 0);
						}
						if (!iLocal_48.f_18[0])
						{
							if (iLocal_48.f_18[1])
							{
								func_827(0);
							}
						}
						else if (!iLocal_48.f_18[1])
						{
							func_827(1);
						}
					}
					if (func_825())
					{
						func_782();
					}
				}
			}
			else
			{
				iLocal_930 = 0;
				if (!bLocal_821)
				{
					bLocal_821 = func_237("LOSE_WANTED", 1, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, 1);
					MISC::ENABLE_DISPATCH_SERVICE(7, 1);
					PED::SET_CREATE_RANDOM_COPS(1);
				}
				iLocal_816 = 0;
			}
			if (func_235())
			{
				bVar27 = false;
				if (Local_126.f_1 == 0)
				{
					if (GlobalFunc_8315() == 1 || GlobalFunc_8315() == 0)
					{
						func_273(0, 0, 1, 1, 0, 1, 0, 1);
						bVar27 = true;
					}
				}
				if (bVar27)
				{
					if (!PED::IS_PED_INJURED(iLocal_48[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_48[2], iLocal_593[1], -1);
							ENTITY::SET_ENTITY_COORDS(iLocal_593[1], func_521(2), 1, 0, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_593[1], 1);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_48[2], func_521(2), 1, 0, 0, 1);
						}
					}
				}
			}
		}
	}
	else if (bLocal_881)
	{
		func_892();
	}
	else
	{
		func_891();
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_629))
	{
		HUD::REMOVE_BLIP(&uLocal_629);
	}
}

void func_891()//Position - 0x7B8EC
{
	int iVar0;
	bool bVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_593[1], 1);
	}
	switch (iLocal_47)
	{
		case 0:
			iLocal_1058 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(uLocal_587[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_587[0], "Steve_FBI", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_587[1]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_587[1], "Grip_beside_director", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_622))
			{
				ENTITY::DETACH_ENTITY(iLocal_622, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_622, "film_crew_Camera", 0, 0, 0);
			}
			iLocal_604 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_604 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				Local_994 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fLocal_1025 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			}
			uLocal_581 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_590(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 500f, 12, 127);
			func_621(3);
			CUTSCENE::START_CUTSCENE(0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_47 = 1;
			break;
		
		case 1:
			if (!iLocal_776)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_41();
					GlobalFunc_4948(&uLocal_20, 0, 0);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					func_40(15);
					GlobalFunc_2884(&uLocal_20);
					GlobalFunc_2840(&uLocal_20, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[3]))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_605[3], 1), 30f, 1, 0, 0, 0);
					}
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_604))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_604, ENTITY::GET_ENTITY_COORDS(iLocal_604, 1), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_604, ENTITY::GET_ENTITY_HEADING(iLocal_604));
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					GlobalFunc_2882(iLocal_604);
					iLocal_776 = 1;
				}
			}
			switch (iLocal_1131)
			{
				case 0:
					iVar0 = 5503;
					bVar1 = true;
					break;
				
				case 1:
					iVar0 = 10892;
					bVar1 = false;
					break;
				
				case 2:
					iVar0 = 14101;
					bVar1 = true;
					break;
				
				case 3:
					iVar0 = 21858;
					bVar1 = false;
					break;
				
				case 4:
					iVar0 = 25354;
					bVar1 = true;
					break;
			}
			if (iLocal_1131 < 5)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= iVar0)
				{
					if (bVar1)
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
					}
					else
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					iLocal_1131++;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Steve_FBI", 0))
			{
				func_762(0, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Grip_beside_director", 0))
			{
				func_762(1, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("film_crew_Camera", 0))
			{
				func_761();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_604, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_604, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_604);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_994, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1025);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_581))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_581);
				}
				iLocal_813 = 0;
				iLocal_849 = 1;
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				func_225(0, 1, 1, 0, 1, 0, 1000, 1);
				iLocal_1131 = 0;
				iLocal_880 = 1;
			}
			break;
		
		case 2:
			break;
	}
}

void func_892()//Position - 0x7BC32
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[1], 0))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_593[1], 1);
	}
	switch (iLocal_47)
	{
		case 0:
			func_225(1, 1, 1, 0, 1, 0, 1000, 1);
			fLocal_1023 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			if (!bLocal_5064 && !bLocal_5065)
			{
				CAM::SET_CAM_ACTIVE(uLocal_650, 1);
				CAM::RENDER_SCRIPT_CAMS(true, !bLocal_936, 3000, 1, 0, 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
			}
			if (bLocal_936)
			{
				if (!PED::IS_PED_INJURED(uLocal_587[0]))
				{
					func_763(&uLocal_1067, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_587[0], uLocal_1067, func_35(4), "Death_Steve", 1000f, -8f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_587[0], 0, 0);
				}
				if (iLocal_134[1] != 6)
				{
					func_762(1, 4, 1);
				}
			}
			func_31(17);
			uLocal_581 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_590(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 500f, 12, 127);
			iLocal_939 = 0;
			iLocal_1058 = MISC::GET_GAME_TIMER();
			if (!bLocal_5064 && !bLocal_5065)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
			break;
		
		case 1:
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1023);
			if (!PED::IS_PED_INJURED(uLocal_587[1]) && !iLocal_855[1])
			{
				if (!bLocal_824)
				{
					bLocal_824 = func_268("FINC1_SHOT", 0, 0, 0);
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 5800 || (iLocal_855[1] && MISC::GET_GAME_TIMER() >= iLocal_1058 + 2500))
			{
				if (!iLocal_775)
				{
					iLocal_47 = 2;
				}
			}
			if (!iLocal_939)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1058 + 5500)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_939 = 1;
					}
				}
			}
			if (!iLocal_775)
			{
				if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_1057 + 1000)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					iLocal_775 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_6685(0);
				GlobalFunc_4935();
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			if (iLocal_775)
			{
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_590[iVar0]))
				{
					PED::SET_PED_ACCURACY(uLocal_590[iVar0], 0);
				}
				iVar0++;
			}
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_581))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_581);
			}
			func_40(17);
			iLocal_1129 = MISC::GET_GAME_TIMER() + 3000;
			func_225(0, 1, 1, 0, 1, 0, 1000, 1);
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			break;
	}
}


void func_894()//Position - 0x7BEED
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_622))
	{
		ENTITY::GET_ENTITY_MATRIX(iLocal_622, &Var3, &Var0, &uVar6, &Var9);
		Var12 = { Var9 + Var0 * Vector(0.165f, 0.165f, 0.165f) + Var3 * Vector(0.169f, 0.169f, 0.169f) };
		GRAPHICS::_DRAW_SPOT_LIGHT_WITH_SHADOW(Var12, Var0, 255, 255, 255, 4f, 0.2f, 20f, 25f, 2.5f, 0);
	}
}

void func_895(int iParam0, bool bParam1)//Position - 0x7BF54
{
	if (CAM::DOES_CAM_EXIST(iLocal_649))
	{
		CAM::DESTROY_CAM(iLocal_649, 0);
	}
	iLocal_649 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", iParam0);
	CAM::RENDER_SCRIPT_CAMS(iParam1, false, 3000, 1, 0, 0);
}

int func_896(char* sParam0)//Position - 0x7BF89
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_235())
		{
			GlobalFunc_159(sParam0, -1);
			return 1;
		}
	}
	return 0;
}

void func_897()//Position - 0x7BFAC
{
	int iVar0;
	char* sVar1;
	
	iVar0 = GlobalFunc_8315();
	func_835();
	if (!iLocal_774)
	{
		if (!iLocal_803[GlobalFunc_8315()])
		{
			if (Local_126.f_1 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), func_523(GlobalFunc_8315()), func_522(GlobalFunc_8315()), 0, 0, 0))
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_803[GlobalFunc_8315()] = 1;
				}
			}
		}
		if (iLocal_42 == 0)
		{
			if (!bLocal_837)
			{
				if (bLocal_779[iVar0])
				{
					if (Local_126.f_1 == 0)
					{
						if (iVar0 != 0)
						{
							if ((!Global_86806[2] && !Global_86806[0]) && !Global_86806[1])
							{
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
								bLocal_837 = func_268("FINC1_STARGS", 0, 0, 0);
								if (bLocal_837)
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 7f, 4);
								}
							}
						}
					}
				}
			}
			else if (Local_126.f_1 == 0)
			{
				if (!iLocal_838)
				{
					if (iVar0 == 1)
					{
						AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
						iLocal_838 = func_268("FINC1_FENCM", 0, 0, 0);
					}
					else if (iVar0 == 2)
					{
						AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
						iLocal_838 = func_268("FINC1_TENCM", 0, 0, 0);
					}
				}
				if (iVar0 == 1)
				{
					if (!bLocal_839)
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_900(iVar0), 3000f, 3000f, 3000f, 0, 0, 0) || (iLocal_1144 >= 0 && MISC::GET_GAME_TIMER() >= iLocal_1144)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_900(iVar0), 600f, 600f, 600f, 0, 0, 0))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
							{
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
								GlobalFunc_200(&uLocal_1155, 3);
								GlobalFunc_173(&uLocal_1155, 3, 0, "LAMAR", 0, 1);
								bLocal_839 = GlobalFunc_10638(&uLocal_1155, 19, "FINC1AU", "FINC1_LCALL5", 8, 1, 0, 0, 0);
							}
						}
					}
				}
				else if (iVar0 == 2)
				{
					if (!bLocal_840)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_900(iVar0), 3000f, 3000f, 3000f, 0, 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_900(iVar0), 600f, 600f, 600f, 0, 0, 0))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1151)
								{
									AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
									GlobalFunc_200(&uLocal_1155, 3);
									GlobalFunc_173(&uLocal_1155, 3, 0, "nervousron", 0, 1);
									bLocal_840 = GlobalFunc_10638(&uLocal_1155, 20, "CHATCAU", "CHATC_RON06", 8, 1, 0, 0, 0);
								}
							}
							else
							{
								iLocal_1151 = MISC::GET_GAME_TIMER() + 3000;
							}
						}
					}
				}
			}
			else
			{
				iLocal_838 = 1;
			}
			if (!iLocal_777)
			{
				if (func_825())
				{
					func_782();
				}
				if (Local_126.f_1 == 0)
				{
					if (func_255(0, 0, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_629))
						{
							func_243();
							func_242(0, 1, 1, 0);
							uLocal_629 = func_239(func_900(iVar0), 1);
							if (HUD::DOES_BLIP_EXIST(uLocal_629))
							{
								HUD::SET_BLIP_SCALE(uLocal_629, 0.7f);
								HUD::SET_BLIP_COLOUR(uLocal_629, 1);
								HUD::SET_BLIP_ROUTE_COLOUR(uLocal_629, 1);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_629, "BLIP_270");
							}
						}
						if (!bLocal_779[iVar0])
						{
							if (iLocal_551[iVar0] != 1)
							{
								switch (iVar0)
								{
									case 0:
										sVar1 = "FC2_KILLSTR";
										break;
									
									case 1:
										sVar1 = "FC2_KILLTRI";
										break;
									
									case 2:
										sVar1 = "FC2_KILLSTE";
										break;
								}
								bLocal_779[iVar0] = func_237(sVar1, 1, 0);
							}
						}
						if (iLocal_129[iVar0] == 2)
						{
							if (func_898())
							{
								switch (iVar0)
								{
									case 0:
										iLocal_814 = 1;
										func_273(2, 0, 0, 1, 0, 0, 0, 1);
										break;
									
									case 2:
										iLocal_813 = 1;
										func_273(1, 0, 0, 1, 0, 0, 0, 1);
										break;
									
									case 1:
										iLocal_815 = 1;
										func_273(3, 0, 0, 1, 0, 0, 0, 1);
										break;
									}
								}
							}
						}
				}
			}
			else
			{
				GlobalFunc_3001();
			}
		}
	}
}

int func_898()//Position - 0x7C390
{
	switch (GlobalFunc_8315())
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -196.27f, -1515.16f, 29.62f, -226.52f, -1490.69f, 33f, 75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1695.534f, -1156.338f, 12f, -1574.942f, -1012.826f, 15f, 52f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1728.331f, -1128.913f, 12f, -1661.748f, -1049.736f, 15f, 55f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1741.41f, -1116.077f, 12f, -1792.803f, -1177.224f, 15f, 18f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1609.105f, -1012.958f, 12.01757f, 10f, 10f, 3f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3007.114f, 114.438f, 10f, -3038.896f, 85.495f, 17.5f, 25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3042.929f, 114.96f, 10f, -2973.122f, 58.09f, 15f, 40f, 0, 1, 0))
			{
				return 1;
			}
			else if (!PED::IS_PED_INJURED(Local_278[0 /*14*/]))
			{
				if ((PED::IS_TRACKED_PED_VISIBLE(Local_278[0 /*14*/]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[0 /*14*/], 100f, 100f, 100f, 0, 0, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_278[0 /*14*/], 50f, 50f, 100f, 0, 1, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}


Vector3 func_900(int iParam0)//Position - 0x7C5EF
{
	switch (iParam0)
	{
		case 0:
			return -203.5079f, -1510.437f, 31.6161f;
			break;
		
		case 1:
			return -3018.101f, 85.4329f, 11.5978f;
			break;
		
		case 2:
			return -1662.81f, -1121.16f, 42.9496f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_901()//Position - 0x7C652
{
	if (!iLocal_774)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iLocal_852)
			{
				func_902(0);
				switch (GlobalFunc_8315())
				{
					case 0:
						func_31(3);
						break;
					
					case 2:
						if (iLocal_42 < 4)
						{
							func_31(6);
						}
						else if (iLocal_42 == 4)
						{
							func_31(9);
						}
						else if (iLocal_42 == 6)
						{
							func_31(10);
						}
						break;
					
					case 1:
						func_31(0);
						break;
				}
				iLocal_853 = 0;
				iLocal_852 = 1;
			}
		}
		else if (!iLocal_853)
		{
			func_902(0);
			switch (GlobalFunc_8315())
			{
				case 0:
					func_31(4);
					break;
				
				case 2:
					if (iLocal_42 < 4)
					{
						func_31(7);
					}
					break;
				
				case 1:
					func_31(1);
					break;
			}
			iLocal_852 = 0;
			iLocal_853 = 1;
		}
	}
}

void func_902(bool bParam0)//Position - 0x7C730
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			func_40(iVar0);
			iVar0++;
		}
	}
	else
	{
		func_40(0);
		func_40(1);
		func_40(3);
		func_40(4);
		func_40(6);
		func_40(7);
		func_40(9);
		func_40(10);
		func_40(11);
	}
}

void func_903()//Position - 0x7C789
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			GlobalFunc_504(iVar1, 258);
			GlobalFunc_503(iVar1, 259);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		GlobalFunc_504(0, 258);
		GlobalFunc_503(0, 259);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 263);
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == func_341(3))
		{
			GlobalFunc_565(267, 1, 0);
		}
	}
}



void func_906()//Position - 0x7C8A4
{
	int iVar0;
	
	switch (iLocal_577)
	{
		case 0:
			if (iLocal_42 < 4 && !Global_86806[2])
			{
				func_588(24);
				func_588(25);
				iLocal_577 = 1;
			}
			break;
		
		case 1:
			if (func_602())
			{
				STREAMING::REMOVE_IPL("ferris_finale_Anim");
				iLocal_625 = OBJECT::CREATE_OBJECT(func_69(24), 0f, 1f, 2f, 1, 1, 0);
				OBJECT::_MARK_OBJECT_FOR_DELETION(iLocal_625);
				func_910();
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_625, 1000);
				iVar0 = 0;
				while (iVar0 < 16)
				{
					iLocal_605[iVar0] = OBJECT::CREATE_OBJECT(func_69(25), 0f, 1f, 2f, 1, 1, 0);
					OBJECT::_MARK_OBJECT_FOR_DELETION(iLocal_605[iVar0]);
					func_908(iVar0, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_605[iVar0], 1000);
					iVar0++;
				}
				iLocal_577 = 2;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_625))
			{
				if (STREAMING::IS_IPL_ACTIVE("ferris_finale_Anim"))
				{
					STREAMING::REMOVE_IPL("ferris_finale_Anim");
				}
				if ((((Global_86806[2] || iLocal_42 >= 4) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_267(20), 350f, 350f, 350f, 0, 0, 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_625))
				{
					func_724();
					func_723();
					func_264(14);
					func_264(15);
					func_264(16);
					func_264(17);
					func_264(20);
					func_620(0);
					func_620(3);
					func_620(2);
					func_620(4);
					func_620(1);
					func_620(5);
					func_608(1);
					func_907();
					iLocal_577 = 0;
				}
				else if (iLocal_849)
				{
					if (!iLocal_892)
					{
						if (!Global_86806[2])
						{
							if (iLocal_931)
							{
								fLocal_1022 = (fLocal_1022 + (-0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_1022 < -6f)
								{
									fLocal_1022 = -6f;
								}
							}
							else
							{
								fLocal_1022 = (fLocal_1022 + (-0.25f * SYSTEM::TIMESTEP()));
								if (fLocal_1022 < -2f)
								{
									fLocal_1022 = -2f;
								}
							}
						}
						else
						{
							fLocal_1022 = (fLocal_1022 - (-0.25f * SYSTEM::TIMESTEP()));
							if (fLocal_1022 >= 0f)
							{
								fLocal_1022 = 0f;
								iLocal_892 = 1;
							}
						}
						fLocal_1021 = (fLocal_1021 + (fLocal_1022 * SYSTEM::TIMESTEP()));
						if (fLocal_1021 > 360f)
						{
							fLocal_1021 = (fLocal_1021 - 360f);
						}
						func_910();
						iVar0 = 0;
						while (iVar0 < 16)
						{
							func_908(iVar0, 0);
							iVar0++;
						}
					}
				}
			}
			else
			{
				func_907();
			}
			break;
	}
}

void func_907()//Position - 0x7CB17
{
	int iVar0;
	
	STREAMING::REQUEST_IPL("ferris_finale_Anim");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_625))
	{
		OBJECT::DELETE_OBJECT(&iLocal_625);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_605[iVar0]));
		}
		iVar0++;
	}
	func_264(24);
	func_264(25);
	iLocal_577 = 0;
}

void func_908(int iParam0, bool bParam1)//Position - 0x7CB75
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iParam0]))
	{
		Var0 = { func_909(iParam0) };
		if (bParam1)
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_605[iParam0], Var0, 1, 0, 0, 1);
		}
		else
		{
			OBJECT::SLIDE_OBJECT(iLocal_605[iParam0], Var0, 1f, 1f, 1f, 0);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_605[iParam0], 1);
	}
}

Vector3 func_909(int iParam0)//Position - 0x7CBD0
{
	float fVar0;
	
	fVar0 = ((360f / 16f) * IntToFloat(iParam0));
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_625, 0f, (15.3f * SYSTEM::COS(fVar0)), (15.3f * SYSTEM::SIN(fVar0)));
}

void func_910()//Position - 0x7CC09
{
	ENTITY::SET_ENTITY_COORDS(iLocal_625, func_267(20), 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(iLocal_625, fLocal_1021, 0f, 0f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_625, 1);
}

void func_911()//Position - 0x7CC38
{
	func_913();
	switch (iLocal_41)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_75(GlobalFunc_8315(), 0);
				}
				iLocal_772 = 1;
				iLocal_932 = 1;
				func_927();
			}
			break;
	}
}


void func_913()//Position - 0x7CCB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (!iLocal_774)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_48)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_48[iVar0]))
				{
					iVar1 = iVar0;
					if (iVar1 != GlobalFunc_8315())
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_632[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_632[iVar0]));
						}
						if (GlobalFunc_663("FC1_GOMT", 0, 0))
						{
							func_242(1, 1, 0, 0);
						}
						switch (iVar1)
						{
							case 0:
								func_704(0);
								break;
							
							case 2:
								func_704(2);
								break;
							
							case 1:
								func_704(1);
								break;
							}
						}
					}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_593)
		{
			iVar2 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[iVar2]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_593[iVar2], 0))
				{
					func_262();
					switch (iVar2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							break;
						
						case 3:
							if (iLocal_42 == 6)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_593[iVar2]))
								{
									func_704(28);
								}
								else
								{
									func_704(4);
								}
							}
							break;
					}
				}
				else
				{
					bVar4 = true;
					switch (iVar2)
					{
						case 0:
							bVar4 = false;
							break;
						
						case 1:
							bVar4 = false;
							break;
						
						case 2:
							bVar4 = false;
							break;
						
						case 3:
							if (iLocal_42 == 6)
							{
								iVar3 = 2;
							}
							else
							{
								bVar4 = false;
							}
							break;
					}
					if (bVar4)
					{
						if (GlobalFunc_8315() == iVar3)
						{
							if (Local_126.f_1 == 0)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_593[iVar2], 0) > 100f)
								{
									switch (iVar2)
									{
										case 0:
											func_704(14);
											break;
										
										case 1:
											func_704(11);
											break;
										
										case 2:
											func_704(8);
											break;
										
										case 3:
											func_704(5);
											break;
										}
								}
								if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_593[iVar2], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_593[iVar2], 2, 30000)) || (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_593[iVar2], 1, 40000) && iVar2 != 0)) || (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_593[iVar2], 0, 7000) && iVar2 != 0))
								{
									func_262();
									switch (iVar2)
									{
										case 0:
											func_704(15);
											break;
										
										case 1:
											func_704(12);
											break;
										
										case 2:
											func_704(9);
											break;
										
										case 3:
											func_704(6);
											break;
										}
									}
								}
							}
						}
					}
			}
			iVar0++;
		}
	}
}

void func_914(bool bParam0)//Position - 0x7CF46
{
	int iVar0;
	
	switch (iLocal_45)
	{
		case 0:
			if (func_915() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_42 + 1;
				}
				func_631(iVar0, 0, 1);
				func_627(iVar0, 0, 1);
				func_623(iVar0, 0, 1);
				func_619(iVar0, 0, 1);
				func_615(iVar0, 0, 1);
				func_611(iVar0, 0, 1);
				func_607(iVar0, 0, 1);
				func_603(iVar0, 0, 1);
				func_579(0);
				iLocal_45 = 1;
			}
			break;
		
		case 1:
			if ((((((((func_602() && func_600()) && func_598()) && func_597()) && func_596()) && func_595()) && func_593()) && func_592()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_45 = 2;
			}
			break;
	}
}

int func_915()//Position - 0x7D022
{
	switch (iLocal_42)
	{
		case 4:
			if (iLocal_774)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iLocal_774)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_916()//Position - 0x7D058
{
	struct<3> Var0;
	int iVar3;
	
	switch (iLocal_40)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 4))
			{
				if (GlobalFunc_8315() != 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					}
					while (!func_571(&(iLocal_48[1]), 1, Var0, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (!GlobalFunc_9134(&iLocal_48, 1))
					{
						SYSTEM::WAIT(0);
					}
					while (!GlobalFunc_10991(&iLocal_48, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					iVar3 = 0;
					while (iVar3 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar3]))
						{
							PED::DELETE_PED(&(iLocal_48[iVar3]));
						}
						iVar3++;
					}
				}
			}
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
			Global_86810 = 0;
			func_242(1, 1, 1, 0);
			func_926(1);
			func_925(0);
			func_924(1);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 30f);
			if (!GlobalFunc_Is_Mission_Retry())
			{
				iLocal_1055 = 0;
			}
			else
			{
				iLocal_1055 = Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[27 /*6*/].f_1 + 1;
			}
			uLocal_1323 = PED::ADD_SCENARIO_BLOCKING_AREA(-254.15f, -1550.78f, -10f, -168.97f, -1472.22f, 100f, 0, 1, 1, 1);
			uLocal_1324 = PED::ADD_SCENARIO_BLOCKING_AREA(-3063.049f, 98.93727f, -10f, -2966.613f, 133.8536f, 28f, 0, 1, 1, 1);
			uLocal_1325 = PED::ADD_SCENARIO_BLOCKING_AREA(-2647.4f, 1867f, 150f, -2637.9f, 1875.2f, 165.2f, 0, 1, 1, 1);
			uLocal_1326 = PED::ADD_SCENARIO_BLOCKING_AREA(-2665.311f, 1856.016f, 142.5229f, -2587.731f, 1923.1f, 170.4331f, 0, 1, 1, 1);
			uLocal_1327 = PED::ADD_SCENARIO_BLOCKING_AREA(-2558.859f, 1913.666f, 157.8494f, -2551.988f, 1917.075f, 177.5334f, 0, 1, 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI = 3;
			func_917();
			break;
		
		case 4:
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			return 1;
			break;
	}
	return 0;
}

void func_917()//Position - 0x7D273
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PED::ADD_RELATIONSHIP_GROUP("Triad group", &iLocal_1320);
	PED::ADD_RELATIONSHIP_GROUP("Merryweather group", &iLocal_1321);
	PED::ADD_RELATIONSHIP_GROUP("Gangster group", &iLocal_1322);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1321);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1321, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1320);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1320, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1322);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1322, 1862763509);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
			{
				iLocal_593[0] = Global_86864[2];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_593[0], 1, 1);
				Global_86864[2] = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				iLocal_48[2] = Global_86864.f_9[0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_48[2], 1, 1);
				Global_86864.f_9[0] = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
			{
				iLocal_48[0] = Global_86864.f_9[1];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_48[0], 1, 1);
				Global_86864.f_9[1] = 0;
			}
			func_273(0, 1, 1, 1, 1, 1, 1, 1);
			iLocal_859 = 0;
		}
		else if (func_919())
		{
			if ((iLocal_42 == 1 || iLocal_42 == 3) || iLocal_42 == 2)
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar1 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			iVar2 = iVar1;
			if ((iVar2 == 1 || iVar2 == 3) || iVar2 == 2)
			{
				iVar0 = 0;
			}
			if (iVar2 == 0)
			{
				if ((Global_86806[2] || Global_86806[1]) || Global_86806[0])
				{
					iLocal_859 = 1;
				}
				else
				{
					iLocal_859 = 0;
				}
			}
			func_273(iVar1, 1, 1, 1, 0, 1, 1, iVar0);
		}
		if (iVar0 && !bLocal_773)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				SCRIPT::SHUTDOWN_LOADING_SCREEN();
			}
		}
	}
	iLocal_40 = 4;
}


int func_919()//Position - 0x7D4A3
{
	int iVar0;
	
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (Global_84544 == 1)
		{
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 3:
					Global_86806[1] = 1;
					break;
				
				case 1:
					Global_86806[2] = 1;
					break;
				
				case 2:
					Global_86806[0] = 1;
					break;
			}
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 0:
				case 3:
				case 1:
				case 2:
					if (!Global_86806[1])
					{
						iVar0 = 3;
					}
					else if (!Global_86806[2])
					{
						iVar0 = 1;
					}
					else if (!Global_86806[0])
					{
						iVar0 = 2;
					}
					else
					{
						iVar0 = 4;
					}
					break;
				
				case 4:
					iVar0 = 5;
					break;
				
				case 5:
					iVar0 = 6;
					break;
				
				case 6:
					iVar0 = 6;
					bLocal_773 = true;
					break;
			}
			func_920();
			func_273(iVar0, 1, 1, 1, 0, 1, 1, 0);
			if (!bLocal_773)
			{
				if ((!iVar0 == 3 && !iVar0 == 1) && !iVar0 == 2)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_920()//Position - 0x7D5BB
{
	func_243();
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	func_923();
	GlobalFunc_2785(&iLocal_48);
	GlobalFunc_2840(&uLocal_20, 0);
	GlobalFunc_2884(&uLocal_20);
	GlobalFunc_4948(&uLocal_20, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_7632(0);
	func_921();
}

void func_921()//Position - 0x7D646
{
	int iVar0;
	
	GlobalFunc_860();
	GlobalFunc_2657();
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	func_902(1);
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
	func_907();
	iLocal_48.f_18[0] = 0;
	iLocal_48.f_18[1] = 0;
	iLocal_48.f_18[2] = 0;
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_581))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_581);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_582);
	}
	SYSTEM::WAIT(100);
	AUDIO::STOP_SOUND(iLocal_1115);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_48[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_585))
	{
		PED::DELETE_PED(&iLocal_585);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_586))
	{
		PED::DELETE_PED(&iLocal_586);
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_278[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_278[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_137[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_137[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_587[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_419[iVar0 /*16*/]))
		{
			PED::DELETE_PED(&(Local_419[iVar0 /*16*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_590[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_590[iVar0]));
		}
		iVar0++;
	}
	func_723();
	iVar0 = 0;
	while (iVar0 < iLocal_593)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_593[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_593[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_593[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_598[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_598[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_598[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_602[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_602[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_622))
	{
		OBJECT::DELETE_OBJECT(&iLocal_622);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_623))
	{
		OBJECT::DELETE_OBJECT(&iLocal_623);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_624))
	{
		OBJECT::DELETE_OBJECT(&iLocal_624);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_625))
	{
		OBJECT::DELETE_OBJECT(&iLocal_625);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_626))
	{
		OBJECT::DELETE_OBJECT(&iLocal_626);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_627))
	{
		OBJECT::DELETE_OBJECT(&iLocal_627);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_628))
	{
		OBJECT::DELETE_OBJECT(&iLocal_628);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_605[iVar0]));
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(uLocal_647))
	{
		CAM::DESTROY_CAM(iLocal_647, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_649))
	{
	}
	if (CAM::DOES_CAM_EXIST(iLocal_650))
	{
		CAM::DESTROY_CAM(iLocal_650, 0);
	}
	MISC::CLEAR_AREA(func_267(0), 10000f, 1, 0, 0, 0);
}


void func_923()//Position - 0x7D999
{
	iLocal_48.f_18[0] = 0;
	iLocal_48.f_18[1] = 0;
	iLocal_48.f_18[2] = 0;
}

void func_924(bool bParam0)//Position - 0x7D9B9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { -1676.064f, -1054.875f, 10.05305f };
				Var4 = { -1441.925f, -773.8369f, 31.43933f };
				break;
		}
		if (bParam0)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var1, Var4, 0, 1);
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var4, 1);
		}
		iVar0++;
	}
	PATHFIND::SET_PED_PATHS_IN_AREA(-227.33f, -1525.38f, 10.58f, -184.8f, -1503.12f, 51.22f, !bParam0, 0);
}

void func_925(int iParam0)//Position - 0x7DA52
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-3042.67f, 70.47f, 0.8f, -2993.63f, 104.81f, 41.62f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1612.857f, 5140.958f, -0.46138f, -1545.96f, 5192.411f, 100f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-195.2724f, -1520.477f, 27.33081f, -172.5888f, -1506.327f, 36.9062f, iParam0, 1);
}

void func_926(int iParam0)//Position - 0x7DAC9
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(4), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(6), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(5), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(7), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(11), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(12), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_69(13), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado3"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado4"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("voodoo2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("granger"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police3"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(10), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(19), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(18), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(14), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(3), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_69(21), iParam0);
}

void func_927()//Position - 0x7DBF7
{
	int iVar0;
	
	func_242(1, 1, 1, 0);
	func_902(1);
	CLOCK::PAUSE_CLOCK(0);
	if (iLocal_932)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_625))
		{
			OBJECT::DELETE_OBJECT(&iLocal_625);
		}
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_605[iVar0]));
			}
			iVar0++;
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	func_929(64, 0, !iLocal_932, 1, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("FINC2_FAIL");
	GlobalFunc_4956();
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_2790(14, 0, 1);
	GlobalFunc_2790(15, 0, 1);
	AUDIO::STOP_SOUND(iLocal_1115);
	AUDIO::RELEASE_SOUND_ID(iLocal_1115);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_581))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_581);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_582))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_582);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, 1);
			PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), -1);
		}
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_772)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[1]))
		{
			PED::DELETE_PED(&(iLocal_48[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
		{
			PED::DELETE_PED(&(iLocal_48[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[2]))
		{
			PED::DELETE_PED(&(iLocal_48[2]));
		}
	}
	func_928();
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	CUTSCENE::REMOVE_CUTSCENE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	func_926(0);
	func_924(0);
	func_925(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1323, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1324, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1325, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1326, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1327, 0);
	GlobalFunc_7632(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_928()//Position - 0x7DE2E
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_7632(0);
	GlobalFunc_2840(&uLocal_20, 0);
	GlobalFunc_2884(&uLocal_20);
	GlobalFunc_4948(&uLocal_20, 0, 0);
}

void func_929(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x7DE8C
{
	if (iParam0 != 198)
	{
		if (Global_68245)
		{
			Global_2422140.f_73.f_226[iParam0] = iParam1;
		}
		else
		{
			Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[iParam0] = iParam1;
		}
		Global_31962[iParam0] = bParam2;
		Global_32161[iParam0] = 1;
		GlobalFunc_6676(iParam0, bParam3, iParam4, 0);
		GlobalFunc_4920(iParam0, iParam1);
	}
}







