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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	struct<3> Local_24 = { 0, 0, 0 } ;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 10;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 3;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 16;
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
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
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
	int iLocal_276 = 0;
	struct<61> Local_277 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_338 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	struct<55> Local_358 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180000, 3, 0, 0, 0, 2, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_413[3];
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	var uLocal_425 = 0;
	struct<21> Local_426 = { 2055493265, 1065353216, 1065353216, 1065353216, 1033476506, 1033476506, 0, 1056964608, 1045220557, 0, 1092616192, 1093664768, 1067450368, 1074790400, 1073741824, 1075838976, 99, 100, -1, -1, 1056964608 } ;
	struct<563> Local_447 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	var uLocal_1029 = 0;
	struct<8> Local_1030[10];
	int iLocal_1111 = 0;
	int iLocal_1112 = 0;
	int iLocal_1113 = 0;
	bool bLocal_1114 = 0;
	int iLocal_1115 = 0;
	bool bLocal_1116 = 0;
	bool bLocal_1117 = 0;
	int iLocal_1118 = 0;
	float fLocal_1119 = 0f;
	float fLocal_1120 = 0f;
	float fLocal_1121 = 0f;
	float fLocal_1122 = 0f;
	struct<17> Local_1123[6];
	int iLocal_1226 = 0;
	struct<13> Local_1227[10];
	struct<20> Local_1358[5];
	struct<3> Local_1459 = { 0, 0, 0 } ;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	int iLocal_1469[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	float fLocal_1485 = 0f;
	float fLocal_1486 = 0f;
	float fLocal_1487 = 0f;
	float fLocal_1488 = 0f;
	float fLocal_1489 = 0f;
	float fLocal_1490 = 0f;
	struct<44> Local_1491[8];
	struct<215> Local_1844 = { 0, 0, 1000, 3000, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1110651699, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<33> Local_2059 = { 0, 10000, 20000, 0, 0, 1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2092 = 1114636288;
	var uLocal_2093 = 1123024896;
	var uLocal_2094 = 1;
	struct<8> Local_2095 = { 0, 2, 1, 250, 1000, 0, 1101004800, 1114636288 } ;
	var uLocal_2103 = 1063675494;
	struct<9> Local_2104 = { 0, 2, 1, 250, 1000, 0, 1101004800, 1114636288, 1063675494 } ;
	struct<6> Local_2113 = { 0, 1095237632, 1000, 3000, 0, 0 } ;
	var uLocal_2119 = 3;
	var uLocal_2120 = 0;
	var uLocal_2121 = 1120403456;
	bool bLocal_2122 = 0;
	int iLocal_2123 = 0;
	int iLocal_2124 = 0;
	struct<3> Local_2125 = { 0, 0, 0 } ;
	float fLocal_2128 = 0f;
	int iLocal_2129 = 0;
	int iLocal_2130 = 0;
	int iLocal_2131 = 0;
	int iLocal_2132 = 0;
	int iLocal_2133 = 0;
	struct<8> Local_2134 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2142 = 0;
	int iLocal_2143 = 0;
	int iLocal_2144 = 0;
	int iLocal_2145 = 0;
	int iLocal_2146 = 0;
	int iLocal_2147 = 0;
	int iLocal_2148 = 0;
	int iLocal_2149 = 0;
	int iLocal_2150[4] = { 0, 0, 0, 0 };
	int iLocal_2155 = 0;
	int iLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 4;
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
	var uLocal_2179 = -1;
	var uLocal_2180 = 0;
	char* sLocal_2181 = NULL;
	char* sLocal_2182 = NULL;
	char* sLocal_2183 = NULL;
	char* sLocal_2184[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_2193[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2199[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_2205 = 0;
	int iLocal_2206 = 0;
	int iLocal_2207 = 0;
	int iLocal_2208 = 0;
	int iLocal_2209 = 0;
	int iLocal_2210 = 0;
	int iLocal_2211 = 0;
	var uLocal_2212 = 16;
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
	var uLocal_2240 = 0;
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
	var uLocal_2267 = 0;
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
	var uLocal_2297 = 0;
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
	var uLocal_2324 = 0;
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
	var uLocal_2354 = 0;
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
	int iLocal_2377 = 0;
	int iLocal_2378 = 0;
	int iLocal_2379 = 0;
	int iLocal_2380 = 0;
	int iLocal_2381 = 0;
	int iLocal_2382 = 0;
	int iLocal_2383 = 0;
	int iLocal_2384 = 0;
	int iLocal_2385 = 0;
	bool bLocal_2386 = 0;
	int iLocal_2387 = 0;
	int iLocal_2388 = 0;
	struct<3> Local_2389 = { 0, 0, 0 } ;
	struct<3> Local_2392 = { 0, 0, 0 } ;
	bool bLocal_2395 = 0;
	int iLocal_2396 = 0;
	int iLocal_2397 = 0;
	struct<61> Local_2398 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_85 = 1;
	iLocal_86 = 65;
	iLocal_87 = 49;
	iLocal_88 = 64;
	Local_96 = { 1180.969f, -402.381f, 67.2f };
	Local_99 = { 5f, 0f, 57.33f };
	iLocal_103 = -1;
	iLocal_1112 = AUDIO::GET_SOUND_ID();
	fLocal_1119 = 1.5f;
	fLocal_1120 = 0.5f;
	fLocal_1121 = 0.5f;
	fLocal_1122 = 0.1f;
	iLocal_1481 = Local_1227;
	fLocal_1485 = 30f;
	fLocal_1486 = 8f;
	fLocal_1487 = 10f;
	fLocal_2128 = 200f;
	iLocal_2130 = 1;
	iLocal_2143 = 10000;
	iLocal_2148 = 1;
	iLocal_2155 = 255;
	iLocal_2211 = 1;
	iLocal_2378 = 5;
	iLocal_2379 = 4000;
	iLocal_2380 = 8000;
	iLocal_2382 = 1;
	iLocal_2384 = 750;
	iLocal_2385 = 1500;
	bLocal_2386 = true;
	Local_2398 = { ScriptParam_0 };
	GlobalFunc_4923(&Local_2398, 0, 0);
	MISC::SET_MISSION_FLAG(1);
	func_634(80);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		GlobalFunc_10585(1);
		func_516(1);
	}
	func_504(&Local_2398);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_R5", 0);
		func_487(Local_2398.f_9, 0, 1, 0, 0, 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x178
{
	iLocal_1024++;
	iLocal_2131 = MISC::GET_GAME_TIMER();
	if ((iLocal_1024 % 10) == 0)
	{
		func_486();
	}
	GlobalFunc_2356();
	PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (func_484())
	{
		func_479();
	}
	else
	{
		func_127();
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	if (iLocal_2148 == 4)
	{
		func_121();
		func_119();
		func_118();
		func_111();
		func_105(&Local_1227);
		func_96();
		func_76(&Local_1459);
		func_72();
		func_59();
		iLocal_1479 = GlobalFunc_7546(&Local_1227);
		iLocal_1480 = func_57();
		if (func_56())
		{
			if (iLocal_2131 > (Local_338.f_13 + iLocal_1484))
			{
				func_38(&Local_2059);
			}
			if (iLocal_2131 > (Local_338.f_13 + iLocal_1483))
			{
				func_36(&Local_2095);
				func_36(&Local_2104);
				func_28(&Local_2113);
				func_4(&Local_1844);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_2129))
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2125, 0) > fLocal_2128)
			{
				iLocal_2130 = 0;
				Local_2104 = 1;
				iLocal_2129 = HUD::ADD_BLIP_FOR_COORD(Local_2125);
				if (HUD::DOES_BLIP_EXIST(iLocal_2129))
				{
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_2129, 0);
				}
			}
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_2125, 0) < (fLocal_2128 - 10f))
		{
			Local_2104 = 0;
			iLocal_2130 = 1;
			GlobalFunc_146(&iLocal_2129);
			iLocal_2129 = 0;
		}
		if (Local_338.f_11 > 0)
		{
			if (iLocal_2131 > Local_338.f_11 + 3500)
			{
				if (Local_338.f_16 > 1)
				{
					if (Local_338.f_16 > Local_338.f_17)
					{
						Local_338.f_17 = Local_338.f_16;
						if (bLocal_2122)
						{
						}
					}
					else if (bLocal_2122)
					{
					}
				}
				Local_338.f_16 = 0;
			}
		}
	}
}



void func_4(var uParam0)//Position - 0x388
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	uParam0->f_1++;
	if (*uParam0 == 0)
	{
		return;
	}
	if (iLocal_1479 >= iLocal_1481)
	{
		return;
	}
	if ((uParam0->f_1 % 4) != 0)
	{
		return;
	}
	if (iLocal_2130 == 0)
	{
		return;
	}
	if (!func_27(&(uParam0->f_4)))
	{
		return;
	}
	if (!GlobalFunc_4673(&Local_1227, &iVar1))
	{
		return;
	}
	uParam0->f_14 = MISC::_0x7F8F6405F4777AF6(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_5[0 /*3*/], uParam0->f_5[1 /*3*/], 1);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_214);
	fVar6 = MISC::_0x7F8F6405F4777AF6(uParam0->f_15[iVar2 /*6*/].f_2, uParam0->f_5[0 /*3*/], uParam0->f_5[1 /*3*/], 1);
	Var3 = { uParam0->f_5[0 /*3*/] + Vector(fVar6, fVar6, fVar6) * uParam0->f_5[1 /*3*/] - uParam0->f_5[0 /*3*/] };
	if (fVar6 < (uParam0->f_14 + uParam0->f_13))
	{
		return;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_15[iVar2 /*6*/].f_2) < 100f)
	{
		return;
	}
	if (bLocal_1117)
	{
		if (GlobalFunc_2351(uParam0->f_15[iVar2 /*6*/].f_2, 0.25f, 0, 1))
		{
			return;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(uParam0->f_15[iVar2 /*6*/].f_2, 0.25f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1226)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(uParam0->f_15[iVar2 /*6*/].f_2, Local_1123[iVar0 /*17*/].f_1[0 /*3*/], Local_1123[iVar0 /*17*/].f_1[1 /*3*/], Local_1123[iVar0 /*17*/].f_8, 0, 1))
		{
			return;
		}
		iVar0++;
	}
	if (!func_5(&(Local_1227[iVar1 /*13*/]), uParam0->f_15[iVar2 /*6*/], 1, 1))
	{
		return;
	}
	if (bLocal_2386)
	{
		uParam0->f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_2384, iLocal_2385));
		iLocal_2383 = uParam0->f_4;
	}
	else
	{
		uParam0->f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_2, uParam0->f_3));
	}
	if (Local_358 == 78)
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_1227[iVar1 /*13*/], 1) };
		if (Var3.f_2 > 35f)
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_1227[iVar1 /*13*/], 0);
		}
	}
	TASK::TASK_COMBAT_PED(Local_1227[iVar1 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
}

int func_5(var uParam0, struct<6> Param1, int iParam7, int iParam8)//Position - 0x5C1
{
	if (iParam8 == 1)
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_358.f_27[0], Param1.f_2, 1))
		{
			return 0;
		}
	}
	if (!func_6(uParam0, Param1.f_2, Param1.f_5, iParam7))
	{
		return 0;
	}
	if (Param1.f_1 == 1)
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 0);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*uParam0, 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param1.f_2, 2f, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 0);
	}
	else
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 1);
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), 0);
	}
	TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
	PED::SET_PED_MONEY(*uParam0, 0);
	return 1;
}

int func_6(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x695
{
	int iVar0;
	
	iVar0 = func_24();
	*uParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam4, 1, 1);
	if (ENTITY::IS_ENTITY_IN_WATER(*uParam0))
	{
		func_21(uParam0);
		return 0;
	}
	GlobalFunc_146(&(uParam0->f_1));
	uParam0->f_1 = GlobalFunc_4955(*uParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_1026);
	if (iParam5 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	}
	GlobalFunc_5724(*uParam0, Param1);
	func_9(uParam0, 1);
	if (fParam4 == 0f)
	{
		GlobalFunc_6552(*uParam0);
	}
	TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
	Local_338.f_12++;
	iLocal_1479++;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	return 1;
}



void func_9(var uParam0, bool bParam1)//Position - 0x7D4
{
	if (!GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_14(uParam0);
	}
	uParam0->f_6 = GlobalFunc_156(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_1026);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, 120);
	PED::SET_PED_MAX_HEALTH(*uParam0, 120);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*uParam0, 1, 1862763509);
	TASK::SET_PED_PATH_AVOID_FIRE(*uParam0, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, 1);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*uParam0, 0);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(*uParam0, 1);
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 47, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
	func_10(uParam0);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*uParam0, 200f);
	PED::SET_PED_MONEY(*uParam0, 0);
}

void func_10(var uParam0)//Position - 0x8D1
{
	if (PED::IS_PED_MALE(*uParam0))
	{
		if (func_12(&iLocal_2208))
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(*uParam0, iLocal_2193[iLocal_2208]);
			iLocal_2208++;
		}
		else
		{
			iLocal_2208 = 0;
		}
	}
	else if (func_11(&iLocal_2209))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*uParam0, iLocal_2199[iLocal_2209]);
		iLocal_2209++;
	}
	else
	{
		iLocal_2209 = 0;
	}
	if (!Local_358 == 80)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2181))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*uParam0, sLocal_2181, "SPEECH_PARAMS_FORCE", 1);
		}
	}
}

int func_11(var uParam0)//Position - 0x959
{
	if (*uParam0 >= iLocal_2199)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_2199[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

int func_12(var uParam0)//Position - 0x986
{
	if (*uParam0 >= iLocal_2193)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_2193[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}


void func_14(var uParam0)//Position - 0xA0F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_pistol"), -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, 1, joaat("weapon_pistol"));
	}
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_1121 && Local_358.f_21[1] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_358.f_21[1], -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, 1, Local_358.f_21[1]);
		GlobalFunc_4672(*uParam0, &Local_426, 1);
	}
	else if (Local_358.f_21[0] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_358.f_21[0], -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, 1, Local_358.f_21[0]);
		GlobalFunc_4672(*uParam0, &Local_426, 0);
	}
}







void func_21(var uParam0)//Position - 0xD5F
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	func_23(uParam0);
	GlobalFunc_881(uParam0);
	*uParam0 = 0;
}


void func_23(var uParam0)//Position - 0xDC4
{
	GlobalFunc_146(&(uParam0->f_1));
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	if (uParam0->f_7 != -1)
	{
		Local_1491[uParam0->f_7 /*44*/].f_36 = (Local_1491[uParam0->f_7 /*44*/].f_36 - 1);
		if (Local_1491[uParam0->f_7 /*44*/].f_36 < 0)
		{
			Local_1491[uParam0->f_7 /*44*/].f_36 = 0;
		}
		uParam0->f_7 = -1;
	}
}

int func_24()//Position - 0xE41
{
	if (Local_358.f_37 == 0)
	{
		return 0;
	}
	return Local_358.f_27[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_358.f_37)];
}



bool func_27(var uParam0)//Position - 0xEB6
{
	if (bLocal_2386)
	{
		return MISC::GET_GAME_TIMER() > iLocal_2383;
	}
	return MISC::GET_GAME_TIMER() > *uParam0;
}

void func_28(var uParam0)//Position - 0xED7
{
	struct<3> Var0;
	
	uParam0->f_6++;
	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_27(&(uParam0->f_4)))
	{
		return;
	}
	if (iLocal_2130 == 0)
	{
		return;
	}
	if (Local_1491[uParam0->f_7 /*44*/] && iLocal_1479 < iLocal_1481)
	{
		if (func_31(&(Local_1491[uParam0->f_7 /*44*/]), &Var0))
		{
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Var0, uParam0->f_8))
			{
				if (func_29(&(Local_1491[uParam0->f_7 /*44*/]), Var0, uParam0->f_7, 1))
				{
					if (bLocal_2386)
					{
						uParam0->f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_2384, iLocal_2385));
						iLocal_2383 = uParam0->f_4;
					}
					else
					{
						uParam0->f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_2, uParam0->f_3));
					}
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= uParam0->f_5)
	{
		uParam0->f_7 = 0;
	}
}

int func_29(var uParam0, struct<3> Param1, var uParam4, int iParam5)//Position - 0xFBA
{
	int iVar0;
	
	if (!GlobalFunc_4673(&Local_1227, &iVar0))
	{
		return 0;
	}
	if (!func_6(&(Local_1227[iVar0 /*13*/]), Param1, (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) * 360f), iParam5))
	{
		return 0;
	}
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), 0);
	if (uParam0->f_35 > 0f)
	{
		if (Param1.f_2 >= uParam0->f_35)
		{
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1227[iVar0 /*13*/], 0);
			TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_1227[iVar0 /*13*/], 0);
			TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1227[iVar0 /*13*/], 0);
		}
	}
	else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
	{
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f), 1);
	}
	Local_1227[iVar0 /*13*/].f_7 = uParam4;
	uParam0->f_36++;
	uParam0->f_37++;
	if (uParam0->f_37 >= uParam0->f_38)
	{
		uParam0->f_37 = 0;
		*uParam0 = 0;
		if (uParam0->f_43 != -1)
		{
			Local_1491[uParam0->f_43 /*44*/] = 1;
			Local_1491[uParam0->f_43 /*44*/].f_37 = 0;
			if (Local_1491[uParam0->f_43 /*44*/].f_41 != -1)
			{
				iLocal_1481 = Local_1491[uParam0->f_43 /*44*/].f_41;
			}
		}
	}
	PED::SET_PED_MONEY(Local_1227[iVar0 /*13*/], 0);
	return 1;
}


int func_31(var uParam0, var uParam1)//Position - 0x113B
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	int iVar5;
	
	Var0 = { GlobalFunc_4674(uParam0->f_1) };
	iVar3 = 0;
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, iVar3, uParam1, 12))
	{
		return 0;
	}
	if (uParam0->f_35 > 0f)
	{
		if (uParam1->f_2 > uParam0->f_35 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) > uParam0->f_39)
		{
			return 0;
		}
	}
	uParam1->f_2 = (uParam1->f_2 + 0.25f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar4))
	{
		uParam1->f_2 = uVar4;
	}
	if (SYSTEM::VDIST2(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < (Local_2113.f_1 * Local_2113.f_1))
	{
		if (bLocal_1116)
		{
			Var0 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - CAM::GET_GAMEPLAY_CAM_COORD()) };
			if (GlobalFunc_5735(Var0, CAM::GET_GAMEPLAY_CAM_COORD(), *uParam1) <= 0)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, uParam0->f_18.f_1[0 /*3*/], uParam0->f_18.f_1[1 /*3*/], uParam0->f_18.f_8, 0, 1))
	{
		return 0;
	}
	if (PED::IS_ANY_PED_NEAR_POINT(*uParam1, 1.5f))
	{
		return 0;
	}
	iVar5 = 0;
	while (iVar5 < iLocal_1226)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, Local_1123[iVar5 /*17*/].f_1[0 /*3*/], Local_1123[iVar5 /*17*/].f_1[1 /*3*/], Local_1123[iVar5 /*17*/].f_8, 0, 1))
		{
			return 0;
		}
		iVar5++;
	}
	if (CAM::IS_SPHERE_VISIBLE(*uParam1, 0.25f))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_358.f_27[0], *uParam1, 1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}





