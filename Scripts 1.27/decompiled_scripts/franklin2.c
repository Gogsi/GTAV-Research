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
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	float fLocal_298 = 0f;
	float fLocal_299 = 0f;
	float fLocal_300 = 0f;
	char* sLocal_301 = NULL;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_336 = 0;
	int iLocal_337[5] = { 0, 0, 0, 0, 0 };
	int iLocal_343[3] = { 0, 0, 0 };
	int iLocal_347 = 0;
	int iLocal_348[3] = { 0, 0, 0 };
	int iLocal_352[1] = { 0 };
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366[2] = { 0, 0 };
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	var uLocal_387 = 4;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 4;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 4;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 4;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 4;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 4;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 4;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	struct<6> Local_431 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_437 = 0;
	var uLocal_438 = 1092616192;
	var uLocal_439 = 1101004800;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 3;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	struct<12> Local_456 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	struct<12> Local_470 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	struct<12> Local_484 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	struct<12> Local_498 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	struct<21> Local_512[7];
	struct<21> Local_660[4];
	struct<21> Local_745[1];
	struct<21> Local_767[1];
	struct<21> Local_789[4];
	struct<21> Local_874[4];
	struct<21> Local_959[4];
	struct<21> Local_1044[3];
	struct<21> Local_1108[4];
	struct<21> Local_1193[1];
	struct<21> Local_1215[3];
	struct<21> Local_1279[3];
	struct<21> Local_1343[3];
	struct<21> Local_1407[1];
	struct<21> Local_1429[1];
	struct<21> Local_1451[3];
	struct<21> Local_1515[4];
	struct<21> Local_1600[4];
	struct<21> Local_1685[3];
	struct<21> Local_1749[6];
	struct<21> Local_1876[1];
	struct<3> Local_1898 = { 0, 0, 0 } ;
	int iLocal_1901 = 0;
	int iLocal_1902 = 0;
	struct<10> Local_1903[16];
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	struct<20> Local_2068 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
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
	Local_48 = { -727.5588f, 5313.51f, 71.498f };
	Local_51 = { -716.7578f, 5319.358f, 70.8262f };
	Local_54 = { -718.4451f, 5304.849f, 71.6183f };
	Local_57 = { -715.2372f, 5317.78f, 70.6856f };
	Local_60 = { -719.1467f, 5308.008f, 71.6904f };
	Local_63 = { -540.0828f, 5425.959f, 62.3495f };
	Local_66 = { -523.094f, 5309.081f, 79.2679f };
	Local_69 = { -579.0994f, 5246.155f, 69.4693f };
	Local_72 = { -654.8719f, 5241.644f, 75.2173f };
	Local_75 = { -440.6452f, 5429.001f, 76.283f };
	Local_78 = { -545.1334f, 5428.288f, 61.8625f };
	Local_81 = { -555.7971f, 5214.834f, 81.4045f };
	Local_84 = { -71.2345f, -1466.684f, 30.9867f };
	Local_87 = { -732.8705f, 5317.547f, 71.9049f };
	Local_90 = { 0f, 0f, 0f };
	Local_93 = { 0f, 0f, 0f };
	Local_96 = { 0f, 0f, 0f };
	iLocal_258 = -1;
	iLocal_259 = -1;
	fLocal_292 = 261.2129f;
	fLocal_293 = 15f;
	fLocal_294 = 221.4874f;
	fLocal_295 = 283f;
	fLocal_296 = 104.2f;
	fLocal_297 = 163f;
	fLocal_298 = -14.1f;
	fLocal_299 = 261.1234f;
	fLocal_300 = 0f;
	sLocal_301 = "move_injured_generic";
	sLocal_302 = "missfra2";
	sLocal_304 = "fra2_001";
	sLocal_305 = "fra2_002";
	sLocal_306 = "fra2_003";
	sLocal_307 = "fratwoWP0";
	sLocal_308 = "fratwo";
	sLocal_309 = "pickup_object";
	iLocal_369 = joaat("bulldozer");
	iLocal_370 = joaat("g_m_y_ballaorig_01");
	iLocal_371 = joaat("bison");
	iLocal_372 = joaat("felon");
	iLocal_373 = joaat("prop_woodpile_01b");
	iLocal_374 = joaat("prop_skip_01a");
	iLocal_375 = joaat("prop_weed_pallet");
	iLocal_378 = 1;
	iLocal_379 = 2;
	iLocal_381 = 1;
	iLocal_383 = 1;
	iLocal_384 = 1;
	iLocal_385 = 1;
	iLocal_386 = 3;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		iLocal_377 = 1;
		func_777();
	}
	func_771();
	bLocal_101 = func_769();
	if (!bLocal_101)
	{
		GlobalFunc_2536(1, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_LamarDown", 0);
		if (bLocal_101)
		{
			if (iLocal_377 == 1)
			{
				bLocal_101 = false;
			}
		}
		func_767();
		func_764();
		switch (iLocal_376)
		{
			case 0:
				func_752();
				break;
			
			case 1:
				func_747();
				break;
			
			case 2:
				func_734();
				break;
			
			case 3:
				func_727();
				break;
			
			case 4:
				func_725();
				break;
			
			case 5:
				func_652();
				break;
			
			case 6:
				func_422();
				break;
			
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x332
{
	int iVar0;
	
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(Local_84, 0f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_84, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 0f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(Local_498))
			{
				func_184(-72.3909f, -1461.082f, 31.1151f, 323.4056f);
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(Local_498) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_498)) || PED::IS_PED_INJURED(Local_498)))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			GlobalFunc_5108(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_EXT", 8);
		func_171("FRA_2_EXT");
		if (!GlobalFunc_5172(&Local_431, 1) && GlobalFunc_Has_Cutscene_Loaded())
		{
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			if (!PED::IS_PED_INJURED(Local_498))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_498, "Lamar", 0, 0, 0);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			iLocal_254 = 0;
			iLocal_100 = 0;
			iLocal_377 = 1;
		}
	}
	if (iLocal_377 == 1)
	{
		switch (iLocal_254)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GO_TO_FRANKLINS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_GO_TO_FRANKLINS");
					}
					iLocal_356 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_356, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(iLocal_356, "OFF");
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_356, 0, 0);
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_356, Local_84, 20f, 20f, 10f, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_356) != GlobalFunc_4931(1, 1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_356, -1))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_356, -1);
							}
							if (iVar0 == 0 || iVar0 == PLAYER::PLAYER_PED_ID())
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_356, 1, 0);
								ENTITY::SET_ENTITY_HEADING(iLocal_356, 135.3133f);
								ENTITY::SET_ENTITY_COORDS(iLocal_356, -77.4702f, -1472.795f, 31.0564f, 1, 0, 0, 1);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_356, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_356, 0, 0);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_356, 1);
							}
						}
					}
					if (!PED::IS_PED_INJURED(Local_498))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_498, 1, 0, 0, 0);
					}
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					MISC::CLEAR_AREA(Local_84, 200f, 1, 0, 0, 0);
					GlobalFunc_11298(PLAYER::PLAYER_PED_ID(), 14, 158);
					GlobalFunc_2204();
					iLocal_254++;
				}
				break;
			
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::SETTIMERB(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_254++;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				break;
			
			case 2:
				if (SYSTEM::TIMERB() < 500)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
				}
				GlobalFunc_2536(1, 0);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (SYSTEM::TIMERB() > 4000 || CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_377 = 2;
				}
				break;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_377 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, 1, 0);
		}
		if (!PED::IS_PED_INJURED(Local_498))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_498, -72.3909f, -1461.082f, 31.1151f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_498, 323.4056f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_498, -83.649f, -1437.177f, 30.3611f, 1f, -1, 1048576000, 1, 40000f);
				PED::SET_PED_COMPONENT_VARIATION(Local_498, 1, 1, 0, 0);
			}
		}
	}
	if (iLocal_377 == 2)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		func_36(&iLocal_356, 0);
		func_34(&Local_498, 1);
		GlobalFunc_2204();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (GlobalFunc_2033(1) > 50)
		{
			GlobalFunc_10834(1, 1, 50);
		}
		RECORDING::_0x81CBAE94390F9F89();
		func_2(0);
	}
	if (iLocal_377 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_377 = 1;
	}
}

void func_2(bool bParam0)//Position - 0x793
{
	if (bParam0)
	{
	}
	GlobalFunc_5103(0, 0);
	func_777();
}
































void func_34(int iParam0, bool bParam1)//Position - 0x187B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, 1, 0);
			}
			if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, 1);
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}


void func_36(int iParam0, bool bParam1)//Position - 0x194A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 0))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}







































































































































void func_171(char* sParam0)//Position - 0x1E1B7
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == 1877999598)
		{
			func_172("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
		}
		else if (iVar0 == 1180369883)
		{
			func_172("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				func_172("Michael", uLocal_387[0], 0, 2);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				func_172("Trevor", uLocal_387[2], 0, 2);
			}
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Trevor", 2, 0, 0, 0);
		}
		else if (iVar0 == 943887351)
		{
			func_172("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_498))
			{
				func_172("Lamar", Local_498, 0, 2);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
		}
	}
}

void func_172(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E28F
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_173(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_173(int iParam0, var uParam1, int iParam2)//Position - 0x1E34A
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8358(iParam0, &Var2, 0);
	GlobalFunc_8358(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_4915(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { GlobalFunc_10828(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { GlobalFunc_10828(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}











int func_184(struct<3> Param0, float fParam3)//Position - 0x1F0A3
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_498))
	{
		if (GlobalFunc_7142(&Local_498, 19, Param0, fParam3, 1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_498, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_498, 1862763509);
			PED::SET_PED_CONFIG_FLAG(Local_498, 182, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_498, 2f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_498, "FRANKLIN_2_LAMAR_GROUP", 0);
			GlobalFunc_173(&Local_1903, 3, Local_498, "LAMAR", 0, 1);
			if (iLocal_376 == 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498, 1);
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_498, "WORLD_HUMAN_STUPOR", 0, 0);
			}
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 4, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_498, 1, 1, 0, 0);
			Local_498.f_3 = 0;
			Local_498.f_5 = 0;
			Local_498.f_7 = 0;
			Local_498.f_8 = 0;
			return 1;
		}
	}
	else
	{
		if (Local_1903[3 /*10*/] != Local_498)
		{
			GlobalFunc_173(&Local_1903, 3, Local_498, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}






int func_190()//Position - 0x1F3DA
{
	if (GlobalFunc_8315() != 1)
	{
		func_192(1, 1);
		func_191();
	}
	else
	{
		func_191();
		return 1;
	}
	return 0;
}

void func_191()//Position - 0x1F401
{
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		if (Local_1903[0 /*10*/] != uLocal_387[0] || !Local_1903[0 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 0, uLocal_387[0], "MICHAEL", 0, 1);
		}
	}
	else if (GlobalFunc_8315() == 0)
	{
		if (Local_1903[0 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_1903[0 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
	}
	else if (Local_1903[0 /*10*/] != 0)
	{
		GlobalFunc_173(&Local_1903, 0, 0, "MICHAEL", 0, 1);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		if (Local_1903[1 /*10*/] != uLocal_387[1] || !Local_1903[1 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 1, uLocal_387[1], "FRANKLIN", 0, 1);
		}
	}
	else if (GlobalFunc_8315() == 1)
	{
		if (Local_1903[1 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_1903[1 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
	}
	else if (Local_1903[1 /*10*/] != 0)
	{
		GlobalFunc_173(&Local_1903, 1, 0, "FRANKLIN", 0, 1);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		if (Local_1903[2 /*10*/] != uLocal_387[2] || !Local_1903[2 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 2, uLocal_387[2], "TREVOR", 0, 1);
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (Local_1903[2 /*10*/] != PLAYER::PLAYER_PED_ID() || !Local_1903[2 /*10*/].f_7)
		{
			GlobalFunc_173(&Local_1903, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	else if (Local_1903[2 /*10*/] != 0)
	{
		GlobalFunc_173(&Local_1903, 2, 0, "TREVOR", 0, 1);
	}
}

int func_192(int iParam0, bool bParam1)//Position - 0x1F5CE
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
		func_419(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_263(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_195(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_195(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1F786
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
			GlobalFunc_9133(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9133((*uParam0)[uParam0->f_7], 0);
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




































































int func_263(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x2680C
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
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_411(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7714(*iParam0);
			func_265(*iParam0, bParam8);
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


int func_265(int iParam0, bool bParam1)//Position - 0x26924
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_269(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_269(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10910(iParam0, 3, 169))
					{
						GlobalFunc_11267(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 10))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 50))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 59))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 22))
			{
				GlobalFunc_11267(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10910(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 4))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 3))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 82))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 76))
			{
				GlobalFunc_11267(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 1))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10910(iParam0, 12, 12))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10910(iParam0, 3, 71))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 7))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 88))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 17))
			{
				GlobalFunc_11267(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_269(int iParam0, int iParam1)//Position - 0x27073
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
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_271(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_271(int iParam0, var uParam1, bool bParam2)//Position - 0x272EA
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
			if (GlobalFunc_11030(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11267(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11026(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11267(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_274(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_274(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x27581
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10957(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11087(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_274(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10637(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10957(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_274(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11068(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_274(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11068(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_274(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_274(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_274(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_274(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_274(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11087(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				GlobalFunc_11266(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9000(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_274(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10955(iParam0, 9, iVar97))
						{
							func_274(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_274(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_274(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11087(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11087(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_274(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_274(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_274(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_274(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11182(iParam0, &uVar4))
		{
			func_274(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_274(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_274(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_274(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_274(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}









































































































































void func_411(int iParam0)//Position - 0x5292B
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
		func_271(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11028(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11028(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11028(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_271(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_419(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x53339
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
				func_411(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7714(*iParam0);
				func_265(*iParam0, bParam6);
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



void func_422()//Position - 0x53432
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11[5];
	int iVar17;
	bool bVar18;
	
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(-577.2953f, 5254.017f, 69.4656f, 152.958f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -577.2953f, 5254.017f, 69.4656f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 152.958f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			SYSTEM::SETTIMERA(0);
			func_651();
			if (Global_86816)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_387[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_354)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					func_650(Local_81, fLocal_298, 0);
					func_647(-568.2169f, 5261.117f, 69.5043f, 178.0029f, 0);
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
					SYSTEM::WAIT(0);
				}
				func_631();
				func_630();
			}
			while (((!func_592(Local_87, fLocal_299) || !ENTITY::DOES_ENTITY_EXIST(Local_498)) || !bLocal_102) || !ENTITY::DOES_ENTITY_EXIST(iLocal_337[0]))
			{
				func_584();
				func_184(-573.1397f, 5254.383f, 69.4683f, 145.2989f);
				func_583();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5108(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_387[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[0])) || PED::IS_PED_INJURED(uLocal_387[0]))) && ((!PED::IS_PED_INJURED(uLocal_387[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[1])) || PED::IS_PED_INJURED(uLocal_387[1]))) && ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[2])) || PED::IS_PED_INJURED(uLocal_387[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			GlobalFunc_6415(1);
			func_580(1);
			func_579(1);
			func_578();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_378 = 1;
			Local_498.f_3 = 50;
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		iLocal_120 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_PROTECT_LAMAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_PROTECT_LAMAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1898.x, 0);
		}
		if (HUD::DOES_BLIP_EXIST(Local_470.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_470.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_456.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_456.f_1));
		}
		if (!PED::IS_PED_INJURED(Local_498))
		{
			TASK::CLEAR_PED_TASKS(Local_498);
			if (!PED::IS_PED_GROUP_MEMBER(Local_498, GlobalFunc_468()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(Local_498, GlobalFunc_468());
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_498, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_498, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_498, 0, 0, 0, 0, 0, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_498, 2, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_498, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_498, 0, 0, 0, 0, 0, 0, 0, 0);
			PED::SET_PED_ALLOWED_TO_DUCK(Local_498, 1);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_498, 1);
			PED::SET_PED_CONFIG_FLAG(Local_498, 174, 1);
			PED::SET_PED_CONFIG_FLAG(Local_498, 185, 0);
			PED::SET_PED_NEVER_LEAVES_GROUP(Local_498, 0);
		}
		func_535(3, "FLEE_AREA", 1, 0, 0, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_354, 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_354, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_354, 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_355, 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_355, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_355, 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[0], 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[2], 0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			if (!PED::IS_PED_INJURED(Local_498))
			{
				PED::SET_PED_USING_ACTION_MODE(Local_498, 1, -1, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_387[2], 1, -1, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_387[0], 1, -1, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FLEE_RT");
			func_533();
			SYSTEM::WAIT(1000);
			GlobalFunc_2204();
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_RETURN_LAMAR");
		}
		func_532(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		SYSTEM::SETTIMERB(0);
		iLocal_254 = 0;
		iLocal_377 = 1;
	}
	if (iLocal_377 == 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (HUD::DOES_BLIP_EXIST(Local_498.f_1))
		{
			func_531();
		}
		switch (iLocal_254)
		{
			case 0:
				if (Global_86816)
				{
					if (!iLocal_133[73])
					{
						if (!GlobalFunc_5172(&Local_431, 1))
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TAKE", 7, 0, 0, 0))
							{
								iLocal_133[73] = 1;
							}
						}
					}
					else if (!iLocal_133[76])
					{
						if (!GlobalFunc_5172(&Local_431, 1))
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MGOING", 7, 0, 0, 0))
							{
								iLocal_133[76] = 1;
							}
						}
					}
					else if (!iLocal_133[74])
					{
						if (!PED::IS_PED_INJURED(Local_498))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_498, 1)) < 400f)
							{
								if (!GlobalFunc_5172(&Local_431, 1))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LBYEM", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
										iLocal_133[74] = 1;
									}
								}
							}
							else
							{
								iLocal_133[74] = 1;
							}
						}
					}
					else if (!iLocal_133[77])
					{
						if (!PED::IS_PED_INJURED(uLocal_387[2]))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_498, 1)) < 400f)
							{
								if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1)) < 625f)
								{
									if (!GlobalFunc_5172(&Local_431, 1))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_tbye", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
											iLocal_133[77] = 1;
										}
									}
								}
								else
								{
									iLocal_133[77] = 1;
									iLocal_133[75] = 1;
								}
							}
						}
					}
					else if (!iLocal_133[75])
					{
						if (!PED::IS_PED_INJURED(Local_498))
						{
							if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_498, 1)) < 625f)
							{
								if (!GlobalFunc_5172(&Local_431, 1))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LBYET", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
										iLocal_133[75] = 1;
									}
								}
							}
						}
					}
				}
				if (!iLocal_133[79] && !iLocal_133[36])
				{
					if (!GlobalFunc_5172(&Local_431, 1))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_498, 0))
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_leave", 7, 0, 0, 0))
							{
								iLocal_133[79] = 1;
							}
						}
					}
				}
				if (GlobalFunc_10366(&Local_431, Local_84, Global_18, 1, Local_498, "FRAN2_getCar", "FRAN2_drvL", 0, 1, 1, -1))
				{
					GlobalFunc_5652(&Local_431, 1, 0);
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					GlobalFunc_5105();
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						GlobalFunc_6685(0);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iLocal_254++;
				}
				if ((HUD::DOES_BLIP_EXIST(Local_431.f_5) && !PED::IS_PED_INJURED(Local_498)) && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_498))
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					if (!GlobalFunc_5172(&Local_431, 1))
					{
						if (!iLocal_133[36])
						{
							if (iLocal_120)
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_BANT1", 7, 0, 0, 0))
								{
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
									PED::SET_PED_USING_ACTION_MODE(Local_498, 0, -1, 0);
									iLocal_133[36] = 1;
								}
							}
						}
						else if (!iLocal_133[37])
						{
							if (Global_86816)
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_BANT4", 7, 0, 0, 0))
								{
									iLocal_133[37] = 1;
								}
							}
							else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_BANT5", 7, 0, 0, 0))
							{
								iLocal_133[37] = 1;
							}
						}
						else if (!iLocal_133[41])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_BANT6", 7, 0, 0, 0))
							{
								iLocal_133[41] = 1;
							}
						}
						else if (!iLocal_133[42])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_BANT6b", 7, 0, 0, 0))
							{
								iLocal_133[42] = 1;
							}
						}
					}
				}
				else if (iLocal_133[36])
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
				break;
			
			case 1:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
					if (GlobalFunc_530(iVar4, 1093140480, 5, 1056964608, 0, 1))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
						}
						bVar3 = true;
					}
				}
				else
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
					}
					bVar3 = true;
				}
				if (bVar3)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
					iLocal_377 = 2;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(Local_498))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(Local_498, 1) };
			if (!iLocal_120)
			{
				Var8 = { -547.2f, 5314.1f, 84.7f };
				AUDIO::PREPARE_MUSIC_EVENT("FRA2_END_VEHICLE");
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_ESCAPE_IN_VEHICLE"))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::START_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
				}
				if (SYSTEM::VDIST2(Var0, Local_69) > 900f && SYSTEM::VDIST2(Var0, Var8) > SYSTEM::VDIST2(Local_69, Var8))
				{
					if (SYSTEM::VDIST2(Var0, Var5) < 900f)
					{
						PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar11, -1);
						iVar17 = 0;
						bVar18 = false;
						iVar17 = 0;
						while (iVar17 < iVar11)
						{
							if (!PED::IS_PED_INJURED(iVar11[iVar17]))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar11[iVar17]) == iLocal_370)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar11[iVar17], 1), Var0) < 10000f)
									{
										bVar18 = true;
									}
								}
							}
							iVar17++;
						}
						if (!bVar18)
						{
							if (GlobalFunc_2227(Local_498, PLAYER::PLAYER_PED_ID()))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_END_VEHICLE");
							}
							else
							{
								func_469();
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_END_ON_FOOT");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_ESCAPE_IN_VEHICLE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_ESCAPE_IN_VEHICLE");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GO_TO_FRANKLINS"))
							{
								AUDIO::START_AUDIO_SCENE("FRANKLIN_2_GO_TO_FRANKLINS");
							}
							func_467(0);
							func_466(0);
							func_464(0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
							VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_372);
							WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_assaultrifle"));
							WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
							WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
							GlobalFunc_6415(0);
							func_580(0);
							func_579(0);
							iLocal_120 = 1;
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 0)) > 40000f)
					{
						func_34(&(uLocal_387[0]), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_354))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_354, 0)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_354, 0)) > 160000f)
					{
						func_36(&iLocal_354, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[2]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 0)) > 40000f)
					{
						func_34(&(uLocal_387[2]), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_355, 0)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_355, 0)) > 160000f)
					{
						func_36(&iLocal_355, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
				{
					if ((SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_357, 0)) > 40000f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_357, 0)) > 160000f)
					{
						func_36(&iLocal_357, 1);
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_431.f_5))
			{
				if (SYSTEM::VDIST2(Var0, Var5) > 22500f)
				{
					func_425(7);
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[0], 713668775) != 1)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), -587.9527f, 5181.299f, 94.6509f) > 4f && !MISC::IS_AREA_OCCUPIED(Vector(94.6509f, 5181.299f, -587.9527f) - Vector(1f, 1f, 1f), Vector(94.6509f, 5181.299f, -587.9527f) + Vector(1f, 1f, 1f), 0, 1, 0, 0, 0, 0, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_387[0], -587.9527f, 5181.299f, 94.6509f, 2f, -1, 1048576000, 0, 186.8357f);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_387[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[0], 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 185, 1);
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[2], 713668775) != 1)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1), -575.8129f, 5271.753f, 69.2686f) > 4f && !MISC::IS_AREA_OCCUPIED(Vector(69.2686f, 5271.753f, -575.8129f) - Vector(1f, 0.5f, 0.5f), Vector(69.2686f, 5271.753f, -575.8129f) + Vector(1f, 0.5f, 0.5f), 0, 1, 0, 0, 0, 0, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_387[2], -575.8129f, 5271.753f, 69.2686f, 2f, -1, 1048576000, 0, 204.2659f);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_387[2], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[2], 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 185, 1);
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_84) < 15625f)
		{
			CUTSCENE::REQUEST_CUTSCENE("FRA_2_EXT", 8);
			func_171("FRA_2_EXT");
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_84) > 30625f)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
	}
	if (iLocal_377 == 2)
	{
		GlobalFunc_5652(&Local_431, 1, 0);
		func_531();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_5105();
		RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
		iLocal_376 = 7;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		func_423(7, 0);
	}
}

void func_423(int iParam0, bool bParam1)//Position - 0x543B7
{
	GlobalFunc_2195();
	iLocal_377 = 4;
	iLocal_254 = 0;
	iLocal_376 = iParam0;
	func_777();
	if (bParam1)
	{
		if (iLocal_376 >= 6)
		{
			func_535(3, "FLEE_AREA", 1, 0, 0, 1);
		}
		else if (iLocal_376 >= 5)
		{
			func_535(2, "GET_LAMAR_OUT", 0, 0, 0, 1);
		}
		else if (iLocal_376 >= 3)
		{
			func_535(1, "ATTACK_SAWMILL", 0, 0, 0, 1);
		}
		else if (iLocal_376 >= 1)
		{
			func_535(0, "MEET_THE_CREW", 0, 0, 0, 1);
		}
	}
}


void func_425(int iParam0)//Position - 0x54464
{
	if (!iLocal_99 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_531();
		GlobalFunc_5652(&Local_431, 1, 0);
		GlobalFunc_4935();
		switch (iParam0)
		{
			case 0:
				sLocal_303 = "";
				break;
			
			case 7:
				sLocal_303 = "FRAN2_LABAN";
				break;
			
			case 6:
				sLocal_303 = "FRAN2_F03";
				break;
			
			case 1:
				sLocal_303 = "FRAN2_FEARLY";
				break;
			
			case 5:
				sLocal_303 = "CMN_FDIED";
				break;
			
			case 2:
				sLocal_303 = "FRAN2_F01";
				break;
			
			case 4:
				sLocal_303 = "CMN_MDIED";
				break;
			
			case 3:
				sLocal_303 = "CMN_TDIED";
				break;
			
			case 8:
				sLocal_303 = "FRAN2_FCOPS";
				break;
			
			case 9:
				sLocal_303 = "CMN_MDEST";
				break;
			
			case 10:
				sLocal_303 = "CMN_TDEST";
				break;
		}
		iLocal_99 = 1;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FAIL");
	GlobalFunc_10835(sLocal_303);
	while (!GlobalFunc_145())
	{
		if (iLocal_376 >= 3 && iLocal_376 < 6)
		{
			func_584();
			func_444();
			if (iLocal_376 >= 5)
			{
				func_427();
			}
		}
		SYSTEM::WAIT(0);
	}
	func_411(PLAYER::PLAYER_PED_ID());
	func_426(uLocal_387[1]);
	func_426(uLocal_387[0]);
	func_426(uLocal_387[2]);
	func_426(Local_498);
	func_777();
}

void func_426(int iParam0)//Position - 0x545D0
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()) || GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			func_34(&iParam0, 1);
		}
	}
}

