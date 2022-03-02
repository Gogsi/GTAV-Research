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
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	struct<14> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 16;
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
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320[4] = { 0, 0, 0, 0 };
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_342 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_354 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<4> Local_430[32];
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	char* sLocal_562 = NULL;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_56 = 10000;
	iLocal_88 = 1;
	bLocal_90 = true;
	bLocal_92 = true;
	iLocal_97 = -1;
	bLocal_285 = true;
	bLocal_286 = true;
	iLocal_289 = -1;
	iLocal_290 = -1;
	iLocal_314 = -1;
	iLocal_317 = -1;
	if (!func_433(ScriptParam_0))
	{
		func_429();
	}
	iLocal_329[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_329[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_329[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_329[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_329[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_329[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_329[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_329[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_329[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_329[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_329[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_329[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		GlobalFunc_906();
		bLocal_73 = false;
		bLocal_75 = false;
		bLocal_78 = false;
		bLocal_81 = false;
		bLocal_83 = false;
		Global_2446554.f_1576 = 0;
		if (GlobalFunc_7790() || GlobalFunc_1277())
		{
			func_429();
		}
		if (func_412())
		{
			if (!func_411())
			{
				if (!func_410())
				{
					if (func_409())
					{
						if (!iLocal_71)
						{
							func_405();
							func_404(&Local_342, 5);
							func_403();
							iLocal_56 = 10000;
							bLocal_92 = true;
							bLocal_93 = true;
							if (MISC::IS_BIT_SET(iLocal_559, 1))
							{
								MISC::CLEAR_BIT(&iLocal_559, 1);
							}
							iLocal_71 = 1;
							iLocal_317 = -999;
						}
					}
				}
			}
			else if (!func_410())
			{
				if (!bLocal_93)
				{
					if (!GlobalFunc_439(&uLocal_270))
					{
						GlobalFunc_436(&uLocal_270, 0, 0);
					}
					else if (GlobalFunc_5071(&uLocal_270, 100, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_559, 1))
						{
							if (func_409())
							{
								func_390(&Local_342, 5, Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_36);
								iLocal_56 = 0;
								bLocal_92 = false;
								bLocal_93 = true;
								iLocal_71 = 1;
								iLocal_317 = -999;
							}
						}
					}
				}
			}
			func_321();
			func_318();
			func_305();
			func_299();
			func_197();
			func_141();
		}
		func_137();
		func_119();
		func_71();
		func_68();
		if (!iLocal_95)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_95 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x41D
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_90)
	{
	}
	else
	{
		if (iLocal_91 >= Local_430)
		{
			iLocal_91 = 0;
			MISC::CLEAR_BIT(&iLocal_559, 10);
			MISC::CLEAR_BIT(&(Local_354.f_23), 7);
			MISC::CLEAR_BIT(&iLocal_559, 11);
			MISC::CLEAR_BIT(&iLocal_559, 23);
			if (MISC::IS_BIT_SET(Local_354.f_23, 0))
			{
				MISC::SET_BIT(&(Local_354.f_23), 1);
				MISC::CLEAR_BIT(&(Local_354.f_23), 3);
			}
		}
		iVar0 = iLocal_91;
		if (Local_430[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_354[iVar1] == -1)
				{
					if (!Local_354.f_6[iVar1])
					{
						if (Local_354[iVar1] == Local_430[iVar0 /*4*/])
						{
							if (Local_354[iVar1] == Local_354.f_28)
							{
								func_67();
							}
							Local_354.f_33 = 0;
							Local_354.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (MISC::IS_BIT_SET(Local_354.f_23, 0))
		{
			if (!MISC::IS_BIT_SET(Local_354.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_430[iVar0 /*4*/].f_3 > 0 || GlobalFunc_247(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_430[iVar0 /*4*/].f_3 < 3)
						{
							MISC::SET_BIT(&(Local_354.f_23), 7);
						}
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_354.f_23, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_559, 11))
			{
				if (MISC::IS_BIT_SET(Local_430[iVar0 /*4*/].f_2, 2))
				{
					MISC::SET_BIT(&iLocal_559, 11);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_559, 21))
			{
				if (!MISC::IS_BIT_SET(iLocal_559, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (MISC::IS_BIT_SET(Local_430[iVar0 /*4*/].f_2, 3))
						{
							MISC::SET_BIT(&iLocal_559, 21);
						}
					}
				}
			}
		}
		iLocal_91++;
		if (iLocal_91 >= Local_430)
		{
			MISC::SET_BIT(&iLocal_559, 10);
			if (MISC::IS_BIT_SET(Local_354.f_23, 7) || MISC::IS_BIT_SET(iLocal_559, 23))
			{
				MISC::CLEAR_BIT(&(Local_354.f_23), 1);
			}
			if (MISC::IS_BIT_SET(iLocal_559, 11))
			{
				MISC::SET_BIT(&(Local_354.f_23), 3);
			}
			if (MISC::IS_BIT_SET(iLocal_559, 21))
			{
				MISC::SET_BIT(&(Local_354.f_23), 6);
			}
		}
	}
	if (func_65())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_354.f_29) > 180000)
		{
			func_64();
		}
	}
	switch (Local_354.f_20)
	{
		case 0:
			func_61();
			Local_354.f_32++;
			Local_354.f_20 = 1;
			func_60();
			break;
		
		case 1:
			if (func_59())
			{
				uLocal_313 = NETWORK::GET_NETWORK_TIME();
				Local_354.f_20 = 2;
			}
			else if (Local_354.f_28 == -1)
			{
				func_67();
			}
			break;
		
		case 2:
			if (!Local_354.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_313) > iLocal_56)
			{
				Local_354.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()//Position - 0x6E2
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_354.f_26)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Local_354.f_23, 0))
			{
				if (bLocal_285)
				{
					if (bLocal_286)
					{
						if (Global_2446554.f_1549)
						{
							MISC::CLEAR_BIT(&(Local_354.f_23), 2);
							MISC::CLEAR_BIT(&(Local_354.f_23), 6);
							MISC::CLEAR_BIT(&iLocal_559, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_354.f_34 = 0;
							MISC::SET_BIT(&(Local_354.f_23), 0);
							Global_2446554.f_1549 = 0;
						}
					}
					else if (Local_354.f_27 == -15)
					{
						MISC::CLEAR_BIT(&(Local_354.f_23), 2);
						MISC::CLEAR_BIT(&(Local_354.f_23), 6);
						MISC::CLEAR_BIT(&iLocal_559, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_354.f_34 = 0;
						iVar4 = GlobalFunc_7719();
						GlobalFunc_7641(&(Local_354.f_27), GlobalFunc_206(iVar4), GlobalFunc_207(iVar4), GlobalFunc_208(iVar4), GlobalFunc_209(iVar4), GlobalFunc_210(iVar4), GlobalFunc_4975(iVar4));
						GlobalFunc_8328(&(Local_354.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
					}
					else if (!GlobalFunc_7810(6))
					{
						if (!GlobalFunc_439(&uLocal_302))
						{
							GlobalFunc_436(&uLocal_302, 0, 0);
						}
						else if (GlobalFunc_5071(&uLocal_302, 10000, 0))
						{
							GlobalFunc_434(&uLocal_302);
							if (GlobalFunc_8448(Local_354.f_27))
							{
								MISC::SET_BIT(&(Local_354.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_354.f_67 == 0)
			{
				if (GlobalFunc_6842(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_354.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_354.f_24);
					}
					Local_354.f_24 = -1;
					iLocal_288 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					iVar5 = func_28();
					if (iVar5 != 0)
					{
						Local_354.f_67 = iVar5;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_354.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (GlobalFunc_356(Local_354.f_67))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_354.f_22))
					{
						if (func_19(&Var0, &uVar3))
						{
							if (GlobalFunc_901(&(Local_354.f_22), Local_354.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset"))
									{
										iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar6, 5);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset", iVar6);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset"))
									{
										iVar7 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar7, 10);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_354.f_22), "MPBitset", iVar7);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_354.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								MISC::SET_BIT(&(Local_354.f_23), 0);
								MISC::CLEAR_BIT(&(Local_354.f_23), 2);
								MISC::CLEAR_BIT(&(Local_354.f_23), 4);
								MISC::CLEAR_BIT(&(Local_354.f_23), 3);
								MISC::CLEAR_BIT(&iLocal_559, 11);
								MISC::SET_BIT(&iLocal_559, 23);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_354.f_67);
								Local_354.f_26 = 1;
								GlobalFunc_434(&(Local_354.f_30));
								GlobalFunc_436(&(Local_354.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_354.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_354.f_22), 1);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 1);
								NETWORK::_0x3FA36981311FA4FF(Local_354.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Local_354.f_23, 2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_354.f_22), 0))
					{
						Local_57.f_2 = 38;
						GlobalFunc_1290(Local_57, GlobalFunc_5335(1));
						MISC::SET_BIT(&(Local_354.f_23), 2);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_559, 3) || (MISC::IS_BIT_SET(iLocal_559, 10) && MISC::IS_BIT_SET(Local_354.f_23, 1)))
			{
				if (!MISC::IS_BIT_SET(iLocal_559, 3))
				{
					if (!MISC::IS_BIT_SET(Local_354.f_23, 2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_354.f_22), 0))
							{
								Local_57.f_2 = 38;
								GlobalFunc_1290(Local_57, GlobalFunc_5335(1));
								MISC::SET_BIT(&(Local_354.f_23), 2);
							}
						}
					}
				}
				Local_354.f_26 = 2;
			}
			if (func_15(NETWORK::NET_TO_VEH(Local_354.f_22)))
			{
				Local_354.f_26 = 2;
				Local_57.f_2 = 39;
				GlobalFunc_1290(Local_57, GlobalFunc_5335(1));
			}
			if (!MISC::IS_BIT_SET(Local_354.f_23, 4))
			{
				if (GlobalFunc_5071(&(Local_354.f_30), 360000, 0))
				{
					MISC::SET_BIT(&(Local_354.f_23), 4);
					GlobalFunc_434(&(Local_354.f_30));
					GlobalFunc_436(&(Local_354.f_30), 0, 0);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_559, 10))
			{
				if (!MISC::IS_BIT_SET(Local_354.f_23, 3))
				{
					if (GlobalFunc_439(&(Local_354.f_30)))
					{
						if (GlobalFunc_5071(&(Local_354.f_30), 120000, 0))
						{
							Local_354.f_26 = 2;
							Local_57.f_2 = 39;
							GlobalFunc_1290(Local_57, GlobalFunc_5335(1));
						}
					}
					else
					{
						GlobalFunc_436(&(Local_354.f_30), 0, 0);
					}
				}
				else if (GlobalFunc_439(&(Local_354.f_30)))
				{
					GlobalFunc_434(&(Local_354.f_30));
				}
			}
			if (MISC::IS_BIT_SET(Local_354.f_23, 6))
			{
				if (!MISC::IS_BIT_SET(iLocal_559, 3))
				{
					if (Local_354.f_26 == 1)
					{
						Local_354.f_26 = 2;
					}
				}
			}
			if (GlobalFunc_7810(6))
			{
				if (Local_354.f_26 == 1)
				{
					Local_354.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
			{
				if (GlobalFunc_918(Local_354.f_22))
				{
					GlobalFunc_909(&(Local_354.f_22));
					Local_354.f_26 = 3;
				}
			}
			else
			{
				Local_354.f_26 = 3;
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(iLocal_559, 10))
			{
				if (MISC::IS_BIT_SET(Local_354.f_23, 1))
				{
					Local_354.f_26 = 0;
					MISC::CLEAR_BIT(&(Local_354.f_23), 0);
					Local_354.f_27 = -15;
					if (Local_354.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 0);
					}
					Local_354.f_67 = 0;
					if (bLocal_286)
					{
						func_7(GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()//Position - 0xCAA
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_354.f_69)
		{
			case 0:
				if (MISC::IS_BIT_SET(Local_354.f_23, 8))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_354.f_22)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_354.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (GlobalFunc_5233(Local_354.f_22))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_354.f_22))
										{
											ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_354.f_22), true, 0);
											VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_354.f_22), 1);
											ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_354.f_22), false);
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_354.f_22);
										}
									}
								}
							}
						}
					}
				}
				break;
			}
	}
}



