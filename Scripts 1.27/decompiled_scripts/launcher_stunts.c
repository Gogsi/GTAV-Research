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
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	float fLocal_118 = 0f;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	fLocal_118 = 0f;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	iLocal_85 = iLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_110(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_107();
	if (GlobalFunc_747(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30778)
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_747(uLocal_93, 8))
	{
		if (!GlobalFunc_4938(iLocal_99))
		{
			if (GlobalFunc_892(0, iLocal_98))
			{
				func_110(0);
			}
			else
			{
				func_110(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			func_110(1);
		}
	}
	if (GlobalFunc_747(uLocal_93, 8388608))
	{
		func_110(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_110(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_99(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		if (func_98() && !Global_96400)
		{
			func_97(1);
		}
		else if (Global_96400)
		{
		}
	}
	while (true)
	{
		if ((!GlobalFunc_82() && !GlobalFunc_82()) && !GlobalFunc_81())
		{
			func_110(1);
		}
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_110(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
		{
			Local_86 = { ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) };
			fLocal_92 = SYSTEM::VDIST2(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = SYSTEM::VDIST2(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (GlobalFunc_4938(iLocal_99) || (GlobalFunc_747(uLocal_93, 16) && !GlobalFunc_747(uLocal_93, 524288)))
					{
						STREAMING::REQUEST_MODEL(iLocal_117);
						iLocal_97 = -1;
						GlobalFunc_587();
						func_99(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_99(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_82() && STREAMING::HAS_MODEL_LOADED(iLocal_117))
					{
						iLocal_102 = iLocal_102;
						func_99(3);
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_110(1);
						return;
					}
					if (!GlobalFunc_4938(iLocal_99))
					{
						if (!GlobalFunc_747(uLocal_93, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_110(0);
								break;
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85) && (((fLocal_92 > (10f * 10f) && !CAM::IS_SPHERE_VISIBLE(ScriptParam_0.f_1[0 /*3*/], 5f)) || fLocal_92 > (80f * 80f)) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_85) && CAM::IS_SCREEN_FADED_OUT())))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(ScriptParam_0.f_1[0 /*3*/], 8f, 0, 0, 0, 0, 0);
						iLocal_85 = VEHICLE::CREATE_VEHICLE(iLocal_117, ScriptParam_0.f_1[0 /*3*/], fLocal_118, 1, 1);
						func_91();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_85, 1);
						bVar2 = false;
						if (GlobalFunc_756() && !bVar2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_85, 2);
							GlobalFunc_5211(&uLocal_93, 32);
						}
					}
					else if (GlobalFunc_747(uLocal_93, 32))
					{
						if (!GlobalFunc_756())
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_85, 1);
							}
							GlobalFunc_5312(&uLocal_93, 32);
						}
					}
					if (!GlobalFunc_747(uLocal_93, 4))
					{
						GlobalFunc_587();
						GlobalFunc_812(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89996)
					{
						if (iLocal_104 != 262)
						{
							if (GlobalFunc_39(6) && !GlobalFunc_474(iLocal_104))
							{
							}
							else
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_99(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar3 = !GlobalFunc_747(uLocal_93, 64);
						GlobalFunc_5312(&uLocal_93, 128);
						if (!GlobalFunc_9670(3) && !Global_89996)
						{
							if (GlobalFunc_747(uLocal_93, 2097152))
							{
								if ((!GlobalFunc_747(uLocal_93, 1) || !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) && !Global_89996)
								{
									func_99(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_110(1);
						}
						if (GlobalFunc_4522())
						{
							func_110(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar3 = false;
						}
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (!GlobalFunc_82())
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar3 = false;
							}
						}
						if (GlobalFunc_126(1))
						{
							bVar3 = false;
						}
						if (Global_68245)
						{
							bVar3 = false;
						}
						if (GlobalFunc_488())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (GlobalFunc_160() || GlobalFunc_153(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_85, Local_89, fLocal_116, fLocal_116, fLocal_116, 0, 1, 0))
								{
									func_99(7);
								}
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar3 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
								if (bVar3)
								{
									if (iLocal_85 == iVar4)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ScriptParam_0.f_1[0 /*3*/], 4f, 4f, 2f, 0, 1, 0))
										{
											GlobalFunc_5211(&uLocal_93, 128);
											bVar3 = false;
										}
									}
									else
									{
										GlobalFunc_5211(&uLocal_93, 128);
										bVar3 = false;
									}
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_64(iLocal_85))
								{
									if (iLocal_95 == -1)
									{
										GlobalFunc_6774(&iLocal_95, 4, sLocal_100, 0, 0);
										GlobalFunc_5211(&uLocal_93, 2048);
									}
									else if (!GlobalFunc_747(uLocal_93, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
									}
									if (GlobalFunc_5079(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_68);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_99(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_68);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_99(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_95 != -1)
							{
								GlobalFunc_5084(&iLocal_95);
								GlobalFunc_5312(&uLocal_93, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_54();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							GlobalFunc_5084(&iLocal_95);
						}
						iVar5 = 2;
						bVar0 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_85);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							GlobalFunc_872();
							if (Global_35957)
							{
								GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_51 = func_25();
							GlobalFunc_5211(&uLocal_93, 2);
							func_99(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							GlobalFunc_587();
						}
						else if (iVar5 == 0)
						{
							func_99(10);
						}
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 6:
					if (!GlobalFunc_747(uLocal_93, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_5211(&uLocal_93, 256);
						}
					}
					if (GlobalFunc_747(Global_96007, 262144))
					{
						GlobalFunc_5312(&Global_96007, 262144);
						GlobalFunc_82();
					}
					if (GlobalFunc_747(uLocal_93, 2097152))
					{
						if (!GlobalFunc_9670(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
						{
							func_99(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_106) * 1000f)), iLocal_98, 0);
						GlobalFunc_235(&uLocal_106);
						GlobalFunc_5312(&uLocal_93, 256);
						GlobalFunc_51();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_85);
								iLocal_85 = 0;
							}
						}
						if (bVar0)
						{
							GlobalFunc_5312(&uLocal_93, 2);
						}
						else if (GlobalFunc_747(uLocal_93, 2))
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
							else
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
						}
						func_99(0);
						if (iLocal_98 != -1)
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0, 0);
							}
						}
						func_4();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_110(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_110(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_99(0);
					break;
				
				case 10:
					func_110(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_99(10);
					}
					break;
				
				case 7:
					GlobalFunc_587();
					if (iLocal_104 != 262)
					{
						GlobalFunc_2436(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						GlobalFunc_5084(&iLocal_95);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_100))
					{
						if (GlobalFunc_74(sLocal_100))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_99(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (GlobalFunc_4938(iLocal_99) && GlobalFunc_892(0, iLocal_98))
									{
										func_107();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_99(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_99(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_107();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_99(0);
								}
							}
						}
						else
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}




void func_4()//Position - 0xC16
{
	var uVar0;
	var uVar1;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	uVar1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uVar1, uVar0, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(0);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_85 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_85, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_85, 1);
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_85, 1, 1);
	func_5(&uLocal_119);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_119))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_119);
	}
	while (CAM::IS_CAM_INTERPOLATING(uVar0) || CAM::IS_CAM_INTERPOLATING(uVar1))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	if (CAM::DOES_CAM_EXIST(uVar0))
	{
		CAM::DESTROY_CAM(uVar0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uVar1))
	{
		CAM::DESTROY_CAM(uVar1, 0);
	}
}

void func_5(var uParam0)//Position - 0xD4F
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!GlobalFunc_2417(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
		}
	}
}




















var func_25()//Position - 0x11CF
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (GlobalFunc_74(sLocal_100))
	{
		HUD::CLEAR_HELP(1);
	}
	if (STREAMING::IS_IPL_ACTIVE("airfield"))
	{
		STREAMING::REMOVE_IPL("airfield");
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_85) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("stunt")) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("cargobob"))
	{
		iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		if (func_26(&iLocal_119))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	uVar2 = SYSTEM::START_NEW_SCRIPT(&Local_52, iLocal_96);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
	return uVar2;
}

