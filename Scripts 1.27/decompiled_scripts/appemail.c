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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
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
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	char* sLocal_68 = NULL;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_59 = -1;
	iLocal_60 = -1;
	fLocal_69 = 0f;
	iLocal_70 = 1;
	if (Global_68245)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_54 = GlobalFunc_8354();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	Global_16725 = 0;
	Global_16726 = 0;
	Global_14393.f_1 = 8;
	Global_16726 = 1;
	Global_35960 = 1;
	if (Global_14375)
	{
		func_72(0);
		func_71(1);
		func_70(0);
	}
	SYSTEM::SETTIMERB(0);
	Local_46 = { Global_14346[Global_14338 /*3*/] };
	Local_49 = { Local_46 };
	Local_49.x = (Local_49.x - 10f);
	Local_49.f_1 = (Local_49.f_1 + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			if (Global_16726 && !Global_16725)
			{
				func_68();
			}
			else if (Global_16725)
			{
				func_63();
			}
			if (!iLocal_55)
			{
				iLocal_55 = 1;
			}
			else if (Global_14375)
			{
				if (!iLocal_56)
				{
					iLocal_56 = 1;
					func_61(Global_14374, iLocal_54);
					GlobalFunc_5587(Global_14374, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_35961)
					{
						Global_35961 = 0;
						iLocal_57 = 1;
					}
					if (iLocal_57)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_59 == -1)
						{
							if (iLocal_70)
							{
								iLocal_70 = 0;
								fLocal_69 = 0f;
							}
							GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_61(Global_14374, iLocal_54);
							GlobalFunc_5587(Global_14374, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_58 = 0;
							if (iVar0 > 0)
							{
								func_72(1);
							}
							else
							{
								func_72(0);
							}
							func_71(1);
							func_70(0);
							GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 8f, fLocal_69, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_71(1);
							func_58();
							if (iLocal_60 == -1)
							{
								func_56(iLocal_54, iLocal_59);
								func_51(Global_14374, iLocal_54, iLocal_59);
								Global_16752 = 0;
								iLocal_67 = func_49(iLocal_54, iLocal_59);
								if (iLocal_67)
								{
									sLocal_68 = func_46(iLocal_54, iLocal_59);
									if (!GlobalFunc_63(37))
									{
										switch (GlobalFunc_5216("AM_H_FLINK"))
										{
											case 2:
												GlobalFunc_6677("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												GlobalFunc_651(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!MISC::IS_BIT_SET(Global_2544648, 17))
										{
											MISC::SET_BIT(&Global_2544648, 17);
											GlobalFunc_159("AM_H_FLINK", -1);
										}
									}
									func_70(1);
								}
								else
								{
									if (!GlobalFunc_63(38))
									{
										switch (GlobalFunc_5216("AM_H_SCROLL"))
										{
											case 2:
												GlobalFunc_6677("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												GlobalFunc_651(38);
												break;
											}
									}
									func_70(0);
								}
								GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_35(Global_14374, iLocal_54, iLocal_59);
								GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_57 = 0;
					}
					else
					{
						func_13();
					}
				}
			}
			if (!iLocal_54 == GlobalFunc_8354())
			{
				Global_35960 = 0;
				func_4();
			}
		}
		if (GlobalFunc_2001())
		{
			Global_16725 = 0;
			Global_16726 = 0;
			Global_35960 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x48F
{
	if (GlobalFunc_2003())
	{
		if (iParam0 == 1)
		{
			MOBILE::_CELL_CAM_SET_LEAN(1);
		}
		else if (Global_14393.f_1 > 3)
		{
			MOBILE::_CELL_CAM_SET_LEAN(0);
		}
	}
}



void func_4()//Position - 0x544
{
	if (Global_45153 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_12(Global_45153));
		Global_45153 = -1;
	}
	Global_35960 = 0;
	if (Global_14393.f_1 > 4)
	{
		Global_14393.f_1 = 6;
		GlobalFunc_7908();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}








char* func_12(int iParam0)//Position - 0x1478
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_13()//Position - 0x15D0
{
	bool bVar0;
	
	if (Global_16752)
	{
		iLocal_59 = 0;
		fLocal_69 = SYSTEM::TO_FLOAT(iLocal_59);
		if (func_34(iLocal_54) == 0)
		{
			iLocal_59 = -1;
		}
		if (!iLocal_59 == -1)
		{
			Global_14393.f_1 = 8;
			iLocal_57 = 1;
			SYSTEM::SETTIMERB(0);
			GlobalFunc_7017();
		}
		return;
	}
	if (Global_67058)
	{
		return;
	}
	if (Global_16725)
	{
		return;
	}
	if (!iLocal_63)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 172) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			iLocal_63 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			SYSTEM::SETTIMERA(0);
			iLocal_70 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_CONTROL_PRESSED(2, 181))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_59 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			iLocal_70 = 1;
		}
	}
	else
	{
		iLocal_63 = 0;
	}
	if (!iLocal_64)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 173) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_64 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			SYSTEM::SETTIMERB(0);
			iLocal_70 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_CONTROL_PRESSED(2, 180))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_59 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			iLocal_70 = 1;
		}
	}
	else
	{
		iLocal_64 = 0;
	}
	if (!iLocal_65)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 174))
		{
			iLocal_65 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 174))
	{
		iLocal_65 = 0;
	}
	if (!iLocal_66)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 175))
		{
			iLocal_66 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 175))
	{
		iLocal_66 = 0;
	}
	if (!iLocal_62)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 176) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_59 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
				uLocal_52 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_52))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_53 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_52);
				iLocal_59 = iLocal_53;
				if (func_34(iLocal_54) == 0)
				{
					iLocal_59 = -1;
				}
				if (!iLocal_59 == -1)
				{
					if (iLocal_70 == 1)
					{
						fLocal_69 = SYSTEM::TO_FLOAT(iLocal_59);
						iLocal_70 = 0;
					}
					Global_14393.f_1 = 8;
					iLocal_57 = 1;
					SYSTEM::SETTIMERB(0);
					GlobalFunc_7017();
				}
			}
			else if (iLocal_60 == -1)
			{
				if (func_30(iLocal_54, iLocal_59) && !iLocal_58)
				{
					iLocal_60 = 0;
					iLocal_57 = 1;
					SYSTEM::SETTIMERB(0);
					GlobalFunc_7017();
				}
			}
			else
			{
				iLocal_60 = 0;
				func_18(iLocal_54, iLocal_59, iLocal_60);
				iLocal_58 = 1;
				iLocal_60 = -1;
				iLocal_57 = 1;
				GlobalFunc_7017();
				SYSTEM::SETTIMERB(0);
			}
			iLocal_62 = 1;
		}
	}
	else
	{
		iLocal_62 = 0;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 177))
		{
			bVar0 = false;
			if (iLocal_61 == 0)
			{
				if (!iLocal_59 == -1)
				{
					if (iLocal_60 == -1)
					{
						iLocal_59 = SYSTEM::ROUND(fLocal_69);
						iLocal_67 = 0;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						GlobalFunc_2011();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_60 = -1;
						GlobalFunc_2011();
					}
					iLocal_57 = 1;
				}
				else
				{
					if (GlobalFunc_5216("AM_H_FLINK") == 0)
					{
						GlobalFunc_651(37);
					}
					if (GlobalFunc_5216("AM_H_SCROLL") == 0)
					{
						GlobalFunc_651(38);
					}
					if (Global_16726 == 0 && !Global_16725)
					{
						GlobalFunc_2011();
						Global_16725 = 1;
						Global_35960 = 0;
					}
				}
				iLocal_61 = 1;
			}
			if (bVar0)
			{
				iLocal_59 = -1;
			}
		}
		else
		{
			iLocal_61 = 0;
		}
	}
	if (PAD::IS_CONTROL_PRESSED(2, 179))
	{
		if (iLocal_67)
		{
			if (GlobalFunc_5216("AM_H_FLINK") == 0)
			{
				GlobalFunc_651(37);
			}
			if (GlobalFunc_5216("AM_H_SCROLL") == 0)
			{
				GlobalFunc_651(38);
			}
			StringCopy(&Global_67042, sLocal_68, 64);
			GlobalFunc_5590(7);
			iLocal_67 = 0;
			GlobalFunc_7017();
		}
	}
}