int func_6()//Position - 0xDDD
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_354.f_22), -1);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0xE18
{
	struct<3> Var0;
	
	Var0.x = 363;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}








int func_15(int iParam0)//Position - 0x11D2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}




int func_19(var uParam0, var uParam1)//Position - 0x133F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!GlobalFunc_100(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	switch (iLocal_288)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!GlobalFunc_100(Var0, 0f, 0f, 0f))
	{
		if (iLocal_288 < 10)
		{
			if (Local_354.f_24 == -1)
			{
				Local_354.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var3);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_354.f_24))
			{
				if (NETWORK::_0x4DF7CFFF471A7FB1(Local_354.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_354.f_24))
					{
						if (!GlobalFunc_7665(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_354.f_24);
							Local_354.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_288++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_354.f_24);
							Local_354.f_24 = -1;
						}
					}
					else
					{
						iLocal_288++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_354.f_24);
						Local_354.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_288 = 0;
		}
	}
	return 0;
}









int func_28()//Position - 0x19E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2307 != 0)
	{
		iVar1 = Global_262145.f_2307;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			if (STREAMING::IS_MODEL_A_VEHICLE(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_30(&Local_354);
		iVar0 = func_29(iVar2);
	}
	return iVar0;
}

int func_29(int iParam0)//Position - 0x1A30
{
	switch (iParam0)
	{
		case 0:
			return joaat("sentinel");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("dominator");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("surge");
		
		case 5:
			return joaat("jackal");
		
		case 6:
			return joaat("ztype");
		
		case 7:
			return joaat("tailgater");
		
		case 8:
			return joaat("landstalker");
		
		case 9:
			return joaat("penumbra");
		
		case 10:
			return joaat("f620");
		
		case 11:
			return joaat("fq2");
		
		case 12:
			return joaat("patriot");
		
		case 13:
			return joaat("habanero");
		
		case 14:
			return joaat("prairie");
		
		case 15:
			return joaat("fusilade");
		
		case 16:
			return joaat("bjxl");
		
		case 17:
			return joaat("gresley");
		
		case 18:
			return joaat("buccaneer");
		
		case 19:
			return joaat("daemon");
		
		case 20:
			return joaat("bagger");
		
		default:
	}
	return 0;
}

int func_30(var uParam0)//Position - 0x1B66
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}





























int func_59()//Position - 0x24F8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_354.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_60()//Position - 0x2524
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_354.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_354.f_35[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_BIT(&(Local_354.f_23), 5);
	}
}

void func_61()//Position - 0x2561
{
	int iVar0;
	
	func_404(&Local_354, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_354.f_12[iVar0] = func_62();
		iVar0++;
	}
	Local_354.f_33 = 1;
}