int func_26(var uParam0)//Position - 0x131B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!GlobalFunc_2417(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_44, 0, 1, 0))
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

void func_27(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x138C
{
	GlobalFunc_9254(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}



























void func_54()//Position - 0x237C
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_85) || ENTITY::IS_ENTITY_DEAD(iLocal_85)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, 1)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_85) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_85, 2);
		}
		func_97(0);
		if (GlobalFunc_74(sLocal_100))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	if (fLocal_92 < (fLocal_116 * fLocal_116))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_85, 1);
		GlobalFunc_1(sLocal_100);
		GlobalFunc_7629();
	}
	else if (GlobalFunc_74(sLocal_100))
	{
		HUD::CLEAR_HELP(1);
	}
}










int func_64(int iParam0)//Position - 0x27B4
{
	return 0;
	return 1;
}



























void func_91()//Position - 0x32C3
{
	iLocal_47++;
}






void func_97(int iParam0)//Position - 0x32FD
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_98()//Position - 0x331E
{
	struct<3> Var0;
	float fVar3;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = SYSTEM::VDIST2(Var0, Local_89);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(Local_89, 5f))
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

void func_99(int iParam0)//Position - 0x3391
{
	iLocal_94 = iParam0;
}








void func_107()//Position - 0x3737
{
	StringCopy(&Local_52, "stunt_plane_races", 64);
	iLocal_117 = joaat("stunt");
	fLocal_118 = 154.8464f;
	fLocal_101 = 209f;
	iLocal_104 = 94;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_113, 10f, 0, 0, 0, 0, 0);
	iLocal_98 = 10;
	sLocal_100 = "PLAY_STUNT";
	fLocal_116 = 6f;
	iLocal_96 = 17000;
}



void func_110(bool bParam0)//Position - 0x37A9
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 0, 0);
		}
	}
	GlobalFunc_5084(&iLocal_95);
	if (GlobalFunc_747(uLocal_93, 2))
	{
		func_4();
		GlobalFunc_5312(&uLocal_93, 2);
		GlobalFunc_1997(&iLocal_97);
	}
	iLocal_97 = -1;
	func_111();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_111()//Position - 0x37F2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_85, 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_85);
			VEHICLE::DELETE_VEHICLE(&iLocal_85);
		}
	}
	GlobalFunc_5312(&uLocal_93, 4);
	GlobalFunc_587();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_51, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_68))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_68) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_68);
		}
	}
}


