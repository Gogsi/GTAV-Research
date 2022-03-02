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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_169(ScriptParam_0);
	}
	else
	{
		func_166();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7680() || GlobalFunc_7810(16))
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
				GlobalFunc_5240(&(Local_55.f_18));
				if (GlobalFunc_914(&(Local_55.f_18)))
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
			else if (GlobalFunc_5071(&(Local_55.f_8), 480000, 0))
			{
				Var0.f_2 = 114;
				GlobalFunc_1290(Var0, GlobalFunc_5335(1));
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
	if (!GlobalFunc_5071(&(Local_55.f_10), Local_55.f_12, 0))
	{
		if (GlobalFunc_5071(&(Local_55.f_13), Local_55.f_15, 0))
		{
			Local_55.f_17++;
			Local_55.f_16 = func_6();
			GlobalFunc_434(&(Local_55.f_13));
		}
	}
	else
	{
		Local_55.f_7 = 2;
	}
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





void func_11()//Position - 0x42F
{
	int iVar0;
	
	if (Local_55 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_210)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_210));
			if (GlobalFunc_252(iVar0, 1, 1))
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
			GlobalFunc_6917(iVar0, 1, 1, 0);
			if (GlobalFunc_218())
			{
				GlobalFunc_8416(-2043695058, iVar0, &uVar5, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
			}
			if (GlobalFunc_745())
			{
				GlobalFunc_8434(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				GlobalFunc_8434(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(47, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432);
			if (MISC::IS_BIT_SET(iLocal_204, 4))
			{
				if (!MISC::IS_BIT_SET(iLocal_204, 5))
				{
					GlobalFunc_7764(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&iLocal_204, 1);
	}
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
	return GlobalFunc_5301(&Var0);
}



void func_23(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x945
{
	uParam1->f_16 = GlobalFunc_314();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_17), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = uParam2;
	uParam1->f_47 = 1;
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
		else if (!GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&iLocal_204, 5);
		}
	}
}

void func_53()//Position - 0x136A
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		GlobalFunc_1470();
	}
	else
	{
		func_58();
	}
	if ((Local_55.f_12 - GlobalFunc_1328(&(Local_55.f_10), 0, 0)) >= 0)
	{
		GlobalFunc_5277((Local_55.f_12 - GlobalFunc_1328(&(Local_55.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5277(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
}





void func_58()//Position - 0x158C
{
	Global_1328872.f_765 = 1;
}


void func_60()//Position - 0x15AC
{
	if (GlobalFunc_5071(&uLocal_206, 30000, 0))
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
		GlobalFunc_434(&uLocal_206);
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
				GlobalFunc_5372(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		GlobalFunc_6918(iParam1, iVar0, sParam8);
	}
	return iVar0;
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
	
	if (GlobalFunc_361(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID()))
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
	if (GlobalFunc_955(uParam2))
	{
	}
	if (GlobalFunc_82())
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
			iVar1 = GlobalFunc_5251(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					GlobalFunc_6919(0, &iVar1);
					break;
				
				case 3:
					GlobalFunc_6919(1, &iVar1);
					break;
				
				case 1:
					GlobalFunc_6847(&iVar1);
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
				GlobalFunc_7742((GlobalFunc_6849(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
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
					GlobalFunc_5383(iVar1);
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
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}





























int func_101(int iParam0)//Position - 0x2975
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > GlobalFunc_6849(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_92(PLAYER::PLAYER_ID());
		}
	}
	if (GlobalFunc_948(8000, 0, 0) > 0)
	{
		if (GlobalFunc_948(8000, 0, 0) < (iParam0 + GlobalFunc_6849(PLAYER::PLAYER_ID())))
		{
			iParam0 = (GlobalFunc_948(8000, 0, 0) - GlobalFunc_6849(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}






void func_107(int iParam0, int iParam1, int iParam2)//Position - 0x2A6A
{
	int iVar0;
	
	iVar0 = func_109(iParam0, GlobalFunc_4990(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6720(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		GlobalFunc_6719(iParam0, iVar0, iParam2, 1);
	}
}


int func_109(int iParam0, var uParam1, int iParam2)//Position - 0x2B5F
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][GlobalFunc_4990(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_110()//Position - 0x2B91
{
	if (GlobalFunc_5071(&uLocal_208, 10000, 0))
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
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_160())
			{
				GlobalFunc_159("DCP_LEAVE", -1);
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



void func_114()//Position - 0x2CBB
{
	GlobalFunc_434(&uLocal_206);
	GlobalFunc_434(&uLocal_208);
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
		GlobalFunc_7803(1);
		MISC::CLEAR_BIT(&iLocal_204, 2);
	}
}









void func_124()//Position - 0x2EF3
{
	if (!MISC::IS_BIT_SET(iLocal_204, 2))
	{
		func_142(Local_55.f_2, (Local_55.f_6 * 1.5f), 0, 0, 1, 0);
		func_126(Local_55.f_2, Local_55.f_6, 0, 1);
		GlobalFunc_1414(Local_55.f_2, 1, 0);
		MISC::SET_BIT(&iLocal_204, 2);
	}
}


void func_126(struct<3> Param0, var uParam3, int iParam4, int iParam5)//Position - 0x2F6B
{
	GlobalFunc_8428(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
	GlobalFunc_6907(0);
}
















void func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3470
{
	func_143(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_143(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)//Position - 0x348E
{
	struct<12> Var0;
	
	if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1) || uParam9)
	{
		if (Global_2404548.f_546)
		{
			GlobalFunc_5067();
		}
		if (Var0.f_10 == 1)
		{
			GlobalFunc_1418(&Param0, &Param3);
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
		Global_2404548.f_37.f_40 = GlobalFunc_4994(PLAYER::PLAYER_ID());
		GlobalFunc_1419(Var0, iParam8);
	}
}



void func_146()//Position - 0x3559
{
	if (!MISC::IS_BIT_SET(iLocal_204, 6))
	{
		if (((((((GlobalFunc_1437(60000) && func_149() == 1) && Local_55.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1)) && !GlobalFunc_160()) && Local_55.f_16 != 5)
		{
			GlobalFunc_159("DCP_HELP1", -1);
			MISC::SET_BIT(&iLocal_204, 6);
		}
	}
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
















void func_166()//Position - 0x3BAE
{
	if (HUD::DOES_BLIP_EXIST(uLocal_205))
	{
		HUD::REMOVE_BLIP(&uLocal_205);
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 1))
	{
		GlobalFunc_8434(12, "DSC_FAIL", 0, 0, -99);
	}
	func_115();
	GlobalFunc_461(16, 0);
	MISC::SET_BIT(&(Global_2446554.f_4398), 0);
	GlobalFunc_491();
}



void func_169(struct<20> Param0)//Position - 0x3C64
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 20);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_75, 129);
	if (!GlobalFunc_5091())
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
		GlobalFunc_461(16, 1);
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