void func_427()//Position - 0x54606
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	
	if (iLocal_376 == 5)
	{
		iVar0 = 0;
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!Local_1044[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1044[0 /*21*/]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_280) > 1500 || CAM::IS_SPHERE_VISIBLE(-500.2f, 5299.8f, 80.8f, 2f))
					{
						Local_1044[0 /*21*/] = func_443(iLocal_370, -493.5506f, 5253.952f, 85.8353f, 39.0411f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1044[1 /*21*/]))
				{
					Local_1044[1 /*21*/] = func_443(iLocal_370, -489.7464f, 5314.803f, 79.61f, 33.0662f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1044[2 /*21*/]))
				{
					Local_1044[2 /*21*/] = func_443(iLocal_370, -482.9134f, 5314.787f, 79.61f, 83.899f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					func_440(&Local_1044, "AfterL_");
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1044)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1044[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1044[iVar0 /*21*/]))
					{
						switch (Local_1044[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1044[iVar0 /*21*/].f_10 = { -484.8358f, 5277.863f, 85.8626f };
									Local_1044[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 1)
								{
									Local_1044[iVar0 /*21*/].f_10 = { -497.8528f, 5299.311f, 79.61f };
									Local_1044[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 2)
								{
									Local_1044[iVar0 /*21*/].f_10 = { -498.0019f, 5301.956f, 79.6037f };
									Local_1044[iVar0 /*21*/].f_5 = 1;
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1044[iVar0 /*21*/], Local_1044[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1044[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1044[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1044[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1044[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1044[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1044[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1044[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1044[iVar0 /*21*/], 3);
								if (iVar0 == 1)
								{
									GlobalFunc_5122(Local_1044[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1044[iVar0 /*21*/].f_8 = 0;
								Local_1044[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								break;
						}
						if (Local_1044[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1044[iVar0 /*21*/], &(Local_1044[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1044[iVar0 /*21*/].f_4)
							{
								if (Local_1044[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1044[iVar0 /*21*/], 1), Local_1044[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1044[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1044[iVar0 /*21*/].f_8) > 10000)
								{
									if ((!Local_1044[iVar0 /*21*/].f_5 && iLocal_378 != 0) || (Local_1044[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1044[iVar0 /*21*/], 1), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 50, 1);
										PED::SET_COMBAT_FLOAT(Local_1044[iVar0 /*21*/], 13, 3f);
										Local_1044[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_378 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1044[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1044[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1044[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1044[iVar0 /*21*/], Local_1044[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1044[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1044[iVar0 /*21*/], Var2);
						func_432(&(Local_1044[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1108[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Local_1044[0 /*21*/].f_3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1108[0 /*21*/]))
					{
						Local_1108[0 /*21*/] = func_443(iLocal_370, -500.3767f, 5275.774f, 79.61f, 350.0594f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1108[1 /*21*/]))
					{
						Local_1108[1 /*21*/] = func_443(iLocal_370, -524.5526f, 5250.379f, 78.2809f, 314.8624f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1108[2 /*21*/]))
					{
						Local_1108[2 /*21*/] = func_443(iLocal_370, -494.5456f, 5251.484f, 85.8305f, 356.7617f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1108[3 /*21*/]))
					{
						Local_1108[3 /*21*/] = func_443(iLocal_370, -505.5895f, 5259.618f, 79.61f, 347.4243f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
						func_440(&Local_1108, "AfterL2_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1108)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1108[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1108[iVar0 /*21*/]))
					{
						switch (Local_1108[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_1108[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1108[iVar0 /*21*/], 1) };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1108[iVar0 /*21*/], Local_1108[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1108[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1108[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1108[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1108[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1108[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1108[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1108[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1108[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1108[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1108[iVar0 /*21*/].f_8 = 0;
								Local_1108[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -451.7185f, 5289.729f, 89.01991f, -536.2419f, 5292.254f, 71.6853f, 10.25f, 0, 1, 0) || func_431(&Local_1044) == 0)
								{
									if (iVar0 == 0)
									{
										Local_1108[iVar0 /*21*/].f_10 = { -504.842f, 5280.014f, 79.61f };
									}
									else if (iVar0 == 1)
									{
										Local_1108[iVar0 /*21*/].f_10 = { -502.5594f, 5272.397f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_1108[iVar0 /*21*/].f_10 = { -490.6916f, 5260.422f, 85.9607f };
										Local_1108[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 3)
									{
										Local_1108[iVar0 /*21*/].f_10 = { -515.0439f, 5269.592f, 79.4698f };
									}
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1108[iVar0 /*21*/], Local_1108[iVar0 /*21*/].f_10, 2f, 1, 0);
									if (iVar0 == 0)
									{
										GlobalFunc_5122(Local_1044[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									}
									Local_1108[iVar0 /*21*/].f_7++;
								}
								break;
							
							case 2:
								break;
						}
						if (Local_1108[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1108[iVar0 /*21*/], &(Local_1108[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (Local_1108[iVar0 /*21*/].f_7 > 1)
							{
								if (!Local_1108[iVar0 /*21*/].f_4)
								{
									if (Local_1108[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1108[iVar0 /*21*/], 1), Local_1108[iVar0 /*21*/].f_10) < 4f)
										{
											Local_1108[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1108[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_1108[iVar0 /*21*/].f_5 && iLocal_378 != 0) || (Local_1108[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1108[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1108[iVar0 /*21*/], 13, 3f);
											Local_1108[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_378 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1108[iVar0 /*21*/], 1), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 51, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1108[iVar0 /*21*/], 50, 0);
										PED::SET_PED_COMBAT_MOVEMENT(Local_1108[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1108[iVar0 /*21*/], Local_1108[iVar0 /*21*/].f_10, 3f, 1, 0);
										Local_1108[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_435(Local_1108[iVar0 /*21*/], Var2);
						func_432(&(Local_1108[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1193[0 /*21*/].f_3)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (bLocal_114)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1193[0 /*21*/]))
					{
						Local_1193[0 /*21*/] = func_443(iLocal_370, -561.4196f, 5254.911f, 69.507f, 290.0712f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
						func_440(&Local_1193, "AfterL3_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1193)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1193[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1193[iVar0 /*21*/]))
					{
						switch (Local_1193[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1193[iVar0 /*21*/].f_10 = { -561.0891f, 5254.966f, 69.511f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1193[iVar0 /*21*/], Local_1193[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1193[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1193[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1193[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1193[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1193[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1193[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1193[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1193[iVar0 /*21*/], 3);
								Local_1193[iVar0 /*21*/].f_8 = 0;
								Local_1193[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								break;
						}
						if (Local_1193[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1193[iVar0 /*21*/], &(Local_1193[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1193[iVar0 /*21*/].f_4)
							{
								if (Local_1193[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1193[iVar0 /*21*/], 1), Local_1193[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1193[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1193[iVar0 /*21*/], 1), Var2) < 900f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1193[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 1))
								{
									if ((!Local_1193[iVar0 /*21*/].f_5 && iLocal_378 != 0) || (Local_1193[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1193[iVar0 /*21*/], 1), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 50, 1);
										PED::SET_COMBAT_FLOAT(Local_1193[iVar0 /*21*/], 13, 3f);
										Local_1193[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_378 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1193[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1193[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1193[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1193[iVar0 /*21*/], Local_1193[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1193[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1193[iVar0 /*21*/], Var2);
						func_432(&(Local_1193[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1685[0 /*21*/].f_3)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, sLocal_308);
			STREAMING::REQUEST_MODEL(iLocal_372);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, sLocal_308))
			{
				if (bLocal_114)
				{
					iLocal_365 = VEHICLE::CREATE_VEHICLE(iLocal_372, -590.5018f, 5283.329f, 69.9264f, -107.7629f, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_365, 1, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_365, 10, sLocal_308, 1);
					GlobalFunc_2208(&iLocal_365, 2000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_365, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_365, 1.1f);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_365, 3);
					Local_1685[0 /*21*/] = func_429(iLocal_370, iLocal_365, -1, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					Local_1685[1 /*21*/] = func_429(iLocal_370, iLocal_365, 0, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					Local_1685[2 /*21*/] = func_429(iLocal_370, iLocal_365, 1, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					func_440(&Local_1685, "TimbPost_");
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1685)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1685[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1685[iVar0 /*21*/]))
					{
						switch (Local_1685[iVar0 /*21*/].f_7)
						{
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_365, 0))
								{
									if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iLocal_365)) < 0.5f && ENTITY::IS_ENTITY_AT_COORD(iLocal_365, -518.2f, 5245.4f, 80f, 10f, 10f, 5f, 0, 1, 0))
									{
										AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_365, 0);
										bVar5 = true;
									}
								}
								else
								{
									bVar5 = true;
								}
								if (bVar5)
								{
									if (iVar0 == 0)
									{
										iVar6 = 0;
									}
									else if (iVar0 == 1)
									{
										iVar6 = 1200;
									}
									else if (iVar0 == 2)
									{
										iVar6 = 650;
									}
									if (Local_1685[iVar0 /*21*/].f_8 == 0)
									{
										Local_1685[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1685[iVar0 /*21*/].f_8) > iVar6)
									{
										if (iVar0 == 0)
										{
											Local_1685[iVar0 /*21*/].f_10 = { -519.2643f, 5255.792f, 79.4995f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1685[iVar0 /*21*/], Local_1685[iVar0 /*21*/].f_10, 3f, 1, 0);
										}
										else if (iVar0 == 1)
										{
											Local_1685[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1685[iVar0 /*21*/], 1) };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1685[iVar0 /*21*/], Local_1685[iVar0 /*21*/].f_10, 5f, 1, 0);
										}
										else if (iVar0 == 2)
										{
											Local_1685[iVar0 /*21*/].f_10 = { -507.8264f, 5254.782f, 79.653f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1685[iVar0 /*21*/], Local_1685[iVar0 /*21*/].f_10, 3f, 1, 0);
										}
										func_439(&(Local_1685[iVar0 /*21*/]), 10, 1, 2, 0, 1);
										if (WEAPON::HAS_PED_GOT_WEAPON(Local_1685[iVar0 /*21*/], joaat("weapon_smg"), 0))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_1685[iVar0 /*21*/], joaat("weapon_smg"), 1);
										}
										else if (WEAPON::HAS_PED_GOT_WEAPON(Local_1685[iVar0 /*21*/], joaat("weapon_assaultrifle"), 0))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_1685[iVar0 /*21*/], joaat("weapon_assaultrifle"), 1);
										}
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1685[iVar0 /*21*/], 1, 0);
										PED::SET_COMBAT_FLOAT(Local_1685[iVar0 /*21*/], 5, 1f);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1685[iVar0 /*21*/], 200f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1685[iVar0 /*21*/], 0);
										PED::SET_PED_ALERTNESS(Local_1685[iVar0 /*21*/], 3);
										if (iVar0 == 0)
										{
											GlobalFunc_5122(Local_1685[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
										}
										Local_1685[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										Local_1685[iVar0 /*21*/].f_7++;
									}
								}
								break;
							
							case 1:
								break;
						}
						if (Local_1685[iVar0 /*21*/].f_7 > 0)
						{
							GlobalFunc_661(Local_1685[iVar0 /*21*/], &(Local_1685[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1685[iVar0 /*21*/].f_4)
							{
								if (Local_1685[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1685[iVar0 /*21*/], 1), Local_1685[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1685[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1685[iVar0 /*21*/].f_8) > 10000)
								{
									if ((!Local_1685[iVar0 /*21*/].f_5 && iLocal_378 != 0) || (Local_1685[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1685[iVar0 /*21*/], 1), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1685[iVar0 /*21*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1685[iVar0 /*21*/], 50, 1);
										PED::SET_COMBAT_FLOAT(Local_1685[iVar0 /*21*/], 13, 3f);
										Local_1685[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_378 == 0)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1685[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1685[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1685[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1685[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1685[iVar0 /*21*/], Local_1685[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1685[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1685[iVar0 /*21*/], Var2);
						func_432(&(Local_1685[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_365))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_365))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(10, sLocal_308);
				}
			}
		}
		if (!Local_1749[0 /*21*/].f_3)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_308);
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, sLocal_308);
			STREAMING::REQUEST_MODEL(iLocal_372);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_308)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, sLocal_308))
			{
				if (bLocal_115 || (func_431(&Local_1685) == 0 && SYSTEM::VDIST2(Var2, Local_69) < 10000f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_366[0]))
					{
						iLocal_366[0] = VEHICLE::CREATE_VEHICLE(iLocal_372, -701.887f, 5255.897f, 73.3489f, -104.8644f, 1, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_366[0], 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_366[0], 11, sLocal_308, 1);
						GlobalFunc_2208(&(iLocal_366[0]), 1500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_366[0], 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_366[0], 1.1f);
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_366[0], 3);
						iLocal_366[1] = VEHICLE::CREATE_VEHICLE(iLocal_372, -709.0966f, 5259.745f, 72.5166f, -126.1647f, 1, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_366[1], 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_366[1], 12, sLocal_308, 1);
						GlobalFunc_2208(&(iLocal_366[1]), 1500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_366[1], 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_366[1], 1.1f);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[0 /*21*/]))
					{
						Local_1749[0 /*21*/] = func_429(iLocal_370, iLocal_366[0], -1, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[1 /*21*/]))
					{
						Local_1749[1 /*21*/] = func_429(iLocal_370, iLocal_366[0], 0, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[2 /*21*/]))
					{
						Local_1749[2 /*21*/] = func_429(iLocal_370, iLocal_366[0], 1, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[3 /*21*/]))
					{
						Local_1749[3 /*21*/] = func_429(iLocal_370, iLocal_366[1], -1, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[4 /*21*/]))
					{
						Local_1749[4 /*21*/] = func_429(iLocal_370, iLocal_366[1], 0, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1749[5 /*21*/]))
					{
						Local_1749[5 /*21*/] = func_429(iLocal_370, iLocal_366[1], 1, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
						func_440(&Local_1749, "ExitPost_");
					}
				}
			}
		}
		else
		{
			iVar7 = 0;
			iVar0 = 0;
			while (iVar0 < Local_1749)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1749[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1749[iVar0 /*21*/]))
					{
						switch (Local_1749[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 < 3)
								{
									iVar7 = 0;
								}
								else
								{
									iVar7 = 1;
								}
								bVar8 = false;
								iVar9 = 0;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_366[iVar7], 0))
								{
									if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_366[iVar7]))) < 0.5f && ENTITY::IS_ENTITY_AT_COORD(iLocal_366[iVar7], -568.1f, 5263.7f, 71.7f, 30f, 30f, 10f, 0, 1, 0))
									{
										if (iVar7 == 0)
										{
											AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_366[iVar7], 3);
										}
										bVar8 = true;
									}
								}
								else
								{
									bVar8 = true;
								}
								if (bVar8)
								{
									if (iVar0 == 0)
									{
										iVar9 = 0;
									}
									else if (iVar0 == 1)
									{
										iVar9 = 950;
									}
									else if (iVar0 == 2)
									{
										iVar9 = 450;
									}
									else if (iVar0 == 3)
									{
										iVar9 = 0;
									}
									else if (iVar0 == 4)
									{
										iVar9 = 1900;
									}
									else if (iVar0 == 5)
									{
										iVar9 = 1200;
									}
									if (Local_1749[iVar0 /*21*/].f_8 == 0)
									{
										Local_1749[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1749[iVar0 /*21*/].f_8) > iVar9)
									{
										if (iVar0 == 0)
										{
											Local_1749[iVar0 /*21*/].f_10 = { -566.3519f, 5256.474f, 69.467f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 3f, 1, 0);
										}
										else if (iVar0 == 1)
										{
											Local_1749[iVar0 /*21*/].f_10 = { -566.4669f, 5270.942f, 69.2532f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 3f, 1, 0);
										}
										else if (iVar0 == 2)
										{
											Local_1749[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1) };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 5f, 1, 0);
										}
										else if (iVar0 == 3)
										{
											if (!Global_86816)
											{
												Local_1749[iVar0 /*21*/].f_10 = { -573.4135f, 5274.261f, 69.2604f };
											}
											else
											{
												Local_1749[iVar0 /*21*/].f_10 = { -542.5646f, 5232.906f, 74.4704f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 3f, 1, 0);
										}
										else if (iVar0 == 4)
										{
											if (!Global_86816)
											{
												Local_1749[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1) };
											}
											else
											{
												Local_1749[iVar0 /*21*/].f_10 = { -547.2554f, 5231.938f, 73.178f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 5f, 1, 0);
										}
										else
										{
											if (!Global_86816)
											{
												Local_1749[iVar0 /*21*/].f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1) };
											}
											else
											{
												Local_1749[iVar0 /*21*/].f_10 = { -541.3654f, 5227.298f, 75.7013f };
											}
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 5f, 1, 0);
										}
										func_439(&(Local_1749[iVar0 /*21*/]), 10, 1, 2, 0, 1);
										if (WEAPON::HAS_PED_GOT_WEAPON(Local_1749[iVar0 /*21*/], joaat("weapon_smg"), 0))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_1749[iVar0 /*21*/], joaat("weapon_smg"), 1);
										}
										else if (WEAPON::HAS_PED_GOT_WEAPON(Local_1749[iVar0 /*21*/], joaat("weapon_assaultrifle"), 0))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(Local_1749[iVar0 /*21*/], joaat("weapon_assaultrifle"), 1);
										}
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749[iVar0 /*21*/], 1, 0);
										PED::SET_COMBAT_FLOAT(Local_1749[iVar0 /*21*/], 5, 1f);
										PED::SET_COMBAT_FLOAT(Local_1749[iVar0 /*21*/], 13, 3f);
										if (iVar0 < 3 || PED::IS_PED_INJURED(func_428(0)))
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1749[iVar0 /*21*/], 200f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749[iVar0 /*21*/], 0);
										}
										else
										{
											TASK::OPEN_SEQUENCE_TASK(&uVar1);
											if (iVar0 == 3)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -570.1f, 5236.1f, 69.6337f, func_428(0), 2f, 0, 2f, 2f, 1, 5, 0, -957453492, 20000);
											}
											else if (iVar0 == 4)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -571.1f, 5235.4f, 69.6337f, func_428(0), 2f, 0, 2f, 2f, 1, 5, 0, -957453492, 20000);
											}
											else if (iVar0 == 5)
											{
												TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -573.1f, 5235.4f, 69.6337f, func_428(0), 2f, 0, 2f, 2f, 1, 5, 0, -957453492, 20000);
											}
											TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1749[iVar0 /*21*/].f_10, func_428(0), 2f, 0, 1f, 4f, 1, 5, 0, -957453492, 20000);
											TASK::TASK_COMBAT_PED(0, func_428(0), 67108864, 16);
											TASK::CLOSE_SEQUENCE_TASK(uVar1);
											TASK::TASK_PERFORM_SEQUENCE(Local_1749[iVar0 /*21*/], uVar1);
											TASK::CLEAR_SEQUENCE_TASK(&uVar1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749[iVar0 /*21*/], 1);
										}
										if (iVar0 == 0)
										{
											GlobalFunc_5122(Local_1749[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
										}
										Local_1749[iVar0 /*21*/].f_4 = 0;
										Local_1749[iVar0 /*21*/].f_8 = 0;
										Local_1749[iVar0 /*21*/].f_7++;
									}
								}
								break;
							
							case 1:
								if (iVar0 >= 3 && Global_86816)
								{
									if (iVar0 == 3)
									{
										iVar10 = 10000;
										Var11 = { -562.8715f, 5217.48f, 81.9101f };
									}
									else if (iVar0 == 4)
									{
										iVar10 = 10700;
										Var11 = { -578.9219f, 5207.404f, 81.6344f };
									}
									else
									{
										iVar10 = 11200;
										Var11 = { -586.4161f, 5210.241f, 80.3978f };
									}
									if (Local_1749[iVar0 /*21*/].f_8 == 0)
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Local_1749[iVar0 /*21*/].f_10) < 4f)
										{
											Local_1749[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1749[iVar0 /*21*/].f_8) > iVar10)
									{
										Local_1749[iVar0 /*21*/].f_10 = { Var11 };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 3f, 1, 0);
										Local_1749[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										Local_1749[iVar0 /*21*/].f_7++;
									}
								}
								break;
							
							case 2:
								if (iVar0 >= 3 && Global_86816)
								{
									if (!PED::IS_PED_INJURED(uLocal_387[0]))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Local_1749[iVar0 /*21*/].f_10) < 4f && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_387[0], Local_1749[iVar0 /*21*/], 1))
										{
											ENTITY::SET_ENTITY_HEALTH(uLocal_387[0], 0);
										}
									}
								}
								break;
						}
						if (Local_1749[iVar0 /*21*/].f_7 > 0)
						{
							GlobalFunc_661(Local_1749[iVar0 /*21*/], &(Local_1749[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (iVar0 == 3)
							{
								if (!iLocal_133[66])
								{
									if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Var2) < 900f)
										{
											if (!PED::IS_PED_INJURED(uLocal_387[0]))
											{
												GlobalFunc_173(&Local_1903, 6, Local_1749[iVar0 /*21*/], "fr2_enemy3", 0, 1);
												if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_flank", 7, 0, 0, 0))
												{
													iLocal_133[66] = 1;
												}
											}
										}
										else
										{
											iLocal_133[66] = 1;
										}
									}
								}
							}
							if (iVar0 < 3)
							{
								if (!Local_1749[iVar0 /*21*/].f_4)
								{
									if (Local_1749[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Local_1749[iVar0 /*21*/].f_10) < 4f)
										{
											Local_1749[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1749[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_1749[iVar0 /*21*/].f_5 && iLocal_378 != 0) || (Local_1749[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749[iVar0 /*21*/], 50, 1);
											Local_1749[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_378 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749[iVar0 /*21*/], 51, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1749[iVar0 /*21*/], 50, 0);
										PED::SET_PED_COMBAT_MOVEMENT(Local_1749[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1749[iVar0 /*21*/], Local_1749[iVar0 /*21*/].f_10, 3f, 1, 0);
										Local_1749[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
							if (iLocal_378 == 0)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1749[iVar0 /*21*/], 1);
							}
							else
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1749[iVar0 /*21*/], 0);
							}
							if (iVar0 >= 3)
							{
								if (iLocal_378 != 0)
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1749[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 1) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[iVar0 /*21*/], 1), Var2) < 10f)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_1749[iVar0 /*21*/], -1442466670) != 1)
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1749[iVar0 /*21*/], 200f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1749[iVar0 /*21*/], 0);
										}
									}
								}
							}
						}
					}
					else
					{
						func_435(Local_1749[iVar0 /*21*/], Var2);
						func_432(&(Local_1749[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_366[0]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_366[0]))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_308);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_366[1]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_366[1]))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(12, sLocal_308);
			}
		}
	}
}

int func_428(int iParam0)//Position - 0x564D5
{
	if (GlobalFunc_4917(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_387[GlobalFunc_237(iParam0)];
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x56503
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		iVar0 = func_443(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1) + Vector(3f, 0f, 0f), 0f, iParam3, iParam4, iParam5, iParam6, iParam7);
		PED::SET_PED_INTO_VEHICLE(iVar0, iParam1, iParam2);
	}
	return iVar0;
}


int func_431(int iParam0)//Position - 0x5656D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = *iParam0;
	iVar2 = 0;
	if ((iParam0[0 /*21*/])->f_3)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar2 /*21*/]))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iVar1;
	}
	return iVar0;
}

void func_432(int iParam0, bool bParam1)//Position - 0x565BA
{
	int iVar0;
	int iVar1;
	
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
	GlobalFunc_589(&(uParam0->f_13));
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -8f, 1);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0);
				if (iVar1 == iLocal_1901)
				{
					GlobalFunc_565(363, 1, 0);
				}
			}
		}
	}
	TASK::REMOVE_COVER_POINT(uParam0->f_2);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	if (bParam1)
	{
		iParam0->f_3 = 0;
		iParam0->f_7 = 0;
		iParam0->f_8 = 0;
		iParam0->f_9 = 0;
		*iParam0 = 0;
	}
}



void func_435(int iParam0, struct<3> Param1)//Position - 0x5678A
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam0);
	if (ENTITY::IS_ENTITY_A_PED(uVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == uLocal_387[0])
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), Param1) < 10000f)
			{
				iLocal_268 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar1 == uLocal_387[1])
		{
			iLocal_269 = MISC::GET_GAME_TIMER();
		}
		else if (iVar1 == PLAYER::PLAYER_PED_ID())
		{
			Local_96 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
			iLocal_270 = MISC::GET_GAME_TIMER();
		}
	}
}




void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x56B59
{
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, iParam2);
	PED::SET_PED_COMBAT_ABILITY(*iParam0, iParam3);
	PED::SET_PED_COMBAT_RANGE(*iParam0, iParam4);
	PED::SET_PED_ACCURACY(*iParam0, iParam1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, iParam5);
}

void func_440(int iParam0, char* sParam1)//Position - 0x56B8E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_441(iParam0[iVar0 /*21*/], sParam1, iVar0);
		iVar0++;
	}
}

void func_441(var uParam0, var uParam1, int iParam2)//Position - 0x56BBB
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		TASK::TASK_STAND_STILL(*uParam0, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		GlobalFunc_593(*uParam0, 0);
		uParam0->f_3 = 1;
		uParam0->f_4 = 0;
		uParam0->f_6 = 0;
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
		uParam0->f_8 = 0;
		uParam1 = uParam1;
		iParam2 = iParam2;
	}
}


int func_443(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x56CA7
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam9, iParam0, Param1, fParam4, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam8, -1, 1, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam8);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
	PED::ADD_ARMOUR_TO_PED(iVar0, -PED::GET_PED_ARMOUR(iVar0));
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam7);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 29, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 35, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 23, 0);
	PED::SET_PED_MONEY(iVar0, 0);
	return iVar0;
}

void func_444()//Position - 0x56D4D
{
	struct<3> Var0;
	int iVar3[5];
	int iVar9;
	struct<3> Var10;
	bool bVar13;
	bool bVar14;
	float fVar15;
	var uVar16;
	struct<3> Var17;
	struct<3> Var20[6];
	struct<3> Var39[6];
	struct<3> Var58;
	int iVar61;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar9 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_498))
	{
		if (SYSTEM::VDIST2(Var0, Local_66) < 40000f && Local_660[0 /*21*/].f_3)
		{
			func_184(Local_66, fLocal_297);
		}
	}
	else if (!PED::IS_PED_INJURED(Local_498))
	{
		Var10 = { ENTITY::GET_ENTITY_COORDS(Local_498, 1) };
		bVar14 = (PED::IS_PED_IN_COMBAT(Local_498, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_498, -1442466670) == 1);
		if (!PED::IS_PED_INJURED(uLocal_387[1]))
		{
			Var17 = { Local_484.f_11 };
		}
		else if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			Var17 = { Local_456.f_11 };
		}
		Var20[0 /*3*/] = { -523.093f, 5306.697f, 79.2448f };
		Var20[1 /*3*/] = { -498.3445f, 5300.786f, 79.6049f };
		Var20[2 /*3*/] = { -498.9495f, 5281.75f, 79.61f };
		Var20[3 /*3*/] = { -516.5259f, 5258.892f, 79.5591f };
		Var20[4 /*3*/] = { -532.4301f, 5261.022f, 73.3084f };
		Var20[5 /*3*/] = { -577.0162f, 5256.735f, 69.4628f };
		Var39[0 /*3*/] = { -519.9658f, 5307.728f, 79.2448f };
		Var39[1 /*3*/] = { -498.4532f, 5303.5f, 79.5833f };
		Var39[2 /*3*/] = { -504.163f, 5282.265f, 79.61f };
		Var39[3 /*3*/] = { -517.9027f, 5256.091f, 79.5374f };
		Var39[4 /*3*/] = { -541.1633f, 5260.263f, 73.2855f };
		Var39[5 /*3*/] = { -577.0162f, 5256.735f, 69.4628f };
		STREAMING::REQUEST_ANIM_DICT(sLocal_302);
		PED::SET_PED_RESET_FLAG(Local_498, 227, 1);
		switch (Local_498.f_3)
		{
			case 0:
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_302))
				{
					PED::SET_PED_CONFIG_FLAG(Local_498, 118, 0);
					PED::SET_PED_CONFIG_FLAG(Local_498, 208, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_498, iLocal_1902);
					PED::SET_PED_CAN_BE_TARGETTED(Local_498, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_498, 1);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_498, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_498, joaat("weapon_unarmed"), 1);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_498, 729);
					TASK::TASK_PLAY_ANIM(Local_498, sLocal_302, "lamar_base_idle", 8f, -4f, -1, 262145, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498, 1);
					Local_498.f_3++;
				}
				break;
			
			case 1:
				PED::SET_PED_CAPSULE(Local_498, 0.5f);
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -512.4742f, 5304.625f, 78.76758f, -525.5182f, 5308.747f, 83.01758f, 3.5f, 0, 1, 0) && PED::IS_PED_INJURED(Local_745[0 /*21*/])) && Local_745[0 /*21*/].f_3)
				{
					TASK::TASK_PLAY_ANIM(Local_498, sLocal_302, "lamar_base_idle_to_standing_idle", 4f, -1.5f, -1, 262144, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498, 1);
					RECORDING::_0x293220DA1B46CEBC(2f, 1073741824, 3);
					func_451();
					Local_498.f_3++;
				}
				break;
			
			case 2:
				if (!iLocal_133[23] && !iLocal_133[24])
				{
					if (!GlobalFunc_5172(&Local_431, 1))
					{
						if (iLocal_378 == 1)
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_lgof", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
								iLocal_133[23] = 1;
							}
						}
						else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_lgot", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
							iLocal_133[24] = 1;
						}
					}
				}
				else
				{
					bLocal_104 = true;
				}
				PED::SET_PED_CAPSULE(Local_498, 0.5f);
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_498, sLocal_302, "lamar_base_idle_to_standing_idle", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_498, sLocal_302, "lamar_base_idle_to_standing_idle") > 0.65f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_498, sLocal_302, "lamar_base_idle_to_standing_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(Local_498);
					Local_498.f_3 = 50;
				}
				break;
			
			case 50:
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_498, joaat("weapon_pistol"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_498, joaat("weapon_pistol"), -1, 0, 0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_498, 1862763509);
				func_439(&Local_498, 10, 1, 2, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_498, 12, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_498, 36, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_498, 35, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_498, 29, 1);
				PED::SET_PED_CONFIG_FLAG(Local_498, 118, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_498, 0, 1, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_498, 0);
				PED::SET_PED_MAX_HEALTH(Local_498, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_498, 1800);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_498, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_498, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_498, 729);
				PED::SET_PED_USING_ACTION_MODE(Local_498, 1, -1, 0);
				TASK::SET_PED_PATH_AVOID_FIRE(Local_498, 1);
				Local_498.f_11 = { Var20[0 /*3*/] };
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
				Local_498.f_5 = 0;
				Local_498.f_3++;
				Local_498.f_7 = 1;
				break;
			
			case 51:
				PED::GET_PED_NEARBY_PEDS(Local_498, &iVar3, -1);
				iVar9 = 0;
				while (iVar9 < iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar3[iVar9]))
					{
						if (ENTITY::GET_ENTITY_MODEL(iVar3[iVar9]) == iLocal_370)
						{
							if (SYSTEM::VDIST2(Var10, ENTITY::GET_ENTITY_COORDS(iVar3[iVar9], 0)) < 16f)
							{
								Var58 = { ENTITY::GET_ENTITY_COORDS(iVar3[iVar9], 0) };
							}
						}
					}
					iVar9++;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(Local_498, joaat("weapon_pistol"), 0))
				{
					WEAPON::GET_CURRENT_PED_WEAPON(Local_498, &iVar61, 1);
				}
				if (!GlobalFunc_100(Var58, 0f, 0f, 0f))
				{
					STREAMING::REQUEST_ANIM_DICT(sLocal_309);
					if (Local_498.f_5 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_309))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar16);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var58, 2f, -1, 1048576000, 1, 40000f);
							TASK::TASK_PLAY_ANIM(0, sLocal_309, "pickup_low", 1.5f, -1.5f, -1, 262144, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar16);
							TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
							TASK::CLEAR_SEQUENCE_TASK(&uVar16);
							TASK::TASK_LOOK_AT_COORD(Local_498, Var58, -1, 2048, 2);
							Local_498.f_5 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_498.f_5) > 3000 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_498, sLocal_309, "pickup_low", 3))
					{
						if (iVar61 != joaat("weapon_pistol"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_498, joaat("weapon_pistol"), 1);
						}
						TASK::TASK_CLEAR_LOOK_AT(Local_498);
						STREAMING::REMOVE_ANIM_DICT(sLocal_309);
						Local_498.f_5 = 0;
						Local_498.f_3++;
						Local_498.f_7 = 1;
					}
					else if (iVar61 != joaat("weapon_pistol"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_498, sLocal_309, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_498, sLocal_309, "pickup_low") > 0.381f)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Local_498, joaat("weapon_pistol"), 1);
							}
						}
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_498, joaat("weapon_pistol"), 1);
					STREAMING::REMOVE_ANIM_DICT(sLocal_309);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				break;
			
			case 52:
				if (!Local_498.f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), Local_498, Local_498.f_11, Var17, 3f, 2f))
					{
						if (Local_498.f_8)
						{
							Local_498.f_11 = { Var20[0 /*3*/] };
							Local_498.f_8 = 0;
						}
						else
						{
							Local_498.f_11 = { Var39[0 /*3*/] };
							Local_498.f_8 = 1;
						}
						bVar13 = true;
						Local_498.f_7 = 1;
					}
				}
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if ((!func_447(Local_498, Var20[1 /*3*/], 1101004800) && func_431(&Local_1044) == 0) && (func_431(&Local_1108) < Local_1108 || (!PED::IS_PED_INJURED(func_428(1)) && ENTITY::IS_ENTITY_AT_COORD(func_428(1), -499.0878f, 5287.962f, 84.85998f, 56.75f, 9f, 9.5f, 0, 1, 0))))
				{
					Local_498.f_11 = { Var20[1 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				break;
			
			case 53:
				if (!Local_498.f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), Local_498, Local_498.f_11, Var17, 3f, 2f))
					{
						if (Local_498.f_8)
						{
							Local_498.f_11 = { Var20[1 /*3*/] };
							Local_498.f_8 = 0;
						}
						else
						{
							Local_498.f_11 = { Var39[1 /*3*/] };
							Local_498.f_8 = 1;
						}
						bVar13 = true;
						Local_498.f_7 = 1;
					}
				}
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					if (fVar15 > 4f && !bVar13)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_498.f_11, -516.1574f, 5247.171f, 80.3439f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if (GlobalFunc_3037(Local_498))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_498, -511.0591f, 5255f, 79.36004f, -496.3577f, 5296.457f, 84.41231f, 14.25f, 0, 1, 0))
					{
						if (func_431(&Local_1108) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), Local_498, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_498, -516.1574f, 5247.171f, 80.3439f, 0);
							}
						}
					}
				}
				if ((!func_447(Local_498, Var20[2 /*3*/], 1101004800) && func_431(&Local_1108) == 0) && func_431(&Local_1685) < Local_1685)
				{
					Local_498.f_11 = { Var20[2 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				else if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
				{
					if (!iLocal_133[44])
					{
						if (Local_1108[0 /*21*/].f_7 > 0)
						{
							if (SYSTEM::VDIST2(Var0, Var10) < 900f)
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
								{
									iLocal_133[44] = 1;
								}
							}
						}
					}
					if (!iLocal_133[43])
					{
						if (!PED::IS_PED_INJURED(Local_1108[2 /*21*/]))
						{
							if (SYSTEM::VDIST2(Var0, Var10) < 900f)
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LSIDE", 7, 0, 0, 0))
								{
									iLocal_133[43] = 1;
								}
							}
						}
					}
				}
				break;
			
			case 54:
				if (!Local_498.f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), Local_498, Local_498.f_11, Var17, 5f, 3f))
					{
						if (Local_498.f_8)
						{
							Local_498.f_11 = { Var20[2 /*3*/] };
							Local_498.f_8 = 0;
						}
						else
						{
							Local_498.f_11 = { Var39[2 /*3*/] };
							Local_498.f_8 = 1;
						}
						bVar13 = true;
						Local_498.f_7 = 1;
					}
				}
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					if (fVar15 > 4f && !bVar13)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_498.f_11, -516.1574f, 5247.171f, 80.3439f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if (GlobalFunc_3037(Local_498))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_498, -511.0591f, 5255f, 79.36004f, -496.3577f, 5296.457f, 84.41231f, 14.25f, 0, 1, 0))
					{
						if (func_431(&Local_1685) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), Local_498, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_498, -516.1574f, 5247.171f, 80.3439f, 0);
							}
						}
					}
				}
				if (!func_447(Local_498, Var20[3 /*3*/], 1101004800) && func_431(&Local_1685) == 0)
				{
					Local_498.f_11 = { Var20[3 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				else if (!iLocal_133[45])
				{
					if (Local_1685[0 /*21*/].f_7 > 0 && !GlobalFunc_5172(&Local_431, 1))
					{
						if (SYSTEM::VDIST2(Var0, Var10) < 625f)
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
							{
								iLocal_133[45] = 1;
							}
						}
					}
				}
				break;
			
			case 55:
				if (!Local_498.f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), Local_498, Local_498.f_11, Var17, 5f, 3f))
					{
						if (Local_498.f_8)
						{
							Local_498.f_11 = { Var20[3 /*3*/] };
							Local_498.f_8 = 0;
						}
						else
						{
							Local_498.f_11 = { Var39[3 /*3*/] };
							Local_498.f_8 = 1;
						}
						bVar13 = true;
						Local_498.f_7 = 1;
					}
				}
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					if (fVar15 > 4f && !bVar13)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_498.f_11, 2f, -1, 0.5f, 1, 40000f);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if (!func_447(Local_498, Var20[4 /*3*/], 1101004800) && ((!PED::IS_PED_INJURED(func_428(1)) && ENTITY::IS_ENTITY_AT_COORD(func_428(1), -556.7076f, 5235.427f, 83.05424f, 19.25f, 44.75f, 16.75f, 0, 1, 0)) || func_431(&Local_1749) == 0))
				{
					Local_498.f_11 = { Var20[4 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				break;
			
			case 56:
				if (!Local_498.f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), Local_498, Local_498.f_11, Var17, 5f, 3f))
					{
						if (Local_498.f_8)
						{
							Local_498.f_11 = { Var20[4 /*3*/] };
							Local_498.f_8 = 0;
						}
						else
						{
							Local_498.f_11 = { Var39[4 /*3*/] };
							Local_498.f_8 = 1;
						}
						bVar13 = true;
						Local_498.f_7 = 1;
					}
				}
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					if (fVar15 > 4f && !bVar13)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_498.f_11, -574.0313f, 5258.59f, 71.0182f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if (GlobalFunc_3037(Local_498))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_498, -527.8607f, 5247.066f, 79.93937f, -556.4177f, 5258.928f, 69.14958f, 14.5f, 0, 1, 0))
					{
						if (func_431(&Local_1749) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), Local_498, -574.0313f, 5258.59f, 71.0182f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_498, -574.0313f, 5258.59f, 71.0182f, 0);
							}
						}
					}
				}
				if (func_431(&Local_1749) == 0)
				{
					Local_498.f_11 = { Var20[5 /*3*/] };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					Local_498.f_5 = 0;
					Local_498.f_3++;
					Local_498.f_7 = 1;
				}
				else if (!iLocal_133[46])
				{
					if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
					{
						if (Local_1749[0 /*21*/].f_3)
						{
							if (SYSTEM::VDIST2(Var0, Var10) < 900f && SYSTEM::VDIST2(Var10, Local_498.f_11) < 400f)
							{
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_366[0], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_366[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_366[1], 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_366[1])))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LCARS", 7, 0, 0, 0))
									{
										iLocal_133[49] = 1;
									}
								}
								else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MORE", 7, 0, 0, 0))
								{
									iLocal_133[46] = 1;
								}
							}
						}
					}
				}
				break;
			
			case 57:
				fVar15 = SYSTEM::VDIST2(Var10, Local_498.f_11);
				if (Local_498.f_7 || (TASK::GET_SCRIPT_TASK_STATUS(Local_498, 242628503) != 1 && (fVar15 > 4f || !bVar14)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_498, Local_498.f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar16);
					if (fVar15 > 4f && !bVar13)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Local_498.f_11, -591.5313f, 5285.29f, 71.0182f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar16);
					TASK::TASK_PERFORM_SEQUENCE(Local_498, uVar16);
					TASK::CLEAR_SEQUENCE_TASK(&uVar16);
					Local_498.f_7 = 0;
				}
				if (SYSTEM::VDIST2(Var10, Local_498.f_11) < 25f)
				{
					if (iLocal_378 == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_498, 0);
						TASK::CLEAR_PED_TASKS(Local_498);
						PED::SET_PED_AS_GROUP_MEMBER(Local_498, GlobalFunc_468());
						PED::SET_PED_NEVER_LEAVES_GROUP(Local_498, 1);
						Local_498.f_3 = 100;
					}
				}
				break;
			
			case 100:
				break;
		}
		if (Local_498.f_3 > 50 && !PED::IS_PED_INJURED(Local_498))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_498))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_287) > 2000)
				{
					FIRE::STOP_ENTITY_FIRE(Local_498);
				}
			}
			else
			{
				iLocal_287 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_445(int iParam0, int iParam1, struct<2> Param2, float fParam4)//Position - 0x580FA
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	fVar6 = SYSTEM::VDIST2(Var0, Var3);
	fVar7 = MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Var3.x), (Param2.f_1 - Var3.f_1));
	fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.x - Var3.x), (Var0.f_1 - Var3.f_1));
	fVar9 = MISC::ABSF((fVar8 - fVar7));
	if (fVar9 > 180f)
	{
		fVar9 = MISC::ABSF((fVar9 - 360f));
	}
	if (fVar6 < 9f)
	{
		if (fVar9 < 40f)
		{
			return 1;
		}
	}
	else if (fVar9 < 20f)
	{
		return 1;
	}
	return 0;
}


int func_447(int iParam0, struct<3> Param1, float fParam4)//Position - 0x5820C
{
	var uVar0[8];
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var9 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		iVar18 = 0;
		PED::GET_PED_NEARBY_PEDS(iParam0, &uVar0, -1);
		while (iVar18 < 8)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar18]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar0[iVar18]) == iLocal_370)
				{
					Var12 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar18], 1) };
					fVar15 = SYSTEM::VDIST2(Var12, Var9);
					fVar17 = SYSTEM::VDIST2(Var12, Param1);
					fVar16 = SYSTEM::VDIST2(Var9, Param1);
					if (fVar15 < (fVar16 + (fParam4 * fParam4)))
					{
						if (fVar17 < fVar16 || fVar15 < 225f)
						{
							return 1;
						}
					}
				}
			}
			iVar18++;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, float fParam8, float fParam9)//Position - 0x582CC
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iParam0))
	{
		if (GlobalFunc_537(Param5, Param2, 1056964608))
		{
			return 1;
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			fVar6 = SYSTEM::VDIST2(Var3, Param2);
			fVar7 = SYSTEM::VDIST2(Var0, Param2);
			if (fVar6 < (fParam8 * fParam8))
			{
				if (fVar7 < (fParam9 * fParam9))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_451()//Position - 0x583C7
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[2]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_371, ENTITY::GET_ENTITY_COORDS(iLocal_358[2], 0), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_358[2], -599.5241f, 5287.424f, 69.7612f, 0, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[3]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_371, ENTITY::GET_ENTITY_COORDS(iLocal_358[3], 0), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_358[3], -551.522f, 5251.099f, 72.2283f, 0, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[4]))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_371, ENTITY::GET_ENTITY_COORDS(iLocal_358[4], 0), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_358[4], -568.607f, 5270.833f, 69.8024f, 0, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1898.x))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1898.x, 0) };
		if (SYSTEM::VDIST2(Var0, -585.3985f, 5283.55f, 69.2604f) < 2500f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_1898.x, -585.3985f, 5283.55f, 69.2604f, 0, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_1898.x, 0f, 0f, 213.3433f, 2, 0);
		}
		if (SYSTEM::VDIST2(Var0, -509.1606f, 5238.897f, 79.3041f) < 2500f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_1898.x, -509.1606f, 5238.897f, 79.3041f, 0, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_1898.x, 0f, 0f, 256.9148f, 2, 0);
		}
	}
}













void func_464(bool bParam0)//Position - 0x593F2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_337)
	{
		GlobalFunc_2206(&(iLocal_337[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_343)
	{
		GlobalFunc_2206(&(iLocal_343[iVar0]), bParam0);
		iVar0++;
	}
}


void func_466(bool bParam0)//Position - 0x59478
{
	int iVar0;
	
	func_36(&iLocal_365, bParam0);
	func_36(&(iLocal_366[0]), bParam0);
	func_36(&(iLocal_366[1]), bParam0);
	func_36(&Local_1898, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_358)
	{
		func_36(&(iLocal_358[iVar0]), bParam0);
		iVar0++;
	}
}

void func_467(bool bParam0)//Position - 0x594CE
{
	func_468(&Local_512, bParam0);
	func_468(&Local_660, bParam0);
	func_468(&Local_1044, bParam0);
	func_468(&Local_1108, bParam0);
	func_468(&Local_1193, bParam0);
	func_468(&Local_745, bParam0);
	func_468(&Local_767, bParam0);
	func_468(&Local_789, bParam0);
	func_468(&Local_874, bParam0);
	func_468(&Local_959, bParam0);
	func_468(&Local_1215, bParam0);
	func_468(&Local_1279, bParam0);
	func_468(&Local_1407, bParam0);
	func_468(&Local_1429, bParam0);
	func_468(&Local_1451, bParam0);
	func_468(&Local_1515, bParam0);
	func_468(&Local_1600, bParam0);
	func_468(&Local_1685, bParam0);
	func_468(&Local_1749, bParam0);
	func_468(&Local_1876, bParam0);
}

void func_468(var uParam0, bool bParam1)//Position - 0x5958A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*21*/])->f_1))
		{
			HUD::REMOVE_BLIP(&((uParam0[iVar0 /*21*/])->f_1));
		}
		GlobalFunc_589(&((uParam0[iVar0 /*21*/])->f_13));
		TASK::REMOVE_COVER_POINT((uParam0[iVar0 /*21*/])->f_2);
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*21*/]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*21*/], 0) && PED::GET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0 /*21*/]) == iLocal_1901)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_387[1]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_387[1], 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_387[2]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_387[2], 0, 16);
				}
				else if (!PED::IS_PED_INJURED(uLocal_387[0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*21*/], uLocal_387[0], 0, 16);
				}
				PED::SET_PED_KEEP_TASK((*uParam0)[iVar0 /*21*/], 1);
			}
		}
		func_34(uParam0[iVar0 /*21*/], bParam1);
		(uParam0[iVar0 /*21*/])->f_3 = 0;
		(uParam0[iVar0 /*21*/])->f_7 = 0;
		(uParam0[iVar0 /*21*/])->f_9 = 0;
		(uParam0[iVar0 /*21*/])->f_8 = 0;
		iVar0++;
	}
}