int func_62()//Position - 0x2596
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	while (func_63(iVar0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x25BE
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_354.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_64()//Position - 0x25F3
{
	int iVar0;
	
	iVar0 = func_30(&Local_354);
	if (iVar0 != Local_354.f_28)
	{
		Local_354.f_28 = iVar0;
		Local_354.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_65()//Position - 0x261E
{
	if (Local_354.f_20 > 0)
	{
		if (Local_354[0] != Local_354[1])
		{
			return 1;
		}
	}
	return 0;
}


void func_67()//Position - 0x265B
{
	Local_354.f_29 = 0;
}

void func_68()//Position - 0x2669
{
	int iVar0;
	
	if (func_65())
	{
		if (Global_2446554.f_4220 == 0 || MISC::IS_BIT_SET(Global_2446554.f_4221, 0))
		{
			if (!GlobalFunc_439(&uLocal_308) || GlobalFunc_5071(&uLocal_308, 2000, 0))
			{
				iVar0 = func_30(&Local_342);
				if (iVar0 > -1)
				{
					Global_2446554.f_4220 = func_29(iVar0);
					GlobalFunc_434(&uLocal_306);
					GlobalFunc_436(&uLocal_306, 0, 0);
					if (MISC::IS_BIT_SET(Global_2446554.f_4221, 0))
					{
						MISC::CLEAR_BIT(&(Global_2446554.f_4221), 0);
					}
				}
				else
				{
					GlobalFunc_434(&uLocal_308);
					GlobalFunc_436(&uLocal_308, 0, 0);
				}
			}
		}
		else if (Global_2446554.f_4220 != 0)
		{
			if (GlobalFunc_5071(&uLocal_306, 20000, 0))
			{
				if (!func_69(&Local_342, Global_2446554.f_4220))
				{
					Global_2446554.f_4220 = 0;
				}
				GlobalFunc_434(&uLocal_306);
				GlobalFunc_436(&uLocal_306, 0, 0);
			}
		}
	}
}

int func_69(var uParam0, int iParam1)//Position - 0x2752
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x27A4
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("dominator"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("surge"):
			return 4;
		
		case joaat("jackal"):
			return 5;
		
		case joaat("ztype"):
			return 6;
		
		case joaat("tailgater"):
			return 7;
		
		case joaat("landstalker"):
			return 8;
		
		case joaat("penumbra"):
			return 9;
		
		case joaat("f620"):
			return 10;
		
		case joaat("fq2"):
			return 11;
		
		case joaat("patriot"):
			return 12;
		
		case joaat("habanero"):
			return 13;
		
		case joaat("prairie"):
			return 14;
		
		case joaat("fusilade"):
			return 15;
		
		case joaat("bjxl"):
			return 16;
		
		case joaat("gresley"):
			return 17;
		
		case joaat("buccaneer"):
			return 18;
		
		case joaat("daemon"):
			return 19;
		
		case joaat("bagger"):
			return 20;
		
		default:
	}
	return -1;
}

void func_71()//Position - 0x2893
{
	int iVar0;
	
	if (((((bLocal_77 || bLocal_78) || bLocal_79) || bLocal_81) || bLocal_80) || bLocal_82)
	{
		if (((Global_2446554.f_26.f_40 || GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) || GlobalFunc_5033(PLAYER::PLAYER_ID())) || !GlobalFunc_5085())
		{
			bLocal_77 = false;
			bLocal_79 = false;
			bLocal_78 = false;
			bLocal_81 = false;
			bLocal_80 = false;
			GlobalFunc_8420();
		}
	}
	if ((func_111("FM_CTUT_RSP") || func_111("FM_CTUT_REP")) || func_111("FM_CTUT_LLS"))
	{
		if (!GlobalFunc_160())
		{
			GlobalFunc_8420();
		}
	}
	if (bLocal_82)
	{
		if (!func_111("FM_IHELP_LCP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_93())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_92())
						{
							GlobalFunc_8450("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_IHELP_LCP"))
		{
			GlobalFunc_8449("FM_IHELP_LCP");
		}
	}
	if (bLocal_77)
	{
		if (!func_111("FM_CTUT_MOD"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_93())
				{
					if (MISC::IS_BIT_SET(iLocal_312, 2))
					{
						if (func_92())
						{
							GlobalFunc_8450("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_MOD"))
		{
			GlobalFunc_8449("FM_CTUT_MOD");
		}
	}
	if (bLocal_79)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
						{
							if (func_92())
							{
								if (GlobalFunc_160())
								{
									GlobalFunc_8450("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_RSP"))
		{
			GlobalFunc_8449("FM_CTUT_RSP");
		}
	}
	if (bLocal_80)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
						{
							if (func_92())
							{
								if (GlobalFunc_160())
								{
									GlobalFunc_8450("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_REP"))
		{
			GlobalFunc_8449("FM_CTUT_REP");
		}
	}
	if (bLocal_81)
	{
		if (!func_111("FM_CTUT_LLS"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_93() || func_72())
				{
					if (func_92())
					{
						if (GlobalFunc_160())
						{
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_LLS"))
		{
			GlobalFunc_8449("FM_CTUT_LLS");
		}
	}
	if (bLocal_78)
	{
		if (!func_111("FM_IMP_SIM"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_93() || func_72())
				{
					if (MISC::IS_BIT_SET(iLocal_312, 3))
					{
						if (!iLocal_84)
						{
							if (func_92())
							{
								GlobalFunc_8450("FM_IMP_SIM", 0);
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iLocal_327 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (iVar0 != iLocal_327)
								{
									iLocal_84 = 0;
									GlobalFunc_434(&uLocal_310);
								}
							}
						}
					}
				}
			}
		}
		else if (!GlobalFunc_439(&uLocal_310))
		{
			GlobalFunc_436(&uLocal_310, 0, 0);
		}
		else if (GlobalFunc_5071(&uLocal_310, 20000, 0))
		{
			GlobalFunc_8420();
			iLocal_84 = 1;
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_559, 18))
	{
		if (func_111("FM_IMP_SIM"))
		{
			GlobalFunc_8449("FM_IMP_SIM");
		}
	}
}

bool func_72()//Position - 0x2C1C
{
	return ((((GlobalFunc_8423(39) || GlobalFunc_8423(40)) || GlobalFunc_8423(41)) || GlobalFunc_8423(42)) || GlobalFunc_8423(43));
}




















bool func_92()//Position - 0x33AD
{
	bool bVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22)))
				{
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_560, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_560, 1))
		{
			bVar0 = true;
		}
		else if (!MISC::IS_BIT_SET(iLocal_560, 2))
		{
			bVar0 = true;
		}
		else if (!MISC::IS_BIT_SET(iLocal_560, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			MISC::SET_BIT(&iLocal_560, 0);
		}
	}
	return bVar0;
}

int func_93()//Position - 0x343C
{
	if (((((((((((((((((!GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_153(8, -1)) || GlobalFunc_153(15, -1)) || GlobalFunc_1305()) || GlobalFunc_153(3, -1)) || GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) || GlobalFunc_895()) || GlobalFunc_160()) || GlobalFunc_331()) || GlobalFunc_1304()) || GlobalFunc_5428()) || GlobalFunc_111()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || GlobalFunc_1299() > 0) || !GlobalFunc_5085()) || GlobalFunc_7832())
	{
		return 0;
	}
	return 1;
}


















int func_111(char* sParam0)//Position - 0x3771
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!GlobalFunc_1296())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return GlobalFunc_6943(sParam0);
}








void func_119()//Position - 0x3889
{
	if (bLocal_75)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_1683601))
		{
			Global_1683601 = HUD::ADD_BLIP_FOR_COORD(Global_1683602);
			HUD::SET_BLIP_SPRITE(Global_1683601, 293);
			HUD::SET_BLIP_SCALE(Global_1683601, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1683601, 0);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1683601, "IMPEX_BLIP_FM");
			if (func_136())
			{
				HUD::SET_BLIP_FLASHES(Global_1683601, 1);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_1683601))
	{
		HUD::REMOVE_BLIP(&Global_1683601);
		if (bLocal_284)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_131(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_315, 0, 500, 1, 0))
					{
						GlobalFunc_159("IMPEX_HIPR_DAM", -1);
					}
				}
			}
		}
	}
	if (bLocal_76)
	{
		if (iLocal_97 == -1)
		{
			iLocal_97 = func_126(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, -1);
			if (iLocal_97 != -1)
			{
				func_120(iLocal_97, 1);
			}
		}
	}
	else if (iLocal_97 != -1)
	{
		func_120(iLocal_97, 0);
		iLocal_97 = -1;
	}
}

void func_120(int iParam0, bool bParam1)//Position - 0x397D
{
	switch (iParam0)
	{
		case 39:
			func_121(39, bParam1);
			break;
		
		case 40:
			func_121(40, bParam1);
			break;
		
		case 41:
			func_121(41, bParam1);
			break;
		
		case 42:
			func_121(42, bParam1);
			break;
		
		case 43:
			func_121(43, bParam1);
			break;
		
		default:
			break;
	}
}

void func_121(int iParam0, bool bParam1)//Position - 0x39E4
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 8, 0))
		{
			GlobalFunc_7834(iParam0, 8, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7782(iParam0, 8, 0))
	{
		GlobalFunc_7833(iParam0, 8, 0);
		GlobalFunc_1293(iParam0);
	}
}





int func_126(struct<3> Param0, int iParam3, int iParam4)//Position - 0x3B40
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == GlobalFunc_330(iVar0))
		{
			iVar4 = iVar0;
			if (func_128(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, GlobalFunc_546(iVar0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}


bool func_128(int iParam0)//Position - 0x4093
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_90014.f_198[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_90014.f_198[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_90014.f_198[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_90014.f_198[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_90014.f_198[43]);
			break;
	}
	return bVar0;
}



int func_131(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x4391
{
	if (!GlobalFunc_439(uParam2))
	{
		GlobalFunc_436(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_132(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)//Position - 0x43C9
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!GlobalFunc_439(uParam3))
	{
		GlobalFunc_436(uParam3, 0, 0);
	}
	GlobalFunc_1440(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (func_133(iParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							uVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
						{
							uVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(uVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	GlobalFunc_434(uParam3);
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x49CB
{
	if (iParam1 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), GlobalFunc_1439(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}



int func_136()//Position - 0x501E
{
	int iVar0;
	int iVar1;
	
	iVar1 = GlobalFunc_6872(1187, -1, 0);
	if (!MISC::IS_BIT_SET(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!MISC::IS_BIT_SET(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_137()//Position - 0x5052
{
	if (bLocal_73)
	{
		if (!iLocal_74)
		{
			func_139(1215605247, 1, 0);
			func_138(1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74)
	{
		func_139(1215605247, 0, 0);
		func_138(0);
		iLocal_74 = 0;
	}
}

void func_138(bool bParam0)//Position - 0x5093
{
	if (Global_2446554.f_4353 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2446554.f_4353 = bParam0;
	}
}

void func_139(int iParam0, bool bParam1, bool bParam2)//Position - 0x50B8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_4332, func_140(iParam0)))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_2446554.f_4332.f_1), func_140(iParam0));
			}
			MISC::SET_BIT(&(Global_2446554.f_4332), func_140(iParam0));
		}
	}
	else if (MISC::IS_BIT_SET(Global_2446554.f_4332, func_140(iParam0)))
	{
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2446554.f_4332.f_1), func_140(iParam0));
		}
		MISC::CLEAR_BIT(&(Global_2446554.f_4332), func_140(iParam0));
	}
}

int func_140(int iParam0)//Position - 0x514E
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_141()//Position - 0x51AC
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_354.f_23, 0))
	{
		if (iLocal_318 >= 32)
		{
			MISC::CLEAR_BIT(&iLocal_559, 5);
			iLocal_318 = 0;
			iLocal_290 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_318)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_318));
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (GlobalFunc_252(iVar0, 0, 1))
			{
				if (!MISC::IS_BIT_SET(iLocal_559, 3))
				{
					if (MISC::IS_BIT_SET(Local_430[iLocal_318 /*4*/].f_2, 1))
					{
						MISC::SET_BIT(&iLocal_559, 3);
					}
				}
				if (iLocal_290 == -1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
					{
						if (GlobalFunc_5233(Local_354.f_22))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_354.f_22)))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_354.f_22), -1) == iVar1)
									{
										iLocal_290 = iLocal_318;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_318++;
		if (iLocal_318 >= 32)
		{
			MISC::SET_BIT(&iLocal_559, 5);
		}
		func_195();
		if (!MISC::IS_BIT_SET(iLocal_559, 3))
		{
			if (!MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_193())
					{
						MISC::SET_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_287 != Local_354.f_34)
	{
		if (Local_354.f_34 == 0)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
			{
				iLocal_287 = Local_354.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_287);
			}
		}
		else
		{
			iLocal_287 = Local_354.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_287);
		}
	}
	if (MISC::IS_BIT_SET(Local_354.f_23, 0))
	{
		switch (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2446554.f_1548)
				{
				}
				if (MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					MISC::CLEAR_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (MISC::IS_BIT_SET(iLocal_559, 21))
				{
					MISC::CLEAR_BIT(&iLocal_559, 21);
				}
				if (MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
				}
				if (((!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && !GlobalFunc_895()) && !GlobalFunc_1341(PLAYER::PLAYER_ID(), 1)) || GlobalFunc_247(PLAYER::PLAYER_ID(), 6))
				{
					if (MISC::IS_BIT_SET(iLocal_559, 3))
					{
						MISC::CLEAR_BIT(&iLocal_559, 3);
					}
					if (MISC::IS_BIT_SET(iLocal_559, 19))
					{
						MISC::CLEAR_BIT(&iLocal_559, 19);
					}
					if (MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						MISC::CLEAR_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_289 != -1)
					{
						iLocal_289 = -1;
					}
					if (MISC::IS_BIT_SET(Local_354.f_23, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_559, 16))
						{
							MISC::SET_BIT(&iLocal_559, 16);
							GlobalFunc_461(6, 1);
							MISC::SET_BIT(&iLocal_559, 7);
							Global_2446554.f_1547 = 1;
							Global_2446554.f_1548 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
							{
								if (MISC::IS_BIT_SET(iLocal_559, 1) || func_410())
								{
									if (func_190())
									{
										if (Local_354.f_67 != 0)
										{
											VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 1);
										}
										Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
										Global_1683610 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_354.f_22));
										if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_354.f_22))))
										{
											HUD::SET_BLIP_SPRITE(Global_1683610, 348);
											GlobalFunc_159("IMPEX_HIPB_INT", -1);
										}
										else
										{
											HUD::SET_BLIP_SPRITE(Global_1683610, 225);
											GlobalFunc_159("IMPEX_HIPR_INT", -1);
										}
										HUD::SET_BLIP_COLOUR(Global_1683610, 2);
										HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1683610, "IMPEX_HIPR_BLP");
										GlobalFunc_461(6, 1);
										MISC::SET_BIT(&iLocal_559, 7);
										Global_2446554.f_1547 = 1;
									}
								}
							}
						}
					}
				}
				else if (!Global_2446554.f_1548)
				{
					Global_2446554.f_1548 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_354.f_22), 0))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22)))
							{
								func_189(1);
								if (GlobalFunc_896())
								{
									GlobalFunc_8415(0);
								}
								if (HUD::DOES_BLIP_EXIST(Global_1683610))
								{
									HUD::REMOVE_BLIP(&Global_1683610);
								}
							}
							else
							{
								func_189(0);
								if (!func_182(NETWORK::NET_TO_VEH(Local_354.f_22), 0))
								{
									if (!HUD::DOES_BLIP_EXIST(Global_1683610))
									{
										if (!iLocal_96)
										{
											func_181();
										}
									}
								}
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_559, 19))
						{
							if (GlobalFunc_7826(0, 1, 1))
							{
								if (func_175())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22)))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_354.f_22), 1)) < 2500f)
										{
											GlobalFunc_159("FM_IMP_JAC", -1);
											MISC::SET_BIT(&iLocal_559, 19);
										}
									}
								}
							}
						}
						if (func_174())
						{
						}
						func_173();
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_1683610))
						{
							HUD::REMOVE_BLIP(&Global_1683610);
						}
						GlobalFunc_461(6, 0);
						MISC::CLEAR_BIT(&iLocal_559, 7);
						Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_354.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 0);
					}
					if (HUD::DOES_BLIP_EXIST(Global_1683610))
					{
						HUD::REMOVE_BLIP(&Global_1683610);
					}
					GlobalFunc_461(6, 0);
					MISC::CLEAR_BIT(&iLocal_559, 7);
					Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (MISC::IS_BIT_SET(iLocal_559, 3))
				{
					GlobalFunc_461(6, 0);
					MISC::CLEAR_BIT(&iLocal_559, 7);
					if (HUD::DOES_BLIP_EXIST(Global_1683610))
					{
						HUD::REMOVE_BLIP(&Global_1683610);
					}
					Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_354.f_26 == 3)
				{
					if (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_354.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 0);
						}
						if (HUD::DOES_BLIP_EXIST(Global_1683610))
						{
							HUD::REMOVE_BLIP(&Global_1683610);
						}
						if (MISC::IS_BIT_SET(iLocal_559, 16))
						{
							MISC::CLEAR_BIT(&iLocal_559, 16);
						}
						GlobalFunc_461(6, 0);
						MISC::CLEAR_BIT(&iLocal_559, 7);
						Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_189(0);
				break;
		}
		if (func_170())
		{
			if (GlobalFunc_74("IMPEX_HIPR_INT"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (HUD::DOES_BLIP_EXIST(Global_1683610))
			{
				HUD::REMOVE_BLIP(&Global_1683610);
			}
			if (Local_354.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 0);
			}
			Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			GlobalFunc_461(6, 0);
			MISC::CLEAR_BIT(&iLocal_559, 7);
			if (MISC::IS_BIT_SET(iLocal_559, 16))
			{
				MISC::CLEAR_BIT(&iLocal_559, 16);
			}
			func_189(0);
		}
		func_145();
		if (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_142();
		}
	}
	else
	{
		if (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_354.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_354.f_67, 0);
			}
			Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (MISC::IS_BIT_SET(iLocal_559, 21))
		{
			MISC::CLEAR_BIT(&iLocal_559, 21);
		}
		if (Global_2446554.f_1547)
		{
			if (!GlobalFunc_439(&uLocal_300))
			{
				GlobalFunc_436(&uLocal_300, 0, 0);
			}
			else if (GlobalFunc_5071(&uLocal_300, 5000, 0))
			{
				GlobalFunc_434(&uLocal_300);
				Global_2446554.f_1547 = 0;
			}
		}
		if (MISC::IS_BIT_SET(iLocal_559, 16))
		{
			if (Local_354.f_34 == 0)
			{
				MISC::CLEAR_BIT(&iLocal_559, 16);
			}
		}
	}
}