void func_36(int iParam0)//Position - 0x13FC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iParam0->f_1++;
	if (*iParam0 == 0)
	{
		return;
	}
	if (!func_27(&(iParam0->f_5)))
	{
		return;
	}
	if (iLocal_1479 >= iLocal_1481)
	{
		return;
	}
	if (iLocal_1479 >= Local_1227)
	{
		return;
	}
	if ((iParam0->f_1 % 4) != 0)
	{
		return;
	}
	if (!GlobalFunc_4673(&Local_1227, &iVar0))
	{
		return;
	}
	Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam0->f_6, iParam0->f_7), 0f) };
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var2, iParam0->f_2, &Var5, 14))
	{
		return;
	}
	if (SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < (iParam0->f_6 * iParam0->f_6))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_1226)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var5, Local_1123[iVar1 /*17*/].f_1[0 /*3*/], Local_1123[iVar1 /*17*/].f_1[1 /*3*/], Local_1123[iVar1 /*17*/].f_8, 0, 1))
		{
			return;
		}
		iVar1++;
	}
	if (bLocal_1117)
	{
		if (GlobalFunc_2351(Var5, 1.5f, 0, 1))
		{
			return;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(Var5, 1.5f))
	{
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(Var5, 0.25f))
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_358.f_27[0], Var5, 1))
		{
			return;
		}
	}
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= iParam0->f_8)
	{
		if (!func_37(&(Local_1227[iVar0 /*13*/]), Var5, 0, 1))
		{
			return;
		}
	}
	else if (!func_6(&(Local_1227[iVar0 /*13*/]), Var5, 0, 1))
	{
		return;
	}
	if (bLocal_2386)
	{
		iParam0->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_2384, iLocal_2385));
		iLocal_2383 = iParam0->f_5;
	}
	else
	{
		iParam0->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam0->f_3, iParam0->f_4));
	}
}

int func_37(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x15DC
{
	bool bVar0;
	int iVar1;
	
	iVar1 = func_24();
	*uParam0 = PED::CREATE_PED(26, iVar1, Param1, fParam4, 1, 1);
	if (ENTITY::IS_ENTITY_IN_WATER(*uParam0))
	{
		func_21(uParam0);
		return 0;
	}
	GlobalFunc_146(&(uParam0->f_1));
	uParam0->f_1 = GlobalFunc_4955(*uParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_1026);
	if (iParam5 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, 1);
	GlobalFunc_5724(*uParam0, Param1);
	PED::SET_PED_MONEY(*uParam0, 0);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, 120);
	PED::SET_PED_MAX_HEALTH(*uParam0, 120);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*uParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*uParam0, 1, 1862763509);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 16, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 4, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, true);
	bVar0 = true;
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 11, bVar0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, bVar0);
	TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, 0, 0);
	Local_338.f_12++;
	iLocal_1479++;
	func_10(uParam0);
	PED::SET_PED_ACCURACY(*uParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, 0);
	uParam0->f_3 = 1;
	return 1;
}

void func_38(var uParam0)//Position - 0x1716
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uParam0->f_35++;
	if (*uParam0 == 0)
	{
		return;
	}
	if (iLocal_1480 >= uParam0->f_4)
	{
		if (MISC::GET_GAME_TIMER() < uParam0->f_3)
		{
			return;
		}
	}
	if (iLocal_1480 >= uParam0->f_5)
	{
		uParam0->f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_1, uParam0->f_2));
		return;
	}
	if (iLocal_1480 >= Local_1358)
	{
		return;
	}
	if (iLocal_1479 >= Local_1227)
	{
		return;
	}
	if ((uParam0->f_35 % 4) != 0)
	{
		return;
	}
	iVar9 = func_55();
	if (iVar9 == 0)
	{
		return;
	}
	if (!func_54(&iVar2))
	{
		return;
	}
	if (uParam0->f_6 == 0 || iLocal_2130 == 0)
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_33, uParam0->f_34), 0f) };
		if (!VEHICLE::_0xA4822F1CF23F4810(&Var6, &Var3, &uVar10, 0, 1127481344, 0, 0, 1, 1))
		{
			return;
		}
		fVar1 = GlobalFunc_1695(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_32);
		Var3 = { uParam0->f_7[iVar0 /*6*/].f_2 };
		fVar1 = uParam0->f_7[iVar0 /*6*/].f_5;
	}
	if (!func_42(&(Local_1358[iVar2 /*20*/]), iVar9, Var3, fVar1, 1, -1))
	{
		return;
	}
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < Local_358.f_49)
	{
		func_41(&(Local_1358[iVar2 /*20*/]), MISC::GET_RANDOM_FLOAT_IN_RANGE(35f, 42f));
	}
	else if (Local_358 == 80)
	{
		if (iVar9 == Local_358.f_32[0])
		{
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
			{
				func_40(&(Local_1358[iVar2 /*20*/]), 20f);
			}
			else
			{
				func_39(&(Local_1358[iVar2 /*20*/]), 1, 25f);
			}
		}
		else
		{
			func_39(&(Local_1358[iVar2 /*20*/]), 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(35f, 42f));
		}
	}
	else
	{
		func_39(&(Local_1358[iVar2 /*20*/]), 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(35f, 42f));
	}
	uParam0->f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_1, uParam0->f_2));
}

void func_39(var uParam0, int iParam1, float fParam2)//Position - 0x1929
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_1227[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !GlobalFunc_115(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam2;
	uParam0->f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
	if (GlobalFunc_IsPedNotInjuredOrDead(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar2, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, iLocal_2211);
		if (Local_358 == 79)
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786468, uParam0->f_18, 15f, 1);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
		}
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0);
		if (GlobalFunc_IsPedNotInjuredOrDead(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	if (iParam1 == 1)
	{
		uParam0->f_11 = 3;
	}
	else
	{
		uParam0->f_11 = 2;
	}
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

void func_40(var uParam0, float fParam1)//Position - 0x1A7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_1227[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !GlobalFunc_115(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 1, uParam0->f_17, 786436, -1f, -1f, 1);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0);
		if (GlobalFunc_IsPedNotInjuredOrDead(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else if (GlobalFunc_IsPedNotInjuredOrDead(iVar1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 1;
}

void func_41(var uParam0, float fParam1)//Position - 0x1B57
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_1227[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !GlobalFunc_115(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 6, uParam0->f_17, 786436, -1f, -1f, 1);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0);
		if (GlobalFunc_IsPedNotInjuredOrDead(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

int func_42(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7)//Position - 0x1C34
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (iLocal_1479 >= iLocal_1481)
	{
		return 0;
	}
	if (!GlobalFunc_4673(&Local_1227, &iVar2))
	{
		return 0;
	}
	if (GlobalFunc_4676(Param2, 8f, 0, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_HEALTH(*uParam0, 600);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 600f);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 600f);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		uParam0->f_2[iVar0] = -1;
		iVar0++;
	}
	switch (Local_358)
	{
		case 76:
			iParam7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 14.9f));
			if (iParam1 == Local_358.f_32[0])
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 200);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 300f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 300f);
			}
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
			{
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*uParam0, 1);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 100f);
			}
			break;
		
		case 80:
			if (iParam1 == Local_358.f_32[2])
			{
				iParam7 = 1;
				VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
			}
			else
			{
				iParam7 = 0;
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 150);
			}
			break;
		
		case 77:
			iParam7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
			if (iParam1 == Local_358.f_32[0])
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 300);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 300f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 300f);
			}
			break;
		
		case 78:
			iParam7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
			break;
		
		case joaat("mpsv_lp0_31"):
			iParam7 = MISC::GET_RANDOM_INT_IN_RANGE(3, 6);
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 0, 1, 0, 0, 1, 0, 0, 0);
			break;
	}
	if (!func_50(&(Local_1227[iVar2 /*13*/]), *uParam0))
	{
		func_43(uParam0);
		return 0;
	}
	uParam0->f_1 = iParam6;
	uParam0->f_2[0] = iVar2;
	uParam0->f_9 = GlobalFunc_156(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
	uParam0->f_10 = uParam0->f_9;
	if (iParam7 <= 0)
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		iVar1 = iVar0 + 1;
		if (iVar1 >= uParam0->f_2)
		{
			return 1;
		}
		if (iLocal_1479 >= iLocal_1481)
		{
			return 1;
		}
		if (!GlobalFunc_4673(&Local_1227, &iVar2))
		{
			return 1;
		}
		if (!func_50(&(Local_1227[iVar2 /*13*/]), *uParam0))
		{
			return 1;
		}
		uParam0->f_2[iVar1] = iVar2;
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)//Position - 0x1EC3
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (iLocal_2148 == 4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2)
		{
			if (uParam0->f_2[iVar0] != -1)
			{
				if (GlobalFunc_115(Local_1227[uParam0->f_2[iVar0] /*13*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1227[uParam0->f_2[iVar0] /*13*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1227[uParam0->f_2[iVar0] /*13*/], 1, false);
					if (Local_1227[uParam0->f_2[iVar0] /*13*/].f_5 > 120f)
					{
						func_48(&(Local_1227[uParam0->f_2[iVar0] /*13*/]), 0);
						uParam0->f_2[iVar0] = -1;
					}
					else
					{
						func_47(Local_1227[uParam0->f_2[iVar0] /*13*/], *uParam0);
						uParam0->f_2[iVar0] = -1;
					}
				}
				else if (iVar0 == 0)
				{
					uParam0->f_2[iVar0] = -1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < uParam0->f_2)
		{
			uParam0->f_2[iVar0] = -1;
			iVar0++;
		}
		if (GlobalFunc_115(*uParam0))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*uParam0, 0);
			if (uParam0->f_1 == 1)
			{
				if (func_45(*uParam0))
				{
					*uParam0 = 0;
					return;
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2)
		{
			if (uParam0->f_2[iVar0] != -1)
			{
				if (GlobalFunc_115(Local_1227[uParam0->f_2[iVar0] /*13*/]))
				{
					TASK::TASK_SMART_FLEE_COORD(Local_1227[uParam0->f_2[iVar0] /*13*/], ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 200f, -1, 0, 0);
					func_48(&(Local_1227[uParam0->f_2[iVar0] /*13*/]), 1);
				}
				uParam0->f_2[iVar0] = -1;
			}
			iVar0++;
		}
	}
	GlobalFunc_131(uParam0);
	*uParam0 = 0;
}


int func_45(int iParam0)//Position - 0x20A1
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_115(iParam0))
	{
		return 0;
	}
	if (!func_46(&iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_1469)
	{
		if (GlobalFunc_115(iLocal_1469[iVar1]) && iLocal_1469[iVar1] == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	iLocal_1469[iVar0] = iParam0;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1469[iVar0], 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1469[iVar0], 1);
	return 1;
}

int func_46(var uParam0)//Position - 0x211F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1469)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1469[iVar0]))
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_47(int iParam0, int iParam1)//Position - 0x2154
{
	float fVar0;
	float fVar1;
	var uVar2;
	
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 3, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f), 1);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_1120 && GlobalFunc_115(uParam1))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(uParam1, 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 37, true);
	}
	else
	{
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0, fVar1, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 80f), 0);
	}
	if (Local_358 != 80 && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fLocal_1122)
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_rpg"), 60, 0, 1);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar2);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(uVar2);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar2);
	TASK::CLEAR_SEQUENCE_TASK(&uVar2);
}

void func_48(var uParam0, int iParam1)//Position - 0x2286
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (GlobalFunc_115(*uParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, iParam1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
	PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(*uParam0, 0);
	func_23(uParam0);
	GlobalFunc_132(uParam0, iParam1, 0, 1);
	*uParam0 = 0;
}


int func_50(var uParam0, int iParam1)//Position - 0x2343
{
	var uVar0;
	
	uVar0 = func_24();
	*uParam0 = GlobalFunc_6553(uVar0, iParam1, joaat("weapon_pistol"), 1, iLocal_2211, 26);
	if (!GlobalFunc_115(*uParam0))
	{
		return 0;
	}
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_9(uParam0, !PED::IS_PED_IN_ANY_HELI(*uParam0));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, iLocal_2211);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*uParam0, 200f);
	PED::SET_PED_MONEY(*uParam0, 0);
	Local_338.f_12++;
	iLocal_1479++;
	uParam0->f_2 = 0;
	return 1;
}




int func_54(int iParam0)//Position - 0x24DB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1358)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1358[iVar0 /*20*/]))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_55()//Position - 0x2513
{
	if (Local_358.f_38 == 0)
	{
		return 0;
	}
	return Local_358.f_32[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_358.f_38)];
}

int func_56()//Position - 0x2539
{
	if (iLocal_2382 == 0)
	{
		return 1;
	}
	iLocal_2378 = (iLocal_1481 / 2);
	switch (iLocal_2377)
	{
		case 0:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (iLocal_1479 >= iLocal_1481)
			{
				iLocal_2377 = 1;
				return 0;
			}
			break;
		
		case 1:
			if (iLocal_1479 < iLocal_2378)
			{
				iLocal_2377 = 2;
				iLocal_2381 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_2379, iLocal_2380));
			}
			return 0;
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_2381 || iLocal_1479 < 4)
			{
				iLocal_2377 = 0;
				return 1;
			}
			return 0;
			break;
	}
	return 1;
}

int func_57()//Position - 0x25D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1358)
	{
		if (GlobalFunc_115(Local_1358[iVar0 /*20*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}


void func_59()//Position - 0x263E
{
	switch (Local_358)
	{
		case 76:
			func_71();
			break;
		
		case 80:
			func_70();
			break;
		
		case 77:
			func_68();
			break;
		
		case 78:
			func_66();
			break;
		
		case joaat("mpsv_lp0_31"):
			func_60();
			break;
	}
}

void func_60()//Position - 0x268F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	if (GlobalFunc_115(Local_1459.f_2))
	{
		Local_2059.f_32 = 2;
	}
	else
	{
		Local_2059.f_32 = 3;
	}
	if (((GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0) || GlobalFunc_4678()) || GlobalFunc_4677()) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -1577.249f, 2779.563f, 16.07899f, 60f))
	{
		Local_2095 = 1;
		iLocal_1481 = 10;
		if (!GlobalFunc_115(Local_1459.f_2))
		{
			Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 100f), 0f) };
			if (VEHICLE::_0xA4822F1CF23F4810(&Var1, &Var4, &uVar7, 0, 1127481344, 0, 0, 1, 1))
			{
				func_61(&Local_1459, Var4, 0);
				return;
			}
		}
	}
	else
	{
		Local_2095 = 0;
	}
	switch (iLocal_2123)
	{
		case 0:
			if (Local_338 > 3)
			{
				if (func_54(&iVar0))
				{
					if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], -1111.069f, 2673.17f, 17.564f, 134.8095f, 1, -1))
					{
						func_39(&(Local_1358[iVar0 /*20*/]), 1, 1108082688);
						iLocal_2123++;
					}
				}
			}
			break;
		
		case 1:
			if (Local_338 > 10)
			{
				if (func_54(&iVar0))
				{
					if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], -1536.234f, 2740.836f, 16.6437f, 233.283f, 1, -1))
					{
						func_39(&(Local_1358[iVar0 /*20*/]), 1, 1108082688);
						iLocal_2123++;
					}
				}
			}
			break;
		
		case 2:
			if (Local_338 >= 15)
			{
				if (func_61(&Local_1459, -1079.612f, 2690.568f, 19.3431f, 132.9435f))
				{
					iLocal_2123++;
					iLocal_1481 = 5;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_115(Local_1459.f_2))
			{
				iLocal_1481 = 5;
			}
			else
			{
				iLocal_1481 = 10;
				if (Local_338 >= 35)
				{
					if (func_61(&Local_1459, -1353.251f, 2319.61f, 38.6243f, 1.1871f))
					{
						iLocal_2123++;
						iLocal_1481 = 5;
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_115(Local_1459.f_2))
			{
				iLocal_1481 = 5;
			}
			else
			{
				iLocal_1481 = 10;
			}
			break;
	}
}

int func_61(var uParam0, struct<3> Param1, float fParam4)//Position - 0x28DE
{
	int iVar0;
	
	uParam0->f_2 = VEHICLE::CREATE_VEHICLE(joaat("rhino"), Param1, fParam4, 1, 1);
	if (!GlobalFunc_115(uParam0->f_2))
	{
		return 0;
	}
	*uParam0 = GlobalFunc_6553(Local_358.f_27[0], uParam0->f_2, joaat("vehicle_weapon_tank"), 1, 1, 26);
	uParam0->f_1 = GlobalFunc_5743(uParam0->f_2, 0, 5);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(*uParam0, 0);
	ENTITY::SET_ENTITY_PROOFS(uParam0->f_2, 1, 1, 0, 0, 1, 0, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_2, 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_2, 0);
	iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_2) * 2;
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_2, iVar0);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_2, iVar0);
	uParam0->f_3 = GlobalFunc_156(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	uParam0->f_4 = uParam0->f_3;
	PED::SET_PED_SEEING_RANGE(*uParam0, 100f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 27, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, true);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { 0f, 0f, 0f };
	return 1;
}





void func_66()//Position - 0x3850
{
	int iVar0;
	
	switch (iLocal_2123)
	{
		case 0:
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -155.1995f, -1655.954f, 31.8369f, 7f))
			{
				iLocal_2123++;
			}
			break;
		
		case 1:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -148.6551f, -1631.662f, 32.0646f, 237.4733f, 1))
				{
					iLocal_2123++;
					WEAPON::GIVE_WEAPON_TO_PED(Local_1227[iVar0 /*13*/], joaat("weapon_rpg"), 1, 1, 1);
					PED::SET_PED_ACCURACY(Local_1227[iVar0 /*13*/], 5);
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_1227[iVar0 /*13*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1227[iVar0 /*13*/], -140.7438f, -1637.352f, 31.3864f, 5f, 1, 0);
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -132.3154f, -1626.248f, 31.181f, 7f))
			{
				iLocal_2123++;
			}
			break;
		
		case 3:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -98.7502f, -1607.006f, 30.8521f, 45.6334f, 1))
				{
					iLocal_2123++;
					WEAPON::GIVE_WEAPON_TO_PED(Local_1227[iVar0 /*13*/], joaat("weapon_rpg"), 1, 1, 1);
					PED::SET_PED_ACCURACY(Local_1227[iVar0 /*13*/], 5);
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_1227[iVar0 /*13*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1227[iVar0 /*13*/], -109.1352f, -1599.441f, 30.6352f, 5f, 1, 0);
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -110.183f, -1600.659f, 30.6615f, 9f))
			{
				iLocal_2123++;
			}
			break;
		
		case 5:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -98.9138f, -1571.445f, 31.2628f, 228.6146f, 1))
				{
					iLocal_2123++;
					WEAPON::GIVE_WEAPON_TO_PED(Local_1227[iVar0 /*13*/], joaat("weapon_rpg"), 1, 1, 1);
					PED::SET_PED_ACCURACY(Local_1227[iVar0 /*13*/], 5);
					WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_1227[iVar0 /*13*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1227[iVar0 /*13*/], -91.4304f, -1578.056f, 30.5151f, 5f, 1, 0);
				}
			}
			break;
		
		case 6:
			if (Local_338 > 20 || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -97.32474f, -1585.606f, 30.35221f, 13.5f))
			{
				iLocal_2123++;
				Local_2059 = 1;
				Local_2059.f_6 = 1;
				Local_2059.f_5 = 2;
				Local_2059.f_1 = 8000;
				Local_2059.f_2 = 15000;
				GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), -168.9869f, -1697.645f, 30.958f, 38.6579f, 0);
				GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), -186.1806f, -1634.2f, 32.3377f, 179.0611f, 0);
				Local_1844.f_13 = -0.5f;
			}
			break;
	}
}