void func_469()//Position - 0x596D0
{
	AUDIO::CANCEL_MUSIC_EVENT("FRA2_END_VEHICLE");
}






























































void func_531()//Position - 0x5C908
{
	if (HUD::DOES_BLIP_EXIST(uLocal_310))
	{
		HUD::REMOVE_BLIP(&uLocal_310);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_311))
	{
		HUD::REMOVE_BLIP(&uLocal_311);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_312))
	{
		HUD::REMOVE_BLIP(&uLocal_312);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_313))
	{
		HUD::REMOVE_BLIP(&uLocal_313);
	}
	if (HUD::DOES_BLIP_EXIST(Local_470.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_470.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_456.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_456.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_484.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_484.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_498.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_498.f_1));
	}
}

void func_532(bool bParam0)//Position - 0x5C9A8
{
	if (bParam0)
	{
		PATHFIND::SET_ROADS_IN_AREA(-713.6164f, 5242.05f, 0.8567f, -428.4971f, 5498.299f, 171.8567f, 0, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-713.6164f, 5242.05f, 0.8567f, -428.4971f, 5498.299f, 171.8567f, 1);
	}
}

void func_533()//Position - 0x5C9FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_2284(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()));
	if (iVar0 == 0 || iVar0 == joaat("weapon_unarmed"))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
	{
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, 1);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) < iVar1)
		{
			WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, iVar1 * 2);
			WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 1);
	}
}


void func_535(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5CAB5
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		GlobalFunc_10953(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}











































int func_578()//Position - 0x61986
{
	Local_470.f_3 = 0;
	Local_470.f_4 = 0;
	Local_470.f_5 = 0;
	Local_470.f_10 = 0;
	Local_470.f_7 = 0;
	Local_470.f_8 = 0;
	Local_470.f_9 = 0;
	Local_484.f_3 = 0;
	Local_484.f_4 = 0;
	Local_484.f_5 = 0;
	Local_484.f_10 = 0;
	Local_484.f_7 = 0;
	Local_484.f_8 = 0;
	Local_484.f_9 = 0;
	Local_456.f_3 = 0;
	Local_456.f_4 = 0;
	Local_456.f_5 = 0;
	Local_456.f_10 = 0;
	Local_456.f_7 = 0;
	Local_456.f_8 = 0;
	Local_456.f_9 = 0;
	Local_498.f_3 = 0;
	Local_498.f_4 = 0;
	Local_498.f_5 = 0;
	Local_498.f_7 = 0;
	Local_498.f_8 = 0;
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[0], joaat("weapon_heavysniper"), 100, 1, 1);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[0], 1862763509);
		func_439(&(uLocal_387[0]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[0], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[0], 36, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[0], 35, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[0], 29, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 118, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 185, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 188, 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_387[0], 0, 1, 0, 0, 0, 0, 0, 0);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[0], 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 1);
		PED::SET_PED_MAX_HEALTH(uLocal_387[0], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_387[0], 1800);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[0], 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[0], 729);
		PED::SET_PED_USING_ACTION_MODE(uLocal_387[0], 1, -1, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[1], joaat("weapon_carbinerifle"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[1], joaat("weapon_carbinerifle"), 500, 1, 1);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[1], 1862763509);
		func_439(&(uLocal_387[1]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[1], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[1], 36, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[1], 29, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[1], 35, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 118, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 185, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 188, 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_387[1], 0, 1, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[1], joaat("weapon_carbinerifle"), 1);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[1], 0);
		PED::SET_PED_MAX_HEALTH(uLocal_387[1], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_387[1], 1800);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[1], 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[1], 729);
		PED::SET_PED_USING_ACTION_MODE(uLocal_387[1], 1, -1, 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[2], joaat("weapon_carbinerifle"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[2], joaat("weapon_carbinerifle"), 500, 1, 1);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[2], 1862763509);
		func_439(&(uLocal_387[2]), 5, 1, 2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[2], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[2], 36, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 118, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 185, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 188, 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_387[2], 0, 1, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[2], joaat("weapon_carbinerifle"), 1);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[2], 0);
		PED::SET_PED_MAX_HEALTH(uLocal_387[2], 1800);
		ENTITY::SET_ENTITY_HEALTH(uLocal_387[2], 1800);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[2], 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[2], 729);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[2], 29, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[2], 35, 1);
		PED::SET_PED_USING_ACTION_MODE(uLocal_387[2], 1, -1, 0);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	return 1;
}