void func_142()//Position - 0x58D1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_290 > -1)
	{
		if (iLocal_290 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290));
				bVar1 = true;
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22), 0))
				{
					if (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_143(NETWORK::NET_TO_VEH(Local_354.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_143(int iParam0, int iParam1, int iParam2)//Position - 0x5986
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_144(iParam0) == 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
				{
					if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
					{
						GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
						GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, uVar0, uVar1, uVar2, 190);
						GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_144(int iParam0)//Position - 0x5A01
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) == 0 && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_145()//Position - 0x5A3B
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_559, 5))
	{
		if (iLocal_289 != iLocal_290)
		{
			if (iLocal_290 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!GlobalFunc_1341(PLAYER::PLAYER_ID(), 1))
						{
							GlobalFunc_9894("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!MISC::IS_BIT_SET(Local_354.f_23, 8))
						{
							MISC::SET_BIT(&(Local_354.f_23), 8);
						}
					}
				}
			}
			iLocal_289 = iLocal_290;
		}
	}
}

























int func_170()//Position - 0x63AC
{
	if ((Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && GlobalFunc_247(PLAYER::PLAYER_ID(), 6)))
	{
		if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895())
		{
			if (!GlobalFunc_5361(PLAYER::PLAYER_ID(), 5) && !GlobalFunc_5361(PLAYER::PLAYER_ID(), 32))
			{
				return 1;
			}
			else if (!iLocal_96)
			{
				if (HUD::DOES_BLIP_EXIST(Global_1683610))
				{
					HUD::REMOVE_BLIP(&Global_1683610);
				}
				iLocal_96 = 1;
			}
		}
		else if (iLocal_96)
		{
			func_181();
			iLocal_96 = 0;
		}
		if (Local_354.f_26 == 3)
		{
			if (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && GlobalFunc_247(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}



void func_173()//Position - 0x64E6
{
	if (HUD::DOES_BLIP_EXIST(Global_1683610))
	{
		if (!iLocal_85)
		{
			if (GlobalFunc_1341(PLAYER::PLAYER_ID(), 1))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1683610, 1);
				iLocal_85 = 1;
			}
		}
		else if (!GlobalFunc_1341(PLAYER::PLAYER_ID(), 1))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1683610, 0);
			iLocal_85 = 0;
		}
	}
}

int func_174()//Position - 0x6533
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_354.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_354.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_354.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_354.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_354.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_354.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (GlobalFunc_918(Local_354.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_354.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_354.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_175()//Position - 0x6604
{
	int iVar0;
	int iVar1;
	
	if (iLocal_290 == -1 && MISC::IS_BIT_SET(iLocal_559, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22)))
				{
					if (GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_290 >= 0)
			{
				if (iLocal_290 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_290));
						if (GlobalFunc_252(iVar0, 1, 1))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_354.f_22)))
							{
								if (GlobalFunc_1533(iVar1, NETWORK::NET_TO_VEH(Local_354.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}






void func_181()//Position - 0x683B
{
	Global_1683610 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_354.f_22));
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_354.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1683610, 348);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1683610, 225);
	}
	HUD::SET_BLIP_COLOUR(Global_1683610, 2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1683610, "IMPEX_HIPR_BLP");
}

int func_182(int iParam0, int iParam1)//Position - 0x6895
{
	if (func_131(iParam0, 1215605247, &uLocal_315, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}







void func_189(int iParam0)//Position - 0x6AA9
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_4397, 27))
		{
			MISC::SET_BIT(&(Global_2446554.f_4397), 27);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2446554.f_4397, 27))
	{
		MISC::CLEAR_BIT(&(Global_2446554.f_4397), 27);
	}
}

int func_190()//Position - 0x6AF5
{
	if (!GlobalFunc_7826(0, 1, 1))
	{
		return 0;
	}
	return 1;
}