void func_68()//Position - 0x3B46
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_2123)
	{
		case 0:
			iLocal_1482 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000));
			iLocal_2123++;
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_1482)
			{
				iLocal_2123++;
			}
			break;
		
		case 2:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_69(&Local_1844, &iVar1))
				{
					if (func_5(&(Local_1227[iVar0 /*13*/]), Local_1844.f_15[iVar1 /*6*/], 1, 1))
					{
						Local_1227[iVar0 /*13*/].f_4 = 1;
						iLocal_2123 = 0;
					}
				}
			}
			break;
	}
}

int func_69(var uParam0, var uParam1)//Position - 0x3BDE
{
	if (iLocal_1479 >= iLocal_1481)
	{
		return 0;
	}
	if ((uParam0->f_1 % 4) != 0)
	{
		return 0;
	}
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_214);
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_15[*uParam1 /*6*/].f_2) > 3600f)
	{
		return 0;
	}
	if (bLocal_1117)
	{
		if (GlobalFunc_2351(uParam0->f_15[*uParam1 /*6*/].f_2, 1f, 0, 1))
		{
			return 0;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(uParam0->f_15[*uParam1 /*6*/].f_2, 1f))
	{
		return 0;
	}
	return 1;
}

void func_70()//Position - 0x3C72
{
	int iVar0;
	
	switch (iLocal_2123)
	{
		case 0:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_277.f_28[0], 1)) > 144f)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_277.f_28[0], Local_358.f_21[0], -1, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_277.f_28[0], 17, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_277.f_28[0], 13, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_277.f_28[0], 50, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_277.f_28[0], 2);
					TASK::TASK_COMBAT_PED(Local_277.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				iLocal_2123++;
			}
			break;
		
		case 1:
			if (Local_338 > 15)
			{
				iLocal_2123++;
			}
			break;
		
		case 2:
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], 1223.015f, -527.4169f, 65.9266f, 53.7151f, 1, 1))
				{
					func_41(&(Local_1358[iVar0 /*20*/]), 25f);
					iLocal_2123++;
				}
			}
			break;
		
		case 3:
			if (Local_338 > 25)
			{
				iLocal_2123++;
			}
			break;
		
		case 4:
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], 1171.583f, -365.452f, 67.1268f, 252.1326f, 1, 1))
				{
					func_41(&(Local_1358[iVar0 /*20*/]), 25f);
					iLocal_2123++;
				}
			}
			break;
	}
}

void func_71()//Position - 0x3E0A
{
	int iVar0;
	
	switch (iLocal_2123)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() > Local_338.f_13 + 2000)
			{
				iLocal_2123++;
			}
			break;
		
		case 1:
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[1], 978.354f, 3616.182f, 31.6477f, 356.7491f, 1, 1))
				{
					func_39(&(Local_1358[iVar0 /*20*/]), 1, 60f);
					iLocal_2123++;
				}
			}
			break;
	}
}

void func_72()//Position - 0x3E91
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_1477 = 0;
	GlobalFunc_238(iLocal_1477);
	iVar0 = 0;
	while (iVar0 < iLocal_1469)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1469[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1469[iVar0]))
			{
				func_73(iLocal_1469[iVar0], 0);
				GlobalFunc_131(&(iLocal_1469[iVar0]));
				iLocal_1469[iVar0] = 0;
			}
			else
			{
				iLocal_1477++;
			}
		}
		iVar0++;
	}
}

void func_73(int iParam0, int iParam1)//Position - 0x3F01
{
	GlobalFunc_115(iParam0);
	if (func_74(iParam0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RampageCarExploded"))
		{
			if (DECORATOR::DECOR_SET_BOOL(iParam0, "RampageCarExploded", 1))
			{
				if (bLocal_2122)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_VDED");
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
				}
				Local_338.f_6++;
				if (iParam1 == 1)
				{
				}
			}
		}
	}
}

int func_74(int iParam0)//Position - 0x3F59
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (Local_358.f_38 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_358.f_32)
	{
		if (Local_358.f_32[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}


void func_76(var uParam0)//Position - 0x3FAD
{
	struct<3> Var0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		Local_338.f_10++;
		VEHICLE::EXPLODE_VEHICLE(uParam0->f_2, 1, 0);
		GlobalFunc_6554(uParam0, 1);
		return;
	}
	uParam0->f_3 = GlobalFunc_156(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	if (uParam0->f_3 > (uParam0->f_4 + 100f))
	{
		GlobalFunc_6554(uParam0, 1);
		return;
	}
	if (!GlobalFunc_115(*uParam0))
	{
		GlobalFunc_6554(uParam0, 1);
		return;
	}
	VEHICLE::SET_VEHICLE_TURRET_SPEED_THIS_FRAME(uParam0->f_2, 0.7f);
	switch (uParam0->f_6)
	{
		case 0:
			PED::SET_PED_ACCURACY(*uParam0, 100);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, uParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 40f, 786436, -1f, -1f, 1);
			uParam0->f_6 = 1;
			break;
		
		case 1:
			if (uParam0->f_3 < 35f)
			{
				TASK::CLEAR_PED_TASKS(*uParam0);
				TASK::TASK_VEHICLE_TEMP_ACTION(*uParam0, uParam0->f_2, 24, 100);
				uParam0->f_6 = 2;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1273030092) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, uParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, 1);
			}
			break;
		
		case 2:
			if (!iLocal_2142)
			{
				if (GlobalFunc_10641(&uLocal_2212, Local_358.f_3, "RAMP5_TANK", 7, 0, 0, 0))
				{
					iLocal_2142 = 1;
				}
			}
			TASK::CLEAR_PED_TASKS(*uParam0);
			uParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var0 = { func_77(uParam0) };
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*uParam0, Var0, 1101004800);
			uParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			uParam0->f_6 = 3;
			break;
		
		case 3:
			if (FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 60f) || MISC::GET_GAME_TIMER() >= uParam0->f_5)
			{
				uParam0->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
				uParam0->f_6 = 4;
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() >= uParam0->f_5)
			{
				TASK::CLEAR_PED_TASKS(*uParam0);
				uParam0->f_6 = 6;
			}
			else if (uParam0->f_3 < 10f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1273030092) > 1)
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, uParam0->f_2, PLAYER::PLAYER_PED_ID(), 8, 30f, 786436, -1f, -1f, 1);
				}
			}
			else if (uParam0->f_3 < 35f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1273030092) == 1)
				{
					TASK::TASK_VEHICLE_TEMP_ACTION(*uParam0, uParam0->f_2, 24, 100);
					TASK::CLEAR_PED_TASKS(*uParam0);
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 12950610) > 1)
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
					TASK::TASK_VEHICLE_AIM_AT_COORD(*uParam0, uParam0->f_7);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1273030092) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, uParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, 1);
			}
			break;
		
		case 6:
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*uParam0, uParam0->f_7, 1101004800);
			uParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			uParam0->f_6 = 3;
			break;
	}
}

Vector3 func_77(var uParam0)//Position - 0x42BA
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	var uVar20;
	
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (GlobalFunc_234(uParam0->f_2))
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, 1) };
	}
	Var9 = { Var3 - Var6 };
	fLocal_1490 = MISC::ATAN2(Var9.f_1, Var9.x);
	fLocal_1488 = (fLocal_1490 + fLocal_1485);
	fLocal_1489 = ((fLocal_1490 - fLocal_1485) + 360f);
	fVar18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_1488, fLocal_1489);
	fVar19 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_1486, fLocal_1487);
	Var12.x = SYSTEM::COS(fVar18);
	Var12.f_1 = SYSTEM::SIN(fVar18);
	Var12.f_2 = 0f;
	Var15 = { Vector(fVar19, fVar19, fVar19) * Var12 };
	Var0 = { Var3 + Var15 };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar20))
	{
		Var0.f_2 = uVar20;
	}
	return Var0;
}



















void func_96()//Position - 0x4CC8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1358)
	{
		func_97(&(Local_1358[iVar0 /*20*/]));
		iVar0++;
	}
}

void func_97(var uParam0)//Position - 0x4CEF
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_73(*uParam0, 0);
		func_43(uParam0);
		return;
	}
	if (GlobalFunc_367(*uParam0, 1, 0, 0))
	{
		func_103(*uParam0);
		func_43(uParam0);
		return;
	}
	if (uParam0->f_2[0] != -1)
	{
		if (!GlobalFunc_115(Local_1227[uParam0->f_2[0] /*13*/]))
		{
			func_43(uParam0);
			return;
		}
	}
	uParam0->f_9 = GlobalFunc_156(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
	if (uParam0->f_9 >= (uParam0->f_10 + 120f))
	{
		func_43(uParam0);
		return;
	}
	switch (uParam0->f_11)
	{
		case 0:
			func_102(uParam0);
			break;
		
		case 1:
			func_101(uParam0);
			break;
		
		case 2:
			func_100(uParam0, 1);
			break;
		
		case 3:
			func_100(uParam0, 0);
			break;
		
		case 5:
			func_98(uParam0);
			break;
	}
}

void func_98(var uParam0)//Position - 0x4DE6
{
	int iVar0;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_1227[uParam0->f_2[0] /*13*/];
	if (!GlobalFunc_115(*uParam0))
	{
		return;
	}
	switch (uParam0->f_12)
	{
		case 0:
			if (!GlobalFunc_115(iVar0))
			{
				func_43(uParam0);
				uParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) == 7)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("vehicle_weapon_tank"), -1, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
				uParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
			{
				if (GlobalFunc_105(uParam0->f_14))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_156(*uParam0, PLAYER::PLAYER_PED_ID(), 1) > 5f)
			{
				TASK::TASK_VEHICLE_SHOOT_AT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 1101004800);
				uParam0->f_12 = 2;
			}
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 538064912) == 7)
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER() + 9000;
				uParam0->f_12 = 3;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 538064912) != 1)
			{
				uParam0->f_12 = 1;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() > uParam0->f_19)
			{
				uParam0->f_12 = 1;
			}
			break;
	}
}


void func_100(var uParam0, int iParam1)//Position - 0x4F88
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_1227[uParam0->f_2[0] /*13*/];
	if (!GlobalFunc_115(*uParam0))
	{
		return;
	}
	switch (uParam0->f_12)
	{
		case 0:
			if (!GlobalFunc_115(iVar1))
			{
				func_43(uParam0);
				uParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) == 7)
			{
				if (GlobalFunc_105(uParam0->f_14))
				{
					if (uParam0->f_9 > (uParam0->f_18 + 20f))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
						return;
					}
				}
				else if (GlobalFunc_713(*uParam0, uParam0->f_14, 1) > (uParam0->f_18 + 20f))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
					return;
				}
				uParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 1)
			{
				if (GlobalFunc_105(uParam0->f_14))
				{
					if (Local_358 == 79)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786468, uParam0->f_18, 15f, 1);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_2)
				{
					if (uParam0->f_2[iVar0] != -1)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_1227[uParam0->f_2[iVar0] /*13*/]))
						{
							func_47(Local_1227[uParam0->f_2[iVar0] /*13*/], *uParam0);
						}
					}
					uParam0->f_2[iVar0] = -1;
					iVar0++;
				}
				uParam0->f_12 = 3;
				func_43(uParam0);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_2)
				{
					if (uParam0->f_2[iVar0] != -1)
					{
						if (Local_1227[uParam0->f_2[iVar0] /*13*/] != iVar1)
						{
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_1227[uParam0->f_2[iVar0] /*13*/]))
							{
								func_47(Local_1227[uParam0->f_2[iVar0] /*13*/], *uParam0);
							}
							uParam0->f_2[iVar0] = -1;
						}
					}
					iVar0++;
				}
				uParam0->f_12 = 2;
			}
			break;
		
		case 2:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*uParam0) == 0 && iParam1)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(iVar1))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *uParam0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786436, 500f, -1f, 1);
					uParam0->f_12 = 3;
				}
				else
				{
					return;
				}
			}
			break;
	}
}

void func_101(var uParam0)//Position - 0x523A
{
	int iVar0;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_1227[uParam0->f_2[0] /*13*/];
	if (!GlobalFunc_115(*uParam0))
	{
		return;
	}
	if (!GlobalFunc_115(iVar0))
	{
		func_43(uParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) > 1)
	{
		if (GlobalFunc_105(uParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *uParam0, PLAYER::PLAYER_PED_ID(), 1, uParam0->f_17, 786436, -1f, -1f, 1);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *uParam0, uParam0->f_14, 1, uParam0->f_17, 786436, -1f, -1f, 1);
		}
	}
}

void func_102(var uParam0)//Position - 0x52D2
{
	int iVar0;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_1227[uParam0->f_2[0] /*13*/];
	if (!GlobalFunc_115(*uParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_115(iVar0))
		{
			TASK::CLEAR_PED_TASKS(iVar0);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
			uParam0->f_11 = 3;
		}
	}
	if (!GlobalFunc_115(iVar0))
	{
		func_43(uParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) > 1)
	{
		if (GlobalFunc_105(uParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *uParam0, PLAYER::PLAYER_PED_ID(), 6, uParam0->f_17, 786436, -1f, -1f, 1);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *uParam0, uParam0->f_14, 6, uParam0->f_17, 786436, -1f, -1f, 1);
		}
	}
}

void func_103(int iParam0)//Position - 0x53BA
{
	GlobalFunc_115(iParam0);
	Local_338.f_7++;
}


void func_105(int iParam0)//Position - 0x5486
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_106(iParam0[iLocal_1478 /*13*/]);
		iLocal_1478++;
		if (iLocal_1478 >= *iParam0)
		{
			iLocal_1478 = 0;
		}
		iVar0++;
	}
}

void func_106(var uParam0)//Position - 0x54C0
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	var uVar5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_48(uParam0, 0);
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
	if (Var0.f_2 < -10f)
	{
		func_48(uParam0, 0);
		return;
	}
	func_108(uParam0);
	if (Local_358 == 79 && GlobalFunc_115(Local_1459.f_2))
	{
		if (PED::GET_COMBAT_FLOAT(*uParam0, 6) != 0.05f)
		{
			PED::SET_COMBAT_FLOAT(*uParam0, 6, 0.05f);
		}
	}
	else if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_COMBAT_FLOAT(*uParam0, 6) != 0.01f)
		{
			PED::SET_COMBAT_FLOAT(*uParam0, 6, 0.01f);
		}
	}
	else if (PED::GET_COMBAT_FLOAT(*uParam0, 6) == 0.01f)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar4, 1))
		{
			if (iVar4 == Local_358.f_21[1])
			{
				PED::SET_COMBAT_FLOAT(*uParam0, 6, Local_426.f_5);
			}
			else
			{
				PED::SET_COMBAT_FLOAT(*uParam0, 6, Local_426.f_4);
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
	{
		uParam0->f_5 = GlobalFunc_156(PED::GET_VEHICLE_PED_IS_IN(*uParam0, 0), PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		uParam0->f_5 = GlobalFunc_156(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
	}
	if (uParam0->f_4)
	{
		if (uParam0->f_5 < 25f && ENTITY::IS_ENTITY_ON_SCREEN(*uParam0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_molotov"), 4, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*uParam0, sLocal_2181, "SPEECH_PARAMS_FORCE", 1);
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::OPEN_SEQUENCE_TASK(&uVar5);
			TASK::TASK_THROW_PROJECTILE(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			TASK::TASK_SWAP_WEAPON(0, 1);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uVar5);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar5);
			TASK::CLEAR_SEQUENCE_TASK(&uVar5);
			uParam0->f_4 = 0;
		}
	}
	if (uParam0->f_2 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			GlobalFunc_146(&(uParam0->f_1));
			if (GlobalFunc_1533(*uParam0, PED::GET_VEHICLE_PED_IS_IN(*uParam0, 0), -1))
			{
				uParam0->f_1 = GlobalFunc_5743(PED::GET_VEHICLE_PED_IS_IN(*uParam0, 0), 0, 5);
			}
			uParam0->f_2 = 1;
			return;
		}
	}
	if (uParam0->f_2 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			GlobalFunc_146(&(uParam0->f_1));
			uParam0->f_1 = GlobalFunc_4955(*uParam0, 1, 0, 5);
			uParam0->f_2 = 0;
			uParam0->f_6 = uParam0->f_5;
			TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
			return;
		}
	}
	if (uParam0->f_3)
	{
		bVar3 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		if ((!bVar3 && uParam0->f_5 > (uParam0->f_6 + 40f)) || (bVar3 && uParam0->f_5 > (100f * 2f)))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam0))
			{
				func_21(uParam0);
			}
			else
			{
				func_48(uParam0, 1);
			}
		}
	}
	else if (uParam0->f_2 == 0 && uParam0->f_5 > (uParam0->f_6 + 100f))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam0))
		{
			func_21(uParam0);
		}
	}
}


void func_108(var uParam0)//Position - 0x57ED
{
	if (!Local_358 == 80)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		func_109(uParam0);
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_12)
	{
		GlobalFunc_10641(&uLocal_2212, Local_358.f_3, uParam0->f_11, 6, 1, 0, 0);
		uParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	}
}