void func_579(bool bParam0)//Position - 0x61D88
{
	int iVar0;
	
	if (bParam0)
	{
		if (iLocal_315[0] == 0)
		{
			iLocal_315[0] = TASK::ADD_COVER_POINT(-565.6465f, 5257.004f, 69.4669f, 175.0081f, 0, 2, 1, 0);
		}
		if (iLocal_315[1] == 0)
		{
			iLocal_315[1] = TASK::ADD_COVER_POINT(-581.6578f, 5291.769f, 69.2604f, 128.3183f, 0, 2, 1, 0);
		}
		if (iLocal_315[2] == 0)
		{
			iLocal_315[2] = TASK::ADD_COVER_POINT(-592.0037f, 5236.338f, 69.9043f, 325.1953f, 2, 0, 1, 0);
		}
		if (iLocal_315[3] == 0)
		{
			iLocal_315[3] = TASK::ADD_COVER_POINT(-487.6498f, 5385.08f, 77.0692f, 192.7037f, 2, 0, 1, 0);
		}
		if (iLocal_315[4] == 0)
		{
			iLocal_315[4] = TASK::ADD_COVER_POINT(-499.8006f, 5292.344f, 79.61f, 158.0821f, 1, 2, 1, 0);
		}
		if (iLocal_315[5] == 0)
		{
			iLocal_315[5] = TASK::ADD_COVER_POINT(-580.1699f, 5262.912f, 69.4438f, 56.725f, 0, 2, 1, 0);
		}
		if (iLocal_315[6] == 0)
		{
			iLocal_315[6] = TASK::ADD_COVER_POINT(-588.9133f, 5318.15f, 69.2144f, 333.8809f, 0, 2, 1, 0);
		}
		if (iLocal_315[7] == 0)
		{
			iLocal_315[7] = TASK::ADD_COVER_POINT(-582.0135f, 5334.625f, 69.2144f, 329.7396f, 0, 2, 1, 0);
		}
		if (iLocal_315[8] == 0)
		{
			iLocal_315[8] = TASK::ADD_COVER_POINT(-554.9641f, 5364.963f, 69.4369f, 340.0293f, 1, 0, 1, 0);
		}
		if (iLocal_315[9] == 0)
		{
			iLocal_315[9] = TASK::ADD_COVER_POINT(-522.1553f, 5250.709f, 78.555f, 339.6773f, 2, 0, 1, 0);
		}
		if (iLocal_315[10] == 0)
		{
			iLocal_315[10] = TASK::ADD_COVER_POINT(-524.0961f, 5250.48f, 78.3368f, 355.7343f, 0, 2, 1, 0);
		}
		if (iLocal_315[11] == 0)
		{
			iLocal_315[11] = TASK::ADD_COVER_POINT(-475.8146f, 5321.981f, 79.61f, 161.7416f, 2, 0, 1, 0);
		}
		if (iLocal_315[12] == 0)
		{
			iLocal_315[12] = TASK::ADD_COVER_POINT(-475.4565f, 5334.286f, 81.7084f, 344.8566f, 2, 0, 1, 0);
		}
		if (iLocal_315[13] == 0)
		{
			iLocal_315[13] = TASK::ADD_COVER_POINT(-472.9561f, 5340.574f, 81.7094f, 162.1539f, 2, 0, 1, 0);
		}
		if (iLocal_315[14] == 0)
		{
			iLocal_315[14] = TASK::ADD_COVER_POINT(-495.6543f, 5299.486f, 79.61f, 152.2808f, 2, 0, 1, 0);
		}
		if (iLocal_315[15] == 0)
		{
			iLocal_315[15] = TASK::ADD_COVER_POINT(-494.111f, 5298.999f, 79.61f, 161.1279f, 2, 0, 1, 0);
		}
		if (iLocal_315[16] == 0)
		{
			iLocal_315[16] = TASK::ADD_COVER_POINT(-532.4843f, 5260.978f, 73.3015f, 73.5275f, 1, 2, 1, 0);
		}
		if (iLocal_315[17] == 0)
		{
			iLocal_315[17] = TASK::ADD_COVER_POINT(-580.3589f, 5263.835f, 69.4457f, 140.5717f, 1, 2, 1, 0);
		}
		if (iLocal_315[18] == 0)
		{
			iLocal_315[18] = TASK::ADD_COVER_POINT(-492.6234f, 5316.028f, 79.6067f, 333.0276f, 1, 2, 1, 0);
		}
		if (iLocal_315[19] == 0)
		{
			iLocal_315[19] = TASK::ADD_COVER_POINT(-615.4936f, 5267.172f, 71.5453f, 317.7524f, 2, 0, 1, 0);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_315)
		{
			if (iLocal_315[iVar0] != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_315[iVar0]);
				iLocal_315[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

void func_580(bool bParam0)//Position - 0x62152
{
	if (bParam0)
	{
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_RANDOM_TRAINS(0);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else
	{
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_RANDOM_TRAINS(1);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
}



int func_583()//Position - 0x6227F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_337[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_373);
		STREAMING::REQUEST_MODEL(iLocal_374);
		STREAMING::REQUEST_MODEL(iLocal_375);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_373) && STREAMING::HAS_MODEL_LOADED(iLocal_374)) && STREAMING::HAS_MODEL_LOADED(iLocal_375))
		{
			iLocal_337[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_373, -614.29f, 5269.06f, 71.3612f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[0], -4.3f, 0f, -44.18f, 2, 1);
			iLocal_337[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_374, -525.2531f, 5241.241f, 78.626f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[1], 3.3465f, 4.7541f, 172.9586f, 2, 1);
			iLocal_337[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -600.129f, 5325.839f, 69.4513f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[2], 0f, 0f, -32.04f, 2, 1);
			iLocal_337[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -578.5708f, 5303.519f, 69.2611f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[3], 0f, 0f, -83.52f, 2, 1);
			iLocal_337[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -578.8108f, 5305.399f, 69.2611f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[4], 0f, 0f, -97.56f, 2, 1);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_337)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_337[iVar0], 1);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_337[iVar0]) == iLocal_375)
				{
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_337[iVar0], 200);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_373);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_374);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_375);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_584()//Position - 0x62434
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	var uVar14;
	struct<3> Var18;
	float fVar21;
	float fVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	bool bVar27;
	struct<3> Var28;
	int iVar31;
	float fVar32;
	float fVar33;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	bool bVar46;
	struct<3> Var47;
	
	iVar0 = 0;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	STREAMING::REQUEST_MODEL(iLocal_370);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
	STREAMING::REQUEST_CLIP_SET("move_ped_strafing");
	iVar5 = func_591(Var2);
	if (!bLocal_103)
	{
		iVar6 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((func_590(func_428(0), func_428(2), func_428(1), -582.5289f, 5331.001f, 66.46442f, -477.7677f, 5292.183f, 145.0728f, 109.5f) || MISC::IS_BULLET_IN_ANGLED_AREA(-499.701f, 5391.09f, 166.6113f, -559.4962f, 5230.065f, 63.06849f, 188f, 0)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -499.701f, 5391.09f, 166.6113f, -559.4962f, 5230.065f, 63.06849f, 188f)) || (ENTITY::DOES_ENTITY_EXIST(iVar6) && OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iVar6, 0), -499.701f, 5391.09f, 166.6113f, -559.4962f, 5230.065f, 63.06849f, 188f, 0, 1)))
		{
			bLocal_103 = true;
		}
	}
	if (!Local_512[0 /*21*/].f_3)
	{
		if (((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && iLocal_376 < 5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_512[0 /*21*/]))
			{
				Local_512[0 /*21*/] = func_443(iLocal_370, -600.801f, 5282.034f, 69.922f, -123.5317f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[1 /*21*/]))
			{
				Local_512[1 /*21*/] = func_443(iLocal_370, -567.2858f, 5256.007f, 69.4673f, 62.9176f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[2 /*21*/]))
			{
				Local_512[2 /*21*/] = func_443(iLocal_370, -465.5948f, 5348.733f, 83.4476f, 160.7631f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[3 /*21*/]))
			{
				Local_512[3 /*21*/] = func_443(iLocal_370, -556.7905f, 5363.894f, 69.2721f, 74.8856f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[4 /*21*/]))
			{
				Local_512[4 /*21*/] = func_443(iLocal_370, -495.7584f, 5248.298f, 85.7865f, 104.518f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[5 /*21*/]))
			{
				Local_512[5 /*21*/] = func_443(iLocal_370, -604.6235f, 5295.007f, 69.3041f, 291.152f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_512[6 /*21*/]))
			{
				Local_512[6 /*21*/] = func_443(iLocal_370, -552.7806f, 5348.862f, 73.7482f, 291.152f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
				func_440(&Local_512, "Start_");
				func_579(1);
				iLocal_260 = 0;
				iLocal_290 = -1;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_512)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_512[iVar0 /*21*/]))
			{
				if (!PED::IS_PED_INJURED(Local_512[iVar0 /*21*/]))
				{
					switch (Local_512[iVar0 /*21*/].f_7)
					{
						case 0:
							if (iVar0 == 5)
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -599.9635f, 5350.112f, 69.4697f, 1f, -1, 1048576000, 0, 98.0563f);
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -604.6235f, 5295.007f, 69.3041f, 1f, -1, 1048576000, 0, 291.152f);
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								TASK::SET_SEQUENCE_TO_REPEAT(uVar1, 1);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_512[iVar0 /*21*/], uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							}
							else
							{
								TASK::TASK_STAND_GUARD(Local_512[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), ENTITY::GET_ENTITY_HEADING(Local_512[iVar0 /*21*/]), "WORLD_HUMAN_GUARD_STAND");
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_512[iVar0 /*21*/], 1);
							Local_512[iVar0 /*21*/].f_7++;
							break;
						
						case 1:
							if (!bLocal_103)
							{
								if (iVar0 == iLocal_260)
								{
									Var7 = { ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1) };
									fVar11 = SYSTEM::VDIST2(Var2, Var7);
									fVar12 = 100000f;
									if (!PED::IS_PED_INJURED(uLocal_387[2]))
									{
										fVar12 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1), Var7);
									}
									else if (!PED::IS_PED_INJURED(uLocal_387[1]))
									{
										fVar12 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1), Var7);
									}
									fVar10 = (Var7.f_2 - Var2.f_2);
									if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_512[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 1) || ((iVar0 != 2 && fVar11 < 1600f) && (fVar10 > -5f || fVar11 < 100f))) || (iVar0 != 2 && fVar12 < 1600f)) || (iVar0 == 2 && fVar11 < 900f)) || MISC::IS_PROJECTILE_IN_AREA(Var7 - Vector(5f, 8f, 8f), Var7 + Vector(5f, 8f, 8f), 1))
									{
										iLocal_290 = iVar0;
										bLocal_103 = true;
									}
								}
							}
							else
							{
								if (iVar0 == 0)
								{
									Local_512[iVar0 /*21*/].f_10 = { -596.4f, 5287f, 69.8f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 6f, 1, 0);
								}
								else if (iVar0 == 1)
								{
									Local_512[iVar0 /*21*/].f_10 = { -565.5f, 5257.3f, 69.9f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 2f, 1, 0);
								}
								else if (iVar0 == 2)
								{
									Local_512[iVar0 /*21*/].f_10 = { -465.8f, 5348.8f, 84.1f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_512[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_512[iVar0 /*21*/].f_10 = { -561.2f, 5377f, 70.2f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 6f, 1, 0);
								}
								else if (iVar0 == 4)
								{
									Local_512[iVar0 /*21*/].f_10 = { -513.3f, 5257.5f, 80f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 10f, 1, 0);
								}
								else if (iVar0 == 5)
								{
									Local_512[iVar0 /*21*/].f_10 = { -581.3f, 5292f, 70.4f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 6f, 1, 0);
								}
								else if (iVar0 == 6)
								{
									Local_512[iVar0 /*21*/].f_10 = { -554.8165f, 5349.499f, 73.7563f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 6f, 1, 0);
								}
								func_439(&(Local_512[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_512[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_512[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_512[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_512[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_512[iVar0 /*21*/], 2, 300f);
								PED::SET_PED_ALERTNESS(Local_512[iVar0 /*21*/], 3);
								Local_512[iVar0 /*21*/].f_7++;
							}
							break;
					}
					if (Local_512[iVar0 /*21*/].f_7 != 0 && bLocal_103)
					{
						GlobalFunc_661(Local_512[iVar0 /*21*/], &(Local_512[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
						if (!Local_512[iVar0 /*21*/].f_6)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
							{
								PED::SET_PED_ACCURACY(Local_512[iVar0 /*21*/], 1);
								Local_512[iVar0 /*21*/].f_6 = 1;
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							PED::SET_PED_ACCURACY(Local_512[iVar0 /*21*/], 5);
							Local_512[iVar0 /*21*/].f_6 = 0;
						}
						if (Local_512[iVar0 /*21*/].f_7 > 1)
						{
							if (!Local_512[iVar0 /*21*/].f_4)
							{
								if (Local_512[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), Local_512[iVar0 /*21*/].f_10) < 4f)
									{
										if (iVar0 == 0 && iLocal_384 == 4)
										{
											Local_512[iVar0 /*21*/].f_8 = 1;
										}
										else
										{
											Local_512[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_512[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_378 != 0)
									{
										if (((!Local_512[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1)) < 625f) || (iVar0 == 0 && iLocal_384 == 4)) || (Local_512[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_512[iVar0 /*21*/], 13, 3f);
											if (iVar0 == 0)
											{
												PED::SET_PED_CONFIG_FLAG(Local_512[iVar0 /*21*/], 286, 1);
											}
											Local_512[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), Var2) > 900f && iVar0 != 0) || iLocal_378 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 51, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_512[iVar0 /*21*/], 50, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_512[iVar0 /*21*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_512[iVar0 /*21*/], Local_512[iVar0 /*21*/].f_10, 3f, 1, 0);
								Local_512[iVar0 /*21*/].f_4 = 0;
							}
							if (iLocal_290 > -1 && iLocal_290 == iVar0)
							{
								GlobalFunc_173(&Local_1903, 5, Local_512[iVar0 /*21*/], "fr2_enemy1", 0, 1);
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_alert", 7, 0, 0, 0))
								{
									iLocal_290 = -1;
								}
							}
						}
					}
				}
				else
				{
					if (!bLocal_103)
					{
						bLocal_103 = true;
					}
					func_435(Local_512[iVar0 /*21*/], Var2);
					func_432(&(Local_512[iVar0 /*21*/]), 0);
				}
			}
			iVar0++;
		}
		iLocal_260++;
		if (iLocal_260 >= Local_512)
		{
			iLocal_260 = 0;
		}
	}
	if (!bLocal_102)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[0]))
		{
			STREAMING::REQUEST_MODEL(iLocal_371);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_371))
			{
				iLocal_358[0] = VEHICLE::CREATE_VEHICLE(iLocal_371, -583.9711f, 5315.609f, 69.2144f, -68.552f, 1, 1);
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[1]))
		{
			iLocal_358[1] = VEHICLE::CREATE_VEHICLE(iLocal_371, -561.6607f, 5378.375f, 69.1896f, 274.1927f, 1, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[2]))
		{
			iLocal_358[2] = VEHICLE::CREATE_VEHICLE(iLocal_371, -596.3167f, 5286.43f, 69.2252f, 19.9865f, 1, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[3]))
		{
			iLocal_358[3] = VEHICLE::CREATE_VEHICLE(iLocal_371, -545.0247f, 5253.058f, 73.3049f, 124.1131f, 1, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[4]))
		{
			iLocal_358[4] = VEHICLE::CREATE_VEHICLE(iLocal_371, -569.1078f, 5268.111f, 69.2658f, 146.2613f, 1, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358[5]))
		{
			iLocal_358[5] = VEHICLE::CREATE_VEHICLE(iLocal_371, -583.5582f, 5250.513f, 69.4679f, 216.5756f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
			iVar0 = 0;
			while (iVar0 < iLocal_358)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_358[iVar0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_358[iVar0], 66, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_358[iVar0], 66, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_358[iVar0], 7);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_358[iVar0], 1);
				}
				iVar0++;
			}
			bLocal_102 = true;
		}
	}
	else if (iLocal_376 == 6 && CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_358[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_358)
			{
				func_36(&(iLocal_358[iVar0]), 0);
				iVar0++;
			}
		}
	}
	if (!Local_1876[0 /*21*/].f_3)
	{
		if (iLocal_376 == 3 && !bLocal_103)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_370))
			{
				Local_1876[0 /*21*/] = func_443(iLocal_370, -474.2554f, 5377.468f, 79.3745f, 208.8788f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
				func_440(&Local_1876, "Phone_");
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1876[0 /*21*/], joaat("weapon_unarmed"), 1);
				TASK::TASK_USE_MOBILE_PHONE(Local_1876[0 /*21*/], 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1876[0 /*21*/], 1);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_1876)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1876[iVar0 /*21*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1876[iVar0 /*21*/]))
				{
					switch (Local_1876[iVar0 /*21*/].f_7)
					{
						case 0:
							fVar13 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1876[iVar0 /*21*/], 1), Var2);
							if (bLocal_103 || (fVar13 < 2500f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_1876[iVar0 /*21*/], PLAYER::PLAYER_PED_ID())))
							{
								if (fVar13 > 5000f && (ENTITY::IS_ENTITY_OCCLUDED(Local_1876[iVar0 /*21*/]) || fVar13 > 10000f))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1876[iVar0 /*21*/], 0);
								}
								else
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1876[iVar0 /*21*/], joaat("weapon_pistol"), 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1876[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_1876[iVar0 /*21*/], 1), 5f, 0, 0);
									func_439(&(Local_1876[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1876[iVar0 /*21*/], iLocal_1901);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1876[iVar0 /*21*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1876[iVar0 /*21*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1876[iVar0 /*21*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1876[iVar0 /*21*/], 35, 1);
									PED::SET_COMBAT_FLOAT(Local_1876[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_1876[iVar0 /*21*/], 2, 300f);
									PED::SET_PED_ALERTNESS(Local_1876[iVar0 /*21*/], 3);
									TASK::CLEAR_PED_TASKS(Local_1876[iVar0 /*21*/]);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1876[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1876[iVar0 /*21*/], 0);
									GlobalFunc_5122(Local_1876[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									Local_1876[iVar0 /*21*/].f_7++;
								}
							}
							else if (!iLocal_133[80])
							{
								if (fVar13 < 625f && !GlobalFunc_5172(&Local_431, 1))
								{
									GlobalFunc_173(&Local_1903, 5, Local_1876[iVar0 /*21*/], "fr2_enemy1", 0, 1);
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_onphn", 7, 0, 0, 0))
										{
											iLocal_133[80] = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_onphn2", 7, 0, 0, 0))
									{
										iLocal_133[80] = 1;
									}
								}
							}
							break;
					}
					if (Local_1876[iVar0 /*21*/].f_7 != 0 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1876[iVar0 /*21*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						GlobalFunc_661(Local_1876[iVar0 /*21*/], &(Local_1876[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
						MemCopy(&uVar14, {GlobalFunc_560()}, 4);
						if (MISC::ARE_STRINGS_EQUAL(&uVar14, "Lm2_onphn") || MISC::ARE_STRINGS_EQUAL(&uVar14, "Lm2_onphn2"))
						{
							GlobalFunc_4956();
						}
					}
				}
				else
				{
					func_435(Local_1876[iVar0 /*21*/], Var2);
					func_432(&(Local_1876[iVar0 /*21*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (bLocal_103)
	{
		if (!Local_660[0 /*21*/].f_3)
		{
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing")) && iLocal_376 < 5)
			{
				if (iVar5 == 4)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						Local_660[0 /*21*/] = func_443(iLocal_370, -554.3489f, 5358.439f, 69.6098f, 339.524f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -579.1994f, 5344.535f, 69.2308f, 322.3706f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -576.9061f, 5350.81f, 69.2145f, 349.5044f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -585.943f, 5345f, 69.2672f, 280.4455f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (iVar5 == 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						Local_660[0 /*21*/] = func_443(iLocal_370, -572.7003f, 5346.631f, 69.2309f, 139.4092f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -571.7344f, 5348.919f, 69.2319f, 154.9614f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -571.5287f, 5351.341f, 69.2284f, 154.9614f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -570.4391f, 5353.686f, 69.2298f, 154.9614f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (iVar5 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						if (SYSTEM::VDIST2(Var2, -574.6f, 5249.3f, 70.9f) < SYSTEM::VDIST2(Var2, -551.1f, 5245.5f, 73.1f))
						{
							Local_660[0 /*21*/] = func_443(iLocal_370, -581.5417f, 5264.88f, 69.4481f, 144.5352f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						}
						else
						{
							Local_660[0 /*21*/] = func_443(iLocal_370, -561.1369f, 5254.225f, 69.509f, 139.8273f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -556.1404f, 5300.717f, 80.6723f, 155.9017f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -543.4486f, 5247.445f, 73.7604f, 138.4167f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -587.5444f, 5271.093f, 69.4683f, 131.0496f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (iVar5 == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						Local_660[0 /*21*/] = func_443(iLocal_370, -544.0679f, 5269.893f, 73.1741f, 74.9389f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -563.5525f, 5288.259f, 74.9328f, 152.3262f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_660[1 /*21*/], -563.5525f, 5288.259f, 74.9328f, 1000, 0, 0f, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_660[1 /*21*/], 0, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -593.4202f, 5320.579f, 69.2144f, 153.0497f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -592.1321f, 5334.994f, 69.2534f, 169.728f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (iVar5 == 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						if (SYSTEM::VDIST2(Var2, -574.6f, 5249.3f, 70.9f) < SYSTEM::VDIST2(Var2, -551.1f, 5245.5f, 73.1f))
						{
							Local_660[0 /*21*/] = func_443(iLocal_370, -581.5417f, 5264.88f, 69.4481f, 144.5352f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						}
						else
						{
							Local_660[0 /*21*/] = func_443(iLocal_370, -561.1369f, 5254.225f, 69.509f, 139.8273f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -544.4281f, 5274.333f, 73.1741f, 167.7283f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -543.4486f, 5247.445f, 73.7604f, 138.4167f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -587.5444f, 5271.093f, 69.4683f, 131.0496f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (iVar5 == 6)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
					{
						Local_660[0 /*21*/] = func_443(iLocal_370, -503.1779f, 5326.708f, 79.2676f, 184.6035f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
					{
						Local_660[1 /*21*/] = func_443(iLocal_370, -498.2337f, 5277.747f, 79.61f, 150.6502f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
					{
						Local_660[2 /*21*/] = func_443(iLocal_370, -505.1916f, 5286.652f, 79.5654f, 141.7527f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
					{
						Local_660[3 /*21*/] = func_443(iLocal_370, -501.1952f, 5292.961f, 79.603f, 169.5985f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[0 /*21*/]))
				{
					Local_660[0 /*21*/] = func_443(iLocal_370, -484.6786f, 5324.604f, 79.6103f, 337.5868f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[1 /*21*/]))
				{
					Local_660[1 /*21*/] = func_443(iLocal_370, -480.7613f, 5337.829f, 81.695f, 329.087f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[2 /*21*/]))
				{
					Local_660[2 /*21*/] = func_443(iLocal_370, -471.4462f, 5315.302f, 82.4486f, 350.6388f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
				{
					Local_660[3 /*21*/] = func_443(iLocal_370, -476.9317f, 5324.896f, 79.61f, 333.9693f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_660[3 /*21*/]))
				{
					func_440(&Local_660, "Alert_");
					iLocal_385 = iVar5;
					if (!PED::IS_PED_INJURED(uLocal_387[1]))
					{
						Var18 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1) };
					}
					else if (!PED::IS_PED_INJURED(uLocal_387[2]))
					{
						Var18 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1) };
					}
					iVar0 = 0;
					while (iVar0 < Local_512)
					{
						if (!PED::IS_PED_INJURED(Local_512[iVar0 /*21*/]))
						{
							fVar21 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), Var2);
							fVar22 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar0 /*21*/], 1), Var18);
							if ((fVar21 > 5000f && fVar22 > 5000f) && (ENTITY::IS_ENTITY_OCCLUDED(Local_512[iVar0 /*21*/]) || fVar21 > 10000f))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_512[iVar0 /*21*/], 0);
							}
						}
						iVar0++;
					}
					if (iVar5 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
						{
							if (!PED::IS_PED_INJURED(Local_660[0 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_660[0 /*21*/], 0);
							}
							if (!PED::IS_PED_INJURED(Local_660[2 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_660[2 /*21*/], 0);
							}
							if (!PED::IS_PED_INJURED(Local_660[3 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_660[3 /*21*/], 0);
							}
						}
					}
					if (iVar5 == 5)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_660[0 /*21*/], 0);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_660)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_660[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_660[iVar0 /*21*/]))
					{
						switch (Local_660[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar5 == 4)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -562.2291f, 5374.916f, 69.1818f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -559.8881f, 5356.96f, 69.2145f };
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -572.6667f, 5362.72f, 69.2182f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -577.9835f, 5344.342f, 69.2178f };
									}
								}
								else if (iVar5 == 3)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -594.3f, 5314.7f, 69.2309f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -604.9f, 5333.7f, 69.2319f };
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -605.7f, 5340.1f, 69.5284f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -587.1f, 5369.486f, 69.7298f };
									}
								}
								else if (iVar5 == 0)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -567.8237f, 5270.855f, 69.2604f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -556.1403f, 5283.888f, 76.1836f };
										PED::SET_PED_STRAFE_CLIPSET(Local_660[iVar0 /*21*/], "move_ped_strafing");
										TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_660[iVar0 /*21*/], 0);
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -571.0912f, 5276.412f, 69.2604f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -580.3883f, 5263.822f, 69.4455f };
									}
								}
								else if (iVar5 == 1)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -571.947f, 5273.365f, 69.2604f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -572.3436f, 5296.354f, 73.8037f };
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 0, 0);
										Local_660[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -594.5383f, 5285.592f, 69.2216f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -586.1855f, 5316.148f, 69.2147f };
									}
								}
								else if (iVar5 == 2)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -564.5952f, 5272.389f, 69.2142f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -556.1403f, 5283.888f, 76.1836f };
										PED::SET_PED_STRAFE_CLIPSET(Local_660[iVar0 /*21*/], "move_ped_strafing");
										TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_660[iVar0 /*21*/], 0);
										Local_660[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -571.0912f, 5276.412f, 69.2604f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -580.3883f, 5263.822f, 69.4455f };
									}
								}
								else if (iVar5 == 6)
								{
									if (iVar0 == 0)
									{
										Local_660[iVar0 /*21*/].f_10 = { -498.4009f, 5303.551f, 79.5833f };
									}
									else if (iVar0 == 1)
									{
										Local_660[iVar0 /*21*/].f_10 = { -507.3313f, 5259.493f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_660[iVar0 /*21*/].f_10 = { -515.3116f, 5265.815f, 79.4651f };
									}
									else if (iVar0 == 3)
									{
										Local_660[iVar0 /*21*/].f_10 = { -504.5242f, 5282.318f, 79.61f };
									}
								}
								else if (iVar0 == 0)
								{
									Local_660[iVar0 /*21*/].f_10 = { -464.8362f, 5331.233f, 82.4351f };
									Local_660[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 1)
								{
									Local_660[iVar0 /*21*/].f_10 = { -474.5163f, 5340.795f, 81.7043f };
									Local_660[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 2)
								{
									Local_660[iVar0 /*21*/].f_10 = { -462.8243f, 5337.748f, 82.4694f };
									Local_660[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_660[iVar0 /*21*/].f_10 = { -472.7236f, 5312.435f, 85.6664f };
									PED::SET_PED_STRAFE_CLIPSET(Local_660[iVar0 /*21*/], "move_ped_strafing");
									Local_660[iVar0 /*21*/].f_5 = 1;
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_660[iVar0 /*21*/], Local_660[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_660[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_660[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_660[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_660[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_660[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_660[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_660[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_660[iVar0 /*21*/], 3);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_660[iVar0 /*21*/], joaat("weapon_pistol"), 1);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_660[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_660[iVar0 /*21*/].f_8 = 0;
								Local_660[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								if (iLocal_385 == 5 && iVar0 == 3)
								{
									if (iLocal_378 != 0)
									{
										if (Var2.f_2 > 83f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_660[iVar0 /*21*/], 1), Local_660[iVar0 /*21*/].f_10) < 4f)
										{
											Local_660[iVar0 /*21*/].f_10 = { -466.5307f, 5329.649f, 82.4978f };
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_660[iVar0 /*21*/], Local_660[iVar0 /*21*/].f_10, 2f, 0, 0);
											Local_660[iVar0 /*21*/].f_7++;
										}
									}
								}
								break;
						}
						if (Local_660[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_660[iVar0 /*21*/], &(Local_660[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if ((iVar0 == 0 && iLocal_385 != 5) || (iVar0 == 1 && iLocal_385 == 5))
							{
								if (!iLocal_133[64])
								{
									if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
									{
										bVar23 = false;
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
										{
											if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0) || (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1898.x, -1) && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_1898.x, 1)) < 625f))
											{
												bVar23 = true;
											}
										}
										if (bVar23)
										{
											GlobalFunc_173(&Local_1903, 4, Local_660[iVar0 /*21*/], "fr2_enemy2", 0, 1);
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_dozer", 7, 0, 0, 0))
											{
												iLocal_133[64] = 1;
											}
										}
										else if (iLocal_378 == 1)
										{
											GlobalFunc_173(&Local_1903, 5, Local_660[iVar0 /*21*/], "fr2_enemy1", 0, 1);
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "Lm2_frank", 7, 0, 0, 0))
											{
												iLocal_133[64] = 1;
											}
										}
									}
								}
							}
							if (!Local_660[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									PED::SET_PED_ACCURACY(Local_660[iVar0 /*21*/], 1);
									Local_660[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								PED::SET_PED_ACCURACY(Local_660[iVar0 /*21*/], 5);
								Local_660[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_660[iVar0 /*21*/].f_4)
							{
								if (Local_660[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_660[iVar0 /*21*/], 1), Local_660[iVar0 /*21*/].f_10) < 4f)
									{
										Local_660[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_660[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_378 != 0)
									{
										if ((!Local_660[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_660[iVar0 /*21*/], 1)) < 900f) || (Local_660[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_660[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_660[iVar0 /*21*/], 13, 3f);
											Local_660[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_660[iVar0 /*21*/], 1), Var2) > 900f || iLocal_378 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 51, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_660[iVar0 /*21*/], 50, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_660[iVar0 /*21*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_660[iVar0 /*21*/], Local_660[iVar0 /*21*/].f_10, 3f, 1, 0);
								Local_660[iVar0 /*21*/].f_4 = 0;
							}
						}
					}
					else
					{
						func_435(Local_660[iVar0 /*21*/], Var2);
						func_432(&(Local_660[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_745[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_370))
				{
					if (!PED::IS_PED_INJURED(Local_498))
					{
						Local_745[0 /*21*/] = func_443(iLocal_370, -521.6014f, 5306.691f, 79.2676f, 39.3728f, iLocal_1901, 200, 0, joaat("weapon_pistol"), 26);
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_745[0 /*21*/], 0);
						func_440(&Local_745, "Guard_");
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_745)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_745[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_745[iVar0 /*21*/]))
					{
						switch (Local_745[iVar0 /*21*/].f_7)
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_498))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_745[iVar0 /*21*/], Local_498, -1, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_745[iVar0 /*21*/], 1);
									Local_745[iVar0 /*21*/].f_7++;
								}
								break;
							
							case 1:
								if (!HUD::DOES_BLIP_EXIST(Local_745[iVar0 /*21*/].f_1))
								{
									if (HUD::DOES_BLIP_EXIST(Local_498.f_1))
									{
										Local_745[iVar0 /*21*/].f_1 = GlobalFunc_6783(Local_745[iVar0 /*21*/], 1, 0);
									}
								}
								if ((((!PED::IS_PED_INJURED(func_428(1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_745[iVar0 /*21*/], func_428(1), 1)) || (!PED::IS_PED_INJURED(func_428(2)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_745[iVar0 /*21*/], func_428(2), 1))) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_745[iVar0 /*21*/], 1), Var2) < 324f) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_745[iVar0 /*21*/], 1), 8f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_745[iVar0 /*21*/])))
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_745[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(Local_745[iVar0 /*21*/], 1), 5f, 0, 0);
									func_439(&(Local_745[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_745[iVar0 /*21*/], iLocal_1901);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_745[iVar0 /*21*/], 1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_745[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_745[iVar0 /*21*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_745[iVar0 /*21*/], 35, 1);
									PED::SET_COMBAT_FLOAT(Local_745[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_745[iVar0 /*21*/], 2, 300f);
									PED::SET_PED_ALERTNESS(Local_745[iVar0 /*21*/], 3);
									if (!HUD::DOES_BLIP_EXIST(Local_745[iVar0 /*21*/].f_1))
									{
										Local_745[iVar0 /*21*/].f_1 = GlobalFunc_6783(Local_745[iVar0 /*21*/], 1, 0);
									}
									Local_745[iVar0 /*21*/].f_7++;
								}
								break;
						}
					}
					else
					{
						func_435(Local_745[iVar0 /*21*/], Var2);
						func_432(&(Local_745[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1215[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					bVar24 = false;
					if (iLocal_108)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
						{
							if ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0)) || (!PED::IS_PED_INJURED(uLocal_387[1]) && PED::IS_PED_IN_VEHICLE(uLocal_387[1], Local_1898.x, 0)))
							{
								if (iLocal_384 != 1)
								{
									bVar24 = true;
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -597.8615f, 5345.111f, 54.71984f, -666.8249f, 5242.858f, 102.6065f, 112.25f, 0, 1, 0))
						{
							bVar24 = true;
						}
						if (bVar24)
						{
							iVar0 = 0;
							while (iVar0 < Local_1215)
							{
								Local_1215[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1215[0 /*21*/]))
						{
							Local_1215[0 /*21*/] = func_443(iLocal_370, -565.0798f, 5326.899f, 69.24f, 71.9622f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1215[1 /*21*/]))
						{
							Local_1215[1 /*21*/] = func_443(iLocal_370, -592.5015f, 5334.403f, 69.262f, 252.6935f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1215[2 /*21*/]))
						{
							Local_1215[2 /*21*/] = func_443(iLocal_370, -594.6821f, 5335.302f, 69.3288f, 350.3948f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							func_440(&Local_1215, "Bull1_");
							if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
							{
								if (!PED::IS_PED_INJURED(Local_1215[1 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1215[1 /*21*/], 0);
								}
								if (!PED::IS_PED_INJURED(Local_1215[2 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1215[2 /*21*/], 0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1215)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1215[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1215[iVar0 /*21*/]))
					{
						switch (Local_1215[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1215[iVar0 /*21*/].f_10 = { -571.566f, 5329.713f, 69.2144f };
								}
								else if (iVar0 == 1)
								{
									Local_1215[iVar0 /*21*/].f_10 = { -578.4724f, 5338.543f, 69.2144f };
								}
								else if (iVar0 == 2)
								{
									Local_1215[iVar0 /*21*/].f_10 = { -566.1284f, 5339.827f, 69.2144f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1215[iVar0 /*21*/], Local_1215[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1215[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1215[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1215[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1215[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1215[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1215[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1215[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1215[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1215[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1215[iVar0 /*21*/].f_8 = 0;
								Local_1215[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1215[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1215[iVar0 /*21*/], &(Local_1215[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1215[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									PED::SET_PED_ACCURACY(Local_1215[iVar0 /*21*/], 1);
									Local_1215[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								PED::SET_PED_ACCURACY(Local_1215[iVar0 /*21*/], 5);
								Local_1215[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_1215[iVar0 /*21*/].f_4)
							{
								if (Local_1215[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1215[iVar0 /*21*/], 1), Local_1215[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1215[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1215[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_384 == 0 || iLocal_384 == 1)
									{
										if (!Local_1215[iVar0 /*21*/].f_5 || (Local_1215[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1215[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1215[iVar0 /*21*/], 13, 3f);
											Local_1215[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_384 != 0 && iLocal_384 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1215[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1215[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1215[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1215[iVar0 /*21*/], Local_1215[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1215[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1215[iVar0 /*21*/], Var2);
						func_432(&(Local_1215[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1279[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					iVar25 = 0;
					bVar26 = false;
					if (func_431(&Local_1215) <= 1 && (iLocal_384 == 1 || iLocal_384 == 0))
					{
						iVar25 = 1;
					}
					if (iLocal_109 || iVar25)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0) || VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1898.x, -1))
							{
								if (func_590(func_428(2), func_428(1), 0, -503.4595f, 5236.241f, 102.5465f, -618.6067f, 5292.704f, 55.00938f, 40.5f))
								{
									bVar26 = true;
								}
							}
							if ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0)) || (!PED::IS_PED_INJURED(uLocal_387[1]) && PED::IS_PED_IN_VEHICLE(uLocal_387[1], Local_1898.x, 0)))
							{
								if (iLocal_384 != 1)
								{
									bVar26 = true;
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -601.5615f, 5333.111f, 54.71984f, -666.8249f, 5242.858f, 102.6065f, 112.25f, 0, 1, 0))
						{
							bVar26 = true;
						}
						if (bVar26)
						{
							iVar0 = 0;
							while (iVar0 < Local_1279)
							{
								Local_1279[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1279[0 /*21*/]))
						{
							Local_1279[0 /*21*/] = func_443(iLocal_370, -583.9528f, 5284.016f, 69.2604f, 345.9741f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1279[1 /*21*/]))
						{
							Local_1279[1 /*21*/] = func_443(iLocal_370, -582.048f, 5282.944f, 69.6424f, 71.8583f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_1279[2 /*21*/]))
						{
							Local_1279[2 /*21*/] = func_443(iLocal_370, -595.5361f, 5315.026f, 69.2144f, 309.6455f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							func_440(&Local_1279, "Bull2_");
							if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
							{
								if (!PED::IS_PED_INJURED(Local_1279[1 /*21*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1279[1 /*21*/], 0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1279)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1279[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1279[iVar0 /*21*/]))
					{
						switch (Local_1279[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1279[iVar0 /*21*/].f_10 = { -584.1713f, 5311.372f, 69.2144f };
								}
								else if (iVar0 == 1)
								{
									Local_1279[iVar0 /*21*/].f_10 = { -573.7343f, 5315.25f, 69.1795f };
								}
								else if (iVar0 == 2)
								{
									Local_1279[iVar0 /*21*/].f_10 = { -583.9662f, 5286.522f, 69.2604f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1279[iVar0 /*21*/], Local_1279[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1279[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1279[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1279[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1279[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1279[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1279[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1279[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1279[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1279[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1279[iVar0 /*21*/].f_8 = 0;
								Local_1279[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1279[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1279[iVar0 /*21*/], &(Local_1279[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1279[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									PED::SET_PED_ACCURACY(Local_1279[iVar0 /*21*/], 1);
									Local_1279[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								PED::SET_PED_ACCURACY(Local_1279[iVar0 /*21*/], 5);
								Local_1279[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_1279[iVar0 /*21*/].f_4)
							{
								if (Local_1279[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1279[iVar0 /*21*/], 1), Local_1279[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1279[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1279[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_384 == 0 || iLocal_384 == 1)
									{
										if (!Local_1279[iVar0 /*21*/].f_5 || (Local_1279[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1279[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1279[iVar0 /*21*/], 13, 3f);
											Local_1279[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_384 != 0 && iLocal_384 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1279[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1279[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1279[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1279[iVar0 /*21*/], Local_1279[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1279[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1279[iVar0 /*21*/], Var2);
						func_432(&(Local_1279[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1343[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_370))
				{
					if (bLocal_117 || func_431(&Local_1279) == 0)
					{
						if (iLocal_384 == 1 || iLocal_384 == 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1343[0 /*21*/]))
							{
								Local_1343[0 /*21*/] = func_443(iLocal_370, -562.3906f, 5254.988f, 69.4939f, 64.2948f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1343[1 /*21*/]))
							{
								Local_1343[1 /*21*/] = func_443(iLocal_370, -568.1168f, 5236.523f, 69.4282f, 152.231f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1343[2 /*21*/]))
							{
								Local_1343[2 /*21*/] = func_443(iLocal_370, -558.9417f, 5266.699f, 71.3148f, 54.0498f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								func_440(&Local_1343, "Bull3_");
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < Local_1343)
							{
								Local_1343[iVar0 /*21*/].f_3 = 1;
								iVar0++;
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
						{
							if (!PED::IS_PED_INJURED(Local_1343[2 /*21*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1343[2 /*21*/], 0);
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1343)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1343[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1343[iVar0 /*21*/]))
					{
						switch (Local_1343[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1343[iVar0 /*21*/].f_10 = { -571.5106f, 5274.36f, 69.2604f };
								}
								else if (iVar0 == 1)
								{
									Local_1343[iVar0 /*21*/].f_10 = { -568.8f, 5265.7f, 69.8f };
								}
								else if (iVar0 == 2)
								{
									Local_1343[iVar0 /*21*/].f_10 = { -580.0616f, 5262.909f, 69.4442f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1343[iVar0 /*21*/], Local_1343[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1343[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1343[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1343[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1343[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1343[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1343[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1343[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1343[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1343[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1343[iVar0 /*21*/].f_8 = 0;
								Local_1343[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1343[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1343[iVar0 /*21*/], &(Local_1343[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1343[iVar0 /*21*/].f_6)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									PED::SET_PED_ACCURACY(Local_1343[iVar0 /*21*/], 1);
									Local_1343[iVar0 /*21*/].f_6 = 1;
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								PED::SET_PED_ACCURACY(Local_1343[iVar0 /*21*/], 5);
								Local_1343[iVar0 /*21*/].f_6 = 0;
							}
							if (!Local_1343[iVar0 /*21*/].f_4)
							{
								if (Local_1343[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1343[iVar0 /*21*/], 1), Local_1343[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1343[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1343[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_384 == 0 || iLocal_384 == 1)
									{
										if (!Local_1343[iVar0 /*21*/].f_5 || (Local_1343[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1343[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1343[iVar0 /*21*/], 13, 3f);
											Local_1343[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_384 != 0 && iLocal_384 != 1)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1343[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1343[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1343[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1343[iVar0 /*21*/], Local_1343[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1343[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1343[iVar0 /*21*/], Var2);
						func_432(&(Local_1343[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1407[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_116)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1407[0 /*21*/]))
						{
							bVar27 = false;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									bVar27 = true;
								}
								else if ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0)) || (!PED::IS_PED_INJURED(uLocal_387[1]) && PED::IS_PED_IN_VEHICLE(uLocal_387[1], Local_1898.x, 0)))
								{
									if ((iLocal_384 == 1 || iLocal_384 == 2) || iLocal_384 == 4)
									{
										if (func_431(&Local_959) > 0)
										{
											bVar27 = true;
										}
									}
								}
							}
							if (bVar27)
							{
								Local_1407[0 /*21*/] = func_443(iLocal_370, -544.1907f, 5296.94f, 87.4445f, 157.0515f, iLocal_1901, 200, 0, joaat("weapon_rpg"), 26);
								PED::SET_PED_STRAFE_CLIPSET(Local_1407[0 /*21*/], "move_ped_strafing");
								func_440(&Local_1407, "Rocket_");
							}
							else
							{
								func_586(&Local_1407);
							}
						}
					}
				}
			}
		}
		else
		{
			fVar32 = 0f;
			fVar33 = 0f;
			iVar0 = 0;
			while (iVar0 < Local_1407)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1407[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1407[iVar0 /*21*/]))
					{
						switch (Local_1407[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_1407[iVar0 /*21*/].f_10 = { -546.0917f, 5286.876f, 87.3861f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1407[iVar0 /*21*/], Local_1407[iVar0 /*21*/].f_10, 1f, 1, 0);
								func_439(&(Local_1407[iVar0 /*21*/]), 10, 0, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1407[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1407[iVar0 /*21*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1407[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1407[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1407[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1407[iVar0 /*21*/], 5, 1f);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1407[iVar0 /*21*/].f_10, Local_1898.x, 2f, 0, 0.25f, 4f, 0, 512, 0, -957453492, 20000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1898.x, -1, 0);
								}
								else
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1407[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.25f, 4f, 0, 512, 0, -957453492, 20000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_1407[iVar0 /*21*/], uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								GlobalFunc_5122(Local_1407[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								Local_1407[iVar0 /*21*/].f_8 = 0;
								Local_1407[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1407[iVar0 /*21*/], 1), Local_1407[iVar0 /*21*/].f_10) < 4f)
								{
									if (Local_1407[iVar0 /*21*/].f_8 == 0)
									{
										Local_1407[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER() + 1000;
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1407[iVar0 /*21*/].f_8) > 0)
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
										{
											if (iLocal_275 < 4)
											{
												if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_307))
												{
													TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(Local_1898.x, 1), &iVar31);
													TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_307, (iVar31 + (4 - iLocal_275)), &Var28);
													Var28.x = (Var28.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
													Var28.f_1 = (Var28.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
													if (iLocal_275 == 0)
													{
														Var28 = { -570.1f, 5266.5f, 70.9f };
													}
													PED::SET_PED_SHOOTS_AT_COORD(Local_1407[iVar0 /*21*/], Var28, 0);
													iLocal_275++;
													Local_1407[iVar0 /*21*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
												}
											}
											else
											{
												if (iLocal_378 != 0)
												{
													PED::SET_PED_SHOOTS_AT_COORD(Local_1407[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0);
												}
												else if (!PED::IS_PED_INJURED(uLocal_387[1]) && !PED::IS_PED_INJURED(uLocal_387[2]))
												{
													fVar33 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1407[iVar0 /*21*/], 1), ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1));
													fVar32 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1407[iVar0 /*21*/], 1), ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1));
													if (fVar33 < fVar32)
													{
														PED::SET_PED_SHOOTS_AT_COORD(Local_1407[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1), 0);
													}
													else
													{
														PED::SET_PED_SHOOTS_AT_COORD(Local_1407[iVar0 /*21*/], ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1), 0);
													}
												}
												iLocal_275++;
												Local_1407[iVar0 /*21*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000));
											}
										}
										else
										{
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1407[iVar0 /*21*/], 300f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1407[iVar0 /*21*/], 0);
											Local_1407[iVar0 /*21*/].f_7++;
										}
									}
								}
								else if (iLocal_376 >= 5)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1407[iVar0 /*21*/], 300f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1407[iVar0 /*21*/], 0);
									Local_1407[iVar0 /*21*/].f_7++;
								}
								break;
							
							case 2:
								break;
						}
						if (Local_1407[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1407[iVar0 /*21*/], &(Local_1407[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							Var34 = { ENTITY::GET_ENTITY_COORDS(Local_1407[iVar0 /*21*/], 1) };
							if (Var34.f_2 < 84f)
							{
								PED::APPLY_DAMAGE_TO_PED(Local_1407[iVar0 /*21*/], 300, 1);
							}
						}
					}
					else
					{
						if (iVar0 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(1f, 1073741824, 3);
						}
						func_435(Local_1407[iVar0 /*21*/], Var2);
						func_432(&(Local_1407[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1429[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_111)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1429[0 /*21*/]))
						{
							if (Global_86816)
							{
								if (iLocal_384 != 3)
								{
									Local_1429[0 /*21*/] = func_443(iLocal_370, -503.8309f, 5323.56f, 88.016f, 158.6523f, iLocal_1901, 200, 0, joaat("weapon_sniperrifle"), 26);
								}
								else
								{
									Local_1429[0 /*21*/] = func_443(iLocal_370, -510.6272f, 5308.164f, 87.9901f, 158.8536f, iLocal_1901, 200, 0, joaat("weapon_sniperrifle"), 26);
								}
								PED::SET_PED_STRAFE_CLIPSET(Local_1429[0 /*21*/], "move_ped_strafing");
								func_440(&Local_1429, "Sniper_");
							}
							else
							{
								Local_1429[0 /*21*/].f_3 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1429)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1429[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1429[iVar0 /*21*/]))
					{
						switch (Local_1429[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_1429[iVar0 /*21*/].f_10 = { -512.1504f, 5308.831f, 88.0628f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1429[iVar0 /*21*/], Local_1429[iVar0 /*21*/].f_10, 1f, 1, 0);
								func_439(&(Local_1429[iVar0 /*21*/]), 40, 0, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1429[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1429[iVar0 /*21*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1429[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1429[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1429[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1429[iVar0 /*21*/], 5, 1f);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1429[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.25f, 4f, 0, 0, 0, -957453492, 20000);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_1429[iVar0 /*21*/], uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								Local_1429[iVar0 /*21*/].f_1 = GlobalFunc_6797(Local_1429[iVar0 /*21*/], 1, 145);
								iLocal_281 = MISC::GET_GAME_TIMER();
								Local_1429[iVar0 /*21*/].f_8 = 0;
								Local_1429[iVar0 /*21*/].f_7++;
								break;
						}
						Var37 = { ENTITY::GET_ENTITY_COORDS(Local_1429[iVar0 /*21*/], 1) };
						if (Var37.f_2 < 85f)
						{
							PED::APPLY_DAMAGE_TO_PED(Local_1429[iVar0 /*21*/], 300, 1);
						}
					}
					else
					{
						if (iVar0 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(1f, 1073741824, 3);
						}
						func_435(Local_1429[iVar0 /*21*/], Var2);
						func_432(&(Local_1429[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1451[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (Local_660[0 /*21*/].f_3 && (iLocal_385 == 1 || func_431(&Local_660) < 4))
					{
						if ((((iLocal_385 == 2 || iLocal_385 == 1) || iLocal_385 == 0) && (iLocal_384 == 4 || iLocal_384 == 2)) && Global_86816)
						{
							if (iLocal_385 == 1)
							{
								Local_1451[0 /*21*/].f_3 = 1;
								Local_1451[1 /*21*/].f_3 = 1;
								Local_1451[2 /*21*/].f_3 = 1;
								func_440(&Local_1451, "Extra_");
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1451[0 /*21*/]))
							{
								Local_1451[0 /*21*/] = func_443(iLocal_370, -537.4317f, 5292.591f, 88.1882f, 162.6303f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								PED::SET_PED_STRAFE_CLIPSET(Local_1451[0 /*21*/], "move_ped_strafing");
							}
							else
							{
								Local_1451[1 /*21*/].f_3 = 1;
								Local_1451[2 /*21*/].f_3 = 1;
								func_440(&Local_1451, "Extra_");
							}
						}
						else
						{
							Local_1451[0 /*21*/].f_3 = 1;
							Local_1451[1 /*21*/].f_3 = 1;
							Local_1451[2 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1451)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1451[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1451[iVar0 /*21*/]))
					{
						switch (Local_1451[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									if (iLocal_385 == 1)
									{
										Local_1451[iVar0 /*21*/].f_10 = { -569.2231f, 5302.565f, 82.749f };
									}
									else
									{
										Local_1451[iVar0 /*21*/].f_10 = { -539.9885f, 5285.099f, 87.4831f };
									}
								}
								else if (iVar0 == 1)
								{
									Local_1451[iVar0 /*21*/].f_10 = { -586.1855f, 5316.148f, 69.2147f };
								}
								else if (iVar0 == 2)
								{
									Local_1451[iVar0 /*21*/].f_10 = { -566.7495f, 5269.23f, 69.2973f };
								}
								if (iVar0 == 0)
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1451[iVar0 /*21*/], Local_1451[iVar0 /*21*/].f_10, 1f, 1, 0);
									func_439(&(Local_1451[iVar0 /*21*/]), 10, 0, 2, 0, 1);
								}
								else
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1451[iVar0 /*21*/], Local_1451[iVar0 /*21*/].f_10, 2f, 1, 0);
									func_439(&(Local_1451[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1451[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1451[iVar0 /*21*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1451[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1451[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1451[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1451[iVar0 /*21*/], 5, 1f);
								if (iVar0 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1451[iVar0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.25f, 4f, 0, 0, 0, -957453492, 20000);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									TASK::TASK_PERFORM_SEQUENCE(Local_1451[iVar0 /*21*/], uVar1);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								}
								else
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1451[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1451[iVar0 /*21*/], 0);
								}
								Local_1451[iVar0 /*21*/].f_8 = 0;
								Local_1451[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1451[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1451[iVar0 /*21*/], &(Local_1451[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (iVar0 == 0 && iLocal_385 != 1)
							{
								Var40 = { ENTITY::GET_ENTITY_COORDS(Local_1451[iVar0 /*21*/], 1) };
								if (Var40.f_2 < 85f)
								{
									PED::APPLY_DAMAGE_TO_PED(Local_1451[iVar0 /*21*/], 300, 1);
								}
							}
						}
					}
					else
					{
						func_435(Local_1451[iVar0 /*21*/], Var2);
						func_432(&(Local_1451[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1515[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					if (bLocal_112)
					{
						if (!Local_959[0 /*21*/].f_3 && Var2.f_1 > 5315.2f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1515[0 /*21*/]))
							{
								if (iLocal_384 != 4 && iLocal_384 != 2)
								{
									Local_1515[0 /*21*/] = func_443(iLocal_370, -510.4515f, 5304.926f, 79.2676f, 341.0726f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
								}
								else
								{
									Local_1515[0 /*21*/] = func_443(iLocal_370, -502.498f, 5298.049f, 79.5761f, 70.1201f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1515[1 /*21*/]))
							{
								if (SYSTEM::VDIST2(Var2, -462.7f, 5341.5f, 83.4f) < 400f || iLocal_384 != 3)
								{
									Local_1515[1 /*21*/] = func_443(iLocal_370, -485.4689f, 5324.949f, 79.61f, 349.1465f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								}
								else
								{
									Local_1515[1 /*21*/] = func_443(iLocal_370, -504.8583f, 5308.139f, 79.2676f, 320.3648f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1515[2 /*21*/]))
							{
								if (SYSTEM::VDIST2(Var2, -462.7f, 5341.5f, 83.4f) < 400f || iLocal_384 != 3)
								{
									Local_1515[2 /*21*/] = func_443(iLocal_370, -491.6151f, 5327.02f, 79.5436f, 334.4004f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
								}
								else
								{
									Local_1515[2 /*21*/] = func_443(iLocal_370, -505.3082f, 5306.3f, 79.2676f, 325.5638f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1515[3 /*21*/]))
							{
								if (iLocal_384 != 4 && iLocal_384 != 2)
								{
									Local_1515[3 /*21*/] = func_443(iLocal_370, -512.5977f, 5305.67f, 79.2676f, 307.494f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								}
								else
								{
									Local_1515[3 /*21*/] = func_443(iLocal_370, -502.8857f, 5326.429f, 79.2676f, 192.3165f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								}
								func_440(&Local_1515, "Rear1_");
							}
						}
						else
						{
							Local_1515[0 /*21*/].f_3 = 1;
							Local_1515[1 /*21*/].f_3 = 1;
							Local_1515[2 /*21*/].f_3 = 1;
							Local_1515[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1515)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1515[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1515[iVar0 /*21*/]))
					{
						switch (Local_1515[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1515[iVar0 /*21*/].f_10 = { -491.425f, 5314.054f, 79.61f };
								}
								else if (iVar0 == 1)
								{
									Local_1515[iVar0 /*21*/].f_10 = { -487.1756f, 5317.755f, 79.61f };
								}
								else if (iVar0 == 2)
								{
									Local_1515[iVar0 /*21*/].f_10 = { -484.8855f, 5314.169f, 79.61f };
								}
								else if (iVar0 == 3)
								{
									Local_1515[iVar0 /*21*/].f_10 = { -480.3152f, 5303.814f, 79.61f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1515[iVar0 /*21*/], Local_1515[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1515[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1515[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1515[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1515[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1515[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1515[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1515[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1515[iVar0 /*21*/], 3);
								if (WEAPON::HAS_PED_GOT_WEAPON(Local_1515[iVar0 /*21*/], joaat("weapon_smg"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1515[iVar0 /*21*/], joaat("weapon_smg"), 1);
								}
								else if (WEAPON::HAS_PED_GOT_WEAPON(Local_1515[iVar0 /*21*/], joaat("weapon_assaultrifle"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1515[iVar0 /*21*/], joaat("weapon_assaultrifle"), 1);
								}
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1515[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1515[iVar0 /*21*/].f_8 = 0;
								Local_1515[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1515[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1515[iVar0 /*21*/], &(Local_1515[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1515[iVar0 /*21*/].f_4)
							{
								if (Local_1515[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1515[iVar0 /*21*/], 1), Local_1515[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1515[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1515[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_384 == 4 || iLocal_384 == 3)
									{
										if ((!Local_1515[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_1515[iVar0 /*21*/], 1)) < 900f) || (Local_1515[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1515[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1515[iVar0 /*21*/], 13, 3f);
											Local_1515[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_384 != 4 && iLocal_384 != 3)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1515[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1515[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1515[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1515[iVar0 /*21*/], Local_1515[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1515[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1515[iVar0 /*21*/], Var2);
						func_432(&(Local_1515[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_1600[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5 && iLocal_384 == 3)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					if (bLocal_113 || func_431(&Local_1515) <= 1)
					{
						if (!Local_959[0 /*21*/].f_3 && Var2.f_1 > 5315.2f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1600[0 /*21*/]))
							{
								Local_1600[0 /*21*/] = func_443(iLocal_370, -503.334f, 5294.959f, 79.55f, 343.6317f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1600[1 /*21*/]))
							{
								Local_1600[1 /*21*/] = func_443(iLocal_370, -511.1639f, 5305.366f, 79.2676f, 345.3339f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1600[2 /*21*/]))
							{
								Local_1600[2 /*21*/] = func_443(iLocal_370, -503.0632f, 5293.556f, 79.5585f, 352.8675f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_1600[3 /*21*/]))
							{
								Local_1600[3 /*21*/] = func_443(iLocal_370, -519.3588f, 5304.95f, 79.2676f, 261.0985f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
								func_440(&Local_1600, "Rear2_");
							}
						}
						else
						{
							Local_1600[0 /*21*/].f_3 = 1;
							Local_1600[1 /*21*/].f_3 = 1;
							Local_1600[2 /*21*/].f_3 = 1;
							Local_1600[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1600)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1600[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1600[iVar0 /*21*/]))
					{
						switch (Local_1600[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_1600[iVar0 /*21*/].f_10 = { -499.1525f, 5298.522f, 79.6052f };
								}
								else if (iVar0 == 1)
								{
									Local_1600[iVar0 /*21*/].f_10 = { -495.8702f, 5309.066f, 79.5914f };
								}
								else if (iVar0 == 2)
								{
									Local_1600[iVar0 /*21*/].f_10 = { -501.6623f, 5302.262f, 79.5513f };
								}
								else
								{
									Local_1600[iVar0 /*21*/].f_10 = { -488.4678f, 5306.713f, 79.6103f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1600[iVar0 /*21*/], Local_1600[iVar0 /*21*/].f_10, 2f, 1, 0);
								func_439(&(Local_1600[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1600[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1600[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1600[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_1600[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_1600[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_1600[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_1600[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_1600[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_1600[iVar0 /*21*/].f_8 = 0;
								Local_1600[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_1600[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_1600[iVar0 /*21*/], &(Local_1600[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_1600[iVar0 /*21*/].f_4)
							{
								if (Local_1600[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1600[iVar0 /*21*/], 1), Local_1600[iVar0 /*21*/].f_10) < 4f)
									{
										Local_1600[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1600[iVar0 /*21*/].f_8) > 10000)
								{
									if (iLocal_384 == 4 || iLocal_384 == 3)
									{
										if ((!Local_1600[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_1600[iVar0 /*21*/], 1)) < 900f) || (Local_1600[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1600[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1600[iVar0 /*21*/], 13, 3f);
											Local_1600[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
							}
							else if (iLocal_384 != 4 && iLocal_384 != 3)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1600[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1600[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1600[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1600[iVar0 /*21*/], Local_1600[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_1600[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_1600[iVar0 /*21*/], Var2);
						func_432(&(Local_1600[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_767[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_105)
					{
						if (iLocal_378 == 0 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -485.0441f, 5304.46f, 66.85991f, -562.7081f, 5083.085f, 129.1981f, 91.25f, 0, 1, 0))
						{
							func_586(&Local_767);
						}
						else
						{
							Local_767[0 /*21*/] = func_443(iLocal_370, -535.3907f, 5288.124f, 83.9712f, 100.9884f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							PED::SET_PED_STRAFE_CLIPSET(Local_767[0 /*21*/], "move_ped_strafing");
							func_440(&Local_767, "Belt_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_767)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_767[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_767[iVar0 /*21*/]))
					{
						switch (Local_767[iVar0 /*21*/].f_7)
						{
							case 0:
								Local_767[0 /*21*/].f_10 = { -540.4274f, 5272.74f, 80.2341f };
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_767[0 /*21*/].f_10, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 4f, 0, 0, 0, -957453492, 20000);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_767[iVar0 /*21*/], uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_767[iVar0 /*21*/], Local_767[0 /*21*/].f_10, 2f, 0, 0);
								func_439(&(Local_767[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_767[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_767[iVar0 /*21*/], 1, 0);
								PED::SET_COMBAT_FLOAT(Local_767[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_767[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_767[iVar0 /*21*/], 5, 1f);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_767[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_767[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_767[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_767[iVar0 /*21*/], &(Local_767[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							Var43 = { ENTITY::GET_ENTITY_COORDS(Local_767[iVar0 /*21*/], 1) };
							if (Var43.f_2 < 78.5f)
							{
								PED::APPLY_DAMAGE_TO_PED(Local_767[iVar0 /*21*/], 200, 1);
							}
						}
					}
					else
					{
						func_435(Local_767[iVar0 /*21*/], Var2);
						func_432(&(Local_767[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_789[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					if (bLocal_110 || ((iLocal_384 != 3 && PED::IS_PED_INJURED(Local_1407[0 /*21*/])) && func_431(&Local_767) == 0))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_789[0 /*21*/]))
						{
							if (iLocal_384 != 2)
							{
								Local_789[0 /*21*/] = func_443(iLocal_370, -502.0386f, 5252.973f, 79.6104f, 74.4253f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else
							{
								Local_789[0 /*21*/] = func_443(iLocal_370, -503.4162f, 5258.272f, 79.61f, 79.7836f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_789[1 /*21*/]))
						{
							if (iLocal_384 != 2)
							{
								Local_789[1 /*21*/] = func_443(iLocal_370, -527.3934f, 5272.428f, 73.3164f, 126.3766f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							}
							else
							{
								Local_789[1 /*21*/] = func_443(iLocal_370, -528.6542f, 5274.064f, 73.1741f, 133.3165f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_789[2 /*21*/]))
						{
							if (iLocal_384 != 2)
							{
								Local_789[2 /*21*/] = func_443(iLocal_370, -531.4066f, 5263.502f, 73.3278f, 175.8792f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else
							{
								Local_789[2 /*21*/] = func_443(iLocal_370, -531.7002f, 5265.315f, 73.2375f, 155.8115f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_789[3 /*21*/]))
						{
							if (iLocal_384 != 2)
							{
								Local_789[3 /*21*/] = func_443(iLocal_370, -502.2048f, 5252.96f, 79.6104f, 83.7086f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else
							{
								Local_789[3 /*21*/] = func_443(iLocal_370, -502.4242f, 5256.518f, 79.61f, 84.5402f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							func_440(&Local_789, "BeforeT_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_789)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_789[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_789[iVar0 /*21*/]))
					{
						switch (Local_789[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_789[iVar0 /*21*/].f_10 = { -520.9052f, 5260.525f, 78.85f };
								}
								else if (iVar0 == 1)
								{
									Local_789[iVar0 /*21*/].f_10 = { -542.3945f, 5253.331f, 73.6131f };
								}
								else if (iVar0 == 2)
								{
									Local_789[iVar0 /*21*/].f_10 = { -545.6429f, 5251f, 73.1374f };
								}
								else if (iVar0 == 3)
								{
									Local_789[iVar0 /*21*/].f_10 = { -523.8617f, 5242.07f, 78.6782f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_789[iVar0 /*21*/], Local_789[iVar0 /*21*/].f_10, 3f, 1, 0);
								func_439(&(Local_789[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_789[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_789[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_789[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_789[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_789[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_789[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_789[iVar0 /*21*/], 3);
								if (iVar0 == 2)
								{
									GlobalFunc_5122(Local_789[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								if (iVar0 == 0 || iVar0 == 3)
								{
									Local_789[iVar0 /*21*/].f_5 = 1;
								}
								Local_789[iVar0 /*21*/].f_7++;
								break;
						}
						if (Local_789[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_789[iVar0 /*21*/], &(Local_789[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (!Local_789[iVar0 /*21*/].f_4)
							{
								if (Local_789[iVar0 /*21*/].f_8 == 0)
								{
									if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_789[iVar0 /*21*/], 1), Local_789[iVar0 /*21*/].f_10) < 4f)
									{
										Local_789[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_789[iVar0 /*21*/].f_8) > 15000)
								{
									if ((!Local_789[iVar0 /*21*/].f_5 && iLocal_384 == 4) || (Local_789[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_789[iVar0 /*21*/], 1), Var2) < 25f))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 50, 1);
										Local_789[iVar0 /*21*/].f_4 = 1;
									}
								}
							}
							else if (iLocal_384 != 4)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_789[iVar0 /*21*/], 1), Var2) > 900f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 51, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_789[iVar0 /*21*/], 50, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_789[iVar0 /*21*/], 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_789[iVar0 /*21*/], Local_789[iVar0 /*21*/].f_10, 3f, 1, 0);
									Local_789[iVar0 /*21*/].f_4 = 0;
								}
							}
						}
					}
					else
					{
						func_435(Local_789[iVar0 /*21*/], Var2);
						func_432(&(Local_789[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_874[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")))
				{
					if (bLocal_106)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_874[0 /*21*/]))
						{
							Local_874[0 /*21*/] = func_443(iLocal_370, -500.7499f, 5274.358f, 79.61f, 125.7038f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_874[1 /*21*/]))
						{
							Local_874[1 /*21*/] = func_443(iLocal_370, -503.8717f, 5286.321f, 79.5971f, 174.9208f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_874[2 /*21*/]) && !Local_874[2 /*21*/].f_3)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -527.0826f, 5251.387f, 85.50326f, -554.0005f, 5261.277f, 68.92529f, 20f, 0, 1, 0))
							{
								Local_874[2 /*21*/] = func_443(iLocal_370, -492.2799f, 5259.269f, 85.8358f, 96.183f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else
							{
								Local_874[2 /*21*/].f_3 = 1;
							}
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_874[3 /*21*/]))
						{
							Local_874[3 /*21*/] = func_443(iLocal_370, -503.4756f, 5262.625f, 79.6103f, 357.9579f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							func_440(&Local_874, "Timber1_");
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_874)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_874[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_874[iVar0 /*21*/]))
					{
						switch (Local_874[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 == 0)
								{
									Local_874[iVar0 /*21*/].f_10 = { -515.1771f, 5265.763f, 79.47f };
								}
								else if (iVar0 == 1)
								{
									Local_874[iVar0 /*21*/].f_10 = { -502.3758f, 5270.76f, 79.61f };
								}
								else if (iVar0 == 2)
								{
									Local_874[iVar0 /*21*/].f_10 = { -492.2799f, 5259.269f, 85.8358f };
									Local_874[iVar0 /*21*/].f_5 = 1;
								}
								else if (iVar0 == 3)
								{
									Local_874[iVar0 /*21*/].f_10 = { -504.5726f, 5265.792f, 79.6103f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_874[iVar0 /*21*/], Local_874[iVar0 /*21*/].f_10, 3f, 1, 0);
								func_439(&(Local_874[iVar0 /*21*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_874[iVar0 /*21*/], iLocal_1901);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 1, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_874[iVar0 /*21*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_874[iVar0 /*21*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 35, 1);
								PED::SET_COMBAT_FLOAT(Local_874[iVar0 /*21*/], 13, 3f);
								PED::SET_COMBAT_FLOAT(Local_874[iVar0 /*21*/], 2, 300f);
								PED::SET_COMBAT_FLOAT(Local_874[iVar0 /*21*/], 5, 1f);
								PED::SET_PED_ALERTNESS(Local_874[iVar0 /*21*/], 3);
								if (iVar0 == 0)
								{
									GlobalFunc_5122(Local_874[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
								}
								Local_874[iVar0 /*21*/].f_7++;
								break;
							
							case 1:
								if (Var2.f_2 > 79.5f)
								{
									if (iVar0 == 2)
									{
										Local_874[iVar0 /*21*/].f_10 = { -485.1102f, 5278.609f, 85.865f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_874[iVar0 /*21*/], Local_874[iVar0 /*21*/].f_10, 2f, 1, 0);
										Local_874[iVar0 /*21*/].f_7++;
									}
								}
								break;
						}
						if (Local_874[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_874[iVar0 /*21*/], &(Local_874[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (iVar0 != 2 && Var2.f_2 > 79.5f)
							{
								if (!Local_874[iVar0 /*21*/].f_4)
								{
									if (Local_874[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_874[iVar0 /*21*/], 1), Local_874[iVar0 /*21*/].f_10) < 4f)
										{
											Local_874[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_874[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_874[iVar0 /*21*/].f_5 && iLocal_384 == 4) || (Local_874[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_874[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_874[iVar0 /*21*/], 13, 3f);
											Local_874[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_384 != 4)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_874[iVar0 /*21*/], 1), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 51, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_874[iVar0 /*21*/], 50, 0);
										PED::SET_PED_COMBAT_MOVEMENT(Local_874[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_874[iVar0 /*21*/], Local_874[iVar0 /*21*/].f_10, 3f, 1, 0);
										Local_874[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_435(Local_874[iVar0 /*21*/], Var2);
						func_432(&(Local_874[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
		if (!Local_959[0 /*21*/].f_3)
		{
			if (iLocal_376 < 5)
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_370) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg"))) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (bLocal_107 || (func_431(&Local_874) <= 1 && iLocal_384 != 3))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -495.6787f, 5296.494f, 90.66683f, 21.25f, 14f, 12.5f, 0, 1, 0))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_959[0 /*21*/]))
							{
								Local_959[0 /*21*/] = func_443(iLocal_370, -501.683f, 5293.622f, 79.5882f, 164.6348f, iLocal_1901, 200, 0, joaat("weapon_smg"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_959[1 /*21*/]))
							{
								Local_959[1 /*21*/] = func_443(iLocal_370, -504.035f, 5286.59f, 79.5914f, 175.8207f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_959[2 /*21*/]) && !Local_959[2 /*21*/].f_3)
							{
								if (iLocal_384 != 3)
								{
									Local_959[2 /*21*/] = func_443(iLocal_370, -502.1692f, 5320.155f, 86.6316f, 164.93f, iLocal_1901, 200, 0, joaat("weapon_combatmg"), 26);
									PED::SET_PED_STRAFE_CLIPSET(Local_959[2 /*21*/], "move_ped_strafing");
								}
								else
								{
									Local_959[2 /*21*/].f_3 = 1;
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(Local_959[3 /*21*/]))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -514.7172f, 5247.317f, 77.87701f, -499.807f, 5287.701f, 85.86034f, 21.5f, 0, 1, 0))
								{
									Local_959[3 /*21*/] = func_443(iLocal_370, -481.4254f, 5284.557f, 83.1625f, 146.3917f, iLocal_1901, 200, 0, joaat("weapon_assaultrifle"), 26);
									PED::SET_PED_STRAFE_CLIPSET(Local_959[3 /*21*/], "move_ped_strafing");
								}
								else
								{
									Local_959[3 /*21*/].f_3 = 1;
								}
								func_440(&Local_959, "Timber2_");
							}
						}
						else
						{
							Local_959[0 /*21*/].f_3 = 1;
							Local_959[1 /*21*/].f_3 = 1;
							Local_959[2 /*21*/].f_3 = 1;
							Local_959[3 /*21*/].f_3 = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_959)
			{
				bVar46 = false;
				if (ENTITY::DOES_ENTITY_EXIST(Local_959[iVar0 /*21*/]))
				{
					if (!PED::IS_PED_INJURED(Local_959[iVar0 /*21*/]))
					{
						switch (Local_959[iVar0 /*21*/].f_7)
						{
							case 0:
								if (iVar0 != 2)
								{
									bVar46 = true;
								}
								else if ((func_431(&Local_959) < Local_959 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -538.5012f, 5288.443f, 72.86422f, -462.7944f, 5238.157f, 99.61439f, 9.25f, 0, 1, 0)) || iLocal_384 == 3)
								{
									bVar46 = true;
								}
								if (bVar46)
								{
									if (iVar0 == 0)
									{
										Local_959[iVar0 /*21*/].f_10 = { -501.683f, 5293.622f, 79.5882f };
									}
									else if (iVar0 == 1)
									{
										Local_959[iVar0 /*21*/].f_10 = { -496.6544f, 5286.956f, 79.61f };
									}
									else if (iVar0 == 2)
									{
										Local_959[iVar0 /*21*/].f_10 = { -489.447f, 5304.797f, 86.9991f };
										Local_959[iVar0 /*21*/].f_5 = 1;
									}
									else if (iVar0 == 3)
									{
										Local_959[iVar0 /*21*/].f_10 = { -478.784f, 5296.961f, 85.6715f };
										Local_959[iVar0 /*21*/].f_5 = 1;
									}
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_959[iVar0 /*21*/], Local_959[iVar0 /*21*/].f_10, 3f, 1, 0);
									func_439(&(Local_959[iVar0 /*21*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_959[iVar0 /*21*/], iLocal_1901);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_959[iVar0 /*21*/], 200f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_959[iVar0 /*21*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 35, 1);
									PED::SET_COMBAT_FLOAT(Local_959[iVar0 /*21*/], 13, 3f);
									PED::SET_COMBAT_FLOAT(Local_959[iVar0 /*21*/], 2, 300f);
									PED::SET_COMBAT_FLOAT(Local_959[iVar0 /*21*/], 5, 1f);
									PED::SET_PED_ALERTNESS(Local_959[iVar0 /*21*/], 3);
									if (iVar0 == 0)
									{
										GlobalFunc_5122(Local_959[iVar0 /*21*/], "GENERIC_WAR_CRY", 9);
									}
									Local_959[iVar0 /*21*/].f_7++;
								}
								break;
							
							case 1:
								if (iVar0 == 2)
								{
									Var47 = { ENTITY::GET_ENTITY_COORDS(Local_959[iVar0 /*21*/], 1) };
									if (Var47.f_2 < 82f)
									{
										PED::APPLY_DAMAGE_TO_PED(Local_959[iVar0 /*21*/], 200, 1);
									}
								}
								break;
						}
						if (Local_959[iVar0 /*21*/].f_7 != 0)
						{
							GlobalFunc_661(Local_959[iVar0 /*21*/], &(Local_959[iVar0 /*21*/].f_13), -1, 0, 0, 0, -1082130432, 0);
							if (iVar0 != 2)
							{
								if (!Local_959[iVar0 /*21*/].f_4)
								{
									if (Local_959[iVar0 /*21*/].f_8 == 0)
									{
										if (iLocal_378 != 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_959[iVar0 /*21*/], 1), Local_959[iVar0 /*21*/].f_10) < 4f)
										{
											Local_959[iVar0 /*21*/].f_8 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - Local_959[iVar0 /*21*/].f_8) > 10000)
									{
										if ((!Local_959[iVar0 /*21*/].f_5 && iLocal_384 == 4) || (Local_959[iVar0 /*21*/].f_5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_959[iVar0 /*21*/], 1), Var2) < 25f))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_959[iVar0 /*21*/], 13, 3f);
											Local_959[iVar0 /*21*/].f_4 = 1;
										}
									}
								}
								else if (iLocal_384 != 4)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_959[iVar0 /*21*/], 1), Var2) > 900f)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 51, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_959[iVar0 /*21*/], 50, 0);
										PED::SET_PED_COMBAT_MOVEMENT(Local_959[iVar0 /*21*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_959[iVar0 /*21*/], Local_959[iVar0 /*21*/].f_10, 3f, 1, 0);
										Local_959[iVar0 /*21*/].f_4 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_435(Local_959[iVar0 /*21*/], Var2);
						func_432(&(Local_959[iVar0 /*21*/]), 0);
					}
				}
				iVar0++;
			}
		}
	}
}


void func_586(int iParam0)//Position - 0x686F7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*21*/])->f_3 = 1;
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*21*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*21*/], 0);
		}
		iVar0++;
	}
}




int func_590(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x6878D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param6, fParam9, 0, 1, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param6, fParam9, 0, 1, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam2))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param6, fParam9, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_591(struct<3> Param0)//Position - 0x68802
{
	int iVar0[7];
	float fVar8;
	int iVar9;
	int iVar10;
	
	fVar8 = -1f;
	iVar0[4] = SYSTEM::VDIST2(Param0, -557.3316f, 5385.458f, 69.6229f);
	iVar0[3] = SYSTEM::VDIST2(Param0, -611.2953f, 5334.016f, 71.1438f);
	iVar0[0] = SYSTEM::VDIST2(Param0, -570.3f, 5212.4f, 88.4678f);
	iVar0[1] = SYSTEM::VDIST2(Param0, -598.2f, 5280.5f, 71.2f);
	iVar0[2] = SYSTEM::VDIST2(Param0, -574.834f, 5253.564f, 69.4682f);
	iVar0[6] = SYSTEM::VDIST2(Param0, -503.5374f, 5248.138f, 85.5385f);
	iVar0[5] = SYSTEM::VDIST2(Param0, -476.6512f, 5344.688f, 83.9177f);
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < iVar0)
	{
		if (fVar8 == -1f || iVar0[iVar10] < fVar8)
		{
			fVar8 = iVar0[iVar10];
			iVar9 = iVar10;
		}
		iVar10++;
	}
	return iVar9;
}

int func_592(struct<3> Param0, float fParam3)//Position - 0x68910
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
		if (GlobalFunc_7698() && GlobalFunc_622() != joaat("bulldozer"))
		{
			GlobalFunc_8368();
			if (GlobalFunc_8367())
			{
				iLocal_357 = GlobalFunc_9749(Param0, fParam3);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_357, 0, 0);
				VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_357, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_357, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_357, 1, 1);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}






































void func_630()//Position - 0x6BACC
{
	if (!PED::IS_PED_INJURED(func_428(2)))
	{
		GlobalFunc_11267(func_428(2), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

void func_631()//Position - 0x6BAF7
{
	if (!PED::IS_PED_INJURED(func_428(0)))
	{
		GlobalFunc_11267(func_428(0), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

int func_632(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x6BB22
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_355))
	{
		GlobalFunc_7046(2, 1);
		if (GlobalFunc_7045(2, 1))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_633(&iLocal_355, 2, Param0, fParam3, 1, 1))
			{
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_355, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_355, 1, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_355, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_355, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_355, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_355, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_355, 0);
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

int func_633(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x6BBAB
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}













int func_646(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x6F178
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
	{
		GlobalFunc_7046(0, 1);
		if (GlobalFunc_7045(0, 1))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_633(&iLocal_354, 0, Param0, fParam3, 1, 1))
			{
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_354, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_354, 1, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_354, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_354, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_354, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_354, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_354, 0);
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

int func_647(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x6F201
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_387[2]))
	{
		GlobalFunc_7215(2);
		if (GlobalFunc_7214(2))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_263(&(uLocal_387[2]), 2, Param0, fParam3, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[2], 0);
				PED::SET_PED_MAX_HEALTH(uLocal_387[2], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_387[2], 1800);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[2], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 174, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[2], 188, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[2], 1);
				Local_456.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[2], joaat("weapon_carbinerifle"), 500, 1, 1);
				GlobalFunc_173(&Local_1903, 2, uLocal_387[2], "TREVOR", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[2], 1862763509);
				func_630();
				return 1;
			}
		}
	}
	else
	{
		if (Local_1903[2 /*10*/] != uLocal_387[2])
		{
			GlobalFunc_173(&Local_1903, 2, uLocal_387[2], "TREVOR", 0, 1);
		}
		return 1;
	}
	return 0;
}



int func_650(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x6F367
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]))
	{
		GlobalFunc_7215(0);
		if (GlobalFunc_7214(0))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_263(&(uLocal_387[0]), 0, Param0, fParam3, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[0], 0);
				PED::SET_PED_MAX_HEALTH(uLocal_387[0], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_387[0], 1800);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[0], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 174, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[0], 188, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[0], 1);
				GlobalFunc_11267(uLocal_387[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				Local_470.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[0], joaat("weapon_heavysniper"), 100, 1, 1);
				GlobalFunc_173(&Local_1903, 0, uLocal_387[0], "MICHAEL", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[0], 1862763509);
				func_631();
				return 1;
			}
		}
	}
	else
	{
		if (Local_1903[0 /*10*/] != uLocal_387[0])
		{
			GlobalFunc_173(&Local_1903, 0, uLocal_387[0], "MICHAEL", 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_651()//Position - 0x6F495
{
	iLocal_108 = 0;
	iLocal_109 = 0;
	bLocal_112 = false;
	bLocal_113 = false;
	bLocal_105 = false;
	bLocal_106 = false;
	iLocal_118 = 0;
	bLocal_114 = false;
	bLocal_115 = false;
	bLocal_102 = false;
	bLocal_107 = false;
	bLocal_116 = false;
	bLocal_111 = false;
	bLocal_110 = false;
	bLocal_126 = false;
	iLocal_127 = 0;
	iLocal_124 = 0;
	iLocal_123 = 0;
	iLocal_125 = 0;
	bLocal_117 = false;
	iLocal_119 = 0;
	iLocal_128 = 0;
	iLocal_275 = 0;
	iLocal_277 = 0;
	iLocal_276 = 0;
	iLocal_281 = 0;
	iLocal_255 = 0;
	if (iLocal_376 <= 3)
	{
		bLocal_103 = false;
		bLocal_104 = false;
		iLocal_118 = 0;
	}
	else if (iLocal_376 == 4)
	{
		bLocal_103 = true;
		bLocal_104 = false;
		iLocal_118 = 0;
	}
	else if (iLocal_376 >= 5)
	{
		bLocal_103 = true;
		bLocal_104 = true;
		iLocal_118 = 1;
		Local_498.f_3 = 50;
	}
}

void func_652()//Position - 0x6F52F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	bool bVar10;
	
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(-516.7184f, 5305.604f, 79.2676f, 248.7328f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -516.7184f, 5305.604f, 79.2676f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 248.7328f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_651();
			if (Global_86816)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_387[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_354)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					func_650(Local_81, fLocal_298, 0);
					func_647(-508.7989f, 5305.932f, 79.2676f, 250.0743f, 0);
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
					SYSTEM::WAIT(0);
				}
				func_631();
				func_630();
			}
			while ((((!func_592(Local_87, fLocal_299) || !ENTITY::DOES_ENTITY_EXIST(Local_1898.x)) || !ENTITY::DOES_ENTITY_EXIST(Local_498)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_337[0])) || !bLocal_102)
			{
				func_584();
				func_427();
				func_184(-521.4622f, 5307.608f, 79.2676f, 252.3208f);
				func_724(Local_63, fLocal_296, 0);
				func_583();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5108(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_387[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[0])) || PED::IS_PED_INJURED(uLocal_387[0]))) && ((!PED::IS_PED_INJURED(uLocal_387[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[1])) || PED::IS_PED_INJURED(uLocal_387[1]))) && ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[2])) || PED::IS_PED_INJURED(uLocal_387[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[0], 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[2], 1);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			GlobalFunc_6415(1);
			func_580(1);
			func_579(1);
			func_578();
			func_451();
			func_723();
			func_722();
			iLocal_133[23] = 1;
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_378 = 1;
			Local_498.f_3 = 50;
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_PROTECT_LAMAR"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_PROTECT_LAMAR");
		}
		if (Global_86816)
		{
			if (!PED::IS_PED_INJURED(uLocal_387[1]))
			{
				iVar0 = uLocal_387[1];
			}
			else
			{
				iVar0 = uLocal_387[2];
			}
			if (!PED::IS_PED_INJURED(iVar0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_66) > 2500f)
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iVar0))
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(iVar0), -507.0433f, 5308.275f, 79.2676f, 1))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, -507.0433f, 5308.275f, 79.2676f, 1, 0, 0, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, -494.3257f, 5324.513f, 79.5372f, 1, 0, 0, 1);
						}
					}
				}
			}
			Local_456.f_3 = 0;
			Local_456.f_7 = 1;
			Local_484.f_3 = 0;
			Local_484.f_7 = 1;
		}
		if (HUD::DOES_BLIP_EXIST(Local_498.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_498.f_1));
		}
		func_535(2, "GET_LAMAR_OUT", 0, 0, 0, 0);
		GlobalFunc_3007(&uLocal_387, 0, 0);
		GlobalFunc_3007(&uLocal_387, 2, 0);
		GlobalFunc_3007(&uLocal_387, 1, 0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_533();
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_CUT_LAMAR_RT");
			SYSTEM::WAIT(500);
			GlobalFunc_2204();
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FRA2_GOT_LAMAR");
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		SYSTEM::SETTIMERB(0);
		SYSTEM::SETTIMERA(0);
		iLocal_278 = 0;
		iLocal_386 = 3;
		iLocal_280 = MISC::GET_GAME_TIMER();
		iLocal_254 = 0;
		iLocal_377 = 1;
	}
	if (iLocal_377 == 1)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!PED::IS_PED_INJURED(Local_498))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(Local_498, 1) };
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			Var7 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1) };
		}
		func_720(1);
		func_444();
		func_584();
		func_427();
		func_719();
		func_716();
		if (!iLocal_133[34])
		{
			if (Global_86816)
			{
				if (!GlobalFunc_5172(&Local_431, 1))
				{
					if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_snipe1", 7, 0, 0, 0))
					{
						iLocal_133[34] = 1;
					}
				}
			}
			else
			{
				iLocal_133[34] = 1;
			}
		}
		else if (!iLocal_133[12])
		{
			if (!GlobalFunc_5172(&Local_431, 2))
			{
				GlobalFunc_164("FRAN2_leadL", 7500, 0);
				iLocal_133[12] = 1;
			}
		}
		else if (!iLocal_133[25])
		{
			if (((!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579()) && iLocal_378 != 0) && Global_86816)
			{
				if (SYSTEM::TIMERA() < 35000 && !PED::IS_PED_INJURED(Local_498))
				{
					if (iLocal_133[23])
					{
						if (SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(func_428(2), 1)) < 400f)
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LSEET", 7, 0, 0, 0))
							{
								iLocal_133[25] = 1;
							}
						}
					}
					else if (iLocal_133[24])
					{
						if (SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 400f)
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LSEEF", 7, 0, 0, 0))
							{
								iLocal_133[25] = 1;
							}
						}
					}
				}
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_498.f_1) && !PED::IS_PED_INJURED(Local_498))
		{
			Local_498.f_1 = GlobalFunc_6783(Local_498, 0, 0);
		}
		if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
		{
			if (iLocal_133[12])
			{
				func_715();
				func_713();
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			if (((!PED::IS_PED_INJURED(Local_1749[3 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[3 /*21*/], 1), Var7) < 1600f) || (!PED::IS_PED_INJURED(Local_1749[4 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[4 /*21*/], 1), Var7) < 1600f)) || (!PED::IS_PED_INJURED(Local_1749[5 /*21*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1749[5 /*21*/], 1), Var7) < 1600f))
			{
				bLocal_126 = true;
				iLocal_128 = 1;
				if (!iLocal_133[63])
				{
					if (!GlobalFunc_5172(&Local_431, 1))
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MIKEHURT", 7, 0, 0, 0))
						{
							iLocal_133[63] = 1;
							GlobalFunc_3007(&uLocal_387, 0, 1);
							GlobalFunc_2511(&uLocal_387, 0, 1, 2);
						}
					}
				}
			}
		}
		if (bLocal_126)
		{
			if ((PED::IS_PED_INJURED(Local_1749[3 /*21*/]) && PED::IS_PED_INJURED(Local_1749[4 /*21*/])) && PED::IS_PED_INJURED(Local_1749[5 /*21*/]))
			{
				GlobalFunc_3007(&uLocal_387, 0, 0);
				bLocal_126 = false;
			}
		}
		switch (iLocal_254)
		{
			case 0:
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_69, Global_18, 1, 1, 0);
				if (((func_431(&Local_1749) == 0 && func_431(&Local_1193) == 0) && PED::IS_PED_INJURED(Local_1407[0 /*21*/])) && PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
				{
					bVar10 = true;
				}
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.1693f, 5272.24f, 69.21416f, -584.3835f, 5234.474f, 78.22045f, 20f, 0, 1, 0) || iLocal_378 == 0) && bVar10) && !GlobalFunc_579())
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_310))
					{
						HUD::REMOVE_BLIP(&uLocal_310);
					}
					if (iLocal_378 == 1)
					{
						iLocal_377 = 2;
					}
					else if (iLocal_278 == 0)
					{
						iLocal_278 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_278) > 1500)
					{
						HUD::CLEAR_PRINTS();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						GlobalFunc_5105();
						GlobalFunc_565(369, 1, 0);
						GlobalFunc_2518(&uLocal_387, 1, 0);
						GlobalFunc_9134(&uLocal_387, 1);
						Local_2068.f_12 = uLocal_387[1];
						if (!PED::IS_PED_INJURED(uLocal_387[1]))
						{
							TASK::TASK_AIM_GUN_AT_COORD(uLocal_387[1], -587.6f, 5230.2f, 71.4f, -1, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -489.7256f, 5408.618f, 49.59518f, -570.1348f, 5210.887f, 122.6099f, 188.75f, 0, 1, 0))
						{
							iLocal_386 = 0;
						}
						iLocal_254++;
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_310))
					{
						uLocal_310 = GlobalFunc_5104(Local_69, 0);
					}
					if (GlobalFunc_663("FRAN2_SWFRANK", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (Global_86816)
					{
						if ((iLocal_378 != 1 || !bVar10) || GlobalFunc_579())
						{
							func_685();
						}
						func_684();
						func_674();
						if (iLocal_378 == 0)
						{
							if (GlobalFunc_663("FRAN2_leadL", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (!iLocal_133[13] && !bLocal_126)
							{
								if (!GlobalFunc_5172(&Local_431, 2) && !GlobalFunc_579())
								{
									GlobalFunc_164("FRAN2_PROT", 7500, 0);
									iLocal_133[13] = 1;
								}
							}
						}
						else if (iLocal_133[13])
						{
							if (GlobalFunc_663("FRAN2_PROT", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
						}
					}
				}
				break;
			
			case 1:
				if (!func_655(&Local_2068, iLocal_386, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_377 = 2;
				}
				else if (Local_2068.f_18)
				{
					if (!Local_2068.f_19)
					{
						if (func_195(&uLocal_387, 1, 1, 0))
						{
							if (!PED::IS_PED_INJURED(uLocal_387[uLocal_387.f_5]))
							{
								if (iLocal_256 < 110)
								{
									iLocal_256 = 110;
								}
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[uLocal_387.f_5], 0);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[uLocal_387.f_5], 0);
								PED::SET_PED_DIES_WHEN_INJURED(uLocal_387[uLocal_387.f_5], 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[uLocal_387.f_5], 1862763509);
								func_439(&(uLocal_387[uLocal_387.f_5]), 5, 1, 2, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 12, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 36, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 35, 1);
								PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 118, 0);
								PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 185, 1);
								PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 188, 1);
								ENTITY::SET_ENTITY_HEALTH(uLocal_387[uLocal_387.f_5], iLocal_256);
								GlobalFunc_2903(uLocal_387[uLocal_387.f_5], 1800);
								PED::SET_PED_USING_ACTION_MODE(uLocal_387[uLocal_387.f_5], 1, -1, 0);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[uLocal_387.f_5], 33497);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[uLocal_387.f_5], 1);
							}
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
							func_191();
							func_723();
							iLocal_378 = uLocal_387.f_7;
							Local_2068.f_19 = 1;
						}
					}
				}
				break;
		}
		if (SYSTEM::VDIST2(Var1, Var4) > 22500f)
		{
			func_425(7);
		}
	}
	if (iLocal_377 == 2)
	{
		GlobalFunc_5652(&Local_431, 1, 0);
		func_531();
		HUD::CLEAR_HELP(1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_302);
		STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
		if (!PED::IS_PED_INJURED(uLocal_387[1]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_387[1], 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_387[2], 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_387[0], 0);
		}
		GlobalFunc_2518(&uLocal_387, 1, 0);
		GlobalFunc_2785(&uLocal_387);
		iLocal_376 = 6;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		func_423(6, 0);
	}
}



int func_655(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x7026C
{
	return func_656(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_656(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x70293
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
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(iParam8);
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
						GlobalFunc_7981(0, 1);
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
						GlobalFunc_7981(0, 1);
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
				GlobalFunc_7981(0, 1);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}


















void func_674()//Position - 0x70BDE
{
	int iVar0[8];
	int iVar9;
	struct<3> Var10;
	int iVar13;
	struct<3> Var14;
	int iVar17;
	
	iVar9 = 0;
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_387[0], 227, 1);
		if (iLocal_379 == 2)
		{
		}
		if (!GlobalFunc_579() || (GlobalFunc_579() && uLocal_387.f_7 != 0))
		{
			func_683(&(uLocal_387[0]), &Local_470);
		}
		if (PED::IS_PED_RAGDOLL(uLocal_387[0]))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(uLocal_387[0]) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), 5f))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_387[0], 0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_387[1], 227, 1);
		if (iLocal_376 <= 4)
		{
			if (iLocal_381 == 0)
			{
				func_682(&(uLocal_387[1]), &Local_484);
			}
			else if (iLocal_381 == 1)
			{
				func_681(&(uLocal_387[1]), &Local_484);
			}
			else if (iLocal_381 == 4)
			{
				func_680(&(uLocal_387[1]), &Local_484);
			}
			else if (iLocal_381 == 3)
			{
				func_679(&(uLocal_387[1]), &Local_484);
			}
			Var10 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1) };
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[1], 242628503) == 1 && !PED::IS_PED_IN_COMBAT(uLocal_387[1], 0))
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
			}
			if (SYSTEM::VDIST2(Var10, Local_484.f_11) > 9f && ENTITY::GET_ENTITY_SPEED(uLocal_387[1]) > 0.3f)
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_270) < 500 && SYSTEM::VDIST2(Var10, Local_96) < 2500f)
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_103)
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_383 != iLocal_381)
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
				Local_484.f_4 = 0;
				iLocal_383 = iLocal_381;
			}
			if (Local_484.f_3 > Local_484.f_4)
			{
				iLocal_271 = MISC::GET_GAME_TIMER();
				Local_484.f_4 = Local_484.f_3;
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				if (SYSTEM::VDIST2(Var10, ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1)) < 400f)
				{
					iLocal_271 = MISC::GET_GAME_TIMER();
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_271) > 20000)
			{
				iVar13 = 0;
				PED::GET_PED_NEARBY_PEDS(uLocal_387[1], &iVar0, -1);
				iVar9 = 0;
				while (iVar9 < iVar0)
				{
					if (!PED::IS_PED_INJURED(iVar0[iVar9]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar9]) == iLocal_1901)
					{
						if (SYSTEM::VDIST2(Var10, ENTITY::GET_ENTITY_COORDS(iVar0[iVar9], 1)) < 2500f)
						{
							iVar13++;
						}
					}
					iVar9++;
				}
				if (iVar13 > 1)
				{
					GlobalFunc_3007(&uLocal_387, 1, 1);
					GlobalFunc_2511(&uLocal_387, 1, 2, 0);
					if ((MISC::GET_GAME_TIMER() - iLocal_273) > 0)
					{
						if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FRANHURT", 7, 0, 0, 0))
							{
								iLocal_273 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
						}
					}
				}
				else
				{
					iLocal_271 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				GlobalFunc_3007(&uLocal_387, 1, 0);
			}
		}
		else
		{
			func_676(&(uLocal_387[1]), &Local_484);
		}
		func_675(&(uLocal_387[1]), &(Local_484.f_6));
	}
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_387[2], 227, 1);
		if (iLocal_376 <= 4)
		{
			if (iLocal_380 == 0)
			{
				func_682(&(uLocal_387[2]), &Local_456);
			}
			else if (iLocal_380 == 1)
			{
				func_681(&(uLocal_387[2]), &Local_456);
			}
			else if (iLocal_380 == 4)
			{
				func_680(&(uLocal_387[2]), &Local_456);
			}
			else if (iLocal_380 == 3)
			{
				func_679(&(uLocal_387[2]), &Local_456);
			}
			Var14 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1) };
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[2], 242628503) == 1 && !PED::IS_PED_IN_COMBAT(uLocal_387[2], 0))
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_270) < 500 && SYSTEM::VDIST2(Var14, Local_96) < 2500f)
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
			}
			if (SYSTEM::VDIST2(Var14, Local_456.f_11) > 9f && ENTITY::GET_ENTITY_SPEED(uLocal_387[2]) > 0.3f)
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_103)
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_382 != iLocal_380)
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
				Local_456.f_4 = 0;
				iLocal_382 = iLocal_380;
			}
			if (Local_456.f_3 > Local_456.f_4)
			{
				iLocal_272 = MISC::GET_GAME_TIMER();
				Local_456.f_4 = Local_456.f_3;
			}
			if (!PED::IS_PED_INJURED(uLocal_387[1]))
			{
				if (SYSTEM::VDIST2(Var14, ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1)) < 400f)
				{
					iLocal_272 = MISC::GET_GAME_TIMER();
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_272) > 20000)
			{
				iVar17 = 0;
				PED::GET_PED_NEARBY_PEDS(uLocal_387[2], &iVar0, -1);
				iVar9 = 0;
				while (iVar9 < iVar0)
				{
					if (!PED::IS_PED_INJURED(iVar0[iVar9]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar9]) == iLocal_1901)
					{
						if (SYSTEM::VDIST2(Var14, ENTITY::GET_ENTITY_COORDS(iVar0[iVar9], 1)) < 2500f)
						{
							iVar17++;
						}
					}
					iVar9++;
				}
				if (iVar17 > 1)
				{
					GlobalFunc_3007(&uLocal_387, 2, 1);
					GlobalFunc_2511(&uLocal_387, 2, 1, 0);
					if ((MISC::GET_GAME_TIMER() - iLocal_274) > 0)
					{
						if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TREVHURT", 7, 0, 0, 0))
							{
								iLocal_274 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
						}
					}
				}
				else
				{
					iLocal_272 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				GlobalFunc_3007(&uLocal_387, 2, 0);
			}
		}
		else
		{
			func_676(&(uLocal_387[2]), &Local_456);
		}
		func_675(&(uLocal_387[2]), &(Local_456.f_6));
	}
}

void func_675(var uParam0, var uParam1)//Position - 0x711B4
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		bVar0 = true;
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
					bVar0 = false;
				}
				else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if ((*uParam1 - ENTITY::GET_ENTITY_HEALTH(*uParam0)) > 100)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
						bVar0 = false;
					}
				}
			}
		}
		if (bVar0)
		{
			*uParam1 = ENTITY::GET_ENTITY_HEALTH(*uParam0);
		}
	}
}

void func_676(var uParam0, var uParam1)//Position - 0x7124E
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var10[5];
	struct<3> Var26[5];
	int iVar42;
	int iVar43;
	float fVar44;
	float fVar45;
	struct<3> Var46;
	float fVar49;
	float fVar50;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		bVar4 = false;
		bVar5 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) == 1);
		if (*uParam0 == uLocal_387[2])
		{
			Var7 = { Local_484.f_11 };
		}
		else
		{
			Var7 = { Local_456.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("weapon_carbinerifle"), 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("weapon_carbinerifle")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("weapon_carbinerifle"), 50);
			}
		}
		PED::SET_PED_RESET_FLAG(*uParam0, 227, 1);
		Var10[0 /*3*/] = { -505.4764f, 5305.939f, 79.2676f };
		Var10[1 /*3*/] = { -502.2627f, 5288.631f, 79.61f };
		Var10[2 /*3*/] = { -515.8207f, 5274.357f, 79.2366f };
		Var10[3 /*3*/] = { -547.1495f, 5262.184f, 72.9514f };
		Var10[4 /*3*/] = { -573.9721f, 5258.023f, 69.4643f };
		Var26[0 /*3*/] = { -506.0377f, 5301.814f, 79.2758f };
		Var26[1 /*3*/] = { -496.8887f, 5287.045f, 79.61f };
		Var26[2 /*3*/] = { -502.4147f, 5270.479f, 79.61f };
		Var26[3 /*3*/] = { -544.3444f, 5269.469f, 73.1745f };
		Var26[4 /*3*/] = { -573.9721f, 5258.023f, 69.4643f };
		if (uParam1->f_9)
		{
			iVar42 = 0;
			iVar43 = 0;
			fVar44 = -1f;
			iVar42 = 0;
			while (iVar42 < Var10.x)
			{
				fVar45 = SYSTEM::VDIST2(Var0, Var10[iVar42 /*3*/]);
				if (fVar44 == -1f || fVar45 < fVar44)
				{
					iVar43 = iVar42;
					fVar44 = fVar45;
				}
				iVar42++;
			}
			if (iVar43 > 0)
			{
				if (func_678(*uParam0, Var10[(iVar43 - 1) /*3*/], Var10[iVar43 /*3*/], 1101004800))
				{
					iVar43 = (iVar43 - 1);
				}
			}
			if (iVar43 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar43 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar43 == 2)
			{
				uParam1->f_3 = 2;
			}
			else
			{
				uParam1->f_3 = 3;
			}
			Var46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar49 = SYSTEM::VDIST2(Var10[iVar43 /*3*/], Var46);
			fVar50 = SYSTEM::VDIST2(Var26[iVar43 /*3*/], Var46);
			if (fVar49 < fVar50)
			{
				if (fVar49 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var10[iVar43 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var10[iVar43 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar50 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var26[iVar43 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var26[iVar43 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (GlobalFunc_537(uParam1->f_11, 0f, 0f, 0f, 1056964608))
		{
			uParam1->f_11 = { Var10[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var26[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (!GlobalFunc_537(Var10[0 /*3*/], uParam1->f_11, 1056964608) && !GlobalFunc_537(Var26[0 /*3*/], uParam1->f_11, 1056964608))
					{
						uParam1->f_11 = { Var10[0 /*3*/] };
					}
					if (GlobalFunc_537(uParam1->f_11, Var10[0 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -111.4f, 2f, 0, 2, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -113.9f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[1 /*3*/], 1101004800) && func_431(&Local_1044) == 0)
					{
						uParam1->f_11 = { Var10[1 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 1:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 2f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var26[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[1 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.4f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -516.1574f, 5247.171f, 80.3439f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255f, 79.36004f, -496.3577f, 5296.457f, 84.41231f, 14.25f, 0, 1, 0))
					{
						if (func_431(&Local_1108) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -516.1574f, 5247.171f, 80.3439f, 0);
							}
						}
					}
				}
				if (!iLocal_133[19] && iLocal_378 != 0)
				{
					if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
					{
						if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 625f)
						{
							if (iLocal_378 == 1)
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_OUT2", 7, 0, 0, 0))
								{
									iLocal_133[19] = 1;
									iLocal_289 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_OUT", 7, 0, 0, 0))
							{
								iLocal_133[19] = 1;
								iLocal_289 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[2 /*3*/], 1101004800) && func_431(&Local_1108) == 0)
					{
						uParam1->f_11 = { Var10[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 2:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var26[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[2 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 154.3f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.1f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -516.1574f, 5247.171f, 80.3439f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255f, 79.36004f, -496.3577f, 5296.457f, 84.41231f, 14.25f, 0, 1, 0))
					{
						if (func_431(&Local_1685) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -516.1574f, 5247.171f, 80.3439f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -516.1574f, 5247.171f, 80.3439f, 0);
							}
						}
					}
				}
				if (iLocal_378 == 0 && !iLocal_133[83])
				{
					if (((fVar3 > 25f && !GlobalFunc_5172(&Local_431, 1)) && !GlobalFunc_579()) && (MISC::GET_GAME_TIMER() - iLocal_270) < 10000)
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_Snipe3", 7, 0, 0, 0))
						{
							iLocal_133[83] = 1;
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[3 /*3*/], 1101004800) && func_431(&Local_1685) == 0)
					{
						uParam1->f_11 = { Var10[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 3:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var26[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[3 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 70.7f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 72.4f, 2f, 1, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (SYSTEM::VDIST2(Var0, uParam1->f_11) > SYSTEM::VDIST2(-519.4547f, 5250.643f, 78.7824f, uParam1->f_11))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -519.4547f, 5250.643f, 78.7824f, 2f, 60000, 0.5f, 1, 40000f);
						}
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -574.0313f, 5258.59f, 71.0182f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -527.8607f, 5247.066f, 79.93937f, -556.4177f, 5258.928f, 69.14958f, 14.5f, 0, 1, 0))
					{
						if (func_431(&Local_1749) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -574.0313f, 5258.59f, 71.0182f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -574.0313f, 5258.59f, 71.0182f, 0);
							}
						}
					}
				}
				if (iLocal_378 == 0 && !iLocal_133[84])
				{
					if ((((fVar3 > 25f && !GlobalFunc_5172(&Local_431, 1)) && !GlobalFunc_579()) && !bLocal_126) && (MISC::GET_GAME_TIMER() - iLocal_270) < 10000)
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_Snipe3", 7, 0, 0, 0))
						{
							iLocal_133[84] = 1;
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (func_431(&Local_1749) == 0)
					{
						uParam1->f_11 = { Var10[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 4:
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -587.1f, 5281.6f, 71f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_677(var uParam0, var uParam1, struct<3> Param2, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x7204C
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (*uParam1 != 0)
		{
			TASK::REMOVE_COVER_POINT(*uParam1);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param2))
		{
			*uParam1 = TASK::ADD_COVER_POINT(Param2, fParam5, iParam7, iParam8, iParam9, 0);
		}
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param2, fParam6, iParam10, 0);
	}
}

int func_678(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x7209D
{
	var uVar0[16];
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar22 = SYSTEM::VDIST2(Param1, Param4);
		iVar23 = 0;
		PED::GET_PED_NEARBY_PEDS(iParam0, &uVar0, -1);
		while (iVar23 < 16)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar23]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar23]) == iLocal_1901)
				{
					Var17 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar23], 1) };
					fVar20 = SYSTEM::VDIST2(Var17, Param1);
					fVar21 = SYSTEM::VDIST2(Var17, Param4);
					if (fVar20 < (fVar21 + (fParam7 * fParam7)))
					{
						if (fVar21 < fVar22 || fVar20 < 225f)
						{
							return 1;
						}
					}
				}
			}
			iVar23++;
		}
	}
	return 0;
}

void func_679(var uParam0, var uParam1)//Position - 0x72152
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var10[6];
	struct<3> Var29[6];
	int iVar48;
	int iVar49;
	float fVar50;
	float fVar51;
	struct<3> Var52;
	float fVar55;
	float fVar56;
	struct<3> Var57;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		bVar4 = false;
		bVar5 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) == 1);
		if (*uParam0 == uLocal_387[2])
		{
			Var7 = { Local_484.f_11 };
		}
		else
		{
			Var7 = { Local_456.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("weapon_carbinerifle"), 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("weapon_carbinerifle")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("weapon_carbinerifle"), 50);
			}
		}
		Var10[0 /*3*/] = { -487.6498f, 5385.08f, 77.0692f };
		Var10[1 /*3*/] = { -462.0061f, 5339.45f, 82.4832f };
		Var10[2 /*3*/] = { -476.0758f, 5322.041f, 79.61f };
		Var10[3 /*3*/] = { -483.3072f, 5315.957f, 79.61f };
		Var10[4 /*3*/] = { -497.8078f, 5302.225f, 79.6052f };
		Var10[5 /*3*/] = { -504.7159f, 5300.774f, 79.5876f };
		Var29[0 /*3*/] = { -471.3402f, 5380.925f, 78.8354f };
		Var29[1 /*3*/] = { -462.9181f, 5335.053f, 82.4505f };
		Var29[2 /*3*/] = { -483.2917f, 5321.426f, 79.61f };
		Var29[3 /*3*/] = { -489.777f, 5318.115f, 79.61f };
		Var29[4 /*3*/] = { -497.933f, 5299.271f, 79.61f };
		Var29[5 /*3*/] = { -504.2799f, 5304.168f, 79.4737f };
		if (uParam1->f_9)
		{
			iVar48 = 0;
			iVar49 = 0;
			fVar50 = -1f;
			iVar48 = 0;
			while (iVar48 < Var10.x)
			{
				fVar51 = SYSTEM::VDIST2(Var0, Var10[iVar48 /*3*/]);
				if (fVar50 == -1f || fVar51 < fVar50)
				{
					iVar49 = iVar48;
					fVar50 = fVar51;
				}
				iVar48++;
			}
			if (iVar49 > 0)
			{
				if (func_678(*uParam0, Var10[(iVar49 - 1) /*3*/], Var10[iVar49 /*3*/], 1101004800))
				{
					iVar49 = (iVar49 - 1);
				}
			}
			if (iVar49 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar49 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar49 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar49 == 3)
			{
				uParam1->f_3 = 3;
			}
			else if (iVar49 == 4)
			{
				uParam1->f_3 = 4;
			}
			else
			{
				uParam1->f_3 = 5;
			}
			Var52 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar55 = SYSTEM::VDIST2(Var10[iVar49 /*3*/], Var52);
			fVar56 = SYSTEM::VDIST2(Var29[iVar49 /*3*/], Var52);
			if (fVar55 < fVar56)
			{
				if (fVar55 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var10[iVar49 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var10[iVar49 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar56 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var29[iVar49 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var29[iVar49 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (GlobalFunc_537(uParam1->f_11, 0f, 0f, 0f, 1056964608))
		{
			uParam1->f_11 = { Var10[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (!GlobalFunc_537(Var10[0 /*3*/], uParam1->f_11, 1056964608) && !GlobalFunc_537(Var29[0 /*3*/], uParam1->f_11, 1056964608))
					{
						uParam1->f_11 = { Var10[0 /*3*/] };
					}
					if (GlobalFunc_537(uParam1->f_11, Var10[0 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -176.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.9f, 2f, 0, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[1 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var10[1 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 1:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 2f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[1 /*3*/], 1056964608))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 150.6f, 2f, 0, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (Var0.f_2 < 83f)
						{
							TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, -463.8806f, 5341.847f, 79.7449f, -498.8398f, 5292.783f, 81.7003f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -462.0908f, 5340.973f, 82.4936f, 2f, -1, 0.5f, 5, 40000f);
						}
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (Var0.f_2 < 83f && SYSTEM::VDIST2(Var0, -463.8806f, 5341.847f, 79.7449f) < 4f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0) > 100f)
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(*uParam0), -463.8806f, 5341.847f, 79.7449f, 1) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(*uParam0), -462.0908f, 5340.973f, 82.4936f, 1))
						{
							ENTITY::SET_ENTITY_COORDS(*uParam0, -462.0908f, 5340.973f, 82.4936f, 1, 0, 0, 1);
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[2 /*3*/], 1101004800) && Var0.f_2 > 83f)
					{
						uParam1->f_11 = { Var10[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 2:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[2 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.4f, 2f, 0, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[3 /*3*/], 1101004800) && func_431(&Local_1515) == 0)
					{
						uParam1->f_11 = { Var10[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 3:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[3 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 153.5f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 158.5f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -498.8398f, 5292.783f, 81.7003f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[4 /*3*/], 1101004800) && func_431(&Local_1600) == 0)
					{
						uParam1->f_11 = { Var10[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 4:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar5)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[4 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 65.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 65.6f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -523.1256f, 5307.771f, 80.4874f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var10[5 /*3*/], 1101004800) && func_431(&Local_745) == 0)
					{
						uParam1->f_11 = { Var10[5 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 5:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var7, 3f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var10[5 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var29[5 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && fVar3 > 4f))
				{
					if (GlobalFunc_537(uParam1->f_11, Var10[5 /*3*/], 1056964608))
					{
						Var57 = { -537.1587f, 5268.907f, 79.4526f };
					}
					else
					{
						Var57 = { -487.8635f, 5318.147f, 81.0427f };
					}
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, Var57, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var57, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_680(var uParam0, var uParam1)//Position - 0x72FDE
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var11[8];
	struct<3> Var36[8];
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	struct<3> Var65;
	float fVar68;
	float fVar69;
	struct<3> Var70;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		bVar4 = false;
		iVar5 = 1;
		bVar6 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) == 1);
		if (*uParam0 == uLocal_387[2])
		{
			Var8 = { Local_484.f_11 };
		}
		else
		{
			Var8 = { Local_456.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("weapon_carbinerifle"), 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("weapon_carbinerifle")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("weapon_carbinerifle"), 50);
			}
		}
		if (SYSTEM::VDIST2(Var0, -592.0587f, 5236.632f, 69.8622f) < SYSTEM::VDIST2(Var0, -598.3776f, 5286.818f, 69.2335f))
		{
			Var11[0 /*3*/] = { -592.0587f, 5236.632f, 69.8622f };
		}
		else
		{
			Var11[0 /*3*/] = { -598.3776f, 5286.818f, 69.2335f };
		}
		Var11[1 /*3*/] = { -566.3613f, 5256.459f, 69.467f };
		Var11[2 /*3*/] = { -547.0441f, 5270.354f, 73.1741f };
		Var11[3 /*3*/] = { -522.0834f, 5250.756f, 78.5639f };
		Var11[4 /*3*/] = { -518.9554f, 5255.741f, 79.5127f };
		Var11[5 /*3*/] = { -504.8981f, 5280.011f, 79.61f };
		Var11[6 /*3*/] = { -497.9232f, 5299.367f, 79.61f };
		Var11[7 /*3*/] = { -504.7159f, 5300.774f, 79.5876f };
		Var36[0 /*3*/] = { -583.5048f, 5248.066f, 69.4689f };
		Var36[1 /*3*/] = { -566.3081f, 5271.212f, 69.2443f };
		Var36[2 /*3*/] = { -544.6422f, 5255.063f, 73.2873f };
		Var36[3 /*3*/] = { -508.5136f, 5255.053f, 79.6276f };
		Var36[4 /*3*/] = { -508.5136f, 5255.053f, 79.6276f };
		Var36[5 /*3*/] = { -501.262f, 5275.977f, 79.61f };
		Var36[6 /*3*/] = { -497.8619f, 5302.259f, 79.6041f };
		Var36[7 /*3*/] = { -504.2799f, 5304.168f, 79.4737f };
		if (uParam1->f_9)
		{
			iVar61 = 0;
			iVar62 = 0;
			fVar63 = -1f;
			iVar61 = 0;
			while (iVar61 < Var11.x)
			{
				fVar64 = SYSTEM::VDIST2(Var0, Var11[iVar61 /*3*/]);
				if (fVar63 == -1f || fVar64 < fVar63)
				{
					iVar62 = iVar61;
					fVar63 = fVar64;
				}
				iVar61++;
			}
			if (iVar62 > 0)
			{
				if (func_678(*uParam0, Var11[(iVar62 - 1) /*3*/], Var11[iVar62 /*3*/], 1101004800))
				{
					iVar62 = (iVar62 - 1);
				}
			}
			if (iVar62 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar62 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar62 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar62 == 3)
			{
				uParam1->f_3 = 3;
			}
			else if (iVar62 == 4)
			{
				uParam1->f_3 = 4;
			}
			else if (iVar62 == 5)
			{
				uParam1->f_3 = 5;
			}
			else if (iVar62 == 6)
			{
				uParam1->f_3 = 6;
			}
			else
			{
				uParam1->f_3 = 7;
			}
			Var65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar68 = SYSTEM::VDIST2(Var11[iVar62 /*3*/], Var65);
			fVar69 = SYSTEM::VDIST2(Var36[iVar62 /*3*/], Var65);
			if (fVar68 < fVar69)
			{
				if (fVar68 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var11[iVar62 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var11[iVar62 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar69 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var36[iVar62 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var36[iVar62 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (GlobalFunc_537(uParam1->f_11, 0f, 0f, 0f, 1056964608))
		{
			uParam1->f_11 = { Var11[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (fVar3 > SYSTEM::VDIST2(uParam1->f_11, -664.8f, 5242.8f, 76.3f))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -664.8f, 5242.8f, 76.3f, -570.3f, 5267.9f, 70.9f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
						}
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -570.3f, 5267.9f, 70.9f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[1 /*3*/], 1101004800))
					{
						iVar5 = 1;
						if (iLocal_385 == 2 || iLocal_385 == 0)
						{
							if (func_431(&Local_660) > 0)
							{
								iVar5 = 0;
							}
						}
						else if (iLocal_385 == 1)
						{
							if (!PED::IS_PED_INJURED(Local_660[0 /*21*/]))
							{
								iVar5 = 0;
							}
						}
						if (iVar5 && (func_431(&Local_1343) == 0 || !Local_1343[0 /*21*/].f_3))
						{
							uParam1->f_11 = { Var11[1 /*3*/] };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
							uParam1->f_5 = 0;
							uParam1->f_3++;
							uParam1->f_7 = 1;
						}
					}
				}
				break;
			
			case 1:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[1 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -108.3f, 2f, 1, 2, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -107.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -541.5f, 5254.5f, 75.6f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[2 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var11[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 2:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[2 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -115f, 2f, 0, 2, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 231.8f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -541.5f, 5254.5f, 75.6f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -543.3775f, 5254.162f, 76.24041f, -575.4658f, 5268.108f, 67.46845f, 19.5f, 0, 1, 0))
					{
						if (func_431(&Local_789) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -524.1f, 5246.2f, 80f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -524.1f, 5246.2f, 80f, 0);
							}
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[3 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var11[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 3:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[3 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -23.1f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -14.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -509.12f, 5255.369f, 82.36004f, -515.348f, 5237.145f, 77.30412f, 19.5f, 0, 1, 0))
					{
						if (func_431(&Local_874) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, 0);
							}
						}
					}
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[4 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var11[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 4:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[4 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -30.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -14.4f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255f, 79.36004f, -498.2439f, 5290.137f, 83.11004f, 14.25f, 0, 1, 0))
					{
						if ((func_431(&Local_874) + func_431(&Local_959)) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, 0);
							}
						}
					}
				}
				if (fVar3 < 25f)
				{
					if ((!func_447(*uParam0, Var11[5 /*3*/], 1101004800) && ((Local_874[0 /*21*/].f_3 && PED::IS_PED_INJURED(Local_874[0 /*21*/])) && PED::IS_PED_INJURED(Local_874[1 /*21*/]))) && PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
					{
						uParam1->f_11 = { Var11[5 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 5:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[5 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[5 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[5 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -22.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -21.3f, 2f, 1, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -492.6f, 5304.7f, 81.6f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (GlobalFunc_3037(*uParam0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -511.0591f, 5255f, 79.36004f, -498.2439f, 5290.137f, 83.11004f, 14.25f, 0, 1, 0))
					{
						if ((func_431(&Local_874) + func_431(&Local_959)) > 0)
						{
							if (!func_445(PLAYER::PLAYER_PED_ID(), *uParam0, -492.6f, 5304.7f, 81.6f))
							{
								PED::SET_PED_SHOOTS_AT_COORD(*uParam0, -492.6f, 5304.7f, 81.6f, 0);
							}
						}
					}
				}
				if (fVar3 < 25f)
				{
					if ((!func_447(*uParam0, Var11[6 /*3*/], 1101004800) && func_431(&Local_959) == 0) && PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
					{
						uParam1->f_11 = { Var11[6 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 6:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[6 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[6 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[6 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 68.6f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 68.6f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, -520.9f, 5306.8f, 80.8f, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[7 /*3*/], 1101004800) && func_431(&Local_745) == 0)
					{
						uParam1->f_11 = { Var11[7 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 7:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 3f, 2f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[7 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var36[7 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && fVar3 > 4f))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[7 /*3*/], 1056964608))
					{
						Var70 = { -537.1587f, 5268.907f, 79.4526f };
					}
					else
					{
						Var70 = { -487.8635f, 5318.147f, 81.0427f };
					}
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, uParam1->f_11, Var70, 2f, 0, 0.5f, 0.5f, 1, 5, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var70, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				break;
			}
	}
}

void func_681(var uParam0, var uParam1)//Position - 0x743FA
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var11[5];
	struct<3> Var27[5];
	int iVar43;
	int iVar44;
	float fVar45;
	float fVar46;
	struct<3> Var47;
	float fVar50;
	float fVar51;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		bVar4 = false;
		bVar5 = true;
		bVar6 = (PED::IS_PED_IN_COMBAT(*uParam0, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) == 1);
		if (*uParam0 == uLocal_387[2])
		{
			Var8 = { Local_484.f_11 };
		}
		else
		{
			Var8 = { Local_456.f_11 };
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("weapon_carbinerifle"), 0))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("weapon_carbinerifle")) < 50)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("weapon_carbinerifle"), 50);
			}
		}
		Var11[0 /*3*/] = { -561.3218f, 5379.88f, 69.0322f };
		Var11[1 /*3*/] = { -563.3644f, 5350.096f, 69.2162f };
		Var11[2 /*3*/] = { -571.0067f, 5331.988f, 69.2144f };
		Var11[3 /*3*/] = { -598.5005f, 5291.4f, 69.2144f };
		Var11[4 /*3*/] = { -573.1577f, 5274.526f, 69.2604f };
		Var27[0 /*3*/] = { -551.4478f, 5375.37f, 69.4518f };
		Var27[1 /*3*/] = { -572.2329f, 5357.805f, 69.2145f };
		Var27[2 /*3*/] = { -579.6328f, 5342.093f, 69.2144f };
		Var27[3 /*3*/] = { -584.6021f, 5285.116f, 69.2604f };
		Var27[4 /*3*/] = { -584.8169f, 5285.143f, 69.2604f };
		if (uParam1->f_9)
		{
			iVar43 = 0;
			iVar44 = 0;
			fVar45 = -1f;
			iVar43 = 0;
			while (iVar43 < Var11.x)
			{
				fVar46 = SYSTEM::VDIST2(Var0, Var11[iVar43 /*3*/]);
				if (fVar45 == -1f || fVar46 < fVar45)
				{
					iVar44 = iVar43;
					fVar45 = fVar46;
				}
				iVar43++;
			}
			if (iVar44 > 0)
			{
				if (func_678(*uParam0, Var11[(iVar44 - 1) /*3*/], Var11[iVar44 /*3*/], 1101004800))
				{
					iVar44 = (iVar44 - 1);
				}
			}
			if (iVar44 == 0)
			{
				uParam1->f_3 = 0;
			}
			else if (iVar44 == 1)
			{
				uParam1->f_3 = 1;
			}
			else if (iVar44 == 2)
			{
				uParam1->f_3 = 2;
			}
			else if (iVar44 == 3)
			{
				uParam1->f_3 = 3;
			}
			else
			{
				uParam1->f_3 = 4;
			}
			Var47 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar50 = SYSTEM::VDIST2(Var11[iVar44 /*3*/], Var47);
			fVar51 = SYSTEM::VDIST2(Var27[iVar44 /*3*/], Var47);
			if (fVar50 < fVar51)
			{
				if (fVar50 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var11[iVar44 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var11[iVar44 /*3*/] };
				uParam1->f_8 = 0;
			}
			else
			{
				if (fVar51 > 400f)
				{
					if (GlobalFunc_579())
					{
						ENTITY::SET_ENTITY_COORDS(*uParam0, Var27[iVar44 /*3*/], 1, 0, 0, 1);
					}
				}
				uParam1->f_11 = { Var27[iVar44 /*3*/] };
				uParam1->f_8 = 1;
			}
			uParam1->f_5 = 0;
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (GlobalFunc_537(uParam1->f_11, 0f, 0f, 0f, 1056964608))
		{
			uParam1->f_11 = { Var11[0 /*3*/] };
		}
		switch (uParam1->f_3)
		{
			case 0:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[0 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var27[0 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (!GlobalFunc_537(Var11[0 /*3*/], uParam1->f_11, 1056964608) && !GlobalFunc_537(Var27[0 /*3*/], uParam1->f_11, 1056964608))
					{
						uParam1->f_11 = { Var11[0 /*3*/] };
					}
					if (GlobalFunc_537(uParam1->f_11, Var11[0 /*3*/], 1056964608))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[1 /*3*/], 1101004800))
					{
						bVar5 = true;
						if (iLocal_385 == 4)
						{
							if (func_431(&Local_660) > 0)
							{
								bVar5 = false;
							}
						}
						if (bVar5)
						{
							uParam1->f_11 = { Var11[1 /*3*/] };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
							uParam1->f_5 = 0;
							uParam1->f_3++;
							uParam1->f_7 = 1;
						}
					}
				}
				break;
			
			case 1:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[1 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var27[1 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[1 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[2 /*3*/], 1101004800) && func_431(&Local_1215) == 0)
					{
						uParam1->f_11 = { Var11[2 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 2:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[2 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var27[2 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[2 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, 156.7f, 2f, 2, 0, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -590.8f, 5276.8f, 71.5f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[3 /*3*/], 1101004800) && func_431(&Local_1279) == 0)
					{
						uParam1->f_11 = { Var11[3 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 3:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[3 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var27[3 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[3 /*3*/], 1056964608))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -122.7f, 2f, 0, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -553.1f, 5258.8f, 73.3f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, Var11[4 /*3*/], 1101004800))
					{
						uParam1->f_11 = { Var11[4 /*3*/] };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
						uParam1->f_5 = 0;
						uParam1->f_3++;
						uParam1->f_7 = 1;
					}
				}
				break;
			
			case 4:
				if (!uParam1->f_7)
				{
					if (func_448(PLAYER::PLAYER_PED_ID(), *uParam0, uParam1->f_11, Var8, 5f, 3f))
					{
						if (uParam1->f_8)
						{
							uParam1->f_11 = { Var11[4 /*3*/] };
							uParam1->f_8 = 0;
						}
						else
						{
							uParam1->f_11 = { Var27[4 /*3*/] };
							uParam1->f_8 = 1;
						}
						bVar4 = true;
						uParam1->f_7 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var0, uParam1->f_11);
				if (uParam1->f_7 || (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && (fVar3 > 4f || !bVar6)))
				{
					if (GlobalFunc_537(uParam1->f_11, Var11[4 /*3*/], 1056964608))
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -126f, 2f, 2, 0, 1, 1);
					}
					else
					{
						func_677(uParam0, &(uParam1->f_2), uParam1->f_11, -122.7f, 2f, 0, 2, 1, 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					if (fVar3 > 4f && !bVar4)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, uParam1->f_11, -553.1f, 5258.8f, 73.3f, 2f, 0, 0.5f, 0.5f, 1, 5, 1, -957453492);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					uParam1->f_7 = 0;
				}
				if (fVar3 < 25f)
				{
					if (!func_447(*uParam0, -566.3613f, 5256.459f, 69.467f, 1101004800) && PED::IS_PED_INJURED(Local_1407[0 /*21*/]))
					{
						if (*uParam0 == uLocal_387[1])
						{
							iLocal_381 = 4;
						}
						else if (*uParam0 == uLocal_387[2])
						{
							iLocal_380 = 4;
						}
						uParam1->f_3 = 0;
						uParam1->f_9 = 1;
						uParam1->f_7 = 1;
					}
				}
				break;
			}
	}
}

void func_682(var uParam0, var uParam1)//Position - 0x7501F
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	var uVar15[2];
	int iVar18[4];
	bool bVar23;
	int iVar24;
	
	bVar0 = false;
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_307);
			if (PED::IS_PED_IN_VEHICLE(*uParam0, Local_1898.x, 0))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_307))
				{
					bVar7 = false;
					if (iLocal_384 == 1)
					{
						Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1898.x, Var4) };
						if (Var8.f_1 < 6f && Var8.f_1 > 3f)
						{
							if (MISC::ABSF(Var8.x) < 1.25f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -2118855366) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_1898.x) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(*uParam0, Local_1898.x, 24, -1);
									}
								}
								bVar7 = true;
							}
						}
					}
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1898.x))
					{
						if (!iLocal_118 && !bVar7)
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(Local_1898.x, 1), &iVar11);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*uParam0, Local_1898.x, sLocal_307, 262144, iVar11 + 2, 32, -1, -1082130432, 0, 1073741824);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
							fLocal_300 = 4f;
						}
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(Local_1898.x, 1), &iVar12);
						if ((MISC::GET_GAME_TIMER() - iLocal_277) > 2000 && (MISC::GET_GAME_TIMER() - iLocal_277) < 5200)
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_1898.x, 0.9f, 0);
						}
						else if (iVar12 > 10 && iVar12 < 25)
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_1898.x, 0.05f, 0);
						}
						else
						{
							VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_1898.x, 0.1f, 0);
						}
						if (iLocal_384 == 1)
						{
							if (iVar12 > 9)
							{
								fVar13 = Var8.f_1;
								fVar14 = 4f;
								if (iVar12 < 17)
								{
									if (fVar13 < -2f)
									{
										fVar14 = 1f;
									}
									else
									{
										fVar14 = 4f;
									}
								}
								else if (fVar13 < -2f)
								{
									fVar14 = 5f;
								}
								else if (fVar14 == 10f)
								{
								}
								fLocal_300 = (fLocal_300 + ((((fVar14 - fLocal_300) * 0.01f) * 30f) * SYSTEM::TIMESTEP()));
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(*uParam0, fLocal_300);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1898.x, -512.4296f, 5258.325f, 79.60999f, -515.066f, 5217.234f, 83.78638f, 8f, 0, 1, 0))
					{
						iLocal_118 = 1;
						bVar0 = true;
					}
					PED::GET_PED_NEARBY_VEHICLES(*uParam0, &uVar15);
					PED::GET_PED_NEARBY_PEDS(*uParam0, &iVar18, -1);
					if (((MISC::GET_GAME_TIMER() - iLocal_279) > 10000 && *uParam0 == uLocal_387[2]) && SYSTEM::VDIST2(Var4, Var1) < 625f)
					{
						bVar23 = false;
						iVar24 = 0;
						iVar24 = 0;
						while (iVar24 < iVar18)
						{
							if (!PED::IS_PED_INJURED(iVar18[iVar24]) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar18[iVar24]) == iLocal_1901)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar18[iVar24], 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1898.x, -1.9927f, -0.0424f, 0.8947f)) < 9f)
								{
									bVar23 = true;
								}
							}
							iVar24++;
						}
						if (bVar23)
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_jack", 7, 0, 0, 0))
							{
								iLocal_279 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uVar15[1]) && uVar15[1] != Local_1898.x)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar15[1], 1), Var1) < 100f)
						{
							if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uVar15[1]) > 0f)
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1898.x, uVar15[1]))
								{
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uVar15[1], 0f);
									iLocal_277 = MISC::GET_GAME_TIMER();
								}
							}
							else if (*uParam0 == uLocal_387[2])
							{
								if (SYSTEM::VDIST2(Var4, Var1) < 625f)
								{
									if (!iLocal_133[87])
									{
										if (SYSTEM::VDIST2(Var1, -563.1f, 5375.6f, 69.8f) < 400f)
										{
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_move", 7, 0, 0, 0))
											{
												iLocal_133[87] = 1;
											}
										}
									}
									else if (!iLocal_133[88])
									{
										if (SYSTEM::VDIST2(Var1, -584.2f, 5312.7f, 69.8f) < 400f)
										{
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_move2", 7, 0, 0, 0))
											{
												iLocal_133[88] = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_384 == 1)
					{
						PED::SET_PED_CONFIG_FLAG(*uParam0, 119, 1);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(*uParam0, 119, 0);
					}
					switch (Local_1898.f_2)
					{
						case 0:
							if (Local_1407[0 /*21*/].f_3)
							{
								if (iLocal_276 != 0)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_276) > 1500)
									{
										bVar0 = true;
									}
								}
							}
							break;
						
						case 1:
							break;
						}
				}
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
			if (SYSTEM::VDIST2(Var1, -512.4296f, 5258.325f, 79.60999f) < 6400f && PED::IS_PED_INJURED(Local_1407[0 /*21*/]))
			{
				if (*uParam0 == uLocal_387[1])
				{
					iLocal_381 = 4;
				}
				else
				{
					iLocal_380 = 4;
				}
			}
			else if (*uParam0 == uLocal_387[1])
			{
				iLocal_381 = 1;
			}
			else
			{
				iLocal_380 = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1898.x, 0);
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 119, 0);
			uParam1->f_3 = 0;
			uParam1->f_9 = 1;
			uParam1->f_7 = 1;
		}
	}
}

void func_683(var uParam0, var uParam1)//Position - 0x75557
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("weapon_heavysniper"), 0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar1, 1);
			if (iVar1 != joaat("weapon_heavysniper"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_heavysniper"), 0);
			}
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(*uParam0, joaat("weapon_heavysniper")) < 5)
			{
				WEAPON::ADD_AMMO_TO_PED(*uParam0, joaat("weapon_heavysniper"), 5);
			}
		}
		uParam1->f_11 = { Local_81 };
		if (uParam1->f_9)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar5 = SYSTEM::VDIST2(uParam1->f_11, Var2);
			if (fVar5 > 4f)
			{
				if (GlobalFunc_579())
				{
					ENTITY::SET_ENTITY_COORDS(*uParam0, uParam1->f_11, 1, 0, 0, 1);
				}
			}
			uParam1->f_7 = 1;
			uParam1->f_9 = 0;
		}
		if (bLocal_103)
		{
			if (iLocal_255 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 && !PED::IS_PED_IN_COMBAT(*uParam0, 0)) || uParam1->f_7)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam1->f_11, 2f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (SYSTEM::VDIST2(uParam1->f_11, ENTITY::GET_ENTITY_COORDS(*uParam0, 1)) > 100f)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_11, 2f, 60000, 1048576000, 4, 40000f);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 1000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_COMBAT_FLOAT(*uParam0, 2, 500f);
					PED::SET_PED_STEALTH_MOVEMENT(*uParam0, 0, 0);
					uParam1->f_7 = 0;
				}
			}
		}
	}
}

void func_684()//Position - 0x756D7
{
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_484.f_1))
		{
			Local_484.f_1 = GlobalFunc_6783(uLocal_387[1], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_484.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_484.f_1));
	}
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_470.f_1))
		{
			Local_470.f_1 = GlobalFunc_6783(uLocal_387[0], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_470.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_470.f_1));
	}
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_456.f_1))
		{
			Local_456.f_1 = GlobalFunc_6783(uLocal_387[2], 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_456.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_456.f_1));
	}
}

void func_685()//Position - 0x757AB
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6[16];
	struct<3> Var23;
	float fVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	
	iVar3 = -1;
	iVar4 = 0;
	bVar5 = true;
	if (iLocal_378 == 0)
	{
		if (!iLocal_128)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		}
	}
	switch (iLocal_255)
	{
		case 0:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				bVar5 = false;
			}
			if (!PED::IS_PED_INJURED(uLocal_387[1]))
			{
				if (!Local_484.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_387[1]))
					{
						GlobalFunc_729(&uLocal_387, 1, 1);
						Local_484.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_387[1]))
				{
					GlobalFunc_729(&uLocal_387, 1, 0);
					Local_484.f_10 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				if (!Local_456.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_387[2]))
					{
						GlobalFunc_729(&uLocal_387, 2, 1);
						Local_456.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_387[2]))
				{
					GlobalFunc_729(&uLocal_387, 2, 0);
					Local_456.f_10 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				if (!Local_470.f_10)
				{
					if (FIRE::IS_ENTITY_ON_FIRE(uLocal_387[0]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), Local_81) > 16f)
					{
						GlobalFunc_729(&uLocal_387, 0, 1);
						Local_470.f_10 = 1;
					}
				}
				else if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_387[0]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), Local_81) < 16f)
				{
					GlobalFunc_729(&uLocal_387, 0, 0);
					Local_470.f_10 = 0;
				}
			}
			if (bVar5)
			{
				if (GlobalFunc_10061(&uLocal_387, 1, 1))
				{
					HUD::CLEAR_HELP(1);
					CAM::DESTROY_ALL_CAMS(0);
					GlobalFunc_565(369, 1, 0);
					Local_2068.f_12 = uLocal_387[uLocal_387.f_7];
					iLocal_256 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					if (uLocal_387.f_7 == 2)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
						{
							AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_TREVOR"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_TREVOR");
					}
					if (uLocal_387.f_7 == 0)
					{
						if (!PED::IS_PED_INJURED(uLocal_387[0]))
						{
							PED::GET_PED_NEARBY_PEDS(uLocal_387[0], &iVar6, -1);
							iVar4 = 0;
							while (iVar4 < iVar6)
							{
								if (iVar3 == -1)
								{
									if (!PED::IS_PED_INJURED(iVar6[iVar4]))
									{
										if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar6[iVar4]) == iLocal_1901)
										{
											iVar3 = iVar4;
										}
									}
								}
								iVar4++;
							}
							if (iLocal_123 && !PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
							{
								Local_90 = { ENTITY::GET_ENTITY_COORDS(Local_1429[0 /*21*/], 0) + Vector(3f, 0f, -1f) };
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_387[0], Local_90, -1, 1, 0);
							}
							else if (iLocal_124 && !PED::IS_PED_INJURED(Local_1407[0 /*21*/]))
							{
								Local_90 = { ENTITY::GET_ENTITY_COORDS(Local_1407[0 /*21*/], 0) + Vector(-3f, 0f, 1f) };
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_387[0], Local_90, -1, 1, 0);
							}
							else
							{
								if (iVar3 == -1)
								{
									Local_90 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								}
								else
								{
									Local_90 = { ENTITY::GET_ENTITY_COORDS(iVar6[iVar3], 0) };
								}
								TASK::TASK_AIM_GUN_AT_COORD(uLocal_387[0], Local_90, -1, 1, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[0], 1);
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
						{
							AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_MICHAEL"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_MICHAEL");
					}
					bLocal_130 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -489.7256f, 5408.618f, 49.59518f, -570.1348f, 5210.887f, 122.6099f, 188.75f, 0, 1, 0);
					if (bLocal_130)
					{
						if (!PED::IS_PED_INJURED(uLocal_387[uLocal_387.f_7]))
						{
							if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								Var23 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(uLocal_387[uLocal_387.f_7]) };
								STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(uLocal_387[uLocal_387.f_7], 1), GlobalFunc_590(Var23), 50f, 2);
							}
						}
					}
					iLocal_255++;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_257) > 1000)
			{
				if (iLocal_378 == 1)
				{
					if (Local_484.f_2 != 0)
					{
						if (SYSTEM::VDIST2(Local_484.f_11, Var0) > 9f)
						{
							TASK::REMOVE_COVER_POINT(Local_484.f_2);
							Local_484.f_11 = { 0f, 0f, 0f };
						}
					}
				}
				else if (iLocal_378 == 0)
				{
					if (Local_470.f_2 != 0)
					{
						if (SYSTEM::VDIST2(Local_470.f_11, Var0) > 9f)
						{
							TASK::REMOVE_COVER_POINT(Local_470.f_2);
							Local_470.f_11 = { 0f, 0f, 0f };
						}
					}
				}
				else if (Local_456.f_2 != 0)
				{
					if (SYSTEM::VDIST2(Local_456.f_11, Var0) > 9f)
					{
						TASK::REMOVE_COVER_POINT(Local_456.f_2);
						Local_456.f_11 = { 0f, 0f, 0f };
					}
				}
			}
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			if (iLocal_378 == 0 && iLocal_128)
			{
			}
			if ((bLocal_130 && !func_688(&Local_2068, 0, 1148829696, 1148829696)) || (!bLocal_130 && !func_655(&Local_2068, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0)))
			{
				if (iLocal_378 == 0)
				{
					if (iLocal_128)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
						PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
					}
					else
					{
						if (!GlobalFunc_537(Local_90, 0f, 0f, 0f, 1056964608))
						{
							fVar26 = func_687(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_90);
							CAM::_SET_FIRST_PERSON_CAM_PITCH_RANGE((fVar26 - 0.5f), (fVar26 + 0.5f));
						}
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
						PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
					}
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_257 = MISC::GET_GAME_TIMER();
				iLocal_255 = 0;
			}
			else if (Local_2068.f_18)
			{
				if (!Local_2068.f_19)
				{
					if (func_195(&uLocal_387, 1, 1, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (!PED::IS_PED_INJURED(uLocal_387[uLocal_387.f_5]))
						{
							if (iLocal_256 < 110)
							{
								iLocal_256 = 110;
							}
							PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[uLocal_387.f_5], 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[uLocal_387.f_5], 0);
							PED::SET_PED_DIES_WHEN_INJURED(uLocal_387[uLocal_387.f_5], 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[uLocal_387.f_5], 1862763509);
							func_439(&(uLocal_387[uLocal_387.f_5]), 5, 1, 2, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 12, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 29, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 36, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 35, 1);
							PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 118, 0);
							PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 185, 1);
							PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 188, 1);
							ENTITY::SET_ENTITY_PROOFS(uLocal_387[uLocal_387.f_5], 0, 1, 0, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_HEALTH(uLocal_387[uLocal_387.f_5], iLocal_256);
							GlobalFunc_2903(uLocal_387[uLocal_387.f_5], 1800);
							PED::SET_PED_USING_ACTION_MODE(uLocal_387[uLocal_387.f_5], 1, -1, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[uLocal_387.f_5], 33497);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[uLocal_387.f_5], 1);
							if (iLocal_376 == 4 || iLocal_376 == 5)
							{
								if (uLocal_387.f_5 == 0)
								{
									iLocal_379 = func_686(uLocal_387[uLocal_387.f_5]);
									Local_470.f_9 = 1;
								}
								else if (uLocal_387.f_5 == 1)
								{
									iLocal_381 = func_686(uLocal_387[uLocal_387.f_5]);
									Local_484.f_9 = 1;
									if ((MISC::GET_GAME_TIMER() - iLocal_271) > 17000)
									{
										iLocal_271 = (MISC::GET_GAME_TIMER() - 17000);
									}
								}
								else if (uLocal_387.f_5 == 2)
								{
									iLocal_380 = func_686(uLocal_387[uLocal_387.f_5]);
									Local_456.f_9 = 1;
									if ((MISC::GET_GAME_TIMER() - iLocal_272) > 17000)
									{
										iLocal_272 = (MISC::GET_GAME_TIMER() - 17000);
									}
								}
							}
							if (uLocal_387.f_5 != 0)
							{
								if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 0);
									if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle")) < 50)
									{
										WEAPON::ADD_AMMO_TO_PED(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 50);
									}
								}
							}
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
						func_191();
						func_723();
						iLocal_378 = uLocal_387.f_6;
						if (iLocal_378 == 0)
						{
							Local_470.f_11 = { 0f, 0f, 0f };
						}
						else
						{
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
							PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
							if (iLocal_378 == 1)
							{
								Var27 = { Local_484.f_11 };
							}
							else if (iLocal_378 == 2)
							{
								Var27 = { Local_456.f_11 };
							}
							if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Var27))
							{
								fVar30 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[uLocal_387.f_5], 1), Var27);
								fVar31 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var27);
								if ((fVar31 < fVar30 && fVar30 > 100f) && fVar31 < 4f)
								{
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Var27, 1500, 0, 0f, 0, 0, 0, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
							}
							if (iLocal_378 == 1)
							{
								Local_484.f_11 = { 0f, 0f, 0f };
							}
							else if (iLocal_378 == 2)
							{
								Local_456.f_11 = { 0f, 0f, 0f };
							}
						}
						Local_2068.f_19 = 1;
					}
				}
			}
			break;
	}
}

int func_686(int iParam0)//Position - 0x7611C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 5;
	if (((!PED::IS_PED_INJURED(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_304)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_306)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_305))
	{
		if (GlobalFunc_4917(0) == ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			iVar0 = 2;
		}
		else
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_304, Var4, &iVar1);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_306, Var4, &iVar2);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_305, Var4, &iVar3);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_304, iVar1, &Var7);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_306, iVar2, &Var10);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_305, iVar3, &Var13);
			fVar16 = SYSTEM::VDIST2(Var4, Var7);
			fVar17 = SYSTEM::VDIST2(Var4, Var10);
			fVar18 = SYSTEM::VDIST2(Var4, Var13);
			if (fVar16 < fVar17)
			{
				if (fVar16 < fVar18)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 3;
				}
			}
			else if (fVar17 < fVar18)
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = 3;
			}
			if (iVar0 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_SITTING_IN_VEHICLE(iParam0, Local_1898.x))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

var func_687(struct<3> Param0, struct<3> Param3)//Position - 0x7623D
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param3 - Param0 };
	Var3 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	return MISC::ATAN2(Var3.f_2, SYSTEM::VMAG(Var3.x, Var3.f_1, 0f));
}

int func_688(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x76277
{
	return func_656(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

























void func_713()//Position - 0x77B39
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!PED::IS_PED_INJURED(Local_498))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_498, 1) };
		if (SYSTEM::VDIST2(Var0, Var3) < 400f)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_261) > 0 && (MISC::GET_GAME_TIMER() - iLocal_265) > 0)
			{
				if ((iLocal_133[25] && (iLocal_133[20] || !iLocal_133[19])) || !Global_86816)
				{
					if (iLocal_378 == 1)
					{
						if (func_714())
						{
							iLocal_265 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
							iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
						}
					}
					else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_SPEAK", 7, 0, 0, 0))
					{
						iLocal_265 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
						iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
					}
				}
			}
			if (iLocal_133[19])
			{
				if (!iLocal_133[20] && iLocal_378 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_289) < 13000)
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_LHEARM", 7, 0, 0, 0))
						{
							iLocal_133[20] = 1;
						}
					}
					else
					{
						iLocal_133[20] = 1;
					}
				}
				if (!iLocal_133[21] && iLocal_378 != 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -486.6962f, 5309.811f, 86.64392f, 22.25f, 2.5f, 7.5f, 0, 1, 0))
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_WAY", 7, 0, 0, 0))
						{
							iLocal_133[21] = 1;
						}
					}
				}
			}
		}
	}
}

int func_714()//Position - 0x77CE6
{
	int iVar0;
	struct<2> Var1;
	int iVar5;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	StringCopy(&Var1, "", 16);
	switch (iVar0)
	{
		case 0:
			StringConCat(&Var1, "LM2_SH1", 16);
			iVar5 = 26;
			break;
		
		case 1:
			StringConCat(&Var1, "LM2_SH2", 16);
			iVar5 = 27;
			break;
		
		case 2:
			StringConCat(&Var1, "LM2_SH3", 16);
			iVar5 = 28;
			break;
		
		case 3:
			StringConCat(&Var1, "LM2_SH4", 16);
			iVar5 = 29;
			break;
		
		case 4:
			StringConCat(&Var1, "LM2_SH5", 16);
			iVar5 = 30;
			break;
		
		case 5:
			StringConCat(&Var1, "LM2_SH6", 16);
			iVar5 = 31;
			break;
		
		case 6:
			StringConCat(&Var1, "LM2_SH7", 16);
			iVar5 = 32;
			break;
		
		case 7:
			StringConCat(&Var1, "LM2_SH8", 16);
			iVar5 = 33;
			break;
	}
	if (!iLocal_133[iVar5])
	{
		if (GlobalFunc_10618(&Local_1903, "LEM2AUD", &Var1, 7, 0, 0, 0))
		{
			iLocal_133[iVar5] = 1;
			return 1;
		}
	}
	return 0;
}

void func_715()//Position - 0x77DE0
{
	int iVar0;
	int iVar1[5];
	struct<2> Var7;
	struct<2> Var11;
	int iVar15;
	struct<3> Var16;
	int iVar19;
	
	iVar15 = 0;
	Var16 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar19 = 0;
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		iVar0 = uLocal_387[2];
		if (iLocal_378 != 0)
		{
			if (!iLocal_133[3] && iLocal_376 < 5)
			{
				if ((!iLocal_133[89] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0)) && PED::IS_PED_IN_VEHICLE(iVar0, Local_1898.x, 0))
				{
					StringCopy(&Var7, "LM2_driveT", 16);
				}
				else
				{
					StringCopy(&Var7, "LM2_drive", 16);
				}
				StringCopy(&Var11, "LM2_FRANGEN", 16);
			}
			if (iLocal_376 == 5)
			{
				StringCopy(&Var7, "LM2_TRVATT", 16);
			}
		}
	}
	else if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		iVar0 = uLocal_387[1];
		if (iLocal_378 != 0)
		{
			if (!iLocal_133[3] && iLocal_376 < 5)
			{
				StringCopy(&Var7, "LM2_FRANGEN", 16);
				StringCopy(&Var11, "LM2_drive", 16);
			}
			if (iLocal_376 == 5)
			{
				StringCopy(&Var11, "LM2_TRVATT", 16);
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_261) > 0 && !GlobalFunc_579())
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_262) > 0)
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar1, -1);
			iVar19 = 0;
			while (iVar19 < iVar1)
			{
				if (!PED::IS_PED_INJURED(iVar1[iVar19]))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1[iVar19]) == iLocal_370)
					{
						if (SYSTEM::VDIST2(Var16, ENTITY::GET_ENTITY_COORDS(iVar1[iVar19], 1)) < 10000f)
						{
							iVar15 = 1;
						}
					}
				}
				iVar19++;
			}
			if (iVar15 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var11))
				{
					if (GlobalFunc_10618(&Local_1903, "LEM2AUD", &Var11, 7, 0, 0, 0))
					{
						iLocal_262 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
						iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_263) > 0)
		{
			if (!PED::IS_PED_INJURED(iVar0))
			{
				if ((((PED::IS_PED_SHOOTING(iVar0) || PED::IS_PED_IN_COMBAT(iVar0, 0)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(iVar0, Local_1898.x, 0))) && !PED::IS_PED_RAGDOLL(iVar0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Var16) < 625f)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", &Var7, 7, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(iVar0, Local_1898.x, 0))
							{
								iLocal_263 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 19000));
							}
							else
							{
								iLocal_263 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
							}
							if (MISC::ARE_STRINGS_EQUAL(&Var7, "LM2_driveT"))
							{
								iLocal_133[89] = 1;
							}
							iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
						}
					}
				}
			}
		}
		if ((((Global_86816 && iLocal_376 == 4) && iLocal_378 != 0) && !HUD::DOES_BLIP_EXIST(Local_498.f_1)) && !PED::IS_PED_INJURED(iVar0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_264) > 0)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Var16) > 2500f)
				{
					if (!PED::IS_PED_INJURED(uLocal_387[1]))
					{
						if (!iLocal_133[90])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_ANYSIGN", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[90] = 1;
							}
						}
						else if (!iLocal_133[91])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_ANYSIGN2", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[91] = 1;
							}
						}
						else if (!iLocal_133[92])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_ANYSIGN3", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[92] = 1;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uLocal_387[2]))
					{
						if (!iLocal_133[93])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FOUND", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[93] = 1;
							}
						}
						else if (!iLocal_133[94])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FOUND2", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[94] = 1;
							}
						}
						else if (!iLocal_133[95])
						{
							if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FOUND3", 7, 0, 0, 0))
							{
								iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(35000, 40000));
								iLocal_261 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500));
								iLocal_133[95] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_133[96] && iLocal_376 == 4)
	{
		if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1), -579f, 5304.6f, 70.1f) < 100f)
			{
				if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_WEEDT", 7, 0, 0, 0))
				{
					iLocal_133[96] = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(uLocal_387[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[1], 1), -579f, 5304.6f, 70.1f) < 100f)
			{
				if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_WEEDF", 7, 0, 0, 0))
				{
					iLocal_133[96] = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		if (iLocal_268 > 0 && (MISC::GET_GAME_TIMER() - iLocal_268) < 1500)
		{
			if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_mikill", 7, 0, 0, 0))
			{
				iLocal_268 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		if ((iLocal_269 > 0 && (MISC::GET_GAME_TIMER() - iLocal_269) < 1500) && iLocal_378 == 0)
		{
			if (iLocal_381 == 4 || iLocal_376 == 5)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_387[1]))
				{
					if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_frkill", 7, 0, 0, 0))
					{
						iLocal_269 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	if (iLocal_378 == 0)
	{
		if (!GlobalFunc_579() && !iLocal_133[4])
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_285 = MISC::GET_GAME_TIMER();
				iLocal_133[85] = 0;
				iLocal_133[86] = 0;
			}
			else if (iLocal_380 == 4 || iLocal_376 == 5)
			{
				if (!iLocal_133[85])
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_285) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_272) > 10000)
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_enc1", 7, 0, 0, 0))
						{
							iLocal_133[85] = 1;
						}
					}
				}
				else if (!iLocal_133[86])
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_285) > 17000 && uLocal_387.f_13[2])
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_enc2", 7, 0, 0, 0))
						{
							iLocal_133[86] = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_285 = MISC::GET_GAME_TIMER();
	}
}

void func_716()//Position - 0x78562
{
	if (((iLocal_378 == 0 && PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()) && GlobalFunc_752(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_579())
	{
		if (!iLocal_133[97])
		{
			if ((((PAD::IS_CONTROL_PRESSED(0, 42) || PAD::IS_CONTROL_PRESSED(0, 43)) || PAD::IS_CONTROL_PRESSED(0, 274)) || PAD::IS_CONTROL_PRESSED(0, 275)) || (MISC::GET_GAME_TIMER() - iLocal_291) > 2000)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (MISC::IS_PC_VERSION())
					{
						if (!PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("FRAN2_SNIPEHELP", 20000);
						}
						else
						{
							GlobalFunc_159("FRAN2_SNIPEHELP_KM", 20000);
						}
					}
					else
					{
						GlobalFunc_159("FRAN2_SNIPEHELP", 20000);
					}
					iLocal_133[97] = 1;
				}
			}
		}
	}
	else
	{
		if (GlobalFunc_74("FRAN2_SNIPEHELP") && !PAD::IS_CONTROL_PRESSED(0, 25))
		{
			HUD::CLEAR_HELP(1);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (GlobalFunc_74("FRAN2_SNIPEHELP_KM") && !PAD::IS_CONTROL_PRESSED(0, 25))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		iLocal_291 = MISC::GET_GAME_TIMER();
	}
}



void func_719()//Position - 0x786A1
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1898.x))
	{
		if (Global_86816)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
			{
				if (!iLocal_118)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x))
					{
						if (GlobalFunc_579() && bLocal_103)
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1898.x, 2f);
						}
					}
					else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1898.x, -1))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 1);
					}
					else
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 0);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
		{
			if (!iLocal_119)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1898.x, "FRANKLIN_2_BULLDOZER_Group", 0);
				iLocal_119 = 1;
			}
		}
		else if (iLocal_119)
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1898.x, 0);
			iLocal_119 = 0;
		}
		if (!iLocal_131)
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_1898.x) > 2f)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_1898.x, 0);
				iLocal_131 = 1;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(Local_1898.x) < 0.5f)
		{
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_1898.x, 1);
			iLocal_131 = 0;
		}
	}
}

void func_720(int iParam0)//Position - 0x78785
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (iLocal_376 == 4)
		{
			switch (iLocal_266)
			{
				case 0:
					if (!bLocal_105)
					{
						bLocal_105 = func_590(func_428(1), func_428(2), 0, -558.1774f, 5305.12f, 67.82993f, -580.6056f, 5263.624f, 88.29326f, 4f);
					}
					break;
				
				case 1:
					if (!bLocal_105)
					{
						bLocal_105 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_428(1), -581.0774f, 5263.983f, 61.98342f, -566.5982f, 5254.708f, 74.50262f, 4f, 0, 1, 0);
					}
					break;
				
				case 2:
					if (!bLocal_106)
					{
						bLocal_106 = func_590(func_428(1), func_428(2), 0, -513.9818f, 5303.33f, 74.58913f, -531.8288f, 5254.358f, 78.01054f, 1.75f);
					}
					break;
				
				case 3:
					if (!bLocal_106)
					{
						bLocal_106 = func_590(func_428(1), func_428(2), 0, -531.574f, 5253.478f, 74.83571f, -541.5794f, 5225.216f, 78.37697f, 1.75f);
					}
					break;
				
				case 4:
					if (!iLocal_108)
					{
						if (!PED::IS_PED_INJURED(func_428(1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_428(1), -578.9755f, 5378.433f, 68.78147f, -531.7402f, 5358.952f, 83.43629f, 10.5f, 0, 1, 0))
						{
							if (iLocal_378 == 1)
							{
								iLocal_108 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(uLocal_387[1], Local_1898.x, 0))
							{
								if (iLocal_384 == 1)
								{
									iLocal_108 = 1;
								}
							}
							else
							{
								iLocal_108 = 1;
							}
						}
						else if (!PED::IS_PED_INJURED(func_428(2)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_428(2), -578.9755f, 5378.433f, 68.78147f, -531.7402f, 5358.952f, 83.43629f, 10.5f, 0, 1, 0))
						{
							if (iLocal_378 == 2)
							{
								iLocal_108 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0))
							{
								if (iLocal_384 == 1)
								{
									iLocal_108 = 1;
								}
							}
							else
							{
								iLocal_108 = 1;
							}
						}
					}
					break;
				
				case 5:
					iLocal_109 = func_590(func_428(1), func_428(2), 0, -547.7983f, 5327.897f, 83.81184f, -621.1396f, 5351.127f, 65.21111f, 10.5f);
					if (!iLocal_109)
					{
						if (!PED::IS_PED_INJURED(func_428(1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_428(1), -547.7983f, 5327.897f, 83.81184f, -621.1396f, 5351.127f, 65.21111f, 10.5f, 0, 1, 0))
						{
							if (iLocal_378 == 1)
							{
								iLocal_109 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(uLocal_387[1], Local_1898.x, 0))
							{
								if (iLocal_384 == 1)
								{
									iLocal_109 = 1;
								}
							}
							else
							{
								iLocal_109 = 1;
							}
						}
						else if (!PED::IS_PED_INJURED(func_428(2)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_428(2), -547.7983f, 5327.897f, 83.81184f, -621.1396f, 5351.127f, 65.21111f, 10.5f, 0, 1, 0))
						{
							if (iLocal_378 == 2)
							{
								iLocal_109 = 1;
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0))
							{
								if (iLocal_384 == 1)
								{
									iLocal_109 = 1;
								}
							}
							else
							{
								iLocal_109 = 1;
							}
						}
					}
					break;
				
				case 6:
					if (!bLocal_112)
					{
						bLocal_112 = func_590(func_428(1), func_428(2), 0, -421.0383f, 5325.92f, 105.3374f, -516.91f, 5335.937f, 63.6036f, 18.5f);
					}
					break;
				
				case 7:
					if (!bLocal_113)
					{
						bLocal_113 = func_590(func_428(1), func_428(2), 0, -439.4734f, 5303.473f, 98.53514f, -518.608f, 5324.277f, 79.13394f, 9.25f);
					}
					break;
				
				case 8:
					if (!bLocal_107)
					{
						bLocal_107 = func_590(func_428(1), func_428(2), 0, -538.5012f, 5288.443f, 72.86422f, -462.7944f, 5238.157f, 99.61439f, 9.25f);
					}
					break;
				
				case 9:
					if (!bLocal_116)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
						{
							bLocal_116 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1898.x, -558.2652f, 5294.501f, 69.13866f, -629.7462f, 5269.548f, 82.58392f, 4.25f, 0, 1, 0);
						}
					}
					break;
				
				case 10:
					if (!bLocal_117)
					{
						bLocal_117 = func_590(func_428(1), func_428(2), 0, -563.0012f, 5294.142f, 83.10332f, -615.7786f, 5313.24f, 66.2598f, 7f);
					}
					break;
				
				case 11:
					if (!bLocal_111)
					{
						bLocal_111 = func_590(func_428(1), func_428(2), 0, -512.3232f, 5297.808f, 75.35219f, -528.5533f, 5122.547f, 114.4076f, 11f);
					}
					break;
				
				case 12:
					if (!bLocal_110)
					{
						bLocal_110 = func_590(func_428(1), func_428(2), 0, -563.6938f, 5225.04f, 66.89445f, -556.4073f, 5290.143f, 95.39075f, 7.25f);
					}
					break;
				
				case 13:
					if (!bLocal_110)
					{
						bLocal_110 = func_590(func_428(1), func_428(2), 0, -588.4457f, 5264.124f, 56.39957f, -546.9515f, 5244.38f, 85.20131f, 7.25f);
					}
					break;
			}
			iLocal_266++;
			if (iLocal_266 > 13)
			{
				iLocal_266 = 0;
			}
		}
		else if (iLocal_376 == 5)
		{
			switch (iLocal_266)
			{
				case 0:
					if (!bLocal_114)
					{
						bLocal_114 = func_590(func_428(1), func_428(2), 0, -450.69f, 5276.055f, 94.35943f, -533.6469f, 5304.58f, 72.32547f, 2.5f);
					}
					break;
				
				case 1:
					if (!bLocal_115)
					{
						bLocal_115 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.3373f, 5469.929f, 56.10997f, -431.0008f, 5025.956f, 204.0172f, 8.5f, 0, 1, 0);
					}
					break;
				
				case 2:
					if (iLocal_378 == 0)
					{
						bLocal_115 = (((func_590(func_428(1), func_428(2), 0, -566.7373f, 5383.929f, 68.10997f, -488.8008f, 5165.156f, 104.0172f, 8.5f) && func_431(&Local_1044) == 0) && func_431(&Local_1108) == 0) && func_431(&Local_1685) < 3);
					}
					break;
			}
			iLocal_266++;
			if (iLocal_266 > 2)
			{
				iLocal_266 = 0;
			}
		}
		iVar0++;
	}
}


void func_722()//Position - 0x78E53
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iLocal_348)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_348[iVar3]))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iLocal_348[iVar3]) };
			OBJECT::REMOVE_PICKUP(iLocal_348[iVar3]);
			MISC::CLEAR_AREA(Var0, 2f, 1, 0, 0, 0);
		}
		iVar3++;
	}
	iVar4 = 0;
	MISC::SET_BIT(&iVar4, 1);
	MISC::SET_BIT(&iVar4, 5);
	iLocal_348[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), -515.1648f, 5307.256f, 80.2493f, 0f, 0f, -18.36f, iVar4, -1, 2, 1, 0);
	iLocal_348[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), -468.34f, 5355.3f, 79.85f, 0f, 0f, -50.4f, iVar4, -1, 2, 1, 0);
	iLocal_348[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), -523.61f, 5289.89f, 73.281f, -90f, 0f, -58.2f, iVar4, -1, 2, 1, 0);
}

void func_723()//Position - 0x78F3D
{
	if (!PED::IS_PED_INJURED(uLocal_387[0]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_387[0], "FRANKLIN_2_BUDDIES_GROUP", 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[1]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_387[1], "FRANKLIN_2_BUDDIES_GROUP", 0);
	}
	if (!PED::IS_PED_INJURED(uLocal_387[2]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_387[2], "FRANKLIN_2_BUDDIES_GROUP", 0);
	}
	AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
}

int func_724(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x78FA8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1898.x))
	{
		STREAMING::REQUEST_MODEL(iLocal_369);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_369))
		{
			if (bParam4)
			{
				return 1;
			}
			else
			{
				Local_1898.x = VEHICLE::CREATE_VEHICLE(iLocal_369, Param0, fParam3, 1, 1);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1898.x, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_1898.x, 1, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1898.x, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(Local_1898.x, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1898.x, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1898.x, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1898.x, "FRANKLIN_2_BULLDOZER_Group", 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1898.x, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
				VEHICLE::SET_VEHICLE_BULLDOZER_ARM_POSITION(Local_1898.x, 0.1f, 0);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_1898.x, 1);
				Local_1898.f_2 = 0;
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

void func_725()//Position - 0x79069
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	int iVar9;
	
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(-591.813f, 5236.349f, 69.8739f, 321.3476f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -591.813f, 5236.349f, 69.8739f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 321.3476f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_651();
			if (Global_86816)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_387[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_354)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					func_650(Local_81, fLocal_298, 0);
					func_647(-487.0432f, 5385.613f, 77.1299f, 189.1107f, 0);
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
					SYSTEM::WAIT(0);
				}
				func_631();
				func_630();
			}
			while ((((!func_592(Local_87, fLocal_299) || !ENTITY::DOES_ENTITY_EXIST(Local_1898.x)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_337[0])) || !Local_512[0 /*21*/].f_3) || !bLocal_102)
			{
				func_584();
				func_724(Local_63, fLocal_296, 0);
				func_583();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5108(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 5000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_387[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[0])) || PED::IS_PED_INJURED(uLocal_387[0]))) && ((!PED::IS_PED_INJURED(uLocal_387[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[1])) || PED::IS_PED_INJURED(uLocal_387[1]))) && ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[2])) || PED::IS_PED_INJURED(uLocal_387[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[0], 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[2], 1);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			GlobalFunc_6415(1);
			func_580(1);
			func_579(1);
			func_578();
			func_723();
			func_722();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_378 = 1;
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_304);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_306);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
		if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_304) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_306)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_305))
		{
			func_651();
			GlobalFunc_6415(1);
			func_580(1);
			GlobalFunc_2518(&uLocal_387, 0, 0);
			func_726();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 1);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_STEALTH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_STEALTH");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_ALERT"))
			{
				AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_ALERT");
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -591.813f, 5236.349f, 69.8739f, -1, 0, 0f, 0, 0, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				func_533();
				AUDIO::TRIGGER_MUSIC_EVENT("FRA2_ATTACK_RT");
				SYSTEM::WAIT(500);
				GlobalFunc_2204();
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FRA2_ALERTED");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_254 = 0;
			iLocal_377 = 1;
		}
	}
	if (iLocal_377 == 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iLocal_384 = func_686(PLAYER::PLAYER_PED_ID());
		func_720(3);
		func_584();
		func_444();
		if (Global_86816)
		{
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_304);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_306);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
			func_685();
			func_674();
			func_684();
			func_719();
			func_716();
		}
		if (bLocal_104)
		{
			iLocal_377 = 2;
		}
		else
		{
			if (!iLocal_133[22])
			{
				if ((iLocal_129 && Global_86816) && iLocal_378 == 2)
				{
					if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_NOWAIT", 7, 0, 0, 0))
						{
							iLocal_133[22] = 1;
						}
					}
				}
				else
				{
					iLocal_133[22] = 1;
				}
			}
			else if (!iLocal_133[2])
			{
				if (!GlobalFunc_5172(&Local_431, 2))
				{
					GlobalFunc_164("FRAN2_FIND", 7500, 0);
					iLocal_133[2] = 1;
				}
			}
			if (Global_86816)
			{
				if (!iLocal_124)
				{
					if (!PED::IS_PED_INJURED(Local_1407[0 /*21*/]) && iLocal_275 > 0)
					{
						if (iLocal_276 == 0)
						{
							iLocal_276 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_276) > 1500)
						{
							if (iLocal_378 != 0)
							{
								GlobalFunc_2518(&uLocal_387, 0, 1);
								GlobalFunc_2511(&uLocal_387, 0, 1, 2);
								iLocal_124 = 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_1407[0 /*21*/]))
				{
					if (!iLocal_133[67])
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f)
						{
							if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_mrpg", 7, 0, 0, 0))
								{
									iLocal_133[67] = 1;
									iLocal_282 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else if (!iLocal_133[68])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_282) > 11000)
						{
							if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
							{
								if (iLocal_378 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(Local_1407[0 /*21*/], 1)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(1), 1), ENTITY::GET_ENTITY_COORDS(Local_1407[0 /*21*/], 1)))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TSHOOTM", 7, 0, 0, 0))
										{
											iLocal_133[68] = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FSHOOTM", 7, 0, 0, 0))
									{
										iLocal_133[68] = 1;
									}
								}
								else if (iLocal_378 == 1)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f)
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_DEALT", 7, 0, 0, 0))
										{
											iLocal_133[68] = 1;
										}
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f)
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_DEALF", 7, 0, 0, 0))
									{
										iLocal_133[68] = 1;
									}
								}
							}
						}
					}
				}
				else if (PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
				{
					GlobalFunc_2518(&uLocal_387, 0, 0);
					iLocal_124 = 0;
				}
				if (!iLocal_123)
				{
					if (!PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
					{
						if (iLocal_281 != 0 && (MISC::GET_GAME_TIMER() - iLocal_281) > 5000)
						{
							if (iLocal_378 != 0)
							{
								GlobalFunc_2518(&uLocal_387, 0, 1);
								GlobalFunc_2511(&uLocal_387, 0, 1, 2);
								iLocal_123 = 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(Local_1429[0 /*21*/]))
				{
					if (!iLocal_133[81])
					{
						if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(Local_1429[0 /*21*/], 1)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(1), 1), ENTITY::GET_ENTITY_COORDS(Local_1429[0 /*21*/], 1)))
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_SNIPERT", 7, 0, 0, 0))
								{
									iLocal_133[81] = 1;
									iLocal_283 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_SNIPERF", 7, 0, 0, 0))
							{
								iLocal_133[81] = 1;
								iLocal_283 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_133[69])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_283) > 11000)
						{
							if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
							{
								if (iLocal_378 == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(Local_1429[0 /*21*/], 1)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(1), 1), ENTITY::GET_ENTITY_COORDS(Local_1429[0 /*21*/], 1)))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TSHOOTM", 7, 0, 0, 0))
										{
											iLocal_133[69] = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FSHOOTM", 7, 0, 0, 0))
									{
										iLocal_133[69] = 1;
									}
								}
								else if (iLocal_378 == 1)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f)
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_DEALT", 7, 0, 0, 0))
										{
											iLocal_133[69] = 1;
										}
									}
								}
								else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(2), 1), ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f)
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_DEALF", 7, 0, 0, 0))
									{
										iLocal_133[69] = 1;
									}
								}
							}
						}
					}
				}
				else if (PED::IS_PED_INJURED(Local_1407[0 /*21*/]))
				{
					GlobalFunc_2518(&uLocal_387, 0, 0);
					iLocal_124 = 0;
				}
				if (iLocal_378 == 0 && !GlobalFunc_579())
				{
					if ((SYSTEM::VDIST2(Local_66, ENTITY::GET_ENTITY_COORDS(func_428(2), 1)) < 900f && SYSTEM::VDIST2(Local_66, ENTITY::GET_ENTITY_COORDS(func_428(1), 1)) < 900f) && (func_431(&Local_959) == 0 || func_431(&Local_1600) == 0))
					{
						if (!iLocal_133[16])
						{
							if (!GlobalFunc_5172(&Local_431, 2))
							{
								GlobalFunc_164("FRAN2_SWITCH2", 7500, 0);
							}
						}
						if (!iLocal_125)
						{
							GlobalFunc_2518(&uLocal_387, 1, 1);
							GlobalFunc_2518(&uLocal_387, 2, 1);
							GlobalFunc_2511(&uLocal_387, 1, 2, 0);
							iLocal_125 = 1;
						}
					}
				}
				else
				{
					if (GlobalFunc_663("FRAN2_SWITCH2", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (iLocal_133[7])
					{
						if (GlobalFunc_74("FRAN2_SPECHELP"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (MISC::IS_PC_VERSION())
						{
							if (GlobalFunc_74("FRAN2_SPECHELP_KM"))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
					if (iLocal_125)
					{
						GlobalFunc_2518(&uLocal_387, 2, 0);
						GlobalFunc_2518(&uLocal_387, 1, 0);
						iLocal_125 = 0;
					}
					iLocal_286 = MISC::GET_GAME_TIMER();
				}
			}
			if (iLocal_378 != 0)
			{
				fVar3 = SYSTEM::VDIST2(Var0, Local_66);
				if (fVar3 > 90000f)
				{
					func_425(7);
				}
				else if (fVar3 > 50625f)
				{
					if (!iLocal_133[72])
					{
						if (!GlobalFunc_5172(&Local_431, 2))
						{
							GlobalFunc_164("FRAN2_RETSAW", 7500, 0);
							iLocal_133[72] = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_498))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_498, 1) };
					if (SYSTEM::VDIST2(Var0, Var4) < 2500f && Var0.f_2 > 79f)
					{
						if (!GlobalFunc_579())
						{
							if (!HUD::DOES_BLIP_EXIST(Local_498.f_1))
							{
								Local_498.f_1 = GlobalFunc_6783(Local_498, 0, 0);
								HUD::SET_BLIP_SCALE(Local_498.f_1, 1f);
							}
							if (!iLocal_133[3])
							{
								if (!GlobalFunc_5172(&Local_431, 2))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FRA2_GET_TO_LAMAR");
									GlobalFunc_164("FRAN2_GETLAMAR", 7500, 0);
									iLocal_133[3] = 1;
								}
							}
						}
						if (!iLocal_133[62] && Global_86816)
						{
							if (!GlobalFunc_5172(&Local_431, 1) && !GlobalFunc_579())
							{
								if (!ENTITY::IS_ENTITY_OCCLUDED(Local_498) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -527.931f, 5309.886f, 79.26758f, -503.3806f, 5300.901f, 82.34715f, 3.5f, 0, 1, 0))
								{
									GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var4, &fVar7, &fVar8);
									if (((fVar7 > 0.3f && fVar7 < 0.7f) && fVar8 > 0.3f) && fVar8 < 0.7f)
									{
										if (iLocal_378 == 1)
										{
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_SPOTL", 7, 0, 0, 0))
											{
												iLocal_133[62] = 1;
											}
										}
										else if (iLocal_378 == 2)
										{
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_SPOTL2", 7, 0, 0, 0))
											{
												iLocal_133[62] = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!iLocal_127)
		{
			if (!PED::IS_PED_INJURED(Local_498))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_498, 1)) < 225f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_498, 8000, 2048, 2);
					iLocal_127 = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_498))
		{
			if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Local_498, 1)) > 400f)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_127 = 0;
			}
		}
		if (!GlobalFunc_5172(&Local_431, 1))
		{
			func_715();
		}
	}
	if (iLocal_377 == 2)
	{
		func_531();
		HUD::CLEAR_HELP(1);
		iVar9 = 0;
		while (iVar9 < Local_512)
		{
			if (!PED::IS_PED_INJURED(Local_512[iVar9 /*21*/]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_512[iVar9 /*21*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 22500f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_512[iVar9 /*21*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_512[iVar9 /*21*/], 0);
				}
			}
			iVar9++;
		}
		GlobalFunc_2518(&uLocal_387, 0, 0);
		GlobalFunc_2518(&uLocal_387, 2, 0);
		GlobalFunc_2518(&uLocal_387, 1, 0);
		GlobalFunc_2785(&uLocal_387);
		iLocal_376 = 5;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		func_423(5, 0);
	}
}