void func_18(int iParam0, int iParam1, int iParam2)//Position - 0x1A92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_44792[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_44792[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_44792[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 120)
	{
		return;
	}
	iVar5 = Global_39271[iVar3 /*46*/].f_32[iVar4];
	if (Global_35970[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_44792[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_44792[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_19(iVar3, iParam2);
}

void func_19(int iParam0, int iParam1)//Position - 0x1B8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_39271[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_39271[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_35970[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_35970[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_39271[iParam0 /*46*/].f_31 < (Global_39271[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_39271[iParam0 /*46*/].f_8[Global_39271[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_29(iParam0, iVar2);
			iVar5 = Global_39271[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_35970[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_23(Global_39271[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_35970[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_20(Global_35970[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_35970[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_39271[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_39271[iParam0 /*46*/].f_45 = Global_35970[iVar2 /*12*/].f_10;
		Global_39271[iParam0 /*46*/].f_43 = Global_35970[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_39271[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_39271[iParam0 /*46*/].f_43 < 30000)
	{
		Global_39271[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_20(int iParam0, bool bParam1)//Position - 0x1D2F
{
	Global_35961 = 1;
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		Global_39271[iParam0 /*46*/] = 1;
		func_22(iParam0, bParam1);
	}
	else
	{
		GlobalFunc_2026(iParam0);
		func_20(iParam0, bParam1);
	}
}


void func_22(int iParam0, bool bParam1)//Position - 0x1DB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_39271[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_39271[iParam0 /*46*/].f_8[Global_39271[iParam0 /*46*/].f_31];
	Global_39271[iParam0 /*46*/].f_31++;
	func_29(iParam0, iVar1);
	Global_39271[iParam0 /*46*/].f_45 = Global_35970[iVar1 /*12*/].f_10;
	Global_39271[iParam0 /*46*/].f_43 = Global_35970[iVar1 /*12*/].f_11;
	iVar2 = Global_39271[iParam0 /*46*/].f_2;
	func_23(Global_35970[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_2 && Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_3)
		{
			func_23(Global_39271[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[(Global_39271[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1F54
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39271[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39271[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { GlobalFunc_2030(Global_35970[iVar20 /*12*/].f_1) };
		if (Global_35970[iVar20 /*12*/].f_2 == iParam0 && !Global_35970[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35970[iVar20 /*12*/].f_2;
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45154[iVar24 /*203*/].f_1 == iParam1 && Global_45154[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = Global_45154[iVar23 /*203*/].f_1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = (Global_45154[iVar23 /*203*/].f_9 - 1);
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
		iVar25 = Global_44792[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45154[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35970[iVar26 /*12*/].f_2;
		if (Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { GlobalFunc_2030(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_24(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_24(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_24(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_24(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_24(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x2329
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = GlobalFunc_8354();
	bVar1 = false;
	StringCopy(&cVar2, GlobalFunc_2029(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			GlobalFunc_2027(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(GlobalFunc_2028(iParam1)), 0));
		}
		else
		{
			GlobalFunc_2027(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(GlobalFunc_2028(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35962++;
				if (Global_35962 > 16)
				{
					Global_35962 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35964++;
				if (Global_35964 > 16)
				{
					Global_35964 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35963++;
				if (Global_35963 > 16)
				{
					Global_35963 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_14382, 1);
	}
}





int func_29(int iParam0, int iParam1)//Position - 0x2D37
{
	if (Global_39271[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_39271[iParam0 /*46*/].f_32[Global_39271[iParam0 /*46*/].f_42] = iParam1;
	Global_39271[iParam0 /*46*/].f_42++;
	return 1;
}

int func_30(int iParam0, int iParam1)//Position - 0x2D7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_44792[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_44792[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_44792[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_44792[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_39271[iVar3 /*46*/].f_32[iVar4];
		if (Global_35970[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_44792[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_31(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0, int iParam1)//Position - 0x2E5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_44792[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_44792[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_39271[iVar1 /*46*/] && !Global_39271[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_39271[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_39271[iVar1 /*46*/].f_32[(Global_39271[iVar1 /*46*/].f_42 - 1)];
	if (Global_35970[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}



int func_34(int iParam0)//Position - 0x2F24
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_44792[iVar0 /*120*/];
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x2F61
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
	struct<16> Var9;
	struct<16> Var25;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_44792[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_44792[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_44792[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_44792[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_39271[iVar3 /*46*/].f_32[iVar4];
		if (Global_35970[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_35970[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_35970[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { GlobalFunc_2030(Global_35970[iVar8 /*12*/].f_1) };
			Var25 = { GlobalFunc_2030(Global_35970[iVar8 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726("");
			GlobalFunc_726("");
			GlobalFunc_726("EM_RESPONSE_NEW");
			GlobalFunc_726(&Var25);
			GlobalFunc_726(func_37(Global_35970[iVar8 /*12*/].f_2));
			func_36(iVar8, Global_35970[iVar8 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar6++;
		}
	}
}

void func_36(int iParam0, int iParam1)//Position - 0x30CA
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
		
		default:
	}
}

char* func_37(int iParam0)//Position - 0x31E4
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}









char* func_46(int iParam0, int iParam1)//Position - 0x3963
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_48(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_44792[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_39271[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_45154[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_45154[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_47(iVar5);
}

char* func_47(int iParam0)//Position - 0x3A23
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_48(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3D19
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_44792[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_44792[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_44792[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_44792[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_49(int iParam0, int iParam1)//Position - 0x3D76
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_48(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_44792[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_39271[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_45154[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_45154[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_50(iVar5);
}

int func_50(int iParam0)//Position - 0x3E33
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
			return 1;
		
		default:
	}
	return 0;
}

void func_51(var uParam0, int iParam1, int iParam2)//Position - 0x3F9D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	struct<16> Var47;
	struct<16> Var63;
	bool bVar79;
	int iVar80;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_48(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_44792[iVar0 /*120*/].f_86[iVar4];
	if (!Global_44792[iVar0 /*120*/].f_69[iVar4])
	{
		func_55(-1);
	}
	Global_44792[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_39271[iVar2 /*46*/].f_32[iVar3];
		Var7 = { GlobalFunc_2030(Global_35970[iVar6 /*12*/]) };
		Var23 = { GlobalFunc_2030(Global_35970[iVar6 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GlobalFunc_726(func_54(Global_35970[iVar6 /*12*/].f_3));
		GlobalFunc_726(func_54(Global_35970[iVar6 /*12*/].f_2));
		GlobalFunc_726(&Var7);
		GlobalFunc_726(&Var23);
		GlobalFunc_726(func_37(Global_35970[iVar6 /*12*/].f_2));
		func_36(iVar6, Global_35970[iVar6 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (Global_35970[iVar6 /*12*/].f_4 == 0)
		{
			func_72(0);
		}
		else if (bVar1 || !func_31(iVar0, iVar4))
		{
			func_72(0);
		}
		else
		{
			func_72(1);
		}
		if (Global_39271[iVar2 /*46*/].f_42 > 1)
		{
			iVar39 = iVar3;
			iVar40 = (iVar3 - 1);
			iVar41 = 0;
			iVar41 = 0;
			while (iVar41 < iVar39)
			{
				iVar6 = Global_39271[iVar2 /*46*/].f_32[iVar40];
				Var7 = { GlobalFunc_2030(Global_35970[iVar6 /*12*/]) };
				Var23 = { GlobalFunc_2030(Global_35970[iVar6 /*12*/].f_1) };
				iVar42 = func_53(iParam1, Global_35970[iVar6 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar41 + 1);
				GlobalFunc_726(func_54(iVar42));
				GlobalFunc_726(func_54(Global_35970[iVar6 /*12*/].f_2));
				GlobalFunc_726(&Var7);
				GlobalFunc_726(&Var23);
				GlobalFunc_726(func_37(Global_35970[iVar6 /*12*/].f_2));
				func_36(iVar6, Global_35970[iVar6 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar40 = (iVar40 - 1);
				iVar41++;
			}
		}
	}
	else
	{
		iVar43 = -1;
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 < 7)
		{
			if (Global_45154[iVar44 /*203*/].f_1 == iVar2)
			{
				iVar43 = iVar44;
			}
			iVar44++;
		}
		if (iVar43 == -1)
		{
			return;
		}
		else
		{
			iVar45 = Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/];
			Var47 = { GlobalFunc_2030(Global_35970[iVar45 /*12*/]) };
			Var63 = { GlobalFunc_2030(Global_35970[iVar45 /*12*/].f_1) };
			if (Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var63, {Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_35970[iVar45 /*12*/].f_4 == 0)
			{
				func_72(0);
			}
			else if (bVar1)
			{
				func_72(0);
			}
			else
			{
				func_72(1);
			}
			bVar79 = false;
			bVar79 = func_52(uParam0, Global_45154[iVar43 /*203*/].f_1, iVar3, iVar46);
			if (!bVar79)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(func_54(Global_35970[iVar45 /*12*/].f_3));
				GlobalFunc_726(func_54(Global_35970[iVar45 /*12*/].f_2));
				GlobalFunc_726(&Var47);
				if (Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var63);
					iVar80 = 0;
					iVar80 = 0;
					while (iVar80 < Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_45154[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]));
						iVar80++;
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GlobalFunc_726(&Var63);
				}
				GlobalFunc_726(func_37(Global_35970[iVar45 /*12*/].f_2));
				func_36(iVar45, Global_35970[iVar45 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_52(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x438B
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var19;
	int iVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var3 = { GlobalFunc_2030(Global_35970[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var19, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var19, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var19, "PROPR_INCEMAIL2", 64);
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GlobalFunc_726(func_54(Global_35970[iParam3 /*12*/].f_3));
	GlobalFunc_726(func_54(Global_35970[iParam3 /*12*/].f_2));
	GlobalFunc_726(&Var3);
	GlobalFunc_726(&Var19);
	GlobalFunc_726(func_37(Global_35970[iParam3 /*12*/].f_2));
	GlobalFunc_726("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar2++;
	iVar35 = 0;
	while (iVar35 < 16)
	{
		iVar36 = iVar35;
		bVar37 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar36 /*4*/] == 0)
				{
					bVar37 = true;
				}
				break;
			
			case 73:
				if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar36 /*4*/] == 1)
				{
					bVar37 = true;
				}
				break;
			
			case 74:
				if (Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar36 /*4*/] == 2)
				{
					bVar37 = true;
				}
				break;
		}
		if (bVar37)
		{
			switch (iVar36)
			{
				case 0:
					sVar38 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar38 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar38 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar38 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar38 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar38 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar38 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar38 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar38 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar38 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar38 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar38 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar38 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar38 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar38 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar38 = "ACCNA_STRP";
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar38);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iVar36 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			iVar0 = 1;
		}
		iVar35++;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)//Position - 0x4624
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_54(int iParam0)//Position - 0x464B
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_55(int iParam0)//Position - 0x49B6
{
	switch (GlobalFunc_8354())
	{
		case 0:
			Global_35962 = (Global_35962 + iParam0);
			if (Global_35962 < 0)
			{
				Global_35962 = 0;
			}
			break;
		
		case 2:
			Global_35964 = (Global_35964 + iParam0);
			if (Global_35964 < 0)
			{
				Global_35964 = 0;
			}
			break;
		
		case 1:
			Global_35963 = (Global_35963 + iParam0);
			if (Global_35963 < 0)
			{
				Global_35963 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_56(int iParam0, int iParam1)//Position - 0x4A21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_44792[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_44792[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_44792[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_44792[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_39271[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_45154[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_45154[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_57(iVar5))
	{
		return;
	}
	if (Global_45153 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_12(Global_45153));
	}
	Global_45153 = iVar5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_12(iVar5), 0);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_12(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

int func_57(int iParam0)//Position - 0x4B53
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_58()//Position - 0x4C03
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_35965[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_35965[iVar0]);
			Global_35965[iVar0] = -1;
		}
		iVar0++;
	}
	Global_35969 = 0;
}



int func_61(var uParam0, int iParam1)//Position - 0x4D00
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<16> Var18;
	
	func_62(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_44792[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_44792[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_44792[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_44792[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_44792[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_44792[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_39271[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_44792[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_35970[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_44792[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {GlobalFunc_2030(Global_35970[iVar6 /*12*/])}, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726(func_54(Global_35970[iVar6 /*12*/].f_2));
			GlobalFunc_726(&sVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			iVar12 = Global_44792[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
			iVar14 = 0;
			while (iVar14 < 7)
			{
				if (Global_45154[iVar14 /*203*/].f_1 == iVar12)
				{
					iVar13 = iVar14;
				}
				iVar14++;
			}
			if (iVar13 == -1)
			{
				return 1;
			}
			else
			{
				iVar15 = Global_44792[iVar0 /*120*/].f_1[iVar1];
				iVar16 = 0;
				if (Global_44792[iVar0 /*120*/].f_69[iVar1])
				{
					iVar16 = 1;
				}
				iVar17 = Global_45154[iVar13 /*203*/].f_10[iVar15 /*48*/];
				if (iVar16 == 1)
				{
					if (Global_35970[iVar17 /*12*/].f_4 > 0)
					{
						if (Global_44792[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar16 = 2;
						}
					}
				}
				Var18 = { GlobalFunc_2030(Global_35970[iVar17 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(func_54(Global_35970[iVar17 /*12*/].f_2));
				GlobalFunc_726(&Var18);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_62(int iParam0)//Position - 0x4F8F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_44792[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_44792[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_44792[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar124 = 0;
	while (iVar124 < iVar2)
	{
		bVar125 = true;
		if (Global_44792[iVar0 /*120*/].f_103[iVar3])
		{
			bVar125 = false;
		}
		if (Global_44792[iVar0 /*120*/].f_86[iVar3])
		{
			iVar126 = Global_44792[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
			iVar128 = 0;
			while (iVar128 < 7)
			{
				if (Global_45154[iVar128 /*203*/].f_1 == iVar126)
				{
					iVar127 = iVar128;
				}
				iVar128++;
			}
			if (iVar127 == -1)
			{
				bVar125 = false;
			}
		}
		if (bVar125)
		{
			iVar129 = Var4;
			Var4.f_1[iVar129] = Global_44792[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar129] = Global_44792[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar129] = Global_44792[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar129] = Global_44792[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar129] = Global_44792[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar129] = Global_44792[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar124++;
	}
	Global_44792[iVar0 /*120*/] = Var4;
	iVar124 = 0;
	while (iVar124 < 16)
	{
		Global_44792[iVar0 /*120*/].f_103[iVar124] = 0;
		Global_44792[iVar0 /*120*/].f_1[iVar124] = Var4.f_1[iVar124];
		Global_44792[iVar0 /*120*/].f_18[iVar124] = Var4.f_18[iVar124];
		Global_44792[iVar0 /*120*/].f_35[iVar124] = Var4.f_35[iVar124];
		Global_44792[iVar0 /*120*/].f_52[iVar124] = Var4.f_52[iVar124];
		Global_44792[iVar0 /*120*/].f_69[iVar124] = Var4.f_69[iVar124];
		Global_44792[iVar0 /*120*/].f_86[iVar124] = Var4.f_86[iVar124];
		iVar124++;
	}
}

void func_63()//Position - 0x522B
{
	float fVar0;
	
	fVar0 = func_64(Local_49, Local_46, -90f, 0f, 90f, Global_14353, 350f, 0);
	if (Global_3067 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_16725 = 0;
		func_1(0);
		func_4();
		iLocal_17 = 0;
	}
}

float func_64(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x5289
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2544851 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2263, 14) && Global_14393.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
			{
				Global_2544851 = 1;
			}
		}
	}
	if (GlobalFunc_5582() && Global_2544851 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = MISC::GET_GAME_TIMER();
	}
	fVar3 = GlobalFunc_253((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_17)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_14321 = { GlobalFunc_2031(Param0, Param3, fVar4) };
		Global_14324 = { GlobalFunc_2031(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14321 = { Param3 };
		Global_14324 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14324, 0);
	return fVar3;
}




void func_68()//Position - 0x55EF
{
	float fVar0;
	
	fVar0 = func_64(Local_46, Local_49, Global_14353, -90f, 0f, 90f, 350f, 0);
	if (Global_3067 == 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			if (!GlobalFunc_2015())
			{
				MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
			}
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_16726 = 0;
		iLocal_17 = 0;
	}
}


void func_70(bool bParam0)//Position - 0x568F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_71(bool bParam0)//Position - 0x570D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_72(bool bParam0)//Position - 0x5787
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		HUD::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}