void func_109(var uParam0)//Position - 0x586F
{
	if (iLocal_2210 > 8)
	{
		iLocal_2210 = 0;
	}
	switch (iLocal_2210)
	{
		case 0:
			uParam0->f_11 = "RAMP2_HIP9";
			uParam0->f_10 = "RAMPAGEHIPSTER9";
			break;
		
		case 1:
			uParam0->f_11 = "RAMP2_HIP1";
			uParam0->f_10 = "RAMPAGEHIPSTER";
			break;
		
		case 2:
			uParam0->f_11 = "RAMP2_HIP2";
			uParam0->f_10 = "RAMPAGEHIPSTER2";
			break;
		
		case 3:
			uParam0->f_11 = "RAMP2_HIP3";
			uParam0->f_10 = "RAMPAGEHIPSTER3";
			break;
		
		case 4:
			uParam0->f_11 = "RAMP2_HIP4";
			uParam0->f_10 = "RAMPAGEHIPSTER4";
			break;
		
		case 5:
			uParam0->f_11 = "RAMP2_HIP5";
			uParam0->f_10 = "RAMPAGEHIPSTER5";
			break;
		
		case 6:
			uParam0->f_11 = "RAMP2_HIP6";
			uParam0->f_10 = "RAMPAGEHIPSTER6";
			break;
		
		case 7:
			uParam0->f_11 = "RAMP2_HIP7";
			uParam0->f_10 = "RAMPAGEHIPSTER7";
			break;
		
		case 8:
			uParam0->f_11 = "RAMP2_HIP8";
			uParam0->f_10 = "RAMPAGEHIPSTER8";
			break;
	}
	GlobalFunc_173(&uLocal_2212, iLocal_2210, *uParam0, uParam0->f_10, 0, 1);
	iLocal_2210++;
	if (iLocal_2210 == 2)
	{
		iLocal_2210++;
	}
}


void func_111()//Position - 0x5A23
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_338;
	iVar1 = (Local_358.f_16 - (MISC::GET_GAME_TIMER() - Local_338.f_13));
	if (iLocal_1118 == 0)
	{
		if (iVar1 <= 0)
		{
			iVar1 = 0;
			iLocal_2148 = 5;
			if (iVar0 >= Local_358.f_53)
			{
				Local_358.f_50 = 1;
			}
		}
	}
	if (!iLocal_1113)
	{
		iLocal_1113 = 1;
		if (Local_358 == 79)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_1112, "RAMPAGE_TIMER_COUNTDOWN_LOOP_3_MIN_MASTER", 0, 1);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_1112, "RAMPAGE_TIMER_COUNTDOWN_LOOP_MASTER", 0, 1);
		}
	}
	if (iVar1 <= 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else if (iVar1 < iLocal_2143)
	{
		iLocal_2143 = (iLocal_2143 - 1000);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	GlobalFunc_7547(iVar0, "TR_HKILL", iVar1, "TR_HTIME", 0, 0, -1, iLocal_2150[iLocal_1025]);
}







void func_118()//Position - 0x5DCC
{
	int iVar0;
	
	if (!Local_358.f_52)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Local_1030[iVar0 /*8*/].f_7)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1030[iVar0 /*8*/]))
			{
				Local_1030[iVar0 /*8*/] = OBJECT::CREATE_OBJECT(Local_358.f_36, Local_1030[iVar0 /*8*/].f_1, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(Local_1030[iVar0 /*8*/], Local_1030[iVar0 /*8*/].f_4, 2, 1);
				Local_1030[iVar0 /*8*/].f_7 = 1;
			}
		}
		iVar0++;
	}
}

void func_119()//Position - 0x5E4F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	func_120(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (GlobalFunc_115(Local_1227[iLocal_424 /*13*/]))
		{
			func_120(Local_1227[iLocal_424 /*13*/]);
			iVar1++;
		}
		iLocal_424++;
		if (iLocal_424 >= 10)
		{
			iLocal_424 = 0;
		}
		if (iVar1 >= 2)
		{
			return;
		}
		iVar0++;
	}
}

void func_120(int iParam0)//Position - 0x5EB3
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	
	if (GlobalFunc_115(iParam0))
	{
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (ENTITY::IS_ENTITY_DEAD(uVar2[iVar0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar2[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_73(uVar2[iVar0], 0);
				}
			}
			iVar0++;
		}
	}
}

void func_121()//Position - 0x5F11
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							func_122(iVar3);
						}
						else if (PED::IS_PED_INJURED(iVar3))
						{
							ENTITY::SET_ENTITY_HEALTH(iVar3, 0);
							func_122(iVar3);
						}
					}
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, PLAYER::PLAYER_PED_ID(), 1))
							{
								func_73(iVar4, 1);
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_122(int iParam0)//Position - 0x5FC7
{
	float fVar0;
	
	GlobalFunc_115(iParam0);
	if (!func_126(iParam0))
	{
		Local_338.f_2++;
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	func_125();
	Local_338++;
	if (GlobalFunc_4229(iParam0))
	{
		Local_338.f_1++;
		if (bLocal_2122)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_HEAD");
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		if ((Local_338 % 5) == 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, 1);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_HEAD_SHOT_MASTER", 0, 1);
		}
	}
	else if ((Local_338 % 5) == 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, 1);
	}
	else if ((MISC::GET_GAME_TIMER() - Local_338.f_11) > 64)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_COUNTER_MASTER", 0, 1);
	}
	Local_338.f_11 = MISC::GET_GAME_TIMER();
	Local_338.f_16++;
	fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iParam0, 1);
	if (fVar0 <= 2f)
	{
		Local_338.f_4++;
	}
	if (fVar0 >= 50f)
	{
		Local_338.f_5++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		Local_338.f_8++;
	}
	if (GlobalFunc_4680(iParam0))
	{
		Local_338.f_3++;
	}
}



void func_125()//Position - 0x61CD
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_2207)
	{
		return;
	}
	if (iLocal_2148 != 4)
	{
		return;
	}
	iLocal_2207 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	GlobalFunc_10641(&uLocal_2212, Local_358.f_3, Local_358.f_4, 7, 0, 0, 0);
}

int func_126(int iParam0)//Position - 0x621E
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = 0;
	while (iVar0 < Local_358.f_27)
	{
		if (Local_358.f_27[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_127()//Position - 0x6257
{
	int iVar0;
	
	switch (iLocal_2148)
	{
		case 0:
			GlobalFunc_8320();
			iLocal_2148 = 1;
			iLocal_1111 = 0;
			break;
		
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			GlobalFunc_8320();
			if (GlobalFunc_6560())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				func_467(1);
				GlobalFunc_5196(Local_358.f_43, Local_358.f_42, 0, 0);
				GlobalFunc_6559(&Local_277);
				HUD::CLEAR_HELP(1);
				HUD::HIDE_HELP_TEXT_THIS_FRAME();
				iLocal_2148 = 2;
				GlobalFunc_7101(&Local_277, 1);
				GlobalFunc_4691(&Local_338);
				GlobalFunc_5733(0, 0, 1, 1);
				func_366();
				func_250(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1, 1, 1, 1, 1, 1, 1);
				func_249(1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 240f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 240f, 0, 0, 0, 0, 0);
				GlobalFunc_5732(&uLocal_1029, 0);
				Global_96440[Local_277 /*10*/] = 1;
				return;
			}
			if (func_212())
			{
				iLocal_2148 = 2;
			}
			break;
		
		case 2:
			iLocal_2155 = 255;
			GlobalFunc_4691(&Local_338);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2145, "SHOW_SHARD_CENTERED_MP_MESSAGE");
			GlobalFunc_726("RAMPAGE");
			GlobalFunc_726("");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2156 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_2148 = 3;
			if (Local_358.f_54 > 0)
			{
				MISC::SET_RANDOM_SEED(Local_358.f_54);
			}
			break;
		
		case 3:
			GlobalFunc_4691(&Local_338);
			if (GlobalFunc_6560())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
				}
				if (CAM::IS_SCREEN_FADING_IN())
				{
				}
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
				func_207(1);
				func_204();
			}
			iLocal_2148 = 4;
			iLocal_1025 = 0;
			iLocal_2123 = 0;
			Local_338.f_13 = MISC::GET_GAME_TIMER();
			Local_338.f_15 = (Local_338.f_13 + Local_358.f_16);
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_79(500, 0);
			func_198();
			GlobalFunc_7548(&Local_1227);
			func_196();
			func_195();
			GlobalFunc_4688();
			if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
			{
				func_193();
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), Local_426.f_1);
				PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), Local_426.f_2);
				if (!bLocal_2205)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_11, 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_2133))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_2133))
				{
					AUDIO::START_AUDIO_SCENE(iLocal_2133);
				}
			}
			HUD::BEGIN_TEXT_COMMAND_PRINT("TR_ROBJ1");
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_358.f_53);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(Local_358.f_2);
			HUD::END_TEXT_COMMAND_PRINT(7500, 1);
			if (AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_11, 3))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (!iLocal_2397)
			{
				if (MISC::GET_GAME_TIMER() > Local_338.f_13 + 2500)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2145, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_2397 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > Local_338.f_13 + 3000)
			{
				if (iLocal_2124 == 0)
				{
					if (Local_358 == 76)
					{
						GlobalFunc_159("RAMP_WPN_CHNGE", -1);
						iLocal_2124 = 1;
					}
				}
				if (iLocal_2145 != 0)
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2145);
					iLocal_2145 = 0;
				}
				return;
			}
			break;
		
		case 5:
			iLocal_2155 = 255;
			Local_338.f_14 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_STOP");
			AUDIO::STOP_SOUND(iLocal_1112);
			GlobalFunc_146(&iLocal_2129);
			GlobalFunc_6554(&Local_1459, 1);
			GlobalFunc_4687();
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f);
			func_250(0f, 0f, 0f, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1);
			GlobalFunc_6557(PLAYER::PLAYER_PED_ID(), 10f, 0, 1101004800);
			func_186(&Local_1358);
			func_184(&Local_1227);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::GIVE_PLAYER_RAGDOLL_CONTROL(PLAYER::PLAYER_ID(), 1);
			}
			if (Local_358.f_50)
			{
				func_183(2000);
				AUDIO::STOP_STREAM();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_PASSED_MASTER", 0, 1);
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_2133))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_2133))
				{
					AUDIO::STOP_AUDIO_SCENE(iLocal_2133);
					iLocal_2133 = 0;
				}
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == Local_358.f_17[0] || ((iVar0 == Local_358.f_17[1] && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_1114 = true;
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_13, 4f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							bLocal_1114 = false;
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_12, 4f, -8f, -1, 0, 0, 0, 0, 0);
						}
						if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
					else
					{
						iLocal_1023 = GlobalFunc_6556(iVar0, 0);
						if (GlobalFunc_234(iLocal_1023))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1023))
							{
								ENTITY::DETACH_ENTITY(iLocal_1023, 1, 1);
							}
						}
						if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
						}
					}
				}
			}
			func_161();
			iLocal_2156 = MISC::GET_GAME_TIMER();
			iLocal_2148 = 6;
			break;
		
		case 6:
			GlobalFunc_4687();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (bLocal_1114)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_13, 3))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_13) > Local_358.f_15)
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
						{
							iLocal_1023 = GlobalFunc_6556(iVar0, 0);
						}
						if (GlobalFunc_234(iLocal_1023))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1023))
							{
								ENTITY::DETACH_ENTITY(iLocal_1023, 1, 1);
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_12, 3))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_12) > Local_358.f_14)
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
					{
						iLocal_1023 = GlobalFunc_6556(iVar0, 0);
					}
					if (GlobalFunc_234(iLocal_1023))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1023))
						{
							ENTITY::DETACH_ENTITY(iLocal_1023, 1, 1);
						}
					}
				}
			}
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			if (Local_358.f_50 == 0)
			{
				iLocal_2148 = 7;
				iLocal_2156 = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_2156 + 7500 || (GlobalFunc_1080() && MISC::GET_GAME_TIMER() > iLocal_2156 + 2000))
			{
				GlobalFunc_2252(&Local_447);
				iLocal_2148 = 8;
				iLocal_2156 = MISC::GET_GAME_TIMER() + 1500;
			}
			break;
		
		case 7:
			GlobalFunc_4687();
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 0, 0);
			if (MISC::GET_GAME_TIMER() > iLocal_2156)
			{
				GlobalFunc_2346(&iLocal_1023);
				iLocal_1023 = 0;
				func_157();
				return;
			}
			break;
		
		case 8:
			if (GlobalFunc_9550(&Local_447, 0, 1065353216, 0, 0, 0))
			{
				iLocal_2148 = 9;
			}
			break;
		
		case 9:
			GlobalFunc_4687();
			WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			GlobalFunc_2295(&iLocal_1023, 0);
			GlobalFunc_6503(&Local_447);
			func_516(0);
			return;
	}
	if (iLocal_2148 >= 5)
	{
		if (Local_358.f_50 == 0)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
	}
	if (!func_484())
	{
		if (iLocal_2148 >= 5)
		{
			if (Local_358.f_50)
			{
				GlobalFunc_9550(&Local_447, 0, 1065353216, 0, 0, 0);
			}
		}
		else if (iLocal_2148 >= 2)
		{
			if (iLocal_2145 != 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_2145, 255, 255, 255, iLocal_2155, 0);
			}
		}
	}
}






























void func_157()//Position - 0x8BDE
{
	iLocal_2149 = 1;
}




void func_161()//Position - 0x8C7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (Local_358.f_16 - (Local_338.f_14 - Local_338.f_13));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_176();
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[iVar1 /*2*/].f_1 > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("num_rampages_completed"), &iVar1, -1);
	if (iVar1 < iVar2)
	{
		STATS::STAT_SET_INT(joaat("num_rampages_completed"), iVar2, 1);
		GlobalFunc_4(21, iVar2);
	}
	GlobalFunc_2263(&Local_447, "RPASSED", Local_358.f_5, 0);
	Local_447.f_562 = 1;
	iVar1 = 0;
	while (iVar1 < Local_413.x)
	{
		func_171(&(Local_413[iVar1 /*3*/]));
		iVar1++;
	}
	if (iLocal_1025 == 3)
	{
		iVar3 = 3;
		func_168(100f);
	}
	else if (iLocal_1025 == 2)
	{
		iVar3 = 2;
		func_168(75f);
	}
	else
	{
		iVar3 = 1;
		func_168(50f);
	}
	GlobalFunc_4682(&Local_447, Local_358.f_50, "RO_RATE", iLocal_423, Local_413.x, 1, iVar3);
	if (Local_358.f_50)
	{
		GlobalFunc_7537(&Local_447, 1, 0);
	}
	if (Local_358.f_50)
	{
		GlobalFunc_4681();
	}
}







void func_168(float fParam0)//Position - 0x91D3
{
	float fVar0;
	
	fVar0 = GlobalFunc_4551(iLocal_276);
	if (fVar0 < 100f)
	{
		if (fParam0 >= 100f)
		{
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionGolds++;
		}
	}
	if (fParam0 >= fVar0)
	{
		GlobalFunc_4550(iLocal_276, fParam0, 0);
	}
}



void func_171(var uParam0)//Position - 0x926A
{
	int iVar0;
	
	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = 1;
	if (func_173(uParam0))
	{
		iVar0 = 2;
		iLocal_423++;
	}
	GlobalFunc_2658(&Local_447, 17, uParam0->f_2, "", uParam0->f_1, 0, iVar0, 0);
}


int func_173(var uParam0)//Position - 0x931F
{
	switch (*uParam0)
	{
		case 1:
			return Local_338 >= uParam0->f_1;
		
		case 2:
			return Local_338.f_1 >= uParam0->f_1;
		
		case 3:
			return Local_338.f_17 >= uParam0->f_1;
		
		case 4:
			return Local_338.f_6 >= uParam0->f_1;
		
		case 5:
			return Local_338.f_8 >= uParam0->f_1;
		
		case 6:
			return Local_338.f_9 >= uParam0->f_1;
		
		case 7:
			return Local_338.f_4 >= uParam0->f_1;
		
		case 8:
			return Local_338.f_5 >= uParam0->f_1;
		
		case 9:
			return Local_338.f_10 >= uParam0->f_1;
		
		default:
	}
	return 0;
}



int func_176()//Position - 0x944D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	float fVar7;
	
	iVar6 = (Local_358.f_16 - (Local_338.f_14 - Local_338.f_13));
	GlobalFunc_4685(iVar6, &uVar3, &uVar4, &uVar5);
	iVar2 = Local_338.f_6 * 500;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_338.f_17 * 10000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_338.f_1 * 5000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_338 * 1000;
	iVar1 = (iVar1 + iVar2);
	fVar7 = (func_178(&Local_413) * 50f);
	iVar0 = 0;
	while (iVar0 < Local_413.x)
	{
		if (func_173(&(Local_413[iVar0 /*3*/])))
		{
		}
		iVar0++;
	}
	if (Local_338 >= Local_358.f_53)
	{
		fVar7 = (fVar7 + 50f);
	}
	if ((((((((GlobalFunc_4683(0) || GlobalFunc_4683(1)) || GlobalFunc_4683(2)) || GlobalFunc_4683(3)) || GlobalFunc_4683(4)) || GlobalFunc_4683(6)) || GlobalFunc_4683(7)) || GlobalFunc_4683(20)) || GlobalFunc_4683(10))
	{
		iLocal_1025 = 1;
	}
	else if (fVar7 >= 100f)
	{
		iLocal_1025 = 3;
	}
	else if (fVar7 >= 75f)
	{
		iLocal_1025 = 2;
	}
	else if (fVar7 >= 50f)
	{
		iLocal_1025 = 1;
	}
	else
	{
		iLocal_1025 = 0;
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (iLocal_1025 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/] || iVar1 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/].f_1)
		{
			MISC::CLEAR_REPLAY_STATS();
			MISC::BEGIN_REPLAY_STATS(13, 37);
			MISC::ADD_REPLAY_STAT_VALUE(Local_358.f_1);
			if (iLocal_1025 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/])
			{
				MISC::ADD_REPLAY_STAT_VALUE(iLocal_1025);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/]);
			}
			if (iVar1 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/].f_1)
			{
				MISC::ADD_REPLAY_STAT_VALUE(iVar1);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/].f_1);
			}
			MISC::END_REPLAY_STATS();
		}
	}
	if (iLocal_1025 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/])
	{
		Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/] = iLocal_1025;
	}
	if (iVar1 > Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/].f_1)
	{
		Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[Local_358.f_1 /*2*/].f_1 = iVar1;
	}
	return iVar1;
}


float func_178(var uParam0)//Position - 0x96B6
{
	int iVar0;
	
	iVar0 = GlobalFunc_4684(uParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return (SYSTEM::TO_FLOAT(func_179(uParam0)) / SYSTEM::TO_FLOAT(iVar0));
}

int func_179(var uParam0)//Position - 0x96E1
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_173(uParam0[iVar0 /*3*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}




void func_183(int iParam0)//Position - 0x9819
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Local_358.f_16 - (Local_338.f_14 - Local_338.f_13));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() < iVar1)
	{
		GlobalFunc_4687();
		GlobalFunc_7547(Local_338, "TR_HKILL", iVar0, "TR_HTIME", 0, 0, -1, iLocal_2150[iLocal_1025]);
		SYSTEM::WAIT(0);
	}
}

void func_184(int iParam0)//Position - 0x9877
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_185(iParam0[iVar0 /*13*/]);
		iVar0++;
	}
}

void func_185(var uParam0)//Position - 0x989D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(*uParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*uParam0, 1);
		TASK::CLEAR_PED_TASKS(*uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, iLocal_2211);
		TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 400f, -1, 0, 0);
		PED::SET_PED_MONEY(*uParam0, 0);
	}
	func_48(uParam0, 1);
}