void func_726()//Position - 0x79E26
{
	if (GlobalFunc_4917(1) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_378 = 1;
	}
	else if (GlobalFunc_4917(2) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_378 = 2;
	}
	else
	{
		iLocal_378 = 0;
	}
	iLocal_379 = func_686(func_428(0));
	iLocal_381 = func_686(func_428(1));
	iLocal_380 = func_686(func_428(2));
	iLocal_383 = iLocal_381;
	iLocal_382 = iLocal_380;
	iLocal_271 = MISC::GET_GAME_TIMER();
	iLocal_272 = MISC::GET_GAME_TIMER();
	iLocal_264 = MISC::GET_GAME_TIMER() + 25000;
	if (iLocal_378 != 1)
	{
		Local_484.f_9 = 1;
	}
	if (iLocal_378 != 2)
	{
		Local_456.f_9 = 1;
	}
}

void func_727()//Position - 0x79EC2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	struct<3> Var16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	var uVar24;
	
	if (iLocal_377 == 4)
	{
		if ((Global_86816 && func_733()) || (!Global_86816 && func_190()))
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(-706.1613f, 5313.144f, 70.0483f, 284.2023f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -706.1613f, 5313.144f, 70.0483f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284.2023f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_651();
			if (Global_86816)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_387[1])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_354)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					func_650(-686.4227f, 5256.771f, 75.7882f, 223.4715f, 0);
					func_732(-696.7804f, 5312.504f, 69.2695f, 275.3851f, 0);
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
					SYSTEM::WAIT(0);
				}
				func_631();
				func_630();
			}
			while ((((!func_592(Local_87, fLocal_299) || !ENTITY::DOES_ENTITY_EXIST(Local_1898.x)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_337[0])) || !Local_512[0 /*21*/].f_3) || !bLocal_102)
			{
				func_584();
				func_724(Local_63, fLocal_296, 0);
				func_583();
				SYSTEM::WAIT(0);
			}
			if (Global_86816)
			{
				GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			else
			{
				GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			GlobalFunc_5108(0, -1, 0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 10000)
			{
				if (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && ((!PED::IS_PED_INJURED(uLocal_387[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[0])) || PED::IS_PED_INJURED(uLocal_387[0]))) && ((!PED::IS_PED_INJURED(uLocal_387[1]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[1])) || PED::IS_PED_INJURED(uLocal_387[1]))) && ((!PED::IS_PED_INJURED(uLocal_387[2]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_387[2])) || PED::IS_PED_INJURED(uLocal_387[2])))
				{
					SYSTEM::SETTIMERA(100000);
				}
				SYSTEM::WAIT(0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			GlobalFunc_6415(1);
			func_580(1);
			func_722();
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			bLocal_103 = false;
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		bLocal_104 = false;
		RECORDING::_0x293220DA1B46CEBC(0f, 5f, 4);
		AUDIO::TRIGGER_MUSIC_EVENT("FRA2_HEAD_TO_POS");
		MISC::SET_INSTANCE_PRIORITY_HINT(1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_SAVE_LAMAR_STEALTH"))
		{
			AUDIO::START_AUDIO_SCENE("FRANKLIN_2_SAVE_LAMAR_STEALTH");
		}
		if (Global_86816)
		{
			func_578();
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 0);
		}
		func_731();
		func_533();
		func_535(1, "ATTACK_SAWMILL", 0, 0, 0, 1);
		func_723();
		if (!PED::IS_PED_INJURED(uLocal_387[1]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[1], 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[0], 1);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Global_86816)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -706.1613f, 5313.144f, 70.0483f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 284.2023f);
				if (!PED::IS_PED_INJURED(uLocal_387[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_387[1], -707.5012f, 5310.943f, 70.3263f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_387[1], 285.2878f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(500);
			GlobalFunc_2204();
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 1);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GET_TO_SAWMILL"))
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_2_GET_TO_SAWMILL");
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		SYSTEM::SETTIMERB(0);
		iLocal_378 = 2;
		iLocal_129 = 0;
		iLocal_254 = 0;
		iLocal_377 = 1;
	}
	if (iLocal_377 == 1)
	{
		func_584();
		func_719();
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_304);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_306);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
		if (bLocal_103)
		{
			if (Global_86816)
			{
				func_685();
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1)) > 25f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), 2f) && !CAM::IS_SPHERE_VISIBLE(Local_81, 2f))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_387[0], Local_81, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_387[0], fLocal_298);
					}
				}
			}
			if (iLocal_254 == 0)
			{
				iLocal_129 = 1;
			}
			iLocal_377 = 2;
		}
		else
		{
			if (!Global_86816)
			{
				if (!iLocal_133[17])
				{
					if (!GlobalFunc_5172(&Local_431, 1))
					{
						if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_ALONE", 7, 0, 0, 0))
						{
							iLocal_133[17] = 1;
						}
					}
				}
				else if (!iLocal_133[2])
				{
					if (!GlobalFunc_5172(&Local_431, 2))
					{
						GlobalFunc_164("FRAN2_FIND", 7500, 0);
						iLocal_133[2] = 1;
					}
				}
			}
			else
			{
				switch (iLocal_254)
				{
					case 0:
						if (!HUD::DOES_BLIP_EXIST(uLocal_311))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
							{
								uLocal_311 = GlobalFunc_6783(Local_1898.x, 0, 0);
								HUD::SET_BLIP_COLOUR(uLocal_311, 5);
								HUD::SET_BLIP_BRIGHT(uLocal_311, 0);
							}
							else
							{
								uLocal_311 = GlobalFunc_5104(Local_78, 0);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
							{
								if (!GlobalFunc_537(HUD::GET_BLIP_COORDS(uLocal_311), Local_78, 0.1f))
								{
									HUD::REMOVE_BLIP(&uLocal_311);
								}
								iVar1 = 1;
							}
							else
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									GlobalFunc_2918();
									HUD::SET_BLIP_ALPHA(uLocal_311, 0);
								}
								else
								{
									HUD::SET_BLIP_ALPHA(uLocal_311, 255);
								}
								iVar1 = 1;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_78, Global_18, iVar1, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0)))
							{
								Local_93 = { Local_78 };
								bVar0 = true;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_312))
						{
							uLocal_312 = GlobalFunc_5104(Local_72, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_72, Global_18, 1, 1, 0))
						{
							Local_93 = { Local_72 };
							bVar0 = true;
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_313))
						{
							uLocal_313 = GlobalFunc_5104(Local_75, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, Global_18, 1, 1, 0))
						{
							Local_93 = { Local_75 };
							bVar0 = true;
						}
						if (bVar0 || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							GlobalFunc_7629();
							if (!iLocal_133[51])
							{
								if (GlobalFunc_537(Local_93, Local_75, 1056964608))
								{
									StringCopy(&Var2, "LM2_PICK3", 16);
								}
								else if (GlobalFunc_537(Local_93, Local_72, 1056964608))
								{
									StringCopy(&Var2, "LM2_PICK1", 16);
								}
								else
								{
									StringCopy(&Var2, "LM2_PICK2", 16);
								}
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
									}
									else
									{
										GlobalFunc_Display_Help_Text("FRAN2_SIGHELP2");
									}
								}
								else if (GlobalFunc_10618(&Local_1903, "LEM2AUD", &Var2, 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 3f, 4);
									iLocal_133[51] = 1;
								}
								else
								{
									GlobalFunc_5105();
								}
							}
							else
							{
								HUD::CLEAR_HELP(1);
								CAM::DESTROY_ALL_CAMS(0);
								func_531();
								GlobalFunc_565(369, 1, 0);
								GlobalFunc_9134(&uLocal_387, 1);
								Local_2068.f_12 = uLocal_387[uLocal_387.f_7];
								iLocal_256 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(uLocal_387[uLocal_387.f_7]))
								{
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										Var6 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(uLocal_387[uLocal_387.f_7]) };
										STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(uLocal_387[uLocal_387.f_7], 1), GlobalFunc_590(Var6), 50f, 2);
									}
								}
								iLocal_254++;
							}
						}
						else
						{
							if (GlobalFunc_74("FRAN2_SIGHELP2"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!iLocal_133[18])
							{
								if (!GlobalFunc_5172(&Local_431, 2))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_WHERE", 7, 0, 0, 0))
									{
										iLocal_133[18] = 1;
									}
								}
							}
							else if (!iLocal_133[1])
							{
								if (!GlobalFunc_5172(&Local_431, 2))
								{
									GlobalFunc_164("FRAN2_GETP", 7500, 0);
									iLocal_133[1] = 1;
									iLocal_267 = MISC::GET_GAME_TIMER();
								}
							}
							else if (!iLocal_133[70])
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_267) > 4000)
								{
									if (!GlobalFunc_5172(&Local_431, 2))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MPATH", 7, 0, 0, 0))
										{
											iLocal_133[70] = 1;
										}
									}
									if (!iLocal_133[8])
									{
										GlobalFunc_159("FRAN2_POSHELP", -1);
										iLocal_133[8] = 1;
									}
								}
							}
							else if (!iLocal_133[61])
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_NOCLOSE", 7, 0, 0, 0))
								{
									iLocal_133[61] = 1;
								}
							}
						}
						func_675(&(uLocal_387[1]), &(Local_484.f_6));
						break;
					
					case 1:
						if (!func_655(&Local_2068, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							iLocal_254++;
						}
						else
						{
							if (Local_2068.f_18)
							{
								if (!Local_2068.f_19)
								{
									if (func_195(&uLocal_387, 1, 1, 0))
									{
										if (!PED::IS_PED_INJURED(uLocal_387[uLocal_387.f_5]))
										{
											if (iLocal_256 < 110)
											{
												iLocal_256 = 110;
											}
											PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[uLocal_387.f_5], 0);
											PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[uLocal_387.f_5], 0);
											PED::SET_PED_DIES_WHEN_INJURED(uLocal_387[uLocal_387.f_5], 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[uLocal_387.f_5], 1862763509);
											func_439(&(uLocal_387[uLocal_387.f_5]), 5, 1, 2, 1, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 12, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 29, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 36, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_387[uLocal_387.f_5], 35, 1);
											PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 118, 0);
											PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 185, 1);
											PED::SET_PED_CONFIG_FLAG(uLocal_387[uLocal_387.f_5], 188, 1);
											ENTITY::SET_ENTITY_PROOFS(uLocal_387[uLocal_387.f_5], 0, 1, 0, 0, 0, 0, 0, 0);
											ENTITY::SET_ENTITY_HEALTH(uLocal_387[uLocal_387.f_5], iLocal_256);
											GlobalFunc_2903(uLocal_387[uLocal_387.f_5], 1800);
											PED::SET_PED_USING_ACTION_MODE(uLocal_387[uLocal_387.f_5], 1, -1, 0);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_387[uLocal_387.f_5], 33497);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[uLocal_387.f_5], 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_387[uLocal_387.f_5], 1);
											if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 0))
											{
												WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 1);
												if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle")) < 50)
												{
													WEAPON::ADD_AMMO_TO_PED(uLocal_387[uLocal_387.f_5], joaat("weapon_carbinerifle"), 50);
												}
											}
										}
										if (!PED::IS_PED_INJURED(uLocal_387[0]))
										{
											ENTITY::SET_ENTITY_COORDS(uLocal_387[0], Local_81, 1, 1, 0, 1);
											PED::SET_PED_STEALTH_MOVEMENT(uLocal_387[0], 0, 0);
										}
										MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 0);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
										PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
										PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 33497);
										func_191();
										func_723();
										iLocal_378 = uLocal_387.f_7;
										Local_2068.f_19 = 1;
									}
								}
							}
							if (iLocal_378 != 1)
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								fVar12 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								fVar13 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_66.x - Var9.x), (Local_66.f_1 - Var9.f_1));
								fVar14 = MISC::ABSF((fVar13 - fVar12));
								if (fVar14 > 180f)
								{
									fVar14 = MISC::ABSF((fVar14 - 360f));
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1464580341) != 1 && fVar14 > 20f)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), Local_66, 0);
								}
							}
						}
						break;
					
					case 2:
						if (!HUD::DOES_BLIP_EXIST(uLocal_311))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1898.x, -1))
							{
								uLocal_311 = GlobalFunc_6783(Local_1898.x, 0, 0);
								HUD::SET_BLIP_COLOUR(uLocal_311, 5);
								HUD::SET_BLIP_BRIGHT(uLocal_311, 0);
							}
							else
							{
								uLocal_311 = GlobalFunc_5104(Local_78, 0);
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1898.x, -1))
							{
								HUD::SET_BLIP_ALPHA(uLocal_311, 255);
								iVar15 = 1;
							}
							else
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0))
								{
									GlobalFunc_2918();
									HUD::SET_BLIP_ALPHA(uLocal_311, 0);
								}
								else if (!GlobalFunc_537(HUD::GET_BLIP_COORDS(uLocal_311), Local_78, 0.1f))
								{
									HUD::REMOVE_BLIP(&uLocal_311);
								}
								iVar15 = 1;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_78, Global_18, iVar15, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1898.x, 0)))
							{
								bVar0 = true;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_312))
						{
							uLocal_312 = GlobalFunc_5104(Local_72, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_72, Global_18, 1, 1, 0))
						{
							bVar0 = true;
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_313))
						{
							uLocal_313 = GlobalFunc_5104(Local_75, 0);
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, Global_18, 1, 1, 0))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							GlobalFunc_7629();
							if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
							{
								HUD::CLEAR_HELP(1);
								func_531();
								func_726();
								AUDIO::TRIGGER_MUSIC_EVENT("FRA2_IN_POSITION");
								iLocal_284 = MISC::GET_GAME_TIMER();
								iLocal_254++;
							}
							else
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									GlobalFunc_Display_Help_Text("FRAN2_SIGHELP");
								}
								if (!iLocal_133[57])
								{
									if (!GlobalFunc_5172(&Local_431, 1))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_PREBANG", 7, 0, 0, 0))
										{
											iLocal_133[57] = 1;
										}
									}
								}
							}
						}
						else
						{
							if (GlobalFunc_74("FRAN2_SIGHELP"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!GlobalFunc_5172(&Local_431, 1))
							{
								if (!iLocal_133[52])
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_FRANPICK", 7, 0, 0, 0))
									{
										iLocal_133[52] = 1;
									}
								}
								else if (!iLocal_133[53])
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MIKEBANG", 7, 0, 0, 0))
									{
										iLocal_133[53] = 1;
									}
								}
								else if (!iLocal_133[54])
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MIXT", 7, 0, 0, 0))
									{
										iLocal_133[54] = 1;
									}
								}
								else if (!iLocal_133[55])
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MIXF", 7, 0, 0, 0))
									{
										iLocal_133[55] = 1;
									}
								}
								else if (!iLocal_133[56])
								{
									if (!PED::IS_PED_INJURED(uLocal_387[2]))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 400f)
										{
											if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TREVSAME", 7, 0, 0, 0))
											{
												iLocal_133[56] = 1;
											}
										}
									}
								}
							}
						}
						if (!PED::IS_PED_INJURED(uLocal_387[2]))
						{
							if (GlobalFunc_537(Local_93, Local_78, 1056964608))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(uLocal_387[2], Local_1898.x, 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[2], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(uLocal_387[2], Local_1898.x, -1, -1, 2f, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[2], 1);
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1898.x, 1);
									}
								}
							}
							else
							{
								Var16 = { ENTITY::GET_ENTITY_COORDS(uLocal_387[2], 1) };
								fVar19 = ENTITY::GET_ENTITY_HEADING(uLocal_387[2]);
								fVar20 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_66.x - Var16.x), (Local_66.f_1 - Var16.f_1));
								fVar21 = MISC::ABSF((fVar20 - fVar19));
								if (fVar21 > 180f)
								{
									fVar21 = MISC::ABSF((fVar21 - 360f));
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[2], 1464580341) != 1 && fVar21 > 20f)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(uLocal_387[2], Local_66, 0);
								}
							}
						}
						func_675(&(uLocal_387[2]), &(Local_456.f_6));
						break;
					
					case 3:
						if (!iLocal_133[58])
						{
							if (!GlobalFunc_5172(&Local_431, 1))
							{
								if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_bang", 7, 0, 0, 0))
								{
									iLocal_284 = MISC::GET_GAME_TIMER();
									RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
									iLocal_133[58] = 1;
								}
							}
						}
						else
						{
							if (Global_86816)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_284) > 800)
								{
									func_685();
									func_674();
									func_716();
								}
								func_684();
							}
							if (!iLocal_133[60])
							{
								if (!GlobalFunc_5172(&Local_431, 1))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_MATT", 7, 0, 0, 0))
									{
										iLocal_133[60] = 1;
									}
								}
							}
							else if (!iLocal_133[59])
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_428(1), 1), ENTITY::GET_ENTITY_COORDS(func_428(2), 1)) < 625f)
								{
									if (!GlobalFunc_5172(&Local_431, 1))
									{
										if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "lm2_bul", 7, 0, 0, 0))
										{
											iLocal_133[59] = 1;
										}
									}
								}
								else if (!GlobalFunc_5172(&Local_431, 1))
								{
									if (GlobalFunc_10618(&Local_1903, "LEM2AUD", "LM2_TREVBANG", 7, 0, 0, 0))
									{
										iLocal_133[59] = 1;
									}
								}
							}
							else if (!iLocal_133[2])
							{
								if (!GlobalFunc_5172(&Local_431, 2))
								{
									GlobalFunc_164("FRAN2_FIND", 7500, 0);
									iLocal_133[2] = 1;
								}
							}
						}
						break;
					}
			}
			fVar22 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66);
			if (fVar22 > 90000f)
			{
				func_425(7);
			}
			else if (fVar22 > 50625f)
			{
				if (!iLocal_133[72])
				{
					if (!GlobalFunc_5172(&Local_431, 2))
					{
						GlobalFunc_164("FRAN2_RETSAW", 7500, 0);
						iLocal_133[72] = 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			Local_470.f_11 = { Local_81 };
			if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 0))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_387[0], &iVar23, 1);
				if (iVar23 != joaat("weapon_heavysniper"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 0);
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_387[0], joaat("weapon_heavysniper")) < 5)
				{
					WEAPON::ADD_AMMO_TO_PED(uLocal_387[0], joaat("weapon_heavysniper"), 5);
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_387[0], 242628503) != 1 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1), Local_81) > 4f)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar24);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_81, 2f, -1, 0.5f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, -573.5f, 5257.8f, 71.7f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar24);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_387[0], uVar24);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[0], 1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar24);
				PED::SET_PED_STEALTH_MOVEMENT(uLocal_387[0], 1, 0);
			}
			func_675(&(uLocal_387[0]), &(Local_470.f_6));
		}
	}
	if (iLocal_377 == 2)
	{
		func_531();
		HUD::CLEAR_HELP(1);
		STREAMING::NEW_LOAD_SCENE_STOP();
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			if ((ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(uLocal_387[0]), Local_81, 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_81) > 22500f) && (ENTITY::IS_ENTITY_OCCLUDED(uLocal_387[0]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_387[0], 1)) > 22500f))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_387[0], Local_81, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_387[0], fLocal_298);
			}
		}
		GlobalFunc_5105();
		iLocal_376 = 4;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		func_423(4, 0);
	}
}




