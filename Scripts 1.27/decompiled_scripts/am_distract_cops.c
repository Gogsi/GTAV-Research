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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<19> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_74 = 0;
	struct<4> Local_75[32];
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_177(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_169(ScriptParam_0);
	}
	else
	{
		func_166();
	}
	while (true)
	{
		func_165();
		if (func_155() || func_151(16))
		{
			func_166();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_166();
		}
		switch (func_150(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_149() == 1)
				{
					func_148();
					Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_149() == 4)
				{
					Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_149() == 1)
				{
					func_50();
				}
				else if (func_149() == 4)
				{
					func_14();
					Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_55.f_18));
				if (func_12(&(Local_55.f_18)))
				{
					Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_166();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_149())
			{
				case 0:
					Local_55 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_55 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1AE
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1C2
{
	if (Local_55.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x1D7
{
	struct<14> Var0;
	
	switch (Local_55.f_7)
	{
		case 0:
			if (MISC::IS_BIT_SET(Local_55.f_1, 0))
			{
				Local_55.f_7 = 1;
			}
			else if (func_9(&(Local_55.f_8), 480000, 0))
			{
				Var0.f_2 = 114;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_55.f_1), 1);
				Local_55.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()//Position - 0x24D
{
	if (!func_9(&(Local_55.f_10), Local_55.f_12, 0))
	{
		if (func_9(&(Local_55.f_13), Local_55.f_15, 0))
		{
			Local_55.f_17++;
			Local_55.f_16 = func_6();
			func_5(&(Local_55.f_13));
		}
	}
	else
	{
		Local_55.f_7 = 2;
	}
}

void func_5(var uParam0)//Position - 0x298
{
	uParam0->f_1 = 0;
}

int func_6()//Position - 0x2A5
{
	switch (Local_55.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_55.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x306
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)//Position - 0x32F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_177(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x38C
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x3EA
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()//Position - 0x42F
{
	int iVar0;
	
	if (Local_55 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_210)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_210));
			if (func_177(iVar0, 1, 1))
			{
				if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_75[iLocal_210 /*4*/].f_1, 0))
					{
						iLocal_211 = 1;
						MISC::SET_BIT(&(Local_55.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_210++;
	if (iLocal_210 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_211 == 0)
		{
			if (MISC::IS_BIT_SET(Local_55.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_55.f_1), 0);
			}
		}
		else
		{
			iLocal_211 = 0;
		}
		iLocal_210 = 0;
	}
}

int func_12(var uParam0)//Position - 0x4BD
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x4E6
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()//Position - 0x505
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!MISC::IS_BIT_SET(iLocal_204, 1))
	{
		if ((MISC::IS_BIT_SET(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_55.f_16 - 1)) && Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_6400);
			func_47(iVar0, 1, 1, 0);
			if (func_46())
			{
				func_39(-2043695058, iVar0, &uVar5, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
			}
			if (func_38())
			{
				func_25(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_25(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(47, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432);
			if (MISC::IS_BIT_SET(iLocal_204, 4))
			{
				if (!MISC::IS_BIT_SET(iLocal_204, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&iLocal_204, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x612
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0x639
{
	int iVar0;
	
	iVar0 = Global_2475233[iParam0 /*6*/][func_18(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)//Position - 0x65D
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x689
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

var func_19()//Position - 0x6BD
{
	return Global_1312737;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6C9
{
	struct<50> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_47 = 1;
	Var0.f_49 = -1;
	func_23(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	return func_21(&Var0);
}

int func_21(var uParam0)//Position - 0x728
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2422140.f_2325)
		{
			return 0;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (Global_2422140.f_2123[0 /*50*/].f_2 == 0)
		{
			Global_2422140.f_2123[0 /*50*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422140.f_2123[0 /*50*/].f_1 == 13 || Global_2422140.f_2123[0 /*50*/].f_1 == 49) || Global_2422140.f_2123[0 /*50*/].f_1 == 50) || Global_2422140.f_2123[0 /*50*/].f_1 == 54)
		{
			Global_2422140.f_2123[0 /*50*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422140.f_2123[iVar0 + 1 /*50*/] = { Global_2422140.f_2123[iVar0 /*50*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422140.f_2123[1 /*50*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422140.f_2123[iVar0 /*50*/].f_2 == 0)
		{
			Global_2422140.f_2123[iVar0 /*50*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			Global_2422140.f_2123[iVar0 /*50*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x86F
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 52) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x945
{
	uParam1->f_16 = func_24();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_17), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = uParam2;
	uParam1->f_47 = 1;
}

int func_24()//Position - 0x97B
{
	return -1;
}

void func_25(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x984
{
	func_26(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_26(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x99B
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_27(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_27(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x9BC
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_36();
	if (iVar0 == -1)
	{
		return;
	}
	func_35(iVar0);
	func_34(iVar0, uParam0);
	func_33(iVar0, uParam2, bParam3);
	func_32(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_31(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_29(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_28(iVar0, iParam6);
	}
}

void func_28(int iParam0, int iParam1)//Position - 0xA68
{
	Global_1321259.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_29(int iParam0, char* sParam1, bool bParam2)//Position - 0xA7E
{
	StringCopy(&(Global_1321259.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_30(iParam0);
}

void func_30(int iParam0)//Position - 0xAA5
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 5);
}

void func_31(int iParam0)//Position - 0xABC
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 4);
}

void func_32(int iParam0, char* sParam1)//Position - 0xAD3
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321259.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_33(int iParam0, var uParam1, bool bParam2)//Position - 0xAF3
{
	Global_1321259.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
	}
}

void func_34(int iParam0, var uParam1)//Position - 0xB4D
{
	Global_1321259.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_35(int iParam0)//Position - 0xB63
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 0);
}

int func_36()//Position - 0xB7A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_37(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_37(int iParam0)//Position - 0xBA8
{
	return MISC::IS_BIT_SET(Global_1321259.f_59[iParam0 /*16*/], 0);
}

int func_38()//Position - 0xBBF
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0xBE0
{
	int iVar0;
	
	if (!func_46())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_40(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_40(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE78
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_45(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540096[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2540554 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2540556 = 1;
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_44(1, iParam4);
			Global_2540556 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_41(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_41(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0xFEC
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_42(iParam0);
	}
}

void func_42(int iParam0)//Position - 0x1023
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_43(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_2540096[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540096[iParam0 /*69*/] = { Var1 };
	}
}

int func_43(int iParam0)//Position - 0x1084
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_44(int iParam0, var uParam1)//Position - 0x10AC
{
	Global_2437132 = uParam1;
	Global_2437131 = iParam0;
}

int func_45(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)//Position - 0x10C0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540096[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_46())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540096[iVar0 /*69*/].f_2 = 1;
			Global_2540096[iVar0 /*69*/].f_1 = uParam5;
			Global_2540096[iVar0 /*69*/].f_3 = uParam1;
			Global_2540096[iVar0 /*69*/].f_4 = uParam2;
			Global_2540096[iVar0 /*69*/].f_7 = uParam3;
			Global_2540096[iVar0 /*69*/].f_5 = 0;
			Global_2540096[iVar0 /*69*/] = iParam0;
			Global_2540096[iVar0 /*69*/].f_6 = iParam4;
			Global_2540096[iVar0 /*69*/].f_65 = uParam8;
			Global_2540096[iVar0 /*69*/].f_64 = uParam7;
			Global_2540096[iVar0 /*69*/].f_68 = 0;
			Global_2540554 = 0;
			if (bParam6)
			{
				Global_2540096[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_46()//Position - 0x1194
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x11A8
{
	func_48(iParam0, iParam1, iParam2, fParam3);
}

void func_48(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x11BC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_4 = iVar1;
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 = (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_49(iVar1, 0);
	}
}

void func_49(int iParam0, bool bParam1)//Position - 0x123F
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_50()//Position - 0x1250
{
	func_146();
	switch (Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_2, Local_55.f_5, Local_55.f_5, 1000f, 0, 1, 0))
			{
				func_124();
				MISC::SET_BIT(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_2446554.f_4398), 0);
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_55.f_7 > 1)
			{
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_111();
			func_51();
			if (Local_55.f_7 > 1)
			{
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_51()//Position - 0x1303
{
	func_110();
	func_60();
	func_53();
	func_52();
}

void func_52()//Position - 0x131B
{
	if (!MISC::IS_BIT_SET(iLocal_204, 5))
	{
		if (!MISC::IS_BIT_SET(iLocal_204, 4))
		{
			if (Local_55.f_17 == 0)
			{
				MISC::SET_BIT(&iLocal_204, 4);
			}
			else
			{
				MISC::SET_BIT(&iLocal_204, 5);
			}
		}
		else if (!func_177(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&iLocal_204, 5);
		}
	}
}

void func_53()//Position - 0x136A
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_59();
	}
	else
	{
		func_58();
	}
	if ((Local_55.f_12 - func_57(&(Local_55.f_10), 0, 0)) >= 0)
	{
		func_54((Local_55.f_12 - func_57(&(Local_55.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	else
	{
		func_54(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
}

void func_54(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x13F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_56(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_55(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_55(int iParam0, int iParam1)//Position - 0x1513
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_56(int iParam0, int iParam1)//Position - 0x152C
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

int func_57(var uParam0, bool bParam1, bool bParam2)//Position - 0x1545
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_58()//Position - 0x158C
{
	Global_1328872.f_765 = 1;
}

void func_59()//Position - 0x159C
{
	Global_1328872.f_764 = 1;
}

void func_60()//Position - 0x15AC
{
	if (func_9(&uLocal_206, 30000, 0))
	{
		switch (Local_55.f_16)
		{
			case 2:
				func_107(2089, 1, -1);
				break;
			
			case 3:
				func_107(2090, 1, -1);
				break;
			
			case 4:
				func_107(2091, 1, -1);
				break;
			
			case 5:
				func_107(2092, 1, -1);
				break;
		}
		func_61(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_6401 * Local_55.f_16), 1, -1, 0, 0);
		Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_206);
	}
}

int func_61(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x1655
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_71(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_67(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_62(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_62(int iParam0, int iParam1, char* sParam2)//Position - 0x16CA
{
	struct<3> Var0;
	
	Var0 = { func_65(iParam0, 1) };
	if (iParam0 == func_64(PLAYER::PLAYER_PED_ID()))
	{
		func_63(1);
	}
	func_67(Var0, iParam1, 0, sParam2);
}

void func_63(int iParam0)//Position - 0x16FC
{
	Global_2422140.f_1307 = iParam0;
}

int func_64(var uParam0)//Position - 0x170D
{
	return uParam0;
}

Vector3 func_65(int iParam0, bool bParam1)//Position - 0x1717
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_66(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_66(var uParam0)//Position - 0x17B4
{
	return uParam0;
}

void func_67(struct<3> Param0, int iParam3, int iParam4, char* sParam5)//Position - 0x17BE
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422140.f_726[iVar0 /*29*/].f_6 == 0 || Global_2422140.f_726[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422140.f_726[iVar1 /*29*/] = { Param0 };
			Global_2422140.f_726[iVar1 /*29*/].f_6 = 1;
			Global_2422140.f_726[iVar1 /*29*/].f_4 = func_70(Global_2422140.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422140.f_726[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2422140.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422140.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422140.f_726[iVar1 /*29*/].f_9 = func_69();
			Global_2422140.f_726[iVar1 /*29*/].f_10 = func_68();
			StringCopy(&(Global_2422140.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_68()//Position - 0x18BE
{
	if (Global_2422140.f_1307)
	{
		Global_2422140.f_1307 = 0;
		return 1;
	}
	Global_2422140.f_1307 = 0;
	return 0;
}

var func_69()//Position - 0x18E8
{
	var uVar0;
	
	uVar0 = Global_2422140.f_1309;
	Global_2422140.f_1309 = 1;
	return uVar0;
}

float func_70(struct<3> Param0, var uParam3, var uParam4)//Position - 0x1903
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_71(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x199C
{
	var uVar0;
	
	uVar0 = func_72(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x19BF
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(PLAYER::PLAYER_ID()) || func_105(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_7278 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7278;
		}
	}
	else if (Global_262145.f_4972 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4972;
	}
	if (func_104(uParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_107(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				func_83((func_92(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_2 != -1)
				{
					func_107(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_77(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_73((func_75(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_73((func_75(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_73(int iParam0)//Position - 0x1B7A
{
	if (func_103())
	{
		Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_5 = iParam0;
		func_74(joaat("mpply_globalxp"), iParam0);
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x1BA5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_75(int iParam0)//Position - 0x1BC1
{
	if (iParam0 > -1)
	{
		if (func_177(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_76(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_5;
			}
		}
		else
		{
			return func_76(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x1C12
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_77(int iParam0)//Position - 0x1C30
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_82(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_80(func_81(&Var0));
			if (iVar13 == 0)
			{
				func_79(&Global_1335490, iParam0);
				func_78(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_79(&Global_1335491, iParam0);
				func_78(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_79(&Global_1335492, iParam0);
				func_78(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_79(&Global_1335493, iParam0);
				func_78(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_79(&Global_1335494, iParam0);
				func_78(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_78(int iParam0, int iParam1)//Position - 0x1D04
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_79(var uParam0, int iParam1)//Position - 0x1E29
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_80(int iParam0)//Position - 0x1E3A
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_81(var uParam0)//Position - 0x1E97
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2435171;
		}
	}
	return Global_2435171;
}

struct<13> func_82(int iParam0)//Position - 0x1EBA
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_83(int iParam0, int iParam1, int iParam2)//Position - 0x1ED1
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7253 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_18(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_91(PLAYER::PLAYER_ID()))
		{
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_1 = iParam0;
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_6 = func_89(iParam0, 1);
		}
		func_88(627, iParam0, -1, 1);
		func_87(628, func_89(iParam0, 1), -1, 1);
		Global_1335605[func_18(-1)] = iParam0;
		func_84(7, 0);
	}
}

void func_84(int iParam0, int iParam1)//Position - 0x1FF1
{
	int iVar0;
	
	if (func_86(iParam0, iParam1))
	{
		iVar0 = func_85();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_85()//Position - 0x2014
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_86(int iParam0, var uParam1)//Position - 0x2049
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20CF
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20FA
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_18(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_18(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_18(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_18(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_18(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_18(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_18(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_18(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_18(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_18(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_18(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_18(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_18(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_18(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_89(int iParam0, bool bParam1)//Position - 0x2374
{
	if (bParam1)
	{
	}
	return func_90(iParam0, 0);
}

int func_90(int iParam0, int iParam1)//Position - 0x2388
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_91(int iParam0)//Position - 0x2447
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
}

int func_92(int iParam0)//Position - 0x246C
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_18(-1)];
			}
			else if (func_91(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_18(-1)];
	}
	return 0;
}

void func_93(int iParam0)//Position - 0x24C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_96(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_95(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam0, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_94(*iParam0, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)//Position - 0x25B3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)//Position - 0x25D4
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_82(iParam0) };
		Global_2445595 = { func_82(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445582))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445595))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)//Position - 0x2641
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)//Position - 0x27F7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_177(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_177(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_98(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_94(*iParam1, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_94(*iParam1, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)//Position - 0x290F
{
	return SYSTEM::VDIST(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(var uParam0)//Position - 0x292B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_100(int iParam0)//Position - 0x293E
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)//Position - 0x2975
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_92(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_92(PLAYER::PLAYER_ID());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_92(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_92(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)//Position - 0x29D9
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_270489[iParam0];
}

int func_103()//Position - 0x2A01
{
	return 1;
}

int func_104(var uParam0)//Position - 0x2A0A
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)//Position - 0x2A42
{
	return Global_2414009[iParam0 /*254*/].f_114 == 2;
}

bool func_106(int iParam0)//Position - 0x2A56
{
	return Global_2414009[iParam0 /*254*/].f_114 == 7;
}

void func_107(int iParam0, int iParam1, int iParam2)//Position - 0x2A6A
{
	int iVar0;
	
	iVar0 = func_109(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_108(iParam0))
	{
		func_87(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

int func_108(int iParam0)//Position - 0x2AAB
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_109(int iParam0, var uParam1, int iParam2)//Position - 0x2B5F
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_18(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_110()//Position - 0x2B91
{
	if (func_9(&uLocal_208, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_55.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_55.f_16, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
		PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
	}
}

void func_111()//Position - 0x2BD3
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_2, Local_55.f_5, Local_55.f_5, 1000f, 0, 1, 0))
	{
		func_114();
		Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_2, Local_55.f_6, Local_55.f_6, 950f, 0, 1, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_204, 0) && MISC::IS_BIT_SET(iLocal_204, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_113())
			{
				func_112("DCP_LEAVE", -1);
				MISC::SET_BIT(&iLocal_204, 0);
			}
		}
	}
	else
	{
		if (!MISC::IS_BIT_SET(iLocal_204, 3))
		{
			MISC::SET_BIT(&iLocal_204, 3);
		}
		if (MISC::IS_BIT_SET(iLocal_204, 0))
		{
			MISC::CLEAR_BIT(&iLocal_204, 0);
		}
	}
}

void func_112(char* sParam0, int iParam1)//Position - 0x2C8F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_113()//Position - 0x2CA6
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

void func_114()//Position - 0x2CBB
{
	func_5(&uLocal_206);
	func_5(&uLocal_208);
	func_115();
	MISC::CLEAR_BIT(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	MISC::CLEAR_BIT(&iLocal_204, 3);
	MISC::SET_BIT(&(Global_2446554.f_4398), 0);
	if (!MISC::IS_BIT_SET(iLocal_204, 5))
	{
		MISC::SET_BIT(&iLocal_204, 5);
	}
}

void func_115()//Position - 0x2D07
{
	if (MISC::IS_BIT_SET(iLocal_204, 2))
	{
		func_116(1);
		MISC::CLEAR_BIT(&iLocal_204, 2);
	}
}

void func_116(bool bParam0)//Position - 0x2D25
{
	Global_2404548.f_37 = { Global_2406026 };
	if (bParam0)
	{
		func_123();
	}
	func_119(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_118(0);
	if (Global_2404548.f_405.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_117();
	}
}

void func_117()//Position - 0x2D85
{
	struct<4> Var0;
	
	Global_2404548.f_405 = { Var0 };
}

void func_118(bool bParam0)//Position - 0x2D9A
{
	if (bParam0)
	{
		Global_2404548.f_545 = 0;
	}
	else
	{
		Global_2404548.f_545 = 1;
	}
}

void func_119(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2DBA
{
	if (bParam0)
	{
		Global_2404548.f_1051 = iParam1;
		Global_2404548.f_1052 = iParam2;
		func_121();
		func_120(8, 0, 0);
		Global_2404548.f_546 = 1;
		Global_2404548.f_1055 = iParam3;
		Global_2404548.f_1056 = iParam4;
		Global_2404548.f_1053 = iParam5;
		Global_2404548.f_1054 = iParam6;
		Global_2404548.f_1057 = iParam7;
		Global_2404548.f_1058 = iParam8;
		Global_2404548.f_1059 = iParam9;
	}
	else
	{
		func_121();
		func_120(0, 0, 0);
		Global_2404548.f_546 = 0;
	}
}

void func_120(int iParam0, int iParam1, int iParam2)//Position - 0x2E42
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408497 = 0;
	}
	Global_2404548.f_405 = iParam0;
	Global_2404548.f_405.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2404548.f_405.f_2 = iParam1;
	Global_2404548.f_405.f_3 = iParam2;
}

void func_121()//Position - 0x2E8D
{
	func_122();
	Global_2404548.f_547 = 0;
}

void func_122()//Position - 0x2EA1
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404548.f_548[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_123()//Position - 0x2EDA
{
	Global_2404548.f_282 = { Global_2406271 };
}

void func_124()//Position - 0x2EF3
{
	if (!MISC::IS_BIT_SET(iLocal_204, 2))
	{
		func_142(Local_55.f_2, (Local_55.f_6 * 1.5f), 0, 0, 1, 0);
		func_126(Local_55.f_2, Local_55.f_6, 0, 1);
		func_125(Local_55.f_2, 1, 0);
		MISC::SET_BIT(&iLocal_204, 2);
	}
}

void func_125(struct<3> Param0, int iParam3, int iParam4)//Position - 0x2F41
{
	Global_2404548.f_37.f_25 = { Param0 };
	Global_2404548.f_37.f_28 = iParam3;
	Global_2404548.f_37.f_29 = iParam4;
}

void func_126(struct<3> Param0, var uParam3, int iParam4, int iParam5)//Position - 0x2F6B
{
	func_129(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
	func_127(0);
}

void func_127(bool bParam0)//Position - 0x2F8A
{
	if (bParam0)
	{
		func_128(0, 1);
	}
	else
	{
		func_128(Global_2404548.f_37.f_28, 0);
	}
}

void func_128(int iParam0, int iParam1)//Position - 0x2FAD
{
	struct<3> Var0;
	
	switch (Global_2404548.f_282[0 /*12*/].f_10)
	{
		case 0:
			func_125(Global_2404548.f_282[0 /*12*/], iParam0, iParam1);
			break;
		
		case 1:
		case 2:
			Var0 = { Global_2404548.f_282[0 /*12*/] + Global_2404548.f_282[0 /*12*/].f_3 * Vector(0.5f, 0.5f, 0.5f) };
			func_125(Var0, iParam0, iParam1);
			break;
	}
}

void func_129(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0x3024
{
	struct<12> Var0;
	
	if (func_138(PLAYER::PLAYER_ID(), 1) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_137(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_132(Var0))
		{
			Global_2404548.f_37.f_40 = func_131(PLAYER::PLAYER_ID());
			func_130(Var0, iParam8);
		}
	}
}

void func_130(struct<12> Param0, int iParam12)//Position - 0x309B
{
	Global_2404548.f_282[iParam12 /*12*/] = { Param0 };
	Global_2404548.f_282[iParam12 /*12*/].f_9 = 1;
	if (Global_2404548.f_282.f_121 <= iParam12)
	{
		Global_2404548.f_282.f_121 = iParam12 + 1;
	}
}

int func_131(int iParam0)//Position - 0x30DF
{
	if (func_177(iParam0, 0, 1))
	{
		return Global_2414009[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_132(struct<12> Param0)//Position - 0x3100
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		if (Global_2404548.f_37[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_133(Global_2404548.f_37[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_133(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3160
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_136(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_134(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_136(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_134(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_134(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x3299
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_135(Param0, Param3, Var0, Var3);
}

int func_135(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x32DD
{
	if (((((Param0.x >= Param6.x && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.x <= Param9.x) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x3334
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_137(var uParam0, var uParam1)//Position - 0x335F
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var3.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var3.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

bool func_138(int iParam0, bool bParam1)//Position - 0x33F6
{
	if (Global_1312449 != 0)
	{
		return func_131(iParam0) != 0;
	}
	return func_139(iParam0, bParam1);
}

int func_139(int iParam0, bool bParam1)//Position - 0x341C
{
	if (bParam1)
	{
		if (func_140(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)//Position - 0x3448
{
	return func_141(iParam0);
}

bool func_141(int iParam0)//Position - 0x3456
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

void func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3470
{
	func_143(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_143(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)//Position - 0x348E
{
	struct<12> Var0;
	
	if (func_138(PLAYER::PLAYER_ID(), 1) || uParam9)
	{
		if (Global_2404548.f_546)
		{
			func_145();
		}
		if (Var0.f_10 == 1)
		{
			func_137(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2404548.f_37.f_40 = func_131(PLAYER::PLAYER_ID());
		func_144(Var0, iParam8);
	}
}

void func_144(struct<12> Param0, int iParam12)//Position - 0x351E
{
	Global_2404548.f_37[iParam12 /*12*/] = { Param0 };
	Global_2404548.f_37[iParam12 /*12*/].f_9 = 1;
}

void func_145()//Position - 0x3545
{
	func_122();
	Global_2404548.f_546 = 0;
}

void func_146()//Position - 0x3559
{
	if (!MISC::IS_BIT_SET(iLocal_204, 6))
	{
		if (((((((func_147(60000) && func_149() == 1) && Local_55.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_177(PLAYER::PLAYER_ID(), 1, 1)) && !func_113()) && Local_55.f_16 != 5)
		{
			func_112("DCP_HELP1", -1);
			MISC::SET_BIT(&iLocal_204, 6);
		}
	}
}

bool func_147(int iParam0)//Position - 0x35D4
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2408508, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_148()//Position - 0x35EF
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_205))
	{
		uLocal_205 = HUD::ADD_BLIP_FOR_RADIUS(Local_55.f_2, Local_55.f_5);
		HUD::SET_BLIP_COLOUR(uLocal_205, 50);
		HUD::SET_BLIP_ALPHA(uLocal_205, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_205, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_205, "DCP_BLIPN");
	}
}

int func_149()//Position - 0x3631
{
	return Local_55;
}

int func_150(int iParam0)//Position - 0x363B
{
	return Local_75[iParam0 /*4*/];
}

bool func_151(int iParam0)//Position - 0x3649
{
	return !func_152(iParam0);
}

int func_152(int iParam0)//Position - 0x3658
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_4996)
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4997)
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4998)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4999)
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_153(int iParam0)//Position - 0x38F2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_177(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2414009[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_154(int iParam0, int iParam1)//Position - 0x3937
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_155()//Position - 0x394F
{
	bool bVar0;
	
	func_162(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (func_159(157))
	{
		if (!func_158())
		{
			return 1;
		}
	}
	if (func_159(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_156() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_156()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_156()//Position - 0x39E2
{
	switch (func_157())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_157()//Position - 0x3A16
{
	return Global_24444;
}

bool func_158()//Position - 0x3A21
{
	return Global_2428131.f_572;
}

int func_159(int iParam0)//Position - 0x3A30
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_160()//Position - 0x3A47
{
	return Global_2435238;
}

bool func_161()//Position - 0x3A53
{
	return Global_2428131.f_567;
}

void func_162(var uParam0)//Position - 0x3A62
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_163(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_163(int iParam0)//Position - 0x3AD2
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_177(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_164(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_164(int iParam0, var uParam1)//Position - 0x3B53
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165()//Position - 0x3BA1
{
	SYSTEM::WAIT(0);
}

void func_166()//Position - 0x3BAE
{
	if (HUD::DOES_BLIP_EXIST(uLocal_205))
	{
		HUD::REMOVE_BLIP(&uLocal_205);
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 1))
	{
		func_25(12, "DSC_FAIL", 0, 0, -99);
	}
	func_115();
	func_168(16, 0);
	MISC::SET_BIT(&(Global_2446554.f_4398), 0);
	func_167();
}

void func_167()//Position - 0x3BF9
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_168(int iParam0, bool bParam1)//Position - 0x3C05
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
		{
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
	}
}

void func_169(struct<20> Param0)//Position - 0x3C64
{
	func_175(func_176(Param0), Param0);
	func_173(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 20);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_75, 129);
	if (!func_172())
	{
		func_166();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_170();
		}
		func_168(16, 1);
		Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_166();
	}
}

void func_170()//Position - 0x3CCD
{
	Local_55.f_2 = { func_171() };
	Local_55.f_5 = 200f;
	Local_55.f_6 = 180f;
}

Vector3 func_171()//Position - 0x3CF1
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_172()//Position - 0x3DF8
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_159(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2)//Position - 0x3E51
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_167();
			}
			else
			{
				return 0;
			}
		}
		if (!func_174())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_167();
					}
					else
					{
						return 0;
					}
				}
				if (func_161())
				{
					if (!bParam2)
					{
						func_167();
					}
					else
					{
						return 0;
					}
				}
				if (func_159(155))
				{
					if (!bParam2)
					{
						func_167();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_167();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_167();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_167();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_174()//Position - 0x3F66
{
	return Global_1315874;
}

void func_175(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x3F72
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_167();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_176(int iParam0)//Position - 0x3F91
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

int func_177(int iParam0, bool bParam1, bool bParam2)//Position - 0x42B2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