void func_186(int iParam0)//Position - 0x9908
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_187(iParam0[iVar0 /*20*/], 1);
		iVar0++;
	}
}

void func_187(var uParam0, bool bParam1)//Position - 0x992F
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_1227[uParam0->f_2[0] /*13*/];
	if (!GlobalFunc_115(*uParam0))
	{
		return;
	}
	if (GlobalFunc_115(iVar1) && !PED::IS_PED_INJURED(iVar1))
	{
		if (bParam1)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) + GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(*uParam0, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) * Vector(500f, 500f, 500f) };
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var2, 0, &Var5, 1, 1077936128, 0))
			{
				Var5 = { Var2 };
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, *uParam0, 0))
			{
				if (GlobalFunc_708(iVar1) == -1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, *uParam0, Var5, 4, 60f, 786436, uParam0->f_18, 15f, 1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, *uParam0, 60f, 786469);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iVar1, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(iVar1, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		}
	}
	func_48(&(Local_1227[uParam0->f_2[0] /*13*/]), 1);
	func_43(uParam0);
}






void func_193()//Position - 0x9D00
{
	int iVar0;
	
	iVar0 = 0;
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 15, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_358.f_17)
	{
		if (Local_358.f_17[iVar0] != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[iVar0], -1, 1, 1);
			WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[iVar0], -1);
			WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, Local_358.f_17[iVar0]);
		}
		iVar0++;
	}
	if (Local_358.f_17[0] != 0 && Local_358.f_17[0] != joaat("weapon_unarmed"))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_358.f_24)
		{
			if (Local_358.f_24[iVar0] != 0)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[0], Local_358.f_24[iVar0]);
			}
			iVar0++;
		}
	}
	if (Local_358.f_17[0] != 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), Local_358.f_17[0], 1);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, "TREVOR_ACTION");
}


void func_195()//Position - 0x9E3D
{
	switch (Local_358)
	{
		case 76:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		
		case joaat("mpsv_lp0_31"):
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_196()//Position - 0x9EA7
{
	if (iLocal_2388 == 1)
	{
		return;
	}
	switch (Local_358)
	{
		case 76:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_START");
			break;
		
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_START");
			break;
		
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_START");
			break;
		
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_START");
			break;
		
		case joaat("mpsv_lp0_31"):
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_START");
			break;
	}
	iLocal_2388 = 1;
}


void func_198()//Position - 0x9F8E
{
	GlobalFunc_173(&uLocal_2212, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_2207 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
}






void func_204()//Position - 0xA11C
{
	int iVar0;
	
	switch (Local_358)
	{
		case 76:
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], 930.9605f, 3555.544f, 32.9354f, 354.1474f, 1, 1))
				{
					func_206(&(Local_1358[iVar0 /*20*/]), 911.7063f, 3625.549f, 31.3674f, 40f, 1084227584);
				}
			}
			break;
		
		case 80:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				func_6(&(Local_1227[iVar0 /*13*/]), 1175.093f, -417.2925f, 66.3285f, 265.3943f, 1);
			}
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				func_6(&(Local_1227[iVar0 /*13*/]), 1170.452f, -425.424f, 66.0957f, 300.0205f, 1);
			}
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				func_6(&(Local_1227[iVar0 /*13*/]), 1171.632f, -423.409f, 66.0957f, 300.236f, 1);
			}
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[2], 1169.7f, -366.0976f, 66.9855f, 256.6603f, 1, 1))
				{
					func_206(&(Local_1358[iVar0 /*20*/]), 1188.045f, -407.0416f, 66.8409f, 30f, 1084227584);
				}
			}
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[2], 1154.992f, -474.4909f, 65.5083f, 245.5358f, 1, 1))
				{
					func_206(&(Local_1358[iVar0 /*20*/]), 1192.134f, -400.4286f, 66.8566f, 30f, 1084227584);
				}
			}
			break;
		
		case 77:
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[0], 405.9012f, -1916.185f, 24.1725f, 48.5025f, 1, 1))
				{
					func_39(&(Local_1358[iVar0 /*20*/]), 1, 40f);
					GlobalFunc_6558(&(Local_1358[iVar0 /*20*/]));
				}
			}
			if (func_54(&iVar0))
			{
				if (func_42(&(Local_1358[iVar0 /*20*/]), Local_358.f_32[1], 351.6271f, -1906.695f, 23.7255f, 221.0698f, 1, 1))
				{
					func_39(&(Local_1358[iVar0 /*20*/]), 1, 40f);
					GlobalFunc_6558(&(Local_1358[iVar0 /*20*/]));
				}
			}
			break;
		
		case 78:
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -148.0109f, -1632.124f, 32.0708f, 230.0827f, 1))
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 30f, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -122.8691f, -1634.979f, 31.1487f, 42.2112f, 1))
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 30f, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar0))
			{
				if (func_6(&(Local_1227[iVar0 /*13*/]), -134.9283f, -1614.315f, 31.6326f, 243.3803f, 1))
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 30f, 0);
					TASK::TASK_SEEK_COVER_FROM_PED(Local_1227[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), -1, 1);
				}
			}
			break;
		
		default:
			break;
	}
}


void func_206(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xA4A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_1227[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !GlobalFunc_115(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { Param1 };
	uParam0->f_17 = fParam4;
	uParam0->f_18 = iParam5;
	if (GlobalFunc_IsPedNotInjuredOrDead(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, iLocal_2211);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar2, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, 1);
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0);
		if (GlobalFunc_IsPedNotInjuredOrDead(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 3;
}

void func_207(int iParam0)//Position - 0xA595
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	GlobalFunc_5733(0, 0, 1, 1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Local_358.f_48);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(Local_358.f_47);
	switch (Local_358)
	{
		case 76:
			if (GlobalFunc_4673(&Local_1227, &iVar2))
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					func_210(&(Local_1227[iVar2 /*13*/]), &(Local_277.f_28[0]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_hic"), 914.6789f, 3638.753f, 31.89652f, -68.55754f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, 914.6789f, 3638.753f, 31.89652f);
					func_210(&(Local_1227[iVar2 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar3))
			{
				if (GlobalFunc_115(Local_277.f_28[1]))
				{
					func_210(&(Local_1227[iVar3 /*13*/]), &(Local_277.f_28[1]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_hic"), 915.5814f, 3637.608f, 31.91249f, -143.115f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, 915.5814f, 3637.608f, 31.91249f);
					func_210(&(Local_1227[iVar3 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_358.f_43);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_358.f_46);
				}
				GlobalFunc_5724(Local_1227[iVar2 /*13*/], 926.0913f, 3639.447f, 32.4406f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar2 /*13*/], GlobalFunc_569(-1.38f));
				GlobalFunc_5724(Local_1227[iVar3 /*13*/], 923.4156f, 3632.409f, 32.4944f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar3 /*13*/], -143.115f);
				func_208(Local_1227[iVar2 /*13*/], 1007.167f, 3634.447f, 31.5345f, 1);
				func_208(Local_1227[iVar3 /*13*/], 1049.895f, 3575.015f, 32.9901f, 1);
			}
			iVar5 = 1;
			break;
		
		case 80:
			if (GlobalFunc_4673(&Local_1227, &iVar2))
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					func_210(&(Local_1227[iVar2 /*13*/]), &(Local_277.f_28[0]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_hipster"), 1186.44f, -407.79f, 67.72f, GlobalFunc_569(-2.04f), 1, 1);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iVar1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					GlobalFunc_5724(iVar1, 1186.44f, -407.79f, 67.72f);
					func_210(&(Local_1227[iVar2 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_358.f_43);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_358.f_46);
				}
				GlobalFunc_5724(Local_1227[iVar2 /*13*/], 1186.44f, -407.79f, 67.72f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar2 /*13*/], GlobalFunc_569(-2.04f));
				func_208(Local_1227[iVar2 /*13*/], 1212f, -421.3f, 67.6f, 1);
			}
			iVar5 = 1;
			break;
		
		case 77:
			if (GlobalFunc_4673(&Local_1227, &iVar2))
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					func_210(&(Local_1227[iVar2 /*13*/]), &(Local_277.f_28[0]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_mex"), 454.1726f, -1851.316f, 26.9211f, 131.26f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, 454.1726f, -1851.316f, 26.9211f);
					func_210(&(Local_1227[iVar2 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar3))
			{
				if (GlobalFunc_115(Local_277.f_28[1]))
				{
					func_210(&(Local_1227[iVar3 /*13*/]), &(Local_277.f_28[1]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_mex"), 457.3105f, -1854.067f, 26.8747f, 128.305f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, 457.3105f, -1854.067f, 26.8747f);
					func_210(&(Local_1227[iVar3 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_358.f_43);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_358.f_46);
				}
				GlobalFunc_5724(Local_1227[iVar2 /*13*/], 454.1726f, -1851.316f, 26.9211f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar2 /*13*/], 131.26f);
				GlobalFunc_5724(Local_1227[iVar3 /*13*/], 457.3105f, -1854.067f, 26.8747f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar3 /*13*/], 128.305f);
				func_208(Local_1227[iVar3 /*13*/], 408.9685f, -1923.852f, 24.0339f, 1);
				func_208(Local_1227[iVar2 /*13*/], 335.7316f, -1887.279f, 24.8253f, 1);
			}
			iVar5 = 1;
			break;
		
		case 78:
			MISC::CLEAR_AREA_OF_OBJECTS(-152.6f, -1665.1f, 32.9f, 1f, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(-132.7f, -1615.8f, 32.6f, 1f, 0);
			if (GlobalFunc_4673(&Local_1227, &iVar2))
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					func_210(&(Local_1227[iVar2 /*13*/]), &(Local_277.f_28[0]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_gang"), -156f, -1660.82f, 32.88f, -14.52f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, -156.9f, -1662.03f, 32.84f);
					func_210(&(Local_1227[iVar2 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar3))
			{
				if (GlobalFunc_115(Local_277.f_28[1]))
				{
					func_210(&(Local_1227[iVar3 /*13*/]), &(Local_277.f_28[1]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("ig_ramp_gang"), -163.45f, -1671.12f, 32.38f, -20.36f, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					GlobalFunc_5724(iVar1, -163.45f, -1671.12f, 32.38f);
					func_210(&(Local_1227[iVar3 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_358.f_43);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_358.f_46);
				}
				GlobalFunc_5724(Local_1227[iVar2 /*13*/], -156.9f, -1662.03f, 32.84f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar2 /*13*/], -14.52f);
				func_208(Local_1227[iVar2 /*13*/], -110.74f, -1601.2f, 31.7f, 0);
				GlobalFunc_5724(Local_1227[iVar3 /*13*/], -164.5f, -1672.9f, 32.22f);
				ENTITY::SET_ENTITY_HEADING(Local_1227[iVar3 /*13*/], -20.36f);
				func_208(Local_1227[iVar3 /*13*/], -142.6f, -1713.4f, 30.1f, 1);
			}
			iVar5 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			if (GlobalFunc_115(Local_277.f_35[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_35[0], 0);
			}
			if (GlobalFunc_4673(&Local_1227, &iVar2))
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					func_210(&(Local_1227[iVar2 /*13*/]), &(Local_277.f_28[0]), 1, 0, 0);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1299.23f, 2510.35f, 21.26f, GlobalFunc_569(-1.31f), 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					PED::CLEAR_PED_PROP(iVar1, 0);
					PED::CLEAR_PED_PROP(iVar1, 1);
					PED::CLEAR_PED_PROP(iVar1, 2);
					PED::CLEAR_PED_PROP(iVar1, 3);
					PED::CLEAR_PED_PROP(iVar1, 4);
					PED::CLEAR_PED_PROP(iVar1, 5);
					PED::CLEAR_PED_PROP(iVar1, 6);
					PED::CLEAR_PED_PROP(iVar1, 7);
					PED::CLEAR_PED_PROP(iVar1, 8);
					func_210(&(Local_1227[iVar2 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (GlobalFunc_4673(&Local_1227, &iVar3))
			{
				if (GlobalFunc_115(Local_277.f_28[1]))
				{
					func_210(&(Local_1227[iVar3 /*13*/]), &(Local_277.f_28[1]), 1, 0, 0);
					ENTITY::SET_ENTITY_HEADING(Local_1227[iVar3 /*13*/], 8.44f);
				}
				else
				{
					iVar1 = PED::CREATE_PED(26, joaat("s_m_y_marine_03"), -1298.69f, 2511.35f, 21.17f, GlobalFunc_569(-1.42f), 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 0, 0, 0);
					PED::CLEAR_PED_PROP(iVar1, 0);
					PED::CLEAR_PED_PROP(iVar1, 1);
					PED::CLEAR_PED_PROP(iVar1, 2);
					PED::CLEAR_PED_PROP(iVar1, 3);
					PED::CLEAR_PED_PROP(iVar1, 4);
					PED::CLEAR_PED_PROP(iVar1, 5);
					PED::CLEAR_PED_PROP(iVar1, 6);
					PED::CLEAR_PED_PROP(iVar1, 7);
					PED::CLEAR_PED_PROP(iVar1, 8);
					func_210(&(Local_1227[iVar3 /*13*/]), &iVar1, 1, 0, 0);
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_358.f_43);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_358.f_46);
				}
				if (GlobalFunc_115(Local_1227[iVar2 /*13*/]))
				{
					GlobalFunc_5724(Local_1227[iVar2 /*13*/], -1288.955f, 2529.995f, 19.52f);
					ENTITY::SET_ENTITY_HEADING(Local_1227[iVar2 /*13*/], GlobalFunc_569(-0.83f));
					func_208(Local_1227[iVar2 /*13*/], -1222.569f, 2587.651f, 15.1474f, 1);
				}
				if (GlobalFunc_115(Local_1227[iVar3 /*13*/]))
				{
					GlobalFunc_5724(Local_1227[iVar3 /*13*/], -1284.799f, 2535.821f, 18.7709f);
					ENTITY::SET_ENTITY_HEADING(Local_1227[iVar3 /*13*/], GlobalFunc_569(-0.15f));
					func_208(Local_1227[iVar3 /*13*/], -1222.569f, 2587.651f, 15.1474f, 1);
				}
			}
			if (func_54(&iVar4))
			{
				if (func_42(&(Local_1358[iVar4 /*20*/]), Local_358.f_32[0], -1433.548f, 2650.166f, 16.6436f, 228.0205f, 1, 2))
				{
					func_39(&(Local_1358[iVar4 /*20*/]), 1, 40f);
				}
			}
			if (func_54(&iVar4))
			{
				if (func_42(&(Local_1358[iVar4 /*20*/]), Local_358.f_32[0], -1478.003f, 2688.829f, 16.6436f, 227.7704f, 1, 2))
				{
					func_39(&(Local_1358[iVar4 /*20*/]), 1, 40f);
				}
			}
			iVar5 = 1;
			break;
	}
	func_193();
	if (iVar5 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_277.f_28)
	{
		if (GlobalFunc_115(Local_277.f_28[iVar0]))
		{
			if (GlobalFunc_4673(&Local_1227, &iVar4))
			{
				func_210(&(Local_1227[iVar4 /*13*/]), &(Local_277.f_28[iVar0]), 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_208(int iParam0, struct<3> Param1, bool bParam4)//Position - 0xB3A1
{
	var uVar0;
	
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0, iLocal_2211);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	if (bParam4)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 2f, -1, 0.25f, 1, 1193033728);
	}
	else
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Param1, 2f, 0, 0, 786603, -1082130432);
	}
	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 600f, -1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	PED::FORCE_PED_MOTION_STATE(iParam0, -530524, 0, 0, 0);
}


int func_210(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB438
{
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam1))
	{
		return 0;
	}
	*uParam0 = *iParam1;
	GlobalFunc_146(&(uParam0->f_1));
	uParam0->f_1 = GlobalFunc_4955(*uParam0, 1, 0, 5);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_1026);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 1);
	func_9(uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	if (iParam4 == 1)
	{
		if (iParam2 == 0)
		{
			TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else
		{
			uParam0->f_3 = 1;
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, true);
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, 0, 0);
		}
	}
	else if (iParam2 == 1)
	{
		uParam0->f_3 = 1;
	}
	Local_338.f_12++;
	iLocal_1479++;
	uParam0->f_3 = iParam2;
	return 1;
}


int func_212()//Position - 0xB524
{
	struct<3> Var0;
	
	switch (iLocal_1111)
	{
		case 0:
			GlobalFunc_6559(&Local_277);
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				GlobalFunc_10583(&(Local_277.f_9), 0);
				GlobalFunc_6493(&Local_277, &sLocal_2184);
				if (Local_358 == 77)
				{
					if (GlobalFunc_115(Local_277.f_28[0]))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 9, 1, 0, 0);
					}
				}
			}
			iLocal_1111 = 1;
			break;
		
		case 1:
			GlobalFunc_6493(&Local_277, &sLocal_2184);
			if (Local_358 == 77)
			{
				if (GlobalFunc_115(Local_277.f_28[0]))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 9, 1, 0, 0);
				}
			}
			bLocal_2205 = false;
			if (GlobalFunc_8024(1, 1093140480, 0))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				PED::REQUEST_ACTION_MODE_ASSET("TREVOR_ACTION");
				func_229();
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				GlobalFunc_8954();
				CUTSCENE::START_CUTSCENE(0);
				GlobalFunc_4689(&uLocal_2158);
				func_250(Var0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1);
				GlobalFunc_79(500, 0);
				iLocal_2396 = 0;
				func_467(0);
				iLocal_1111 = 2;
			}
			break;
		
		case 2:
			if (func_219())
			{
				if (!iLocal_2206)
				{
					iLocal_2206 = 1;
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					iLocal_1111 = 3;
					return 0;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2396 == 0)
			{
				GlobalFunc_5732(&uLocal_1029, 0);
				PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), Local_426.f_1);
				PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), Local_426.f_2);
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
				func_366();
				if (Local_358 == 80)
				{
					if (GlobalFunc_115(Local_277.f_41[2]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_277.f_41[2], 1179.778f, -401.7374f, 66.8697f, 1, 0, 0, 1);
					}
				}
				if (Local_358 == 76)
				{
					if (GlobalFunc_115(Local_277.f_41[1]))
					{
						ENTITY::DETACH_ENTITY(Local_277.f_41[1], 1, 1);
						ENTITY::SET_ENTITY_COORDS(Local_277.f_41[1], 909.8177f, 3643.293f, 31.7073f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_277.f_41[1], 0f, 0f, 140.6f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[1], 1);
						ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[1], 0);
					}
					if (GlobalFunc_115(Local_277.f_41[2]))
					{
						ENTITY::DETACH_ENTITY(Local_277.f_41[2], 1, 1);
						ENTITY::SET_ENTITY_COORDS(Local_277.f_41[2], 907.6703f, 3643.417f, 31.7073f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_277.f_41[2], 0f, 0f, -62.47f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[2], 1);
						ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[2], 0);
					}
				}
				iLocal_2396 = 1;
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > iLocal_2387)
			{
				func_196();
			}
			if (Local_358 == 78)
			{
				if (!iLocal_1115)
				{
					if (GlobalFunc_115(Local_277.f_28[1]))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 20100)
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(Local_277.f_28[1], 1, 0.5f, 0.65f, 307.546f, 1f, 3, 0f, "BulletLarge");
							iLocal_1115 = 1;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_249(1, 0, 1, 1);
				func_207(0);
				func_204();
				if (Local_358 == 80)
				{
					GlobalFunc_5114(&uLocal_102);
				}
				if (Local_358 == 76)
				{
					if (GlobalFunc_115(Local_277.f_41[1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[1], 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[1], 1);
					}
					if (GlobalFunc_115(Local_277.f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[2], 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[2], 1);
					}
				}
				if (bLocal_2395)
				{
					func_216();
				}
				return 1;
			}
			else
			{
				func_215();
				if (!bLocal_2205)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 0);
			func_213(1, 1, 1);
			func_249(1, 1, 1, 1);
			GlobalFunc_2346(&(Local_277.f_41[0]));
			if (Local_358 == 76)
			{
				if (GlobalFunc_115(Local_277.f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[1], 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[1], 1);
				}
				if (GlobalFunc_115(Local_277.f_41[2]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[2], 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_277.f_41[2], 1);
				}
			}
			func_207(1);
			func_204();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			SYSTEM::WAIT(250);
			return 1;
		
		case 4:
			func_249(1, 0, 1, 1);
			return 1;
	}
	return 0;
}

void func_213(bool bParam0, int iParam1, int iParam2)//Position - 0xB9A6
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_249(iParam1, iParam2, 1, 1);
		}
	}
}


void func_215()//Position - 0xBA37
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2182, 0))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, "TREVOR_ACTION");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_358.f_11, 4f, -4f, -1, 0, 0, 0, 0, 0);
			GlobalFunc_4688();
			bLocal_2205 = true;
		}
	}
	switch (Local_358)
	{
		case 76:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "TriggerHappy_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[0], 0))
				{
					func_208(Local_277.f_28[0], 930.2522f, 3681.339f, 30.6506f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[0], -530524, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[0], 3f);
				}
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Nervous_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[1], 0))
				{
					func_208(Local_277.f_28[1], 920.2722f, 3546.102f, 32.9231f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[1], -530524, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[1], 2f);
				}
			}
			break;
		
		case 80:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Rampage_Hipster";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[0], 0))
				{
					func_208(Local_277.f_28[0], 1212.578f, -421.3977f, 66.5951f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[0], -1115154469, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[0], 3f);
				}
			}
			break;
		
		case 77:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Armed_Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[0], 0))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 8, 0, 0, 0);
					func_208(Local_277.f_28[0], 335.7316f, -1887.279f, 24.8253f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[0], -1115154469, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[0], 3f);
				}
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[1], 0))
				{
					func_208(Local_277.f_28[1], 408.9685f, -1923.852f, 24.0339f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[1], -1115154469, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[1], 3f);
				}
			}
			break;
		
		case 78:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[0], 0))
				{
					func_208(Local_277.f_28[0], -110.74f, -1601.2f, 31.7f, 0);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[0], -530524, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[0], 3f);
				}
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Armed_Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[1], 0))
				{
					func_208(Local_277.f_28[1], -142.6f, -1713.4f, 30.1f, 1);
				}
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Army_Guy_Left";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[0], 0))
				{
					func_208(Local_277.f_28[0], -1209.945f, 2598.689f, 14.3906f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[0], -530524, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[0], 2f);
				}
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Army_Guy_Right";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[1], 0))
				{
					func_208(Local_277.f_28[1], -1222.569f, 2587.651f, 15.1474f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_277.f_28[1], -1115154469, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_277.f_28[1], 3f);
				}
			}
			if (GlobalFunc_115(Local_277.f_35[0]))
			{
				if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(sLocal_2184[2], 0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(Local_277.f_35[0], 1, false);
				}
			}
			break;
	}
	if (!GlobalFunc_115(Local_277.f_41[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_2183, 0)))
		{
			Local_277.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_2183, 0));
			if (GlobalFunc_115(Local_277.f_41[0]))
			{
			}
		}
	}
	else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_2183, 0))
	{
		if (Local_277 == 55)
		{
			GlobalFunc_2346(&(Local_277.f_41[0]));
			func_193();
		}
		else
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_277.f_41[0], PLAYER::PLAYER_PED_ID());
		}
	}
	if (Local_277 == 54)
	{
		if (CUTSCENE::GET_CUTSCENE_TIME() >= 23000)
		{
			if (!iLocal_2144)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[0], -1, 1, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_358.f_24)
				{
					if (Local_358.f_24[iVar0] != 0)
					{
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[0], Local_358.f_24[iVar0]);
					}
					iVar0++;
				}
				iLocal_2144 = 1;
			}
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		}
	}
}

