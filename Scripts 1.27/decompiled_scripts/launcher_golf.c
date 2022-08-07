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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_68[64] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
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
	int iLocal_118 = 0;
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
	int iVar3;
	int iVar4;
	
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
	iLocal_117 = 6;
	iLocal_118 = 18;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	cLocal_68 = { cLocal_68 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_93(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_88();
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
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			func_93(1);
		}
	}
	if (GlobalFunc_747(uLocal_93, 8388608))
	{
		func_93(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_93(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_80(10);
	}
	while (true)
	{
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_93(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
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
						iLocal_97 = -1;
						GlobalFunc_587();
						func_80(1);
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
							func_80(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_82())
					{
						iLocal_102 = iLocal_102;
						func_80(3);
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_93(1);
						return;
					}
					if (!GlobalFunc_4938(iLocal_99))
					{
						if (!GlobalFunc_747(uLocal_93, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_Mission_Fail_State.Failed_Script_Name), &cLocal_68))
							{
								cLocal_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
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
						func_80(10);
					}
					else
					{
						cLocal_68 = { Local_52 };
						bVar2 = !GlobalFunc_747(uLocal_93, 64);
						GlobalFunc_5312(&uLocal_93, 128);
						if (!GlobalFunc_9670(3) && !Global_89996)
						{
							if (GlobalFunc_747(uLocal_93, 2097152))
							{
								if ((!GlobalFunc_747(uLocal_93, 1) || !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) && !Global_89996)
								{
									func_80(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_93(1);
						}
						if (GlobalFunc_4522())
						{
							func_93(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar2 = false;
						}
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (!func_61())
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (GlobalFunc_126(1))
						{
							bVar2 = false;
						}
						if (Global_68245)
						{
							bVar2 = false;
						}
						if (GlobalFunc_488())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (GlobalFunc_160() || GlobalFunc_153(8, -1))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iLocal_84, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 20f, 0, 0, iLocal_102))
								{
									bVar2 = false;
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, 0))
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
							}
							iVar3 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_117 > iLocal_118)
							{
								if (iVar3 < iLocal_117 && iVar3 >= iLocal_118)
								{
									GlobalFunc_5211(&uLocal_93, 128);
									bVar2 = false;
									if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
									{
										if (!GlobalFunc_747(uLocal_93, 134217728))
										{
											GlobalFunc_4306("MG_NA_TIME", iLocal_117, iLocal_118);
											GlobalFunc_5211(&uLocal_93, 134217728);
										}
									}
									else
									{
										GlobalFunc_5312(&uLocal_93, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_117 || iVar3 >= iLocal_118)
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
								if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
								{
									if (!GlobalFunc_747(uLocal_93, 134217728))
									{
										GlobalFunc_4306("MG_NA_TIME", iLocal_117, iLocal_118);
										GlobalFunc_5211(&uLocal_93, 134217728);
									}
								}
								else
								{
									GlobalFunc_5312(&uLocal_93, 134217728);
								}
							}
							if (bVar2 && GlobalFunc_469(GlobalFunc_8329()) < iLocal_119)
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
								if (!GlobalFunc_747(uLocal_93, 33554432))
								{
									GlobalFunc_2154("MG_YOU_IS_BROKE", iLocal_119, -1);
									GlobalFunc_5211(&uLocal_93, 33554432);
								}
							}
							else
							{
								GlobalFunc_5312(&uLocal_93, 33554432);
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_44(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										if (iLocal_119 > 0)
										{
											GlobalFunc_6774(&iLocal_95, 4, "", 1, 0);
											GlobalFunc_2989(sLocal_100, iLocal_119);
											GlobalFunc_5211(&uLocal_93, 2048);
										}
										else
										{
											GlobalFunc_6774(&iLocal_95, 4, sLocal_100, 0, 0);
											GlobalFunc_5211(&uLocal_93, 2048);
										}
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
										if (GlobalFunc_747(uLocal_93, 2048))
										{
											if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												GlobalFunc_5312(&uLocal_93, 2048);
												HUD::CLEAR_HELP(0);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&cLocal_68);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									if (GlobalFunc_747(uLocal_93, 2048))
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											GlobalFunc_5312(&uLocal_93, 2048);
											HUD::CLEAR_HELP(0);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&cLocal_68);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									HUD::CLEAR_HELP(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_68))
					{
						if (iLocal_95 != -1)
						{
							GlobalFunc_5084(&iLocal_95);
						}
						iVar4 = 2;
						bVar0 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar4 == 1)
						{
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
							uLocal_51 = SYSTEM::START_NEW_SCRIPT(&cLocal_68, iLocal_96);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_68);
							Local_52 = { cLocal_68 };
							StringCopy(&cLocal_68, "", 64);
							GlobalFunc_5312(&uLocal_93, 4);
							func_23();
							GlobalFunc_5211(&uLocal_93, 2);
							func_80(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							GlobalFunc_587();
						}
						else if (iVar4 == 0)
						{
							func_80(10);
						}
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 6:
					if (GlobalFunc_747(Global_96007, 262144))
					{
						GlobalFunc_5312(&Global_96007, 262144);
						GlobalFunc_82();
					}
					if (GlobalFunc_747(uLocal_93, 2097152))
					{
						if (!GlobalFunc_9670(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
						{
							func_80(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_106) * 1000f)), iLocal_98, 0);
						GlobalFunc_235(&uLocal_106);
						GlobalFunc_5312(&uLocal_93, 256);
						GlobalFunc_51();
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
						func_80(0);
						if (iLocal_98 != -1)
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0, 0);
							}
						}
						GlobalFunc_587();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_93(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_93(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_80(10);
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
					func_80(4);
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
										func_88();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_80(0);
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
									func_80(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_80(0);
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























void func_23()//Position - 0x1016
{
	var uVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (PED::GET_CLOSEST_PED(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!PED::IS_PED_INJURED(uVar0))
		{
			iVar102 = PED::GET_PED_NEARBY_PEDS(iVar0, &uVar1, -1);
			TASK::CLEAR_PED_TASKS(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar103]))
			{
				TASK::CLEAR_PED_TASKS(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}














void func_37()//Position - 0x1539
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_89, fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
	}
	if (iLocal_119 > 0)
	{
		if (GlobalFunc_466(8) == GlobalFunc_8329())
		{
			iLocal_119 = 0;
			sLocal_100 = "PLAY_GOLF";
		}
	}
}







int func_44(var uParam0)//Position - 0x17FE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (!ENTITY::IS_ENTITY_IN_AIR(uParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

















int func_61()//Position - 0x1B74
{
	if (GlobalFunc_39(6) || GlobalFunc_39(7))
	{
		return GlobalFunc_474(67);
	}
	return 1;
}



















void func_80(int iParam0)//Position - 0x2574
{
	iLocal_94 = iParam0;
}








void func_88()//Position - 0x291A
{
	StringCopy(&Local_52, "golf", 64);
	iLocal_98 = 2;
	fLocal_116 = 7f;
	GlobalFunc_812(&uLocal_93, 1);
	if (GlobalFunc_39(6) || GlobalFunc_39(7))
	{
		iLocal_102 = 0;
	}
	if (GlobalFunc_466(8) == GlobalFunc_8329())
	{
		iLocal_119 = 0;
		sLocal_100 = "PLAY_GOLF";
	}
	else
	{
		iLocal_119 = func_90(ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451()));
		sLocal_100 = "PAY_PLAY_GOLF";
	}
	iLocal_104 = 67;
	fLocal_101 = (SYSTEM::TO_FLOAT(GlobalFunc_4523(iLocal_104)) + 5f);
	iLocal_96 = 17000;
}


int func_90(bool bParam0)//Position - 0x2AA6
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}



void func_93(bool bParam0)//Position - 0x2AE2
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 0, 0);
		}
	}
	GlobalFunc_5084(&iLocal_95);
	if (GlobalFunc_747(uLocal_93, 2048))
	{
		if (GlobalFunc_473(sLocal_100, iLocal_119))
		{
			GlobalFunc_5312(&uLocal_93, 2048);
			HUD::CLEAR_HELP(0);
		}
	}
	if (GlobalFunc_747(uLocal_93, 2))
	{
		GlobalFunc_587();
		GlobalFunc_5312(&uLocal_93, 2);
		GlobalFunc_1997(&iLocal_97);
	}
	iLocal_97 = -1;
	func_94();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_94()//Position - 0x2B50
{
	GlobalFunc_5312(&uLocal_93, 4);
	GlobalFunc_587();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_51, 3);
	}
	if (!MISC::IS_STRING_NULL(&cLocal_68))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_68) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_68);
		}
	}
}



