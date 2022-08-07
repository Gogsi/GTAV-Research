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
							if (GlobalFunc_42(GlobalFunc_8354()))
							{
								if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_11, GlobalFunc_8354()))
								{
									if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_12 == Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[GlobalFunc_8354()])
									{
										if (MISC::GET_GAME_TIMER() > Global_95998)
										{
											if (MISC::GET_GAME_TIMER() > Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													GlobalFunc_Display_Help_Text2(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/]), &(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_4));
												}
												if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_13 != 0)
												{
													GlobalFunc_66(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iLocal_36 /*16*/].f_13, 0);
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
													GlobalFunc_799(iVar0, iVar0 + 1);
													iVar0++;
												}
												GlobalFunc_798((Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1));
												Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount = (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1);
												GlobalFunc_62();
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
					if (GlobalFunc_572(&Local_19))
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
						GlobalFunc_66(Local_19.f_14, 0);
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
					GlobalFunc_4922(&Local_19, &(Local_19.f_4), Local_19.f_12, 1000, iVar1, Local_19.f_9, Local_19.f_11, Local_19.f_13, Local_19.f_14, Local_19.f_15);
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
							GlobalFunc_799(iVar2, iVar2 + 1);
							iVar2++;
						}
						GlobalFunc_798((Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1));
						Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount = (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount - 1);
						GlobalFunc_62();
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


bool func_2(var uParam0, var uParam1)//Position - 0x644
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


int func_4()//Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (GlobalFunc_488())
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
		if (!GlobalFunc_572(&Local_19))
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






void func_10(var uParam0, var uParam1)//Position - 0xA1E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
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
	if (GlobalFunc_236())
	{
		return 0;
	}
	if (GlobalFunc_488())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (GlobalFunc_489())
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



void func_22()//Position - 0xCD3
{
	if (Global_95996)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_19.f_4), ""))
		{
			if (GlobalFunc_572(&Local_19))
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