void func_731()//Position - 0x7B362
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_133;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_133[iVar1] = 0;
		iVar1++;
	}
}

int func_732(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x7B38B
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_387[1]))
	{
		GlobalFunc_7215(1);
		if (GlobalFunc_7214(1))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_263(&(uLocal_387[1]), 1, Param0, fParam3, 1, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_387[1], 0);
				PED::SET_PED_MAX_HEALTH(uLocal_387[1], 1800);
				ENTITY::SET_ENTITY_HEALTH(uLocal_387[1], 1800);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_387[1], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 118, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 174, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_387[1], 188, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_387[1], 1);
				Local_484.f_3 = 0;
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[1], joaat("weapon_carbinerifle"), 500, 1, 1);
				GlobalFunc_173(&Local_1903, 1, uLocal_387[1], "FRANKLIN", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_387[1], 1862763509);
				GlobalFunc_11267(uLocal_387[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
		}
	}
	else
	{
		if (Local_1903[1 /*10*/] != uLocal_387[1])
		{
			GlobalFunc_173(&Local_1903, 1, uLocal_387[1], "FRANKLIN", 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_733()//Position - 0x7B4B6
{
	if (GlobalFunc_8315() != 2)
	{
		func_192(2, 1);
		func_191();
	}
	else
	{
		func_191();
		return 1;
	}
	return 0;
}

void func_734()//Position - 0x7B4DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(Local_48, 204.959f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_48, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 204.959f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			SYSTEM::SETTIMERA(0);
			func_651();
			while (((!ENTITY::DOES_ENTITY_EXIST(Local_1898.x) || !ENTITY::DOES_ENTITY_EXIST(iLocal_337[0])) || !Local_512[0 /*21*/].f_3) || !bLocal_102)
			{
				func_584();
				func_724(Local_63, fLocal_296, 0);
				func_583();
				SYSTEM::WAIT(0);
			}
			if (Global_86816)
			{
				while (((!ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_387[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_354)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_355))
				{
					func_650(Local_57, fLocal_294, 0);
					func_647(Local_60, fLocal_295, 0);
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_5108(0, -1, 0);
			func_722();
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			bLocal_103 = false;
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_IG_4_ALT1_concat", 8);
		func_171("FRA_2_IG_4_ALT1_concat");
		func_651();
		GlobalFunc_2536(1, 0);
		GlobalFunc_2520();
		func_745(1);
		if ((!GlobalFunc_5172(&Local_431, 1) && func_745(1)) && GlobalFunc_Has_Cutscene_Loaded())
		{
			if (GlobalFunc_8315() != 2)
			{
				GlobalFunc_9134(&uLocal_387, 2);
				func_195(&uLocal_387, 1, 0, 0);
				func_191();
			}
			if (!PED::IS_PED_INJURED(uLocal_387[1]))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_387[1]);
				STREAMING::SET_FOCUS_ENTITY(uLocal_387[1]);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_387[0], "Michael", 0, 0, 0);
				if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_387[0], joaat("weapon_heavysniper"), 100, 0, 1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_387[0], joaat("weapon_heavysniper"), 1);
				iLocal_336 = GlobalFunc_6830(uLocal_387[0], joaat("weapon_heavysniper"), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_336, "Michaels_weapon", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[2]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_387[2], "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_387[1]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_387[1], "Franklin", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_354, 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_354, "Michaels_car", 0, 0, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michaels_car", 3, GlobalFunc_4931(0, 0), 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_355, 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_355, "Trevors_car", 0, 0, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevors_car", 3, GlobalFunc_4931(2, 0), 0);
			}
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_254 = 0;
			iLocal_100 = 0;
			iLocal_377 = 1;
		}
	}
	if (iLocal_377 == 1)
	{
		func_584();
		switch (iLocal_254)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 10000f && iVar0 != iLocal_354) && iVar0 != iLocal_355)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -707.7372f, 5325.164f, 74.4733f, -715.0993f, 5299.242f, 68.70159f, 45f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_HEADING(iVar0, 261.1234f);
								ENTITY::SET_ENTITY_COORDS(iVar0, -732.8705f, 5317.547f, 71.9049f, 1, 0, 0, 1);
							}
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 0);
							GlobalFunc_9138(iVar0);
							iLocal_357 = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_357, 1, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_354))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_354, 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_354, 1000f);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_355))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_355, 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_355, 1000f);
					}
					GlobalFunc_9805(-707.7372f, 5325.164f, 74.4733f, -715.0993f, 5299.242f, 68.70159f, 45f, -732.8705f, 5317.547f, 71.9049f, 261.1234f, GlobalFunc_625(), 1, 1, 1, 0, 0);
					GlobalFunc_6415(1);
					func_580(1);
					MISC::CLEAR_AREA_OF_PEDS(Local_48, 5000f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(Local_48, 5000f, 0);
					MISC::CLEAR_AREA_OF_COPS(Local_48, 5000f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_48, 5000f, 0);
					AUDIO::STOP_AUDIO_SCENES();
					if (!PED::IS_PED_INJURED(uLocal_387[1]))
					{
						GlobalFunc_11267(uLocal_387[1], 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					func_745(0);
					GlobalFunc_2204();
					iLocal_254++;
				}
				else if (!PED::IS_PED_INJURED(uLocal_387[1]))
				{
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_387[1]);
				}
				break;
			
			case 1:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 28000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FRA2_START");
					iLocal_254++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_343[0]))
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 43000)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < iLocal_343)
				{
					GlobalFunc_2206(&(iLocal_343[iVar1]), 1);
					iVar1++;
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
			iLocal_377 = 2;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 46000)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_377 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			if (!PED::IS_PED_INJURED(uLocal_387[0]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_387[0], -686.4227f, 5256.771f, 75.7882f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_387[0], 223.4715f);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			STREAMING::CLEAR_FOCUS();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5500, -87.7f, 0, 0);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3500, -87.7f, 0, 0);
			}
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
			func_533();
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_336, func_428(0));
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			RECORDING::_0x81CBAE94390F9F89();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	if (iLocal_377 == 2)
	{
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		bLocal_103 = false;
		GlobalFunc_8316(0, 1, 1, 0);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iLocal_343)
		{
			GlobalFunc_2206(&(iLocal_343[iVar2]), 1);
			iVar2++;
		}
		STREAMING::CLEAR_FOCUS();
		iLocal_376 = 3;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		GlobalFunc_2195();
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_100 = 1;
		iLocal_377 = 1;
	}
}











