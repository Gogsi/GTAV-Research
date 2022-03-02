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
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_64[12];
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<7> Local_127 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_144 = 16;
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
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	struct<76> Local_317 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403[3] = { 0, 0, 0 };
	var uLocal_407[3] = { 0, 0, 0 };
	int iLocal_411[3] = { 0, 0, 0 };
	float fLocal_415 = 0f;
	bool bLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<13> Local_419[10];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	bool bLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_596[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	int iLocal_627 = 0;
	struct<41> Local_628 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
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
	fLocal_415 = 0f;
	bLocal_416 = true;
	Local_624 = { 1683.682f, 2518.867f, 44.5651f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_81();
	}
	uLocal_310 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
	}
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_310))
		{
			func_81();
		}
		func_80();
		Local_311 = { ENTITY::GET_ENTITY_COORDS(iLocal_310, 1) };
		switch (iLocal_309)
		{
			case 0:
				func_78();
				iLocal_309 = 1;
				break;
			
			case 1:
				func_77();
				func_76();
				func_75();
				func_73();
				iLocal_309 = 2;
				break;
			
			case 2:
				if ((((func_72() && func_71()) && func_70()) && func_69()) && func_68())
				{
					iLocal_309 = 3;
				}
				break;
			
			case 3:
				func_62();
				SYSTEM::WAIT(0);
				func_61();
				SYSTEM::WAIT(0);
				func_58();
				func_57();
				iLocal_309 = 4;
				break;
			
			case 4:
				if (!Global_24452)
				{
					if (Global_87295)
					{
						func_81();
					}
					func_32();
					func_31();
					func_27();
					func_26();
					func_24();
					func_2();
					func_1();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1A8
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_50 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[0] = 1;
				}
			}
			else
			{
				iLocal_106[0] = 0;
			}
		}
	}
	else if (iLocal_50 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[1] = 1;
				}
			}
			else
			{
				iLocal_106[1] = 0;
			}
		}
	}
	else if (iLocal_50 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[2] = 1;
				}
			}
			else
			{
				iLocal_106[2] = 0;
			}
		}
	}
	else if (iLocal_50 == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[3] = 1;
				}
			}
			else
			{
				iLocal_106[3] = 0;
			}
		}
	}
	else if (iLocal_50 == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[4] = 1;
				}
			}
			else
			{
				iLocal_106[4] = 0;
			}
		}
	}
	else if (iLocal_50 == 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[5] = 1;
				}
			}
			else
			{
				iLocal_106[5] = 0;
			}
		}
	}
	else if (iLocal_50 == 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[6] = 1;
				}
			}
			else
			{
				iLocal_106[6] = 0;
			}
		}
	}
	else if (iLocal_50 == 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[7] = 1;
				}
			}
			else
			{
				iLocal_106[7] = 0;
			}
		}
	}
	else if (iLocal_50 == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[8] = 1;
				}
			}
			else
			{
				iLocal_106[8] = 0;
			}
		}
	}
	else if (iLocal_50 == 10)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[9] = 1;
				}
			}
			else
			{
				iLocal_106[9] = 0;
			}
		}
	}
	iLocal_50++;
	if (iLocal_50 > 10)
	{
		iLocal_50 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_106[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_102)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_2()//Position - 0x63E
{
	struct<3> Var0;
	
	switch (iLocal_49)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_49++;
			}
			break;
		
		case 1:
			iLocal_123 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1);
			iLocal_125 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_123, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_23(&iLocal_125);
			iLocal_49++;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if ((func_13(iLocal_125, iLocal_123, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || func_13(iLocal_126, iLocal_124, &Local_127, &uLocal_134, 0, 1, 0, 1, 1)) || (GlobalFunc_877(Var0, 4, 20, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_125))
				{
					TASK::TASK_COMBAT_PED(iLocal_125, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!GlobalFunc_226(&uLocal_135))
				{
					GlobalFunc_7731(&uLocal_135);
				}
				iLocal_49++;
			}
			break;
		
		case 3:
			if (GlobalFunc_226(&uLocal_135))
			{
				if (GlobalFunc_4981(&uLocal_135) > 15f)
				{
					iLocal_124 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1);
					iLocal_126 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_23(&iLocal_126);
					TASK::TASK_COMBAT_PED(iLocal_126, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_49++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					}
					if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_3();
						iLocal_49 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_3();
					iLocal_49 = 0;
				}
			}
			break;
	}
}