void func_216()//Position - 0xBF77
{
	var uVar0;
	
	switch (Local_358)
	{
		case 76:
			uVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 907.5499f, 3641.509f, 33.1808f, -11.3754f, 0.0004f, -105.7755f, 50f, 1, 2);
			break;
		
		default:
			uVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_2389, Local_2392, 50f, 1, 2);
			break;
	}
	if (CAM::DOES_CAM_EXIST(uVar0))
	{
		CAM::SET_CAM_ACTIVE(uVar0, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		SYSTEM::WAIT(0);
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
}



int func_219()//Position - 0xC035
{
	int iVar0;
	int iVar1;
	
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 0;
	}
	iVar1 = Local_358.f_27;
	if (Local_358.f_37 < iVar1)
	{
		iVar1 = Local_358.f_37;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_358.f_27[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	iVar1 = Local_358.f_32;
	if (Local_358.f_38 < iVar1)
	{
		iVar1 = Local_358.f_38;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_358.f_32[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	if (Local_358.f_52)
	{
		if (Local_358.f_36 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_358.f_36))
			{
				return 0;
			}
		}
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_01", 0))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_02", 0))
	{
		return 0;
	}
	if (!AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
	{
		return 0;
	}
	return 1;
}










void func_229()//Position - 0xDBE4
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_2182 = "Trevor";
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_2182, 0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3);
	}
	switch (Local_358)
	{
		case 76:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "TriggerHappy_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[0], sLocal_2184[0], 0, 0, 0);
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Nervous_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[1], sLocal_2184[1], 0, 0, 0);
			}
			sLocal_2183 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle"));
			if (GlobalFunc_115(Local_277.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[3], 0);
			}
			if (GlobalFunc_115(Local_277.f_41[4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[4], 0);
			}
			break;
		
		case 80:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Rampage_Hipster";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[0], sLocal_2184[0], 0, ENTITY::GET_ENTITY_MODEL(Local_277.f_28[0]), 0);
			}
			if (GlobalFunc_115(Local_277.f_41[1]))
			{
				GlobalFunc_2346(&(Local_277.f_41[1]));
			}
			if (GlobalFunc_115(Local_277.f_41[2]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[2], 0);
			}
			if (GlobalFunc_115(Local_277.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_277.f_41[3], 0);
			}
			sLocal_2183 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sawnoffshotgun"));
			break;
		
		case 77:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Armed_Mexican_Goon";
				PED::SET_PED_COMPONENT_VARIATION(Local_277.f_28[0], 9, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[0], sLocal_2184[0], 0, ENTITY::GET_ENTITY_MODEL(Local_277.f_28[0]), 0);
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Mexican_Goon";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[1], sLocal_2184[1], 0, ENTITY::GET_ENTITY_MODEL(Local_277.f_28[1]), 0);
			}
			sLocal_2183 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_microsmg"));
			break;
		
		case 78:
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[0], sLocal_2184[0], 0, ENTITY::GET_ENTITY_MODEL(Local_277.f_28[0]), 0);
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Armed_Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[1], sLocal_2184[1], 0, ENTITY::GET_ENTITY_MODEL(Local_277.f_28[1]), 11);
			}
			sLocal_2183 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle"));
			if (GlobalFunc_115(Local_277.f_41[0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_277.f_41[0]));
			}
			if (!GlobalFunc_115(Local_277.f_41[0]))
			{
				Local_277.f_41[0] = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), 100, ENTITY::GET_ENTITY_COORDS(Local_277.f_28[0], 1), 1, 1065353216, 0);
				if (GlobalFunc_115(Local_277.f_41[0]))
				{
				}
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (GlobalFunc_115(Local_277.f_28[0]))
			{
				sLocal_2184[0] = "Army_Guy_Right";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[0], sLocal_2184[0], 0, 0, 0);
			}
			if (GlobalFunc_115(Local_277.f_28[1]))
			{
				sLocal_2184[1] = "Army_Guy_Left";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_28[1], sLocal_2184[1], 0, 0, 0);
			}
			if (GlobalFunc_115(Local_277.f_35[0]))
			{
				sLocal_2184[2] = "Army_Truck";
				VEHICLE::SET_VEHICLE_EXTRA(Local_277.f_35[0], 1, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_35[0], sLocal_2184[2], 0, 0, 0);
			}
			sLocal_2183 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_grenadelauncher"));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2183))
	{
		if (GlobalFunc_115(Local_277.f_41[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_277.f_41[0], sLocal_2183, 0, 0, 0);
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_2183, 2, iVar0, 0);
		}
	}
}




















void func_249(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xE83E
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_250(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0xE8E5
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8329())
			{
				case 0:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11284(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11284(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11284(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11284(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}




















































































































void func_366()//Position - 0x2AA2E
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	iVar0 = GlobalFunc_2251();
	switch (Local_358)
	{
		case 76:
			GlobalFunc_2361(&Local_2134, 896.1204f, 3640.058f, 36.08886f, 922.2221f, 3639.568f, 31.15943f, 13.5f);
			if (GlobalFunc_7091(GlobalFunc_625(), 1))
			{
				Var1 = { 899.9673f, 3653.049f, 31.7576f };
				fVar4 = 268.2063f;
			}
			else
			{
				Var1 = { 891.0971f, 3653.328f, 31.8184f };
				fVar4 = 268.1944f;
			}
			break;
		
		case 80:
			GlobalFunc_2361(&Local_2134, 1179.185f, -421.631f, 74.33884f, 1185.705f, -388.5753f, 66.90026f, 21.5f);
			if (GlobalFunc_7091(GlobalFunc_625(), 1))
			{
				Var1 = { 1231.506f, -442.6294f, 66.5811f };
				fVar4 = 191.4606f;
			}
			else
			{
				Var1 = { 1226.681f, -436.0827f, 66.5804f };
				fVar4 = 76.5787f;
			}
			break;
		
		case 77:
			GlobalFunc_2361(&Local_2134, 449.7306f, -1858.224f, 28.84542f, 472.4552f, -1843.896f, 25.80111f, 37.25f);
			if (GlobalFunc_7091(GlobalFunc_625(), 1))
			{
				Var1 = { 506.3633f, -1842.37f, 26.644f };
				fVar4 = 308.821f;
			}
			else
			{
				Var1 = { 505.1393f, -1845.291f, 26.3862f };
				fVar4 = 308.6425f;
			}
			break;
		
		case 78:
			GlobalFunc_2361(&Local_2134, -143.9715f, -1646.401f, 39.63461f, -172.5223f, -1680.795f, 31.56156f, 18.75f);
			if (GlobalFunc_7091(GlobalFunc_625(), 1))
			{
				Var1 = { -163.3928f, -1698.353f, 30.6384f };
				fVar4 = 63.0698f;
			}
			else
			{
				Var1 = { -225.3203f, -1699.535f, 33.0015f };
				fVar4 = 107.6143f;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			GlobalFunc_2361(&Local_2134, -1303.807f, 2499.506f, 29.04824f, -1228.827f, 2569.846f, 14.73124f, 29.5f);
			Var1 = { -1323.634f, 2474.418f, 23.6185f };
			fVar4 = 318.5112f;
			break;
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_10627(&iVar0, Var1, fVar4, 0, 0, 1, 1, 0, joaat("asterope"), 0, 145);
	}
	GlobalFunc_10584(Local_2134[0 /*3*/], Local_2134[1 /*3*/], Local_2134.f_7, Var1, fVar4, GlobalFunc_625(), 1, 1, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
	}
	GlobalFunc_9754(iVar0, 0f, 0f, 0f, 0f, 24, 0);
}





































































































void func_467(bool bParam0)//Position - 0x33212
{
	int iVar0;
	bool bVar1;
	
	func_474();
	GlobalFunc_2833("TRVRAMP", 0, bParam0, 0);
	GlobalFunc_4696("MP_BIG_MESSAGE_FREEMODE", &iLocal_2145, bParam0);
	GlobalFunc_4695("SCRIPT\RAMPAGE_01", bParam0);
	GlobalFunc_4695("SCRIPT\RAMPAGE_02", bParam0);
	bVar1 = false;
	if (bParam0)
	{
		while (!bVar1)
		{
			if (AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
			{
				bVar1 = true;
			}
			else if (iLocal_2132 > 50)
			{
				bVar1 = true;
			}
			else
			{
				iLocal_2132++;
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0);
	}
	GlobalFunc_4694("missrampageintrooutro", bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_17)
	{
		if (Local_358.f_17[iVar0] != 0 && Local_358.f_17[iVar0] != joaat("weapon_unarmed"))
		{
			GlobalFunc_4693(Local_358.f_17[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_27)
	{
		if (Local_358.f_27[iVar0] != 0)
		{
			GlobalFunc_4692(Local_358.f_27[iVar0], bParam0);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_358.f_27[iVar0], 1);
		}
		iVar0++;
	}
	if (Local_358.f_36 != 0)
	{
		GlobalFunc_4692(Local_358.f_36, bParam0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_32)
	{
		if (Local_358.f_32[iVar0] != 0)
		{
			GlobalFunc_4692(Local_358.f_32[iVar0], bParam0);
		}
		iVar0++;
	}
}







void func_474()//Position - 0x335C1
{
	switch (Local_358)
	{
		case 76:
			Local_358.f_3 = "RAMP1AU";
			Local_358.f_4 = "RAMP1_FIGHT";
			break;
		
		case 80:
			Local_358.f_3 = "RAMP2AU";
			Local_358.f_4 = "RAMP2_FIGHT";
			break;
		
		case 77:
			Local_358.f_3 = "RAMP3AU";
			Local_358.f_4 = "RAMP3_FIGHT";
			break;
		
		case 78:
			Local_358.f_3 = "RAMP4AU";
			Local_358.f_4 = "RAMP4_FIGHT";
			break;
		
		case joaat("mpsv_lp0_31"):
			Local_358.f_3 = "RAMP5AU";
			Local_358.f_4 = "RAMP5_FIGHT";
			break;
		
		default:
			return;
	}
	GlobalFunc_2833(Local_358.f_3, 6, 0, 0);
}





void func_479()//Position - 0x33718
{
	GlobalFunc_4687();
	switch (iLocal_2149)
	{
		case 0:
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4681();
			if (Local_338 < Local_358.f_53)
			{
				GlobalFunc_10822("TR_FAIL", 1);
			}
			else
			{
				GlobalFunc_10585(1);
			}
			iLocal_2149 = 2;
			break;
		
		case 2:
			if (GlobalFunc_145())
			{
				GRAPHICS::REMOVE_DECALS_IN_RANGE(func_480(), 500f);
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
				func_516(0);
			}
			break;
	}
}

Vector3 func_480()//Position - 0x33796
{
	int iVar0;
	
	iVar0 = Local_358;
	return Global_Mission_Blips[iVar0 /*23*/][0 /*3*/];
}




bool func_484()//Position - 0x3382F
{
	return iLocal_2149 != 0;
}


void func_486()//Position - 0x3385E
{
	int iVar0;
	
	switch (Local_358)
	{
		case 77:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(500.957f, -1805.29f, 27.5551f, 4f, joaat("prop_fnclink_02gate4"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, 1, 0, 0, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(511.2028f, -1798.371f, 27.4122f, 4f, joaat("prop_fncres_06gater"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, 1, 0, 0, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(469.1499f, -1805.625f, 28.4358f, 4f, joaat("prop_fnclink_06gate2"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, 1, 0, 0, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
		
		case 78:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-155.46f, -1665.8f, 32.17f, 4f, joaat("prop_fncsec_03c"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, 1, 0, 0, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-133.76f, -1617.43f, 32f, 4f, joaat("prop_fncsec_03c"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, 1, 0, 0, 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
	}
}

void func_487(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x339C5
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_23 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_24 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_23 = 0f;
				}
				else
				{
					fLocal_23 = (fLocal_23 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_23 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8329();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_28 = 0.14f;
				}
				else
				{
					fLocal_28 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_28)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_24.x, (Local_24.f_1 + fLocal_27));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_23 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_23 = 0f;
			}
		}
	}
}

















void func_504(var uParam0)//Position - 0x3441A
{
	int iVar0;
	
	iLocal_2150[0] = 6;
	iLocal_2150[1] = 107;
	iLocal_2150[2] = 108;
	iLocal_2150[3] = 109;
	Global_24446 = 1;
	Global_85622 = 1;
	Local_277 = { *uParam0 };
	GlobalFunc_601(23, 1);
	uLocal_425 = Global_24690;
	Global_24690 = 0;
	PED::ADD_RELATIONSHIP_GROUP("RamageGrp", &iLocal_1026);
	PED::ADD_RELATIONSHIP_GROUP("PassiveGrp", &iLocal_1027);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1026);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1026, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_1027);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1027, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1027, iLocal_1026);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1026, iLocal_1027);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1166638144, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 296331235, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -1865950624, 1862763509);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_7632(1);
	GlobalFunc_2362(0);
	OBJECT::_0xF92099527DB8E2A7(2047, 1);
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	GlobalFunc_9158(1);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), fLocal_1119);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1227)
	{
		Local_1227[iVar0 /*13*/].f_9 = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1358)
	{
		Local_1358[iVar0 /*20*/].f_13 = iVar0;
		iVar0++;
	}
}












void func_516(bool bParam0)//Position - 0x34B10
{
	int iVar0;
	int iVar1;
	
	AUDIO::STOP_STREAM();
	if (bParam0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_FAIL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_2133))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_2133))
		{
			AUDIO::STOP_AUDIO_SCENE(iLocal_2133);
		}
	}
	GlobalFunc_601(23, 0);
	Global_24690 = uLocal_425;
	GlobalFunc_4681();
	AUDIO::STOP_SOUND(iLocal_1112);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	if (Local_358 == 80)
	{
		GlobalFunc_5114(&uLocal_102);
	}
	func_616();
	func_615();
	GlobalFunc_9158(0);
	GlobalFunc_146(&iLocal_2129);
	GlobalFunc_2295(&iLocal_1023, 0);
	iLocal_1023 = 0;
	if (!GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
		{
			iLocal_1023 = GlobalFunc_6556(iVar1, 0);
			GlobalFunc_2295(&iLocal_1023, 0);
			iLocal_1023 = 0;
		}
	}
	if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_5575(&Global_91351);
	if (!bParam0)
	{
		GlobalFunc_8270(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	if (Local_358.f_50 == 1)
	{
		iVar0 = 0;
		while (iVar0 < Local_358.f_17)
		{
			if (Local_358.f_17[iVar0] != 0 && Local_358.f_17[iVar0] != joaat("weapon_unarmed"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_358.f_17[iVar0], WEAPON::GET_WEAPON_CLIP_SIZE(Local_358.f_17[iVar0]) * 3, 1, 1);
			}
			iVar0++;
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	GlobalFunc_9158(0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	if (iLocal_2145 != 0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_2145, "RESET_MOVIE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2145);
		iLocal_2145 = 0;
	}
	if (iLocal_2146 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2146);
		iLocal_2146 = 0;
	}
	if (iLocal_2147 != 0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_2147, "RESET_MOVIE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2147);
		iLocal_2147 = 0;
	}
	func_604(&Local_1358);
	func_184(&Local_1227);
	GlobalFunc_6554(&Local_1459, 1);
	func_603();
	func_602();
	GlobalFunc_2363(uLocal_1029);
	if (iLocal_1028 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1028, 0);
	}
	TASK::RESET_SCENARIO_GROUPS_ENABLED();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1026);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1027);
	OBJECT::_0xA2C1F5E92AFE49ED();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	GlobalFunc_5733(1, 1, 0, 0);
	GlobalFunc_2362(1);
	GlobalFunc_7632(0);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), 1);
	if (Local_358.f_50)
	{
		switch (Local_358)
		{
			case 76:
				GlobalFunc_11331(194, 1);
				break;
			
			case 77:
				GlobalFunc_11331(196, 1);
				break;
			
			case 78:
				GlobalFunc_11331(197, 1);
				break;
			
			case joaat("mpsv_lp0_31"):
				GlobalFunc_11331(198, 1);
				break;
			
			case 80:
				GlobalFunc_585(108, 1);
				GlobalFunc_8960(21, 1);
				GlobalFunc_11331(195, 1);
				break;
			
			default:
				break;
		}
		if (GlobalFunc_485(108))
		{
			GlobalFunc_8960(21, 1);
			BRAIN::_0x6D6840CEE8845831("launcher_rampage");
		}
	}
	if (GlobalFunc_9159())
	{
	}
	Global_24446 = 0;
	Global_24453 = 1;
	GlobalFunc_9551(&Local_277, 0, 0, 0);
	func_518();
	GlobalFunc_184(74, 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_518()//Position - 0x34E65
{
	int iVar0;
	
	iVar0 = 0;
	if (Local_358.f_36 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_358.f_36);
	}
	iVar0 = 0;
	while (iVar0 < Local_358.f_27)
	{
		if (Local_358.f_27[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_358.f_27[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_32)
	{
		if (Local_358.f_32[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_358.f_32[iVar0]);
		}
		iVar0++;
	}
}




















































































void func_602()//Position - 0x3BF84
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1030[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1030[iVar0 /*8*/]));
			Local_1030[iVar0 /*8*/].f_7 = 0;
		}
		iVar0++;
	}
}

void func_603()//Position - 0x3BFC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1469)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1469[iVar0]))
		{
			if (GlobalFunc_115(iLocal_1469[iVar0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1469[iVar0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1469[iVar0], 0);
			}
			GlobalFunc_131(&(iLocal_1469[iVar0]));
			iLocal_1469[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_604(var uParam0)//Position - 0x3C026
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43(uParam0[iVar0 /*20*/]);
		iVar0++;
	}
}











void func_615()//Position - 0x3DB9B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_17)
	{
		if (Local_358.f_17[iVar0] != 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Local_358.f_17[iVar0], 0))
			{
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, Local_358.f_17[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_616()//Position - 0x3DBF0
{
	int iVar0;
	
	GlobalFunc_146(&iLocal_2129);
	iLocal_2129 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1227)
	{
		GlobalFunc_146(&(Local_1227[iVar0 /*13*/].f_1));
		Local_1227[iVar0 /*13*/].f_1 = 0;
		iVar0++;
	}
}


















void func_634(int iParam0)//Position - 0x3E242
{
	GlobalFunc_8320();
	func_650(iParam0);
	func_648(iParam0);
	func_642(iParam0);
	func_640(iParam0);
	func_637(iParam0);
	if (Local_358.f_52)
	{
		func_635(iParam0);
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(Local_358.f_47);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Local_358.f_48);
}

void func_635(int iParam0)//Position - 0x3E28C
{
	switch (iParam0)
	{
		case 76:
			GlobalFunc_4697(&(Local_1030[0 /*8*/]), 917.5861f, 3593.576f, 32.1551f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[1 /*8*/]), 899.7161f, 3607.471f, 31.8142f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[2 /*8*/]), 889.1971f, 3618.664f, 31.8218f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[3 /*8*/]), 901.7499f, 3586.183f, 32.4256f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[4 /*8*/]), 915.1172f, 3569.61f, 32.7876f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[5 /*8*/]), 979.5751f, 3584.954f, 32.493f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[6 /*8*/]), 999.9662f, 3583.392f, 32.6675f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[7 /*8*/]), 956.1263f, 3620.476f, 31.6291f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[8 /*8*/]), 864.4873f, 3671.131f, 31.8982f, 0f, 0f, 0f);
			GlobalFunc_4697(&(Local_1030[9 /*8*/]), 921.76f, 3644.44f, 31.5245f, 0f, 0f, 0f);
			break;
	}
}


