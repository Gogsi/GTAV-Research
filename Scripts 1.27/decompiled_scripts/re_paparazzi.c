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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<6> Local_74 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
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
	var uLocal_129 = 1;
	struct<18> Local_130[4];
	struct<18> Local_203[8];
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	bool bLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char[] cLocal_371[8] = 0;
	char* sLocal_372 = NULL;
	char* sLocal_373 = NULL;
	int iLocal_374[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_384 = 0;
	int iLocal_385[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_394[16];
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559[3] = { 0, 0, 0 };
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	float fLocal_568 = 0f;
	float fLocal_569 = 0f;
	int iLocal_570[2] = { 0, 0 };
	float fLocal_573 = 0f;
	struct<3> Local_574 = { 0, 0, 0 } ;
	struct<3> Local_577 = { 0, 0, 0 } ;
	struct<3> Local_580 = { 0, 0, 0 } ;
	struct<3> Local_583 = { 0, 0, 0 } ;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_595[4];
	float fLocal_608[4] = { 0f, 0f, 0f, 0f };
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	char* sLocal_625[3] = { NULL, NULL, NULL };
	int iLocal_629 = 0;
	char* sLocal_630 = NULL;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	float fLocal_637 = 0f;
	struct<3> Local_638 = { 0, 0, 0 } ;
	struct<3> Local_641 = { 0, 0, 0 } ;
	float fLocal_644 = 0f;
	struct<3> Local_645 = { 0, 0, 0 } ;
	struct<3> Local_648 = { 0, 0, 0 } ;
	float fLocal_651 = 0f;
	struct<3> Local_652 = { 0, 0, 0 } ;
	struct<3> Local_655 = { 0, 0, 0 } ;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	float fLocal_664 = 0f;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	bool bLocal_667 = 0;
	bool bLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	Local_52 = { 226.6825f, 681.0297f, 188.4987f };
	Local_55 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_58 = 32.0905f;
	StringCopy(&Local_74, "", 24);
	Local_86 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_89 = 283.0367f;
	Local_91 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_94 = -18.4743f;
	cLocal_371 = "REPAPAU";
	sLocal_372 = "random@escape_paparazzi@standing@";
	sLocal_373 = "random@escape_paparazzi@incar@";
	iLocal_564 = 4000;
	fLocal_568 = 0f;
	fLocal_569 = 0f;
	fLocal_573 = 0f;
	Local_574 = { 272.6356f, 155.5618f, 103.3306f };
	Local_577 = { 247.5795f, 88.7094f, 92.9859f };
	Local_580 = { 259.0348f, 114.0369f, 98.9984f };
	Local_583 = { 255.4971f, 116.8744f, 99.8162f };
	Local_586 = { 266.8217f, 139.7698f, 103.2269f };
	Local_589 = { 270.0174f, 139.1181f, 103.2195f };
	Local_592 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_630 = "left_";
	Local_631 = { 261.9341f, 126.2429f, 95.15405f };
	Local_634 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_637 = 16f;
	Local_638 = { 261.9341f, 126.2429f, 107.6541f };
	Local_641 = { 248.354f, 87.01792f, 92.389f };
	fLocal_644 = 16f;
	Local_645 = { 256.6779f, 126.573f, 99.54784f };
	Local_648 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_651 = 5.75f;
	Local_652 = { 260.242f, 127.423f, 101.65f };
	Local_655 = { 0f, 0f, -20f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_267();
	}
	GlobalFunc_4719(&uLocal_96, 3);
	if (!Global_3)
	{
		if (func_224(Local_49, -1, 0, 0, 0))
		{
			GlobalFunc_6828(-1);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	uLocal_364 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_365 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_366 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		MISC::CLEAR_AREA(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_8277(&uLocal_96);
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10586())
			{
				func_267();
			}
		}
		RECORDING::_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_130)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_130[iVar0 /*18*/]))
			{
				Local_130[iVar0 /*18*/].f_8 = { ENTITY::GET_ENTITY_COORDS(Local_130[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_203)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_203[iVar0 /*18*/]))
			{
				Local_203[iVar0 /*18*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_203[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_59 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			Local_62 = { ENTITY::GET_ENTITY_COORDS(iLocal_85, 1) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_90) && !ENTITY::IS_ENTITY_DEAD(iLocal_90))
		{
			Local_65 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, 1) };
		}
		if (!GlobalFunc_6827())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_368)
				{
					case 0:
						if (func_207())
						{
							func_197();
							iLocal_368++;
						}
						else if (func_185())
						{
							func_267();
						}
						break;
					
					case 1:
						if ((func_184() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
						{
							if (!Global_3 && !bLocal_69)
							{
								func_183();
								func_267();
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							GlobalFunc_9559(1);
							uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
							func_172("MAG_2_ESCAPE_PAP_GET_CAR");
							func_171(0);
						}
						break;
				}
			}
			else
			{
				func_267();
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_46)
			{
				case 0:
					func_168();
					break;
				
				case 1:
					func_165();
					break;
				
				case 2:
					func_144();
					break;
				
				case 3:
					func_133();
					break;
				
				case 4:
					func_104();
					break;
				
				case 10:
					func_267();
					break;
				
				case 5:
					func_103();
					break;
				
				case 6:
					func_100(sLocal_370);
					break;
				
				case 7:
					func_99();
					break;
				
				case 9:
					break;
				
				case 8:
					if (GlobalFunc_6568())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
						{
							PED::DELETE_PED(&iLocal_85);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_62, 210f, 210f, 210f, 0, 1, 0))
			{
				func_183();
				func_267();
			}
			if (((iLocal_46 != 5 && iLocal_46 != 6) && iLocal_46 != 10) && iLocal_46 != 7)
			{
				if (!Global_3 && !bLocal_69)
				{
					if (func_67(iLocal_85, 1, 1) || func_66())
					{
						if (iLocal_46 > 0)
						{
							func_171(5);
						}
						else
						{
							func_183();
							func_171(10);
						}
					}
					if (((iLocal_46 != 5 && iLocal_46 != 10) && iLocal_46 != 0) && iLocal_46 != 7)
					{
						if (func_62())
						{
							func_171(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_46 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_73 || GlobalFunc_8329() != 0))
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (MISC::GET_GAME_TIMER() - iLocal_563) > 5000) && !PED::IS_PED_INJURED(Local_203[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_203[iVar1 /*18*/], 1), Local_59) < (30.5f * 30.5f) && SYSTEM::VDIST2(Local_62, Local_59) > (22.5f * 22.5f))
					{
						if (GlobalFunc_6827())
						{
							if (Local_394[4 /*10*/] != Local_203[iVar1 /*18*/])
							{
								GlobalFunc_200(&Local_394, 4);
								GlobalFunc_1286(&Local_394, 4, Local_203[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_662)
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_563 = MISC::GET_GAME_TIMER();
									iLocal_662 = 1;
								}
							}
							else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, MISC::GET_RANDOM_INT_IN_RANGE(1, 13), 24);
							func_3(Local_203[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_563 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_46 <= 1)
		{
			func_2();
		}
		GlobalFunc_502();
	}
}


void func_2()//Position - 0x8C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_203[iVar0 /*18*/]) < Local_203[iVar0 /*18*/].f_17)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_203[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_385[iVar0] = (iLocal_385[iVar0] + (Local_203[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_203[iVar0 /*18*/])));
					iLocal_81 = (iLocal_81 + (Local_203[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_203[iVar0 /*18*/])));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_203[iVar0 /*18*/]);
					if (iLocal_385[iVar0] > iLocal_384)
					{
						iLocal_384 = iLocal_385[iVar0];
					}
				}
			}
			Local_203[iVar0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_203[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)//Position - 0x981
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, cParam1, sParam2, GlobalFunc_566(iParam3), 0);
}





