int func_745(bool bParam0)//Position - 0x7C64B
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_343[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_375);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_375))
		{
			if (bParam0)
			{
				return 1;
			}
			else
			{
				iLocal_343[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -597.299f, 5313.809f, 69.2413f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_343[0], 0f, 0f, 33.48f, 2, 1);
				iLocal_343[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -594.849f, 5314.079f, 69.2413f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_343[1], 0f, 0f, 42.84f, 2, 1);
				iLocal_343[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_375, -595.739f, 5312.149f, 69.2413f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_343[2], 0f, 0f, 5.4f, 2, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_343)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_343[iVar0], 1);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_343[iVar0]) == iLocal_375)
					{
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_343[iVar0], 200);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_375);
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


void func_747()//Position - 0x7C7E8
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(8.2263f, 535.3607f, 175.0279f, 2.8314f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 8.2263f, 535.3607f, 175.0279f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.8314f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			SYSTEM::SETTIMERA(0);
			GlobalFunc_5108(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		func_651();
		iLocal_121 = 0;
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			GlobalFunc_76(5);
			GlobalFunc_76(4);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(500);
			GlobalFunc_2204();
		}
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		func_722();
		SYSTEM::SETTIMERB(0);
		iLocal_254 = 0;
		iLocal_377 = 1;
	}
	if (iLocal_377 == 1)
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_48);
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -484.7f, 5276.6f, 87.5f);
		bVar2 = true;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (fVar0 < 2500f)
			{
				bVar2 = false;
				if ((MISC::GET_GAME_TIMER() - iLocal_288) > 1500)
				{
					func_425(8);
				}
			}
		}
		else
		{
			iLocal_288 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		switch (iLocal_254)
		{
			case 0:
				GlobalFunc_9193(&Local_431, Local_48, 0.001f, 0.001f, 2f, 1, "FRAN2_GOSAW", bVar2, 1, -1);
				if (HUD::DOES_BLIP_EXIST(Local_431.f_5))
				{
					if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -704.7422f, 5313.341f, 74.91718f, -733.0217f, 5316.371f, 69.17234f, 37f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_AIR(iVar3)) || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -711.7355f, 5310.284f, 75.79887f, -730.6089f, 5311.804f, 69.0042f, 27.5f, 0, 1, 0)))
					{
						GlobalFunc_5652(&Local_431, 1, 0);
						GlobalFunc_5105();
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							GlobalFunc_6685(0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar3) && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar3)))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
						}
						iLocal_254++;
					}
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_133[71])
					{
						if (!GlobalFunc_5172(&Local_431, 1))
						{
							GlobalFunc_173(&Local_1903, 8, 0, "LESTER", 0, 1);
							if (GlobalFunc_10638(&Local_1903, 12, "LEM2AUD", "LM2_PHNL", 11, 1, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
								iLocal_133[71] = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
					if (GlobalFunc_530(iVar3, 10.5f, 1, 1056964608, 0, 1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				if (bVar4)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
					iLocal_377 = 2;
				}
				break;
		}
		if (bLocal_103)
		{
			iLocal_377 = 2;
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_2_GET_TO_SAWMILL"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::START_AUDIO_SCENE("FRANKLIN_2_GET_TO_SAWMILL");
			}
		}
		if (!bLocal_122)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5))
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar5)))
					{
						GlobalFunc_565(370, 0, 0);
					}
					else if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar5)))
					{
						GlobalFunc_565(370, 1, 0);
					}
					else
					{
						GlobalFunc_565(370, 2, 0);
					}
				}
				else
				{
					GlobalFunc_565(370, 2, 0);
				}
				RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
				bLocal_122 = true;
			}
		}
		if (fVar0 < 40000f || fVar1 < 90000f)
		{
			func_584();
			if (ENTITY::DOES_ENTITY_EXIST(Local_512[0 /*21*/]))
			{
				func_724(Local_63, fLocal_296, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1898.x))
			{
				func_583();
			}
			if (Global_86816)
			{
				func_650(Local_57, fLocal_294, 0);
				func_647(Local_60, fLocal_295, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]))
				{
					func_646(Local_51, fLocal_292, 0);
					func_632(Local_54, fLocal_293, 0);
				}
			}
		}
		else if (fVar0 > 62500f && fVar1 > 1600000f)
		{
			if (Global_86816)
			{
				func_34(&(uLocal_387[0]), 1);
				func_34(&(uLocal_387[2]), 1);
				func_36(&iLocal_354, 1);
				func_36(&iLocal_355, 1);
			}
		}
		if (Global_86816)
		{
			if (fVar0 < (100f * 100f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_387[2]))
				{
					CUTSCENE::REQUEST_CUTSCENE("FRA_2_IG_4_ALT1_concat", 8);
					func_171("FRA_2_IG_4_ALT1_concat");
				}
			}
			else if (fVar0 > (150f * 150f))
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_431.f_5))
		{
			if (!iLocal_121)
			{
				GlobalFunc_2269(&(Local_431.f_5), -745.3523f, 5320.293f, 72.6167f, 257.6477f);
				iLocal_121 = 1;
			}
		}
		else
		{
			iLocal_121 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1898.x))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1898.x, 0))
			{
				func_425(6);
			}
		}
	}
	if (iLocal_377 == 2)
	{
		GlobalFunc_5652(&Local_431, 1, 0);
		func_531();
		HUD::CLEAR_HELP(1);
		if (!bLocal_122)
		{
			GlobalFunc_565(370, 2, 0);
		}
		RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
		if (Global_86816 && !bLocal_103)
		{
			iLocal_376 = 2;
		}
		else
		{
			iLocal_376 = 3;
		}
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		func_423(2, 0);
	}
}





