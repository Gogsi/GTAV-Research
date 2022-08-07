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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106[1] = { 0 };
	char cLocal_108[16] = "";
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	char cLocal_133[16] = "";
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	char cLocal_306[16] = "";
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	struct<3> Local_310 = { 0, 0, 0 } ;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_324 = 0;
	bool bLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3000> Local_330 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3330 = { 0, 0, 0 } ;
	char cLocal_3333[64] = "";
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	int iLocal_3349 = 0;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_95 = 9999;
	iLocal_96 = 9999;
	fLocal_121 = 0.82f;
	fLocal_122 = 0.42f;
	fLocal_123 = 0f;
	fLocal_124 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_BIT(&Global_2263, 17);
	MISC::CLEAR_BIT(&Global_2264, 18);
	MISC::CLEAR_BIT(&Global_2264, 20);
	uLocal_302 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_1;
	uLocal_303 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_1;
	uLocal_304 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_1;
	iLocal_103 = AUDIO::GET_SOUND_ID();
	if (Global_68245)
	{
		func_217();
	}
	else
	{
		func_206();
	}
	if (!Global_14393.f_1 == 10)
	{
		if (Global_14393.f_1 > 3)
		{
			if (Global_14393.f_1 != 9)
			{
				Global_14393.f_1 = 7;
			}
		}
	}
	iLocal_130 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_2264, 18))
		{
			GlobalFunc_2023();
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
			}
			MISC::CLEAR_BIT(&Global_2264, 18);
			func_204();
		}
		if ((iLocal_115 == 1 && Global_14393.f_1 == 10) && Local_330.f_2999 == 1)
		{
			func_132();
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (MISC::IS_BIT_SET(Global_2263, 16))
					{
						func_131();
					}
					else
					{
						func_128();
						if (MISC::IS_BIT_SET(Global_2264, 0))
						{
							iLocal_131 = MISC::GET_GAME_TIMER();
							if ((iLocal_131 - iLocal_130) > 1000)
							{
								if (iLocal_132)
								{
									func_127();
								}
								else
								{
									func_112();
								}
							}
							if (iLocal_132)
							{
								func_111();
							}
						}
						else
						{
							func_112();
						}
					}
					if (!MISC::IS_BIT_SET(Global_2263, 9))
					{
						if (GlobalFunc_774(2, Global_14365, 0))
						{
							if (MISC::IS_BIT_SET(Global_2264, 0))
							{
							}
							else if (Global_14336 == 0)
							{
								if (!MISC::IS_BIT_SET(Global_2264, 19))
								{
									GlobalFunc_7017();
									GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_105 = 0;
									StringCopy(&cLocal_108, "", 16);
									func_106();
									Global_14373 = 0;
									iLocal_115 = 0;
									GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_14381)
									{
										func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										MISC::SET_BIT(&Global_2263, 17);
										func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										MISC::SET_BIT(&Global_2263, 17);
										func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_14393.f_1 > 3)
									{
										Global_14393.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_115 == 1)
					{
						func_128();
						func_132();
					}
					else if (iLocal_113 == 0)
					{
						func_94();
						func_87();
					}
					else
					{
						if (SYSTEM::TIMERA() > 1500)
						{
							iLocal_328 = 0;
							while (iLocal_328 < 4)
							{
								if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_2101[iLocal_328 /*16*/])))
								{
									if (!MISC::ARE_STRINGS_EQUAL(&(Global_2101[iLocal_328 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_325 = true;
										iLocal_327 = iLocal_328;
									}
									else
									{
										bLocal_325 = false;
									}
								}
								iLocal_328++;
							}
							if (iLocal_114 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
								uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
								while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
								{
									SYSTEM::WAIT(0);
								}
								iLocal_99 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
								func_85();
							}
						}
						func_128();
						if (bLocal_326 == 1)
						{
							if (!Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_396)
							{
								if (!func_81(Global_14393, Global_1578))
								{
									Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_396 = 1;
								}
							}
						}
						if (func_81(Global_14393, Global_1578))
						{
							if (!Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_397)
							{
								if (bLocal_325 == 1)
								{
									if (func_80(Global_86214))
									{
										switch (GlobalFunc_5585("AM_H_BBUDDY"))
										{
											case 2:
												GlobalFunc_6677("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_397 = 1;
												break;
										}
										if (GlobalFunc_5585("AM_H_BBUDDY1") == 0)
										{
											GlobalFunc_5207("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (GlobalFunc_5585("AM_H_BBUDDY1"))
										{
											case 2:
												GlobalFunc_6677("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_397 = 1;
												break;
										}
										if (GlobalFunc_5585("AM_H_BBUDDY") == 0)
										{
											GlobalFunc_5207("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_114)
						{
							func_70();
						}
						else
						{
							func_38();
						}
					}
					if (GlobalFunc_774(2, Global_14361, 0))
					{
						GlobalFunc_2011();
						Global_14371 = 1;
						if (Global_68245)
						{
							func_217();
						}
						else
						{
							func_206();
						}
						SYSTEM::WAIT(0);
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
						}
						StringCopy(&cLocal_108, "", 16);
						if (iLocal_113 == 1)
						{
							iLocal_113 = 0;
						}
						if (iLocal_114 == 1)
						{
							iLocal_114 = 0;
						}
						iLocal_115 = 0;
					}
					break;
				
				case 10:
					if (iLocal_126 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_204();
					break;
				
				default:
					break;
			}
			if (!Global_14393.f_1 == 8)
			{
				if ((Global_2871 - Global_2870) > Global_2872)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (GlobalFunc_774(2, Global_14361, 0))
							{
								if (MISC::IS_BIT_SET(Global_2264, 0))
								{
									GlobalFunc_2011();
								}
								else
								{
									GlobalFunc_2011();
									if (!Global_14393.f_1 == 10)
									{
										func_204();
									}
									else if (Global_1578 == 132)
									{
										if (Global_2451015.f_1 || MISC::IS_BIT_SET(Global_2264, 20))
										{
											Global_14393.f_1 = 7;
											GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (MISC::IS_BIT_SET(Global_2264, 0))
											{
												GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											AUDIO::STOP_SOUND(iLocal_103);
											iLocal_126 = 0;
										}
									}
									else
									{
										GlobalFunc_2023();
										Global_14393.f_1 = 7;
										func_2();
										GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (MISC::IS_BIT_SET(Global_2264, 0))
										{
											GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										AUDIO::STOP_SOUND(iLocal_103);
										iLocal_126 = 0;
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
			Global_14395 = 6;
			func_204();
		}
		if (GlobalFunc_2001())
		{
			func_204();
		}
	}
}


void func_2()//Position - 0x747
{
	if (!Global_14393.f_1 == 10 && !Global_14393.f_1 == 9)
	{
		if (MISC::IS_BIT_SET(Global_2263, 9))
		{
			SYSTEM::WAIT(750);
		}
		if (Global_14393.f_1 > 6)
		{
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2266 = 99;
			if (MISC::IS_BIT_SET(Global_2263, 9))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14336 == 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::SET_BIT(&Global_2263, 17);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()//Position - 0x9E9
{
	struct<3> Var0;
	int iVar6;
	
	switch (iLocal_126)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_16715, 1);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
			{
				SYSTEM::WAIT(0);
			}
			cLocal_133 = { Global_97[Global_1578 /*10*/] };
			StringConCat(&cLocal_133, "_1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_133) || iLocal_305 == 1)
			{
				iLocal_127 = Global_16712;
				if (GlobalFunc_665(129))
				{
					iLocal_127 = Global_86795;
				}
			}
			else
			{
				iLocal_127 = Global_16711;
			}
			if ((iLocal_305 == 1 && MISC::ARE_STRINGS_EQUAL(&cLocal_306, "CELLPHONE_CHEAT")) && Global_68245 == 0)
			{
				if ((MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SEAPLANE") || MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DUELC")) || MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_BUBBLE"))
				{
					bLocal_119 = true;
				}
				if (bLocal_119)
				{
					if (GlobalFunc_84())
					{
						iLocal_120 = 0;
					}
					else
					{
						iLocal_120 = 1;
					}
				}
				if (iLocal_120 == 0)
				{
					iLocal_128 = MISC::GET_GAME_TIMER();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_108, -1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GlobalFunc_726("CELL_300");
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_MONOC"))
					{
						GlobalFunc_726("CELL_MONOSIGNAL");
					}
					else if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DIRECTOR"))
					{
						GlobalFunc_726("CELL_DRCT");
					}
					else
					{
						GlobalFunc_726("CELL_CHEAT");
					}
					GlobalFunc_726("CELL_195");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_126 = 1;
				}
				else
				{
					iLocal_126 = 2;
					iLocal_128 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_126 = 2;
				iLocal_128 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			iLocal_129 = MISC::GET_GAME_TIMER();
			if ((iLocal_129 - iLocal_128) > 1500)
			{
				iLocal_126 = 3;
			}
			break;
		
		case 2:
			iLocal_129 = MISC::GET_GAME_TIMER();
			if (iLocal_127 != Global_16711)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_103))
				{
					if (Global_2451015.f_37 == 0)
					{
						if (Global_14336)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_103, "Dial_and_Remote_Ring", &Global_14382, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_103, "Remote_Ring", &Global_14382, 1);
						}
					}
				}
			}
			else if ((GlobalFunc_665(130) || GlobalFunc_665(132)) || GlobalFunc_665(128))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_103))
				{
					if (Global_2451015.f_37 == 0)
					{
						if (Global_14336)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_103, "Dial_and_Remote_Ring", &Global_14382, 1);
						}
						else if ((iLocal_129 - iLocal_128) > 1700)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_103, "Remote_Ring", &Global_14382, 1);
						}
					}
				}
			}
			if ((iLocal_129 - iLocal_128) > iLocal_127)
			{
				if (iLocal_127 == Global_16711)
				{
					bLocal_116 = false;
					if ((Global_1578 == 130 || Global_1578 == 132) || Global_1578 == 128)
					{
						if (!MISC::IS_BIT_SET(Global_2264, 20))
						{
							bLocal_116 = true;
							if ((iLocal_129 - iLocal_128) > iLocal_127 + 10000)
							{
								if (Global_14393.f_1 == 10)
								{
									if (Global_1578 == 130)
									{
										Global_14393.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_116)
					{
						iLocal_126 = 4;
						AUDIO::STOP_SOUND(iLocal_103);
						iLocal_117 = 0;
						SYSTEM::SETTIMERB(0);
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
						{
							if (Global_1578 == 132)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GlobalFunc_726("CELL_300");
								GlobalFunc_726("CELL_220");
								GlobalFunc_726("CELL_219");
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(5), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(5), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_220", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
						}
						GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_126 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_305 == 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_306, "CELLPHONE_CHEAT") && Global_68245 == 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_MONOC"))
					{
						if (Global_3067 == 0)
						{
							Global_3067 = 1;
							Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_6 = 5;
							Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_6 = 5;
							Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_6 = 5;
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
								{
									if (!FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 40f))
									{
										FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216);
									}
								}
							}
						}
						else
						{
							Global_3067 = 0;
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SUPJUM"))
					{
						func_33(0, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_HEALA"))
					{
						func_33(6, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SLIDEYC"))
					{
						func_33(1, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_FASTR"))
					{
						func_33(2, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_WANTDN"))
					{
						func_33(9, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_WANTUP"))
					{
						func_33(8, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_WEATHER"))
					{
						func_33(5, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_FASTS"))
					{
						func_33(3, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_POWER"))
					{
						func_33(7, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_CHUTE"))
					{
						func_33(10, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_BANG"))
					{
						func_33(11, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_FLAMB"))
					{
						func_33(12, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_EXPMEL"))
					{
						func_33(13, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_ZEROG"))
					{
						func_33(14, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_INVINC"))
					{
						func_33(15, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SLOWMO"))
					{
						func_33(16, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SKYFA"))
					{
						func_33(17, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DRUNK"))
					{
						func_33(18, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DEADEYE"))
					{
						func_33(19, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_WEAPONS"))
					{
						func_33(4, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_BUZZARD"))
					{
						func_33(20, joaat("buzzard"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_COMET2"))
					{
						func_33(20, joaat("comet2"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_BMX"))
					{
						func_33(20, joaat("bmx"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_CADDY"))
					{
						func_33(20, joaat("caddy"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DUSTER"))
					{
						func_33(20, joaat("duster"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_PCJ"))
					{
						func_33(20, joaat("pcj"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_RAPIDGT"))
					{
						func_33(20, joaat("rapidgt"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_STRETCH"))
					{
						func_33(20, joaat("stretch"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_STUNT"))
					{
						func_33(20, joaat("stunt"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_TRASH"))
					{
						func_33(20, joaat("trash"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SANCHEZ"))
					{
						func_33(20, joaat("sanchez"));
					}
					if (GlobalFunc_84())
					{
						if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_SEAPLANE"))
						{
							func_33(20, joaat("dodo"));
						}
						if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DUELC"))
						{
							func_33(20, joaat("dukes2"));
						}
						if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_BUBBLE"))
						{
							func_33(20, joaat("submersible2"));
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_310, "CHEAT_DIRECTOR"))
					{
						Global_96301 = 1;
					}
					GlobalFunc_6685(0);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&cLocal_306, "CELLPHONE_CHEAT"))
				{
					GlobalFunc_6685(0);
				}
				else
				{
					GlobalFunc_173(&uLocal_137, 1, 0, &Local_310, 0, 1);
					Global_16713 = 0;
					func_28(&uLocal_137, Global_1578, &Global_16715, &cLocal_306, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_1578)
				{
					case 0:
						StringCopy(&Var0, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var0, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var0, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var0, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var0, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var0, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var0, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var0, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var0, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var0, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var0, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var0, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var0, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var0, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var0, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var0, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var0, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var0, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var0, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var0, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var0, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var0, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var0, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var0, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var0, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var0, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var0, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var0, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var0, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var0, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var0, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var0, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var0, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var0, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var0, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var0, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var0, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var0, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var0, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var0, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var0, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var0, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var0, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var0, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var0, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var0, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var0, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var0, "MICHAEL", 24);
						break;
				}
				GlobalFunc_173(&uLocal_137, 1, 0, &Var0, 0, 1);
				Global_16713 = 0;
				switch (Global_1578)
				{
					case 13:
						func_9(&uLocal_137, 12, &Global_16715, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar6 = CLOCK::GET_CLOCK_HOURS();
						if (iVar6 > 17 || iVar6 < 9)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar6 > 8 && iVar6 < 13)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar6 > 12 && iVar6 < 18)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (GlobalFunc_230(21) && !GlobalFunc_230(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_68245)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (GlobalFunc_485(126))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!GlobalFunc_230(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!GlobalFunc_230(20))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!GlobalFunc_230(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!GlobalFunc_230(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!GlobalFunc_230(20))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!GlobalFunc_230(19))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!GlobalFunc_230(21))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!GlobalFunc_230(22))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (GlobalFunc_794(7))
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_329 <= 50)
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_137, Global_1578, &Global_16715, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_137, Global_1578, &Global_16715, &(Global_97[Global_1578 /*10*/]), 2, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2264, 31);
			}
			break;
		
		case 4:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_103))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_103, "Remote_Engaged", &Global_14382, 1);
			}
			if (SYSTEM::TIMERB() > 1500)
			{
				if (iLocal_117 == 0)
				{
					if (Global_14393 == 2)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5122(PLAYER::PLAYER_PED_ID(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_117 = 1;
						}
					}
				}
			}
			break;
	}
}






void func_9(var uParam0, int iParam1, var uParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1C73
{
	if (Global_68245 || GlobalFunc_456())
	{
		if (Global_1572928 == 1)
		{
			func_28(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_16715, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1CE2
{
	GlobalFunc_789(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return GlobalFunc_9820(sParam3, iParam4, bParam8);
}


















int func_28(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x2516
{
	GlobalFunc_789(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 1;
	return GlobalFunc_9820(sParam3, iParam4, bParam8);
}





void func_33(int iParam0, int iParam1)//Position - 0x274E
{
	MISC::SET_BIT(&Global_24691, iParam0);
	Global_24692 = iParam1;
}





void func_38()//Position - 0x287E
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			MISC::CLEAR_BIT(&Global_2264, 0);
			iLocal_114 = 0;
			GlobalFunc_7017();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
			if (func_65(Global_1578))
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 1;
						func_48();
					}
					else
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 1)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
					else if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 2)
				{
					if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
			}
			else
			{
				if (iLocal_102 == 0)
				{
					if (bLocal_325)
					{
						Global_16806 = 0;
						Global_16805 = 0;
						Global_16807 = 1;
						func_48();
					}
					else if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
				if (iLocal_102 == 1)
				{
					if (func_40(Global_1578, Global_14393))
					{
						func_39();
						iLocal_114 = 1;
					}
					else
					{
						Global_16806 = 1;
						Global_16805 = 0;
						Global_16807 = 0;
						func_48();
					}
				}
			}
		}
	}
}

void func_39()//Position - 0x29F9
{
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
	func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_40(int iParam0, int iParam1)//Position - 0x2B1C
{
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
	{
		if (GlobalFunc_7909(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}








void func_48()//Position - 0x3003
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 10;
		func_64();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!GlobalFunc_2015())
					{
						GlobalFunc_5583();
					}
				}
				else if (GlobalFunc_5582() == 0)
				{
					GlobalFunc_5583();
				}
			}
		}
		if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
		{
			GlobalFunc_872();
			GlobalFunc_1493(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
	{
		func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_211", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
	}
	func_56();
	if (Global_68245)
	{
		func_49(1902, 1, -1);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)//Position - 0x3141
{
	int iVar0;
	
	iVar0 = GlobalFunc_6671(iParam0, GlobalFunc_4916(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6923(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		GlobalFunc_6922(iParam0, iVar0, iParam2, 1);
	}
}







void func_56()//Position - 0x354D
{
	char cVar0[24];
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_59(Global_2868);
			if (Global_2868 == 1)
			{
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				GlobalFunc_2009();
				GlobalFunc_1493(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GlobalFunc_726("CELL_300");
					GlobalFunc_726("CELL_217");
					GlobalFunc_726("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_217", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
				}
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				GlobalFunc_1493(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_2009();
				if (Global_15705)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GlobalFunc_726("CELL_300");
					GlobalFunc_726("CELL_219");
					GlobalFunc_726("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &cVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
					}
				}
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_57();
			break;
		
		default:
			break;
	}
}

void func_57()//Position - 0x3B0B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
		else
		{
			func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}


void func_59(int iParam0)//Position - 0x3F04
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (GlobalFunc_39(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_726(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}





void func_64()//Position - 0x4772
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14333 = 1;
	}
}

int func_65(int iParam0)//Position - 0x4799
{
	int iVar0;
	
	if (func_66(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].NPC_Character == iParam0)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Settings, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x4827
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_Running_Missions[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_68514.f_109[Global_Running_Missions[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (GlobalFunc_5584(Global_81155[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}




void func_70()//Position - 0x4913
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			MISC::CLEAR_BIT(&Global_2264, 0);
			GlobalFunc_7017();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
			if (iLocal_102 == 0)
			{
				Global_16801[Global_14393] = 1;
				iLocal_113 = 0;
				Global_16806 = 0;
				Global_16805 = 1;
				Global_16807 = 0;
				func_48();
			}
			else
			{
				iLocal_114 = 0;
				func_85();
			}
		}
	}
}










int func_80(int iParam0)//Position - 0x4F75
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0, int iParam1)//Position - 0x4FAF
{
	int iVar0;
	
	return 0;
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_86214 != -1 && MISC::IS_BIT_SET(Global_81155[Global_86214 /*34*/].f_15, 15)) && MISC::IS_BIT_SET(Global_86215, iParam1))
	{
		if (Global_86213 != 5 || GlobalFunc_785() == Global_86214)
		{
			if (!GlobalFunc_2018(12))
			{
				if (GlobalFunc_5586(iParam0, iParam1, &iVar0) && GlobalFunc_2014(iVar0) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}




void func_85()//Position - 0x50B0
{
	SYSTEM::SETTIMERA(0);
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
	iLocal_113 = 1;
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_65(Global_1578))
	{
		if (bLocal_325)
		{
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_2101[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_86(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_40(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_326)
			{
				if (func_86(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_40(Global_1578, Global_14393))
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_325)
	{
		func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_2101[iLocal_327 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_326)
		{
			if (func_86(Global_1578, Global_14393))
			{
				func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_40(Global_1578, Global_14393))
			{
				func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_326)
	{
		if (func_86(Global_1578, Global_14393))
		{
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_40(Global_1578, Global_14393))
		{
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, SYSTEM::TO_FLOAT(iLocal_99), -1082130432, -1082130432, -1082130432);
	GlobalFunc_5587(Global_14374, "SET_HEADER", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0, 0, 0, 0);
}

int func_86(int iParam0, int iParam1)//Position - 0x5413
{
	int iVar0;
	
	if ((iParam0 >= 147 || iParam1 >= 147) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (GlobalFunc_230(90) && !GlobalFunc_230(20))
		{
			return 0;
		}
	}
	if (!GlobalFunc_6687(6))
	{
		if (GlobalFunc_5586(iParam0, iParam1, &iVar0) && GlobalFunc_2014(iVar0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_87()//Position - 0x54A1
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	}
	if (GlobalFunc_774(2, Global_14362, 0))
	{
		GlobalFunc_7017();
		Global_14371 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
		uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
		{
			SYSTEM::WAIT(0);
		}
		iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
		iLocal_104 = Global_3054[iVar0];
		uLocal_106[0] = HUD::_GET_LABEL_TEXT(&(Global_2971[iLocal_104 /*5*/]));
		if (MISC::ARE_STRINGS_EQUAL(uLocal_106[0], "*"))
		{
			cLocal_108 = { Global_3037[Global_14393 /*4*/] };
			iLocal_105 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_108);
		}
		else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_108) < 14)
		{
			StringConCat(&cLocal_108, uLocal_106[0], 16);
			iLocal_105++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_108, -1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GlobalFunc_774(2, 178, 0))
	{
		GlobalFunc_2011();
		Global_14371 = 1;
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_108) > 0)
		{
			StringCopy(&cLocal_108, HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 0, (iLocal_105 - 1)), 16);
			iLocal_105 = (iLocal_105 - 1);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_108, -1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GlobalFunc_774(2, Global_14365, 0))
	{
		if (!func_93())
		{
			GlobalFunc_7017();
			Global_3037[Global_14393 /*4*/] = { cLocal_108 };
			Global_1578 = 144;
			iLocal_305 = 0;
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 10;
				func_64();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!GlobalFunc_2015())
							{
								GlobalFunc_5583();
							}
						}
						else if (GlobalFunc_5582() == 0)
						{
							GlobalFunc_5583();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_118 = 0;
			while (iVar1 < 147)
			{
				if (iVar1 != 146)
				{
					sVar2 = HUD::_GET_LABEL_TEXT(&(Global_97[iVar1 /*10*/].f_4));
					if (MISC::ARE_STRINGS_EQUAL(sVar2, &cLocal_108))
					{
						if ((Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar1 /*29*/].f_12[Global_14393] == 1 || Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar1 /*29*/].f_12[Global_14393] == 2) || MISC::ARE_STRINGS_EQUAL(sVar2, HUD::_GET_LABEL_TEXT(&(Global_97[130 /*10*/].f_4))))
						{
							Global_1578 = iVar1;
						}
						else
						{
							iLocal_118 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_1578 == 144 && iLocal_305 == 0) && iLocal_118 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_108, -1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GlobalFunc_726("CELL_300");
				GlobalFunc_726("CELL_211");
				GlobalFunc_726("CELL_195");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_305 = 0;
				iVar3 = 0;
				while (iVar3 < 37)
				{
					sVar4 = HUD::_GET_LABEL_TEXT(&(Global_1582[iVar3 /*14*/]));
					if (MISC::ARE_STRINGS_EQUAL(sVar4, &cLocal_108))
					{
						iLocal_305 = 1;
						cLocal_306 = { Global_1582[iVar3 /*14*/].f_4 };
						Local_310 = { Global_1582[iVar3 /*14*/].f_8 };
					}
					iVar3++;
				}
				if (iLocal_305 == 0)
				{
					iLocal_112 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_108);
					if (iLocal_112 > 6)
					{
						StringCopy(&(uLocal_316[0]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 0, 1), 4);
						StringCopy(&(uLocal_316[1]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 1, 2), 4);
						StringCopy(&(uLocal_316[2]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 2, 3), 4);
						StringCopy(&(uLocal_316[3]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 3, 4), 4);
						StringCopy(&(uLocal_316[4]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 4, 5), 4);
						StringCopy(&(uLocal_316[5]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 5, 6), 4);
						if (((MISC::ARE_STRINGS_EQUAL(&(uLocal_316[0]), "1") && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[1]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[2]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[3]), "9"))
						{
							iVar5 = GlobalFunc_2020(&(uLocal_316[4]));
							iVar6 = GlobalFunc_2020(&(uLocal_316[5]));
							func_91(iVar5, iVar6);
							iLocal_305 = 1;
						}
						if (iLocal_305 == 0)
						{
							if (iLocal_112 == 10 || iLocal_112 == 7)
							{
								if (iLocal_112 == 10)
								{
									StringCopy(&(uLocal_316[0]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[1]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[2]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[3]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 6, 7), 4);
									StringCopy(&(uLocal_316[4]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 7, 8), 4);
									StringCopy(&(uLocal_316[5]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 8, 9), 4);
									StringCopy(&(uLocal_316[6]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_316[0]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 0, 1), 4);
									StringCopy(&(uLocal_316[1]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 1, 2), 4);
									StringCopy(&(uLocal_316[2]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 2, 3), 4);
									StringCopy(&(uLocal_316[3]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 3, 4), 4);
									StringCopy(&(uLocal_316[4]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 4, 5), 4);
									StringCopy(&(uLocal_316[5]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 5, 6), 4);
									StringCopy(&(uLocal_316[6]), HUD::_GET_TEXT_SUBSTRING(&cLocal_108, 6, 7), 4);
								}
								if ((((MISC::ARE_STRINGS_EQUAL(&(uLocal_316[0]), "5") && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[1]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[2]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[3]), "0")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_316[4]), "1"))
								{
									iVar7 = GlobalFunc_2020(&(uLocal_316[5]));
									iVar8 = GlobalFunc_2020(&(uLocal_316[6]));
									func_91(iVar7, iVar8);
									iLocal_305 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_12[Global_14393] == 2 || Global_1578 == 130)
				{
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] = 1;
					if (Global_1578 == 130)
					{
						if (!Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[130 /*29*/].f_12[0] == 1)
						{
							GlobalFunc_9818(130, 4, 1);
							GlobalFunc_9818(130, 3, 0);
						}
						if (Global_68245)
						{
							if (!GlobalFunc_2019(130, 3))
							{
								GlobalFunc_9818(130, 3, 1);
							}
						}
					}
				}
				if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_211", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
				}
			}
			func_56();
		}
	}
}




void func_91(int iParam0, int iParam1)//Position - 0x5D8A
{
	int iVar0;
	
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_306, "ANS_RAN1", 16);
			StringCopy(&Local_310, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_306, "ANS_RAN2", 16);
			StringCopy(&Local_310, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_306, "ANS_RAN3", 16);
			StringCopy(&Local_310, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_306, "ANS_RAN4", 16);
			StringCopy(&Local_310, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_306, "ANS_RAN5", 16);
			StringCopy(&Local_310, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_306, "ANS_RAN6", 16);
			StringCopy(&Local_310, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_306, "ANS_RAN7", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_306, "ANS_RAN9", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_306, "ANS_RAN10", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_306, "ANS_RAN1", 16);
			StringCopy(&Local_310, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_306, "ANS_RAN2", 16);
			StringCopy(&Local_310, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_306, "ANS_RAN3", 16);
			StringCopy(&Local_310, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_306, "ANS_RAN4", 16);
			StringCopy(&Local_310, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_306, "ANS_RAN5", 16);
			StringCopy(&Local_310, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_306, "ANS_RAN6", 16);
			StringCopy(&Local_310, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_306, "ANS_RAN7", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_306, "ANS_RAN9", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_306, "ANS_RAN8", 16);
			StringCopy(&Local_310, "ANSWER_FX", 24);
			break;
	}
}


int func_93()//Position - 0x6260
{
	if (Global_68245)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_94()//Position - 0x629B
{
	if (Global_14372)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14372 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14373)
			{
				case 0:
					func_102();
					Global_14373 = 1;
					break;
				
				case 1:
					func_102();
					Global_14373 = 2;
					break;
				
				case 2:
					func_102();
					GlobalFunc_7020();
					Global_14373 = 3;
					break;
				
				case 3:
					func_102();
					Global_14373 = 4;
					break;
				
				case 4:
					func_102();
					Global_14373 = 5;
					break;
				
				case 5:
					func_102();
					GlobalFunc_7020();
					Global_14373 = 6;
					break;
				
				case 6:
					func_102();
					Global_14373 = 7;
					break;
				
				case 7:
					func_102();
					Global_14373 = 8;
					break;
				
				case 8:
					func_102();
					GlobalFunc_7020();
					Global_14373 = 9;
					break;
				
				case 9:
					func_102();
					Global_14373 = 10;
					break;
				
				case 10:
					func_102();
					Global_14373 = 11;
					break;
				
				case 11:
					func_102();
					GlobalFunc_7020();
					Global_14373 = 0;
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14373)
			{
				case 0:
					func_98();
					GlobalFunc_7021();
					Global_14373 = 11;
					break;
				
				case 1:
					func_98();
					Global_14373 = 0;
					break;
				
				case 2:
					func_98();
					Global_14373 = 1;
					break;
				
				case 3:
					func_98();
					GlobalFunc_7021();
					Global_14373 = 2;
					break;
				
				case 4:
					func_98();
					Global_14373 = 3;
					break;
				
				case 5:
					func_98();
					Global_14373 = 4;
					break;
				
				case 6:
					func_98();
					GlobalFunc_7021();
					Global_14373 = 5;
					break;
				
				case 7:
					func_98();
					Global_14373 = 6;
					break;
				
				case 8:
					func_98();
					Global_14373 = 7;
					break;
				
				case 9:
					func_98();
					GlobalFunc_7021();
					Global_14373 = 8;
					break;
				
				case 10:
					func_98();
					Global_14373 = 9;
					break;
				
				case 11:
					func_98();
					Global_14373 = 10;
					break;
				}
			}
	}
	if (Global_14372 == 0)
	{
		if (GlobalFunc_774(2, Global_14368, 0))
		{
			func_102();
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
			switch (Global_14393.f_1)
			{
				case 6:
					if (Global_14373 < (34 - 1))
					{
						Global_14373++;
					}
					break;
				
				case 5:
					if (Global_14373 < 3)
					{
						Global_14373++;
					}
					break;
				}
		}
		if (GlobalFunc_774(2, Global_14367, 0))
		{
			func_98();
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_14373 > 0)
			{
				Global_14373 = (Global_14373 - 1);
			}
		}
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			GlobalFunc_7021();
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_14373 > 3)
			{
				Global_14373 = (Global_14373 - 4);
			}
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			GlobalFunc_7020();
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_14373 < 8)
			{
				Global_14373 += 4;
			}
		}
	}
}




void func_98()//Position - 0x661F
{
	GlobalFunc_1493(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_99();
}

void func_99()//Position - 0x665C
{
	if (GlobalFunc_2003())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
	}
}



void func_102()//Position - 0x66DF
{
	GlobalFunc_1493(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_103();
}

void func_103()//Position - 0x671C
{
	if (GlobalFunc_2003())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
	}
}

void func_104(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)//Position - 0x673F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		GlobalFunc_726(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		GlobalFunc_726(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		GlobalFunc_726(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		GlobalFunc_726(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		GlobalFunc_726(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_106()//Position - 0x684D
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_2971[0 /*5*/]), "CELL_900", 16);
	Global_2971[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_2971[1 /*5*/]), "CELL_901", 16);
	Global_2971[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_2971[2 /*5*/]), "CELL_902", 16);
	Global_2971[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_2971[3 /*5*/]), "CELL_903", 16);
	Global_2971[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_2971[4 /*5*/]), "CELL_904", 16);
	Global_2971[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_2971[5 /*5*/]), "CELL_905", 16);
	Global_2971[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_2971[6 /*5*/]), "CELL_906", 16);
	Global_2971[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_2971[7 /*5*/]), "CELL_907", 16);
	Global_2971[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_2971[8 /*5*/]), "CELL_908", 16);
	Global_2971[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_2971[9 /*5*/]), "CELL_909", 16);
	Global_2971[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_2971[10 /*5*/]), "CELL_910", 16);
	Global_2971[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_2971[11 /*5*/]), "CELL_911", 16);
	Global_2971[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_3054[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_2971[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_3054[iVar13] = iVar14;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
					GlobalFunc_726(&(Global_2971[iVar14 /*5*/]));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}





void func_111()//Position - 0x6B07
{
	if (GlobalFunc_774(2, Global_14361, 0))
	{
		iLocal_132 = 0;
		MISC::SET_BIT(&Global_2264, 0);
		GlobalFunc_2011();
		Global_14371 = 1;
		if (Global_68245)
		{
			func_217();
		}
		else
		{
			func_206();
		}
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 > 3)
		{
			Global_14393.f_1 = 7;
		}
		StringCopy(&cLocal_108, "", 16);
	}
}

void func_112()//Position - 0x6B5B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			if (!func_93())
			{
				Global_16806 = 0;
				Global_16805 = 0;
				Global_16807 = 0;
				iLocal_305 = 0;
				GlobalFunc_7017();
				Global_14371 = 1;
				if (iLocal_93 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
					uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
					{
						SYSTEM::WAIT(0);
					}
					iLocal_101 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
					bVar0 = false;
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
					{
						if (Global_68245)
						{
							if (iLocal_101 < iLocal_96)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_101 == iLocal_95 || iLocal_101 > iLocal_95)
						{
							bVar0 = true;
						}
					}
					if (MISC::IS_BIT_SET(Global_2264, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_330.f_2936 = (iLocal_101 - iLocal_95);
						func_116();
					}
					else
					{
						if (iLocal_101 < 0)
						{
							iLocal_101 = 0;
						}
						Global_1578 = Global_14399[iLocal_101];
						if (Global_14548 != 145)
						{
							if (Global_1578 != Global_14548)
							{
								iLocal_89 = 1;
							}
							else
							{
								iLocal_89 = 0;
							}
						}
						else
						{
							iLocal_89 = 0;
						}
						if (iLocal_89 == 0)
						{
							if (MISC::IS_BIT_SET(Global_2263, 9))
							{
								if (!MISC::IS_BIT_SET(Global_2263, 29))
								{
									Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_18 = 1;
									if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
									{
										func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_97[Global_1578 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(1), -1f, -1f, "CELL_288", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
									}
									func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									MISC::SET_BIT(&Global_2263, 29);
								}
							}
							else
							{
								bLocal_325 = false;
								bLocal_326 = false;
								if (Global_68245)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_2166[iVar1 /*24*/])))
										{
											if (!MISC::ARE_STRINGS_EQUAL(&(Global_2166[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_325 = true;
												iLocal_327 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_2101[iVar2 /*16*/])))
										{
											if (!MISC::ARE_STRINGS_EQUAL(&(Global_2101[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_325 = true;
												iLocal_327 = iVar2;
												if (iLocal_327 == iLocal_327)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_114(Global_1578) && MISC::IS_BIT_SET(Global_2264, 0) == 0)
								{
									if (func_86(Global_1578, Global_14393) == 0 && func_40(Global_1578, Global_14393) == 0)
									{
										bLocal_326 = false;
									}
									else
									{
										bLocal_326 = true;
									}
								}
								if (MISC::IS_BIT_SET(Global_2264, 0))
								{
									func_113();
									iLocal_132 = 1;
								}
								else if (bLocal_326 == 0 && bLocal_325 == 0)
								{
									Global_16806 = 0;
									Global_16805 = 0;
									Global_16807 = 0;
									if (MISC::IS_BIT_SET(Global_2264, 19) && Global_1578 == 129)
									{
									}
									else
									{
										func_48();
									}
								}
								else
								{
									func_85();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_113()//Position - 0x6EA5
{
	iLocal_130 = MISC::GET_GAME_TIMER();
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	switch (Global_1578)
	{
		case 2:
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7001", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7002", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7003", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_114(int iParam0)//Position - 0x705A
{
	switch (Global_14393)
	{
		case 0:
			if (GlobalFunc_5588(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (GlobalFunc_5588(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (GlobalFunc_5588(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}


void func_116()//Position - 0x7136
{
	var uVar0;
	
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (Global_14381)
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_120(&Local_330);
	if (Global_14393.f_1 > 3)
	{
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, SYSTEM::TO_FLOAT(iLocal_99), -1082130432, -1082130432, -1082130432);
		iLocal_99 = 0;
		if (func_119(&Local_330))
		{
			uVar0 = PLAYER::GET_PLAYER_NAME(Local_330[Local_330.f_2936]);
		}
		else
		{
			uVar0 = GlobalFunc_217(&(Local_330.f_34[func_118(Local_330.f_2936, &Local_330) /*29*/].f_13));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Local_330.f_2999 = 0;
		iLocal_115 = 1;
	}
}


int func_118(int iParam0, var uParam1)//Position - 0x72B5
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_119(var uParam0)//Position - 0x72D3
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0)//Position - 0x72EC
{
	int iVar0;
	struct<22> Var1;
	var uVar36;
	char* sVar37;
	bool bVar38;
	
	iVar0 = 0;
	if (func_126(uParam0, &uVar36))
	{
		if (func_119(uParam0))
		{
			uParam0->f_2963 = { GlobalFunc_318((*uParam0)[uParam0->f_2936]) };
			sVar37 = PLAYER::GET_PLAYER_NAME((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_118(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = GlobalFunc_217(&(uParam0->f_34[func_118(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (NETWORK::NETWORK_HAS_HEADSET())
		{
			if (!Global_1573708)
			{
				if (GlobalFunc_5255(0))
				{
					bVar38 = true;
				}
			}
		}
		if (func_119(uParam0))
		{
			if (((NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME((*uParam0)[uParam0->f_2936]) || NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			bVar38 = false;
		}
		if (PAD::_0x23F09EADC01449D6(0))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(uParam0->f_2963)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(uParam0->f_2963)) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
				{
					bVar38 = false;
				}
			}
			else if (MISC::IS_ORBIS_VERSION())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_68245)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (!Global_2451015.f_1 || Global_2451015.f_38)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_34913 == 15)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (!Global_2451015.f_1 || Global_2451015.f_38)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (((((GlobalFunc_5255(0) && GlobalFunc_5255((*uParam0)[uParam0->f_2936])) && !NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME((*uParam0)[uParam0->f_2936])) && !NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME((*uParam0)[uParam0->f_2936])) && !NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER((*uParam0)[uParam0->f_2936])) && !NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1009");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() < NETWORK::NETWORK_GET_MAX_FRIENDS())
			{
				if (!NETWORK::NETWORK_IS_FRIEND(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PIM_DFRQ2");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1007");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(uParam0->f_2963)))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() && !GlobalFunc_1946(Var1))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1003");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		MISC::CLEAR_BIT(&Global_2265, 6);
		bVar38 = false;
		if (func_119(uParam0))
		{
			if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_2936]))
				{
					if (!GlobalFunc_247((*uParam0)[uParam0->f_2936], 0))
					{
						if (!MISC::IS_BIT_SET(Global_2414009[(*uParam0)[uParam0->f_2936] /*254*/].f_194, 2))
						{
							bVar38 = true;
							MISC::SET_BIT(&Global_2265, 6);
						}
					}
				}
			}
		}
		if (Global_1573678 || Global_1573679)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			if (!MISC::IS_BIT_SET(Global_2422140.f_638, (*uParam0)[uParam0->f_2936]))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008");
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008b");
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_LEFT_SESS");
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
		GlobalFunc_6685(0);
		return;
	}
}






int func_126(var uParam0, int iParam1)//Position - 0x79FD
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (GlobalFunc_252((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_118(uParam0->f_2936, uParam0);
		if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(uParam0->f_34[iVar0 /*29*/])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_127()//Position - 0x7A68
{
	if (GlobalFunc_774(2, Global_14362, 0))
	{
		MISC::CLEAR_BIT(&Global_2264, 0);
		iLocal_132 = 0;
		GlobalFunc_7017();
		Global_14371 = 1;
		Global_16806 = 0;
		Global_16805 = 0;
		Global_16807 = 0;
		func_48();
	}
}

void func_128()//Position - 0x7A9F
{
	if (iLocal_125)
	{
		if (SYSTEM::TIMERA() > 150)
		{
			iLocal_125 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			GlobalFunc_7021();
			iLocal_125 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			GlobalFunc_7020();
		}
	}
	if (iLocal_125 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_97 > 0)
			{
				iLocal_97 = (iLocal_97 - 1);
			}
			else
			{
				iLocal_97 = (iLocal_93 - 1);
			}
			GlobalFunc_7021();
			iLocal_125 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_97++;
			if (iLocal_97 == iLocal_93)
			{
				iLocal_97 = 0;
			}
			GlobalFunc_7020();
			iLocal_125 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14368, 0))
		{
			func_130();
			func_130();
			func_130();
			func_130();
			func_130();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_125 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14367, 0))
		{
			func_129();
			func_129();
			func_129();
			func_129();
			func_129();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_125 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_129()//Position - 0x7BD0
{
	if (iLocal_97 > 0)
	{
		iLocal_97 = (iLocal_97 - 1);
	}
	else
	{
		iLocal_97 = (iLocal_93 - 1);
	}
	GlobalFunc_1493(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_130()//Position - 0x7C11
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
	}
	GlobalFunc_1493(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_131()//Position - 0x7C4D
{
	iLocal_97++;
	if (iLocal_97 == iLocal_93)
	{
		iLocal_97 = 0;
		MISC::CLEAR_BIT(&Global_2263, 16);
	}
	GlobalFunc_7020();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
	uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_101 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
	if (iLocal_101 < 0)
	{
		iLocal_101 = 0;
	}
	if (Global_16723 == Global_14399[iLocal_101])
	{
		MISC::CLEAR_BIT(&Global_2263, 16);
	}
}

void func_132()//Position - 0x7CBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar39;
	struct<13> Var40;
	char* sVar53;
	struct<13> Var54;
	
	if (MISC::IS_BIT_SET(Global_2265, 6))
	{
		if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Local_330.f_2963)))
		{
			MISC::CLEAR_BIT(&Global_2265, 6);
			StringCopy(&cLocal_108, "", 16);
			Global_14393.f_1 = 3;
		}
	}
	switch (Local_330.f_2999)
	{
		case 0:
			if (MISC::IS_BIT_SET(uLocal_324, 1))
			{
				if (!Global_90014.f_1318)
				{
					MISC::CLEAR_BIT(&uLocal_324, 0);
					MISC::CLEAR_BIT(&uLocal_324, 1);
				}
				return;
			}
			if (Local_330.f_2976)
			{
				if (Local_330.f_2981)
				{
					iVar39 = 2;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, 0, -1, 0, 0, 1);
					if (Local_330.f_2982)
					{
						if (GlobalFunc_774(2, Global_14362, 0) || PAD::IS_CONTROL_PRESSED(2, 201))
						{
							Global_14393.f_1 = 3;
						}
					}
					else if (GlobalFunc_774(2, Global_14362, 0) || PAD::IS_CONTROL_PRESSED(2, 201))
					{
					}
					else
					{
						Local_330.f_2982 = 1;
					}
				}
				else
				{
					iLocal_99 = Local_330.f_2946;
					switch (Local_330.f_2937[Local_330.f_2946])
					{
						case 1:
							if (!Global_2451015.f_1)
							{
								if (!NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY() && !NETWORK::_0xB5D3453C98456528())
								{
									Local_330.f_2976 = 0;
									func_203();
									Local_330.f_2977 = 0;
									if (func_119(&Local_330))
									{
										sVar53 = PLAYER::GET_PLAYER_NAME(Local_330[Local_330.f_2936]);
									}
									else
									{
										sVar53 = GlobalFunc_217(&(Local_330.f_34[func_118(Local_330.f_2936, &Local_330) /*29*/].f_13));
									}
									func_202(sVar53);
									Local_330.f_2999 = 1;
									GlobalFunc_434(&(Local_330.f_2979));
									func_200(0);
									if (Global_68245)
									{
										if (GlobalFunc_470(1) >= Global_262145.f_139)
										{
											Var40 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
											if (GlobalFunc_218())
											{
												GlobalFunc_8416(1654961868, Global_262145.f_139, &iVar0, 1, 1);
												Global_2540096[iVar0 /*69*/].f_8.f_3 = { Var40 };
											}
											else
											{
												MONEY::NETWORK_SPENT_CALL_PLAYER(Global_262145.f_139, &Var40, 1, 1);
											}
										}
										else
										{
											Var40 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
											if (GlobalFunc_218())
											{
											}
											else
											{
												MONEY::NETWORK_SPENT_CALL_PLAYER(GlobalFunc_470(1), &Var40, 1, 1);
											}
										}
										func_49(1901, 1, -1);
									}
								}
								else if (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
								{
								}
								else if (NETWORK::_0xB5D3453C98456528())
								{
									if (!Global_2451015.f_59)
									{
										Global_2451015 = 1;
										Global_2451015.f_2 = 1;
										Global_2451015.f_59 = 1;
									}
								}
							}
							else if (Global_2451015.f_38)
							{
							}
							else
							{
								GlobalFunc_7911();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14382, 1);
								if (Global_2451015.f_1)
								{
									GlobalFunc_5589();
								}
								Global_14393.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (GlobalFunc_439(&(Global_2446554.f_282[Local_330[Local_330.f_2936] /*2*/])))
							{
								if (!GlobalFunc_5071(&(Global_2446554.f_282[Local_330[Local_330.f_2936] /*2*/]), 30000, 0))
								{
									if (GlobalFunc_7826(0, 0, 1))
									{
										func_159("CELL_MP_1009H", PLAYER::GET_PLAYER_NAME(Local_330[Local_330.f_2936]), GlobalFunc_9051(Local_330[Local_330.f_2936], -2, 0, 0), -1);
									}
									Local_330.f_2976 = 0;
									return;
								}
							}
							if (((((!GlobalFunc_5255(0) || !GlobalFunc_5255(Local_330[Local_330.f_2936])) || NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(Local_330[Local_330.f_2936])) || NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME(Local_330[Local_330.f_2936])) || NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER(Local_330[Local_330.f_2936])) || NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER(Local_330[Local_330.f_2936]))
							{
								if (GlobalFunc_7826(1, 1, 1))
								{
									func_159("CELL_MP_1009M", PLAYER::GET_PLAYER_NAME(Local_330[Local_330.f_2936]), GlobalFunc_9051(Local_330[Local_330.f_2936], -2, 0, 0), -1);
								}
								Local_330.f_2976 = 0;
								return;
							}
							Local_330.f_2976 = 0;
							Local_330.f_2999 = 2;
							iLocal_3349 = 1;
							return;
							break;
						
						case 3:
							if (!NETWORK::NETWORK_IS_ADDING_FRIEND())
							{
								if (MISC::IS_PS3_VERSION() && !NETWORK::NETWORK_IS_FRIEND(&(Local_330.f_2963)))
								{
									if (NETWORK::NETWORK_ADD_FRIEND(&(Local_330.f_2963), ""))
									{
										Local_330.f_2976 = 0;
										Global_14393.f_1 = 3;
									}
								}
								else
								{
									NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_330.f_2963));
									Local_330.f_2976 = 0;
									Global_14393.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
							{
								if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Local_330.f_2963)))
								{
									NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var4, 35, &(Local_330.f_2963));
								}
							}
							if (Var4 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!GlobalFunc_1946(Var4))
									{
										if (NETWORK::NETWORK_CLAN_JOIN(Var4))
										{
											Local_330.f_2976 = 0;
											HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREW_JOIN");
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Var4.f_1));
											HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
											Global_14393.f_1 = 3;
										}
										else
										{
											Global_14393.f_1 = 3;
											Local_330.f_2976 = 0;
											Global_14393.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_330.f_2976 = 0;
							break;
						
						case 4:
							Local_330.f_2976 = 0;
							func_116();
							NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_330.f_2963));
							break;
						
						case 7:
							if (MISC::IS_BIT_SET(Global_2422140.f_638, Local_330[Local_330.f_2936]))
							{
								MISC::CLEAR_BIT(&(Global_2422140.f_638), Local_330[Local_330.f_2936]);
							}
							else
							{
								Global_2422140.f_638 = 0;
								MISC::SET_BIT(&(Global_2422140.f_638), Local_330[Local_330.f_2936]);
							}
							func_116();
							Local_330.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_14371 == 0)
			{
				if (GlobalFunc_774(2, Global_14362, 0))
				{
					Local_330.f_2982 = 0;
					Local_330.f_2981 = 0;
					MISC::CLEAR_BIT(&Global_2264, 0);
					iLocal_114 = 0;
					GlobalFunc_7017();
					Global_14371 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
					uLocal_98 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_98))
					{
						SYSTEM::WAIT(0);
					}
					Local_330.f_2946 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_98);
					if (!func_126(&Local_330, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								GlobalFunc_164("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								GlobalFunc_164("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2451015.f_59 = 0;
								Local_330.f_2981 = 1;
								Local_330.f_2976 = 1;
								return;
								break;
						}
						Global_14393.f_1 = 3;
						return;
					}
					Global_2451015.f_59 = 0;
					Local_330.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_126(&Local_330, &iVar3))
			{
				func_200(1);
				GlobalFunc_7911();
				Local_330.f_2978 = 1;
				Local_330.f_2977 = 1;
				return;
			}
			else if (Local_330.f_2977)
			{
				if (!Local_330.f_2978)
				{
					if (!Global_2451015.f_1 || !NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
					{
						func_200(1);
						GlobalFunc_7911();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
					{
						if (GlobalFunc_774(2, Global_14363, 0))
						{
							GlobalFunc_7911();
							Local_330.f_2976 = 0;
							return;
						}
						if (GlobalFunc_319(Global_2451015.f_20))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&(Global_2451015.f_20)))
							{
								if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2451015.f_20)))
								{
									func_200(1);
									GlobalFunc_7911();
									Local_330.f_2978 = 1;
									Local_330.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_200(1);
							GlobalFunc_7911();
							Local_330.f_2978 = 1;
							Local_330.f_2977 = 1;
							return;
						}
					}
					else
					{
						GlobalFunc_7911();
						Local_330.f_2976 = 0;
						func_116();
						return;
					}
					if (!Global_2451015.f_37)
					{
						if (Global_2451015.f_33 == -1)
						{
							if (GlobalFunc_5071(&(Local_330.f_2979), 40000, 1))
							{
								func_200(1);
								GlobalFunc_7911();
								Local_330.f_2978 = 1;
								Local_330.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2451015.f_33)
							{
								case 1:
									func_156();
									func_155();
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									AUDIO::STOP_SOUND(iLocal_103);
									return;
									break;
								
								case 2:
									func_200(1);
									GlobalFunc_7911();
									Local_330.f_2978 = 1;
									return;
									break;
								
								default:
									func_200(1);
									GlobalFunc_7911();
									Local_330.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!GlobalFunc_439(&(Local_330.f_2979)))
			{
				GlobalFunc_434(&(Local_330.f_2979));
				GlobalFunc_436(&(Local_330.f_2979), 1, 0);
			}
			else
			{
				if (GlobalFunc_5071(&(Local_330.f_2979), 15000, 1))
				{
					GlobalFunc_7911();
					GlobalFunc_2011();
					GlobalFunc_2023();
					Global_14393.f_1 = 3;
					return;
				}
				if (Global_2451015.f_1 || MISC::IS_BIT_SET(Global_2264, 20))
				{
					if (GlobalFunc_774(2, Global_14363, 0))
					{
						GlobalFunc_7911();
						Global_14393.f_1 = 3;
						return;
					}
				}
				if (Global_2451015.f_1)
				{
					if (func_153(&Local_330, &(Local_330.f_2983)))
					{
						GlobalFunc_481(&(Local_330.f_2979), 1, 0);
						Local_330.f_2978 = 0;
						Local_330.f_2977 = 1;
						if (Global_68245)
						{
							GlobalFunc_6785(105, 1, -1, 1);
						}
					}
					else
					{
						func_200(1);
						GlobalFunc_7911();
						Local_330.f_2978 = 1;
						Local_330.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3349 == 1)
			{
				if (GlobalFunc_7910(&Local_3330, &(Local_3330.f_1), &(Local_3330.f_2), 0, 0, &cLocal_3333, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0))
				{
					StringCopy(&cLocal_3333, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
					Local_3330.x = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					GlobalFunc_481(&(Global_2446554.f_282[Local_330[Local_330.f_2936] /*2*/]), 0, 0);
					if (MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_444(&cLocal_3333)))
					{
					}
					else
					{
						Var54 = { GlobalFunc_318(Local_330[Local_330.f_2936]) };
						NETWORK::NETWORK_SEND_TEXT_MESSAGE(&cLocal_3333, &Var54);
						func_133("CP_TM_SENT", Local_330[Local_330.f_2936], 0, 0, 0, 1, 1, 0);
						func_49(1900, 1, -1);
					}
					Local_330.f_2999 = 0;
				}
				if (Local_3330.x == 2)
				{
					Local_3330.x = 0;
					Local_3330.f_2 = 0;
					Local_3330.f_1 = 0;
					iLocal_3349 = 0;
					Local_330.f_2999 = 0;
				}
			}
			break;
	}
}

int func_133(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x8663
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(GlobalFunc_9051(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(GlobalFunc_5073(&Var1));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2445582 = { GlobalFunc_318(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582))
			{
				iVar17 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2445512.f_22), "Leader") && Global_2445512.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2445512.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { GlobalFunc_443(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2445512, 35), &(Global_2445512.f_17), Global_2445512.f_30, iVar17, 0, Global_2445512, &Var1, Global_1317060, Global_1317061, Global_1317062);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2445512, 35), &(Global_2445512.f_17), Global_2445512.f_30, iVar17, 0, Global_2445512, Global_1317060, Global_1317061, Global_1317062);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		GlobalFunc_7675(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}




















int func_153(var uParam0, char* sParam1)//Position - 0x96CA
{
	if (Global_2451015.f_1)
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			NETWORK::NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(&(uParam0->f_2963));
			Global_2451015.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2451015.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}


void func_155()//Position - 0x9750
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 9;
		Global_15705 = 1;
		if (Global_68245)
		{
			if (!MISC::IS_PC_VERSION())
			{
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				MISC::SET_BIT(&(Global_2446554.f_1619), 15);
			}
		}
	}
}

void func_156()//Position - 0x97A2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GlobalFunc_726("CELL_300");
	GlobalFunc_726("CELL_219");
	GlobalFunc_726("CELL_219");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Global_2451015.f_37 = 1;
	MISC::CLEAR_BIT(&Global_2263, 27);
	func_56();
}



void func_159(char* sParam0, var uParam1, int iParam2, int iParam3)//Position - 0x9831
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam3);
}









































void func_200(bool bParam0)//Position - 0xA744
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_2264, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2264, 20);
	}
}


void func_202(char* sParam0)//Position - 0xA773
{
	Global_1578 = 132;
	StringCopy(&Global_15707, sParam0, 64);
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 10;
		GlobalFunc_5583();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GlobalFunc_726("CELL_300");
	GlobalFunc_726("CELL_211");
	GlobalFunc_726("CELL_211");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	MISC::SET_BIT(&Global_2263, 20);
	func_56();
	MISC::CLEAR_BIT(&Global_2263, 20);
}

void func_203()//Position - 0xA7FB
{
	NETWORK::NETWORK_SESSION_VOICE_HOST();
	Global_2451015 = 1;
	Global_2451015.f_2 = 0;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	Global_2451015.f_38 = 0;
}

void func_204()//Position - 0xA829
{
	AUDIO::STOP_SOUND(iLocal_103);
	AUDIO::RELEASE_SOUND_ID(iLocal_103);
	Local_330.f_2978 = 0;
	MISC::CLEAR_BIT(&Global_2263, 9);
	MISC::CLEAR_BIT(&Global_2263, 29);
	MISC::CLEAR_BIT(&Global_2264, 20);
	MISC::CLEAR_BIT(&Global_2264, 0);
	MISC::CLEAR_BIT(&Global_2264, 18);
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_1 = uLocal_302;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_1 = uLocal_303;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_1 = uLocal_304;
	if (Local_330.f_2999 == 1)
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_2451015.f_33 == -1)
			{
				GlobalFunc_7911();
			}
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_206()//Position - 0xA92B
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	iLocal_93 = 0;
	iLocal_132 = 0;
	iLocal_115 = 0;
	func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar149 = 0;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1 = 5000;
		GlobalFunc_9035();
		while (iVar150 < 147)
		{
			if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_1 = 3;
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_1 = 1;
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_12[Global_14393] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14393)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar150, Global_14393))
						{
							fLocal_91 = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_1);
						}
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
						{
							fLocal_92 = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (MISC::IS_BIT_SET(Global_2264, 0))
							{
								if (iVar151 == 2)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14399[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!MISC::IS_BIT_SET(Global_2264, 0))
		{
			if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_12[Global_14393] == 1)
			{
				if (iVar150 != Global_14393)
				{
					if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_24[Global_14393] == 0)
					{
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
						{
							func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 1f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
					{
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 1f, -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar149 /*29*/].f_12[Global_14393] == 1)
		{
			if (iVar149 != Global_14393)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	if (!MISC::IS_BIT_SET(Global_2264, 0))
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_14336 == 0)
			{
				func_208();
			}
		}
	}
	func_207();
}

void func_207()//Position - 0xAD97
{
	if (!Global_14393.f_1 == 10 && !Global_14393.f_1 == 9)
	{
		if (MISC::IS_BIT_SET(Global_2263, 9))
		{
			SYSTEM::WAIT(750);
		}
		if (Global_14393.f_1 > 6)
		{
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_2266 = 99;
			if (MISC::IS_BIT_SET(Global_2263, 9))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				if (Global_14381)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_104(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_14336 == 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_93 > 0)
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_104(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_104(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::SET_BIT(&Global_2263, 17);
				func_104(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_1 = uLocal_302;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_1 = uLocal_303;
	Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_1 = uLocal_304;
}

void func_208()//Position - 0xB067
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_94 = iLocal_93;
	iLocal_95 = iLocal_94;
	func_215(&Local_330);
	iVar16 = 0;
	if (Global_68245)
	{
		if (GlobalFunc_7906() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (GlobalFunc_252(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == PLAYER::PLAYER_ID())
				{
					Local_330[iVar1] = iVar0;
					func_210(PLAYER::GET_PLAYER_NAME(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (GlobalFunc_5255(0))
	{
		iVar17 = NETWORK::NETWORK_GET_FRIEND_COUNT();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
			{
				if (NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
				{
					Var3 = { GlobalFunc_2024(iVar2) };
					if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (MISC::IS_DURANGO_VERSION())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), NETWORK::_NETWORK_GET_FRIEND_NAME_FROM_INDEX(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
								}
								func_210(&(Local_330.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_330.f_2935 = (Local_330.f_33 + iVar1);
}


void func_210(var uParam0)//Position - 0xB1DE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iLocal_94));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GlobalFunc_726("CELL_MP_999");
	GlobalFunc_726("CELL_MP_999");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_94++;
	iLocal_93++;
}





void func_215(var uParam0)//Position - 0xB2B0
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = GlobalFunc_314();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0 /*29*/] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	GlobalFunc_434(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}


void func_217()//Position - 0xB37A
{
	int iVar0[148];
	int iVar149;
	int iVar150;
	int iVar151;
	
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_93 = 0;
	if (!MISC::IS_BIT_SET(Global_2264, 0))
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_14336 == 0)
			{
				func_218();
			}
		}
	}
	iLocal_96 = iLocal_93;
	iLocal_132 = 0;
	iLocal_115 = 0;
	iVar149 = iLocal_93;
	while (iVar149 < 147)
	{
		iVar150 = 0;
		iVar151 = 147;
		Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1 = 5000;
		GlobalFunc_9035();
		while (iVar150 < 147)
		{
			if (MISC::IS_BIT_SET(Global_2264, 0))
			{
				if ((iVar150 == 2 || iVar150 == 0) || iVar150 == 12)
				{
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_1 = 3;
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_1 = 1;
					Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_1 = 2;
					bLocal_90 = true;
				}
				else
				{
					bLocal_90 = false;
				}
			}
			else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_12[Global_14393] == 1)
			{
				bLocal_90 = true;
			}
			else
			{
				bLocal_90 = false;
			}
			if (bLocal_90)
			{
				if (iVar150 != Global_14393)
				{
					if (iVar0[iVar150] == 0)
					{
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar150, Global_14393))
						{
							fLocal_91 = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_91 = SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar150 /*29*/].f_1);
						}
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
						{
							fLocal_92 = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1) / 100f);
						}
						else
						{
							fLocal_92 = SYSTEM::TO_FLOAT(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_1);
						}
						if (fLocal_91 < fLocal_92)
						{
							iVar151 = iVar150;
							if (MISC::IS_BIT_SET(Global_2264, 0))
							{
								if (iVar151 == 2)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7001", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 0)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7002", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
								}
								if (iVar151 == 12)
								{
									func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, "CELL_7003", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar150++;
		}
		Global_14399[iVar149] = iVar151;
		iVar0[iVar151] = 1;
		if (!MISC::IS_BIT_SET(Global_2264, 0))
		{
			if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_12[Global_14393] == 1)
			{
				if (iVar150 != Global_14393)
				{
					if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_24[Global_14393] == 0)
					{
						if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
						{
							func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 1f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, &(Global_97[iVar151 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_19[Global_14393] == 1 || GlobalFunc_7909(iVar151, Global_14393))
					{
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 1f, -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_104(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar149), 0f, -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar151 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar149 /*29*/].f_12[Global_14393] == 1)
		{
			if (iVar149 != Global_14393)
			{
				iLocal_93++;
			}
		}
		iVar149++;
	}
	func_207();
}

void func_218()//Position - 0xB7EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_94 = iLocal_93;
	iLocal_95 = iLocal_94;
	func_215(&Local_330);
	iVar16 = 0;
	if (Global_68245)
	{
		if (GlobalFunc_7906() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (GlobalFunc_252(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == PLAYER::PLAYER_ID())
				{
					Local_330[iVar1] = iVar0;
					func_219(PLAYER::GET_PLAYER_NAME(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_330.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (GlobalFunc_5255(0))
	{
		iVar17 = NETWORK::NETWORK_GET_FRIEND_COUNT();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
			{
				if (NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
				{
					Var3 = { GlobalFunc_2024(iVar2) };
					if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_330.f_34[iVar1 /*29*/] = { Var3 };
								if (MISC::IS_DURANGO_VERSION())
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), NETWORK::_NETWORK_GET_FRIEND_NAME_FROM_INDEX(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_330.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
								}
								func_219(&(Local_330.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_330.f_2935 = (Local_330.f_33 + iVar1);
}

void func_219(var uParam0)//Position - 0xB94B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iLocal_94));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GlobalFunc_726("CELL_MP_999");
	GlobalFunc_726("CELL_MP_999");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_94++;
	iLocal_93++;
}