int func_24()//Position - 0x1459
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_85))
		{
			if (SYSTEM::VDIST2(Local_59, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_62, Local_203[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()//Position - 0x14D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_48)
	{
		case 0:
			iLocal_615 = 0;
			STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("cavalcade2"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			STREAMING::REQUEST_ANIM_DICT(sLocal_372);
			STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cavalcade2"))) && STREAMING::HAS_MODEL_LOADED(joaat("vader"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_372)) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims"))
			{
				Local_595[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_595[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_595[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_595[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_608[0] = -111.1625f;
				fLocal_608[1] = 68.857f;
				fLocal_608[2] = -108.2056f;
				fLocal_608[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_130)
				{
					func_61(iVar0);
					func_59(func_60(iVar0));
					func_59(func_58(iVar0));
					iVar0++;
				}
				iLocal_613 = 0;
				func_57(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_57(func_58(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_57(func_58(2), Local_595[1 /*3*/], fLocal_608[1]);
				func_57(func_58(3), Local_595[1 /*3*/], fLocal_608[1]);
				func_56(0, Local_595[0 /*3*/], fLocal_608[0], 1);
				func_56(1, Local_595[1 /*3*/], fLocal_608[1], 0);
				ENTITY::SET_ENTITY_COORDS(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(0, 1), 217.1033f);
				ENTITY::SET_ENTITY_COORDS(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(2, 1), 38.6283f);
				ENTITY::SET_ENTITY_COORDS(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_55(3, 1), 272.9875f);
				TASK::TASK_PLAY_ANIM(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			func_53(func_58(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_53(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_53(func_58(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_203[2 /*18*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_203[2 /*18*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_203[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_615)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_55(1, 0)))
					{
						TASK::CLEAR_PED_TASKS(func_55(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_55(1, 1)))
					{
						TASK::CLEAR_PED_TASKS(func_55(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_130[2 /*18*/]))
					{
						func_56(2, Local_595[2 /*3*/], fLocal_608[2], 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[2 /*18*/], 0))
						{
							func_57(func_60(2), ENTITY::GET_ENTITY_COORDS(Local_130[2 /*18*/], 1), 0f);
							PED::SET_PED_INTO_VEHICLE(func_55(2, 0), Local_130[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_130[3 /*18*/]))
					{
						func_56(3, Local_595[3 /*3*/], fLocal_608[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_55(2, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(2, 1), Local_580, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!PED::IS_PED_INJURED(func_55(3, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(3, 1), Local_583, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_69)
					{
						if (!PED::IS_PED_INJURED(func_55(1, 0)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(1, 0), Local_586, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(1, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(1, 1), Local_589, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_55(0, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_55(0, 1), Local_592, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_203)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_203[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_130)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_130[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_615++;
					break;
				
				case 1:
					func_49();
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[0 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(0, 0))) && !PED::IS_PED_INJURED(func_55(0, 1)))
					{
						if (!iLocal_570[1])
						{
							iLocal_570[1] = 1;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_55(0, 0), Local_130[0 /*18*/], Local_574, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[2 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(2, 0))) && !PED::IS_PED_INJURED(func_55(2, 1)))
					{
						if (!iLocal_570[0])
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_55(2, 0), Local_130[2 /*18*/], Local_577, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_570[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !PED::IS_PED_INJURED(iLocal_85))
					{
						func_46(iLocal_85, 6);
						if (Global_3 || bLocal_69)
						{
							if (!PED::IS_PED_INJURED(func_55(1, 0)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(1, 0), Local_586, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_60(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(1, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(1, 1), Local_589, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_55(0, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_55(0, 1), Local_589, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(0));
								}
							}
						}
						else
						{
							func_46(iLocal_85, func_60(1));
							func_46(iLocal_85, func_58(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_46(iLocal_85, func_60(1));
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_90, 1), Local_86) < 9f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(2, 1), Local_580, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(2));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(3, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(3));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_55(0, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(0));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_618, 3))
						{
							TASK::CLEAR_PED_TASKS(Local_203[func_58(3) /*18*/]);
							MISC::SET_BIT(&iLocal_618, 3);
						}
						if (!MISC::IS_BIT_SET(iLocal_618, 2))
						{
							TASK::CLEAR_PED_TASKS(Local_203[func_58(2) /*18*/]);
							MISC::SET_BIT(&iLocal_618, 2);
						}
						if (!MISC::IS_BIT_SET(iLocal_618, 0))
						{
							TASK::CLEAR_PED_TASKS(Local_203[func_58(0) /*18*/]);
							MISC::SET_BIT(&iLocal_618, 0);
						}
						if (Global_3 || bLocal_69)
						{
							func_45(iLocal_85, func_58(3));
						}
						else
						{
							func_46(iLocal_85, func_58(3));
						}
						func_46(iLocal_85, func_58(2));
						func_46(iLocal_85, func_58(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_90) < 1f)
				{
					fLocal_573 = (fLocal_573 + MISC::GET_FRAME_TIME());
				}
				else if (fLocal_573 > 0f)
				{
					fLocal_573 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_130)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*18*/]) && iLocal_46 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_613 || !ENTITY::DOES_ENTITY_EXIST(Local_130[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_130[1 /*18*/]))) && (MISC::GET_GAME_TIMER() - iLocal_614) > 500)
					{
						if (SYSTEM::VDIST2(Local_59, Local_86) > 400f)
						{
							if (SYSTEM::VDIST2(Local_59, Local_86) < 62500f || (MISC::GET_GAME_TIMER() - iLocal_369) < 30000)
							{
								func_40(Local_130[iVar0 /*18*/], iLocal_90, &(Local_130[iVar0 /*18*/].f_5), &(Local_130[iVar0 /*18*/].f_15), &(Local_130[iVar0 /*18*/].f_11), &(Local_130[iVar0 /*18*/].f_14), &(Local_130[iVar0 /*18*/].f_16), Local_130[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_613 = iVar0;
								iLocal_614 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_203[iVar2 /*18*/]))
					{
						iVar3 = func_58(iVar0);
					}
					else
					{
						iVar3 = func_60(iVar0);
					}
					switch (Local_130[iVar0 /*18*/].f_17)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_130[iVar0 /*18*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_203[iVar2 /*18*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar2 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_130[iVar0 /*18*/], -1))
											{
												TASK::TASK_ENTER_VEHICLE(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_203[iVar3 /*18*/]))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar3 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_130[iVar0 /*18*/], 0))
												{
													TASK::TASK_ENTER_VEHICLE(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_203[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_203[iVar3 /*18*/])))
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar3 != -1 && PED::IS_PED_IN_VEHICLE(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar2 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar2 /*18*/], -1817882002) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar2 /*18*/], 3, 0);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar2 /*18*/], 1, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														TASK::TASK_VEHICLE_MISSION(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														TASK::TASK_VEHICLE_MISSION(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														TASK::TASK_VEHICLE_MISSION(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														TASK::TASK_VEHICLE_MISSION(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_203[iVar2 /*18*/], GlobalFunc_253((3f * MISC::GET_DISTANCE_BETWEEN_COORDS(Local_65, Local_130[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_573 > 3f && SYSTEM::VDIST(Local_130[iVar0 /*18*/].f_8, Local_65) < 10f)
									{
										Local_130[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_203[iVar2 /*18*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_203[iVar2 /*18*/]))
									{
										PED::SET_PED_FLEE_ATTRIBUTES(Local_203[iVar2 /*18*/], 2, 0);
										TASK::TASK_SMART_FLEE_PED(Local_203[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_203[iVar3 /*18*/]))
									{
										if (!PED::IS_PED_FLEEING(Local_203[iVar3 /*18*/]))
										{
											PED::SET_PED_FLEE_ATTRIBUTES(Local_203[iVar3 /*18*/], 2, 0);
											TASK::TASK_SMART_FLEE_PED(Local_203[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar2 /*18*/], 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_203[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_85, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_203[iVar3 /*18*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar3 /*18*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_203[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_85, iVar3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_130[iVar0 /*18*/].f_8, Local_65) > 15f)
								{
									Local_130[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_203[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_203[iVar3 /*18*/]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_130[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(Local_59, Local_130[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(Local_59, Local_203[iVar0 /*18*/].f_6) > 25f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_617)
			{
				iVar0 = 0;
				while (iVar0 < Local_130)
				{
					iVar5 = func_60(iVar0);
					if (!PED::IS_PED_INJURED(Local_203[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_203[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar5 /*18*/], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_203[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar6 /*18*/], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_203[iVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_203[iVar6 /*18*/])))
							{
								if ((PED::IS_PED_IN_VEHICLE(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar6 != -1 && PED::IS_PED_IN_VEHICLE(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
								{
									fVar7 = GlobalFunc_253((70f - (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_84)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (MISC::GET_GAME_TIMER() - iLocal_84) > 4000)
									{
										TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_203[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_130)
										{
											if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar8 /*18*/], 0) && !PED::IS_PED_INJURED(func_55(iVar8, 0))) && PED::IS_PED_IN_VEHICLE(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0))
											{
												TASK::CLEAR_PED_TASKS(func_55(iVar8, 0));
												TASK::TASK_VEHICLE_MISSION(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_617 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar5 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar5 /*18*/], -1817882002) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar5 /*18*/], 3, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar5 /*18*/], 1, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											TASK::TASK_VEHICLE_MISSION(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											TASK::TASK_VEHICLE_MISSION(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											TASK::TASK_VEHICLE_MISSION(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											TASK::TASK_VEHICLE_MISSION(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_203[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_FLEEING(Local_203[iVar5 /*18*/]))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(Local_203[iVar5 /*18*/], 2, 0);
								TASK::TASK_SMART_FLEE_PED(Local_203[iVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_203[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_FLEEING(Local_203[iVar6 /*18*/]))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(Local_203[iVar6 /*18*/], 2, 0);
									TASK::TASK_SMART_FLEE_PED(Local_203[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_616, 10f))
				{
					func_37(iLocal_616);
				}
				iLocal_616++;
				if (iLocal_616 > 3)
				{
					iLocal_616 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_616, 1125515264))
			{
				func_37(iLocal_616);
			}
			iLocal_616++;
			if (iLocal_616 > 3)
			{
				iLocal_616 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
		{
			if (iLocal_48 > 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_372))
				{
					func_28(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/].f_2) && ENTITY::IS_ENTITY_ATTACHED(Local_203[iVar0 /*18*/].f_2))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar0 /*18*/], 0))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2))
							{
								if (TASK::IS_PED_GETTING_UP(Local_203[iVar0 /*18*/]))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!TASK::IS_PED_GETTING_UP(Local_203[iVar0 /*18*/]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2, 1);
							}
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar0 /*18*/]))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iVar0 /*18*/], sLocal_372, func_27(iVar0), 3))
								{
									if (!Local_203[iVar0 /*18*/].f_11)
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iVar0 /*18*/], sLocal_372, "grip", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_203[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_203[iVar0 /*18*/].f_11)
								{
									TASK::TASK_PLAY_ANIM(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_203[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_203[iVar0 /*18*/].f_10)
							{
								STREAMING::REQUEST_ANIM_SET(sLocal_372);
								if (STREAMING::HAS_ANIM_SET_LOADED(sLocal_372))
								{
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_203[iVar0 /*18*/], sLocal_372);
									Local_203[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_203[iVar0 /*18*/].f_11)
							{
								TASK::TASK_PLAY_ANIM(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_203[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_203[iVar0 /*18*/].f_10)
							{
								PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_203[iVar0 /*18*/]);
								Local_203[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_203[iVar0 /*18*/]) && GlobalFunc_2234(Local_203[iVar0 /*18*/], PED::GET_VEHICLE_PED_IS_IN(Local_203[iVar0 /*18*/], 0)) == -1)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!ENTITY::IS_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_203[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_203[iVar0 /*18*/].f_11)
						{
							TASK::TASK_PLAY_ANIM(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_203[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_203[iVar0 /*18*/].f_10)
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_203[iVar0 /*18*/]);
							Local_203[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_46 != 7)
			{
				if (PED::IS_PED_BEING_JACKED(Local_203[iVar0 /*18*/]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
				{
					func_171(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_46 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_130)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*18*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_130[iVar0 /*18*/], 0))
					{
						func_171(7);
					}
				}
			}
			iVar0++;
		}
	}
}


char* func_27(int iParam0)//Position - 0x2C28
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)//Position - 0x2C9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET(Local_203[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_374);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0)) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)], 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)]) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sLocal_372, "grip", 3))
			{
				MISC::CLEAR_BIT(&(Local_203[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()//Position - 0x2D9B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		iVar0 = func_58(iLocal_567);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_130[iLocal_567 /*18*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iLocal_567 /*18*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(Local_130[iLocal_567 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_203[iVar0 /*18*/].f_6, Local_62) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					if (!Local_203[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (MISC::GET_GAME_TIMER() - Local_203[iVar0 /*18*/].f_13) > 1000)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iVar0 /*18*/], sLocal_373, "base", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_203[iVar0 /*18*/], sLocal_373, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_203[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_203[iVar0 /*18*/].f_6, Local_62) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					TASK::TASK_SWEEP_AIM_ENTITY(Local_203[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_85, 1070134723, 1048576000);
					Local_203[iVar0 /*18*/].f_9 = 1;
					Local_203[iVar0 /*18*/].f_13 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_203[iVar0 /*18*/].f_9)
			{
				if ((MISC::GET_GAME_TIMER() - Local_203[iVar0 /*18*/].f_13) > 2000)
				{
					Local_203[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_567++;
		if (iLocal_567 >= Local_130)
		{
			iLocal_567 = 0;
		}
	}
}

void func_30(int iParam0)//Position - 0x2F77
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(Local_203[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_85))
	{
		iVar0 = 15;
		Var1 = { Local_62 - Local_203[iParam0 /*18*/].f_6 };
		Var4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_203[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (MISC::ABSF(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x3067
{
	if (iParam1 < 15)
	{
		if (!MISC::IS_BIT_SET(Local_203[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_203[iParam0 /*18*/].f_15 = 0;
			MISC::SET_BIT(&(Local_203[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)//Position - 0x311E
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)//Position - 0x312A
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_374));
}

float func_34(struct<3> Param0, struct<3> Param3)//Position - 0x3147
{
	float fVar0;
	
	Param0 = { GlobalFunc_107(Param0) };
	Param3 = { GlobalFunc_107(Param3) };
	fVar0 = (MISC::ATAN2(Param3.f_1, Param3.x) - MISC::ATAN2(Param0.f_1, Param0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}


bool func_36(int iParam0)//Position - 0x31EC
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_373))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (MISC::IS_BIT_SET(Local_203[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)//Position - 0x3231
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_130[iParam0 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_130[iParam0 /*18*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_130[iParam0 /*18*/]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_130[iParam0 /*18*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_130[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_58(iParam0);
		}
		else
		{
			iVar1 = func_60(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar1 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar1 /*18*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_203[iVar1 /*18*/].f_2));
			}
			if (HUD::DOES_BLIP_EXIST(Local_203[iVar1 /*18*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_203[iVar1 /*18*/].f_1));
			}
			PED::DELETE_PED(&(Local_203[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)//Position - 0x32FF
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_130[iParam0 /*18*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(Local_59, Local_130[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_130[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(Local_59, Local_203[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(Local_59, Local_203[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_55(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}


void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x341F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (GlobalFunc_2900(iParam0, iParam1, iLocal_357, ENTITY::GET_ENTITY_COORDS(iParam1, 1), ENTITY::GET_ENTITY_ROTATION(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
					*uParam4 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iParam1);
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if ((GlobalFunc_156(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam2) > 100f)
				{
					if (!GlobalFunc_105(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 6f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 6f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 6f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, GlobalFunc_253((ENTITY::GET_ENTITY_SPEED(iParam1) + 10f), 10f, 60f));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}




void func_44()//Position - 0x37A4
{
	bool bVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_566) > 100)
	{
		if ((MISC::GET_GAME_TIMER() - Local_203[iLocal_565 /*18*/].f_12) > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_203[iLocal_565 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iLocal_565 /*18*/]))
			{
				bVar0 = true;
				if (!Local_203[iLocal_565 /*18*/].f_9 && PED::IS_PED_IN_ANY_VEHICLE(Local_203[iLocal_565 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) > 0.5f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) < 0.75f) || Local_203[iLocal_565 /*18*/].f_9)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_203[iLocal_565 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_565 % 3) == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER_FLASH", ENTITY::GET_ENTITY_COORDS(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_565 % 3) == 1)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER", ENTITY::GET_ENTITY_COORDS(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "FLASH", ENTITY::GET_ENTITY_COORDS(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_203[iLocal_565 /*18*/].f_12 = MISC::GET_GAME_TIMER();
					}
					iLocal_566 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_565++;
			if (iLocal_565 >= Local_203)
			{
				iLocal_565 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x3947
{
	if (!PED::IS_PED_INJURED(Local_203[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_FACING_PED(Local_203[iParam1 /*18*/], iParam0, 20f))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iParam1 /*18*/], -875674219) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_203[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_203[iParam1 /*18*/].f_13) > 2000)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 3))
			{
				TASK::TASK_PLAY_ANIM(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_203[iParam1 /*18*/].f_13 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)//Position - 0x39F7
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(Local_203[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_48(iParam1)) };
		switch (Local_203[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_203[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(Var0, Local_203[iParam1 /*18*/].f_6) > 5f)
				{
					Local_203[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var0, Local_203[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_203[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(Var0, Local_203[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iParam1 /*18*/], 713668775) != 1)
				{
					Local_203[iParam1 /*18*/].f_16 = (Local_203[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam3, int iParam4)//Position - 0x3B48
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iParam4, 1) - Param0) };
	iVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
	Local_203[iParam3 /*18*/].f_3 = { Param0 };
	TASK::CLEAR_PED_TASKS(Local_203[iParam3 /*18*/]);
	if (SYSTEM::VDIST(Param0, Local_203[iParam3 /*18*/].f_6) < 2f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_48(int iParam0)//Position - 0x3BE2
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()//Position - 0x3CCF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (HUD::DOES_BLIP_EXIST(Local_203[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
			{
				HUD::REMOVE_BLIP(&(Local_203[iVar0 /*18*/].f_1));
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar0 /*18*/], 0))
			{
				HUD::REMOVE_BLIP(&(Local_203[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar0 /*18*/], 0))
		{
			Local_203[iVar0 /*18*/].f_1 = GlobalFunc_7491(Local_203[iVar0 /*18*/], 1, 145);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_203[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar0 /*18*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_130[iVar0 /*18*/].f_1))
			{
				Var1 = { HUD::GET_BLIP_COORDS(Local_130[iVar0 /*18*/].f_1) };
				Var4 = { Local_130[iVar0 /*18*/].f_8 };
				Var1.x = (Var1.x + ((Var4.x - Var1.x) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				HUD::SET_BLIP_COORDS(Local_130[iVar0 /*18*/].f_1, Var1);
				if (GlobalFunc_1996(Local_130[iVar0 /*18*/], 1, 0, 0))
				{
					HUD::REMOVE_BLIP(&(Local_130[iVar0 /*18*/].f_1));
				}
			}
			else if (!GlobalFunc_1996(Local_130[iVar0 /*18*/], 1, 0, 0))
			{
				Local_130[iVar0 /*18*/].f_1 = GlobalFunc_5104(Local_130[iVar0 /*18*/].f_8, 0);
				HUD::SET_BLIP_COLOUR(Local_130[iVar0 /*18*/].f_1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_130[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				HUD::SET_BLIP_PRIORITY(Local_130[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_130[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}




void func_53(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)//Position - 0x3F98
{
	if (!PED::IS_PED_INJURED(Local_203[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_203[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iParam0 /*18*/], 713668775) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_203[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (MISC::ABSF((func_54(ENTITY::GET_ENTITY_HEADING(Local_203[iParam0 /*18*/])) - func_54(fParam4))) > 10f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iParam0 /*18*/], 1920390111) != 1)
			{
				TASK::TASK_ACHIEVE_HEADING(Local_203[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_203[iParam0 /*18*/].f_16)
			{
				case 0:
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_203[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_54(float fParam0)//Position - 0x4173
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_55(int iParam0, int iParam1)//Position - 0x41A7
{
	if (iParam1 == 0)
	{
		return Local_203[func_60(iParam0) /*18*/];
	}
	return Local_203[func_58(iParam0) /*18*/];
}

void func_56(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x41CF
{
	if ((iParam0 % 2) == 1)
	{
		Local_130[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_130[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_130[iParam0 /*18*/], 0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_130[iParam0 /*18*/]);
	VEHICLE::SET_VEHICLE_STRONG(Local_130[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam4);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_55(iParam0, 0), Local_130[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_55(iParam0, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_55(iParam0, 1), Local_130[iParam0 /*18*/], 0);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_130[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam4)//Position - 0x42E2
{
	Local_203[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iParam0 /*18*/], 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_203[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iParam0 /*18*/], 0, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_203[iParam0 /*18*/], 3);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_203[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iParam0 /*18*/], 17, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_203[iParam0 /*18*/], 2, 0);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_203[iParam0 /*18*/], 0);
	PED::SET_PED_KEEP_TASK(Local_203[iParam0 /*18*/], 1);
	PED::SET_PED_SHOOT_RATE(Local_203[iParam0 /*18*/], 100);
	PED::SET_PED_FIRING_PATTERN(Local_203[iParam0 /*18*/], -957453492);
	PED::SET_PED_CONFIG_FLAG(Local_203[iParam0 /*18*/], 101, 1);
	PED::SET_PED_CONFIG_FLAG(Local_203[iParam0 /*18*/], 185, 0);
	ENTITY::SET_ENTITY_HEALTH(Local_203[iParam0 /*18*/], 300);
	PED::SET_PED_COMPONENT_VARIATION(Local_203[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_69)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_203[iParam0 /*18*/], 1);
		ENTITY::SET_ENTITY_HEALTH(Local_203[iParam0 /*18*/], 500);
	}
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_203[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_203[iParam0 /*18*/], 2, 1);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_203[iParam0 /*18*/], 2f);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_203[iParam0 /*18*/], 0);
	PED::SET_PED_HELMET(Local_203[iParam0 /*18*/], 0);
	Local_203[iParam0 /*18*/].f_2 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), PED::GET_PED_BONE_COORDS(Local_203[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_203[iParam0 /*18*/].f_2, Local_203[iParam0 /*18*/], PED::GET_PED_BONE_INDEX(Local_203[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_203[0 /*18*/].f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_203[0 /*18*/].f_2, 0);
	}
	Local_203[iParam0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_203[iParam0 /*18*/]);
}

int func_58(int iParam0)//Position - 0x44A2
{
	return iParam0 * 2 + 1;
}

void func_59(int iParam0)//Position - 0x44B0
{
	if ((iParam0 % 2) == 1)
	{
		Local_203[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_203[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_60(int iParam0)//Position - 0x44DD
{
	return iParam0 * 2;
}

void func_61(int iParam0)//Position - 0x44E9
{
	Local_130[iParam0 /*18*/].f_17 = 0;
}

int func_62()//Position - 0x44FA
{
	bool bVar0;
	bool bVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		bVar0 = false;
		if (func_65())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_64()))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_64(), 1), Local_62) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_90) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0) && PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
			{
				fLocal_569 = (fLocal_569 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_569 > 0f)
			{
				fLocal_569 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_568 = (fLocal_568 + MISC::GET_FRAME_TIME());
		}
		else if (fLocal_568 > 0f)
		{
			fLocal_568 = 0f;
		}
		if (fLocal_568 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_70)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, iLocal_90))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_85))
				{
					bVar1 = true;
				}
				iLocal_70 = 0;
			}
		}
		if (!iLocal_70)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, iLocal_90))
			{
				iLocal_70 = 1;
			}
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && (!bLocal_367 || iLocal_46 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(Local_62, Local_59) > 30f)
		{
			bVar1 = true;
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && func_63(iLocal_90)) && (!bLocal_367 || iLocal_46 == 1)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_85, 1), Local_55) > 15f)
		{
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && ENTITY::IS_ENTITY_IN_WATER(iLocal_90))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
			{
				sLocal_370 = "REPAP_GUP";
			}
			else
			{
				sLocal_370 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x46B7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_64()//Position - 0x471C
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_85))
		{
			if (SYSTEM::VDIST2(Local_62, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_62, Local_203[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_203[iVar1 /*18*/];
	}
	return 0;
}

int func_65()//Position - 0x47AA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()//Position - 0x47E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (func_67(Local_203[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]) || ENTITY::IS_ENTITY_DEAD(Local_203[iVar0 /*18*/]))
			{
				if (iLocal_385[iVar0] > 50)
				{
					iLocal_348++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)//Position - 0x4858
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (MISC::IS_BULLET_IN_AREA(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(Var0, Local_59) < 400f)
		{
			if (!bParam2)
			{
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(Local_59, Var0) < 9f)
			{
				return 1;
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) && (func_68(Local_59, iParam0) && SYSTEM::VDIST2(Local_59, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) < 100f)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
			if (iLocal_384 > 150)
			{
				return 1;
			}
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, int iParam3)//Position - 0x49B1
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam3, 1) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = GlobalFunc_168(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}


void func_70()//Position - 0x4A22
{
	if (iLocal_46 != 11)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_361))
		{
			HUD::REMOVE_BLIP(&uLocal_361);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_362))
		{
			HUD::REMOVE_BLIP(&uLocal_362);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_359))
		{
			HUD::REMOVE_BLIP(&uLocal_359);
		}
		iLocal_47 = iLocal_46;
		iLocal_46 = 11;
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			if (!func_73())
			{
				func_71("REPAP_COP1");
			}
		}
		else
		{
			func_171(5);
		}
	}
	else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_46 = iLocal_47;
	}
}

void func_71(char* sParam0)//Position - 0x4ABB
{
	if ((MISC::GET_GAME_TIMER() - iLocal_666) > 5000)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10652(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_666 = MISC::GET_GAME_TIMER();
			}
		}
	}
}


bool func_73()//Position - 0x4B15
{
	if (!PED::IS_PED_INJURED(iLocal_85) && SYSTEM::VDIST2(Local_59, Local_62) < 400f)
	{
		if (!iLocal_349 && (MISC::GET_GAME_TIMER() - iLocal_351) > 5000)
		{
			if (iLocal_81 > 10)
			{
				iLocal_349 = 1;
				iLocal_81 = 0;
			}
		}
		if ((!iLocal_354 && !iLocal_349) && (MISC::GET_GAME_TIMER() - iLocal_355) > 4000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_356 > 2)
				{
					if (!Global_3 && !bLocal_69)
					{
						func_171(5);
					}
				}
				else
				{
					iLocal_354 = 1;
					iLocal_356++;
				}
			}
		}
		if (((!iLocal_352 && !iLocal_349) && !iLocal_354) && (MISC::GET_GAME_TIMER() - iLocal_353) > 15000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_352 = 1;
			}
		}
		if (iLocal_349)
		{
			if (iLocal_350)
			{
				if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_351 = MISC::GET_GAME_TIMER();
					iLocal_349 = 0;
				}
			}
			else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_351 = MISC::GET_GAME_TIMER();
				iLocal_349 = 0;
				iLocal_350 = 1;
			}
		}
		if (iLocal_354)
		{
			if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_355 = MISC::GET_GAME_TIMER();
				iLocal_354 = 0;
			}
		}
		if (iLocal_352)
		{
			if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_352 = 0;
			}
		}
	}
	return ((iLocal_352 || iLocal_354) || iLocal_349);
}

void func_74()//Position - 0x4CC5
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		PED::SET_PED_KEEP_TASK(iLocal_85, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_68, 1862763509);
		if (!Global_3 && !bLocal_69)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_85, 317, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 0);
		}
	}
	func_78(-1, 0);
	GlobalFunc_7068();
	AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
	func_267();
}




void func_78(int iParam0, int iParam1)//Position - 0x4DA2
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}





















void func_99()//Position - 0x617D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_359))
	{
		HUD::REMOVE_BLIP(&uLocal_359);
	}
	switch (iLocal_368)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_203)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_203[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_203[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_203[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_203[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_203[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_130)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_130[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_130[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 900f)
					{
						VEHICLE::DELETE_VEHICLE(&(Local_130[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_130[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_130[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_672 = 0;
			iLocal_368++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_203)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/])) && !ENTITY::IS_ENTITY_DEAD(Local_203[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(PLAYER::PLAYER_PED_ID(), iVar0);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_203[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_203[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_203[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_672)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(func_64(), 1)) < 100f)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_200(&Local_394, 6);
						GlobalFunc_200(&Local_394, 7);
						GlobalFunc_200(&Local_394, 8);
						switch (iVar2)
						{
							case 0:
								GlobalFunc_1286(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[6 /*10*/]) && !PED::IS_PED_INJURED(Local_394[6 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								GlobalFunc_1286(&Local_394, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[7 /*10*/]) && !PED::IS_PED_INJURED(Local_394[7 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								GlobalFunc_1286(&Local_394, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[8 /*10*/]) && !PED::IS_PED_INJURED(Local_394[8 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_200(&Local_394, 6);
						GlobalFunc_200(&Local_394, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								GlobalFunc_1286(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								GlobalFunc_1286(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								GlobalFunc_1286(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else
					{
						GlobalFunc_200(&Local_394, 6);
						GlobalFunc_200(&Local_394, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								GlobalFunc_1286(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								GlobalFunc_1286(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								GlobalFunc_1286(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_394[iVar2 /*10*/]))
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_66())
			{
				func_183();
				func_267();
			}
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}

void func_100(char* sParam0)//Position - 0x6736
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (!iLocal_671)
	{
		iVar0 = 0;
		while (iVar0 < Local_203)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_203[iVar0 /*18*/]);
				Local_203[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_671 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (HUD::DOES_BLIP_EXIST(Local_203[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_203[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_85))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_203[iVar0 /*18*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_203[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_85, iVar0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_203[iVar0 /*18*/], -1146898486) != 1)
				{
					TASK::TASK_WANDER_STANDARD(Local_203[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_203[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_203[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_203[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 400f)
			{
				PED::DELETE_PED(&(Local_203[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/].f_2))
				{
					OBJECT::DELETE_OBJECT(&(Local_203[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*18*/]))
		{
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_130[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_130[iVar0 /*18*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f) && GlobalFunc_1996(Local_130[iVar0 /*18*/], 0, 0, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_130[iVar0 /*18*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_130[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_85) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_62) > 2500f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_85);
			func_267();
		}
	}
	if (func_66() || func_67(iLocal_85, 1, 1))
	{
		func_171(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_368)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(uLocal_359))
			{
				HUD::REMOVE_BLIP(&uLocal_359);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_360))
			{
				HUD::REMOVE_BLIP(&uLocal_360);
			}
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				TASK::CLEAR_PED_TASKS(iLocal_85);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 3f);
			}
			GlobalFunc_4956();
			if (SYSTEM::VDIST(Local_59, Local_62) < 30f)
			{
				if (GlobalFunc_10652(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_203)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_203[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_368++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_203)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_203[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_368++;
			}
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0)) && !bLocal_367) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_90, -1))
			{
				if (SYSTEM::VDIST(Local_62, Local_52) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_90);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_90, Local_52, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_90, Local_52, 288.7089f, 1, 50f, 0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_90, ENTITY::GET_ENTITY_COORDS(iLocal_90, 1), 5, 10f, 262144, 2f, 2f, 1);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_90, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_90);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_90, 15f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				}
				iLocal_368 = 1000;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_85, 0, 0);
				}
				iLocal_368++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 3000f, -1, 1, 0);
				iLocal_368 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(Local_62, Local_52) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_85, 1193033728, 0);
				}
				iLocal_368 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}



void func_103()//Position - 0x6CCA
{
	GlobalFunc_4956();
	if (!PED::IS_PED_INJURED(iLocal_85) && SYSTEM::VDIST2(Local_59, Local_62) < 900f)
	{
		TASK::CLEAR_PED_TASKS(iLocal_85);
		if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_183();
			func_171(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_85, -2065892691);
	}
	else
	{
		func_183();
		func_171(10);
	}
}

void func_104()//Position - 0x6D34
{
	var uVar0;
	
	switch (iLocal_368)
	{
		case 0:
			func_132();
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_359))
				{
					uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_362))
				{
					HUD::REMOVE_BLIP(&uLocal_362);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_361))
				{
					HUD::REMOVE_BLIP(&uLocal_361);
				}
				TASK::CLEAR_PED_TASKS(iLocal_85);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_90, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				if (PED::IS_PED_IN_GROUP(iLocal_85))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_85);
				}
				GlobalFunc_4956();
				iLocal_368++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111() && !PED::IS_PED_INJURED(iLocal_85))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_55, 3f, 3f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				func_131(0);
				if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
				{
					GlobalFunc_10829(GlobalFunc_8329(), 1, 150, 0, 1);
					iLocal_368++;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111() && !PED::IS_PED_INJURED(iLocal_85))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_368++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (GlobalFunc_82())
				{
					func_74();
				}
			}
			break;
	}
}



























void func_131(bool bParam0)//Position - 0x7E7C
{
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (iLocal_620 > 1)
		{
			if (!PED::IS_PED_FACING_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_620 = 0;
				iLocal_621 = 0;
			}
		}
		switch (iLocal_620)
		{
			case 0:
				TASK::CLEAR_PED_TASKS(iLocal_85);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_619);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_619);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uLocal_619);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_619);
				iLocal_620++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 242628503) != 1)
				{
					iLocal_620++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_621)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "random@paparazzi@wait", "wait_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_85, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "random@paparazzi@wait", "wait_b", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_85, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "random@paparazzi@wait", "wait_c", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_85, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_132()//Position - 0x809C
{
	if (HUD::DOES_BLIP_EXIST(uLocal_363))
	{
		HUD::REMOVE_BLIP(&uLocal_363);
	}
}

void func_133()//Position - 0x80B5
{
	var uVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
	{
		switch (iLocal_368)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					func_132();
					GlobalFunc_8316(1, 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_361))
					{
						HUD::REMOVE_BLIP(&uLocal_361);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_359))
					{
						HUD::REMOVE_BLIP(&uLocal_359);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_360))
					{
						HUD::REMOVE_BLIP(&uLocal_360);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_85))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_85);
					}
					GlobalFunc_5105();
					if (!PED::IS_PED_INJURED(iLocal_85))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_85, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 1280);
					if ((bLocal_367 || Global_3) || bLocal_69)
					{
						while (!GlobalFunc_10726(&Local_394, cLocal_371, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					GlobalFunc_10829(GlobalFunc_8329(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_85))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_85, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_85, 0, 0);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_368++;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111() && !PED::IS_PED_INJURED(iLocal_85))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_90, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_368++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_367)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							GlobalFunc_8316(0, 1, 0, 0);
							iLocal_368 = 5;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0)) && SYSTEM::TIMERA() > 1000)
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 10000, 0, 3);
					iLocal_368++;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_8316(0, 1, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_90, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_368++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (GlobalFunc_82())
					{
						if (!bLocal_367)
						{
							if (!GlobalFunc_63(19))
							{
								GlobalFunc_6677("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								GlobalFunc_651(19);
							}
						}
						func_74();
					}
				}
				break;
			}
	}
}











void func_144()//Position - 0x866B
{
	if (Global_3 || bLocal_69)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	}
	if (bLocal_367 && !PED::IS_PED_INJURED(iLocal_85))
	{
		if (!func_164(iLocal_85))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_359))
			{
				uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_361))
				{
					uLocal_361 = GlobalFunc_5104(Local_52, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_362))
				{
					HUD::REMOVE_BLIP(&uLocal_362);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_362))
				{
					uLocal_362 = GlobalFunc_5104(Local_55, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_361))
				{
					HUD::REMOVE_BLIP(&uLocal_361);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_359))
			{
				HUD::REMOVE_BLIP(&uLocal_359);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && func_163(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_90 = 0;
				iLocal_90 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_90, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_90, 0, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_362) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55, 15f, 15f, 15f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_171(4);
			}
		}
		else if (iLocal_368 != 100)
		{
			if (func_65() && GlobalFunc_552(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_368 = 100;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_368 != 100)
		{
			if (func_65() && GlobalFunc_552(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_368 = 100;
				}
			}
		}
		func_158(1);
	}
	switch (iLocal_368)
	{
		case 0:
			if (func_65())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85);
				}
				if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_HM", 4, 0, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					iLocal_368++;
				}
				if (!GlobalFunc_832())
				{
					func_152();
				}
			}
			break;
		
		case 1:
			if (!func_73())
			{
				if (func_65())
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8329() == 0)
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (GlobalFunc_8329() == 1)
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_73())
			{
				if (func_65())
				{
					if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_69)
						{
							iLocal_368 = 99;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME1", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_8329() == 0)
			{
				if (func_148("REPAP_HOME1M", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (GlobalFunc_8329() == 1)
			{
				if (func_148("REPAP_HOME1F", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (func_148("REPAP_HOME1T", (func_151() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 5:
			if (func_148("REPAP_HOME1L", (func_151() && !func_73())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_368++;
			}
			break;
		
		case 6:
			if (!func_73())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_151())
					{
						if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (func_147("REPAP_HOME2"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 8:
			if (func_148("REPAP_HOME2L", (func_151() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 9:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (func_147("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME3", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 11:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (func_147("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_HOME4", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 13:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (func_147("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_148("REPAP_NOBAN", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 15:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (func_147("REPAP_NOBAN"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_73())
			{
				if (func_151() && !GlobalFunc_111())
				{
					if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 17:
			func_73();
			break;
		
		case 100:
			if (GlobalFunc_763(iLocal_90, 5f, 5, 1056964608, 0, 1))
			{
				func_172("");
				func_171(3);
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_70();
	}
	if (GlobalFunc_8329() == 2)
	{
		if ((GlobalFunc_831() && !GlobalFunc_832()) && iLocal_46 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_85))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_85, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_85, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_85, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					}
					GlobalFunc_4956();
					iLocal_46 = 8;
				}
			}
		}
	}
}



int func_147(char* sParam0)//Position - 0x9003
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (GlobalFunc_8329() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (GlobalFunc_8329() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (GlobalFunc_10652(&Local_394, cLocal_371, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_148(char* sParam0, bool bParam1)//Position - 0x9057
{
	if (bParam1)
	{
		if (!iLocal_71)
		{
			if (GlobalFunc_10652(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_71 = 1;
				iLocal_72 = 0;
			}
		}
		else if (iLocal_72)
		{
			if (GlobalFunc_10699(&Local_394, cLocal_371, sParam0, &Local_74, 4, 0, 0))
			{
				iLocal_72 = 0;
			}
		}
		if ((iLocal_71 && !iLocal_72) && bParam1)
		{
			if (iLocal_80 == -1)
			{
				if (!GlobalFunc_111())
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_80) > 500)
			{
				iLocal_80 = -1;
				iLocal_71 = 0;
				iLocal_72 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_71 && !iLocal_72)
	{
		Local_74 = { GlobalFunc_514() };
		GlobalFunc_5105();
		iLocal_72 = 1;
	}
	return 0;
}



int func_151()//Position - 0x9207
{
	if (bLocal_367)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, 0))
		{
			if (SYSTEM::VDIST2(Local_59, Local_62) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_65();
	}
	return 0;
}

void func_152()//Position - 0x9268
{
	if (GlobalFunc_8329() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_363))
		{
			GlobalFunc_9564();
			uLocal_363 = func_154(-1034.6f, 4918.6f, 205.9f, 0);
			HUD::SET_BLIP_SPRITE(uLocal_363, 269);
			GlobalFunc_9563();
		}
	}
}


var func_154(struct<3> Param0, int iParam3)//Position - 0x92C8
{
	return GlobalFunc_5104(Param0, iParam3);
}




void func_158(bool bParam0)//Position - 0x9331
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0) && !PED::IS_PED_INJURED(iLocal_85))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_361))
				{
					uLocal_361 = GlobalFunc_5104(Local_52, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_359))
			{
				HUD::REMOVE_BLIP(&uLocal_359);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_360))
			{
				HUD::REMOVE_BLIP(&uLocal_360);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_361))
			{
				HUD::REMOVE_BLIP(&uLocal_361);
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_360))
				{
					uLocal_360 = GlobalFunc_7056(iLocal_90, 0, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_359))
				{
					uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_359))
			{
				HUD::REMOVE_BLIP(&uLocal_359);
			}
		}
	}
}



int func_161(int iParam0)//Position - 0x94BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}


int func_163(int iParam0)//Position - 0x95E5
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x9630
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_18, 0, 1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	return 0;
}

void func_165()//Position - 0x969A
{
	if (!PED::IS_PED_INJURED(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, -1794415470) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_64()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_85, 1), ENTITY::GET_ENTITY_COORDS(func_64(), 1)) < 100f) && (ENTITY::GET_ENTITY_SPEED(iLocal_90) < 5f || !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_90))))
		{
			if (bLocal_367)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, iLocal_90))
				{
					TASK::TASK_PLAY_ANIM(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, iLocal_90))
			{
				TASK::TASK_PLAY_ANIM(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_85, iLocal_90))
		{
			TASK::CLEAR_PED_TASKS(iLocal_85);
		}
		switch (iLocal_368)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_64()) && !PED::IS_PED_INJURED(func_64()))
					{
						GlobalFunc_200(&Local_394, 4);
						GlobalFunc_1286(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_48 = 2;
					GlobalFunc_4956();
					if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_GO", 4, 0, 0, 0))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 1);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_68, 1862763509);
						iLocal_357 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_86, 1, 1, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_357, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_357, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, 1);
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				func_167();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_85, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_368++;
					iLocal_369 = MISC::GET_GAME_TIMER();
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_667)
				{
					if (((((iLocal_669 != 1 && iLocal_669 != 3) && iLocal_669 != 6) && iLocal_669 != 9) && iLocal_669 != 11) && iLocal_669 != 13)
					{
						bLocal_668 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_64()) && ENTITY::IS_ENTITY_AT_ENTITY(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = true;
						}
					}
				}
				else
				{
					if (!GlobalFunc_111())
					{
						bLocal_668 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_64()))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = false;
						}
					}
				}
				if (bLocal_668)
				{
					if (!func_73())
					{
						if (!func_166())
						{
							func_167();
						}
					}
				}
				else
				{
					switch (iLocal_669)
					{
						case 0:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (func_147("REPAP_RES1"))
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
									iLocal_669++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
								{
									if (func_147("REPAP_CHT2"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
									iLocal_669++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 6000)
							{
								if (GlobalFunc_8329() == 0)
								{
									if (func_148("REPAP_CHT3M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (GlobalFunc_8329() == 1)
								{
									if (func_148("REPAP_CHT3F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT3T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 4)
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (GlobalFunc_8329() == 0)
								{
									if (func_148("REPAP_CHT4M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (GlobalFunc_8329() == 1)
								{
									if (func_148("REPAP_CHT4F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT4T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 5)
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (GlobalFunc_8329() == 0)
								{
									if (func_148("REPAP_CHT5M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (GlobalFunc_8329() == 1)
								{
									if (func_148("REPAP_CHT5F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT5T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 6)
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
								{
									if (func_147("REPAP_CHT6"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
									iLocal_669++;
								}
							}
							break;
						
						case 9:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
								{
									if (func_147("REPAP_CHT7"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_670 = MISC::GET_GAME_TIMER();
									iLocal_669++;
								}
							}
							break;
						
						case 11:
							if ((MISC::GET_GAME_TIMER() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
								{
									if (func_147("REPAP_CHT8"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_667 && func_151()) && !func_73()) && !GlobalFunc_111())
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_64()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_368++;
					GlobalFunc_5105();
					if (!Global_3 && !bLocal_69)
					{
						iLocal_48 = 6;
					}
				}
				if (Global_3 || bLocal_69)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_48 = 4;
						iLocal_84 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_65())
				{
					func_172("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_171(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_158(0);
	}
}

int func_166()//Position - 0x9FC3
{
	int iVar0;
	
	iVar0 = func_24();
	if ((MISC::GET_GAME_TIMER() - iLocal_665) > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_90) && PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 1))
			{
				if (iVar0 != -1 && (MISC::GET_GAME_TIMER() - Local_203[iVar0 /*18*/].f_12) < 3000)
				{
					if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_665 = MISC::GET_GAME_TIMER();
						return 1;
					}
				}
			}
			else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_665 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_167()//Position - 0xA065
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_563) > iLocal_564)
	{
		if ((!PED::IS_PED_INJURED(iLocal_85) && ENTITY::DOES_ENTITY_EXIST(func_64())) && !PED::IS_PED_INJURED(func_64()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_62, ENTITY::GET_ENTITY_COORDS(func_64(), 1), 1) < 8f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				GlobalFunc_200(&Local_394, 4);
				GlobalFunc_200(&Local_394, 5);
				GlobalFunc_200(&Local_394, 6);
				GlobalFunc_200(&Local_394, 7);
				switch (iVar0)
				{
					case 0:
						GlobalFunc_1286(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_394[4 /*10*/]) && !PED::IS_PED_INJURED(Local_394[4 /*10*/]))
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
								iLocal_564 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 1:
						GlobalFunc_1286(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_394[4 /*10*/]) && !PED::IS_PED_INJURED(Local_394[4 /*10*/]))
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
								iLocal_564 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 2:
						GlobalFunc_1286(&Local_394, 5, func_64(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_394[5 /*10*/]) && !PED::IS_PED_INJURED(Local_394[5 /*10*/]))
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
								iLocal_564 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 3:
						GlobalFunc_1286(&Local_394, 6, func_64(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_394[6 /*10*/]) && !PED::IS_PED_INJURED(Local_394[6 /*10*/]))
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
								iLocal_564 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 4:
						GlobalFunc_1286(&Local_394, 7, func_64(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_394[7 /*10*/]) && !PED::IS_PED_INJURED(Local_394[7 /*10*/]))
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_563 = MISC::GET_GAME_TIMER();
								iLocal_564 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_168()//Position - 0xA2CC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_359))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_359, iLocal_663);
		}
		switch (iLocal_368)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait"))
				{
					uLocal_624 = PED::CREATE_SYNCHRONIZED_SCENE(Local_652, Local_655, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_85, uLocal_624, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_625[0] = "peek_a";
					sLocal_625[1] = "peek_b";
					sLocal_625[2] = "peek_c";
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_622 = 0;
					iLocal_658 = 0;
					iLocal_663 = 0;
					iLocal_73 = 1;
					iLocal_659 = 0;
					iLocal_70 = 0;
					fLocal_660 = 0f;
					iLocal_368++;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(iLocal_659, 0))
				{
					if (!MISC::IS_BIT_SET(iLocal_659, 1))
					{
						MISC::SET_BIT(&iLocal_659, 1);
					}
					else
					{
						iLocal_659 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_638, Local_641, fLocal_644, 0, 1, 0);
				bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_631, Local_634, fLocal_637, 0, 1, 0);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_630, "right_"))
				{
					if (bVar1)
					{
						sLocal_630 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_630 = "right_";
					iVar2 = 1;
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_624) > 0.9f) || iVar2)
				{
					if (iLocal_659 == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_85);
						iLocal_629++;
						if (iLocal_629 >= 3)
						{
							iLocal_629 = 0;
						}
						StringCopy(&cVar3, sLocal_630, 24);
						StringConCat(&cVar3, sLocal_625[iLocal_629], 24);
						uLocal_624 = PED::CREATE_SYNCHRONIZED_SCENE(Local_652, Local_655, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						MISC::SET_BIT(&iLocal_659, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_660 <= 20f)
					{
						fLocal_660 = (fLocal_660 + MISC::GET_FRAME_TIME());
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_623) > 5000 && iLocal_659 == 0)
					{
						if (SYSTEM::VDIST2(Local_59, Local_62) < (22.2f * 22.2f))
						{
							if (fLocal_660 < 10f)
							{
								if (iLocal_661)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (GlobalFunc_8329() == 1)
							{
								GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (GlobalFunc_8329() == 0)
							{
								GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (GlobalFunc_10652(&Local_394, cLocal_371, sVar9, 4, 0, 0, 0))
							{
								iLocal_661 = 1;
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_85, 7f, 7f, 7f, 0, 1, 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_85);
									StringCopy(&cVar10, sLocal_630, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_624 = PED::CREATE_SYNCHRONIZED_SCENE(Local_652, Local_655, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									MISC::SET_BIT(&iLocal_659, 0);
								}
								iLocal_623 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_645, Local_648, fLocal_651, 0, 1, 0) && iLocal_659 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_358))
					{
						HUD::REMOVE_BLIP(&uLocal_358);
						if (!HUD::DOES_BLIP_EXIST(uLocal_359))
						{
							uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_85);
					uLocal_624 = PED::CREATE_SYNCHRONIZED_SCENE(Local_652, Local_655, 2);
					if (bVar1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					MISC::SET_BIT(&iLocal_659, 0);
					iLocal_368++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_624) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_624) > 0.9f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 242628503) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_85);
						TASK::TASK_PLAY_ANIM(iLocal_85, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_620 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_368++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_170())
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_90);
						iLocal_90 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, 1, 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_90, 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_90, 1);
						bLocal_367 = true;
					}
				}
				if (!bLocal_367)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_90, 1);
					if (GlobalFunc_10726(&Local_394, cLocal_371, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_663 = 1;
						iLocal_368 = 100;
					}
				}
				else if (GlobalFunc_10726(&Local_394, cLocal_371, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_663 = 1;
					iLocal_368++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_169(Local_86, 1);
				}
				break;
			
			case 4:
				func_49();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, iLocal_85, Global_18 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_367)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 242628503) != 1 && !iLocal_658)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar16);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar16);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_85, uVar16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_85, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar16);
							iLocal_658 = 1;
						}
						else
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 1f);
							func_169(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_169(Local_86, 1);
					}
					if (!bLocal_367)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_360))
							{
								HUD::REMOVE_BLIP(&uLocal_360);
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_359))
							{
								uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, iLocal_85, Global_18, 0, 1, 0) && func_163(iLocal_90)) && (SYSTEM::TIMERA() > 6000 || !bLocal_367))
					{
						if (!iLocal_622)
						{
							GlobalFunc_4956();
							if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_8329() == 1)
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (GlobalFunc_8329() == 0)
								{
									if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (GlobalFunc_8329() == 1)
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (GlobalFunc_8329() == 0)
							{
								if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_622 = 1;
							}
						}
						else
						{
							if (!bLocal_367)
							{
								iLocal_368 = -5;
							}
							else
							{
								iLocal_368++;
							}
							TASK::CLEAR_PED_TASKS(iLocal_85);
							TASK::TASK_ENTER_VEHICLE(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_367)
				{
					func_169(Local_86, 1);
				}
				else
				{
					func_169(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (GlobalFunc_763(iLocal_90, 1093140480, 1, 1056964608, 0, 1))
					{
						iLocal_368 = 5;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_85) && PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_359))
						{
							HUD::REMOVE_BLIP(&uLocal_359);
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						func_171(1);
					}
					else
					{
						if (!Global_3 && !bLocal_69)
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_90, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_367)
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_GUP";
									func_171(6);
								}
								else
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_CP";
									func_171(6);
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_85, iLocal_90, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_85);
								TASK::TASK_ENTER_VEHICLE(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(Local_62, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_90, 1f, 0f, 0f)) < 1f)
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_85, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_4956();
						if (GlobalFunc_8329() == 1)
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_4956();
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
							iLocal_73 = 0;
						}
						else if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
				if (iLocal_368 == 101)
				{
					fLocal_664 = 0f;
				}
				func_169(Local_86, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(Local_59, Local_62) < 49f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_664 = (fLocal_664 + MISC::GET_FRAME_TIME());
					}
					else
					{
						fLocal_664 = (fLocal_664 - (MISC::GET_FRAME_TIME() * 2f));
					}
					if (fLocal_664 > 10f)
					{
						if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_664 = 0f;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0) && func_170())
					{
						bLocal_367 = true;
						iLocal_73 = 1;
						iLocal_90 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, 1, 1);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_360))
						{
							HUD::REMOVE_BLIP(&uLocal_360);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_359))
						{
							uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_359))
						{
							HUD::REMOVE_BLIP(&uLocal_359);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_360))
						{
							uLocal_360 = GlobalFunc_7056(iLocal_90, 0, 0);
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_90))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_360))
						{
							HUD::REMOVE_BLIP(&uLocal_360);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_359))
						{
							uLocal_359 = GlobalFunc_7491(iLocal_85, 0, 145);
						}
						func_172("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_368 = 4;
					}
					if (!iLocal_73)
					{
						if (SYSTEM::VDIST2(Local_59, Local_65) < 9f && GlobalFunc_8329() == 0)
						{
							if (GlobalFunc_10652(&Local_394, cLocal_371, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_73 = 1;
							}
						}
					}
				}
				func_169(Local_86, 1);
				break;
		}
		if (!Global_3 && !bLocal_69)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
			{
				if (SYSTEM::VDIST(Local_59, Local_86) > 75f)
				{
					func_171(6);
				}
				if (func_184())
				{
					func_171(5);
				}
			}
		}
		if (!bLocal_367)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_90, 0))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_171(5);
				}
			}
			else
			{
				if (!bLocal_367)
				{
					if (!Global_3 && !bLocal_69)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_90) < iLocal_82)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_83 = (iLocal_83 + (iLocal_82 - ENTITY::GET_ENTITY_HEALTH(iLocal_90)));
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_90);
						}
						if (iLocal_83 > 250)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_85, iLocal_90) && SYSTEM::VDIST(Local_62, Local_65) < 25f)
							{
								func_171(5);
							}
						}
					}
				}
				iLocal_82 = ENTITY::GET_ENTITY_HEALTH(iLocal_90);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_85))
		{
			if (PED::IS_PED_FLEEING(iLocal_85))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_171(5);
				}
			}
		}
	}
}

void func_169(struct<3> Param0, bool bParam3)//Position - 0xAF56
{
	if (SYSTEM::VDIST(Local_62, Param0) > 2.5f)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 713668775) != 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_85, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_85, 713668775) != 1)
	{
		func_131(bParam3);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_85, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

bool func_170()//Position - 0xAFBF
{
	return (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 0) && func_163(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !Global_96400);
}

void func_171(int iParam0)//Position - 0xB040
{
	iLocal_46 = iParam0;
	iLocal_368 = 0;
}

void func_172(char* sParam0)//Position - 0xB050
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (!MISC::ARE_STRINGS_EQUAL(iLocal_559[iVar0], sParam0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_559[iVar0]))
			{
				AUDIO::STOP_AUDIO_SCENE(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (MISC::ARE_STRINGS_EQUAL(iLocal_559[iVar0], sParam0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_559[iVar0]))
			{
				AUDIO::START_AUDIO_SCENE(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
}











void func_183()//Position - 0xB66D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_85))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 2, 0);
		TASK::TASK_SMART_FLEE_PED(iLocal_85, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_203)
	{
		if (!PED::IS_PED_INJURED(Local_203[iVar0 /*18*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_203[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_203[iVar0 /*18*/], -2065892691);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_203[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_184()//Position - 0xB6EA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_203)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_203[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_203[iVar1 /*18*/]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_203[iVar1 /*18*/]))
			{
				if (((MISC::IS_BULLET_IN_AREA(Local_203[iVar1 /*18*/].f_6, 5f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_203[iVar1 /*18*/].f_6, 10f)) || PED::IS_PED_FLEEING(Local_203[iVar1 /*18*/])) || (iLocal_385[iVar1] > 10 && iLocal_46 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_348 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_130)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar1 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_130[iVar1 /*18*/], 0) && ENTITY::IS_ENTITY_VISIBLE(Local_130[iVar1 /*18*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_130[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_185()//Position - 0xB7E4
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}












void func_197()//Position - 0xD389
{
	GlobalFunc_8536(39, 1);
	GlobalFunc_8536(40, 1);
	GlobalFunc_8536(41, 1);
	GlobalFunc_8536(42, 1);
	GlobalFunc_8536(43, 1);
	uLocal_358 = func_198(Local_86);
	iLocal_85 = PED::CREATE_PED(26, joaat("a_f_y_bevhills_03"), Local_86, fLocal_89, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_85, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_85, 17, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_85, 128, 1);
	PED::SET_PED_KEEP_TASK(iLocal_85, 1);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_85, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 7, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_85, 8, 0, 0, 0);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_85, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_85, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_85, 0);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_85, "LACEY");
	if (Global_3 || bLocal_69)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_85, 1);
	}
	if (PED::ADD_RELATIONSHIP_GROUP("CELEBRITY", &uLocal_68))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_85, uLocal_68);
	}
	iLocal_90 = VEHICLE::CREATE_VEHICLE(joaat("surano"), Local_91, fLocal_94, 1, 1);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_90, Local_91, 0, 0, 1);
	ENTITY::SET_ENTITY_QUATERNION(iLocal_90, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_90, 0, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_90, 10);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_90);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_90, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_90, 1);
	AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_90, 1);
	AUDIO::SET_VEH_RADIO_STATION(iLocal_90, AUDIO::GET_RADIO_STATION_NAME(1));
	if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		GlobalFunc_1286(&Local_394, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	GlobalFunc_1286(&Local_394, 3, iLocal_85, "LACEY", 0, 1);
	iLocal_374[0] = "idle_a";
	iLocal_374[1] = "idle_b";
	iLocal_374[2] = "idle_c";
	iLocal_374[3] = "idle_d";
	iLocal_374[4] = "idle_e";
	iLocal_374[5] = "idle_f";
	iLocal_374[6] = "idle_g";
	iLocal_374[7] = "idle_h";
	iLocal_374[8] = "idle_i";
	iLocal_559[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_559[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_559[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), 1);
}

var func_198(struct<3> Param0)//Position - 0xD5E6
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_ALPHA(uVar0, 0);
	HUD::SET_BLIP_DISPLAY(uVar0, 0);
	return uVar0;
}









int func_207()//Position - 0xDAA9
{
	if (!iLocal_95)
	{
		GlobalFunc_7550(&uLocal_96, joaat("surano"));
		GlobalFunc_7550(&uLocal_96, joaat("prop_ld_test_01"));
		GlobalFunc_7550(&uLocal_96, joaat("a_f_y_bevhills_03"));
		GlobalFunc_7550(&uLocal_96, joaat("a_m_y_genstreet_02"));
		GlobalFunc_7550(&uLocal_96, joaat("vader"));
		GlobalFunc_7550(&uLocal_96, joaat("cavalcade2"));
		GlobalFunc_7550(&uLocal_96, joaat("prop_pap_camera_01"));
		func_212(&uLocal_96);
		iLocal_95 = 1;
	}
	if (!func_208(&uLocal_96))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REQUEST_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT(sLocal_373);
	HUD::REQUEST_ADDITIONAL_TEXT("ESCPAP", 0);
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("random@escape_paparazzi@standing@") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@low@front_ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_373)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false))
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0)//Position - 0xDBE3
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_209(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_209(var uParam0)//Position - 0xDC45
{
	return func_210(*uParam0, "NULL", uParam0->f_1);
}

int func_210(int iParam0, char* sParam1, int iParam2)//Position - 0xDC5A
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_2270(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}


void func_212(var uParam0)//Position - 0xDD79
{
	GlobalFunc_6564(uParam0, 9, -1, 0);
}












int func_224(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE184
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10550())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_8988(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8329() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}











































void func_267()//Position - 0xF7BC
{
	GlobalFunc_9158(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_280(&uLocal_96, 0);
	STREAMING::REMOVE_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REMOVE_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT(sLocal_373);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (GlobalFunc_6827())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && !PED::IS_PED_INJURED(iLocal_85))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_85))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_85);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_85, 1))
		{
			if (!PED::IS_PED_FLEEING(iLocal_85))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_85, 0, 0);
			}
		}
	}
	GlobalFunc_10823(-1);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_364, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_365, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_366, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_24682)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	GlobalFunc_825();
	SCRIPT::TERMINATE_THIS_THREAD();
}













void func_280(var uParam0, bool bParam1)//Position - 0x1019C
{
	int iVar0;
	
	if (!bParam1)
	{
		func_282(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		GlobalFunc_4708(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}


void func_282(var uParam0)//Position - 0x101ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_283(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_283(var uParam0)//Position - 0x10226
{
	func_284(*uParam0, "NULL", uParam0->f_1);
}

void func_284(int iParam0, char* sParam1, var uParam2)//Position - 0x1023B
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (GlobalFunc_2270(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(uParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}


