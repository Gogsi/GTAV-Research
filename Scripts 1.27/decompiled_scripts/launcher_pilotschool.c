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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<16> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	char* sLocal_64 = NULL;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<2> Local_87 = { 0, 5 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 5;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	iLocal_59 = -1;
	iLocal_60 = 2050;
	iLocal_61 = -1;
	iLocal_62 = -1;
	sLocal_64 = "CC_SUBSTR";
	fLocal_65 = 125f;
	iLocal_66 = 1;
	iLocal_68 = 262;
	fLocal_76 = 4f;
	Local_55 = { ScriptParam_87.f_1[0 /*3*/] };
	Local_55 = { Local_55 };
	uLocal_53 = uLocal_53;
	Local_51 = { Local_51 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_89(1);
	}
	uLocal_52 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_58 = 0;
	func_87(&Global_17707, 0);
	func_86();
	if (func_85(uLocal_57, 1))
	{
		iLocal_63 = 10;
	}
	else
	{
		iLocal_63 = 9;
	}
	while (!Global_783A)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_85(uLocal_57, 8))
	{
		if (!func_83(iLocal_63))
		{
			if (func_82(0, iLocal_62))
			{
				func_89(0);
			}
			else
			{
				func_89(1);
			}
		}
	}
	if (iLocal_62 != -1)
	{
		if (!func_82(0, iLocal_62))
		{
			func_89(1);
		}
	}
	if (func_85(uLocal_57, 8388608))
	{
		func_89(1);
	}
	if (func_85(uLocal_57, 524288) && (func_81() && !func_80()))
	{
		func_89(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_85(uLocal_57, 4194304))
	{
		if (iLocal_68 != 262)
		{
			func_79(iLocal_68, 1, 0);
			iLocal_68 = 262;
		}
		func_78(10);
	}
	while (true)
	{
		if (!func_85(uLocal_57, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_87.f_1[0 /*3*/], &fVar1))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_87.f_1[0 /*3*/].f_2 = fVar1;
					func_77(&uLocal_57, 268435456);
				}
			}
		}
		uLocal_52 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_85(uLocal_57, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_52))
			{
				func_89(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_52) && !ENTITY::IS_ENTITY_DEAD(iLocal_52))
		{
			Local_54 = { ENTITY::GET_ENTITY_COORDS(iLocal_52, 1) };
			fLocal_56 = SYSTEM::VDIST2(Local_54, ScriptParam_87.f_1[0 /*3*/]);
			fLocal_56 = fLocal_56;
			Local_74 = { Local_54 };
			Local_75 = { ScriptParam_87.f_1[0 /*3*/] };
			Local_74.f_2 = 0f;
			Local_75.f_2 = 0f;
			fLocal_73 = SYSTEM::VDIST2(Local_74, Local_75);
			switch (iLocal_58)
			{
				case 0:
					if (func_83(iLocal_63) || (func_85(uLocal_57, 16) && !func_85(uLocal_57, 524288)))
					{
						iLocal_61 = -1;
						func_76();
						func_78(1);
					}
					else
					{
						if (fLocal_73 > (fLocal_65 * fLocal_65))
						{
							if (iLocal_68 != 262)
							{
								func_79(iLocal_68, 1, 0);
								iLocal_68 = 262;
							}
							func_78(10);
						}
						if ((Local_54.f_2 - ScriptParam_87.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_75() && fLocal_56 > ((fLocal_76 * 1.5f) * (fLocal_76 * 1.5f)))
					{
						iLocal_66 = iLocal_66;
						func_78(3);
					}
					else
					{
						func_76();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_89(1);
						return;
					}
					if (!func_83(iLocal_63))
					{
						if (!func_85(uLocal_57, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_15F6A.f_3), &Local_51))
							{
								Local_51 = { Local_50 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_89(0);
								break;
							}
						}
					}
					if (!func_85(uLocal_57, 4))
					{
						func_74();
						func_77(&uLocal_57, 4);
					}
					if (fLocal_73 > (fLocal_65 * fLocal_65) && !Global_15F8C)
					{
						if (iLocal_68 != 262)
						{
							if (func_73(6) && !func_72(iLocal_68))
							{
							}
							else
							{
								func_79(iLocal_68, 1, 0);
								iLocal_68 = 262;
							}
						}
						func_78(10);
					}
					else
					{
						Local_51 = { Local_50 };
						bVar3 = !func_85(uLocal_57, 64);
						func_87(&uLocal_57, 128);
						if (!func_71(3) && !Global_15F8C)
						{
							if (func_85(uLocal_57, 2097152))
							{
								if ((!func_85(uLocal_57, 1) || !ENTITY::DOES_ENTITY_EXIST(func_70())) && !Global_15F8C)
								{
									func_78(10);
									break;
								}
							}
						}
						if (func_85(uLocal_57, 524288) && (func_81() && !func_80()))
						{
							func_89(1);
						}
						if (func_69())
						{
							func_89(1);
						}
						if ((!func_56(6) || Global_17890) || func_55())
						{
							bVar3 = false;
						}
						if (func_85(uLocal_57, 1))
						{
							if (!func_54())
							{
								func_52(&uLocal_57, 128);
								bVar3 = false;
							}
						}
						if (func_51(1))
						{
							bVar3 = false;
						}
						if (Global_10A95)
						{
							bVar3 = false;
						}
						if (func_50())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_49() || func_48(8, -1))
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
						if (func_47(0) || func_46())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_52, ScriptParam_87.f_1[0 /*3*/], fLocal_76, fLocal_76, 2f, 0, 1, iLocal_66))
							{
								bVar3 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_45(uLocal_53))
								{
									if (iLocal_59 == -1)
									{
										func_44(&iLocal_59, 4, sLocal_64, 0, 0);
										func_52(&uLocal_57, 2048);
									}
									else if (!func_85(uLocal_57, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_43(&iLocal_59);
										func_87(&uLocal_57, 2048);
									}
									if (func_41(iLocal_59, 1))
									{
										sLocal_64 = sLocal_64;
										func_43(&iLocal_59);
										func_87(&uLocal_57, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_51);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_78(5);
									}
								}
								else
								{
									sLocal_64 = sLocal_64;
									func_43(&iLocal_59);
									func_87(&uLocal_57, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_51);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_78(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_59 != -1)
							{
								func_43(&iLocal_59);
								func_87(&uLocal_57, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_40();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_51))
					{
						if (iLocal_59 != -1)
						{
							func_43(&iLocal_59);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_85(uLocal_57, 1))
						{
							if (func_73(6) || func_73(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_37(&iLocal_61, 6, iLocal_63, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_36();
							if (Global_8C75)
							{
								func_27(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_49 = func_26();
							func_87(&uLocal_57, 4);
							func_25();
							func_52(&uLocal_57, 2);
							func_78(6);
							func_21(&uLocal_70);
							if (iLocal_62 != -1)
							{
								func_20(iLocal_62);
								func_17(func_19(iLocal_62), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_16();
						}
						else if (iVar4 == 0)
						{
							func_78(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_85(uLocal_57, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_52(&uLocal_57, 256);
						}
					}
					if (func_85(Global_17707, 262144))
					{
						func_87(&Global_17707, 262144);
						func_15();
					}
					if (func_85(uLocal_57, 2097152))
					{
						if (!func_71(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
						{
							func_78(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&uLocal_70) * 1000f)), iLocal_62, 0);
						func_10(&uLocal_70);
						func_87(&uLocal_57, 256);
						func_9();
						if (bVar0)
						{
							func_87(&uLocal_57, 2);
						}
						else if (func_85(uLocal_57, 2))
						{
							if (func_85(Global_17707, 0))
							{
								func_8(&iLocal_61);
								iLocal_61 = -1;
								func_87(&uLocal_57, 2);
							}
							else
							{
								func_8(&iLocal_61);
								iLocal_61 = -1;
								func_87(&uLocal_57, 2);
							}
						}
						func_78(0);
						if (iLocal_62 != -1)
						{
							if (func_85(Global_17707, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_62), 0, Global_15F8F, 0);
								func_7(func_19(iLocal_62), 0, Global_15F8F, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_62), 0, Global_15F8F, 0);
								func_7(func_19(iLocal_62), 0, Global_15F8F, 0, 0);
							}
						}
						func_4();
						func_87(&Global_17707, 0);
						if (func_85(uLocal_57, 16777216))
						{
							func_89(1);
						}
						if (iLocal_62 != -1)
						{
							if (Global_17C49.f_1CAD)
							{
								if (!func_82(0, iLocal_62))
								{
									func_89(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_78(0);
					break;
				
				case 10:
					func_89(1);
					break;
				
				case 9:
					if (fLocal_73 > (fLocal_65 * fLocal_65))
					{
						if (iLocal_68 != 262)
						{
							func_79(iLocal_68, 1, 0);
							iLocal_68 = 262;
						}
						func_78(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_68 != 262)
					{
						func_79(iLocal_68, 0, 0);
					}
					if (iLocal_59 != -1)
					{
						func_43(&iLocal_59);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_64))
					{
						if (func_1(sLocal_64))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_78(4);
					break;
				
				case 4:
					if ((iLocal_67 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_69 == 2)
							{
								if (iLocal_69 == 2)
								{
									if (func_83(iLocal_63) && func_82(0, iLocal_62))
									{
										func_86();
										if (iLocal_68 != 262)
										{
											func_79(iLocal_68, 1, 0);
										}
										func_78(0);
									}
								}
							}
							else if (iLocal_69 == 0)
							{
								if (fLocal_73 > (fLocal_65 * fLocal_65))
								{
									if (iLocal_68 != 262)
									{
										func_79(iLocal_68, 1, 0);
										iLocal_68 = 262;
									}
									func_78(10);
								}
							}
							else if (iLocal_69 == 1)
							{
								if (fLocal_73 > ((80f + 5f) * (80f + 5f)))
								{
									func_86();
									if (iLocal_68 != 262)
									{
										func_79(iLocal_68, 1, 0);
									}
									func_78(0);
								}
							}
						}
						else
						{
							func_79(iLocal_68, 1, 0);
						}
					}
					else
					{
						iLocal_67++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)//Position - 0xA6C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xA7F
{
}

void func_3()//Position - 0xA87
{
}

void func_4()//Position - 0xA8F
{
	func_5(&uLocal_81);
}

void func_5(var uParam0)//Position - 0xA9D
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_6(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
		}
	}
}

int func_6(int iParam0)//Position - 0xAD3
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB15
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_1558D, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_14A40);
	StringCopy(&Global_1558D, "", 64);
}

void func_8(int iParam0)//Position - 0xB59
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_883B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_883A = 0;
	Global_883C = 0;
	Global_8861 = 15;
	Global_D5DB = 0;
	Global_D5DC = 0;
}

void func_9()//Position - 0xB96
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

void func_10(var uParam0)//Position - 0xBD8
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_11(var uParam0)//Position - 0xBEE
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)//Position - 0xC2D
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)//Position - 0xC75
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xC85
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_15()//Position - 0xC95
{
	return 1;
}

void func_16()//Position - 0xC9E
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xCA6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1558D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1558D, "", 64);
	}
	StringCopy(&Global_1558D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)//Position - 0xCE7
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

char* func_19(int iParam0)//Position - 0xD12
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)//Position - 0xE50
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_21(var uParam0)//Position - 0xEA7
{
	if (!func_14(uParam0))
	{
		func_24(uParam0);
	}
	else
	{
		func_22(uParam0);
	}
}

void func_22(var uParam0)//Position - 0xEC8
{
	func_23(uParam0, 0f);
}

void func_23(var uParam0, float fParam1)//Position - 0xED7
{
	uParam0->f_1 = (func_12(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_24(var uParam0)//Position - 0xF05
{
	if (!func_14(uParam0))
	{
		func_22(uParam0);
	}
}

void func_25()//Position - 0xF1D
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, 0, 1, 1);
}

var func_26()//Position - 0xF4F
{
	var uVar0;
	
	uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_50, &uLocal_77, 4, iLocal_60);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_50);
	return uVar0;
}

void func_27(int iParam0)//Position - 0xF6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_35(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		func_30(1, iVar1, 1);
		return;
	}
	iVar2 = func_29(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_28(iVar2);
}

void func_28(int iParam0)//Position - 0xFC5
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8B96[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8B96[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_8C73 = 0;
		}
	}
	Global_8B96[iParam0 /*5*/] = 13;
	Global_8B96[iParam0 /*5*/].f_1 = 0;
	Global_8B96[iParam0 /*5*/].f_2 = 0;
	Global_8B96[iParam0 /*5*/].f_3 = 0;
	Global_8B96[iParam0 /*5*/].f_4 = 0;
	Global_8B95 = (Global_8B95 - 1);
	if (Global_8B95 < 0)
	{
		Global_8B95 = 0;
	}
}

int func_29(int iParam0)//Position - 0x1048
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8B96[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1079
{
	func_31(iParam0, iParam1, iParam2, 0, 0);
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x108D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_33(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_32();
	if (iVar0 == -1)
	{
		return;
	}
	Global_8C01[iVar0 /*5*/] = iParam0;
	Global_8C01[iVar0 /*5*/].f_1 = iParam1;
	Global_8C01[iVar0 /*5*/].f_2 = iParam2;
	Global_8C01[iVar0 /*5*/].f_3 = iParam3;
	Global_8C01[iVar0 /*5*/].f_4 = iParam4;
}

int func_32()//Position - 0x1104
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8C01[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1135
{
	if (func_34(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x1150
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				if (iParam1 == Global_8C01[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_35(int iParam0)//Position - 0x119C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8BB0[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_36()//Position - 0x11E5
{
	if (Global_BFC[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	MISC::CLEAR_BIT(&Global_8D7, 25);
	MISC::SET_BIT(&Global_8D8, 11);
}

int func_37(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1262
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_15725.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_39(0))
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_42CA.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8861 = iParam2;
		Global_883B = *iParam0;
		Global_883C = iParam4;
		Global_883A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_883A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_883A)
			{
				if (Global_8840[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_883B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_83(iParam2))
		{
			return 0;
		}
		if (Global_883A == 8)
		{
			return 0;
		}
		Global_883D++;
		*iParam0 = Global_883D;
		Global_8840[Global_883A /*4*/] = Global_883D;
		Global_8840[Global_883A /*4*/].f_1 = iParam1;
		Global_8840[Global_883A /*4*/].f_2 = iParam2;
		Global_8840[Global_883A /*4*/].f_3 = 0;
		Global_883A++;
		if (iParam4 != 0)
		{
			func_38(iParam0, iParam4);
		}
	}
	return 2;
}

void func_38(var uParam0, int iParam1)//Position - 0x1399
{
	int iVar0;
	
	if (Global_883A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_883A)
	{
		if (Global_8840[iVar0 /*4*/] == *uParam0)
		{
			Global_8840[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_39(int iParam0)//Position - 0x13E8
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_83(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_40()//Position - 0x140A
{
	if (func_72(75))
	{
		ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1154.11f, -2715.203f, 18.8074f, 0f, 0f, 1.8f, 1, 1, 0);
	}
}

int func_41(int iParam0, bool bParam1)//Position - 0x143D
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_47(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/] == 1 && Global_8B1D[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_8B1D[iVar0 /*18*/].f_10)
				{
					return 0;
				}
			}
			Global_8B1D[iVar0 /*18*/].f_4 = 1;
			Global_8B1D[iVar0 /*18*/].f_10 = 1;
			return 1;
		}
		else
		{
			if (Global_8B1D[iVar0 /*18*/] == 0)
			{
			}
			if (Global_8B1D[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x14F5
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_43(int iParam0)//Position - 0x1530
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_42(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_44(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x1587
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8B1D[iVar0 /*18*/])
		{
			Global_8B1D[iVar0 /*18*/] = 1;
			Global_8B1D[iVar0 /*18*/].f_1 = Global_8B92;
			Global_8B92++;
			Global_8B1D[iVar0 /*18*/].f_3 = 0;
			Global_8B1D[iVar0 /*18*/].f_10 = 0;
			Global_8B1D[iVar0 /*18*/].f_4 = 0;
			Global_8B1D[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_8B1D[iVar0 /*18*/].f_7), sParam2, 16);
			Global_8B1D[iVar0 /*18*/].f_5 = iParam3;
			Global_8B1D[iVar0 /*18*/].f_11 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8B1D[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8B1D[iVar0 /*18*/].f_B = 1;
				StringCopy(&(Global_8B1D[iVar0 /*18*/].f_C), sParam4, 16);
			}
			else
			{
				Global_8B1D[iVar0 /*18*/].f_B = 0;
			}
			*iParam0 = Global_8B1D[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_45(var uParam0)//Position - 0x1692
{
	return 1;
}

var func_46()//Position - 0x169B
{
	return Global_105F2;
}

int func_47(int iParam0)//Position - 0x16A7
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)//Position - 0x1701
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

bool func_49()//Position - 0x173C
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

int func_50()//Position - 0x1751
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51(bool bParam0)//Position - 0x176B
{
	if (bParam0)
	{
		return (Global_42CA.f_4 && Global_42CA.f_68 == 4);
	}
	return Global_42CA.f_4;
}

void func_52(var uParam0, int iParam1)//Position - 0x1794
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, var uParam1)//Position - 0x17A4
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_54()//Position - 0x17B5
{
	return 1;
}

bool func_55()//Position - 0x17BE
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_56(int iParam0)//Position - 0x18C8
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_65();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_63()) || Global_17890) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_59()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_63()) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_63()) || Global_17890) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_63()) || Global_17890) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_63() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_48(8, -1)) || func_50()) || func_58()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_48(8, -1) || func_61()) || func_60()) || func_58()) || func_57())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_63()) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_60()) || func_59()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_63()) || func_60()) || Global_17890) || Global_5F7E) || func_62()) || Global_8C75) || func_48(8, -1)) || func_59()) || func_58()) || func_50()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_63()) || Global_17890) || Global_5F7E) || func_62()) || func_48(8, -1)) || func_59()) || func_58()) || func_61()) || func_60()) || func_50())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_57()//Position - 0x1FE5
{
	return Global_15F91.f_1;
}

