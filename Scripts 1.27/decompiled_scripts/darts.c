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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<9> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
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
	bool bLocal_132 = 0;
	float fLocal_133 = 0f;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	int iLocal_150[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_162 = 0;
	struct<68> Local_163 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	var uLocal_247 = 8;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 2;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 8;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 8;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	float fLocal_277 = 0f;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	var uLocal_286[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	bool bLocal_297 = 0;
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	bool bLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	struct<3> Local_357 = { 0, 0, 0 } ;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	float fLocal_375 = 0f;
	float fLocal_376 = 0f;
	float fLocal_377 = 0f;
	float fLocal_378 = 0f;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	char* sLocal_381 = NULL;
	char* sLocal_382 = NULL;
	int iLocal_383 = 0;
	char* sLocal_384 = NULL;
	char* sLocal_385 = NULL;
	char* sLocal_386[3] = { NULL, NULL, NULL };
	char* sLocal_390[3] = { NULL, NULL, NULL };
	char* sLocal_394[3] = { NULL, NULL, NULL };
	char* sLocal_398[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	struct<3> Var471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1767;
	bool bVar1768;
	bool bVar1769;
	bool bVar1770;
	var uVar1771;
	int iVar1772;
	int iVar1773;
	int iVar1774;
	float fVar1775;
	float fVar1776;
	struct<3> Var1777;
	struct<3> Var1780;
	struct<3> Var1783;
	struct<3> Var1786;
	struct<3> Var1789;
	char* sVar1792;
	var uVar1793;
	var uVar1796;
	var uVar1799;
	var uVar1802[20];
	var uVar1823;
	int iVar1824;
	int iVar1825;
	int iVar1826;
	int iVar1827;
	int iVar1828;
	int iVar1829;
	float fVar1830;
	int iVar1831;
	
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
	iLocal_27 = joaat("prop_dart_1");
	iLocal_28 = joaat("prop_dart_2");
	iLocal_31 = joaat("prop_dart_bd_cab_01");
	fLocal_54 = 0.063f;
	Local_55 = { -0.0035f, 0f, -0.001f };
	iLocal_59 = joaat("prop_target_bull");
	Local_84 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_91 = 0.1f;
	iLocal_102 = 3;
	fLocal_105 = 80f;
	fLocal_106 = 140f;
	fLocal_107 = 180f;
	iLocal_113 = 1;
	iLocal_114 = 65;
	iLocal_115 = 49;
	iLocal_116 = 64;
	iLocal_139 = 65;
	iLocal_141 = 660;
	fLocal_146 = 0.27f;
	fLocal_147 = 0.1f;
	fLocal_148 = -120f;
	fLocal_149 = 127f;
	fLocal_277 = ((0.05f + 0.275f) - 0.01f);
	Local_283 = { 500f, 500f, 500f };
	bLocal_298 = true;
	Local_363 = { -573.1373f, 294.0269f, 78.1765f };
	Local_366 = { -574.1169f, 292.7964f, 78.1766f };
	Local_369 = { 1995.295f, 3050.084f, 46.91535f };
	Local_372 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_375 = 172.6813f;
	fLocal_376 = 274.5094f;
	fLocal_377 = 142.6717f;
	fLocal_378 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1773 = 0;
	sLocal_384 = "facials@gen_female@variations@happy";
	switch (GlobalFunc_6712(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			sLocal_385 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_385 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_385 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_386[0] = "mood_happy_1";
	sLocal_386[1] = "mood_happy_2";
	sLocal_386[2] = "mood_happy_3";
	sLocal_390[0] = "darts_outro_01_guy1";
	sLocal_390[1] = "darts_outro_02_guy2";
	sLocal_390[2] = "darts_outro_03_guy2";
	sLocal_394[0] = "darts_outro_01_guy2";
	sLocal_394[1] = "darts_outro_02_guy1";
	sLocal_394[2] = "darts_outro_03_guy1";
	sLocal_398[0] = "darts_outro_01_cam";
	sLocal_398[1] = "darts_outro_02_cam";
	sLocal_398[2] = "darts_outro_03_cam";
	uLocal_286[0] = PLAYER::PLAYER_PED_ID();
	bLocal_301 = true;
	Var1777 = { 1992.293f, 3050.583f, 47.98973f };
	Var1780 = { -572.0406f, 294.1958f, 79.9374f };
	func_476();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_325 = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_322 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_322 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_320 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_325 == 2)
			{
				ScriptParam_0 = { Var1780 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1777 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1783, 0);
				ScriptParam_0.f_3 = Var1783.f_2;
			}
		}
	}
	else
	{
		Var1783 = { ENTITY::GET_ENTITY_COORDS(ScriptParam_0.f_4, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
	{
		GlobalFunc_5779(iLocal_320, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(GlobalFunc_451(), 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(GlobalFunc_451(), 0, 0);
		}
		uLocal_286[1] = GlobalFunc_451();
	}
	else
	{
		MISC::SET_MISSION_FLAG(1);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_10716();
		func_445(&Var0, &Var508, &Var1191);
	}
	HUD::DISPLAY_AREA_NAME(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	GlobalFunc_7632(1);
	uLocal_316 = func_440(GlobalFunc_6712(uLocal_286[0]), 1);
	fVar1775 = (SYSTEM::TO_FLOAT(uLocal_316) / 100f);
	fVar1776 = (fVar1775 * 1200f);
	iLocal_141 = SYSTEM::ROUND(fVar1776);
	if (iLocal_141 < 660)
	{
		iLocal_141 = 660;
	}
	GlobalFunc_601(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_308 && Var0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var477, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_0.f_5) && !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) || (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()) && PED::IS_PED_INJURED(GlobalFunc_451())))
		{
			func_445(&Var0, &Var508, &Var1191);
		}
		if (!PED::IS_PED_INJURED(uLocal_286[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_286[0], 239, 1);
			PED::SET_PED_RESET_FLAG(uLocal_286[0], 124, 1);
			GlobalFunc_187();
			PAD::_0x7F4724035FDCA1DD(0);
			PAD::_0x7F4724035FDCA1DD(2);
			iVar1774 = 0;
			while (iVar1774 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1802, -1))
			{
				if (uVar1802[iVar1774] != uLocal_286[1])
				{
					if (!PED::IS_PED_INJURED(uVar1802[iVar1774]))
					{
						PED::SET_PED_RESET_FLAG(uVar1802[iVar1774], 240, 1);
					}
				}
				iVar1774++;
			}
			switch (Var0)
			{
				case 0:
					HUD::CLEAR_HELP(1);
					func_437(&(Var0.f_243), &ScriptParam_0);
					func_436(Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Local_357 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_360 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_357, Local_360, 65f, 0, 2);
						CAM::SET_CAM_FOV(uLocal_128, 30f);
					}
					GlobalFunc_2420();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						MISC::CLEAR_AREA(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_323);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_323);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_323);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_323);
						}
						Local_84 = { Local_84 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar1824 = 0;
					while (iVar1824 < 2)
					{
						iVar1825 = 0;
						while (iVar1825 < 3)
						{
							func_434(&(Var0.f_5[iVar1824 /*79*/][iVar1825 /*26*/]), iVar1824);
							iVar1825++;
						}
						iVar1824++;
					}
					iVar1826 = 0;
					while (iVar1826 < 3)
					{
						func_434(&(Var0.f_164[iVar1826 /*26*/]), 0);
						iVar1826++;
					}
					iVar464 = 2;
					func_433(0);
					func_431(&Var477, iLocal_325, Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Var1783 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_243, Var477.f_18) };
					}
					func_428(&Var477, &Var508);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_425(&Var477, &Var508))
					{
						func_422(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_379 = GlobalFunc_6712(uLocal_286[0]);
						switch (iLocal_379)
						{
							case 0:
								sLocal_381 = func_421("MICHAEL");
								if (!MISC::IS_BIT_SET(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_381 = func_421("FRANKLIN");
								bLocal_305 = true;
								if (!MISC::IS_BIT_SET(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_381 = func_421("TREVOR");
								if (!MISC::IS_BIT_SET(Global_97314, 0))
								{
									sVar1792 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1792 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
						{
							iLocal_380 = GlobalFunc_6712(GlobalFunc_451());
							if (iLocal_380 == 145)
							{
								iLocal_380 = func_419(GlobalFunc_451());
							}
							switch (iLocal_380)
							{
								case 0:
									sLocal_382 = func_421("MICHAEL");
									break;
								
								case 1:
									sLocal_382 = func_421("FRANKLIN");
									break;
								
								case 2:
									sLocal_382 = func_421("TREVOR");
									break;
								
								case 19:
									sLocal_382 = func_421("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(GlobalFunc_451(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_382 = func_421("JIMMY");
									break;
								
								default:
									sLocal_382 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1772 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_325 == 2)
							{
								if (iVar1772 < 51)
								{
									sLocal_382 = func_421("RAYMOND");
									iLocal_383 = 954610991;
								}
								else if (iVar1772 < 101)
								{
									sLocal_382 = func_421("JOHAN");
									iLocal_383 = 94453331;
								}
								else if (iVar1772 < 151)
								{
									sLocal_382 = func_421("STAN");
									iLocal_383 = 1891555423;
								}
								else
								{
									sLocal_382 = func_421("VINCE");
									iLocal_383 = -1067630349;
								}
							}
							else if (iVar1772 < 51)
							{
								sLocal_382 = func_421("KRISTY");
								iLocal_383 = 885327384;
							}
							else if (iVar1772 < 101)
							{
								sLocal_382 = func_421("MARLENE");
								iLocal_383 = -1791000994;
							}
							else if (iVar1772 < 151)
							{
								sLocal_382 = func_421("LORIE");
								iLocal_383 = 1954368234;
							}
							else
							{
								sLocal_382 = func_421("SHELLEY");
								iLocal_383 = -863218904;
							}
						}
						uLocal_58 = OBJECT::CREATE_OBJECT(iLocal_59, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!CAM::_0x705A276EBFF3133D())
					{
						uVar1823 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_416(Var0.f_243.f_4, Var465, &uVar1802, &ScriptParam_0);
						func_414(&Var477, sLocal_381, sLocal_382);
						TASK::CLEAR_PED_TASKS(uLocal_286[1]);
						uLocal_324 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
						}
						GlobalFunc_1286(&(Var0.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_381, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
						{
							if (iLocal_325 == 2)
							{
								GlobalFunc_1286(&(Var0.f_257), 3, uLocal_286[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								GlobalFunc_1286(&(Var0.f_257), 3, uLocal_286[1], "DartsMelHick1", 0, 1);
							}
							iVar1773 = -1;
						}
						else
						{
							GlobalFunc_1286(&(Var0.f_257), 3, GlobalFunc_451(), sLocal_382, 0, 1);
							GlobalFunc_6715(&uVar1799);
							iVar1773 = 6;
						}
						if (!MISC::IS_BIT_SET(Global_97314, 0))
						{
							iVar1773 = -1;
						}
						else
						{
							iVar1773 = 3;
						}
						func_411(&Var477, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!PED::IS_PED_INJURED(uLocal_286[1]) && PED::IS_PED_ON_FOOT(uLocal_286[0])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_286[0], 1)) && PED::IS_PED_ON_FOOT(uLocal_286[1])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_286[1], 1))
					{
						bLocal_296 = func_409(&uLocal_312);
						if ((GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_314 + 1000) && iVar1773 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar1773 != 9)
						{
							GlobalFunc_6685(0);
							GlobalFunc_4935();
							iVar1773 = 9;
						}
						switch (iVar1773)
						{
							case -1:
								if (!PED::IS_PED_INJURED(uLocal_286[1]))
								{
									uLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_324 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_324, uLocal_318, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(uLocal_324, 1);
									CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_286[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_286[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_286[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(uLocal_286[0], "mini@dartsintro", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar1823, uLocal_318, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									GlobalFunc_8389(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318))
								{
									if (!bVar1769)
									{
										if (GlobalFunc_4986(&uVar1799) > 1.5f)
										{
											GlobalFunc_5122(uLocal_286[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											GlobalFunc_235(&uVar1799);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_286[0]))
									{
										if (!bVar1770)
										{
											if (!GlobalFunc_226(&uVar1799))
											{
												GlobalFunc_6715(&uVar1799);
											}
											else if (GlobalFunc_4986(&uVar1799) > 0.5f)
											{
												func_397(uLocal_286[1]);
												GlobalFunc_235(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									switch (iLocal_30)
									{
										case 0:
											GlobalFunc_8389(&uVar1799);
											GlobalFunc_159("DARTS_HOW_TO_2", -1);
											iLocal_30++;
											break;
										
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.25f)
											{
												GlobalFunc_8389(&uVar1799);
												GlobalFunc_159("DARTS_HOW_TO_3", -1);
												iLocal_30++;
											}
											break;
										
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.55f)
											{
												GlobalFunc_159("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
										
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.85f)
											{
												GlobalFunc_159("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.95f)
									{
										iLocal_308 = 1;
										iVar1773++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_286[1]))
									{
										func_393(Var0.f_243.f_1, Var0.f_243.f_4, func_395(2), func_394(0), 0, 1);
										iLocal_30 = 0;
										HUD::CLEAR_HELP(1);
										CAM::DESTROY_CAM(uLocal_324, 0);
										TASK::CLEAR_PED_TASKS(uLocal_286[0]);
										TASK::CLEAR_PED_TASKS(uLocal_286[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1823, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar1823);
										AUDIO::STOP_AUDIO_SCENE(func_392(0));
										GlobalFunc_235(&uVar1799);
										Var0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(uLocal_286[1]))
								{
									uLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_324 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_324, uLocal_318, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(uLocal_324, 1);
									CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_286[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_286[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_286[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(uLocal_286[0], "mini@dartsintro_alt1", sVar1792, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar1823, uLocal_318, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									GlobalFunc_8389(&uVar1799);
									iVar1773++;
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318))
								{
									if (!bVar1769)
									{
										if (GlobalFunc_4986(&uVar1799) > 0.5f)
										{
											GlobalFunc_5122(uLocal_286[0], "DARTS_REQUEST_GAME", 6);
											bVar1769 = true;
											GlobalFunc_235(&uVar1799);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_286[0]))
									{
										if (!bVar1770)
										{
											if (!GlobalFunc_226(&uVar1799))
											{
												GlobalFunc_6715(&uVar1799);
											}
											else if (GlobalFunc_4986(&uVar1799) > 0.25f)
											{
												func_397(uLocal_286[1]);
												GlobalFunc_235(&uVar1799);
												bVar1770 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.95f)
									{
										iLocal_308 = 1;
										iVar1773++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_286[1]))
									{
										func_391();
										CAM::DESTROY_CAM(uLocal_324, 0);
										TASK::CLEAR_PED_TASKS(uLocal_286[0]);
										TASK::CLEAR_PED_TASKS(uLocal_286[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1823, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar1823);
										AUDIO::STOP_AUDIO_SCENE(func_392(0));
										GlobalFunc_235(&uVar1799);
										Var0 = 6;
										iVar1773 = 0;
									}
								}
								break;
							
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_308 = 1;
									iLocal_30 = 0;
									HUD::CLEAR_HELP(1);
									if (!PED::IS_PED_INJURED(uLocal_286[1]))
									{
										ENTITY::SET_ENTITY_COORDS(uLocal_286[0], Var465, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_286[0], Var0.f_243.f_4);
										ENTITY::SET_ENTITY_COORDS(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_286[1], Var0.f_243.f_4);
										TASK::CLEAR_PED_TASKS(uLocal_286[0]);
										TASK::CLEAR_PED_TASKS(uLocal_286[1]);
									}
									CAM::DESTROY_CAM(uLocal_324, 0);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1823, -1000f, 0);
									OBJECT::DELETE_OBJECT(&uVar1823);
									if (!MISC::IS_BIT_SET(Global_97314, 0))
									{
										func_393(Var0.f_243.f_1, Var0.f_243.f_4, func_395(2), func_394(0), 0, 1);
									}
									else
									{
										func_391();
									}
									AUDIO::STOP_AUDIO_SCENE(func_392(0));
									GlobalFunc_235(&uVar1799);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0 = 6;
									iVar1773 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1773)
					{
						case 0:
							iLocal_314 = MISC::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(uLocal_286[1]))
							{
								ENTITY::SET_ENTITY_COORDS(uLocal_286[0], Var465, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_286[0], Var0.f_243.f_4);
								ENTITY::SET_ENTITY_COORDS(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_286[1], Var0.f_243.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_392(1));
							iVar1773 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - iLocal_314) > 1500)
							{
								func_389(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1773++;
							}
							break;
						
						case 2:
							if (!GlobalFunc_7730(&(Var508.f_57), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_392(1));
								iVar1773 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!MISC::IS_BIT_SET(Global_97314, 0))
					{
						if (func_385(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1796))
						{
							MISC::SET_BIT(&Global_97314, 0);
							Var0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(uLocal_119, 1);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar1773)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()))
							{
								if (!MISC::IS_BIT_SET(Global_97314, 10))
								{
									MISC::SET_BIT(&Global_97314, 10);
								}
								else
								{
									MISC::CLEAR_BIT(&Global_97314, 10);
								}
								func_383(&Var508);
								iVar1773++;
							}
							else
							{
								func_383(&Var508);
								iVar1773++;
							}
							break;
						
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_133 != GRAPHICS::_GET_ASPECT_RATIO(0))
								{
									fLocal_133 = GRAPHICS::_GET_ASPECT_RATIO(0);
									CAM::SET_CAM_FOV(uLocal_119, func_382(fLocal_133));
									CAM::SET_CAM_FOV(uLocal_120, func_382(fLocal_133));
								}
							}
							if (func_323(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_392(1));
								if (Var0.f_452 > 0)
								{
									iVar1773 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_322(&Var477, 0, 0, 0, 0);
										bVar1768 = true;
									}
									GlobalFunc_4988(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_312(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames >= 5 && Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fWinPct >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames >= 3 && Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fWinPct >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_311(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames, &iLocal_317))
						{
							func_310(&(Var508.f_666), 24, 1);
						}
						fLocal_89 = func_309(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames);
						fLocal_90 = func_308(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames);
						fLocal_87 = fLocal_89;
						fLocal_88 = fLocal_90;
						iLocal_150[4]++;
						if (!PED::IS_PED_INJURED(uLocal_286[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[1]);
							ENTITY::SET_ENTITY_COORDS(uLocal_286[1], Var465.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_286[1], Var0.f_243.f_4);
						}
						if (GlobalFunc_226(&uVar1793))
						{
							GlobalFunc_235(&uVar1793);
						}
						AUDIO::START_AUDIO_SCENE(func_392(2));
						func_307(uLocal_286[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_133 != GRAPHICS::_GET_ASPECT_RATIO(0))
						{
							fLocal_133 = GRAPHICS::_GET_ASPECT_RATIO(0);
							CAM::SET_CAM_FOV(uLocal_119, func_382(fLocal_133));
							CAM::SET_CAM_FOV(uLocal_120, func_382(fLocal_133));
						}
					}
					if (!bLocal_306)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_306 = true;
					}
					if (!iLocal_307)
					{
						if (bLocal_306)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_307 = 1;
							}
						}
					}
					func_225(&Var0, &Var471, &Var477, &Var508, &uVar1793);
					break;
				
				case 11:
					switch (iVar1773)
					{
						case 0:
							if (GlobalFunc_4986(&(Var0.f_254)) > 0.5f)
							{
								HUD::CLEAR_HELP(1);
								HUD::CLEAR_PRINTS();
								func_224(PLAYER::PLAYER_PED_ID());
								func_322(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1827 = 0;
								while (iVar1827 < 2)
								{
									iVar1828 = 0;
									while (iVar1828 < 3)
									{
										func_223(&(Var0.f_5[iVar1827 /*79*/][iVar1828 /*26*/]));
										iVar1828++;
									}
									func_222(&Var477, iVar1827);
									iVar1827++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										GlobalFunc_7755(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										GlobalFunc_7755(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									GlobalFunc_7755(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									GlobalFunc_7755(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1830 = GRAPHICS::_GET_ASPECT_RATIO(1);
								if (fVar1830 > 2f)
								{
									Var1786 = { 1992.294f, 3047.577f, 46.21517f };
									Var1789 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var1786 = { 1992.336f, 3047.924f, 46.21517f };
									Var1789 = { 0f, 0f, 136.74f };
								}
								iVar1829 = func_219();
								uLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(Var1786, Var1789, 2);
								uLocal_324 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_324, uLocal_318, sLocal_398[iVar1829], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(uLocal_324, 1);
								CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
								if (!PED::IS_PED_INJURED(uLocal_286[0]) && !PED::IS_PED_INJURED(uLocal_286[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1831 = 1;
										}
										else
										{
											iVar1831 = 0;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_218(&uLocal_286, iVar1831);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_390[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_394[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_385, sLocal_386[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_217(&uLocal_286);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_390[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_394[iVar1829], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(uLocal_286[1], sLocal_384, sLocal_386[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1773++;
							}
							break;
						
						case 1:
							if (!GlobalFunc_7753(&(Var508.f_62), 1))
							{
								iVar1773++;
							}
							break;
						
						case 2:
							GlobalFunc_235(&(Var0.f_254));
							iLocal_302 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_392(3));
							func_391();
							if (CAM::DOES_CAM_EXIST(uLocal_324))
							{
								CAM::DESTROY_CAM(uLocal_324, 0);
							}
							iVar1773 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (GlobalFunc_4986(&(Var0.f_254)) > 0.92f)
					{
						func_38(&Var0, &Var508, &Var477, &Var1191, bVar1768);
					}
					break;
				
				case 13:
					uVar1771 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
					{
						TASK::CLEAR_PED_TASKS(uLocal_286[1]);
						Var0 = 15;
					}
					switch (iVar1773)
					{
						case 0:
							TASK::CLEAR_PED_TASKS(uLocal_286[0]);
							if (!bLocal_304)
							{
								CAM::RENDER_SCRIPT_CAMS(0, bLocal_304, 3000, 1, 0, 0);
							}
							else
							{
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(uLocal_286[0], uLocal_286[1], 5000, 2049, 3);
							GlobalFunc_6715(&uVar1799);
							iVar1773++;
							break;
						
						case 1:
							if (GlobalFunc_4981(&uVar1799) > 0.1f)
							{
								if (!bVar1767)
								{
								}
								GlobalFunc_6715(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 2:
							if (GlobalFunc_4981(&uVar1799) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(uLocal_286[1]))
								{
									if (!bVar1767)
									{
										func_4(uLocal_286[0], "GENERIC_THANKS", 1, 4);
									}
								}
								GlobalFunc_6715(&uVar1799);
								iVar1773++;
							}
							break;
						
						case 3:
							if (uVar1771 || bVar1767)
							{
								Var0 = 15;
								iVar1773++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_1(uLocal_286[1]);
						iLocal_321 = 2;
						bVar1767 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_392(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_392(2));
						}
						Var0 = 13;
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_99 = 0;
						}
						func_310(&(Var508.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_445(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DDD
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1DFB
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!GlobalFunc_1456(&(uParam0->f_666), 8))
		{
			func_310(&(uParam0->f_666), 8, 1);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 16, 0);
			func_310(&(uParam0->f_666), 17, 0);
		}
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (GlobalFunc_1456(&(uParam0->f_666), 8))
	{
		func_310(&(uParam0->f_666), 8, 0);
	}
}


void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E90
{
	if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()) || iParam2)
	{
		GlobalFunc_5122(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_5117(iParam0, sParam1, sLocal_101, iParam3);
	}
}






int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x2174
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	GlobalFunc_7629();
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_35463 = 1;
	if (!uParam0->f_563)
	{
		switch (GlobalFunc_6712(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + GlobalFunc_2259(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * GlobalFunc_2259(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + GlobalFunc_2259((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (GlobalFunc_2259(30f) - GlobalFunc_2259(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		GlobalFunc_778(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = GlobalFunc_253(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = GlobalFunc_253(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = GlobalFunc_253(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						GlobalFunc_5691(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				GlobalFunc_5691(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = GlobalFunc_253((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = GlobalFunc_253((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = GlobalFunc_253((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = GlobalFunc_253((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				GlobalFunc_778(0);
			}
			return !bVar0;
		}
	}
	GlobalFunc_778(0);
	return 1;
}





void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28D7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (GlobalFunc_2258() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				GlobalFunc_726(&(uParam0->f_5));
				GlobalFunc_726(&(uParam0->f_13));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		GlobalFunc_2257();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + GlobalFunc_2259((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * GlobalFunc_2258());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = GlobalFunc_2256(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = GlobalFunc_2256(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						GlobalFunc_5277((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - GlobalFunc_2259(6f));
	fVar1 = (fVar1 + (GlobalFunc_2259(30f) - GlobalFunc_2259((2f * 2f))));
	fVar11 = (fVar2 - GlobalFunc_2259((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = GlobalFunc_253((fVar11 / (0.6f * GlobalFunc_2259(25f))), 0f, 1f);
		GlobalFunc_2257();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (GlobalFunc_2259((2f - 0.5f)) - 0.001388889f)), fVar6, GlobalFunc_2255(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + GlobalFunc_2259((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar12 = GlobalFunc_253((fVar11 / (0.8f * GlobalFunc_2259(25f))), 0f, 1f);
			func_24(uParam0, iVar17, (fVar1 + GlobalFunc_2259(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + GlobalFunc_2259(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + GlobalFunc_2259(2f));
			fVar12 = GlobalFunc_253((fVar11 / (0.6f * GlobalFunc_2259(25f))), 0f, 1f);
			GlobalFunc_2257();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + GlobalFunc_2259((2f * 0.5f))), fVar6, GlobalFunc_2255(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar12 = GlobalFunc_253((fVar11 / (0.8f * GlobalFunc_2259(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			GlobalFunc_6956(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / GlobalFunc_2258()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / GlobalFunc_2258()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(1);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			GlobalFunc_5676(&(uParam0->f_550), fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			GlobalFunc_2257();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + GlobalFunc_2253(4f)) - 0.006f);
				fVar43 = ((fVar1 + GlobalFunc_2259(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (GlobalFunc_2259(30f) - 2f));
		}
	}
}









void func_24(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3A5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, GlobalFunc_2254(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	GlobalFunc_2257();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_6956(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", GlobalFunc_5343(7, 0), (fParam4 - 0.006f), ((fParam2 + GlobalFunc_2259(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			GlobalFunc_6956(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", GlobalFunc_5343(5, 0), (fParam4 - 0.006f), ((fParam2 + GlobalFunc_2259(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			GlobalFunc_6956(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", GlobalFunc_5343(6, 0), (fParam4 - 0.006f), ((fParam2 + GlobalFunc_2259(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, GlobalFunc_2254(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	GlobalFunc_5677(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}














void func_38(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x42C5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_309)
		{
			if (func_198(uParam1, 0, &iLocal_310))
			{
				func_310(&(uParam1->f_666), 9, 0);
				iLocal_309 = 1;
			}
		}
	}
	if (iLocal_291)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_646 = GlobalFunc_7112(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_310(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_111(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_107(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					uParam1->f_680 = 0;
					func_310(&(uParam1->f_666), 9, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					iVar0 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (GlobalFunc_2385(&(uParam1->f_72)))
			{
				if (!bLocal_311)
				{
					bLocal_311 = true;
					GlobalFunc_5210(&(uParam1->f_509), 0, 0, 1, 1);
					GlobalFunc_813(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					GlobalFunc_813(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					GlobalFunc_813(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					GlobalFunc_813(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					GlobalFunc_5275(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_94(uParam1, 0, 0, iLocal_309);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_318) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_318))
		{
			bLocal_304 = true;
			if (CAM::DOES_CAM_EXIST(uLocal_324))
			{
				CAM::DESTROY_CAM(uLocal_324, 0);
				if (!PED::IS_PED_INJURED(uLocal_286[0]) && !PED::IS_PED_INJURED(uLocal_286[1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[0]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[1]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_286[0], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_286[1], 0, 0);
				}
			}
			func_93();
		}
		if (GlobalFunc_4986(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_302)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_218(&uLocal_286, iVar2);
				}
				else
				{
					func_217(&uLocal_286);
				}
				iLocal_302 = 1;
			}
		}
		if (iVar0 == 1)
		{
			HUD::CLEAR_HELP(1);
			AUDIO::STOP_AUDIO_SCENE(func_392(3));
			if (!PED::IS_PED_INJURED(uLocal_286[0]) && !PED::IS_PED_INJURED(uLocal_286[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(uLocal_286[0]);
				TASK::TASK_CLEAR_LOOK_AT(uLocal_286[1]);
			}
			GlobalFunc_5767(uParam3);
			if (bParam4)
			{
				func_322(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_29 = 1;
			GlobalFunc_235(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_302 = 0;
			iLocal_300 = 0;
			bLocal_304 = false;
			GlobalFunc_5770();
			iLocal_309 = 0;
			iLocal_280 = 0;
			uParam1->f_680 = 0;
			iLocal_310 = 0;
			bLocal_311 = false;
			GlobalFunc_6915(&(uParam1->f_72));
			GlobalFunc_2420();
		}
		else if (iVar0 == 2)
		{
			GlobalFunc_2252(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_392(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				GlobalFunc_10844(GlobalFunc_8329(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 234) || PAD::IS_CONTROL_JUST_PRESSED(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_290)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var3, 0, iLocal_290);
				iLocal_290 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_313++;
				if (iLocal_313 >= uParam0->f_436)
				{
					iLocal_313 = 0;
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var3);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_313 = (iLocal_313 - 1);
				if (iLocal_313 < 0)
				{
					iLocal_313 = (uParam0->f_436 - 1);
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var3);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 211) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 211)) && bVar1) && (iLocal_309 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_680 = 1;
			GlobalFunc_5210(&(uParam1->f_509), 0, 0, 1, 1);
			GlobalFunc_813(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			GlobalFunc_813(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			GlobalFunc_813(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_311)
			{
				GlobalFunc_813(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			GlobalFunc_5275(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		func_43(uParam3, uParam0->f_454, uParam0->f_429[iLocal_29], uParam0->f_432[iLocal_29], iLocal_150[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = GRAPHICS::_GET_ASPECT_RATIO(1);
		if (fVar6 > 2f)
		{
			Var7 = { 1992.294f, 3047.577f, 46.21517f };
			Var10 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var7 = { 1992.336f, 3047.924f, 46.21517f };
			Var10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_219();
		uLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(Var7, Var10, 2);
		uLocal_324 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_324, uLocal_318, sLocal_398[iVar13], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(uLocal_324, 1);
		CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(uLocal_286[0]) && !PED::IS_PED_INJURED(uLocal_286[1]))
		{
			if (uParam0->f_454)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_390[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_394[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_385, sLocal_386[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[1], uLocal_318, "mini@dartsoutro", sLocal_390[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_286[0], uLocal_318, "mini@dartsoutro", sLocal_394[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(uLocal_286[1], sLocal_384, sLocal_386[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_304 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = MISC::GET_GAME_TIMER();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_223(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_222(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - uParam1->f_671) > 400 && GlobalFunc_7119(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_291 = 1;
	}
}





void func_43(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x4E64
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		GlobalFunc_2263(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		GlobalFunc_2263(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	GlobalFunc_2658(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	GlobalFunc_2658(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	GlobalFunc_2658(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		GlobalFunc_2658(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		GlobalFunc_2658(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	GlobalFunc_2658(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	GlobalFunc_2261(uParam0, 0, "", 0, 0, 0, 0);
	GlobalFunc_778(1);
}




void func_47(struct<3> Param0)//Position - 0x4FFF
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bLocal_132)
	{
		CAM::SET_CAM_COORD(uLocal_130, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_130, uLocal_129, 500, 1, 1);
		bLocal_132 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(uLocal_129, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_130, 500, 1, 1);
		bLocal_132 = true;
	}
}

Vector3 func_48(struct<3> Param0)//Position - 0x504F
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_49(struct<3> Param0, bool bParam3, bool bParam4)//Position - 0x507B
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bParam3)
	{
		CAM::SET_CAM_COORD(uLocal_129, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_128, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(uLocal_128, 0);
		CAM::SET_CAM_COORD(uLocal_130, Var0);
		bLocal_132 = true;
	}
	else if (bParam4)
	{
		CAM::SET_CAM_COORD(uLocal_129, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_121, 2000, 1, 1);
		bLocal_132 = true;
	}
	else
	{
		if (bLocal_132)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_129, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_130, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(uLocal_129, 0);
	}
}












































void func_93()//Position - 0x686F
{
	CAM::SET_CAM_ACTIVE(uLocal_125, 1);
}

int func_94(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x687E
{
	if (!GlobalFunc_1456(&(uParam0->f_666), 7))
	{
		if (!GlobalFunc_1456(&(uParam0->f_666), 9))
		{
			GlobalFunc_778(1);
			GlobalFunc_5210(&(uParam0->f_509), 0, 0, 1, 1);
			GlobalFunc_813(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				GlobalFunc_813(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				GlobalFunc_813(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				GlobalFunc_813(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			GlobalFunc_5275(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 9, 1);
		}
		if (!GlobalFunc_1456(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_97(GlobalFunc_92(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), GlobalFunc_1078(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
					func_97(GlobalFunc_92(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), GlobalFunc_1078(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				else
				{
					func_97(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				GlobalFunc_7730(&(uParam0->f_57), 0, 0);
			}
			func_107(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_671) > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 216))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_310(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					GlobalFunc_1443();
					GlobalFunc_1099();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_310(&(uParam0->f_666), 9, 0);
			func_310(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}



void func_97(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x6AE7
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_955(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(3, iVar0);
		Global_1328872.f_1840[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_1840.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_1840.f_147[iVar0] = iParam3;
		Global_1328872.f_1840.f_138[iVar0] = iParam2;
		Global_1328872.f_1840.f_165[iVar0] = iParam4;
		Global_1328872.f_1840.f_174[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_1840.f_209[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_1840.f_338[iVar0] = iParam7;
		Global_1328872.f_1840.f_365[iVar0] = iParam8;
		Global_1328872.f_1840.f_347[iVar0] = iParam9;
		Global_1328872.f_1840.f_356[iVar0] = iParam10;
	}
}










void func_107(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x6E15
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!GlobalFunc_5209(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!GlobalFunc_747(uParam0->f_1, 256) || (GlobalFunc_747(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(GlobalFunc_747(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							GlobalFunc_960(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						GlobalFunc_726(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (GlobalFunc_747(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = GlobalFunc_512(bParam4, GlobalFunc_512(GlobalFunc_747(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_812(&(uParam0->f_1), 256);
		GlobalFunc_811(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}




void func_111(var uParam0, var uParam1)//Position - 0x7122
{
	func_112(uParam1, uParam0);
}

void func_112(var uParam0, var uParam1)//Position - 0x7132
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	GlobalFunc_481(&(Global_1840922.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	GlobalFunc_1394();
	GlobalFunc_7629();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	GlobalFunc_5473();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	GlobalFunc_732(1);
	GlobalFunc_1100(1);
	if (!GlobalFunc_6971())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = GlobalFunc_2407();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1835390.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1835390.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
			{
				if (Global_1835390.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_1835390.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_2406(*uParam0, Global_1835390.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
				{
					if (!GlobalFunc_2405(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 4);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 5);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 6);
				GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				GlobalFunc_2402(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(1);
			}
			else
			{
				GlobalFunc_2402(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!GlobalFunc_10149(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GlobalFunc_2406(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!GlobalFunc_2405(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						GlobalFunc_2394(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					GlobalFunc_434(&(Global_1835390.f_2823));
				}
				else if (GlobalFunc_5071(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						GlobalFunc_2394(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					GlobalFunc_434(&(Global_1835390.f_2823));
				}
				GlobalFunc_2402(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!MISC::IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GlobalFunc_2406(*uParam0, Global_1835390.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1835390.f_2780.f_1)))
					{
						if (!GlobalFunc_2405(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								GlobalFunc_2731(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						GlobalFunc_2403(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_42, 6))
					{
						GlobalFunc_5387(&Global_1839721);
						GlobalFunc_7973(uParam1, &Global_1839721);
						GlobalFunc_2392(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 4);
									GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar63 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && GlobalFunc_2405(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										GlobalFunc_5766(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (GlobalFunc_319(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (GlobalFunc_2405(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (GlobalFunc_5753(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											MISC::SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (GlobalFunc_2405(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1839721[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										GlobalFunc_2391(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										GlobalFunc_2391(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (MISC::IS_BIT_SET(Global_1835390.f_2770, iVar1))
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												GlobalFunc_7114(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												GlobalFunc_7114(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (MISC::IS_BIT_SET(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												GlobalFunc_5752(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												GlobalFunc_5752(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									GlobalFunc_2387();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar31, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											GlobalFunc_2386(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6 = (iVar6 + 1);
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 4);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 5);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 6);
						GlobalFunc_5766(*uParam0, &iVar6, iVar31, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					GlobalFunc_2402(*uParam0);
					HUD::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							GlobalFunc_2386(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					GlobalFunc_2402(*uParam0);
					GlobalFunc_7972(uParam0, uParam1);
				}
			}
		}
	}
}






















































































int func_198(var uParam0, bool bParam1, bool bParam2)//Position - 0xE572
{
	if (!iLocal_280)
	{
		func_210(&(uParam0->f_72), bParam1);
		iLocal_280 = 1;
		func_310(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_207(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (GlobalFunc_9181(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}









void func_207(int iParam0, bool bParam1)//Position - 0xED6F
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_209(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		GlobalFunc_5768(190, 131, 0, 0f, 1);
		GlobalFunc_5768(190, 103, iLocal_150[1], 0f, 0);
		GlobalFunc_5768(190, 99, iLocal_150[2], 0f, 0);
		GlobalFunc_5768(190, 109, iLocal_150[3], 0f, 0);
		GlobalFunc_5768(190, 106, iLocal_150[5], 0f, 0);
		GlobalFunc_5768(190, 2, iLocal_150[10], 0f, 0);
		GlobalFunc_5768(190, 107, iLocal_150[8], 0f, 0);
		GlobalFunc_5768(190, 116, iLocal_150[6], 0f, 0);
		iLocal_150[1] = 0;
		iLocal_150[2] = 0;
		iLocal_150[3] = 0;
		iLocal_150[5] = 0;
		iLocal_150[10] = 0;
		iLocal_150[8] = 0;
		iLocal_150[6] = 0;
	}
}


int func_209(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xEF7A
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2434575.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1683768.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_210(var uParam0, bool bParam1)//Position - 0xF0AE
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	GlobalFunc_7120(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}







void func_217(var uParam0)//Position - 0x13879
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_218(var uParam0, int iParam1)//Position - 0x138F2
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_219()//Position - 0x139BF
{
	int iVar0;
	
	if (!bLocal_305)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_319++;
		iVar0 = (iLocal_319 % 2);
	}
	return iVar0;
}



void func_222(var uParam0, int iParam1)//Position - 0x13AB0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_223(var uParam0)//Position - 0x13ACE
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
	}
	return 1;
}

void func_224(int iParam0)//Position - 0x13B1E
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_121, uLocal_119, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(uLocal_122, 1);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_121, uLocal_122, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(uLocal_124, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	CAM::POINT_CAM_AT_ENTITY(uLocal_124, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	CAM::SET_CAM_FOV(uLocal_124, 35f);
}

void func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x13B82
{
	bool bVar0;
	
	if (!CAM::IS_CAM_INTERPOLATING(uLocal_119))
	{
		bVar0 = false;
		func_306(uParam0);
		if (!bLocal_297)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					HUD::CLEAR_HELP(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_162)
			{
				if (GlobalFunc_1456(&(uParam3->f_666), 18))
				{
					if (!GlobalFunc_1456(&(uParam3->f_666), 21))
					{
						if (!MISC::IS_BIT_SET(Global_97314, 3))
						{
							GlobalFunc_159("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_97314, 3);
						}
						func_310(&(uParam3->f_666), 21, 1);
					}
					else if (!GlobalFunc_1456(&(uParam3->f_666), 20) && GlobalFunc_1456(&(uParam3->f_666), 19))
					{
						if (!MISC::IS_BIT_SET(Global_97314, 4))
						{
							GlobalFunc_159("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_97314, 4);
						}
						func_310(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				HUD::CLEAR_HELP(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_128) && uParam0->f_3 == 2)
			{
				func_305(uParam3);
			}
		}
		else
		{
			func_303(uParam3, iLocal_29);
		}
		func_302(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_299(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_291(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_284(uParam0->f_422[iLocal_29], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_PRESSED(2, 228) && iLocal_29 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_29 == 0)
			{
				func_283(iLocal_30, 0);
				if (((((!GlobalFunc_74("DARTS_SHT_USE") && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B")) && !GlobalFunc_74("DARTS_AIM_HLP")) && !GlobalFunc_74("DARTS_STD_HLP")) && !GlobalFunc_74("DARTS_FST_HLP"))
				{
					if (GlobalFunc_1456(&(uParam3->f_666), 24))
					{
						GlobalFunc_159("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartTimePlayed), iLocal_317);
						func_310(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_29] % 2) == 0 && uParam0->f_422[iLocal_29] < 41) && iLocal_30 == 0) && !iLocal_295)
				{
					if (!GlobalFunc_1456(&(uParam3->f_666), 6))
					{
						func_310(&(uParam3->f_666), 6, 1);
					}
					iLocal_295 = 1;
				}
				else if (uParam0->f_422[iLocal_29] == 50 && !iLocal_295)
				{
					if (!GlobalFunc_1456(&(uParam3->f_666), 6))
					{
						func_310(&(uParam3->f_666), 6, 1);
					}
					iLocal_295 = 1;
				}
				else if (func_272(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_292)
				{
					if (!GlobalFunc_226(uParam4))
					{
						func_270(uParam4);
					}
					else if (GlobalFunc_4981(uParam4) > 20f)
					{
						func_269(uLocal_286[(1 - iLocal_29)]);
						GlobalFunc_235(uParam4);
						iLocal_292 = 1;
					}
				}
			}
			else if (iLocal_30 == 0)
			{
				iLocal_315 = 0;
				func_268(&(uParam0->f_422), &(uParam0->f_249));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_268(&(uParam0->f_422), &(uParam0->f_249));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_252(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_251(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!GlobalFunc_1456(&(uParam3->f_666), 5))
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_234(uParam0, uParam3);
			break;
		
		case 5:
			func_227(uParam0, uParam2, uParam3);
			if (GlobalFunc_226(uParam4))
			{
				GlobalFunc_235(uParam4);
			}
			break;
		
		case 6:
			func_226(uParam0, uParam3);
			break;
	}
}

void func_226(var uParam0, var uParam1)//Position - 0x13FE2
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_315++;
	iLocal_29 = 1;
	iLocal_30 = 0;
	iLocal_299 = 1;
	while (iLocal_30 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_25)
			{
				iLocal_30++;
			}
			else
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
				func_234(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24)
		{
			if (bLocal_298)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24 = 0;
				Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
			func_234(uParam0, uParam1);
			if (bLocal_298)
			{
				if (iLocal_300)
				{
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_1, Local_78, 1, 1, 0);
					Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_268(&(uParam0->f_422), &(uParam0->f_249));
			func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_29] == 0)
			{
				if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_29]++;
				}
				func_310(&(uParam1->f_666), 2, 0);
				func_310(&(uParam1->f_666), 3, 0);
				func_310(&(uParam1->f_666), 4, 0);
				func_310(&(uParam1->f_666), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_234(uParam0, uParam1);
			if (bLocal_298)
			{
				if (iLocal_300)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_30 + 1)
					{
						if (!uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_1, Local_78, 1, 1, 0);
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_54), uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_29 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_315 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_227(var uParam0, var uParam1, var uParam2)//Position - 0x1446D
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_233();
			}
			if (iLocal_29 == 0)
			{
				if (GlobalFunc_1456(&(uParam2->f_666), 3))
				{
					func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				}
				else if (GlobalFunc_1456(&(uParam2->f_666), 4))
				{
					GlobalFunc_164("DARTS_ONE_PT", 5000, 0);
				}
				else if (GlobalFunc_1456(&(uParam2->f_666), 2))
				{
					func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_232("DARTS_SWITCH_C", uParam0->f_422[iLocal_29], 5000, 0);
				}
			}
			else if (GlobalFunc_1456(&(uParam2->f_666), 3))
			{
				func_232("DARTS_OPP_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else if (GlobalFunc_1456(&(uParam2->f_666), 4))
			{
				GlobalFunc_164("DARTS_ONE_PT", 5000, 0);
			}
			else if (GlobalFunc_1456(&(uParam2->f_666), 2))
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_232("DARTS_SWITCH_B", uParam0->f_422[iLocal_29], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_313++;
				if (iLocal_313 >= uParam0->f_436)
				{
					iLocal_313 = 0;
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_313 = (iLocal_313 - 1);
				if (iLocal_313 < 0)
				{
					iLocal_313 = (uParam0->f_436 - 1);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_47(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iLocal_289 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (iLocal_299 && bLocal_298))
			{
				iLocal_289 = 1;
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2, 189) || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_313 /*26*/], 1) };
				func_49(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!GlobalFunc_1456(&(uParam2->f_666), 6))
			{
				if (!iLocal_294)
				{
					if (func_230(iLocal_29 == 0, &(uLocal_286[1]), (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_294 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_294)
			{
				if (func_229(iLocal_29 == 0, &(uLocal_286[1]), (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_294 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_289 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_299 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_223(&(uParam0->f_5[iLocal_29 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_29] != uParam0->f_422[iLocal_29])
				{
					func_228(uParam1, iLocal_29, uParam0->f_422[iLocal_29]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_29] = uParam0->f_422[iLocal_29];
				iLocal_30 = 0;
				uParam0->f_428 = 0;
				if (iLocal_29 == 0)
				{
					iLocal_29 = 1;
				}
				else
				{
					iLocal_29 = 0;
				}
				func_411(uParam1, iLocal_29);
				iLocal_98 = 0;
				func_391();
				if (!bLocal_298)
				{
					HUD::CLEAR_SMALL_PRINTS();
				}
				iLocal_92 = 0;
				uParam2->f_670 = 3;
				iLocal_295 = 0;
				iLocal_292 = 0;
				iLocal_294 = 0;
				iLocal_289 = 0;
				iLocal_313 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_228(var uParam0, int iParam1, int iParam2)//Position - 0x14886
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_229(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x148AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_230(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14AA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}


void func_232(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14D19
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_233()//Position - 0x14D38
{
	CAM::SET_CAM_ACTIVE(uLocal_128, 1);
	CAM::SET_CAM_ACTIVE(uLocal_119, 0);
}

void func_234(var uParam0, var uParam1)//Position - 0x14D4E
{
	uParam0->f_455 = 0;
	if (!GlobalFunc_1456(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_29] = (uParam0->f_422[iLocal_29] - uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20);
	}
	if (GlobalFunc_1456(&(uParam1->f_666), 5))
	{
		func_246(uParam0);
		func_310(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_29]++;
		if (iLocal_29 == 0)
		{
			func_244(4);
			iLocal_150[10]++;
		}
		if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_29] == 0)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_244(0);
					iLocal_150[1]++;
				}
			}
			func_310(&(uParam1->f_666), 2, 0);
			func_310(&(uParam1->f_666), 3, 0);
			func_310(&(uParam1->f_666), 4, 0);
			func_310(&(uParam1->f_666), 5, 1);
			func_246(uParam0);
			func_310(&(uParam1->f_666), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_422[iLocal_29] == 1 || uParam0->f_422[iLocal_29] < 0) || (uParam0->f_422[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_21 != 2)
			{
				func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
				func_310(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_29] == 1)
			{
				func_310(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_29 == 1)
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_294)
			{
				if (func_243(uLocal_286[(1 - iLocal_29)]))
				{
					iLocal_294 = 1;
				}
			}
			uParam0->f_422[iLocal_29] = uParam0->f_425[iLocal_29];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_29 == 0)
			{
				uParam0->f_435++;
			}
			func_310(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 1);
					func_244(0);
					iLocal_150[1]++;
				}
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_241(uLocal_286[iLocal_29]))
					{
						iLocal_294 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_20 == 0)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					func_240(uLocal_286[(1 - iLocal_29)]);
					iLocal_294 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_239(uLocal_286[1], iLocal_29 == 0))
					{
						iLocal_294 = 1;
					}
				}
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 0);
					func_244(1);
					iLocal_150[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_294 && !iLocal_299)
				{
					if (func_237(uLocal_286[iLocal_29], iLocal_29 == 0))
					{
						iLocal_294 = 1;
					}
				}
			}
			if (iLocal_29 == 0)
			{
				if (iLocal_30 < 2)
				{
					if (uParam0->f_422[iLocal_29] <= 170 && !GlobalFunc_1456(&(uParam1->f_666), 18))
					{
						func_310(&(uParam1->f_666), 18, 1);
					}
					if (!GlobalFunc_1456(&(uParam1->f_666), 19) && GlobalFunc_1456(&(uParam1->f_666), 21))
					{
						func_310(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_29] < 41 && uParam0->f_422[iLocal_29] > 0) && (uParam0->f_422[iLocal_29] % 2) == 0) || uParam0->f_422[iLocal_29] == 50)
					{
						if (uParam0->f_422[iLocal_29] == 50)
						{
						}
						if (!iLocal_293)
						{
							func_236(uLocal_286[1]);
							iLocal_293 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!GlobalFunc_1456(&(uParam1->f_666), 6))
						{
							func_310(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_29 == 0 && iLocal_30 < 2)
			{
				func_235("DARTS_REMAIN", (uParam0->f_425[iLocal_29] - uParam0->f_422[iLocal_29]), uParam0->f_422[iLocal_29], 7500, 0);
			}
			else if (iLocal_29 == 1 && iLocal_30 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_302(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_25 = 1;
			iLocal_30++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_30 == 3)
			{
				iLocal_30 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_29 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_310(&(uParam1->f_666), 3, 0);
			func_310(&(uParam1->f_666), 2, 0);
			func_310(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_235(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x152EB
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, 1);
}

void func_236(int iParam0)//Position - 0x15310
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_237(int iParam0, bool bParam1)//Position - 0x1532E
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(GlobalFunc_451(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (GlobalFunc_745())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}


int func_239(int iParam0, bool bParam1)//Position - 0x153CE
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(GlobalFunc_451(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (GlobalFunc_745())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x1544D
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x15490
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_242(var uParam0, int iParam1)//Position - 0x154BC
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_243(int iParam0)//Position - 0x154D1
{
	int iVar0;
	
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_244(int iParam0)//Position - 0x154FD
{
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.DARTS_iNumBullseyes++;
			GlobalFunc_587("DARTS_STAT_NUM_BULLSEYES", Global_SAVE_DATA.DARTS_iNumBullseyes);
			break;
		
		case 1:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iNumOneEighties++;
			GlobalFunc_587("DARTS_STAT_NUM_180S", Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iNumOneEighties);
			break;
		
		case 2:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesWon++;
			GlobalFunc_587("DARTS_STAT_NUM_WINS", Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesWon);
			break;
		
		case 3:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesLoss++;
			GlobalFunc_587("DARTS_STAT_NUM_LOSS", Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesLoss);
			break;
		
		case 4:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartsThrown++;
			GlobalFunc_587("DARTS_STAT_DARTS_THROWN", Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartsThrown);
			break;
		
		case 5:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames++;
			GlobalFunc_587("DARTS_STAT_NUM_GAMES", Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames);
			break;
		
		case 7:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fWinPct = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartGamesWon) / SYSTEM::TO_FLOAT(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames));
			break;
		
		case 8:
			Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_fAvgDartsPerMatch = (SYSTEM::TO_FLOAT(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartsThrown) / SYSTEM::TO_FLOAT(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iTotalDartGames));
			break;
	}
}


void func_246(var uParam0)//Position - 0x1567C
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_244(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_392(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_392(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_233();
	}
	if (iLocal_29 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_303 = 1;
		uParam0->f_446[iLocal_29]++;
		uParam0->f_437[iLocal_29]++;
		func_244(2);
		iLocal_150[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_29]++;
		uParam0->f_437[iLocal_29]++;
		func_244(3);
		iLocal_150[9]++;
	}
	func_244(7);
	GlobalFunc_6715(&(uParam0->f_254));
	if (func_248(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_29]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_247(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_150[3]++;
			iLocal_321 = 0;
		}
		else
		{
			iLocal_150[5]++;
			iLocal_321 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_392(3));
	iLocal_300 = 1;
	uParam0->f_428 = 0;
	iLocal_98 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_247(bool bParam0)//Position - 0x15825
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (GlobalFunc_8329())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_248(var uParam0)//Position - 0x15898
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_92(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_150[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0, var uParam1, bool bParam2)//Position - 0x1595A
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	Var3 = { uParam0->f_8 };
	Var3.x = (Var3.x + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.x, Var3.f_2);
	fVar0 = func_250(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_32[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

var func_250(struct<3> Param0)//Position - 0x15B8E
{
	return SYSTEM::SQRT(((Param0.x * Param0.x) + (Param0.f_2 * Param0.f_2)));
}

int func_251(var uParam0)//Position - 0x15BA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_30)
	{
		if (((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x15C6F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_29 == 0 && iParam2 == 1)
	{
		func_253("Darts", "Dart_Reticules", &Local_69, 1, 0, 4, 1);
	}
	fVar6 = MISC::GET_FRAME_TIME();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_54), uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_54), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_253(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x15D8F
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			GlobalFunc_1451(&Var0);
			break;
		
		case 1:
			GlobalFunc_1450(&Var0);
			break;
		
		case 5:
			GlobalFunc_1449(&Var0);
			break;
		
		case 6:
			GlobalFunc_1448(&Var0);
			break;
		
		case 7:
			GlobalFunc_1447(&Var0);
			break;
		
		case 8:
			GlobalFunc_1446(&Var0);
			break;
		
		case 9:
			GlobalFunc_1445(&Var0);
			break;
	}
	if (GlobalFunc_5263())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_255(Var0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_255(Var0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

float func_254(float fParam0)//Position - 0x15E94
{
	return (fParam0 + fLocal_13);
}

float func_255(float fParam0)//Position - 0x15EA1
{
	return (fParam0 + fLocal_12);
}










void func_265(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x15FB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_32[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_266(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_266(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_78, 0, 0, 0);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, Local_81) };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_54), uParam0->f_8.f_2) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Var7.x - Var10.x), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_81 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_266(var uParam0)//Position - 0x16311
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_81 - uParam0->f_8 };
	fVar3 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (MISC::TAN(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_81 - uParam0->f_11 };
	fVar3 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_267(var uParam0)//Position - 0x163BD
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_268(var uParam0, var uParam1)//Position - 0x163F1
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_29] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_29] > 60)
	{
		if (((*uParam0)[iLocal_29] % 2) == 1)
		{
			if (GlobalFunc_745())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_29] < 61)
	{
		if ((*uParam0)[iLocal_29] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_29] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_29] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_29] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_29] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_269(var uParam0)//Position - 0x16543
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_270(var uParam0)//Position - 0x1656F
{
	func_271(uParam0, 0f);
}

void func_271(var uParam0, float fParam1)//Position - 0x1657E
{
	uParam0->f_1 = (GlobalFunc_224(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_272(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x165AC
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_96)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_97 = 0;
					iLocal_98 = 0;
					iLocal_100 = 0;
					if (func_281(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_96 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_100) && !bParam4)
				{
					iLocal_97 = 1;
					iLocal_98 = 1;
					if (!iLocal_99)
					{
						func_280(uParam0, *uParam2);
						iLocal_99 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_279();
						}
						func_278(uParam0, iParam6);
						func_277(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_81 };
						iLocal_97 = 1;
						iLocal_98 = 1;
					}
					if (iLocal_97 && iLocal_98)
					{
						if (!iLocal_96)
						{
							HUD::CLEAR_PRINTS();
							iLocal_96 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_96)
			{
				func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_281(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_96 = 0;
						return 1;
					}
				}
			}
			else if (!func_273(uParam0))
			{
				if (!iLocal_99)
				{
					func_280(uParam0, *uParam2);
				}
				else
				{
					func_279();
					func_278(uParam0, iParam6);
					func_277(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_96)
			{
				iLocal_96 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_273(var uParam0)//Position - 0x16821
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
	iLocal_135 = SYSTEM::ROUND(fVar2);
	switch (iLocal_134)
	{
		case 0:
			if (iLocal_135 > 120)
			{
				iLocal_136 = MISC::GET_GAME_TIMER();
				iLocal_134 = 1;
			}
			if (iLocal_135 < -100)
			{
				iLocal_140 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_135 > 120)
			{
				iLocal_136 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_135 < 120 && iLocal_135 > -120) && (MISC::GET_GAME_TIMER() - iLocal_136) > 500)
			{
				iLocal_134 = 0;
			}
			else if (iLocal_135 < -100)
			{
				iLocal_137 = MISC::GET_GAME_TIMER();
				if ((iLocal_137 - iLocal_136) < 500)
				{
					iLocal_140 = SYSTEM::ROUND(fVar1);
					iLocal_138 = (iLocal_137 - iLocal_136);
					iLocal_134 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_138 > iLocal_139)
			{
				if (iLocal_138 > 100 && iLocal_138 < 150)
				{
					fLocal_143 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_143);
				}
				else
				{
					fLocal_142 = (SYSTEM::TO_FLOAT(iLocal_139) / SYSTEM::TO_FLOAT(iLocal_138));
					fLocal_143 = ((1f - fLocal_142) * fLocal_146);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_143);
				}
			}
			else
			{
				fLocal_143 = 0f;
			}
			if (iLocal_140 > 7)
			{
				fLocal_144 = (SYSTEM::TO_FLOAT(iLocal_140) / fLocal_149);
				fLocal_145 = (fLocal_147 * fLocal_144);
				uParam0->f_8 = (uParam0->f_8 + fLocal_145);
			}
			else if (iLocal_140 < -7)
			{
				fLocal_144 = (SYSTEM::TO_FLOAT(iLocal_140) / fLocal_148);
				fLocal_145 = (fLocal_147 * fLocal_144);
				uParam0->f_8 = (uParam0->f_8 - fLocal_145);
			}
			else
			{
				fLocal_145 = 0f;
			}
			if (fLocal_143 < 0.066477f && fLocal_145 == 0f)
			{
				func_276();
			}
			else if (fLocal_143 <= 0.066477f && fLocal_145 < 0.06f)
			{
				func_275();
			}
			else
			{
				func_274();
			}
			iVar0 = 1;
			iLocal_134 = 0;
			break;
	}
	return iVar0;
}

void func_274()//Position - 0x169DF
{
	Local_69.f_4 = 210;
	Local_69.f_5 = 23;
	Local_69.f_6 = 19;
}

void func_275()//Position - 0x169F9
{
	Local_69.f_4 = 183;
	Local_69.f_5 = 137;
	Local_69.f_6 = 0;
}

void func_276()//Position - 0x16A12
{
	Local_69.f_4 = 16;
	Local_69.f_5 = 184;
	Local_69.f_6 = 10;
}

void func_277(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x16A2C
{
	struct<3> Var0;
	
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_60, &(Local_60.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_93)
		{
			func_253("Darts", "Dart_Reticules_Zoomed", &Local_60, 1, 0, 4, 1);
		}
		else
		{
			func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
		}
		if (!iLocal_100)
		{
			iLocal_100 = 1;
		}
	}
}

void func_278(var uParam0, int iParam1)//Position - 0x16ADB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218);
	fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219);
	fVar5 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar6 = PAD::GET_CONTROL_NORMAL(2, 221);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = GlobalFunc_253(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = GlobalFunc_253(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_91 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_91 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_91 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_91 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_91 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_91 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_91 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_91 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_88), (0f + fLocal_88));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_87), (0f + fLocal_87));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_88), (0f + fLocal_88));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_87), (0f + fLocal_87));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_91 = 0.5f;
		if (iLocal_134 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_279()//Position - 0x16ECD
{
	if (PAD::IS_CONTROL_PRESSED(2, 227))
	{
		fLocal_91 = 0.3f;
	}
	else
	{
		fLocal_91 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 229))
	{
		if (bLocal_93)
		{
			if (SYSTEM::TIMERA() > iLocal_141)
			{
				fLocal_87 = fLocal_89;
				fLocal_88 = fLocal_90;
				fLocal_91 = 0.1f;
				bLocal_93 = false;
			}
		}
		else if (iLocal_92 < 1)
		{
			fLocal_87 = 0.03f;
			fLocal_88 = 0.05f;
			fLocal_91 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_93 = true;
			iLocal_92++;
		}
		else if ((((((!GlobalFunc_74("DARTS_FST_HLP") && !GlobalFunc_74("DARTS_AIM_HLP")) && !GlobalFunc_74("DARTS_CLOCK")) && !GlobalFunc_74("DARTS_STD_HLP")) && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B")) && !iLocal_94)
		{
			iLocal_94 = 1;
			if (!MISC::IS_BIT_SET(Global_97314, 1))
			{
				GlobalFunc_159("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_97314, 1);
			}
		}
	}
	else if (bLocal_93)
	{
		fLocal_87 = fLocal_89;
		fLocal_88 = fLocal_90;
		fLocal_91 = 0.1f;
		bLocal_93 = false;
	}
}

void func_280(var uParam0, struct<4> Param1, var uParam5, var uParam6)//Position - 0x16FDF
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.x = (Var0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_81 };
}

int func_281(var uParam0, var uParam1, bool bParam2)//Position - 0x17033
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_78, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_78, 0, 0, 0);
	}
	bLocal_93 = false;
	fLocal_91 = 0.1f;
	fLocal_87 = fLocal_89;
	fLocal_88 = fLocal_90;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_266(uParam0);
	fVar10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, Local_81) };
	Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_54), uParam0->f_14.f_2) };
	fVar11 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.x - Var6.x), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
	iLocal_97 = 0;
	iLocal_99 = 0;
	if (bParam2)
	{
		func_253("Darts", "Dart_Reticules", &Local_60, 1, 0, 4, 1);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_54), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_69, &(Local_69.f_1));
	return 1;
}


void func_283(int iParam0, int iParam1)//Position - 0x1717D
{
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(Global_97314, 9))
		{
			if ((!GlobalFunc_74("DARTS_SHT_USE") && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B"))
			{
				GlobalFunc_159("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_97314, 9);
			}
		}
		else if (iParam1 && !MISC::IS_BIT_SET(Global_97314, 7))
		{
			if ((!GlobalFunc_74("DARTS_AIM_HLP") && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B"))
			{
				GlobalFunc_159("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_97314, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_97314, 8))
		{
			if ((!GlobalFunc_74("DARTS_SHT_USE") && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B"))
			{
				GlobalFunc_159("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_97314, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_95 && !GlobalFunc_74("DARTS_SHT_USE")) && !GlobalFunc_74("DARTS_INSTR_W")) && !GlobalFunc_74("DARTS_INSTR_B"))
		{
			if (!MISC::IS_BIT_SET(Global_97314, 2))
			{
				GlobalFunc_159("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_97314, 2);
			}
			iLocal_95 = 1;
		}
	}
}

int func_284(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x172D2
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_287(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, Var0) };
			func_286(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_285();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_285()//Position - 0x17343
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_119, uLocal_131, 2000, 1, 1);
	CAM::DESTROY_CAM(uLocal_131, 0);
}

void func_286(struct<3> Param0)//Position - 0x1735F
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_131 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param0, Var0, 65f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_131, uLocal_119, 2000, 1, 1);
}

Vector3 func_287(int iParam0)//Position - 0x173A1
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_290(iParam0);
		Var1.f_1 = -0.5f;
		Var1.x = func_289(fVar0);
		Var1.f_2 = func_288(fVar0);
	}
	return Var1;
}

float func_288(float fParam0)//Position - 0x173E5
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_289(float fParam0)//Position - 0x17401
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_290(int iParam0)//Position - 0x1741D
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_32[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_291(var uParam0)//Position - 0x17459
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				func_298(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_128))
				{
					func_296();
					func_295(&uLocal_326, Local_357, Local_360, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				GlobalFunc_4995(&uLocal_326, 1, 1, 0, 0, 1045220557, 0);
			}
			break;
		
		case 3:
			func_298(0);
			func_476();
			if (CAM::DOES_CAM_EXIST(uLocal_326))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_326))
				{
					CAM::SET_CAM_ACTIVE(uLocal_326, 0);
				}
				CAM::DESTROY_CAM(uLocal_326, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}




void func_295(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0x17B18
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_296()//Position - 0x17C10
{
	if (iLocal_282)
	{
		return;
	}
	func_297();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Darts Zoom");
	iLocal_282 = 1;
}

void func_297()//Position - 0x17C32
{
	if (iLocal_281 || iLocal_282)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
		iLocal_281 = 0;
		iLocal_282 = 0;
	}
}

void func_298(bool bParam0)//Position - 0x17C55
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_119, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_119, uLocal_128, 1000, 1, 1);
	}
}

void func_299(var uParam0)//Position - 0x17C7F
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			GlobalFunc_7755(&(uParam0->f_62), func_301(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_7753(&(uParam0->f_62), 0))
			{
				GlobalFunc_5276(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}


char* func_301(int iParam0)//Position - 0x17D21
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_302(var uParam0)//Position - 0x17D4E
{
	if (!iLocal_98)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			iLocal_98 = 1;
		}
	}
	if ((iLocal_29 == 1 && iLocal_30 < 3) && *uParam0 != 5)
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && iLocal_98)
		{
			*uParam0 = 6;
		}
	}
}

void func_303(var uParam0, int iParam1)//Position - 0x17DA6
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!GlobalFunc_1456(&(uParam0->f_666), 15) && !iLocal_92 > 0)
			{
				GlobalFunc_5210(&(uParam0->f_509), 0, 0, 0, 1);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				GlobalFunc_1444(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				GlobalFunc_5275(&(uParam0->f_509), 1);
				func_310(&(uParam0->f_666), 8, 0);
				func_310(&(uParam0->f_666), 16, 0);
				func_310(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_92 > 0 && !GlobalFunc_1456(&(uParam0->f_666), 17))
			{
				GlobalFunc_5210(&(uParam0->f_509), 0, 0, 0, 1);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				GlobalFunc_1444(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				GlobalFunc_813(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				GlobalFunc_5275(&(uParam0->f_509), 1);
				func_310(&(uParam0->f_666), 8, 0);
				func_310(&(uParam0->f_666), 16, 0);
				func_310(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!GlobalFunc_1456(&(uParam0->f_666), 16))
		{
			GlobalFunc_5210(&(uParam0->f_509), 1, 0, 0, 1);
			GlobalFunc_813(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			GlobalFunc_813(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			GlobalFunc_5275(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 16, 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 17, 0);
			func_310(&(uParam0->f_666), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		GlobalFunc_732(GlobalFunc_92(GlobalFunc_1456(&(uParam0->f_666), 16), 1, 2));
		func_107(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((GlobalFunc_1456(&(uParam0->f_666), 15) || GlobalFunc_1456(&(uParam0->f_666), 16)) || GlobalFunc_1456(&(uParam0->f_666), 23))
	{
		func_310(&(uParam0->f_666), 15, 0);
		func_310(&(uParam0->f_666), 16, 0);
		func_310(&(uParam0->f_666), 23, 0);
	}
}


void func_305(var uParam0)//Position - 0x1812E
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!GlobalFunc_1456(&(uParam0->f_666), 23))
		{
			GlobalFunc_5210(&(uParam0->f_509), 0, 0, 0, 1);
			GlobalFunc_1444(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			GlobalFunc_813(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			GlobalFunc_5275(&(uParam0->f_509), 1);
			func_310(&(uParam0->f_666), 23, 1);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 16, 0);
			func_310(&(uParam0->f_666), 15, 0);
			func_310(&(uParam0->f_666), 17, 0);
		}
		func_107(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((GlobalFunc_1456(&(uParam0->f_666), 15) || GlobalFunc_1456(&(uParam0->f_666), 16)) || GlobalFunc_1456(&(uParam0->f_666), 23))
	{
		func_310(&(uParam0->f_666), 15, 0);
		func_310(&(uParam0->f_666), 16, 0);
		func_310(&(uParam0->f_666), 23, 0);
		func_310(&(uParam0->f_666), 17, 0);
	}
}

void func_306(var uParam0)//Position - 0x18240
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_98)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202))
		{
			iLocal_98 = 1;
		}
		else
		{
			iLocal_98 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_98 && iLocal_97 == 0)
			{
				iLocal_98 = 0;
				bVar0 = false;
				bLocal_297 = false;
				HUD::CLEAR_HELP(1);
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 235) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 235))
		{
			if (!bLocal_297)
			{
				*uParam0 = 14;
				bLocal_297 = true;
				HUD::CLEAR_HELP(1);
			}
		}
		else if (GlobalFunc_74("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_297 = false;
		}
	}
}

void func_307(int iParam0)//Position - 0x182E3
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_308(int iParam0)//Position - 0x18301
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_309(int iParam0)//Position - 0x18356
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_310(var uParam0, int iParam1, bool bParam2)//Position - 0x183AB
{
	if (bParam2)
	{
		MISC::SET_BIT(uParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(uParam0, iParam1);
	}
}

int func_311(int iParam0, var uParam1)//Position - 0x183CB
{
	if (iParam0 >= 10)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.DARTS_SAVED_STRUCT.DARTS_iDartTimePlayed, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_312(int iParam0, var uParam1, var uParam2)//Position - 0x183F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_223(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_222(uParam1, iVar0);
		func_228(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_29 = 0;
	iLocal_30 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_313 = 0;
	iParam0->f_436 = 0;
	iLocal_92 = 0;
	iLocal_290 = 1;
	iLocal_291 = 0;
	iLocal_293 = 0;
	iLocal_94 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_299 = 0;
	func_310(&(uParam2->f_666), 6, 0);
	func_318();
	func_316(uParam2);
	if (iParam0->f_457)
	{
		func_313(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_313(bool bParam0)//Position - 0x184E3
{
	HUD::DISPLAY_RADAR(0);
	if (CAM::IS_CAM_ACTIVE(uLocal_121))
	{
		CAM::SET_CAM_ACTIVE(uLocal_121, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_125))
	{
		CAM::SET_CAM_ACTIVE(uLocal_125, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_315();
		CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_314(bParam0);
}

void func_314(bool bParam0)//Position - 0x18534
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(uLocal_119, 1);
	}
}

void func_315()//Position - 0x18548
{
	CAM::SET_CAM_ACTIVE(uLocal_121, 1);
}

void func_316(var uParam0)//Position - 0x18557
{
	func_317();
	uParam0->f_670 = 3;
	func_310(&(uParam0->f_666), 15, 0);
	func_310(&(uParam0->f_666), 16, 0);
	func_310(&(uParam0->f_666), 17, 0);
}

void func_317()//Position - 0x1858D
{
	int iVar0;
	
	Local_163.f_66 = -1;
	Local_163.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_163.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_163.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_163.f_9[iVar0 /*7*/].f_5 = 0;
		Local_163.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_163.f_5 = 0;
	Local_163.f_5.f_1 = -1f;
	Local_163.f_5.f_2 = 0;
	Local_163 = 0;
	Local_163.f_1 = 0;
}

void func_318()//Position - 0x185FD
{
	SYSTEM::SETTIMERA(0);
	iLocal_98 = 0;
	HUD::CLEAR_SMALL_PRINTS();
}




void func_322(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18775
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_323(var uParam0, var uParam1, var uParam2)//Position - 0x187A5
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (!GlobalFunc_1456(&(uParam0->f_666), 7))
	{
		GlobalFunc_6900(0, 0, 0, 1);
		GlobalFunc_1393(0, -1);
		if (GlobalFunc_1391())
		{
			if (Global_2543381 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_2543381;
				GlobalFunc_1588(uParam0->f_660, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					GlobalFunc_1353(sVar0, 0, 0);
				}
			}
			Global_2543382 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (GlobalFunc_1774() && MISC::GET_GAME_TIMER() > Global_2543382)
		{
			if (Global_2543381 == uParam0->f_660)
			{
				iVar2 = GlobalFunc_1390(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_2543382 = MISC::GET_GAME_TIMER() + 300;
		}
		if (func_372(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			GlobalFunc_1588(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				GlobalFunc_1353(sVar0, 0, 0);
			}
		}
		if (func_371(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			GlobalFunc_1588(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				GlobalFunc_1353(sVar0, 0, 0);
			}
		}
		if (func_370(&(uParam0->f_633)) || func_369(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if (func_351(&(uParam0->f_636)) || func_349(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_348(uParam0->f_662 + 1, 1);
			*uParam2 = func_348(uParam0->f_664 + 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_326(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || GlobalFunc_2041())
		{
			GlobalFunc_262(0);
			func_310(&(uParam0->f_666), 8, 0);
			func_310(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			GlobalFunc_778(0);
			*uParam1 = -1;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_352(uParam0);
			func_310(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}



void func_326(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x1906B
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!GlobalFunc_240(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!GlobalFunc_4997(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (GlobalFunc_6956(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar57, &iVar58);
		fVar60 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (GlobalFunc_1584())
		{
			iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) * fVar60));
		}
		fVar61 = (SYSTEM::TO_FLOAT(iVar57) / SYSTEM::TO_FLOAT(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (GlobalFunc_1584())
		{
			fVar59 = 1f;
		}
		iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar57) / fVar59));
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar59));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(29), GlobalFunc_5343(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				GlobalFunc_1327(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) != 0)
				{
					GlobalFunc_1326();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						GlobalFunc_1326();
						GlobalFunc_1325((((Global_17233 + fParam5) - 0.00390625f) - GlobalFunc_5346("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				GlobalFunc_1327(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					GlobalFunc_6956(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				GlobalFunc_1324(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					GlobalFunc_6956(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_4045), GlobalFunc_5343(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					GlobalFunc_6956(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				GlobalFunc_1324(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					GlobalFunc_6956(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_2543305.f_67), GlobalFunc_5343(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			GlobalFunc_8007(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						HUD::GET_HUD_COLOUR(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					GlobalFunc_5345(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (MISC::IS_BIT_SET(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (GlobalFunc_6956(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6956(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6956(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (GlobalFunc_6956(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6956(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (GlobalFunc_6956(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6956(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[iVar20]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6956(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6956(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1321((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (GlobalFunc_6956(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6956(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6956(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1320((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (GlobalFunc_6956(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (GlobalFunc_6956(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6956(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (GlobalFunc_6956(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6956(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (GlobalFunc_6956(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												GlobalFunc_1323(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[iVar22]), GlobalFunc_5343(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), (fVar36 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (GlobalFunc_6956(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		GlobalFunc_7629();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		GlobalFunc_732(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}






















int func_348(int iParam0, bool bParam1)//Position - 0x1C79D
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_349(var uParam0, int iParam1, int iParam2)//Position - 0x1C824
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (GlobalFunc_1390(0) == 1 && Global_2543381 == iParam1)
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}


int func_351(var uParam0)//Position - 0x1C8B4
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 190))
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}

void func_352(var uParam0)//Position - 0x1C939
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	GlobalFunc_262(0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	GlobalFunc_2735(uVar0, uVar1, uVar2, uVar3, 1);
	GlobalFunc_1317(1, 2, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1315(0, 1, 0, 0, 0);
	GlobalFunc_1318("DARTS_TITLE");
	GlobalFunc_5426(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	GlobalFunc_7841(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, func_348(uParam0->f_662 + 1, 1), 0);
	GlobalFunc_7841(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, func_348(uParam0->f_664 + 1, 0), 0);
	GlobalFunc_2733(2, 141, 141, 1);
	GlobalFunc_7841(2, "DARTS_START", 0, 1, 0, 0);
	GlobalFunc_1543(0);
	GlobalFunc_1588(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		GlobalFunc_1353(GlobalFunc_1078(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	GlobalFunc_2732(201, "ITEM_SELECT", -1);
	GlobalFunc_2732(202, "IB_QUIT", -1);
}




void func_356(int iParam0, int iParam1, bool bParam2)//Position - 0x1CB1A
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 2)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 2)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17236.f_3340[Global_17236.f_4496] = iParam1;
	Global_17236.f_4496++;
	fVar1 = GlobalFunc_7181("NUMBER", iParam1);
	if (Global_17236.f_4352[Global_17236.f_4493])
	{
		GlobalFunc_6956(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
	{
		Global_17236.f_4345[Global_17236.f_4493] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = GlobalFunc_2734("NUMBER", iParam1);
		if (fVar4 > Global_17236.f_5000[iParam0])
		{
			Global_17236.f_5000[iParam0] = fVar4;
		}
	}
	MISC::SET_BIT(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 2;
}













int func_369(var uParam0, int iParam1, int iParam2)//Position - 0x1D0E1
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (GlobalFunc_1390(0) == -1 && Global_2543381 == iParam1)
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}

int func_370(var uParam0)//Position - 0x1D159
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 189))
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}

int func_371(var uParam0)//Position - 0x1D1D1
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187))
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}

int func_372(var uParam0)//Position - 0x1D249
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188))
	{
		if (!GlobalFunc_226(uParam0))
		{
			GlobalFunc_7731(uParam0);
			return 1;
		}
		else if (GlobalFunc_4981(uParam0) > 0.25f)
		{
			GlobalFunc_6715(uParam0);
			return 1;
		}
	}
	else if (GlobalFunc_226(uParam0))
	{
		GlobalFunc_235(uParam0);
	}
	return 0;
}










float func_382(float fParam0)//Position - 0x1D9DF
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_383(var uParam0)//Position - 0x1DA15
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	GlobalFunc_262(0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	GlobalFunc_2735(uVar0, uVar1, uVar2, uVar3, 1);
	GlobalFunc_1317(1, 2, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1315(0, 1, 0, 0, 0);
	GlobalFunc_1318("DARTS_TITLE");
	GlobalFunc_5426(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	GlobalFunc_7841(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, 1, 0);
	GlobalFunc_7841(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, 1, 0);
	GlobalFunc_7841(2, "DARTS_START", 0, 1, 0, 0);
	GlobalFunc_2733(2, 141, 141, 1);
	GlobalFunc_1543(0);
	GlobalFunc_1588(0, 1, 1);
	GlobalFunc_1353("DARTS_LEGD", 0, 0);
	GlobalFunc_1395();
	GlobalFunc_2732(201, "ITEM_SELECT", -1);
	GlobalFunc_2732(202, "IB_QUIT", -1);
}


int func_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1DB1D
{
	int iVar0;
	int iVar1;
	
	if ((GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_314 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_30)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_314 = MISC::GET_GAME_TIMER();
						func_393(uParam1->f_1, uParam1->f_4, func_395(2), func_394(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_265(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_252(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_30++;
							GlobalFunc_6715(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_4986(uParam5) > 1f && !GlobalFunc_74("DARTS_DOUBLE_T"))
					{
						GlobalFunc_159("DARTS_DOUBLE_T", -1);
					}
					if (GlobalFunc_4986(uParam5) > 5f)
					{
						GlobalFunc_6715(uParam5);
						HUD::CLEAR_HELP(1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(3), func_394(0), 1000);
						iLocal_30 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_30)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_265(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								GlobalFunc_6715(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_4986(uParam5) > 1f && !GlobalFunc_74("DARTS_TRIPLE_T"))
					{
						GlobalFunc_159("DARTS_TRIPLE_T", -1);
					}
					if (GlobalFunc_4986(uParam5) > 5f)
					{
						GlobalFunc_6715(uParam5);
						HUD::CLEAR_HELP(1);
						func_393(uParam1->f_1, uParam1->f_4, func_395(4), func_394(0), 1000, 0);
						iLocal_30 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_30)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_126))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_265(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								GlobalFunc_6715(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_4986(uParam5) > 1f && !GlobalFunc_74("DARTS_BULL_T"))
					{
						GlobalFunc_159("DARTS_BULL_T", -1);
					}
					if (GlobalFunc_4986(uParam5) > 5f)
					{
						GlobalFunc_6715(uParam5);
						HUD::CLEAR_HELP(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(5), func_394(1), 1500);
						iLocal_30 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_127) && !GlobalFunc_74("DARTS_DBL_WIN"))
			{
				GlobalFunc_159("DARTS_DBL_WIN", -1);
			}
			if (GlobalFunc_4986(uParam5) > 6f)
			{
				GlobalFunc_6715(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_119, uLocal_127, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_119))
			{
				iLocal_30 = 0;
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_386(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_30 = 0;
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_386(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(uLocal_119, 1);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_386(var uParam0)//Position - 0x1DF39
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_387(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)//Position - 0x1DF79
{
	CAM::STOP_CAM_POINTING(uLocal_127);
	CAM::SET_CAM_FOV(uLocal_127, 35f);
	CAM::SET_CAM_COORD(uLocal_127, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Param4));
	CAM::SET_CAM_ROT(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_127, uLocal_126, iParam10, 1, 1);
}


void func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x1E054
{
	char* sVar0;
	
	sVar0 = GlobalFunc_2736(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		GlobalFunc_726(sParam2);
	}
	if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GlobalFunc_6715(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}


void func_391()//Position - 0x1E15E
{
	CAM::SET_CAM_ACTIVE(uLocal_119, 1);
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	if (CAM::IS_CAM_ACTIVE(uLocal_126))
	{
		CAM::SET_CAM_ACTIVE(uLocal_126, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_121))
	{
		CAM::SET_CAM_ACTIVE(uLocal_121, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_122))
	{
		CAM::SET_CAM_ACTIVE(uLocal_122, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_123))
	{
		CAM::SET_CAM_ACTIVE(uLocal_123, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_124))
	{
		CAM::SET_CAM_ACTIVE(uLocal_124, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_125))
	{
		CAM::SET_CAM_ACTIVE(uLocal_125, 0);
	}
}

char* func_392(int iParam0)//Position - 0x1E1D9
{
	if (iLocal_325 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_325 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_393(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)//Position - 0x1E26C
{
	CAM::STOP_CAM_POINTING(uLocal_126);
	CAM::SET_CAM_FOV(uLocal_126, 35f);
	CAM::SET_CAM_COORD(uLocal_126, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Param4));
	CAM::SET_CAM_ROT(uLocal_126, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		CAM::SET_CAM_ACTIVE(uLocal_126, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_126, uLocal_127, iParam10, 1, 1);
	}
}

Vector3 func_394(bool bParam0)//Position - 0x1E2C4
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_395(int iParam0)//Position - 0x1E2ED
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}


int func_397(var uParam0)//Position - 0x1E38E
{
	if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
	{
		func_4(GlobalFunc_451(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}












int func_409(var uParam0)//Position - 0x1E5FE
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!GlobalFunc_1442(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_283, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}


void func_411(var uParam0, int iParam1)//Position - 0x1E6B2
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}



void func_414(var uParam0, var uParam1, char* sParam2)//Position - 0x1E780
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	GlobalFunc_257(uParam1);
	GlobalFunc_257(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_416(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x1E7B2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()) && !PED::IS_PED_INJURED(GlobalFunc_451()))
	{
		PED::REMOVE_PED_FROM_GROUP(GlobalFunc_451());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam8->f_5) && !PED::IS_PED_INJURED(uParam8->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam8->f_5, 1, 1);
			uLocal_286[1] = uParam8->f_5;
			TASK::CLEAR_PED_TASKS(uLocal_286[1]);
		}
		else if (func_418(uParam7))
		{
			TASK::CLEAR_PED_TASKS(uLocal_286[1]);
		}
		else
		{
			uLocal_286[1] = PED::CREATE_PED(26, iLocal_322, Param1.f_3, uParam0, 1, 1);
		}
		if (DECORATOR::DECOR_EXIST_ON(uLocal_286[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uLocal_286[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_382 = func_421("RAYMOND");
				iLocal_383 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_382 = func_421("JOHAN");
				iLocal_383 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_382 = func_421("STAN");
				iLocal_383 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_382 = func_421("VINCE");
				iLocal_383 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_382 = func_421("KRISTY");
				iLocal_383 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_382 = func_421("MARLENE");
				iLocal_383 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_382 = func_421("LORIE");
				iLocal_383 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_382 = func_421("SHELLEY");
				iLocal_383 = -863218904;
			}
		}
		DECORATOR::DECOR_SET_INT(uLocal_286[1], "Darts_name", iLocal_383);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(uLocal_286[1]);
	func_417(iVar1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_286[1], uLocal_286[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_286[0], uLocal_286[1], 0);
}

void func_417(int iParam0)//Position - 0x1E9AB
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_101 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_101 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_101 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_101 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_101 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_101 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_418(var uParam0)//Position - 0x1EA4A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 1, 1);
				uLocal_286[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x1EB33
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 3;
		while (iVar0 <= (147 - 1))
		{
			if (GlobalFunc_4946(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}


char* func_421(char* sParam0)//Position - 0x1EB9E
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_422(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1ECD8
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_424(uParam1, uParam0);
	}
	Local_81 = { 0f, (-2.3685f + fLocal_54), 0.1f };
	Local_81 = { Local_81 + Local_55 };
	Local_78 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, Local_81) };
	func_423(uParam2, uParam0);
}

void func_423(var uParam0, var uParam1)//Position - 0x1ED40
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_55 };
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_424(var uParam0, var uParam1)//Position - 0x1ED7B
{
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_54), -1.7272f) };
	uParam0->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_54), -1.7272f) };
}

int func_425(var uParam0, var uParam1)//Position - 0x1EDCD
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", 0))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", 0))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_27) || !STREAMING::HAS_MODEL_LOADED(iLocal_28)) || !STREAMING::HAS_MODEL_LOADED(iLocal_59)) || !STREAMING::HAS_MODEL_LOADED(iLocal_322)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_384)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_385)) || !GlobalFunc_4998(0, -1))
	{
		return 0;
	}
	return 1;
}



void func_428(var uParam0, var uParam1)//Position - 0x1F01E
{
	STREAMING::REQUEST_MODEL(iLocal_27);
	STREAMING::REQUEST_MODEL(iLocal_28);
	STREAMING::REQUEST_MODEL(iLocal_59);
	STREAMING::REQUEST_MODEL(iLocal_322);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_384);
	STREAMING::REQUEST_ANIM_DICT(sLocal_385);
	*uParam0 = unk_0x67D02A194A2FC2BD("darts_scoreboard");
	uParam1->f_645 = GlobalFunc_2407();
	uParam1->f_57 = GlobalFunc_816();
	uParam1->f_62 = GlobalFunc_1455();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}



void func_431(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x1F0AC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!GlobalFunc_105(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}


void func_433(int iParam0)//Position - 0x1F1F2
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_60 = 0.5f;
	Local_60.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_60.f_2 = 0.05f;
		Local_60.f_3 = 0.095f;
	}
	else
	{
		Local_60.f_2 = 0.065f;
		Local_60.f_3 = 0.09f;
	}
	Local_60.f_4 = 255;
	Local_60.f_5 = 250;
	Local_60.f_6 = 255;
	Local_60.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_60.f_4 = 255;
		Local_60.f_5 = 255;
		Local_60.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_60.f_4 = 255;
		Local_60.f_5 = 255;
		Local_60.f_6 = 255;
	}
	Local_60.f_8 = 0f;
	Local_69 = 0f;
	Local_69.f_1 = 0f;
	Local_69.f_2 = 0.061f;
	Local_69.f_3 = 0.105f;
	Local_69.f_4 = 200;
	Local_69.f_5 = 45;
	Local_69.f_6 = 40;
	Local_69.f_7 = 255;
	Local_69.f_8 = 0f;
}

void func_434(var uParam0, int iParam1)//Position - 0x1F2C5
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_27;
	}
	else
	{
		uParam0->f_1 = iLocal_28;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}


void func_436(struct<3> Param0, float fParam3)//Position - 0x1F315
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	
	fLocal_133 = GRAPHICS::_GET_ASPECT_RATIO(0);
	fVar21 = 30f;
	fVar21 = func_382(fLocal_133);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Var27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		Var27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	Var32 = { 0.261599f, -0.750354f, -0.392929f };
	Var38 = { 0.281314f, -0.573735f, -0.39603f };
	Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_119 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_120 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_121 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_122 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_123 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_124 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	CAM::SET_CAM_FOV(uLocal_121, 43.35f);
	CAM::SET_CAM_FOV(uLocal_122, 42.35f);
	CAM::SHAKE_CAM(uLocal_121, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(uLocal_122, "HAND_SHAKE", 0.1f);
}

void func_437(var uParam0, var uParam1)//Position - 0x1F578
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_32[0] = 20;
	iLocal_32[10] = 3;
	iLocal_32[1] = 1;
	iLocal_32[11] = 19;
	iLocal_32[2] = 18;
	iLocal_32[12] = 7;
	iLocal_32[3] = 4;
	iLocal_32[13] = 16;
	iLocal_32[4] = 13;
	iLocal_32[14] = 8;
	iLocal_32[5] = 6;
	iLocal_32[15] = 11;
	iLocal_32[6] = 10;
	iLocal_32[16] = 14;
	iLocal_32[7] = 15;
	iLocal_32[17] = 9;
	iLocal_32[8] = 2;
	iLocal_32[18] = 12;
	iLocal_32[9] = 17;
	iLocal_32[19] = 5;
	iLocal_32[20] = 20;
}



var func_440(int iParam0, int iParam1)//Position - 0x1F664
{
	var uVar0;
	var uVar1;
	
	uVar1 = GlobalFunc_5153(iParam0, iParam1);
	STATS::STAT_GET_INT(uVar1, &uVar0, -1);
	return uVar0;
}





void func_445(int iParam0, var uParam1, var uParam2)//Position - 0x1F97B
{
	int iVar0;
	int iVar1;
	
	HUD::DISPLAY_AREA_NAME(1);
	func_244(8);
	func_297();
	if (bLocal_296)
	{
		GlobalFunc_5869(&uLocal_312);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_386(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
	if (!PED::IS_PED_INJURED(uLocal_286[0]) && !PED::IS_PED_INJURED(uLocal_286[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(uLocal_286[0]);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_286[1]);
	}
	func_462();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
	func_461();
	GlobalFunc_2435(uParam1->f_645);
	GlobalFunc_833(&(uParam1->f_57));
	if (!ENTITY::IS_ENTITY_DEAD(GlobalFunc_451()))
	{
		PED::SET_PED_AS_GROUP_MEMBER(GlobalFunc_451(), GlobalFunc_468());
		func_457(iLocal_320, iLocal_321);
	}
	else
	{
		func_455(&(uLocal_286[1]));
	}
	GlobalFunc_7632(0);
	GlobalFunc_5674(uParam2);
	GlobalFunc_778(0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_460 && !iLocal_310)
		{
			func_453(190, 0);
		}
	}
	GlobalFunc_5770();
	GlobalFunc_2420();
	GlobalFunc_6915(&(uParam1->f_72));
	SYSTEM::WAIT(200);
	if (iLocal_303)
	{
		GlobalFunc_7610(130, 0, 0);
		GlobalFunc_7068();
	}
	GlobalFunc_601(23, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}








void func_453(int iParam0, bool bParam1)//Position - 0x2035E
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_209(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, iLocal_150[1], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, iLocal_150[2], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, iLocal_150[3], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, iLocal_150[5], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, iLocal_150[10], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, iLocal_150[8], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, iLocal_150[6], 0f);
	}
}


void func_455(var uParam0)//Position - 0x204B0
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_323);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_323);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_286[0]))
		{
			TASK::TASK_LOOK_AT_ENTITY(0, uLocal_286[0], 8000, 2049, 3);
		}
		TASK::TASK_STAND_STILL(0, 1000);
		if (bLocal_301)
		{
			if (!MISC::IS_BIT_SET(Global_97314, 10))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, GlobalFunc_1087(iLocal_325 == 2, Local_366, Local_372), 1f, 20000, 0.25f, 0, GlobalFunc_512(iLocal_325 == 2, fLocal_376, fLocal_378));
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, GlobalFunc_1087(iLocal_325 == 2, Local_363, Local_369), 1f, 20000, 0.25f, 0, GlobalFunc_512(iLocal_325 == 2, fLocal_375, fLocal_377));
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, GlobalFunc_1087(iLocal_325 == 2, Local_363, Local_369), 1f, 20000, 0.25f, 0, GlobalFunc_512(iLocal_325 == 2, 172.6813f, 142.6717f));
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_323);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_323);
		PED::SET_PED_KEEP_TASK(*uParam0, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_322);
}


void func_457(int iParam0, var uParam1)//Position - 0x20606
{
	if (Global_86193 == iParam0)
	{
		Global_86194 = Global_86193;
		Global_86195 = uParam1;
		Global_86193 = 23;
	}
}




void func_461()//Position - 0x20668
{
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	HUD::DISPLAY_RADAR(1);
}

void func_462()//Position - 0x20689
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_58))
	{
		OBJECT::DELETE_OBJECT(&iLocal_58);
	}
}














void func_476()//Position - 0x215C1
{
	if (iLocal_281 == 1)
	{
		return;
	}
	func_297();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Darts");
	iLocal_281 = 1;
}