int func_193()//Position - 0x6BAC
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (!func_175())
			{
				if (func_194(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_354.f_22), 1), 1215605247, 18))
				{
					if (func_182(NETWORK::NET_TO_VEH(Local_354.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_194(struct<3> Param0, int iParam3, int iParam4)//Position - 0x6C06
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, GlobalFunc_1439(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_195()//Position - 0x6C29
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
	{
		if (GlobalFunc_5233(Local_354.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22), 0))
				{
					if (!MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22), 1) < 180f)
				{
					if (!MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (MISC::IS_BIT_SET(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					MISC::CLEAR_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}


void func_197()//Position - 0x6D52
{
	int iVar0;
	
	if (iLocal_71)
	{
		func_296();
		if (!MISC::IS_BIT_SET(iLocal_559, 1))
		{
			if (Global_2446554.f_1572 > 0)
			{
				if (Global_2446554.f_1575 == 0)
				{
					Global_2446554.f_1575 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2446554.f_1575) > iLocal_56)
				{
					if (!GlobalFunc_111())
					{
						if (func_65())
						{
							if (func_190())
							{
								if (!func_295())
								{
									if (!GlobalFunc_116(0))
									{
										Global_16797 = 0;
										iVar0 = GlobalFunc_6872(1187, -1, 0);
										if (!MISC::IS_BIT_SET(iVar0, 0))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2446554.f_1575) > 20000)
											{
												if (func_293(18, "CELL_CLTEST6", 2, "NULL", Global_2446554.f_1572, "TestSender1", 4, 0, 1, 0, 0, bLocal_92, 0, 0, 0, 0, 0))
												{
													MISC::SET_BIT(&iVar0, 0);
													GlobalFunc_6720(1187, iVar0, -1, 1);
													MISC::SET_BIT(&iLocal_559, 1);
													GlobalFunc_5089(0f, 0f, 0f, GlobalFunc_480(19), "");
													Global_2446554.f_1574 = 1;
													iLocal_71 = 0;
												}
											}
										}
										else if (func_293(18, "CELL_CLTEST1", 2, "NULL", Global_2446554.f_1572, "TestSender1", 4, 0, 1, 0, 0, bLocal_92, 0, 0, 0, 0, 0))
										{
											GlobalFunc_5089(0f, 0f, 0f, GlobalFunc_480(19), "");
											MISC::SET_BIT(&iLocal_559, 1);
											Global_2446554.f_1574 = 1;
											iLocal_71 = 0;
										}
									}
								}
								else
								{
									Global_2446554.f_1575 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_559, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_312, 5))
		{
			if (func_190())
			{
				if (bLocal_92)
				{
					GlobalFunc_159("IMPEX_HELP_LNCH", -1);
				}
				MISC::SET_BIT(&iLocal_312, 5);
				GlobalFunc_436(&uLocal_298, 0, 0);
			}
		}
	}
	if (iLocal_94)
	{
		if (func_409())
		{
			if (!GlobalFunc_439(&uLocal_102))
			{
				GlobalFunc_436(&uLocal_102, 0, 0);
			}
			else if (GlobalFunc_5071(&uLocal_102, 10000, 0))
			{
				if (func_198(18, "CELL_IMPT", 0, 0))
				{
					iLocal_94 = 0;
					GlobalFunc_434(&uLocal_102);
				}
			}
		}
	}
}

bool func_198(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x6F3C
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_199(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_199(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x6F65
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_200(&uVar0, iParam0, GlobalFunc_1552(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_200(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x6F9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = GlobalFunc_1515(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (GlobalFunc_7815(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!GlobalFunc_6929(iParam6))
	{
		return 0;
	}
	if (GlobalFunc_6928(iVar0, iVar1, iVar2))
	{
		if (GlobalFunc_1510())
		{
			return 0;
		}
		GlobalFunc_1509();
		return func_207(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!GlobalFunc_1488(iParam4))
	{
		return 0;
	}
	GlobalFunc_6926(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}







int func_207(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x7189
{
	struct<2> Var0;
	
	GlobalFunc_1508();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return GlobalFunc_10847(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return GlobalFunc_10846(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return GlobalFunc_10847(uParam0, sParam3, sParam4);
		}
		return func_256(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_255(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_246(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_245(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_208(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_208(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7283
{
	bool bVar0;
	
	GlobalFunc_1498();
	bVar0 = true;
	if (func_210(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
		return 1;
	}
	return 0;
}


int func_210(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x72DD
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_236(uParam5, bParam6, &iVar3);
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_233(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_214(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1498();
	GlobalFunc_1491();
	GlobalFunc_1490();
	return 1;
}




int func_214(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7467
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_215(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}

int func_215(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x74D3
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8971();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_2544633 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5403() == 0)
	{
		GlobalFunc_5402();
		return 0;
	}
	GlobalFunc_1495(Global_2544632);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/]), sParam1, 64);
	Global_2543383[Global_2544632 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2543383[Global_2544632 /*104*/].f_24 = iParam2;
	}
	Global_2543383[Global_2544632 /*104*/].f_25 = iParam7;
	Global_2543383[Global_2544632 /*104*/].f_26 = uParam8;
	Global_2543383[Global_2544632 /*104*/].f_29 = uParam9;
	Global_2543383[Global_2544632 /*104*/].f_30 = uParam12;
	Global_2543383[Global_2544632 /*104*/].f_31 = uParam11;
	Global_2543383[Global_2544632 /*104*/].f_28 = 0;
	Global_2543383[Global_2544632 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_33), sParam4, 64);
	Global_2543383[Global_2544632 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_50), sParam5, 64);
	Global_2543383[Global_2544632 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_83), sParam15, 64);
	GlobalFunc_8971();
	switch (iParam16)
	{
		case 3:
			Global_2543383[Global_2544632 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2543383[Global_2544632 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2543383[Global_2544632 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2543383[Global_2544632 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14393)
		{
			case 0:
				GlobalFunc_1494(0);
				break;
			
			case 1:
				GlobalFunc_1494(1);
				break;
			
			case 2:
				GlobalFunc_1494(2);
				break;
			
			case 3:
				GlobalFunc_1494(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2544633 = 1;
				break;
			
			case 0:
				Global_2544633 = 1;
				break;
			
			case 2:
				Global_2544633 = 1;
				break;
			
			case 1:
				Global_2544633 = 1;
				break;
			}
	}
	Global_16761[Global_2544632] = 0;
	if (bParam10)
	{
		GlobalFunc_8971();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_6945(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}


















int func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x83F8
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_215(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}



var func_236(char* sParam0, bool bParam1, int iParam2)//Position - 0x854A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	GlobalFunc_1497(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}









int func_245(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x87D7
{
	bool bVar0;
	
	GlobalFunc_1498();
	bVar0 = false;
	return func_210(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_246(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x87FE
{
	bool bVar0;
	
	bVar0 = false;
	return func_247(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_247(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x8821
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16753 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_236(uParam5, bParam6, &iVar3);
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_293(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_249(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1499();
	GlobalFunc_1491();
	GlobalFunc_1490();
	return 1;
}


int func_249(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x8989
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_250(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_250(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x8A21
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8971();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_1500(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8971();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8971();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_6945(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}





int func_255(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x9277
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	GlobalFunc_1499();
	bVar0 = true;
	if (func_247(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
		return 1;
	}
	return 0;
}

int func_256(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x92C9
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = GlobalFunc_10650(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = GlobalFunc_10649(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			GlobalFunc_1505(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			GlobalFunc_1504(1);
		}
		GlobalFunc_1503();
		GlobalFunc_1491();
		GlobalFunc_1502();
		GlobalFunc_1501();
		return 1;
	}
	return 0;
}





































int func_293(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x9DCA
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 3;
	if (func_250(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}


bool func_295()//Position - 0x9ED9
{
	return GlobalFunc_1511();
}

void func_296()//Position - 0x9EE5
{
	if (func_65())
	{
		if (!iLocal_317 == Local_354.f_32)
		{
			Global_2446554.f_1532 = { Local_342 };
			func_297();
			iLocal_317 = Local_354.f_32;
		}
	}
}

void func_297()//Position - 0x9F1D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2446554.f_1551[iVar1 /*4*/]), "", 16);
		if (!Global_2446554.f_1532[iVar1] == -1 && Global_2446554.f_1532.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2446554.f_1551[iVar0 /*4*/]), GlobalFunc_1553(Global_2446554.f_1532[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2446554.f_1572 = iVar0;
}


void func_299()//Position - 0xA1DB
{
	int iVar0;
	
	if (!iLocal_86)
	{
		if (!GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
		{
			if (!Local_354.f_28 == -1)
			{
				if (!iLocal_319 == func_29(Local_354.f_28))
				{
					if (!GlobalFunc_1554(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_319 = func_29(Local_354.f_28);
						iVar0 = 0;
						while (iVar0 < iLocal_329)
						{
							ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_329[iVar0], iLocal_319);
							iVar0++;
						}
						iLocal_86 = 1;
						STREAMING::REQUEST_MODEL(iLocal_319);
						func_301();
						func_300(iLocal_319);
					}
				}
			}
		}
	}
	else if ((GlobalFunc_7646(PLAYER::PLAYER_ID(), 1) || (Local_354.f_28 > -1 && !iLocal_319 == func_29(Local_354.f_28))) || GlobalFunc_1554(PLAYER::PLAYER_PED_ID()))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_319);
		iVar0 = 0;
		while (iVar0 < iLocal_329)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_329[iVar0]);
			iVar0++;
		}
		func_301();
		iLocal_319 = 0;
		iLocal_86 = 0;
	}
}

void func_300(int iParam0)//Position - 0xA2CF
{
	if (MISC::IS_BIT_SET(Local_354.f_23, 0))
	{
		if (iParam0 == Local_354.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_272[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_272[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_272[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_272[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
	}
}

void func_301()//Position - 0xAA7A
{
	int iVar0;
	
	if (iLocal_283)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_272[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_272[iVar0]);
		}
		iLocal_272[iVar0] = 0;
		iVar0++;
	}
	iLocal_283 = 0;
}




void func_305()//Position - 0xAB31
{
	var uVar0;
	
	if (!GlobalFunc_439(&uLocal_304))
	{
		GlobalFunc_436(&uLocal_304, 0, 0);
	}
	else if (GlobalFunc_5071(&uLocal_304, 250, 0))
	{
		GlobalFunc_434(&uLocal_304);
		if (func_317(1, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_312, 5) && !func_316())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if ((func_315() || func_316()) || func_312())
				{
					if (!func_311(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (!GlobalFunc_1302(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_307(&uVar0))
								{
									if (!MISC::IS_BIT_SET(iLocal_312, 2))
									{
										if (func_190() && SYSTEM::TIMERA() > 500)
										{
											GlobalFunc_159("IMPEX_FSPRAY_FM", -1);
											MISC::SET_BIT(&iLocal_312, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_312, 8))
								{
									if (func_190() && SYSTEM::TIMERA() > 500)
									{
										GlobalFunc_159("IMPEX_CASH_FM", -1);
										MISC::SET_BIT(&iLocal_312, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_312, 11))
							{
								if (func_190() && SYSTEM::TIMERA() > 500)
								{
									GlobalFunc_159("IMPEX_WANTED_FM", -1);
									MISC::SET_BIT(&iLocal_312, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_306())
							{
								if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									if (!MISC::IS_BIT_SET(iLocal_312, 3))
									{
										MISC::CLEAR_BIT(&iLocal_312, 7);
										if (func_190() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2446554.f_4352 == 0)
											{
												if (!func_182(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
												{
													GlobalFunc_159("IMPEX_DELIVER_FM", -1);
													MISC::SET_BIT(&iLocal_312, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_312, 7))
								{
									if (func_190() && SYSTEM::TIMERA() > 2000)
									{
										GlobalFunc_159("IMPEX_RIG_FM", -1);
										MISC::SET_BIT(&iLocal_312, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_312, 6))
							{
								if (func_190() && SYSTEM::TIMERA() > 2000)
								{
									GlobalFunc_159("IMPEX_WANTED_P", -1);
									MISC::SET_BIT(&iLocal_312, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!MISC::IS_BIT_SET(iLocal_312, 4))
						{
							if (func_190() && SYSTEM::TIMERA() > 5000)
							{
								GlobalFunc_159("IMPEX_WANTED_FM", -1);
								MISC::SET_BIT(&iLocal_312, 4);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				else
				{
					if (GlobalFunc_74("IMPEX_FSPRAY_FM"))
					{
						HUD::CLEAR_HELP(1);
					}
					MISC::CLEAR_BIT(&iLocal_312, 2);
					MISC::CLEAR_BIT(&iLocal_312, 3);
					MISC::CLEAR_BIT(&iLocal_312, 4);
					MISC::CLEAR_BIT(&iLocal_312, 6);
					MISC::CLEAR_BIT(&iLocal_312, 7);
					MISC::CLEAR_BIT(&iLocal_312, 8);
					MISC::CLEAR_BIT(&iLocal_312, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (GlobalFunc_74("IMPEX_FSPRAY_FM"))
				{
					HUD::CLEAR_HELP(1);
				}
				MISC::CLEAR_BIT(&iLocal_312, 2);
				MISC::CLEAR_BIT(&iLocal_312, 3);
				MISC::CLEAR_BIT(&iLocal_312, 4);
				MISC::CLEAR_BIT(&iLocal_312, 6);
				MISC::CLEAR_BIT(&iLocal_312, 7);
				MISC::CLEAR_BIT(&iLocal_312, 8);
				MISC::CLEAR_BIT(&iLocal_312, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (GlobalFunc_74("IMPEX_FSPRAY_FM"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

int func_306()//Position - 0xAEA7
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar3, iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1)))
				{
					uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1);
					if (!PED::IS_PED_A_PLAYER(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_307(var uParam0)//Position - 0xAF16
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = GlobalFunc_470(1);
		*uParam0 = GlobalFunc_1303(iVar0);
		if (iVar1 < (400 + *uParam0))
		{
			return 0;
		}
	}
	return 1;
}




int func_311(int iParam0)//Position - 0xB252
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

int func_312()//Position - 0xB288
{
	var uVar0;
	
	if (func_410())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (!GlobalFunc_316(uVar0))
		{
			if (func_313(ENTITY::GET_ENTITY_MODEL(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313(int iParam0)//Position - 0xB2CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_354.f_35[iVar1] == iVar0)
			{
				if (!GlobalFunc_5071(&(Local_354.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}


int func_315()//Position - 0xB340
{
	var uVar0;
	
	if (func_410())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_1674612)
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (!GlobalFunc_316(uVar0))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(uVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 1))
					{
						if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_6 <= 0)
						{
							if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1674611)
								{
									if (bLocal_284)
									{
										bLocal_284 = false;
									}
									if (func_69(&Local_342, ENTITY::GET_ENTITY_MODEL(iVar0)))
									{
										Global_2446554.f_1576 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_284)
					{
						bLocal_284 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_316()//Position - 0xB3ED
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Local_354.f_23, 0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_354.f_22))
			{
				if (GlobalFunc_5233(Local_354.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_354.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_317(bool bParam0, bool bParam1)//Position - 0xB43E
{
	bool bVar0;
	
	bVar0 = true;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (GlobalFunc_895())
		{
			bVar0 = false;
		}
	}
	if (!GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (GlobalFunc_247(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_318()//Position - 0xB4D0
{
	int iVar0;
	
	switch (iLocal_99)
	{
		case 0:
			if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
			{
				if (!GlobalFunc_439(&uLocal_100) || GlobalFunc_5071(&uLocal_100, 2000, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							GlobalFunc_173(&uLocal_104, 4, iLocal_98, "MECHANIC_IMP", 0, 1);
							iLocal_561 = 0;
							iLocal_99++;
						}
					}
					GlobalFunc_434(&uLocal_100);
					GlobalFunc_436(&uLocal_100, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_83)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_561)
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										if (GlobalFunc_1303(iVar0) > 500)
										{
											sLocal_562 = "FM_IEPOOR";
										}
										else
										{
											sLocal_562 = "FM_IEGOOD";
										}
										iLocal_561 = 1;
									}
									else if (GlobalFunc_10652(&uLocal_104, "FM_1AU", sLocal_562, 12, 0, 0, 0))
									{
										iLocal_269 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										iLocal_99++;
										iLocal_561 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_319();
						iLocal_99 = 0;
					}
				}
				else
				{
					func_319();
					iLocal_99 = 0;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_83)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_269)
								{
									iLocal_99 = 1;
								}
							}
						}
					}
					else
					{
						func_319();
						iLocal_99 = 0;
					}
				}
				else
				{
					func_319();
					iLocal_99 = 0;
				}
			}
			break;
	}
}

void func_319()//Position - 0xB6E1
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_98;
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}


void func_321()//Position - 0xB7A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_317(1, 1))
	{
		switch (Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					bVar7 = func_312();
					if ((func_315() || func_316()) || bVar7)
					{
						if (!func_306())
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_389())
								{
									if (bLocal_82)
									{
										bLocal_82 = false;
									}
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!iLocal_88)
									{
										if (func_388(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
										}
									}
									iLocal_563 = iVar3;
									if (MISC::IS_BIT_SET(iLocal_559, 15))
									{
										MISC::CLEAR_BIT(&iLocal_559, 15);
									}
									if (MISC::IS_BIT_SET(iLocal_312, 9))
									{
										MISC::CLEAR_BIT(&iLocal_312, 9);
									}
									if (MISC::IS_BIT_SET(iLocal_312, 12))
									{
										MISC::CLEAR_BIT(&iLocal_312, 12);
									}
									if (MISC::IS_BIT_SET(iLocal_312, 10))
									{
										MISC::CLEAR_BIT(&iLocal_312, 10);
									}
									if (!MISC::IS_BIT_SET(iLocal_559, 12))
									{
										if (bVar7)
										{
											MISC::SET_BIT(&iLocal_559, 12);
										}
									}
									else if (!bVar7)
									{
										MISC::CLEAR_BIT(&iLocal_559, 12);
									}
									if (GlobalFunc_1302(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_75 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_81)
												{
													bLocal_81 = false;
												}
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1) == PLAYER::PLAYER_PED_ID())
												{
													bLocal_78 = true;
												}
											}
											else if (func_72())
											{
												if (bLocal_78)
												{
													bLocal_78 = false;
												}
												bLocal_81 = true;
											}
											bLocal_76 = false;
											bLocal_77 = false;
											bLocal_79 = false;
											bLocal_80 = false;
											bLocal_82 = false;
											bLocal_83 = true;
											if (func_387(1215605247, 18))
											{
												bLocal_73 = true;
											}
											iLocal_325 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_325))
											{
												if (func_182(iLocal_325, 0))
												{
													if (!MISC::IS_BIT_SET(iLocal_559, 17))
													{
														MISC::SET_BIT(&iLocal_559, 17);
													}
													else if (func_182(iLocal_325, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_325) };
														if (ENTITY::GET_ENTITY_SPEED(iLocal_325) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f)
														{
															func_386();
															func_382(PLAYER::PLAYER_ID(), 0, 16388, 1);
															if (func_316())
															{
																MISC::SET_BIT(&iLocal_559, 4);
																MISC::SET_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
															}
															if (func_315() || func_312())
															{
																MISC::SET_BIT(&iLocal_559, 6);
															}
															if (func_381())
															{
																bLocal_72 = true;
															}
															else
															{
																bLocal_72 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_325, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_325))
															{
																ENTITY::SET_ENTITY_PROOFS(iLocal_325, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_70(ENTITY::GET_ENTITY_MODEL(iLocal_325));
															Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_320[iVar4] = GlobalFunc_314();
																if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_325, iVar1))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_325, iVar1)))
																	{
																		if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_325, iVar1)))
																		{
																			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_325, iVar1);
																			if (PED::IS_PED_A_PLAYER(iVar0))
																			{
																				if (GlobalFunc_252(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0))
																				{
																					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
																					{
																						iLocal_320[iVar4] = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_291 = func_380(ENTITY::GET_ENTITY_MODEL(iLocal_325));
															iLocal_292 = GlobalFunc_1303(iLocal_325);
															fLocal_293 = SYSTEM::TO_FLOAT((iLocal_291 - iLocal_292));
															fLocal_293 = (fLocal_293 * Global_262145.f_2382);
															if (MISC::IS_BIT_SET(iLocal_559, 4))
															{
																fLocal_293 = (fLocal_293 * 1.3f);
															}
															fLocal_293 = (fLocal_293 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_294 = 500f;
															func_379();
															func_138(0);
															GlobalFunc_7743(1234, 1, -1);
															if (GlobalFunc_74("IMPEX_DELIVER_FM"))
															{
																HUD::CLEAR_HELP(1);
															}
															MISC::CLEAR_BIT(&iLocal_559, 12);
															iVar6 = GlobalFunc_6872(1187, -1, 0);
															if (!MISC::IS_BIT_SET(iVar6, 1))
															{
																MISC::SET_BIT(&iVar6, 1);
																GlobalFunc_6720(1187, iVar6, -1, 1);
															}
															else if (!MISC::IS_BIT_SET(iVar6, 2))
															{
																MISC::SET_BIT(&iVar6, 2);
																GlobalFunc_6720(1187, iVar6, -1, 1);
															}
															func_377();
															iLocal_295 = 0;
															iLocal_295 = SYSTEM::ROUND(fLocal_293);
															iLocal_295 = (iLocal_295 - (iLocal_295 % 25));
															if (iLocal_564 == iVar3)
															{
																iLocal_295 = (iLocal_295 + iLocal_297);
															}
															if (!MISC::IS_BIT_SET(iLocal_559, 4))
															{
																if (iLocal_295 > Global_262145.f_141)
																{
																	iLocal_295 = Global_262145.f_141;
																}
															}
															else if (iLocal_295 > Global_262145.f_141)
															{
																iLocal_295 = Global_262145.f_141;
															}
															iLocal_296 = 0;
															fLocal_294 = (fLocal_294 * Global_262145.f_4196);
															iLocal_296 = SYSTEM::ROUND(fLocal_294);
															MISC::CLEAR_BIT(&iLocal_559, 17);
															iLocal_326 = iLocal_325;
															iLocal_328 = ENTITY::GET_ENTITY_MODEL(iLocal_325);
															if (!MISC::IS_BIT_SET(iLocal_559, 4))
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(19, iLocal_296, iLocal_295, iLocal_325);
															}
															else
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(120, iLocal_296, iLocal_295, iLocal_325);
															}
															GlobalFunc_5237(19, 1);
															func_375();
															func_405();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															func_382(PLAYER::PLAYER_ID(), 0, 16388, 1);
														}
													}
												}
												else if (MISC::IS_BIT_SET(iLocal_559, 17))
												{
													MISC::CLEAR_BIT(&iLocal_559, 17);
												}
											}
										}
										else
										{
											if (bLocal_75)
											{
												bLocal_75 = false;
											}
											if (bLocal_83)
											{
												bLocal_83 = false;
											}
											if (bLocal_78)
											{
												bLocal_78 = false;
											}
											if (bLocal_81)
											{
												bLocal_81 = false;
											}
											if (bLocal_82)
											{
												bLocal_82 = false;
											}
										}
									}
									else if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
									{
										if (func_307(&iVar8))
										{
											if (!func_311(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
											{
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1) == PLAYER::PLAYER_PED_ID())
												{
													if (iLocal_564 != iVar3)
													{
														iLocal_564 = iVar3;
														iLocal_297 = 0;
													}
													else if (iLocal_297 != iVar8)
													{
														if (iLocal_297 < iVar8)
														{
															iLocal_297 = iVar8;
														}
													}
												}
												if (!bLocal_76)
												{
													bLocal_76 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_72())
													{
														if (bLocal_77)
														{
															bLocal_77 = false;
														}
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == PLAYER::PLAYER_PED_ID())
														{
															if (GlobalFunc_1303(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 0)
															{
																if (!bLocal_80)
																{
																	bLocal_80 = true;
																}
															}
															else
															{
																if (bLocal_80)
																{
																	bLocal_80 = false;
																}
																if (!bLocal_79)
																{
																	bLocal_79 = true;
																}
															}
														}
													}
												}
												else if (!func_72())
												{
													if (bLocal_79)
													{
														bLocal_79 = false;
													}
													if (bLocal_80)
													{
														bLocal_80 = false;
													}
													if (!bLocal_77)
													{
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == PLAYER::PLAYER_PED_ID())
														{
															bLocal_77 = true;
														}
													}
												}
											}
											else
											{
												func_374();
											}
										}
										else
										{
											func_374();
										}
									}
									else
									{
										func_374();
										if (bLocal_83)
										{
											bLocal_83 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (iLocal_563 != iVar3)
								{
									if (!iLocal_88)
									{
										if (func_388(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
										}
									}
									iLocal_563 = iVar3;
								}
								if (!bLocal_82)
								{
									func_374();
									bLocal_82 = true;
								}
							}
						}
					}
					else
					{
						func_374();
						if (bLocal_83)
						{
							bLocal_83 = false;
						}
						if (iLocal_88)
						{
							if (Local_354.f_33)
							{
								if (bLocal_93)
								{
									iLocal_88 = 0;
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if ((GlobalFunc_74("IMPEX_NOT_NEED") || GlobalFunc_74("IMPEX_NO_MORE")) || GlobalFunc_74("IMPEX_NOT_PVEH"))
							{
								HUD::CLEAR_HELP(1);
							}
						}
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_316(iVar2))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1) == PLAYER::PLAYER_PED_ID())
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle"))
								{
									if (DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2 == iLocal_563)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
										{
											if (func_190())
											{
												if (!MISC::IS_BIT_SET(iLocal_559, 15))
												{
													if (bVar7 || func_69(&Local_342, ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														GlobalFunc_159("IMPEX_NOT_PVEH", -1);
														MISC::SET_BIT(&iLocal_559, 15);
													}
												}
											}
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_559, 15))
									{
										if (iVar2 != iLocal_563)
										{
											MISC::CLEAR_BIT(&iLocal_559, 15);
										}
									}
								}
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_559, 15))
							{
								if (iVar2 != iLocal_563)
								{
									MISC::CLEAR_BIT(&iLocal_559, 15);
								}
							}
							if (bLocal_89)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_387(1215605247, 18))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (func_182(iVar2, 0))
									{
										if (!iLocal_87)
										{
											func_138(1);
											iLocal_87 = 1;
										}
										bLocal_73 = true;
									}
								}
								else if (iLocal_87)
								{
									func_138(0);
									iLocal_87 = 0;
									bLocal_73 = false;
								}
							}
						}
						if (func_387(1215605247, 18))
						{
							if (func_190())
							{
								if (GlobalFunc_316(iVar2))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
									{
										if (!MISC::IS_BIT_SET(iLocal_312, 10))
										{
											GlobalFunc_159("IMPEX_NOT_PVEH", -1);
											MISC::SET_BIT(&iLocal_312, 10);
										}
									}
								}
								else if (func_69(&Local_342, ENTITY::GET_ENTITY_MODEL(iVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0))
									{
										if (!MISC::IS_BIT_SET(iLocal_312, 12))
										{
											GlobalFunc_159("IMPEX_NOT_CREW", -1);
											MISC::SET_BIT(&iLocal_312, 12);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_312, 9))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1) == PLAYER::PLAYER_PED_ID())
									{
										GlobalFunc_159("IMPEX_NOT_NEED", -1);
										MISC::SET_BIT(&iLocal_312, 9);
									}
								}
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_312, 9))
							{
								MISC::CLEAR_BIT(&iLocal_312, 9);
							}
							if (MISC::IS_BIT_SET(iLocal_312, 10))
							{
								MISC::CLEAR_BIT(&iLocal_312, 10);
							}
							if (MISC::IS_BIT_SET(iLocal_312, 12))
							{
								MISC::CLEAR_BIT(&iLocal_312, 12);
							}
							if (MISC::IS_BIT_SET(iLocal_559, 12))
							{
								if (func_190())
								{
									GlobalFunc_159("IMPEX_NO_MORE", -1);
									MISC::CLEAR_BIT(&iLocal_559, 12);
									GlobalFunc_8420();
								}
							}
						}
					}
				}
				else
				{
					func_374();
					if (bLocal_83)
					{
						bLocal_83 = false;
					}
					if (iLocal_88)
					{
						iLocal_88 = 0;
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_131(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_315, 0, 500, 1, 0))
					{
						Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&iLocal_559, 4);
					MISC::CLEAR_BIT(&iLocal_559, 6);
					Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					GlobalFunc_7764(17, 1, -1);
					if (MISC::IS_BIT_SET(iLocal_559, 4))
					{
						MISC::SET_BIT(&(Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
						func_372();
					}
					else
					{
						func_370();
					}
					if (bLocal_72)
					{
						if (MISC::IS_BIT_SET(iLocal_559, 6))
						{
							Local_57.f_2 = 36;
						}
						else
						{
							Local_57.f_2 = 37;
						}
						Local_57.f_3 = Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_57.f_10 = iLocal_320[0];
						Local_57.f_11 = iLocal_320[1];
						Local_57.f_12 = iLocal_320[2];
						Local_57.f_13 = iLocal_320[3];
						if (!MISC::IS_BIT_SET(iLocal_559, 6))
						{
						}
					}
					MISC::CLEAR_BIT(&iLocal_559, 6);
					GlobalFunc_1435(4, iLocal_295);
					if (GlobalFunc_218())
					{
						GlobalFunc_8416(941287179, iLocal_295, &iVar12, 0, 0);
						Global_2540096[iVar12 /*69*/].f_8.f_51 = iLocal_328;
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_295, iLocal_328);
					}
					if (iLocal_292 > 0)
					{
						func_360("IMPEX_PASS", iLocal_295, 7000, 0);
					}
					else
					{
						func_360("IMPEX_PASS", iLocal_295, 7000, 0);
					}
					func_332(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_296, 1, -1, 0);
					GlobalFunc_8401(29);
					func_382(PLAYER::PLAYER_ID(), 1, 0, 1);
					Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_430[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					MISC::CLEAR_BIT(&iLocal_559, 4);
					iLocal_94 = 1;
					GlobalFunc_4989(12, 0);
				}
				break;
		}
	}
	else
	{
		if (!GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_89)
			{
				if (iLocal_87)
				{
					func_138(0);
					iLocal_87 = 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_387(1215605247, 18))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (func_182(iVar2, 0))
				{
					if (!iLocal_87)
					{
						func_138(1);
						iLocal_87 = 1;
					}
					bLocal_73 = true;
				}
			}
			else if (iLocal_87)
			{
				func_138(0);
				iLocal_87 = 0;
				bLocal_73 = false;
			}
		}
		if (bLocal_76)
		{
			bLocal_76 = false;
		}
		if (bLocal_77)
		{
			bLocal_77 = false;
		}
		if (bLocal_79)
		{
			bLocal_79 = false;
		}
		if (bLocal_80)
		{
			bLocal_80 = false;
		}
	}
}











var func_332(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC931
{
	return func_333(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_333(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC94D
{
	var uVar0;
	
	uVar0 = func_334(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_334(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC970
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (GlobalFunc_361(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_7278 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7278;
		}
	}
	else if (Global_262145.f_4972 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4972;
	}
	if (GlobalFunc_1555(uParam2))
	{
	}
	if (GlobalFunc_82())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_354(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = GlobalFunc_5251(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					GlobalFunc_6848(0, &iVar1);
					break;
				
				case 3:
					GlobalFunc_6848(1, &iVar1);
					break;
				
				case 1:
					GlobalFunc_6847(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			GlobalFunc_7743(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				GlobalFunc_7742((GlobalFunc_6849(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_2 != -1)
				{
					GlobalFunc_7743(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					GlobalFunc_5383(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}




















int func_354(int iParam0)//Position - 0xD39E
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > GlobalFunc_6849(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_347(PLAYER::PLAYER_ID());
		}
	}
	if (GlobalFunc_948(8000, 0, 0) > 0)
	{
		if (GlobalFunc_948(8000, 0, 0) < (iParam0 + GlobalFunc_6849(PLAYER::PLAYER_ID())))
		{
			iParam0 = (GlobalFunc_948(8000, 0, 0) - GlobalFunc_6849(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}






void func_360(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD494
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}










void func_370()//Position - 0xDAB8
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(42);
	Global_2408820[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}


void func_372()//Position - 0xDB32
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(43);
	Global_2408820[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}


void func_374()//Position - 0xDB86
{
	if (bLocal_82)
	{
		bLocal_82 = false;
	}
	if (bLocal_77)
	{
		bLocal_77 = false;
	}
	if (bLocal_78)
	{
		bLocal_78 = false;
	}
	if (bLocal_79)
	{
		bLocal_79 = false;
	}
	if (bLocal_81)
	{
		bLocal_81 = false;
	}
	if (bLocal_80)
	{
		bLocal_80 = false;
	}
}

void func_375()//Position - 0xDBBE
{
	Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_34 = NETWORK::GET_CLOUD_TIME_AS_INT();
}


void func_377()//Position - 0xDE34
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6872(1187, -1, 0);
	if (!MISC::IS_BIT_SET(iVar0, 3))
	{
		MISC::SET_BIT(&iVar0, 3);
		MISC::SET_BIT(&iLocal_560, 1);
		bVar1 = true;
	}
	else if (!MISC::IS_BIT_SET(iVar0, 4))
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&iLocal_560, 2);
		bVar1 = true;
	}
	else if (!MISC::IS_BIT_SET(iVar0, 5))
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iLocal_560, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		GlobalFunc_6720(1187, iVar0, -1, 1);
	}
}


void func_379()//Position - 0xDEF5
{
	if (!Global_2446554.f_4362)
	{
		Global_2446554.f_4362 = 1;
	}
	GlobalFunc_481(&(Global_2446554.f_4363), 0, 0);
}

int func_380(int iParam0)//Position - 0xDF1D
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 9000;
		
		case joaat("serrano"):
			return 9000;
		
		case joaat("dominator"):
			return 5250;
		
		case joaat("schafter2"):
			return 9750;
		
		case joaat("surge"):
			return 5700;
		
		case joaat("jackal"):
			return 9000;
		
		case joaat("ztype"):
			return 0;
		
		case joaat("tailgater"):
			return 8250;
		
		case joaat("landstalker"):
			return 8700;
		
		case joaat("penumbra"):
			return 3600;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("fq2"):
			return 7500;
		
		case joaat("patriot"):
			return 7500;
		
		case joaat("habanero"):
			return 6300;
		
		case joaat("prairie"):
			return 3750;
		
		case joaat("fusilade"):
			return 5400;
		
		case joaat("bjxl"):
			return 4050;
		
		case joaat("gresley"):
			return 4350;
		
		case joaat("buccaneer"):
			return 4200;
		
		case joaat("daemon"):
			return 3000;
		
		case joaat("bagger"):
			return 2400;
		
		default:
	}
	return -1;
}

int func_381()//Position - 0xE027
{
	int iVar0;
	
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_382(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xE07B
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!GlobalFunc_5085())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!GlobalFunc_453(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(iVar23);
				PED::SET_PED_CAN_RAGDOLL(iVar23, 1);
				GlobalFunc_265();
				GlobalFunc_452();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!GlobalFunc_453(iVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar23) && !PED::IS_PED_IN_ANY_VEHICLE(iVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}




void func_386()//Position - 0xE495
{
	GlobalFunc_8420();
}

int func_387(int iParam0, int iParam1)//Position - 0xE4A1
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_1439(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)//Position - 0xE4C9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (!func_311(iParam0))
			{
				if (iParam0 != iLocal_563)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_389()//Position - 0xE50C
{
	if (Global_2422140.f_499.f_6 || Global_2422140.f_499.f_7)
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0, int iParam1, var uParam2)//Position - 0xE534
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_391(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_391(int iParam0, int iParam1)//Position - 0xE5A5
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_398(iParam1);
			break;
		
		case 1:
			iVar0 = func_397(iParam1);
			break;
		
		case 2:
			iVar0 = func_396(iParam1);
			break;
		
		case 3:
			iVar0 = func_395(iParam1);
			break;
		
		case 4:
			iVar0 = func_394(iParam1);
			break;
		
		case 5:
			iVar0 = func_393(iParam1);
			break;
		
		case 6:
			iVar0 = func_392(iParam1);
			break;
	}
	return iVar0;
}

int func_392(int iParam0)//Position - 0xE630
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_393(int iParam0)//Position - 0xE684
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

int func_394(int iParam0)//Position - 0xE6D9
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 16;
			break;
		
		case 1:
			iVar0 = 17;
			break;
		
		case 2:
			iVar0 = 18;
			break;
		
		case 3:
			iVar0 = 19;
			break;
		
		case 4:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_395(int iParam0)//Position - 0xE72E
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_396(int iParam0)//Position - 0xE783
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_397(int iParam0)//Position - 0xE7D8
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		
		case 1:
			iVar0 = 5;
			break;
		
		case 2:
			iVar0 = 7;
			break;
		
		case 3:
			iVar0 = 8;
			break;
		
		case 4:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

int func_398(int iParam0)//Position - 0xE82A
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 3:
			iVar0 = 4;
			break;
		
		case 4:
			iVar0 = 5;
			break;
	}
	return iVar0;
}





void func_403()//Position - 0xE936
{
	Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_35 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_404(var uParam0, int iParam1)//Position - 0xE952
{
	int iVar0;
	int iVar1;
	
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_391(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_36 = iVar1;
}

void func_405()//Position - 0xE9D7
{
	GlobalFunc_1556("CELL_CLTEST1", 0);
	func_406("CELL_CLTEST1");
	GlobalFunc_1556("CELL_CLTEST6", 0);
	func_406("CELL_CLTEST6");
}

void func_406(char* sParam0)//Position - 0xEA01
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/]), sParam0))
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					GlobalFunc_8971();
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[Global_14393] = 0;
					if (GlobalFunc_564(iVar0))
					{
					}
					else
					{
						Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_24 = 0;
						Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_28 = 0;
						Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}



int func_409()//Position - 0xEC22
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (GlobalFunc_160())
	{
		return 0;
	}
	if (GlobalFunc_895())
	{
		return 0;
	}
	if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (GlobalFunc_1304())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1573535)
	{
		return 0;
	}
	if (GlobalFunc_1168())
	{
		return 0;
	}
	if (GlobalFunc_1117())
	{
		return 0;
	}
	if (GlobalFunc_1277())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (!GlobalFunc_5085())
	{
		return 0;
	}
	if (GlobalFunc_5428())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_410()//Position - 0xED0C
{
	if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_34 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_34) < 86400;
}

bool func_411()//Position - 0xED46
{
	if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_35 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_35) < 86400;
}

bool func_412()//Position - 0xED80
{
	if (!MISC::IS_BIT_SET(iLocal_559, 2))
	{
		if (!GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
		{
			if (((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) && !GlobalFunc_895()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_413(19))
			{
				MISC::SET_BIT(&iLocal_559, 2);
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_559, 2);
}

int func_413(int iParam0)//Position - 0xEE01
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_415(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = GlobalFunc_7788(PLAYER::PLAYER_ID(), 1);
	iVar2 = GlobalFunc_5249(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}


int func_415(int iParam0)//Position - 0xEE58
{
	if (GlobalFunc_228())
	{
		return 1;
	}
	if (GlobalFunc_227())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
			if (!func_416(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_416(int iParam0)//Position - 0xF0D2
{
	return func_417(123, iParam0);
}

int func_417(int iParam0, var uParam1)//Position - 0xF0E2
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][GlobalFunc_4990(uParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}












void func_429()//Position - 0xF379
{
	if (iLocal_97 != -1)
	{
		func_120(iLocal_97, 0);
	}
	GlobalFunc_5084(&iLocal_314);
	if (MISC::IS_BIT_SET(iLocal_559, 1))
	{
		func_430(0f, 0f, 0f, GlobalFunc_480(19), 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_354.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_354.f_24);
			}
			Local_354.f_24 = -1;
		}
	}
	func_301();
	Global_2446554.f_1544 = 0;
	Global_2446554.f_1545 = 0;
	Global_2446554.f_1547 = 0;
	Global_2446554.f_1573 = 0;
	if (MISC::IS_BIT_SET(iLocal_559, 7))
	{
		GlobalFunc_461(6, 0);
	}
	func_319();
	if (HUD::DOES_BLIP_EXIST(Global_1683601))
	{
		HUD::REMOVE_BLIP(&Global_1683601);
	}
	func_189(0);
	if (HUD::DOES_BLIP_EXIST(Global_1683610))
	{
		HUD::REMOVE_BLIP(&Global_1683610);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_74)
		{
			func_139(1215605247, 0, 0);
			func_138(0);
		}
		if (iLocal_87)
		{
			func_138(0);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_430(struct<3> Param0, char* sParam3, int iParam4)//Position - 0xF466
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || GlobalFunc_100(Global_2446554.f_3802[iVar0 /*26*/].f_1, Param0))
				{
					Global_2446554.f_3802[iVar0 /*26*/] = 0;
					Global_2446554.f_3802[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}



int func_433(struct<20> Param0)//Position - 0xF597
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_354, 74);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_430, 129);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		return 0;
	}
	Global_2446554.f_1547 = 0;
	Global_2446554.f_4220 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (GlobalFunc_247(PLAYER::PLAYER_ID(), 6))
	{
		GlobalFunc_461(6, 0);
	}
	func_434();
	return 1;
}

void func_434()//Position - 0xF607
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(1187, -1, 0);
	if (MISC::IS_BIT_SET(uVar0, 3))
	{
		MISC::SET_BIT(&iLocal_560, 1);
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		MISC::SET_BIT(&iLocal_560, 2);
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		MISC::SET_BIT(&iLocal_560, 3);
		MISC::SET_BIT(&iLocal_560, 0);
	}
}







