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
	struct<17> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_36 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount > 0 || Global_95996)
		{
			if (!Global_95996)
			{
				if ((Global_34913 != 6 && Global_34913 != 15) && !Global_86374)
				{
					func_22();
				}
				if (!Global_95995)
				{
					if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount > 0)
					{
						if (func_19(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_11, func_12()))
								{
									if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_12 == Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_95998)
										{
											if (MISC::GET_GAME_TIMER() > Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_11(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]), &(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_4));
												}
												if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_13 != 0)
												{
													func_9(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_13, 0);
												}
												Local_19 = { Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/] };
												Local_19.f_4 = { Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_4 };
												Local_19.f_8 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_8;
												Local_19.f_10 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_10;
												Local_19.f_9 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_9;
												Local_19.f_11 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_11;
												Local_19.f_12 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_12;
												Local_19.f_13 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_13;
												Local_19.f_14 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_14;
												Local_19.f_15 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_15;
												Local_19.f_16 = 0;
												Global_95999 = { Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/] };
												Global_95997 = MISC::GET_GAME_TIMER();
												iVar0 = iLocal_36;
												while (iVar0 <= (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1));
												Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount = (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1);
												func_6();
												Global_95996 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
				{
					if (func_3(&Local_19))
					{
						HUD::CLEAR_HELP(0);
					}
				}
				else if (func_2(&Local_19, &(Local_19.f_4)))
				{
					HUD::CLEAR_HELP(0);
				}
				if ((MISC::GET_GAME_TIMER() - Global_95997) > 4000 || Local_19.f_16)
				{
					if (Local_19.f_14 != 0)
					{
						func_9(Local_19.f_14, 0);
					}
					Global_95998 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_19.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_19, &(Local_19.f_4), Local_19.f_12, 1000, iVar1, Local_19.f_9, Local_19.f_11, Local_19.f_13, Local_19.f_14, Local_19.f_15);
				}
				StringCopy(&Local_19, "", 16);
				StringCopy(&(Local_19.f_4), "", 16);
				Local_19.f_8 = 0;
				Local_19.f_9 = 0;
				Local_19.f_10 = -1;
				Local_19.f_11 = 0;
				Local_19.f_12 = 0;
				Local_19.f_13 = 0;
				Local_19.f_14 = 0;
				Local_19.f_15 = 0;
				Local_19.f_16 = 0;
				Global_95997 = 0;
				Global_95996 = 0;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]), &Local_19) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]), ""))
			{
				if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_10 != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_10)
					{
						iVar2 = iLocal_36;
						while (iVar2 <= (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1));
						Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount = (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1);
						func_6();
					}
				}
			}
			iLocal_36++;
			if (iLocal_36 >= Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
			{
				iLocal_36 = 0;
			}
		}
		else if ((Global_34913 != 6 && Global_34913 != 15) && !Global_86374)
		{
			func_22();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x472
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)//Position - 0x644
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_3(var uParam0)//Position - 0x65D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_4()//Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_19.f_9 != -1 && (MISC::GET_GAME_TIMER() - Global_95997) > Local_19.f_9)
	{
		return 0;
	}
	if (Global_95995)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
	{
		if (!func_3(&Local_19))
		{
			Local_19.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_19, &(Local_19.f_4)))
	{
		Local_19.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x6FF
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x719
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x839
{
	StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_4), "", 16);
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_8 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_9 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_11 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_10 = -1;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_12 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_13 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_14 = 0;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8D1
{
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/] = { Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/] };
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_4 = { Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_4 };
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_8 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_8;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_10 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_10;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_9 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_9;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_11 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_11;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_12 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_12;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_13 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_13;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_14 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_14;
	Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam0 /*16*/].f_15 = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)//Position - 0x9E1
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY[iParam0] = 1;
	Global_SAVE_DATA.CODE_CONTROL_DATA_STRUCT.CODE_CONTROL_EXECUTE_TIMER_ARRAY[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_10(var uParam0, var uParam1)//Position - 0xA1E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11(var uParam0)//Position - 0xA3A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_12()//Position - 0xA50
{
	func_13();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_13()//Position - 0xA69
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_14(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_17(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_14(int iParam0)//Position - 0xB66
{
	return Global_34913 == iParam0;
}

int func_15(var uParam0)//Position - 0xB74
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBB1
{
	if (func_17(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0xBDB
{
	return iParam0 < 3;
}

int func_18()//Position - 0xBE7
{
	func_13();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

int func_19(var uParam0)//Position - 0xC00
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_68243)
		{
			return 0;
		}
		if (Global_87287)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
		{
			if (Global_87295)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()//Position - 0xC8D
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xCB7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

void func_22()//Position - 0xCD3
{
	if (Global_95996)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
		{
			if (func_3(&Local_19))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		else if (func_2(&Local_19, &(Local_19.f_4)))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	Global_95997 = 0;
	Global_95996 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

