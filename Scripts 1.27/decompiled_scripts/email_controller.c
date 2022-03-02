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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0[120];
	int iVar121;
	int iVar122;
	int iVar123;
	bool bVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	bool bVar131;
	bool bVar132;
	bool bVar133;
	int iVar134;
	bool bVar135;
	bool bVar136;
	int iVar137;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		GlobalFunc_491();
	}
	GlobalFunc_2828();
	func_65();
	Global_35959 = 0;
	iVar121 = GlobalFunc_7719();
	iVar122 = GlobalFunc_7719();
	iVar123 = 2000;
	Global_35961 = 1;
	bVar124 = true;
	while (true)
	{
		iVar125 = 0;
		if (bVar124)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, (4 - 1)))
			{
				GlobalFunc_5901(26);
				bVar124 = false;
			}
		}
		if (!Global_35960 && MISC::GET_GAME_TIMER() > Global_Next_Notification_Time)
		{
			iVar125 = 0;
			while (iVar125 < 120)
			{
				if ((Global_39271[iVar125 /*46*/] && !Global_39271[iVar125 /*46*/].f_1) && !Global_39271[iVar125 /*46*/].f_45)
				{
					iVar0[iVar125] = (iVar0[iVar125] + iVar123);
					if (iVar0[iVar125] > Global_39271[iVar125 /*46*/].f_43)
					{
						if (func_33(7, 144, 2, -1, 0))
						{
							func_31(iVar125, 0);
							iVar0[iVar125] = 0;
							Global_35961 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar125++;
			}
			iVar121 = GlobalFunc_7719();
			iVar126 = 0;
			iVar127 = 0;
			iVar128 = 0;
			func_19(iVar121, iVar122, &iVar127, &iVar127, &iVar126, &iVar127, &iVar127, &iVar127);
			if (iVar126 < 0)
			{
				iVar126 = (iVar126 * -1);
			}
			if (iVar126 > 0 && Global_14393.f_1 == 3)
			{
				iVar122 = iVar121;
				if (Global_46576 > 0)
				{
					iVar129 = Global_46576;
					iVar130 = 0;
					while (iVar129 != 0)
					{
						if ((Global_46577[iVar130 /*53*/].f_52 != 0 && iVar130 < 8) && Global_46577[iVar130 /*53*/].f_4)
						{
							Global_46577[iVar130 /*53*/].f_2 = (Global_46577[iVar130 /*53*/].f_2 - iVar126);
							bVar131 = false;
							bVar132 = false;
							bVar133 = false;
							iVar134 = 0;
							while (!bVar133)
							{
								if (Global_45154[iVar134 /*203*/].f_1 != Global_46577[iVar130 /*53*/].f_52)
								{
									iVar134++;
								}
								else
								{
									bVar132 = true;
									bVar133 = true;
								}
								if (iVar134 == 7)
								{
									bVar133 = true;
									Global_46577[iVar130 /*53*/].f_52 = 0;
									bVar131 = true;
								}
							}
							if (!bVar132)
							{
								bVar131 = true;
								Global_46577[iVar130 /*53*/].f_4 = 0;
							}
							else if (Global_46577[iVar130 /*53*/].f_2 < 1)
							{
								if (func_33(7, 145, 2, -1, 0))
								{
									bVar135 = false;
									if (Global_46577[iVar130 /*53*/].f_5 || Global_46577[iVar130 /*53*/].f_10 > 0)
									{
										bVar135 = true;
									}
									if (GlobalFunc_10731(Global_46577[iVar130 /*53*/], Global_46577[iVar130 /*53*/].f_1, bVar135))
									{
										bVar136 = true;
										if (Global_46577[iVar130 /*53*/].f_10 > 0)
										{
											bVar136 = false;
										}
										if (Global_46577[iVar130 /*53*/].f_5)
										{
											func_15(Global_46577[iVar130 /*53*/], &(Global_46577[iVar130 /*53*/].f_6), bVar136);
										}
										if (Global_46577[iVar130 /*53*/].f_10 > 0)
										{
											iVar128 = 0;
											iVar128 = 0;
											while (iVar128 < Global_46577[iVar130 /*53*/].f_10)
											{
												GlobalFunc_5722(Global_46577[iVar130 /*53*/], &(Global_46577[iVar130 /*53*/].f_11[iVar128 /*4*/]));
												iVar128++;
											}
										}
										if (bVar135 && !bVar136)
										{
											func_1(Global_46577[iVar130 /*53*/]);
										}
										GlobalFunc_5901(Global_46577[iVar130 /*53*/]);
									}
									Global_46577[iVar130 /*53*/].f_52 = 0;
									Global_46577[iVar130 /*53*/].f_5 = 0;
									Global_46577[iVar130 /*53*/].f_2 = 0;
									bVar131 = true;
									Global_46577[iVar130 /*53*/].f_4 = 0;
								}
							}
							if (bVar131)
							{
								Global_46576 = (Global_46576 - 1);
							}
							iVar129 = (iVar129 - 1);
						}
						iVar130++;
						if (iVar130 == 8)
						{
							iVar129 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar123);
		Global_35962 = 0;
		Global_35963 = 0;
		Global_35964 = 0;
		iVar137 = Global_44792[0 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[0 /*120*/].f_69[iVar125])
			{
				Global_35962++;
			}
			iVar125++;
		}
		iVar137 = Global_44792[1 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[1 /*120*/].f_69[iVar125])
			{
				Global_35963++;
			}
			iVar125++;
		}
		iVar137 = Global_44792[2 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[2 /*120*/].f_69[iVar125])
			{
				Global_35964++;
			}
			iVar125++;
		}
		SYSTEM::WAIT(iVar123);
	}
}

void func_1(int iParam0)//Position - 0x439
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = GlobalFunc_2329(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {GlobalFunc_2030(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		GlobalFunc_9247(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				GlobalFunc_9247(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				GlobalFunc_9247(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				GlobalFunc_9247(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}














void func_15(int iParam0, char* sParam1, bool bParam2)//Position - 0x1454
{
	int iVar0;
	
	iVar0 = GlobalFunc_2329(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}




void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1D62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (GlobalFunc_7640(iParam0, iParam1))
	{
		iVar0 = GlobalFunc_210(iParam1);
		iVar1 = GlobalFunc_4975(iParam0);
		iVar2 = (GlobalFunc_4975(iParam0) - GlobalFunc_4975(iParam1));
		iVar3 = (GlobalFunc_210(iParam0) - GlobalFunc_210(iParam1));
		iVar4 = (GlobalFunc_209(iParam0) - GlobalFunc_209(iParam1));
		iVar5 = (GlobalFunc_208(iParam0) - GlobalFunc_208(iParam1));
		iVar6 = (GlobalFunc_207(iParam0) - GlobalFunc_207(iParam1));
		iVar7 = (GlobalFunc_206(iParam0) - GlobalFunc_206(iParam1));
	}
	else
	{
		iVar0 = GlobalFunc_210(iParam0);
		iVar1 = GlobalFunc_4975(iParam1);
		iVar2 = (GlobalFunc_4975(iParam1) - GlobalFunc_4975(iParam0));
		iVar3 = (GlobalFunc_210(iParam1) - GlobalFunc_210(iParam0));
		iVar4 = (GlobalFunc_209(iParam1) - GlobalFunc_209(iParam0));
		iVar5 = (GlobalFunc_208(iParam1) - GlobalFunc_208(iParam0));
		iVar6 = (GlobalFunc_207(iParam1) - GlobalFunc_207(iParam0));
		iVar7 = (GlobalFunc_206(iParam1) - GlobalFunc_206(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + GlobalFunc_91(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(GlobalFunc_739(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}












void func_31(int iParam0, bool bParam1)//Position - 0x22C3
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
	GlobalFunc_2638(iParam0, iVar1);
	Global_39271[iParam0 /*46*/].f_45 = Global_35970[iVar1 /*12*/].f_10;
	Global_39271[iParam0 /*46*/].f_43 = Global_35970[iVar1 /*12*/].f_11;
	iVar2 = Global_39271[iParam0 /*46*/].f_2;
	GlobalFunc_10362(Global_35970[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_2 && Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_3)
		{
			GlobalFunc_10362(Global_39271[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
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


int func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x24A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (GlobalFunc_701())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (GlobalFunc_756() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(iParam0, GlobalFunc_8315()) && !MISC::IS_BIT_SET(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_68243)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (Global_86374)
	{
		return 0;
	}
	if ((GlobalFunc_236() || (Global_17098.f_4 && Global_17098.f_104 == 4)) || GlobalFunc_488())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 18))
	{
		if (!MISC::IS_BIT_SET(iParam0, GlobalFunc_8315()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_87295)
		{
			return 0;
		}
		if (func_43(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(iParam0, GlobalFunc_8315()))
			{
				iVar1 = GlobalFunc_769(GlobalFunc_8315());
				iVar2 = GlobalFunc_769(iParam1);
				iVar3 = GlobalFunc_768(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_8 == 1 || Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_5)))
						{
							if (GlobalFunc_5182(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (GlobalFunc_489())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 3))
	{
		if (Global_96400)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_96066.f_19 != 0)
		{
			return 0;
		}
		if (Global_34913 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (GlobalFunc_2345(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = GlobalFunc_8315();
	if (GlobalFunc_42(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = GlobalFunc_4917(1);
						iVar22[1] = GlobalFunc_4917(2);
						break;
					
					case 1:
						iVar22[0] = GlobalFunc_4917(0);
						iVar22[1] = GlobalFunc_4917(2);
						break;
					
					case 2:
						iVar22[0] = GlobalFunc_4917(0);
						iVar22[1] = GlobalFunc_4917(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = GlobalFunc_4917(1);
				iVar22[1] = GlobalFunc_4917(2);
				break;
			
			case 6:
				iVar22[0] = GlobalFunc_4946(12);
				iVar22[1] = GlobalFunc_4917(1);
				break;
			
			case 7:
				iVar22[0] = GlobalFunc_4946(12);
				iVar22[1] = GlobalFunc_4917(0);
				break;
			
			case 8:
				iVar22[0] = GlobalFunc_4917(0);
				iVar22[1] = GlobalFunc_4917(1);
				break;
			
			case 9:
				iVar22[0] = GlobalFunc_4917(0);
				iVar22[1] = GlobalFunc_4917(2);
				break;
			
			case 10:
				iVar22[0] = GlobalFunc_4946(23);
				iVar22[1] = GlobalFunc_4917(0);
				break;
			
			case 11:
				iVar22[0] = GlobalFunc_4946(23);
				iVar22[1] = GlobalFunc_4917(0);
				break;
			
			default:
				if (GlobalFunc_42(iParam1))
				{
					iVar22[0] = GlobalFunc_4917(iParam1);
				}
				else
				{
					iVar22[0] = GlobalFunc_4946(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar26]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar26]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar26], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_87845[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_87845[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_87845[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_89952[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_89952[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_89952[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}










int func_43(float fParam0, bool bParam1)//Position - 0x2DE4
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar36 = GlobalFunc_8310();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
			{
				GlobalFunc_6675(iVar32, &Var0);
				fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}






















void func_65()//Position - 0x4C9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_44792[iVar0 /*120*/] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_44792[iVar0 /*120*/].f_1[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_1[iVar1];
			Global_44792[iVar0 /*120*/].f_18[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_18[iVar1];
			Global_44792[iVar0 /*120*/].f_35[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_35[iVar1];
			Global_44792[iVar0 /*120*/].f_52[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_52[iVar1];
			Global_44792[iVar0 /*120*/].f_69[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_69[iVar1];
			Global_44792[iVar0 /*120*/].f_86[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_45154[iVar0 /*203*/].f_2 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/];
		Global_45154[iVar0 /*203*/] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_2;
		Global_45154[iVar0 /*203*/].f_3 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_3;
		Global_45154[iVar0 /*203*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_1;
		Global_45154[iVar0 /*203*/].f_9 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_45154[iVar0 /*203*/].f_4[iVar1] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_39271[iVar0 /*46*/] = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/];
		Global_39271[iVar0 /*46*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_1;
		Global_39271[iVar0 /*46*/].f_45 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_2;
		Global_39271[iVar0 /*46*/].f_31 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_39271[iVar0 /*46*/].f_32[iVar1] = (Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_39271[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_46576 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_46577[iVar0 /*53*/] = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/];
		Global_46577[iVar0 /*53*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_1;
		Global_46577[iVar0 /*53*/].f_2 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_2;
		Global_46577[iVar0 /*53*/].f_5 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_5;
		Global_46577[iVar0 /*53*/].f_6 = { Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_6 };
		Global_46577[iVar0 /*53*/].f_10 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_46577[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_46577[iVar0 /*53*/].f_52 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_52;
		if (Global_46577[iVar0 /*53*/].f_52 != 0)
		{
			Global_46576++;
		}
		iVar0++;
	}
}