void func_637(int iParam0)//Position - 0x3E3DA
{
	GlobalFunc_4699(&Local_413);
	switch (iParam0)
	{
		case 76:
			GlobalFunc_4698(&(Local_413[0 /*3*/]), 1, 45);
			GlobalFunc_4698(&(Local_413[1 /*3*/]), 2, 3);
			GlobalFunc_4698(&(Local_413[2 /*3*/]), 4, 2);
			break;
		
		case 80:
			GlobalFunc_4698(&(Local_413[0 /*3*/]), 1, 30);
			GlobalFunc_4698(&(Local_413[1 /*3*/]), 2, 10);
			GlobalFunc_4698(&(Local_413[2 /*3*/]), 4, 2);
			break;
		
		case 77:
			GlobalFunc_4698(&(Local_413[0 /*3*/]), 1, 45);
			GlobalFunc_4698(&(Local_413[1 /*3*/]), 2, 6);
			GlobalFunc_4698(&(Local_413[2 /*3*/]), 4, 2);
			break;
		
		case 78:
			GlobalFunc_4698(&(Local_413[0 /*3*/]), 1, 50);
			GlobalFunc_4698(&(Local_413[1 /*3*/]), 2, 6);
			GlobalFunc_4698(&(Local_413[2 /*3*/]), 4, 2);
			break;
		
		case joaat("mpsv_lp0_31"):
			GlobalFunc_4698(&(Local_413[0 /*3*/]), 1, 45);
			GlobalFunc_4698(&(Local_413[1 /*3*/]), 2, 6);
			GlobalFunc_4698(&(Local_413[2 /*3*/]), 9, 2);
			break;
	}
}



void func_640(int iParam0)//Position - 0x3E5CC
{
	GlobalFunc_4700(&Local_426);
	switch (iParam0)
	{
		case 76:
			Local_426.f_4 = 0.12f;
			Local_426.f_5 = 0.12f;
			Local_426.f_6 = 0.1f;
			Local_426.f_7 = 0.5f;
			Local_426.f_16 = 30;
			Local_426.f_17 = 55;
			Local_426.f_2 = 0.25f;
			Local_426.f_20 = 1f;
			Local_426.f_8 = 0.5f;
			break;
		
		case 80:
			Local_426.f_4 = 0.032f;
			Local_426.f_5 = 0.015f;
			Local_426.f_6 = 0.4f;
			Local_426.f_7 = 0.6f;
			Local_426.f_16 = 20;
			Local_426.f_17 = 40;
			Local_426.f_2 = 0.25f;
			Local_426.f_20 = 1f;
			Local_426.f_8 = 0.5f;
			break;
		
		case joaat("mpsv_lp0_31"):
			Local_426.f_4 = 0.12f;
			Local_426.f_5 = 0.09f;
			Local_426.f_6 = 0.2f;
			Local_426.f_7 = 0.6f;
			Local_426.f_16 = 20;
			Local_426.f_17 = 50;
			Local_426.f_2 = 0.11f;
			Local_426.f_20 = 1f;
			Local_426.f_8 = 0.5f;
			break;
		
		default:
			Local_426.f_4 = 0.032f;
			Local_426.f_5 = 0.015f;
			Local_426.f_6 = 0.4f;
			Local_426.f_7 = 0.6f;
			Local_426.f_16 = 20;
			Local_426.f_17 = 40;
			Local_426.f_2 = 0.2f;
			Local_426.f_20 = 1f;
			Local_426.f_8 = 0.5f;
			break;
	}
}


void func_642(int iParam0)//Position - 0x3E7E2
{
	Local_2104 = 0;
	Local_2104.f_2 = 0;
	Local_2104.f_3 = 250;
	Local_2104.f_4 = 1000;
	Local_2104.f_6 = 30f;
	Local_2104.f_7 = 80f;
	Local_2104.f_8 = 0f;
	switch (iParam0)
	{
		case 76:
			iLocal_1483 = 8000;
			iLocal_1484 = 8000;
			Local_2059 = 1;
			Local_2059.f_6 = 1;
			Local_2059.f_5 = 1;
			Local_2059.f_1 = 20000;
			Local_2059.f_2 = 40000;
			GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), 638.8113f, 3575.616f, 31.8078f, 280.4006f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), 677.1325f, 3520.357f, 33.1989f, 276.7284f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[2 /*6*/]), 1256.587f, 3540.476f, 34.2046f, 90.8648f, 0);
			Local_2059.f_32 = 3;
			Local_2113 = 1;
			Local_2113.f_5 = 7;
			Local_2113.f_2 = 1000;
			Local_2113.f_3 = 3000;
			GlobalFunc_8275(&(Local_1491[0 /*44*/]), 898.8798f, 3595.323f, 31.91831f, 899.1679f, 3626.274f, 32.514f, 30.75f, 1, 1);
			func_643(&(Local_1491[0 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[1 /*44*/]), 887.1127f, 3583.712f, 32.40303f, 922.3997f, 3584.079f, 34.89412f, 25.75f, 1, 2);
			func_643(&(Local_1491[1 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[2 /*44*/]), 921.6732f, 3558.022f, 32.78538f, 878.2988f, 3557.902f, 34.44129f, 30.75f, 1, 3);
			func_643(&(Local_1491[2 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[3 /*44*/]), 1020.118f, 3577.571f, 31.75838f, 968.5545f, 3573.576f, 32.80569f, 35.25f, 1, 4);
			func_643(&(Local_1491[3 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[4 /*44*/]), 977.7149f, 3614.299f, 31.53133f, 936.6112f, 3614.114f, 32.60464f, 29.5f, 1, 5);
			func_643(&(Local_1491[4 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[5 /*44*/]), 928.1477f, 3650.683f, 31.36358f, 887.4484f, 3651.774f, 32.84307f, 32f, 1, 6);
			func_643(&(Local_1491[5 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[6 /*44*/]), 851.5456f, 3676.695f, 31.11558f, 871.7524f, 3671.204f, 32.7851f, 13.5f, 1, 0);
			func_643(&(Local_1491[6 /*44*/]), 0f, 0, -1);
			break;
		
		case 80:
			iLocal_1483 = 2000;
			iLocal_1484 = 6000;
			Local_2059 = 1;
			Local_2059.f_6 = 1;
			Local_2059.f_4 = 2;
			Local_2059.f_5 = 4;
			Local_2059.f_1 = 8000;
			Local_2059.f_2 = 12000;
			GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), 1261.522f, -392.1491f, 68.0716f, 45.8832f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), 1160.727f, -363.8029f, 66.4686f, 249.5359f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[2 /*6*/]), 1112.807f, -516.7747f, 62.7259f, 259.5641f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[3 /*6*/]), 1222.897f, -524.8954f, 65.7801f, 50.4901f, 0);
			Local_2059.f_32 = 4;
			Local_1844 = 1;
			Local_1844.f_5[0 /*3*/] = { 1208.014f, -386.7501f, 67.5128f };
			Local_1844.f_5[1 /*3*/] = { 1179.56f, -503.5638f, 64.3207f };
			Local_1844.f_13 = -1f;
			GlobalFunc_4679(&(Local_1844.f_15[0 /*6*/]), 1171.707f, -395.8017f, 70.5896f, 179.2177f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[1 /*6*/]), 1174.957f, -405.9748f, 66.7132f, 237.7915f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[2 /*6*/]), 1177.984f, -415.0459f, 66.4166f, 263.1743f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[3 /*6*/]), 1172.006f, -422.1147f, 66.0902f, 248.287f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[4 /*6*/]), 1173.962f, -430.9555f, 66.0785f, 215.49f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[5 /*6*/]), 1217.724f, -418.0172f, 66.7731f, 104.3705f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[6 /*6*/]), 1228.418f, -390.4437f, 68.0662f, 67.1844f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[7 /*6*/]), 1219.318f, -424.2363f, 66.6526f, 85.3891f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[8 /*6*/]), 1215.151f, -438.7675f, 66.1798f, 64.3428f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[9 /*6*/]), 1168.265f, -457.0743f, 65.6949f, 274.1016f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[10 /*6*/]), 1158.569f, -454.4118f, 65.9844f, 248.8965f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[11 /*6*/]), 1140.507f, -461.1952f, 65.9288f, 269.3017f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[12 /*6*/]), 1133.441f, -480.2752f, 65.0497f, 246.3703f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[13 /*6*/]), 1131.104f, -481.0168f, 64.9569f, 242.0116f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[14 /*6*/]), 1123.429f, -502.5286f, 63.0634f, 290.4138f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[15 /*6*/]), 1130.851f, -501.8386f, 63.2847f, 278.3421f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[16 /*6*/]), 1202.552f, -505.418f, 64.1416f, 55.5955f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[17 /*6*/]), 1203.696f, -507.7457f, 64.3037f, 45.4403f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[18 /*6*/]), 1207.279f, -470.6629f, 65.1517f, 81.1791f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[19 /*6*/]), 1205.96f, -469.252f, 65.2501f, 124.0248f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[20 /*6*/]), 1207.153f, -463.4705f, 65.444f, 110.4368f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[21 /*6*/]), 1212.261f, -445.3408f, 65.9532f, 94.8838f, 0);
			Local_1844.f_214 = 22;
			break;
		
		case 77:
			iLocal_1483 = 5000;
			iLocal_1484 = 10000;
			Local_2113 = 1;
			Local_2113.f_5 = 8;
			Local_2113.f_2 = 1000;
			Local_2113.f_3 = 3000;
			GlobalFunc_8275(&(Local_1491[0 /*44*/]), 491.036f, -1816.695f, 26.36605f, 508.1538f, -1831.316f, 29.41944f, 25f, 1, 1);
			func_643(&(Local_1491[0 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[1 /*44*/]), 433.5417f, -1774.958f, 29.38735f, 471.0396f, -1807.621f, 26.34037f, 20f, 1, 2);
			func_643(&(Local_1491[1 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[2 /*44*/]), 507.7131f, -1790.534f, 26.50055f, 533.0693f, -1790.829f, 30.16788f, 39f, 1, 3);
			func_643(&(Local_1491[2 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[3 /*44*/]), 484.4401f, -1755.382f, 29.06494f, 451.2432f, -1742.953f, 27.25146f, 22.25f, 1, 4);
			func_643(&(Local_1491[3 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[4 /*44*/]), 458.5706f, -1721.835f, 29.50424f, 491.0818f, -1734.427f, 27.30688f, 25f, 1, 5);
			func_643(&(Local_1491[4 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[5 /*44*/]), 519.8217f, -1763.702f, 26.69523f, 538.8134f, -1722.356f, 31.26585f, 32f, 1, 6);
			func_643(&(Local_1491[5 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[6 /*44*/]), 480.9492f, -1717.53f, 29.86429f, 503.9449f, -1684.641f, 27.39495f, 25f, 1, 7);
			func_643(&(Local_1491[6 /*44*/]), 0f, 0, -1);
			GlobalFunc_8275(&(Local_1491[7 /*44*/]), 436.8931f, -1841.787f, 25.84297f, 413.3463f, -1817.801f, 29.32302f, 40f, 1, 0);
			func_643(&(Local_1491[7 /*44*/]), 0f, 0, -1);
			Local_1844 = 0;
			GlobalFunc_4679(&(Local_1844.f_15[0 /*6*/]), 467.5966f, -1853.251f, 32.0385f, 15.218f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[1 /*6*/]), 441.4879f, -1827.153f, 30.6772f, 269.2424f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[2 /*6*/]), 425.6849f, -1850.302f, 29.6723f, 232.5502f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[3 /*6*/]), 474.145f, -1861.861f, 32.0385f, 304.1951f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[4 /*6*/]), 488.6247f, -1827.925f, 31.0552f, 44.0614f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[5 /*6*/]), 502.1079f, -1814.286f, 32.7449f, 43.2727f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[6 /*6*/]), 507.4474f, -1797.317f, 30.3208f, 65.9409f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[7 /*6*/]), 512.1399f, -1788.136f, 31.2764f, 106.2277f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[8 /*6*/]), 487.3958f, -1730.427f, 31.0703f, 211.203f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[9 /*6*/]), 478.1194f, -1740.215f, 31.7743f, 232.2849f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[10 /*6*/]), 474.0694f, -1760.084f, 31.5086f, 250.7436f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[11 /*6*/]), 475.3656f, -1772.253f, 31.1009f, 267.3608f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[12 /*6*/]), 477.9729f, -1792.398f, 31.2899f, 235.5816f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[13 /*6*/]), 470.5758f, -1797.994f, 31.4238f, 264.4785f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[14 /*6*/]), 463.8697f, -1805.947f, 31.4137f, 177.1468f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[15 /*6*/]), 447.8933f, -1792.66f, 31.3978f, 141.8946f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[16 /*6*/]), 428.7633f, -1813.743f, 30.6083f, 297.5291f, 1);
			Local_1844.f_214 = 17;
			Local_2059 = 1;
			Local_2059.f_6 = 1;
			Local_2059.f_5 = 1;
			Local_2059.f_1 = 20000;
			Local_2059.f_2 = 30000;
			GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), 406.0836f, -1916.985f, 24.0788f, 44.7007f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), 533.4858f, -1889.465f, 24.4219f, 102.9549f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[2 /*6*/]), 543.5394f, -1713.405f, 28.2633f, 59.5502f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[3 /*6*/]), 413.8781f, -1810.784f, 27.7617f, 303.4869f, 0);
			Local_2059.f_32 = 4;
			break;
		
		case 78:
			iLocal_1483 = 5000;
			iLocal_1484 = 8000;
			Local_1844 = 1;
			Local_1844.f_5[0 /*3*/] = { -162.1454f, -1663.402f, 32.8f };
			Local_1844.f_5[1 /*3*/] = { -91.89883f, -1579.667f, 31.5f };
			Local_1844.f_12 = 10f;
			GlobalFunc_4679(&(Local_1844.f_15[0 /*6*/]), -148.5f, -1668.9f, 32.3f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[1 /*6*/]), -135.4f, -1651.9f, 32.3f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[2 /*6*/]), -149.8f, -1630.2f, 33.1f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[3 /*6*/]), -119.9f, -1637.4f, 32.2f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[4 /*6*/]), -140.5f, -1612.6f, 33.3f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[5 /*6*/]), -98.7f, -1607.7f, 31.9f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[6 /*6*/]), -117.7f, -1591.1f, 33.3f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[7 /*6*/]), -104f, -1567.6f, 32.7f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[8 /*6*/]), -77.9f, -1588.7f, 30.4f, 0f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[9 /*6*/]), -95.6932f, -1595.269f, 37.5381f, 119.5596f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[10 /*6*/]), -106.9553f, -1586.229f, 39.4618f, 231.9059f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[11 /*6*/]), -125.7233f, -1608.628f, 40.5382f, 211.3573f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[12 /*6*/]), -116.061f, -1620.485f, 38.8444f, 48.9904f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[13 /*6*/]), -144.6918f, -1631.811f, 39.7488f, 210.9559f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[14 /*6*/]), -138.2615f, -1645.86f, 39.0303f, 14.7954f, 1);
			GlobalFunc_4679(&(Local_1844.f_15[15 /*6*/]), -172.547f, -1649.615f, 32.4385f, 173.3268f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[16 /*6*/]), -175.8211f, -1646.354f, 32.3339f, 178.1288f, 0);
			GlobalFunc_4679(&(Local_1844.f_15[17 /*6*/]), -165.525f, -1690.764f, 31.2333f, 20.2723f, 0);
			Local_1844.f_214 = 18;
			Local_2059 = 1;
			Local_2059.f_6 = 1;
			Local_2059.f_5 = 1;
			Local_2059.f_1 = 20000;
			Local_2059.f_2 = 30000;
			GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), -102.4641f, -1560.387f, 32.0852f, 228.877f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), -62.2571f, -1593.248f, 28.5327f, 43.1166f, 0);
			Local_2059.f_32 = 2;
			break;
		
		case joaat("mpsv_lp0_31"):
			iLocal_1483 = 8000;
			iLocal_1484 = 5000;
			iLocal_1481 = 10;
			Local_2059 = 1;
			Local_2059.f_6 = 1;
			Local_2059.f_4 = 2;
			Local_2059.f_5 = 4;
			Local_2059.f_1 = 4000;
			Local_2059.f_2 = 10000;
			Local_2095.f_6 = 20f;
			Local_2095.f_7 = 60f;
			GlobalFunc_4679(&(Local_2059.f_7[0 /*6*/]), -1111.069f, 2673.17f, 17.564f, 134.8095f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[1 /*6*/]), -1504.728f, 2397.687f, 25.2559f, 269.3951f, 0);
			GlobalFunc_4679(&(Local_2059.f_7[2 /*6*/]), -1536.234f, 2740.836f, 16.6437f, 233.283f, 0);
			Local_2059.f_32 = 3;
			break;
		
		default:
			break;
	}
}