void func_752()//Position - 0x7CF0D
{
	if (iLocal_377 == 4)
	{
		if (func_190())
		{
			if (bLocal_101)
			{
				GlobalFunc_5116(8.2263f, 535.3607f, 175.0279f, 2.8314f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 8.2263f, 535.3607f, 175.0279f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.8314f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			SYSTEM::SETTIMERA(0);
			GlobalFunc_5108(0, -1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_254 = 0;
			iLocal_377 = 0;
		}
	}
	if (iLocal_377 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("FRA_2_INT", 8);
		func_171("FRA_2_INT");
		GlobalFunc_2536(1, 0);
		if (GlobalFunc_Has_Cutscene_Loaded())
		{
			iLocal_347 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(7.5184f, 539.5269f, 176.1776f, 2f, joaat("v_ilev_fh_frontdoor"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_347))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_347, "Franklins_Door", 0, 0, 1024);
			}
			GlobalFunc_8316(1, 1, 1, 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_254 = 0;
			iLocal_100 = 0;
			iLocal_377 = 1;
		}
	}
	if (iLocal_377 == 1)
	{
		switch (iLocal_254)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (GlobalFunc_7091(0f, 0f, 0f, 1))
					{
						GlobalFunc_10606(3.1501f, 543.9788f, 173.728f, 124.6853f, 0, 145);
					}
					GlobalFunc_9805(8.178145f, 549.366f, 169.8156f, 18.64786f, 526.653f, 179.8643f, 29f, 3.1501f, 543.9788f, 173.728f, 124.6853f, GlobalFunc_625(), 1, 1, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_562(42);
					GlobalFunc_2204();
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, 1, 0.1f, 0);
					MISC::CLEAR_AREA_OF_PEDS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_OBJECTS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_COPS(0f, 0f, 0f, 5000f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(0f, 0f, 0f, 5000f, 0);
					iLocal_254++;
				}
				break;
			
			case 1:
				if (iLocal_100)
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, 1, 0f, 0);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fh_frontdoor"), 7.5184f, 539.5269f, 176.1776f, 0, 0f, 0);
					iLocal_254++;
				}
				break;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_377 = 2;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_377 = 3;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			RECORDING::_0x81CBAE94390F9F89();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	}
	if (iLocal_377 == 2)
	{
		if (iLocal_100)
		{
		}
		GlobalFunc_2206(&iLocal_347, 0);
		GlobalFunc_8316(0, 0, 1, 0);
		iLocal_376 = 1;
		iLocal_377 = 0;
	}
	if (iLocal_377 == 3)
	{
		GlobalFunc_2195();
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_100 = 1;
		iLocal_377 = 1;
	}
}












void func_764()//Position - 0x7D862
{
	int iVar0;
	
	if (iLocal_377 == 1)
	{
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 360);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(Global_54763) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_54763)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54763) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54763) != iVar0))
				{
					GlobalFunc_504(iVar0, 361);
				}
				if ((!ENTITY::DOES_ENTITY_EXIST(Global_54761) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_54761)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54761) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54761) != iVar0))
				{
					GlobalFunc_503(iVar0, -1);
				}
			}
		}
		else
		{
			if ((!ENTITY::DOES_ENTITY_EXIST(Global_54763) || !ENTITY::IS_ENTITY_A_PED(Global_54763)) || (ENTITY::IS_ENTITY_A_PED(Global_54763) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_54763) != PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 360);
			}
			if (Global_54761 != 0)
			{
				GlobalFunc_503(0, -1);
			}
		}
	}
}



void func_767()//Position - 0x7D9E5
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[1]) && PED::IS_PED_INJURED(uLocal_387[1]))
	{
		func_425(5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[0]) && PED::IS_PED_INJURED(uLocal_387[0]))
	{
		func_425(4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_387[2]) && PED::IS_PED_INJURED(uLocal_387[2]))
	{
		func_425(3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_498) && PED::IS_PED_INJURED(Local_498))
	{
		func_425(2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_354) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_354, 0))
	{
		func_425(9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_355) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_355, 0))
	{
		func_425(10);
	}
}


int func_769()//Position - 0x7DB60
{
	int iVar0;
	
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_423(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_423(3, 0);
		}
		else if (iVar0 == 2)
		{
			func_423(5, 0);
		}
		else if (iVar0 == 3)
		{
			func_423(6, 0);
		}
		else if (iVar0 > 3)
		{
			func_423(7, 0);
		}
		return 1;
	}
	else
	{
		func_535(0, "MEET_THE_CREW", 0, 0, 0, 1);
	}
	return 0;
}


void func_771()//Position - 0x7DC0A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	HUD::REQUEST_ADDITIONAL_TEXT("FRAN2", 0);
	GlobalFunc_173(&Local_1903, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	PED::ADD_RELATIONSHIP_GROUP("BALLAS", &iLocal_1901);
	PED::ADD_RELATIONSHIP_GROUP("NEUTRAL", &iLocal_1902);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1901);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_1902);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1901, iLocal_1901);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1901, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1901, iLocal_1902);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1902, iLocal_1902);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1902, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1902, iLocal_1901);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	GlobalFunc_563(1);
	func_775();
	GlobalFunc_696();
	func_532(1);
	func_773(1);
	iLocal_258 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-551.224f, 5323.079f, 70.517f, 25f, 87.3f, 3f, GlobalFunc_723(-18.92f), 0, 7);
	iLocal_259 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-517.347f, 5276.551f, 77.5f, 52.27f, 4f, 3f, GlobalFunc_723(-110.2f), 0, 7);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_369, 1);
	Global_86816 = 1;
}


void func_773(bool bParam0)//Position - 0x7DD82
{
	if (bParam0)
	{
		if (iLocal_352[0] == 0)
		{
			iLocal_352[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-970.6f, 5015.2f, 0.8567f, -228.4971f, 5698.299f, 181.8567f, 0, 1, 1, 1);
		}
	}
	else if (iLocal_352[0] != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_352[0], 0);
		iLocal_352[0] = 0;
	}
}


void func_775()//Position - 0x7DDF9
{
	if (Global_24447 == 0)
	{
		Global_24447 = 1;
	}
}


void func_777()//Position - 0x7DE38
{
	int iVar0[8];
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_377 == 4)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_132)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_132 = 0;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	PED::SET_CREATE_RANDOM_COPS(1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	GlobalFunc_2224(0);
	GlobalFunc_8316(0, 1, 1, 0);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	VEHICLE::SET_RANDOM_TRAINS(1);
	STREAMING::CLEAR_FOCUS();
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_601(9, 0);
	GlobalFunc_601(8, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_RADAR_BLIPS(1);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		}
		if (iLocal_377 == 4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if ((((iLocal_376 == 4 || iLocal_376 == 5) || iLocal_376 == 3) || iLocal_376 == 1) || iLocal_376 == 6)
	{
		bVar9 = false;
		if (!PED::IS_PED_INJURED(Local_498))
		{
			PED::GET_PED_NEARBY_PEDS(Local_498, &iVar0, -1);
		}
		iVar10 = 0;
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar10]))
			{
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar10]) == iLocal_1901)
				{
					bVar9 = true;
				}
			}
			iVar10++;
		}
		if (!PED::IS_PED_INJURED(Local_498))
		{
			if (!PED::IS_PED_IN_COMBAT(Local_498, 0) && iLocal_376 >= 5)
			{
				if (bVar9)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_498, 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(Local_498, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
			}
			PED::SET_PED_KEEP_TASK(Local_498, 1);
		}
		if (!PED::IS_PED_INJURED(uLocal_387[0]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_387[0], 0))
			{
				if (bVar9)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_387[0], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_387[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(uLocal_387[0], 1);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[2]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_387[2], 0))
			{
				if (bVar9)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_387[2], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_387[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(uLocal_387[2], 1);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_387[1]))
		{
			if (!PED::IS_PED_IN_COMBAT(uLocal_387[1], 0))
			{
				if (bVar9)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_387[1], 500f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(uLocal_387[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(uLocal_387[1], 1);
			}
		}
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FRA2_FAIL");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	GlobalFunc_5652(&Local_431, 1, 0);
	GlobalFunc_200(&Local_1903, 2);
	GlobalFunc_200(&Local_1903, 4);
	GlobalFunc_200(&Local_1903, 5);
	GlobalFunc_200(&Local_1903, 6);
	GlobalFunc_200(&Local_1903, 7);
	GlobalFunc_200(&Local_1903, 8);
	func_789();
	func_531();
	func_788();
	if (iLocal_377 == 4)
	{
		func_787(1);
		func_786(1);
		func_785(1);
	}
	else
	{
		func_787(0);
		func_786(0);
		func_785(0);
	}
	func_784();
	func_579(0);
	GlobalFunc_2785(&uLocal_387);
	GlobalFunc_729(&uLocal_387, 2, 0);
	GlobalFunc_729(&uLocal_387, 0, 0);
	GlobalFunc_729(&uLocal_387, 1, 0);
	if (iLocal_377 != 4)
	{
		GlobalFunc_563(0);
		GlobalFunc_699();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_369, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 2), 0);
		GlobalFunc_9132(0);
		func_781();
		GlobalFunc_5105();
		func_532(0);
		func_773(0);
		if (iLocal_258 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_258);
			iLocal_258 = -1;
		}
		if (iLocal_259 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_259);
			iLocal_259 = -1;
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_731();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 0, 0, 0);
		FIRE::STOP_FIRE_IN_RANGE(0f, 0f, 0f, 10000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(0f, 0f, 0f, 10000f);
		GlobalFunc_4956();
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		func_469();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_373);
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_assaultrifle"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pistol"));
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_304);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_306);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_305);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_307);
		VEHICLE::REMOVE_VEHICLE_RECORDING(10, sLocal_308);
		VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_308);
		VEHICLE::REMOVE_VEHICLE_RECORDING(12, sLocal_308);
		if (iLocal_376 < 4)
		{
			GlobalFunc_9132(0);
			GlobalFunc_8523(39, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		iVar11 = 0;
		iVar11 = 0;
		while (iVar11 < iLocal_348)
		{
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_348[iVar11]))
			{
				OBJECT::REMOVE_PICKUP(iLocal_348[iVar11]);
			}
			iVar11++;
		}
	}
}




void func_781()//Position - 0x7E526
{
	if (Global_24447 == 1)
	{
		Global_24447 = 0;
	}
}



void func_784()//Position - 0x7E578
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_301);
	STREAMING::REMOVE_ANIM_DICT(sLocal_302);
	STREAMING::REMOVE_ANIM_DICT(sLocal_309);
}

void func_785(bool bParam0)//Position - 0x7E595
{
	func_466(bParam0);
	func_36(&iLocal_356, bParam0);
	func_36(&iLocal_354, bParam0);
	func_36(&iLocal_355, bParam0);
	func_36(&iLocal_357, bParam0);
}

void func_786(bool bParam0)//Position - 0x7E5C7
{
	func_34(&(uLocal_387[0]), bParam0);
	func_34(&(uLocal_387[1]), bParam0);
	func_34(&(uLocal_387[2]), bParam0);
	func_34(&Local_498, bParam0);
	func_467(bParam0);
}

void func_787(bool bParam0)//Position - 0x7E602
{
	GlobalFunc_2206(&iLocal_336, bParam0);
	GlobalFunc_2206(&iLocal_347, 0);
	func_464(bParam0);
}

void func_788()//Position - 0x7E621
{
	if (CAM::DOES_CAM_EXIST(uLocal_314))
	{
		CAM::DESTROY_CAM(iLocal_314, 0);
	}
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_789()//Position - 0x7E657
{
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	if (!iLocal_99)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FH2A_MISSION_FAIL");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}