void func_3()//Position - 0x8BA
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		PED::DELETE_PED(&iLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		PED::DELETE_PED(&iLocal_126);
	}
}

int func_4(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x8FE
{
	if (SYSTEM::VDIST2(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_123) && ENTITY::DOES_ENTITY_EXIST(iLocal_125)) && ENTITY::DOES_ENTITY_EXIST(iLocal_124)) && ENTITY::DOES_ENTITY_EXIST(iLocal_126))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_123) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_123))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_125) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_125))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_124) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_124))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_126) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_126))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}









int func_13(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x180E
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!GlobalFunc_747(*uParam2, 1))
		{
			if (GlobalFunc_7501(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 4))
		{
			if (GlobalFunc_7500(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 8))
		{
			if (GlobalFunc_4390(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !GlobalFunc_747(*uParam2, 128);
		if (bParam4)
		{
			if (func_14(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_14(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1936
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (GlobalFunc_2265(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_6440(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}









void func_23(int iParam0)//Position - 0x1EE8
{
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, 1);
	PED::SET_PED_ACCURACY(*iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(*iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, 0);
	PED::SET_PED_SEEING_RANGE(*iParam0, 1000f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
}

void func_24()//Position - 0x1F6A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_573)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_568))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_568))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_568, 101, "PrisonHeli", 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_569))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_569, 0f, 4f, -2f) };
				TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_569, Var0);
			}
			if (bLocal_571)
			{
				if (!GlobalFunc_4724())
				{
					bLocal_571 = false;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_568, 0, 0);
				}
			}
			else if (GlobalFunc_4724())
			{
				bLocal_571 = true;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_568, 1, 0);
			}
			if (bLocal_571)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_568, 1) };
				if (SYSTEM::VDIST2(Local_311, Var3) < 90000f)
				{
					if (!iLocal_572)
					{
						iLocal_572 = 1;
					}
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_570))
		{
			HUD::REMOVE_BLIP(&uLocal_570);
		}
	}
}


void func_26()//Position - 0x205E
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_628.f_18[0])
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (!bLocal_105)
		{
			if (SYSTEM::VDIST2(Var1, Local_624) < 5625f)
			{
				iLocal_627 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_628.f_27[iVar0]))
		{
			if (!Local_628.f_18[iVar0])
			{
				if (func_13(Local_628.f_27[iVar0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || iLocal_627)
				{
					TASK::TASK_COMBAT_PED(Local_628.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_628.f_18[iVar0] = 1;
				}
			}
			if (!Local_628.f_18[iVar0])
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_628.f_27[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_628.f_36[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_628.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_628.f_31[iVar0]))
		{
			if (PED::IS_PED_INJURED(Local_628.f_31[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_628.f_40[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_628.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_628.f_22[0])
	{
		if (!PED::IS_PED_INJURED(Local_628.f_31[0]))
		{
			if ((func_13(Local_628.f_31[0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				TASK::CLEAR_PED_TASKS(Local_628.f_31[0]);
				TASK::TASK_COMBAT_PED(Local_628.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_628.f_22[0] = 1;
			}
		}
	}
	if (!Local_628.f_22[1])
	{
		if (!PED::IS_PED_INJURED(Local_628.f_31[1]))
		{
			if ((func_13(Local_628.f_31[1], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				TASK::CLEAR_PED_TASKS(Local_628.f_31[1]);
				TASK::TASK_COMBAT_PED(Local_628.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_628.f_22[1] = 1;
			}
		}
	}
	if (!Local_628.f_22[2])
	{
		if (!PED::IS_PED_INJURED(Local_628.f_31[2]))
		{
			if ((func_13(Local_628.f_31[2], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				TASK::CLEAR_PED_TASKS(Local_628.f_31[2]);
				TASK::TASK_COMBAT_PED(Local_628.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_628.f_22[2] = 1;
			}
		}
	}
	if (!Local_628.f_22[3])
	{
		if (!PED::IS_PED_INJURED(Local_628.f_31[3]))
		{
			if ((func_13(Local_628.f_31[3], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				TASK::CLEAR_PED_TASKS(Local_628.f_31[3]);
				TASK::TASK_COMBAT_PED(Local_628.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_628.f_22[3] = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_628.f_27[1]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_628.f_27[1]))
		{
			if (!Local_628.f_22[0])
			{
				if (!PED::IS_PED_INJURED(Local_628.f_31[0]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_628.f_31[0], Local_628.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[1])
			{
				if (!PED::IS_PED_INJURED(Local_628.f_31[1]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_628.f_31[1], Local_628.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_628.f_27[2]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_628.f_27[2]))
		{
			if (!Local_628.f_22[2])
			{
				if (!PED::IS_PED_INJURED(Local_628.f_31[2]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_628.f_31[2], Local_628.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[3])
			{
				if (!PED::IS_PED_INJURED(Local_628.f_31[3]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_628.f_31[3], Local_628.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_27()//Position - 0x24C8
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_418++;
	if (iLocal_418 >= 30)
	{
		if (!bLocal_105)
		{
			if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_317.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_317.f_64[iVar0]))
					{
						if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
							{
								PED::SET_PED_ACCURACY(Local_317.f_64[iVar0], 10);
								iLocal_417 = 1;
							}
						}
						else if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_317.f_64[iVar0], 10);
							iLocal_417 = 1;
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_317.f_64[iVar0], 100);
							iLocal_417 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_417 = 0;
			}
		}
		iLocal_418 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_317.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_317.f_64[iVar0]))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			}
			if ((((func_13(Local_317.f_64[iVar0], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || MISC::IS_BULLET_IN_AREA(Local_317[iVar0 /*3*/], 20f, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(Local_317[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_317[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_417) || func_30(&(Local_317.f_64[iVar0])))
			{
				if (!GlobalFunc_39(5))
				{
					if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_118)
						{
							func_28(iVar0);
						}
					}
					else
					{
						func_28(iVar0);
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_317.f_64[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
					Local_317.f_53[iVar0] = 0;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_317.f_75[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_317.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uLocal_407[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_407[iVar0])) && ENTITY::DOES_ENTITY_EXIST(uLocal_403[iVar0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_403[iVar0]))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_407[iVar0], 0f, 3.5f, -2f) };
			TASK::TASK_VEHICLE_AIM_AT_COORD(uLocal_407[iVar0], Var1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_403[iVar0], 0, 0);
			if (iLocal_411[iVar0])
			{
				if (!GlobalFunc_4724())
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_403[iVar0]))
					{
						iLocal_411[iVar0] = 0;
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_403[iVar0], 0, 0);
					}
				}
			}
			else if (GlobalFunc_4724())
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_403[iVar0]))
				{
					iLocal_411[iVar0] = 1;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_403[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_415 > 20f)
	{
		bLocal_416 = false;
	}
	else if (fLocal_415 < -20f)
	{
		bLocal_416 = true;
	}
	if (bLocal_416)
	{
		fLocal_415 = (fLocal_415 + 0.25f);
	}
	else
	{
		fLocal_415 = (fLocal_415 - 0.25f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[0]))
	{
		ENTITY::SET_ENTITY_HEADING(uLocal_403[0], (53f + fLocal_415));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[1]))
	{
		ENTITY::SET_ENTITY_HEADING(uLocal_403[1], (13f + fLocal_415));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[2]))
	{
		ENTITY::SET_ENTITY_HEADING(uLocal_403[2], (250f + fLocal_415));
	}
}

void func_28(int iParam0)//Position - 0x289E
{
	if (!Local_317.f_53[iParam0])
	{
		TASK::TASK_SHOOT_AT_ENTITY(Local_317.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
		PED::SET_PED_SEEING_RANGE(Local_317.f_64[iParam0], 1000f);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_317.f_64[iParam0]);
		Local_317.f_53[iParam0] = 1;
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
}


int func_30(var uParam0)//Position - 0x291C
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_31()//Position - 0x296E
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 || GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 150, 0))
		{
			if (AUDIO::PREPARE_ALARM("PRISON_ALARMS"))
			{
				AUDIO::START_ALARM("PRISON_ALARMS", 0);
			}
		}
		else
		{
			AUDIO::STOP_ALARM("PRISON_ALARMS", 0);
		}
	}
}

void func_32()//Position - 0x29C3
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			GlobalFunc_5312(&Local_127, 2);
		}
		else
		{
			GlobalFunc_5211(&Local_127, 2);
		}
	}
	if (iLocal_48 > 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_877(Var0, 4, 150, 0))
				{
					GlobalFunc_2427(4, 1);
					if (!GlobalFunc_226(&uLocal_141))
					{
						GlobalFunc_7731(&uLocal_141);
					}
					if (!bLocal_117)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_125) && !ENTITY::IS_ENTITY_DEAD(iLocal_125))
						{
							GlobalFunc_1286(&uLocal_144, 8, iLocal_125, "TANNOY", 0, 1);
							if (GlobalFunc_10641(&uLocal_144, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_105 = true;
								bLocal_117 = true;
							}
						}
					}
				}
				else
				{
					GlobalFunc_2427(4, 0);
					if (GlobalFunc_226(&uLocal_141))
					{
						GlobalFunc_6715(&uLocal_141);
					}
					bLocal_105 = false;
				}
			}
			else
			{
				GlobalFunc_2427(4, 0);
				if (GlobalFunc_226(&uLocal_141))
				{
					GlobalFunc_6715(&uLocal_141);
				}
				bLocal_105 = false;
			}
			if (bLocal_105)
			{
				if (GlobalFunc_226(&uLocal_141))
				{
					if (GlobalFunc_4981(&uLocal_141) > 10f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							bLocal_118 = true;
							bLocal_105 = false;
							GlobalFunc_2427(4, 0);
						}
					}
				}
			}
			if (!bLocal_102)
			{
				if (bLocal_117)
				{
					if (!GlobalFunc_111())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_102 = true;
				}
			}
			if (!bLocal_105)
			{
				if (GlobalFunc_877(Var0, 4, 100, 0))
				{
					if (!bLocal_102)
					{
						if (bLocal_117)
						{
							if (!GlobalFunc_111())
							{
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_102 = true;
							}
						}
						else
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
					func_33();
				}
			}
			iLocal_48 = 0;
		}
	}
	iLocal_48++;
}

void func_33()//Position - 0x2BE1
{
	int iVar0;
	
	if (!iLocal_101)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_51[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_64[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_101 = 1;
	}
}
























void func_57()//Position - 0x355C
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}

void func_58()//Position - 0x3576
{
	func_60();
	func_59();
}

void func_59()//Position - 0x3586
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_628.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_628.f_27[iVar0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_628.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_628.f_27[iVar0], 1000);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_628.f_27[iVar0], -183807561);
			PED::_0xA9B61A329BFDCBEA(Local_628.f_27[iVar0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_628.f_27[iVar0], 1);
			if (!PED::IS_PED_INJURED(Local_628.f_27[iVar0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_60()//Position - 0x3640
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_628.f_27[iVar0]))
		{
			Local_628.f_27[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_628[iVar0 /*3*/], Local_628.f_10[iVar0], 1, 1);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_628[1 /*3*/], Local_628.f_10[1], -2f, 0f, 0f) };
	Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_628[1 /*3*/], Local_628.f_10[1], -1f, 0f, 0f) };
	Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_628[2 /*3*/], Local_628.f_10[2], 1f, 0f, 0f) };
	Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_628[2 /*3*/], Local_628.f_10[2], -1f, 0f, 0f) };
	Local_628.f_31[0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var1, Local_628.f_10[1], 1, 1);
	Local_628.f_31[1] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var4, Local_628.f_10[1], 1, 1);
	Local_628.f_31[2] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var7, Local_628.f_10[2], 1, 1);
	Local_628.f_31[3] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var10, Local_628.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_628.f_31[iVar0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_628.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_628.f_31[iVar0], 500);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_628.f_31[iVar0], -183807561);
			PED::SET_PED_STEERS_AROUND_PEDS(Local_628.f_31[iVar0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_628.f_31[iVar0], 1);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}

void func_61()//Position - 0x3805
{
	if (bLocal_573)
	{
		iLocal_568 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_568, 1, 1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_568);
		ENTITY::SET_ENTITY_VELOCITY(iLocal_568, 0f, 0f, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_568, 500);
		if (GlobalFunc_4724())
		{
			bLocal_571 = true;
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_568, 1, 0);
		}
		iLocal_569 = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		PED::SET_PED_INTO_VEHICLE(iLocal_569, iLocal_568, -1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_568))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_568, 101, "PrisonHeli", 1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
	}
}

void func_62()//Position - 0x38BA
{
	func_67();
	func_66();
	func_65();
	func_64();
	func_63();
}

void func_63()//Position - 0x38D6
{
	Local_419[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_419[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_419[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_419[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_01");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_419[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_419[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_419[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_02");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_419[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_419[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_419[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_03");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_419[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_419[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_419[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_04");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_419[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_419[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_419[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_05");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_419[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_419[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_419[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_06");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_419[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_419[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_419[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_07");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_419[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_419[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_419[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_08");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_419[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_419[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_419[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_419[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_10");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_64()//Position - 0x4425
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_317.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_317.f_64[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_317.f_64[iVar0], -183807561);
			PED::SET_PED_CONFIG_FLAG(Local_317.f_64[iVar0], 132, 1);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_317.f_64[iVar0], 300f, 10);
			PED::SET_PED_SEEING_RANGE(Local_317.f_64[iVar0], 1000f);
			PED::SET_PED_ID_RANGE(Local_317.f_64[iVar0], 1000f);
			PED::SET_PED_HEARING_RANGE(Local_317.f_64[iVar0], 1000f);
			PED::SET_PED_COMBAT_ABILITY(Local_317.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_317.f_64[iVar0], 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_317.f_64[iVar0], 0, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_317.f_64[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_317.f_64[iVar0], 1);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_317.f_64[iVar0], 0f);
			PED::SET_PED_KEEP_TASK(Local_317.f_64[iVar0], 1);
			PED::SET_PED_ACCURACY(Local_317.f_64[iVar0], 20);
			PED::SET_PED_COMBAT_RANGE(Local_317.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_317.f_64[iVar0], 23, 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_317.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_317.f_64[iVar0], 1000);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_317.f_64[iVar0], 1);
			PED::SET_PED_SEEING_RANGE(Local_317.f_64[iVar0], 1000f);
			if (!PED::IS_PED_INJURED(Local_317.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					TASK::TASK_PATROL(Local_317.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_65()//Position - 0x46D2
{
	int iVar0;
	
	if (!CAM::IS_SPHERE_VISIBLE(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_403[0] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_403[0]))
		{
			uLocal_407[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_403[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_407[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_407[0], iLocal_315);
			ENTITY::SET_ENTITY_COLLISION(uLocal_403[0], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_403[0], 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_403[0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_403[0], 1);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_403[1] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_403[1]))
		{
			uLocal_407[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_403[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_407[1], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_407[1], iLocal_315);
			ENTITY::SET_ENTITY_COLLISION(uLocal_403[1], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_403[1], 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_403[1], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_403[1], 1);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_403[2] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_403[2]))
		{
			uLocal_407[2] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_403[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_407[2], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_407[2], iLocal_315);
			ENTITY::SET_ENTITY_COLLISION(uLocal_403[2], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_403[2], 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_403[2], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_403[2], 1);
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_407[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_407[iVar0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_403[iVar0]))
		{
			if (GlobalFunc_4724())
			{
				iLocal_411[iVar0] = 1;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_403[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_66()//Position - 0x497B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_317.f_64[iVar0]))
		{
			Local_317.f_64[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_317[iVar0 /*3*/], Local_317.f_31[iVar0], 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

void func_67()//Position - 0x49DC
{
	Local_317[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_317[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_317[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_317[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_317[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_317[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_317[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_317[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_317[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_317[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_317.f_31[0] = 248.9733f;
	Local_317.f_31[1] = 45.8793f;
	Local_317.f_31[2] = 186.3656f;
	Local_317.f_31[3] = 313.5206f;
	Local_317.f_31[4] = 95.9574f;
	Local_317.f_31[5] = 289.3531f;
	Local_317.f_31[6] = 13.7511f;
	Local_317.f_31[7] = 0f;
	Local_317.f_31[8] = 208.5786f;
	Local_317.f_31[9] = 280.9389f;
}

int func_68()//Position - 0x4B4C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_628.f_14[iVar0]))
		{
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	return 1;
}

int func_69()//Position - 0x4B80
{
	if (bLocal_617)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_70()//Position - 0x4BA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_317.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_71()//Position - 0x4BF3
{
	if (bLocal_573)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			return 0;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()//Position - 0x4C23
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_73()//Position - 0x4C5F
{
	int iVar0;
	
	func_74();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_628.f_14[iVar0]);
		iVar0++;
	}
}

void func_74()//Position - 0x4C8A
{
	Local_628[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_628[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_628[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_628.f_10[0] = 0f;
	Local_628.f_10[1] = 0f;
	Local_628.f_10[2] = 198.4323f;
	Local_628.f_14[0] = "PatrolGuard02";
	Local_628.f_14[1] = "PatrolGuard03";
	Local_628.f_14[2] = "PatrolGuard04";
}

void func_75()//Position - 0x4D1A
{
	int iVar0;
	
	Local_317.f_42[0] = "TowerGuard01";
	Local_317.f_42[1] = "TowerGuard02";
	Local_317.f_42[2] = "TowerGuard03";
	Local_317.f_42[3] = "TowerGuard04";
	Local_317.f_42[4] = "TowerGuard05";
	Local_317.f_42[5] = "TowerGuard06";
	Local_317.f_42[6] = "TowerGuard07";
	Local_317.f_42[7] = "TowerGuard08";
	Local_317.f_42[8] = "TowerGuard09";
	Local_317.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_317.f_42[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
}

void func_76()//Position - 0x4DCE
{
	bLocal_573 = false;
	if (GlobalFunc_4724())
	{
		iLocal_574 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
		if (iLocal_574 == 0)
		{
			bLocal_573 = true;
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PrisonHeli");
		}
		else
		{
			bLocal_573 = false;
		}
	}
}

void func_77()//Position - 0x4E12
{
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
	STREAMING::REQUEST_MODEL(joaat("polmav"));
}

void func_78()//Position - 0x4E35
{
	iLocal_314 = iLocal_314;
	iLocal_314 = 0;
	func_79();
	func_32();
	Local_127.f_4 = 75;
	Local_127.f_6 = 15;
	OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Guards", &iLocal_315);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Prisoners", &iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_316, iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_315, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_316);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_316, 1862763509);
}

void func_79()//Position - 0x4EF9
{
	Local_64[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_64[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_64[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_64[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_64[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_64[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_64[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_64[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_64[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_64[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_64[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_64[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_80()//Position - 0x500D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	if (!iLocal_103)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, 1862763509);
					iLocal_103 = 1;
				}
				if ((MISC::IS_BULLET_IN_AREA(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, 1862763509);
					iLocal_103 = 1;
				}
			}
		}
	}
}

void func_81()//Position - 0x51D5
{
	int iVar0;
	
	func_87();
	func_86();
	func_85();
	func_84();
	func_83();
	func_82();
	AUDIO::STOP_ALARM("PRISON_ALARMS", 1);
	if (iLocal_103)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -183807561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_51[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_51[iVar0]);
		}
		iVar0++;
	}
	OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	OBJECT::_DOOR_CONTROL(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_82()//Position - 0x528A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_126);
	}
}

void func_83()//Position - 0x52CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_628.f_27[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_628.f_36[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_628.f_36[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_628.f_27[iVar0]))
			{
				PED::DELETE_PED(&(Local_628.f_27[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_628.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_628.f_31[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_628.f_40[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_628.f_40[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_628.f_31[iVar0]))
			{
				PED::DELETE_PED(&(Local_628.f_31[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_628.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_84()//Position - 0x53AE
{
	if (HUD::DOES_BLIP_EXIST(uLocal_620))
	{
		HUD::REMOVE_BLIP(&uLocal_620);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_618))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_618);
	}
}

void func_85()//Position - 0x53D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_575[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_596[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_596[iVar0]));
			}
			PED::DELETE_PED(&(uLocal_575[iVar0]));
		}
		iVar0++;
	}
}

void func_86()//Position - 0x5425
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_403[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_403[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_407[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_407[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_317.f_64[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_317.f_75[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_317.f_75[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_317.f_64[iVar0]))
			{
				PED::DELETE_PED(&(Local_317.f_64[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_317.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_87()//Position - 0x54DE
{
	if (HUD::DOES_BLIP_EXIST(uLocal_570))
	{
		HUD::REMOVE_BLIP(&uLocal_570);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_568))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_568))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_568);
			PED::DELETE_PED(&iLocal_569);
		}
		else
		{
			GlobalFunc_4711(&iLocal_568, &iLocal_569);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_568);
		}
	}
}