void func_643(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x3F728
{
	if (fParam1 > 0f)
	{
		uParam0->f_38 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(Local_358.f_53 * 2) * fParam1));
	}
	else
	{
		uParam0->f_38 = 99;
	}
	if (iParam3 > iLocal_1481)
	{
		iParam3 = iLocal_1481;
	}
	if (iParam3 > 10)
	{
		iParam3 = 10;
	}
	uParam0->f_41 = iParam3;
	uParam0->f_40 = iParam2;
}





void func_648(int iParam0)//Position - 0x3F8D6
{
	iLocal_1226 = 0;
	switch (iParam0)
	{
		case 76:
			func_649(899.08f, 3616.289f, 30.82431f, 889.8982f, 3616.47f, 33.86209f, 6.3f);
			func_649(900.7537f, 3579.707f, 30.14116f, 916.0252f, 3579.704f, 37.61824f, 13f);
			func_649(908.9027f, 3571.474f, 30.78263f, 908.8672f, 3554.104f, 37.81812f, 12f);
			func_649(985.6218f, 3578.335f, 30.44886f, 997.5567f, 3569.89f, 41.18679f, 9.75f);
			func_649(954.7393f, 3617.573f, 30.71703f, 960.0347f, 3617.539f, 34.7589f, 8f);
			break;
		
		case 80:
			func_649(1145.496f, -368.6768f, 66.0489f, 1133.038f, -417.9054f, 77.88786f, 16.5f);
			func_649(1186.174f, -386.6356f, 66.45399f, 1156.465f, -379.2815f, 72.74422f, 8.75f);
			break;
		
		case 77:
			func_649(413.3666f, -1746.959f, 27.10678f, 405.9162f, -1742.054f, 33.07854f, 7.5f);
			func_649(444.2452f, -1745.233f, 26.72731f, 435.7444f, -1741.421f, 32.96765f, 8.75f);
			func_649(468.188f, -1802.802f, 26.34261f, 449.5238f, -1787.471f, 33.34253f, 13f);
			func_649(531.5933f, -1806.029f, 26.5626f, 521.0415f, -1806.093f, 31.50595f, 10f);
			func_649(419.3922f, -1845.889f, 25.887f, 425.955f, -1850.847f, 28.78128f, 7f);
			func_649(481.7917f, -1735.011f, 30.85977f, 488.1506f, -1737.298f, 26.94359f, 11.2f);
			break;
		
		case 78:
			func_649(-139.41f, -1648.285f, 31.54327f, -133.8911f, -1653.294f, 34.95023f, 3.5f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_649(-1277.213f, 2569.291f, 22.06902f, -1284.097f, 2548.222f, 28.85351f, 19.25f);
			break;
		
		default:
			break;
	}
}

int func_649(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x3FB6D
{
	if (iLocal_1226 >= Local_1123)
	{
		return 0;
	}
	GlobalFunc_6561(&(Local_1123[iLocal_1226 /*17*/]), Param0, Param3, fParam6);
	iLocal_1226++;
	return 1;
}

void func_650(int iParam0)//Position - 0x3FBA1
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_653();
	Local_358 = iParam0;
	Local_2125 = { func_480() };
	switch (iParam0)
	{
		case 76:
			iLocal_276 = 52;
			Local_358.f_1 = 0;
			Local_358.f_16 = SYSTEM::CEIL((2f * 60000f));
			Local_358.f_11 = "trvram_6_2h_intro";
			Local_358.f_12 = "trvram_6_2h_outro";
			Local_358.f_13 = "trvram_6_2h_run_outro";
			Local_358.f_14 = 0.15f;
			Local_358.f_15 = 0.37f;
			Local_358.f_17[0] = joaat("weapon_assaultrifle");
			Local_358.f_24[0] = joaat("component_assaultrifle_clip_01");
			Local_358.f_24[1] = joaat("component_assaultrifle_clip_02");
			Local_358.f_21[0] = joaat("weapon_pistol");
			Local_358.f_27[0] = joaat("a_m_m_hillbilly_01");
			Local_358.f_27[1] = joaat("a_m_y_salton_01");
			Local_358.f_27[2] = joaat("ig_ramp_hic");
			Local_358.f_37 = 2;
			Local_358.f_32[0] = joaat("bfinjection");
			Local_358.f_32[1] = joaat("bison");
			Local_358.f_38 = 2;
			Local_358.f_2 = "TR_RTGT1";
			Local_358.f_5 = "TR_RAMP1";
			Local_358.f_49 = 0.33f;
			Local_358.f_52 = 1;
			Local_358.f_36 = joaat("prop_gascyl_01a");
			Local_358.f_6 = "Rampage1";
			Local_358.f_43 = { 908.7723f, 3641.453f, 31.4889f };
			Local_358.f_46 = 270.3831f;
			Local_358.f_39 = { 899.2652f, 3649.579f, 31.7623f };
			Local_358.f_42 = 269.0209f;
			Local_358.f_53 = 25;
			iLocal_2193[0] = "A_M_M_SALTON_02_WHITE_FULL_01";
			iLocal_2193[1] = "A_M_O_SALTON_01_WHITE_FULL_01 ";
			iLocal_2193[2] = "A_M_M_HILLBILLY_01_WHITE_MINI_01";
			iLocal_2193[3] = "A_M_M_HILLBILLY_02_WHITE_MINI_01";
			iLocal_2193[4] = "A_M_Y_SALTON_01_WHITE_MINI_01";
			sLocal_2181 = "GENERIC_INSULT_HIGH";
			iLocal_2133 = "RAMPAGE_REDNECKS_SCENE";
			iLocal_2387 = 28000;
			break;
		
		case 80:
			iLocal_276 = 53;
			Local_358.f_1 = 1;
			Local_358.f_17[0] = joaat("weapon_sawnoffshotgun");
			Local_358.f_21[0] = joaat("weapon_pistol");
			Local_358.f_21[1] = joaat("weapon_bat");
			Local_358.f_16 = 120000;
			Local_358.f_11 = "trvram_6_2h_intro";
			Local_358.f_12 = "trvram_6_2h_outro";
			Local_358.f_13 = "trvram_6_2h_run_outro";
			Local_358.f_14 = 0.15f;
			Local_358.f_15 = 0.37f;
			Local_358.f_27[0] = joaat("a_m_y_hipster_03");
			Local_358.f_27[1] = joaat("a_m_y_hipster_02");
			Local_358.f_27[2] = joaat("a_m_y_hipster_01");
			Local_358.f_27[3] = joaat("ig_ramp_hipster");
			Local_358.f_37 = 3;
			Local_358.f_32[0] = joaat("faggio2");
			Local_358.f_32[1] = joaat("fixter");
			Local_358.f_32[2] = joaat("issi2");
			Local_358.f_38 = 3;
			Local_358.f_43 = { 1181.137f, -400.7188f, 66.913f };
			Local_358.f_46 = 218.467f;
			Local_358.f_39 = { 1193.607f, -392.7852f, 67.0623f };
			Local_358.f_42 = 164.6903f;
			Local_358.f_2 = "TR_RTGT2";
			Local_358.f_5 = "TR_RAMP5";
			Local_358.f_48 = 1f;
			Local_358.f_47 = 0.2f;
			iLocal_2193[0] = "A_M_Y_Hipster_03_White_Mini_01";
			iLocal_2193[1] = "A_M_Y_Vinewood_02_White_Mini_01";
			iLocal_2193[2] = "A_M_Y_Vinewood_03_White_Mini_01";
			iLocal_2193[3] = "A_M_Y_Vinewood_04_White_Mini_01";
			iLocal_2199[0] = "A_F_Y_Hipster_01_White_Mini_01";
			iLocal_2199[1] = "A_F_Y_Vinewood_01_White_Mini_01";
			iLocal_2199[2] = "A_F_Y_Vinewood_02_White_Mini_01";
			iLocal_2199[3] = "A_F_Y_Vinewood_03_Chinese_Mini_01";
			iLocal_2199[4] = "A_F_Y_Vinewood_04_White_Mini_01";
			sLocal_2181 = "RAMPAGEHIPSTER";
			iLocal_2133 = "RAMPAGE_HIPSTERS_SCENE";
			Local_358.f_53 = 20;
			fLocal_1121 = 0f;
			fLocal_1122 = 0f;
			iLocal_2387 = 17000;
			fLocal_2128 = 600f;
			iLocal_2148 = 0;
			break;
		
		case 77:
			iLocal_276 = 54;
			Local_358.f_1 = 2;
			Local_358.f_16 = 120000;
			Local_358.f_11 = "trvram_6_1h_intro";
			Local_358.f_12 = "trvram_6_1h_outro";
			Local_358.f_13 = "trvram_6_1h_run_outro";
			Local_358.f_14 = 0.19f;
			Local_358.f_15 = 0.24f;
			Local_358.f_17[0] = joaat("weapon_microsmg");
			Local_358.f_24[0] = joaat("component_at_scope_macro");
			Local_358.f_24[1] = joaat("component_microsmg_clip_02");
			Local_358.f_21[0] = joaat("weapon_pistol");
			Local_358.f_21[1] = joaat("weapon_assaultrifle");
			Local_358.f_27[0] = joaat("a_m_m_mexlabor_01");
			Local_358.f_27[1] = joaat("g_m_y_mexgoon_03");
			Local_358.f_27[2] = joaat("a_m_y_mexthug_01");
			Local_358.f_27[3] = joaat("ig_ramp_mex");
			Local_358.f_37 = 3;
			Local_358.f_32[0] = joaat("cavalcade2");
			Local_358.f_32[1] = joaat("vigero");
			Local_358.f_38 = 2;
			Local_358.f_43 = { 463.9719f, -1848.928f, 26.864f };
			Local_358.f_46 = 135.7623f;
			Local_358.f_39 = { 444.072f, -1861.689f, 26.5592f };
			Local_358.f_42 = 131.0001f;
			Local_358.f_2 = "TR_RTGT3";
			Local_358.f_5 = "TR_RAMP2";
			Local_358.f_53 = 30;
			iLocal_2387 = 15500;
			sLocal_2181 = "GENERIC_INSULT_HIGH";
			iLocal_2133 = "RAMPAGE_VAGOS_SCENE";
			break;
		
		case 78:
			iLocal_276 = 55;
			Local_358.f_1 = 3;
			Local_358.f_16 = 120000;
			Local_358.f_17[0] = joaat("weapon_assaultrifle");
			Local_358.f_21[0] = joaat("weapon_pistol");
			Local_358.f_27[0] = joaat("g_m_y_ballaeast_01");
			Local_358.f_27[1] = joaat("g_m_y_ballaorig_01");
			Local_358.f_27[2] = joaat("g_m_y_ballasout_01");
			Local_358.f_27[3] = joaat("ig_ramp_gang");
			Local_358.f_37 = 3;
			Local_358.f_11 = "trvram_6_2h_intro";
			Local_358.f_12 = "trvram_6_2h_outro";
			Local_358.f_13 = "trvram_6_2h_run_outro";
			Local_358.f_14 = 0.15f;
			Local_358.f_15 = 0.37f;
			Local_358.f_32[0] = joaat("oracle");
			Local_358.f_32[1] = joaat("felon");
			Local_358.f_38 = 2;
			Local_358.f_43 = { -162.3577f, -1668.269f, 32.1239f };
			Local_358.f_46 = 327.584f;
			Local_358.f_39 = { -168.0764f, -1633.866f, 32.6486f };
			Local_358.f_42 = 262.9751f;
			Local_358.f_2 = "TR_RTGT4";
			Local_358.f_5 = "TR_RAMP3";
			Local_358.f_53 = 30;
			Local_2125 = { -129f, -1622.7f, 32.1f };
			iLocal_2387 = 14100;
			iLocal_2133 = "RAMPAGE_BALLAS_SCENE";
			break;
		
		case joaat("mpsv_lp0_31"):
			iLocal_276 = 56;
			Local_358.f_1 = 4;
			Local_358.f_11 = "trvram_6_2h_intro";
			Local_358.f_12 = "trvram_6_2h_outro";
			Local_358.f_13 = "trvram_6_2h_run_outro";
			Local_358.f_14 = 0.15f;
			Local_358.f_15 = 0.37f;
			Local_358.f_17[0] = joaat("weapon_grenadelauncher");
			Local_358.f_17[1] = joaat("weapon_assaultrifle");
			Local_358.f_21[0] = joaat("weapon_pistol");
			Local_358.f_21[1] = joaat("weapon_assaultrifle");
			Local_358.f_27[0] = joaat("s_m_y_marine_01");
			Local_358.f_27[1] = joaat("s_m_y_marine_03");
			Local_358.f_37 = 2;
			Local_358.f_32[0] = joaat("crusader");
			Local_358.f_32[1] = joaat("barracks");
			Local_358.f_32[2] = joaat("rhino");
			Local_358.f_38 = 2;
			Local_358.f_43 = { -1295.753f, 2507.117f, 20.2824f };
			Local_358.f_46 = 336.2132f;
			Local_358.f_39 = { -1317.211f, 2482.077f, 22.8051f };
			Local_358.f_42 = 311.7142f;
			Local_358.f_2 = "TR_RTGT5";
			Local_358.f_5 = "TR_RAMP4";
			Local_358.f_53 = 35;
			Local_358.f_54 = 19780921;
			fLocal_1122 = 0.8f;
			iLocal_2387 = 16000;
			iLocal_2133 = "RAMPAGE_MILITARY_SCENE";
			break;
		
		default:
			break;
	}
	func_652();
	if (!GlobalFunc_105(Local_358.f_7) && Local_358.f_10 > 0f)
	{
		GlobalFunc_2357(Local_358.f_7, Local_358.f_10, &Var0, &Var3);
		iLocal_1028 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_358.f_6))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(Local_358.f_6, 0);
	}
	GlobalFunc_2357(Local_2125, fLocal_2128, &Var0, &Var3);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Var0, Var3, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var0, Var3, 0);
}


void func_652()//Position - 0x403CB
{
	switch (Local_358)
	{
		case 76:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		
		case 80:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		
		case 77:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		
		case 78:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		
		case joaat("mpsv_lp0_31"):
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_653()//Position - 0x40435
{
	int iVar0;
	
	GlobalFunc_4700(&Local_426);
	Local_358.f_53 = 30;
	Local_358.f_16 = 180000;
	Local_358.f_43 = { 0f, 0f, 0f };
	Local_358.f_46 = 0f;
	Local_358.f_39 = { 0f, 0f, 0f };
	Local_358.f_42 = 0f;
	Local_358.f_50 = 0;
	Local_358.f_48 = 0f;
	Local_358.f_47 = 0f;
	Local_358.f_54 = 0;
	Local_358.f_52 = 0;
	Local_358.f_49 = 0f;
	Local_358.f_6 = "";
	Local_358.f_7 = { 0f, 0f, 0f };
	Local_358.f_10 = 0f;
	Local_358.f_36 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_27)
	{
		Local_358.f_27[iVar0] = 0;
		iVar0++;
	}
	Local_358.f_37 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_32)
	{
		Local_358.f_32[iVar0] = 0;
		iVar0++;
	}
	Local_358.f_38 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_17)
	{
		Local_358.f_17[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_24)
	{
		Local_358.f_24[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_358.f_21)
	{
		Local_358.f_21[iVar0] = 0;
		iVar0++;
	}
	sLocal_2181 = "";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2193)
	{
		iLocal_2193[iVar0] = "";
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2199)
	{
		iLocal_2199[iVar0] = "";
		iVar0++;
	}
}