int func_58()//Position - 0x1FF3
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_59()//Position - 0x2019
{
	if (Global_10B99)
	{
		return 1;
	}
	else if (Global_D5D8 && !Global_D5DE)
	{
		return 1;
	}
	return 0;
}

bool func_60()//Position - 0x2043
{
	return Global_15F9E.f_123 > 0;
}

bool func_61()//Position - 0x2054
{
	return Global_15F9E.f_122 > 0;
}

var func_62()//Position - 0x2065
{
	return Global_14143C;
}

int func_63()//Position - 0x2071
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

bool func_64(int iParam0)//Position - 0x208D
{
	return iParam0 < 3;
}

var func_65()//Position - 0x2099
{
	func_66();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_66()//Position - 0x20B2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_68(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_67(PLAYER::PLAYER_PED_ID());
			if (func_64(iVar0) && (!func_73(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_64(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

int func_67(int iParam0)//Position - 0x21AF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_68(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_68(int iParam0)//Position - 0x21EC
{
	if (func_64(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_69()//Position - 0x2216
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_70()//Position - 0x2230
{
	return Global_150B7;
}

int func_71(int iParam0)//Position - 0x223C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_73(6) || func_73(7))
			{
				return 1;
			}
			else
			{
				return func_71(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_83(5))
			{
				if (func_56(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x22AE
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13);
}

bool func_73(int iParam0)//Position - 0x22EA
{
	return Global_8861 == iParam0;
}

void func_74()//Position - 0x22F8
{
}

int func_75()//Position - 0x2300
{
	return 1;
}

void func_76()//Position - 0x2309
{
}

void func_77(var uParam0, int iParam1)//Position - 0x2311
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78(int iParam0)//Position - 0x2322
{
	iLocal_58 = iParam0;
}

void func_79(int iParam0, bool bParam1, bool bParam2)//Position - 0x232E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
		if (Global_60A9 == 1)
		{
			Global_60AA = 1;
		}
		Global_60A9 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_60AC[iVar0 /*23*/].f_13));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_80()//Position - 0x2437
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x2454
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)//Position - 0x247A
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iParam0], iParam1);
	return bVar0;
}

bool func_83(int iParam0)//Position - 0x24C7
{
	return func_84(iParam0, Global_8861);
}

int func_84(int iParam0, int iParam1)//Position - 0x24D8
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_85(var uParam0, int iParam1)//Position - 0x26B9
{
	return (uParam0 && iParam1) != 0;
}

void func_86()//Position - 0x26C8
{
	iLocal_62 = 5;
	sLocal_64 = "PLAY_PSCHOOL";
	StringCopy(&Local_50, "Pilot_School", 64);
	iLocal_60 = 17000;
}

void func_87(var uParam0, int iParam1)//Position - 0x26E4
{
	func_88(uParam0, iParam1);
}

void func_88(var uParam0, var uParam1)//Position - 0x26F4
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_89(bool bParam0)//Position - 0x2709
{
	if (bParam0)
	{
		if (iLocal_68 != 262)
		{
			func_79(iLocal_68, 0, 0);
		}
	}
	func_43(&iLocal_59);
	if (func_85(uLocal_57, 2))
	{
		func_4();
		func_87(&uLocal_57, 2);
		func_8(&iLocal_61);
	}
	iLocal_61 = -1;
	func_90();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90()//Position - 0x2752
{
	func_87(&uLocal_57, 4);
	func_91();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_49))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_49, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_51))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_51) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
		}
	}
}

void func_91()//Position - 0x278F
{
	if (bLocal_82)
	{
		func_92(75);
	}
}

void func_92(int iParam0)//Position - 0x27A2
{
	if (iParam0 != 262)
	{
		func_79(iParam0, 1, 0);
	}
}

