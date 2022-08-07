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
	struct<3> Local_21 = { 0, 0, 0 } ;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			if (Global_68507 != -1)
			{
				Global_68508 = Global_68507;
				Global_2621440 = Global_68507;
				func_937(Global_68507);
			}
			func_934();
		}
		func_932();
	}
	iLocal_56 = 0;
	Global_68514.f_1 = 0;
	Global_68514.f_2 = 1;
	while (true)
	{
		if (Global_68514.f_2)
		{
			iVar0 = 0;
			while (Global_68514.f_2 && iVar0 < 32)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
				{
					Global_68514.f_2 = 0;
				}
				else
				{
					iVar0++;
				}
				SYSTEM::WAIT(250);
			}
		}
		else
		{
			if (!Global_SAVE_DATA.FLOW_STRUCT.flowCompleted)
			{
				if (Global_SAVE_DATA.isGameflowActive)
				{
					if (!Global_68514)
					{
						if (!MISC::IS_AUTO_SAVE_IN_PROGRESS())
						{
							func_1();
						}
					}
				}
			}
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (Global_2540555 == -1)
				{
					iVar1 = 0;
					while (iVar1 < 63)
					{
						if (Global_96440[iVar1 /*10*/].f_4)
						{
							Global_2540555 = iVar1;
						}
						iVar1++;
					}
				}
				else if (!Global_96440[Global_2540555 /*10*/].f_4)
				{
					Global_2540555 = -1;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_1()//Position - 0x18D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	func_901();
	iVar1 = 0;
	if (Global_68514.f_9 != -1)
	{
		iVar2 = 1;
		iLocal_55 = 0;
		iLocal_54 = Global_68514.f_9;
	}
	else if (Global_68514.f_7)
	{
		iLocal_54 = 0;
		iLocal_55 = 0;
		iVar2 = 32;
		Global_68514.f_7 = 0;
	}
	else
	{
		iVar2 = 2;
	}
	while (iVar1 < iVar2)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iLocal_54 /*3*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iLocal_54 /*3*/], 1))
			{
				iVar0 = iLocal_54;
				func_2(iVar0, 0);
				if (Global_68514.f_6)
				{
					func_2(iVar0, 1);
					Global_68514.f_6 = 0;
				}
				iVar1++;
			}
		}
		else
		{
			iLocal_55++;
			if (iLocal_55 == 32)
			{
				Global_SAVE_DATA.FLOW_STRUCT.flowCompleted = 1;
				Global_68514.f_1 = 0;
				return;
			}
		}
		iLocal_54++;
		if (iLocal_54 == 32)
		{
			if (!iLocal_56)
			{
				Global_68514.f_1 = 0;
			}
			iLocal_55++;
			iLocal_56 = 0;
			iLocal_55 = 0;
			iLocal_54 = 0;
		}
	}
}

void func_2(int iParam0, bool bParam1)//Position - 0x284
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	iVar1 = iVar0;
	iVar2 = Global_68514.f_12526[iParam0 /*2*/];
	iVar3 = Global_68514.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		iLocal_55++;
		return;
	}
	func_3(iParam0, iVar0);
	iVar0 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	if (Global_68514.f_6825[iVar0 /*3*/] == 531432813)
	{
		func_3(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1)
		{
			iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
			func_3(iParam0, Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
		}
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x37E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_68514.f_6825[iParam1 /*3*/];
	iVar2 = Global_68514.f_6825[iParam1 /*3*/].f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		
		case 1677774865:
			iVar0 = func_900(iVar2);
			break;
		
		case -1750917831:
			iVar0 = -2;
			break;
		
		case 2058194871:
			iVar0 = func_899(iVar2);
			break;
		
		case 1909997983:
			MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/]), 2);
			iVar0 = -1;
			break;
		
		case -1878191811:
			iVar0 = func_898(iVar2);
			break;
		
		case -217347738:
			iVar0 = func_897(iVar2);
			break;
		
		case 531432813:
			iVar0 = -2;
			break;
		
		case 1144707570:
			iVar0 = func_896(iVar2);
			break;
		
		case 1984622930:
			iVar0 = func_895(iVar2);
			break;
		
		case -661286798:
			iVar0 = func_894(iVar2);
			break;
		
		case -1532130030:
			iVar0 = func_893(iVar2);
			break;
		
		case 1174602905:
			iVar0 = func_892(iVar2);
			break;
		
		case 1111033820:
			iVar0 = func_891(iVar2);
			break;
		
		case 1986927063:
			iVar0 = func_890(iVar2);
			break;
		
		case -1982716178:
			iVar0 = func_889(iVar2);
			break;
		
		case -964850613:
			iVar0 = func_888(iVar2);
			break;
		
		case -1913176419:
			iVar0 = func_887(iVar2);
			break;
		
		case 1210875743:
			iVar0 = func_886(iParam0, iVar2);
			break;
		
		case 427205337:
			iVar0 = func_885(iParam0, iVar2);
			break;
		
		case 712880499:
			iVar0 = func_884(iParam0, iVar2);
			break;
		
		case -1664179412:
			iVar0 = func_880(iParam0, iVar2);
			break;
		
		case 770100737:
			iVar0 = func_879(iVar2);
			break;
		
		case 939785963:
			iVar0 = func_876(iVar2);
			break;
		
		case -284134628:
			iVar0 = func_875(iVar2);
			break;
		
		case -2146402779:
			iVar0 = func_874(iVar2);
			break;
		
		case 2110689209:
			iVar0 = func_869(iVar2);
			break;
		
		case joaat("flow_do_mission_at_blip"):
			iVar0 = func_858(iParam0, iVar2);
			break;
		
		case joaat("flow_do_mission_now"):
			iVar0 = func_855(iVar2, iParam0);
			break;
		
		case 566451265:
			iVar0 = func_854(iVar2);
			break;
		
		case -115271859:
			iVar0 = func_853(iVar2);
			break;
		
		case 2021594245:
			iVar0 = func_852(iVar2);
			break;
		
		case -806419157:
			iVar0 = func_851(iVar2);
			break;
		
		case -1110793538:
			iVar0 = func_845(iVar2);
			break;
		
		case 2088328892:
			iVar0 = func_837(iVar2);
			break;
		
		case -1535636242:
			iVar0 = func_836(iVar2);
			break;
		
		default:
			if (!func_5(iVar1, iVar2, iParam0, &iVar0))
			{
				iVar0 = -2;
			}
			break;
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		if (iVar0 != -1)
		{
			Global_68514.f_1 = 1;
			iLocal_56 = 1;
		}
		func_4(iParam0, iVar0);
	}
}

void func_4(int iParam0, int iParam1)//Position - 0x666
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case -1:
		case 32:
			return;
		
		default:
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1++;
		return;
	}
	iVar0 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	iVar1 = Global_68514.f_12526[iParam0 /*2*/];
	iVar2 = Global_68514.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (Global_68514.f_6825[iVar3 /*3*/] == 531432813)
		{
			iVar4 = Global_68514.f_6825[iVar3 /*3*/].f_2;
			iVar5 = Global_68514.f_109[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x78A
{
	switch (iParam0)
	{
		case 744218195:
			*iParam3 = func_832(iParam1);
			break;
		
		case 749713072:
			*iParam3 = func_831(iParam1);
			break;
		
		case 139009950:
			*iParam3 = func_823(iParam1);
			break;
		
		case 1389104680:
			*iParam3 = func_822(iParam1);
			break;
		
		case 1641341968:
			*iParam3 = func_819(iParam1);
			break;
		
		case -1575504933:
			*iParam3 = func_818(iParam1);
			break;
		
		case 1370985682:
			*iParam3 = func_816(iParam1);
			break;
		
		case -1034402456:
			*iParam3 = func_814(iParam1);
			break;
		
		case 246500489:
			*iParam3 = func_812(iParam1);
			break;
		
		case 1289835772:
			*iParam3 = func_810(iParam1);
			break;
		
		case -1453576086:
			*iParam3 = func_808(iParam1);
			break;
		
		case 842516771:
			*iParam3 = func_806(iParam1);
			break;
		
		case -546916353:
			*iParam3 = func_798(iParam1);
			break;
		
		case joaat("flow_text_player"):
			*iParam3 = func_795(iParam1);
			break;
		
		case -656046692:
			*iParam3 = func_784(iParam1);
			break;
		
		case -885022960:
			*iParam3 = func_783(iParam1);
			break;
		
		case 798013335:
			*iParam3 = func_773(iParam1);
			break;
		
		case -1030591046:
			*iParam3 = func_771(iParam1);
			break;
		
		case 569565703:
			*iParam3 = func_762(iParam1);
			break;
		
		case -635831521:
			*iParam3 = func_755(iParam1);
			break;
		
		case -1785731347:
			*iParam3 = func_754(iParam1);
			break;
		
		case -1421664484:
			*iParam3 = func_753(iParam1);
			break;
		
		case -644339536:
			*iParam3 = func_752(iParam1);
			break;
		
		case -159886710:
			*iParam3 = func_750();
			break;
		
		case 1822409727:
			*iParam3 = func_749(iParam1);
			break;
		
		case -436729813:
			*iParam3 = func_748(iParam1);
			break;
		
		case 213552929:
			*iParam3 = func_747(iParam1);
			break;
		
		case 215526917:
			*iParam3 = func_746(iParam1);
			break;
		
		case -1597354430:
			*iParam3 = func_744(iParam1);
			break;
		
		case -49496173:
			*iParam3 = func_692(iParam1);
			break;
		
		case -1334818538:
			*iParam3 = func_671(iParam1);
			break;
		
		case -69665631:
			*iParam3 = func_667(iParam1);
			break;
		
		case -251919538:
			*iParam3 = func_659(iParam1);
			break;
		
		case -319289499:
			*iParam3 = func_658(iParam1);
			break;
		
		case 424223666:
			*iParam3 = func_657(iParam1);
			break;
		
		case 952363713:
			*iParam3 = func_656(iParam1);
			break;
		
		case 1572323470:
			*iParam3 = func_655(iParam1);
			break;
		
		case 828625388:
			*iParam3 = func_652(iParam1);
			break;
		
		case 1542529269:
			*iParam3 = func_651(iParam1);
			break;
		
		case -1283556585:
			*iParam3 = func_627(iParam1);
			break;
		
		case 553813353:
			*iParam3 = func_618(iParam1);
			break;
		
		case joaat("flow_do_mission_at_switch"):
			*iParam3 = func_227(iParam2, iParam1);
			break;
		
		case -2093560018:
			*iParam3 = func_225(iParam1);
			break;
		
		case -26112892:
			*iParam3 = func_207(iParam1);
			break;
		
		case 2014563601:
			Global_68514.f_6 = 1;
			*iParam3 = -2;
			break;
		
		case -1309218325:
			*iParam3 = func_164(iParam1);
			break;
		
		case -1730578455:
			*iParam3 = func_112(iParam1);
			break;
		
		case 1845155857:
			*iParam3 = func_29(iParam1);
			break;
		
		case 1883604486:
			*iParam3 = func_20(iParam1);
			break;
		
		case 2048332261:
			*iParam3 = func_8(iParam1, iParam2);
			break;
		
		case 918415331:
			*iParam3 = func_6(iParam2);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_6(int iParam0)//Position - 0xB3D
{
	func_7(iParam0);
	return -2;
}

void func_7(int iParam0)//Position - 0xB4E
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides)
		{
			if (Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] == iParam0)
			{
				if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides > 1)
				{
					iVar1 = iVar0;
					while (iVar1 <= (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 2))
					{
						Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar1] = Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar1 + 1];
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[iVar1] = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[iVar1 + 1];
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[iVar1] = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[iVar1 + 1];
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar1] = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar1 + 1];
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar1] = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar1 + 1];
						iVar1++;
					}
				}
				if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides > 0)
				{
					Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1)] = -1;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1)] = -1;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1)] = 0;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1)] = 0;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1)] = -1;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides = (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides - 1);
				}
				iVar0 = (iVar0 - 1);
			}
			iVar0++;
		}
	}
}

int func_8(int iParam0, int iParam1)//Position - 0xCD3
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = 0;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	func_9(iParam1, uVar0, iVar1);
	return -2;
}

void func_9(int iParam0, var uParam1, int iParam2)//Position - 0xD18
{
	int iVar0;
	
	if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides < 3)
	{
		if (iParam0 != -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides)
			{
				if (Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] == iParam0)
				{
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[iVar0] = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[iVar0] = GlobalFunc_7086(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0] = uParam1;
					Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar0] = iParam2;
					return;
				}
				iVar0++;
			}
			Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides] = iParam0;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides] = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides] = GlobalFunc_7086(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides] = uParam1;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides] = iParam2;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides++;
		}
	}
}











int func_20(int iParam0)//Position - 0x14BD
{
	int iVar0;
	
	if (Global_68505)
	{
		return -1;
	}
	iVar0 = iParam0;
	if (GlobalFunc_8633(iVar0))
	{
		return -2;
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = iVar0;
	GlobalFunc_9275(iVar0, 1);
	return -2;
}









int func_29(int iParam0)//Position - 0x1723
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (!GlobalFunc_42(iVar0))
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	GlobalFunc_10922(GlobalFunc_4917(iVar0), iVar2, iVar1, 1);
	GlobalFunc_11042(GlobalFunc_4917(iVar0), iVar2, iVar1, 1, 1);
	return -2;
}



















































































int func_112(int iParam0)//Position - 0x19924
{
	int iVar0;
	int iVar1;
	struct<36> Var2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		Var2.f_9 = 25;
		Var2.f_35 = 2;
		func_113(iVar0, iVar1, &Var2, -1);
	}
	return -2;
}

void func_113(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x19980
{
	int iVar0;
	
	if (iParam3 > -1)
	{
		GlobalFunc_7610(293, 0, 0);
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.OWVEC_IND[iParam0]), iVar0);
	if (iParam1 == 0)
	{
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M[iParam0] = Global_67135;
	}
	else if (iParam1 == 1)
	{
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F[iParam0] = Global_67135;
	}
	else
	{
		iParam1 = 2;
		Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T[iParam0] = Global_67135;
	}
	func_154(iParam0);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
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
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 128:
		case 89:
		case 103:
		case 122:
		case 123:
		case 124:
		case 132:
		case 133:
		case 134:
		case 135:
		case 125:
		case 138:
		case 139:
		case 105:
		case 155:
		case 106:
		case 108:
		case 127:
		case 93:
		case 99:
		case 143:
		case 145:
		case 100:
		case 147:
		case 101:
		case 149:
		case 146:
		case 144:
		case 167:
		case 168:
		case 169:
		case 170:
		case 161:
		case 202:
		case 204:
		case 205:
		case 203:
		case 206:
		case 207:
		case 208:
		case 209:
		case 148:
		case 97:
		case 98:
		case 112:
		case 115:
		case 165:
		case 166:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 218:
		case 219:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 10, 0);
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 199:
		case 113:
		case 162:
		case 163:
		case 215:
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, 12, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, 13, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, 14, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 20:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 30, 0);
		
		case 15:
		case 16:
		case 19:
		case 164:
		case 217:
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, 18, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, 19, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, 20, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 17:
			STATS::_UPDATE_STAT_INT(joaat("sp0_crouched"), 20, 0);
		
		case 18:
		case 22:
		case 21:
		case 200:
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, 12, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, 13, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, 14, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 201:
		case 102:
		case 173:
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, 15, iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, 16, iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, 17, iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			switch (iParam1)
			{
				case 0:
					func_115(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
					break;
				
				case 1:
					func_115(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
					break;
				
				case 2:
					func_115(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
					break;
			}
			break;
		
		default:
			switch (GlobalFunc_2044(iParam0))
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							func_115(iParam1, GlobalFunc_7915(21), iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_115(iParam1, GlobalFunc_7915(22), iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_115(iParam1, GlobalFunc_7915(23), iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							func_115(iParam1, 12, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_115(iParam1, 13, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_115(iParam1, 14, iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							func_115(iParam1, 15, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_115(iParam1, 16, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_115(iParam1, 17, iParam3, iParam0, uParam2);
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 0:
							func_115(iParam1, 18, iParam3, iParam0, uParam2);
							break;
						
						case 1:
							func_115(iParam1, 19, iParam3, iParam0, uParam2);
							break;
						
						case 2:
							func_115(iParam1, 20, iParam3, iParam0, uParam2);
							break;
					}
					break;
			}
			break;
	}
}


void func_115(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x1A1CC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GlobalFunc_42(iParam0))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/][iParam3] = iParam2;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/].f_313[iParam3] = iParam1;
		if (iParam2 == -1)
		{
			bVar0 = true;
			if (GlobalFunc_5599(iParam1))
			{
				if (GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam1) && Global_67138.f_555[0 /*21*/].f_4 != 0)
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				GlobalFunc_14(uParam4);
				GlobalFunc_7025(iParam3, uParam4, 0, iParam0);
				MISC::SET_BIT(&(uParam4->f_53), 14);
				GlobalFunc_8387(iParam1, *uParam4, 0f, 0f, 0f, -1f, 145);
			}
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			iVar3 = func_132();
			if (((((((((((iParam1 == 21 || iParam1 == 22) || iParam1 == 23) || iParam1 == 26) || iParam1 == 29) || iParam1 == 32) || iParam1 == 27) || iParam1 == 30) || iParam1 == 33) || iParam1 == 28) || iParam1 == 31) || iParam1 == 34)
			{
				GlobalFunc_14(uParam4);
				GlobalFunc_7025(iParam3, uParam4, 0, iParam0);
				MISC::SET_BIT(&(uParam4->f_53), 14);
				GlobalFunc_8387(iParam1, *uParam4, 0f, 0f, 0f, -1f, 145);
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.OWVEC_IND[iParam3]), iParam0);
			}
			else
			{
				func_116(&iVar3, iVar1, iVar2, 5, 0, 0, 0);
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iParam0 /*939*/].f_626[iParam3] = iVar3;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A37B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GlobalFunc_4975(*iParam0);
	iVar1 = GlobalFunc_210(*iParam0);
	iVar2 = GlobalFunc_209(*iParam0);
	iVar3 = GlobalFunc_208(*iParam0);
	iVar4 = GlobalFunc_207(*iParam0);
	iVar5 = GlobalFunc_206(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = GlobalFunc_91(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = GlobalFunc_91(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_117(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_117(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A4FD
{
	GlobalFunc_3032(uParam0, iParam1);
	GlobalFunc_3031(uParam0, iParam2);
	GlobalFunc_3030(uParam0, iParam3);
	GlobalFunc_6711(uParam0, iParam4);
	GlobalFunc_90(uParam0, iParam5);
	GlobalFunc_89(uParam0, iParam6);
}















int func_132()//Position - 0x1A826
{
	var uVar0;
	
	GlobalFunc_3032(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	GlobalFunc_3031(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	GlobalFunc_3030(&uVar0, CLOCK::GET_CLOCK_HOURS());
	GlobalFunc_6711(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	GlobalFunc_90(&uVar0, CLOCK::GET_CLOCK_MONTH());
	GlobalFunc_89(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}






















void func_154(int iParam0)//Position - 0x1EAA6
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_1365(iParam0);
	iVar1 = GlobalFunc_2045(iVar0);
	switch (iVar1)
	{
		case 0:
			GlobalFunc_184(19, 1);
			return;
		
		case 7:
			GlobalFunc_184(17, 1);
			return;
		
		case 1:
			GlobalFunc_184(15, 1);
			return;
		
		case 2:
			GlobalFunc_184(13, 1);
			return;
		
		case 3:
			GlobalFunc_184(18, 1);
			return;
		
		case 4:
			GlobalFunc_184(12, 1);
			return;
		
		case 5:
			GlobalFunc_184(14, 1);
			return;
		
		case 6:
			GlobalFunc_184(16, 1);
			return;
		
		default:
	}
}










int func_164(int iParam0)//Position - 0x1F5CA
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	func_165(iVar0, &uVar3);
	Call_Loc(uVar3);
	if (StackVal)
	{
		return uVar1;
	}
	return uVar2;
}

void func_165(int iParam0, var uParam1)//Position - 0x1F61B
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 131695/*func_206*/;
			break;
		
		case 1:
			*uParam1 = 131493/*func_204*/;
			break;
		
		case 2:
			*uParam1 = 131444/*func_203*/;
			break;
		
		case 3:
			*uParam1 = 131410/*func_202*/;
			break;
		
		case 4:
			*uParam1 = 131262/*func_200*/;
			break;
		
		case 5:
			*uParam1 = 131239/*func_199*/;
			break;
		
		case 6:
			*uParam1 = 131215/*func_198*/;
			break;
		
		case 7:
			*uParam1 = 130975/*func_197*/;
			break;
		
		case 8:
			*uParam1 = 130867/*func_196*/;
			break;
		
		case 9:
			*uParam1 = 130843/*func_195*/;
			break;
		
		case 10:
			*uParam1 = 130820/*func_194*/;
			break;
		
		case 11:
			*uParam1 = 130796/*func_193*/;
			break;
		
		case 12:
			*uParam1 = 130654/*func_191*/;
			break;
		
		case 13:
			*uParam1 = 130631/*func_190*/;
			break;
		
		case 14:
			*uParam1 = 130607/*func_189*/;
			break;
		
		case 16:
			*uParam1 = 130575/*func_188*/;
			break;
		
		case 17:
			*uParam1 = 130553/*func_187*/;
			break;
		
		case 18:
			*uParam1 = 130387/*func_185*/;
			break;
		
		case 19:
			*uParam1 = 130329/*func_183*/;
			break;
		
		case 20:
			*uParam1 = 130305/*func_182*/;
			break;
		
		case 21:
			*uParam1 = 130247/*func_181*/;
			break;
		
		case 22:
			*uParam1 = 130187/*func_180*/;
			break;
		
		case 23:
			*uParam1 = 129256/*func_172*/;
			break;
		
		case 24:
			*uParam1 = 129229/*func_171*/;
			break;
		
		case 25:
			*uParam1 = 129202/*func_170*/;
			break;
		
		case 26:
			*uParam1 = 129175/*func_169*/;
			break;
		
		case 27:
			*uParam1 = 129126/*func_168*/;
			break;
		
		case 28:
			*uParam1 = 129077/*func_167*/;
			break;
		
		case 29:
			*uParam1 = 129028/*func_166*/;
			break;
		
		default:
			*uParam1 = 131695/*func_206*/;
			break;
	}
}

int func_166()//Position - 0x1F804
{
	int iVar0;
	
	iVar0 = (5 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_167()//Position - 0x1F835
{
	int iVar0;
	
	iVar0 = (4 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_168()//Position - 0x1F866
{
	int iVar0;
	
	iVar0 = (3 - 3);
	if (iVar0 >= 0 && iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_169()//Position - 0x1F897
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[2]))
	{
		return 0;
	}
	return 1;
}

int func_170()//Position - 0x1F8B2
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[1]))
	{
		return 0;
	}
	return 1;
}

int func_171()//Position - 0x1F8CD
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[0]))
	{
		return 0;
	}
	return 1;
}

int func_172()//Position - 0x1F8E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395))
	{
		return 0;
	}
	iVar0 = (4 - 3);
	if (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar0]))
		{
			return 0;
		}
	}
	iVar1 = 14;
	iVar2 = 5;
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	if (iVar1 < iVar2)
	{
		if (iVar3 < iVar1 || iVar3 >= iVar2)
		{
			return 0;
		}
	}
	else if (iVar3 < iVar1 && iVar3 >= iVar2)
	{
		return 0;
	}
	iVar4 = GlobalFunc_768(GlobalFunc_769(GlobalFunc_8315()), 4);
	if (iVar4 >= 9)
	{
		return 0;
	}
	else
	{
		if (Global_86223[iVar4 /*2*/] != 0)
		{
			return 0;
		}
		if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar4 /*19*/].f_2 != 0)
		{
			return 0;
		}
		if (GlobalFunc_226(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar4 /*19*/].f_5)) && GlobalFunc_5182(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar4 /*19*/].f_5)) < (5f * 60f))
		{
			return 0;
		}
	}
	return 1;
}








int func_180()//Position - 0x1FC8B
{
	int iVar0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395))
	{
		return 0;
	}
	iVar0 = (3 - 3);
	if (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar0]))
		{
			return 0;
		}
	}
	return 1;
}

int func_181()//Position - 0x1FCC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/] == 2033185762)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_182()//Position - 0x1FD01
{
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[26 /*6*/], 3);
}

int func_183()//Position - 0x1FD19
{
	return GlobalFunc_230(15);
}


int func_185()//Position - 0x1FD53
{
	float fVar0;
	
	if (Global_85369 == -1)
	{
		Global_85369 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - Global_85369) > 240000)
	{
		Global_85369 = -1;
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_2247(211, 0));
		if (fVar0 > 22500f)
		{
			Global_85369 = -1;
			return 1;
		}
	}
	return 0;
}


var func_187()//Position - 0x1FDF9
{
	return Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[71 /*6*/];
}

int func_188()//Position - 0x1FE0F
{
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[8] == 4)
	{
		return 1;
	}
	return 0;
}

bool func_189()//Position - 0x1FE2F
{
	return !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[77];
}

var func_190()//Position - 0x1FE47
{
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[77];
}

int func_191()//Position - 0x1FE5E
{
	if (GlobalFunc_230(88))
	{
		return 1;
	}
	else if (GlobalFunc_891(88))
	{
		return 1;
	}
	return 0;
}


bool func_193()//Position - 0x1FEEC
{
	return !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[12];
}

var func_194()//Position - 0x1FF04
{
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[12];
}

bool func_195()//Position - 0x1FF1B
{
	return !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34];
}

int func_196()//Position - 0x1FF33
{
	if (!GlobalFunc_230(40))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(GlobalFunc_2247(180, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 40000f)
		{
			return 1;
		}
	}
	if (Global_85369 == -1)
	{
		Global_85369 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - Global_85369) > 30000)
	{
		Global_85369 = -1;
		return 1;
	}
	return 0;
}

int func_197()//Position - 0x1FF9F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < Global_86396[iVar0 /*19*/])
		{
			bVar2 = false;
			switch (iVar0)
			{
				case 1:
				case 2:
					bVar2 = GlobalFunc_230(90);
					break;
				
				case 3:
					bVar2 = GlobalFunc_230(74);
					break;
				
				case 4:
					bVar2 = GlobalFunc_230(75);
					break;
				
				case 5:
					bVar2 = GlobalFunc_230(93);
					break;
				
				case 6:
					bVar2 = GlobalFunc_230(69);
					break;
				
				case 7:
					bVar2 = GlobalFunc_230(70);
					break;
				
				case 8:
					bVar2 = GlobalFunc_230(84);
					break;
				
				case 9:
					bVar2 = GlobalFunc_230(85);
					break;
			}
			if (bVar2 && Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar1] == 12)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

bool func_198()//Position - 0x2008F
{
	return !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[45];
}

var func_199()//Position - 0x200A7
{
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[45];
}

int func_200()//Position - 0x200BE
{
	if (func_201(0))
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0)//Position - 0x200D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= 147)
	{
		return 0;
	}
	iVar0 = GlobalFunc_769(iParam0);
	if (iVar0 != 7)
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar1 /*19*/] == iVar0 || Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar1 /*19*/].f_1 == iVar0)
			{
				iVar2 = Global_86223[iVar1 /*2*/];
				if (iVar2 == 3 || iVar2 == 4)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_202()//Position - 0x20152
{
	if (func_201(0))
	{
		return 0;
	}
	if (GlobalFunc_891(49))
	{
		return 0;
	}
	return 1;
}

int func_203()//Position - 0x20174
{
	int iVar0;
	
	if (func_201(0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 6 || iVar0 > 14)
	{
		return 0;
	}
	return 1;
}

int func_204()//Position - 0x201A5
{
	if (Global_85369 == -1)
	{
		Global_85369 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_2345(PLAYER::PLAYER_PED_ID(), 11, 0))
		{
			Global_85369 = -1;
			return 1;
		}
		if ((MISC::GET_GAME_TIMER() - Global_85369) > 240000)
		{
			if (!GlobalFunc_2345(PLAYER::PLAYER_PED_ID(), 10, 0))
			{
				Global_85369 = -1;
				return 1;
			}
		}
	}
	return 0;
}



int func_207(int iParam0)//Position - 0x20278
{
	var uVar0;
	
	if (iParam0 == 0)
	{
		GlobalFunc_2196(7, 0, 0);
	}
	else if (iParam0 == 1)
	{
		if (GlobalFunc_8315() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID = func_209(PLAYER::PLAYER_PED_ID());
		}
		else
		{
			uVar0 = { GlobalFunc_7617(joaat("player_one"), 0) };
			Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID = func_208(uVar0[3], uVar0[4]);
		}
		GlobalFunc_2196(7, 0, 1);
	}
	return -2;
}

int func_208(int iParam0, int iParam1)//Position - 0x202F6
{
	return (iParam0 + iParam1 * 100);
}

int func_209(int iParam0)//Position - 0x20305
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_11064(iParam0, 3, -1);
	iVar1 = GlobalFunc_11064(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}
















int func_225(int iParam0)//Position - 0x21B15
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 1;
	}
	func_226(iVar0);
	return -2;
}

void func_226(int iParam0)//Position - 0x21B3E
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("faggio2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), iParam0);
}

int func_227(int iParam0, int iParam1)//Position - 0x21B7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = GlobalFunc_Find_Running_Mission(iParam1);
	iVar1 = Global_68514.f_109[iParam1 /*4*/];
	iVar2 = Global_81155[iVar1 /*34*/].f_6;
	if (GlobalFunc_142())
	{
		return -1;
	}
	else if (Global_Mission_Fail_State.f_1 == iParam1)
	{
		if (Global_Mission_Fail_State == 11)
		{
			func_937(iVar1);
			func_595(iParam1, iVar0, 1);
			return Global_68514.f_109[iParam1 /*4*/].f_2;
		}
	}
	if (iVar0 == -1)
	{
		if (!Global_68490)
		{
			iVar3 = 0;
			while (iVar3 < 3)
			{
				if (MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_11, iVar3))
				{
					if (GlobalFunc_8315() == iVar3)
					{
						return -1;
					}
					iVar4 = GlobalFunc_237(iVar3);
					if (!PED::IS_PED_INJURED(Global_87845[iVar4]))
					{
						return -1;
					}
				}
				iVar3++;
			}
		}
		iVar0 = func_592(iParam1);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	iVar5 = Global_Running_Missions[iVar0 /*5*/].f_2;
	if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 3))
	{
		if (iVar5 == -1)
		{
			if (Global_84352[iVar1 /*2*/])
			{
				return -1;
			}
			if (func_590(iVar1))
			{
				return -1;
			}
			func_588(&iVar5, iVar1, iParam0, 0, Global_81155[iVar1 /*34*/].f_11);
			if (iVar5 == -1)
			{
				return -1;
			}
			func_580(iVar1);
			Global_Running_Missions[iVar0 /*5*/].f_2 = iVar5;
		}
	}
	if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 2))
	{
		if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 1))
		{
			if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 3))
			{
				if (!func_579(iVar5))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/])
					{
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 4);
					}
					return -1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
			MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 1);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::GET_ENTITY_HEALTH(iVar6) < 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar6, 1);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar6, 1f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar6, 1f);
						}
						GlobalFunc_530(iVar6, 2.5f, 2, 0.5f, 1, 1);
					}
				}
			}
			return -1;
		}
		if (iVar1 != 28)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				if (!Global_54750)
				{
					if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 7))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
						{
							GlobalFunc_5224();
							return -1;
						}
						else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
						{
							SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
							SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
							MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 7);
						}
						else
						{
							return -1;
						}
					}
				}
			}
		}
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		Global_Running_Missions[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 17000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
		if (!GlobalFunc_3048(iVar1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
				}
			}
		}
		func_354(iParam1, iVar0, iVar1, iParam0, 1);
		return -1;
	}
	bVar7 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_Running_Missions[iVar0 /*5*/].f_4))
	{
		if (bVar7)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1) && Global_89998 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar8 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 4);
	if (bVar8 && bVar7)
	{
		bVar7 = false;
	}
	if (!(bVar8 || bVar7))
	{
		bVar7 = true;
	}
	if (bVar8)
	{
		return func_274(iParam1, iVar0, iVar1, 1, 0);
	}
	return func_228(iParam1, iVar0, iVar1, 1);
}

int func_228(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x21F94
{
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 1) && Global_89998 == 0)
	{
		GlobalFunc_9132(0);
		GlobalFunc_748(0);
		GlobalFunc_3002(0);
		GlobalFunc_52(1, 1);
		func_263();
		Global_89752[0 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/] };
		Global_89752[1 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/] };
		Global_89752[2 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/] };
		Global_Running_Missions[iParam1 /*5*/].f_1 = 0;
		func_231(iParam0);
		return -1;
	}
	func_937(iParam2);
	Global_89998 = 0;
	func_595(iParam0, iParam1, bParam3);
	func_229(0, iParam2);
	return Global_68514.f_109[iParam0 /*4*/].f_2;
}

void func_229(bool bParam0, int iParam1)//Position - 0x2205E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 != -1)
	{
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 0))
		{
			iVar0 = joaat("sp0_missions_failed");
			if (bParam0)
			{
				iVar0 = joaat("sp0_missions_passed");
			}
			STATS::STAT_GET_INT(iVar0, &iVar1, -1);
			iVar1++;
			STATS::STAT_SET_INT(iVar0, iVar1, 1);
		}
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 1))
		{
			iVar2 = joaat("sp1_missions_failed");
			if (bParam0)
			{
				iVar2 = joaat("sp1_missions_passed");
			}
			STATS::STAT_GET_INT(iVar2, &iVar3, -1);
			iVar3++;
			STATS::STAT_SET_INT(iVar2, iVar3, 1);
		}
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 2))
		{
			iVar4 = joaat("sp2_missions_failed");
			if (bParam0)
			{
				iVar4 = joaat("sp2_missions_passed");
			}
			STATS::STAT_GET_INT(iVar4, &iVar5, -1);
			iVar5++;
			STATS::STAT_SET_INT(iVar4, iVar5, 1);
		}
	}
}


void func_231(int iParam0)//Position - 0x22156
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	char[] cVar9[8];
	
	if (Global_Mission_Fail_State != 12)
	{
		iVar6 = Global_68514.f_109[iParam0 /*4*/];
		Var0 = { Global_81155[iVar6 /*34*/] };
		if (MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 1))
		{
			return;
		}
		if ((MISC::ARE_STRINGS_EQUAL(&Var0, "me_amanda1") || MISC::ARE_STRINGS_EQUAL(&Var0, "me_jimmy1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "me_tracey1"))
		{
			iVar7 = 4;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&Var0, "carsteal4") || MISC::ARE_STRINGS_EQUAL(&Var0, "fbi3"))
		{
			iVar7 = 3;
		}
		else if (!MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 2))
		{
			if (MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 17))
			{
				iVar7 = 1;
			}
			else
			{
				iVar7 = 0;
			}
		}
		else
		{
			iVar7 = 2;
		}
		iVar8 = GlobalFunc_5110(iVar6);
		cVar9 = { Global_81155[iVar6 /*34*/].f_8 };
		if (iVar6 == 90)
		{
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
			{
				case 1:
					StringConCat(&cVar9, "A", 8);
					break;
				
				case 2:
					StringConCat(&cVar9, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar9, iVar8, Global_Current_Checkpoint, 0);
		func_260(&cVar9, iVar8, Global_Current_Checkpoint, 1, 0);
		if (func_232(&Var0, iVar7, iVar6))
		{
			Global_Mission_Fail_State.f_1 = iParam0;
		}
	}
}

int func_232(char* sParam0, int iParam1, int iParam2)//Position - 0x222A8
{
	int iVar0;
	struct<32> Var1;
	int iVar33;
	
	GlobalFunc_4909();
	GlobalFunc_141();
	Global_Mission_Fail_State = 0;
	StringCopy(&(Global_Mission_Fail_State.Failed_Script_Name), sParam0, 32);
	Global_Mission_Fail_State.Fail_Type = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	GlobalFunc_6685(1);
	GlobalFunc_7632(1);
	GlobalFunc_4944(0);
	GlobalFunc_137(1);
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 9);
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 6);
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 20);
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 21);
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
				{
					MISC::SET_BIT(&(Global_Mission_Fail_State.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_136(0);
	GlobalFunc_12(1);
	Global_Mission_Fail_State.Last_Checkpoint = Global_Current_Checkpoint;
	if (GlobalFunc_5737())
	{
		if (GlobalFunc_135())
		{
			if (Global_Current_Checkpoint >= GlobalFunc_7105())
			{
				if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_Mission_Fail_State.Fail_Type == 6)
		{
			GlobalFunc_6675(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = GlobalFunc_547(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}




























void func_260(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x243E7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87437))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(cParam0, &Global_87437, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(cParam0, iParam1, iParam2, iParam3, iParam4, Global_84544);
	StringCopy(&Global_87437, "", 64);
}



void func_263()//Position - 0x2453C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 198)
	{
		Global_33556[iVar0] = 1;
		iVar0++;
	}
}











var func_274(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x249ED
{
	int iVar0;
	char[] cVar1[8];
	struct<2> Var3;
	int iVar5;
	int iVar6;
	
	func_346(iParam2);
	if (!bParam4)
	{
		iVar0 = GlobalFunc_5110(iParam2);
		cVar1 = { Global_81155[iParam2 /*34*/].f_8 };
		if (iParam2 == 90)
		{
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
			{
				case 1:
					StringConCat(&cVar1, "A", 8);
					break;
				
				case 2:
					StringConCat(&cVar1, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar1, iVar0, Global_Current_Checkpoint, 0);
		func_260(&cVar1, iVar0, Global_Current_Checkpoint, 0, 0);
		Global_68509 = iParam2;
		Global_68510 = MISC::GET_GAME_TIMER();
		if (iParam2 == 28)
		{
			GlobalFunc_2832(&Global_54765, Global_81155[iParam2 /*34*/].f_12);
		}
		else
		{
			Var3 = { GlobalFunc_125(iParam2) };
			GlobalFunc_2832(&Var3, Global_81155[iParam2 /*34*/].f_12);
		}
		func_937(iParam2);
		func_336(iParam2, 0);
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 4))
		{
			GlobalFunc_45(0, 0);
			Global_17098.f_17 = 1;
			Global_17098.f_18 = MISC::GET_GAME_TIMER();
		}
		if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			if (MISC::IS_ORBIS_VERSION())
			{
				if (iParam2 == 53)
				{
					func_334();
				}
				else if (iParam2 == 44)
				{
					func_333();
				}
				else if (iParam2 == 42)
				{
					func_332();
				}
				else
				{
					func_330(GlobalFunc_8315());
				}
			}
		}
	}
	func_229(1, iParam2);
	func_595(iParam0, iParam1, bParam3);
	GlobalFunc_8649(iParam2, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	Global_84545 = 0;
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iParam2);
	func_311(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iParam2);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar5 = GlobalFunc_8315();
		if (GlobalFunc_42(iVar5))
		{
			func_304(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar5 /*74*/]), &(Global_89734[iVar5 /*3*/]), &(Global_89744[iVar5]), &(Global_89726[iVar5]), &(Global_2544853[iVar5]));
		}
	}
	func_302(iParam2);
	func_280();
	iVar6 = func_279(iParam2);
	if (iVar6 != 0)
	{
		if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar6))
		{
			AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar6);
		}
	}
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 0) && !Global_54750)
	{
		GlobalFunc_4907();
	}
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (iParam2 == 90)
		{
			func_276(0);
		}
		else if (iParam2 == 84 || iParam2 == 85)
		{
			func_276(4);
		}
	}
	Global_68514.f_7 = 1;
	Global_68514.f_6 = 1;
	GlobalFunc_507(iParam2, 0);
	return Global_68514.f_109[iParam0 /*4*/].f_1;
}


void func_276(int iParam0)//Position - 0x24CB6
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_FACEBOOK_IS_AVAILABLE())
		{
			switch (iParam0)
			{
				case 0:
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290, 6))
					{
						iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(0)];
						iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1]);
						switch (iVar1)
						{
							case 1:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("JH2A", iVar0, 0);
								break;
							
							case 2:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("JH2B", iVar0, 0);
								break;
						}
						GlobalFunc_2651("FB_J_HEIST");
						MISC::SET_BIT(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290), 6);
					}
					break;
				
				case 4:
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290, 7))
					{
						iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(4)];
						iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[1]);
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[2]);
						switch (iVar1)
						{
							case 8:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("FH2A", iVar0, 0);
								break;
							
							case 9:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("FH2B", iVar0, 0);
								break;
						}
						GlobalFunc_2651("FB_BS_HEIST");
						MISC::SET_BIT(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290), 7);
					}
					break;
				}
			}
	}
}



int func_279(int iParam0)//Position - 0x24EAB
{
	switch (iParam0)
	{
		case 53:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 17:
			return 4;
			break;
		
		case 19:
			return 5;
			break;
		
		case 43:
			return 6;
			break;
		
		case 44:
			return 7;
			break;
		
		case 90:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7] == 1)
			{
				return 8;
			}
			else
			{
				return 9;
			}
			break;
		
		case 63:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 64:
			return 13;
			break;
		
		case 20:
			return 14;
			break;
		
		case 30:
			return 15;
			break;
		
		case 31:
			return 16;
			break;
		
		case 41:
			if (!Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[43])
			{
				return 17;
			}
			else
			{
				return 18;
			}
			break;
		
		case 38:
			return 19;
			break;
		
		case 74:
			return 21;
			break;
		
		case 75:
			return 20;
			break;
		
		case 9:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[76])
			{
				return 23;
			}
			else
			{
				return 22;
			}
			break;
		
		case 59:
			return 24;
			break;
		
		case 45:
			return 25;
			break;
		
		case 10:
			return 26;
			break;
		
		case 14:
			return 27;
			break;
		
		case 93:
			return 28;
			break;
		
		case 16:
			return 29;
			break;
		
		case 39:
			return 30;
			break;
		
		case 46:
			return 31;
			break;
		
		case 60:
			return 32;
			break;
		
		case 22:
			return 33;
			break;
		
		case 69:
			return 34;
			break;
		
		case 70:
			return 35;
			break;
		
		case 48:
			return 36;
			break;
		
		case 61:
			return 37;
			break;
		
		case 49:
			return 38;
			break;
		
		case 84:
			return 39;
			break;
		
		case 85:
			return 40;
			break;
		
		case 27:
			return 41;
			break;
		
		case 3:
			return 56;
			break;
		
		case 4:
			return 57;
			break;
		
		case 5:
			return 58;
			break;
		
		case 6:
			return 59;
			break;
		
		case 7:
			return 60;
			break;
		
		case 58:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[80])
			{
				return 63;
			}
			break;
	}
	return 0;
}

void func_280()//Position - 0x2517D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10949(iVar1, 14, iVar2))
				{
					func_281(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_281(int iParam0, int iParam1, int iParam2)//Position - 0x2523E
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10949(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_281(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_281(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11063(iParam0, iVar0, &iVar46, 0))
	{
		func_284(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11062(iParam0, iVar0, &iVar46))
	{
		func_284(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x254BE
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
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7062(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7062(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11229(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11064(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 1))
							{
								func_284(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_284(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_284(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_284(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_284(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_284(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_284(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_284(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 0))
		{
			func_284(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11062(iParam0, iVar10, &iVar4))
		{
			func_284(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}


















void func_302(int iParam0)//Position - 0x27BBE
{
	switch (iParam0)
	{
		case 1:
			GlobalFunc_2642(6, 140);
			GlobalFunc_2642(7, 140);
			break;
		
		case 19:
			GlobalFunc_2642(4, 140);
			break;
		
		case 43:
			GlobalFunc_2642(6, 140);
			GlobalFunc_2642(7, 140);
			break;
		
		case 63:
			GlobalFunc_2642(10, 140);
			break;
	}
}


void func_304(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x27C2D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = GlobalFunc_6674(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar2]))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_89730[iVar2], -1))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
						Var6 = { ENTITY::GET_ENTITY_COORDS(Global_89730[iVar2], 1) };
						if (ENTITY::GET_ENTITY_MODEL(Global_89730[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_89730[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_305(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_305(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x27CFD
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	uParam2->f_73 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[45] || Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[12]) || Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_67138.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar0]))
			{
				if (!func_309(Global_89730[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_89730[iVar0], 0))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					Var5 = { ENTITY::GET_ENTITY_COORDS(Global_89730[iVar0], 1) };
					if (GlobalFunc_2468(iParam0, Global_89730[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var5) < 22500f)
						{
							*uParam3 = { Var5 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_89730[iVar0]);
							*uParam5 = 1;
							Global_89730[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var5) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar9))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar9);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_60), &(uParam2->f_61), &(uParam2->f_62));
		uParam2->f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &(uParam2->f_69), &(uParam2->f_70), &(uParam2->f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 31);
		}
		uParam2->f_65 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 0))
		{
			iVar10 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		GlobalFunc_102(&iParam1, &(uParam2->f_31), &(uParam2->f_57));
		uParam2->f_72 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_73 = GlobalFunc_86(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[0 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[1 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[2 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11)
		{
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_72 = 0f;
	}
}




int func_309(int iParam0, int iParam1, bool bParam2)//Position - 0x283E4
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (GlobalFunc_2197(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}


void func_311(var uParam0, int iParam1)//Position - 0x2852E
{
	switch (iParam1)
	{
		case 17:
			func_312(uParam0, 0, 12);
			break;
		
		case 19:
			func_312(uParam0, 1, 13);
			break;
		
		case 29:
			func_312(uParam0, 1, 14);
			break;
		
		case 30:
			func_312(uParam0, 2, 15);
			func_312(uParam0, 1, 29);
			break;
		
		case 32:
			func_312(uParam0, 1, 16);
			func_312(uParam0, 0, 17);
			break;
		
		case 39:
			func_312(uParam0, 0, 21);
			func_312(uParam0, 1, 20);
			break;
		
		case 31:
			func_312(uParam0, 0, 18);
			break;
		
		case 20:
			func_312(uParam0, 2, 22);
			break;
		
		case 66:
			func_312(uParam0, 1, 23);
			break;
		
		case 68:
			func_312(uParam0, 1, 24);
			break;
		
		case 70:
			func_312(uParam0, 1, 67);
			break;
		
		case 8:
			func_312(uParam0, 1, 25);
			func_312(uParam0, 2, 26);
			break;
		
		case 67:
			func_312(uParam0, 1, 27);
			break;
		
		case 9:
			func_312(uParam0, 2, 28);
			break;
		
		case 38:
			func_312(uParam0, 2, 30);
			func_312(uParam0, 1, 19);
			break;
		
		case 83:
			func_312(uParam0, 2, 33);
			break;
		
		case 45:
			func_312(uParam0, 1, 35);
			break;
		
		case 64:
			func_312(uParam0, 0, 36);
			func_312(uParam0, 1, 37);
			break;
		
		case 91:
			func_312(uParam0, 0, 41);
			break;
		
		case 42:
			func_312(uParam0, 0, 58);
			Global_89503[0 /*74*/] = 0;
			func_312(uParam0, 2, 59);
			Global_89503[2 /*74*/] = 0;
			break;
		
		case 41:
			func_312(uParam0, 1, 42);
			func_312(uParam0, 2, 42);
			break;
		
		case 15:
			func_312(uParam0, 0, 46);
			func_312(uParam0, 1, 47);
			break;
		
		case 16:
			func_312(uParam0, 0, 48);
			break;
		
		case 48:
			func_312(uParam0, 1, 50);
			func_312(uParam0, 2, 51);
			break;
		
		case 74:
			func_312(uParam0, 0, 52);
			func_312(uParam0, 1, 66);
			break;
		
		case 76:
			func_312(uParam0, 1, 53);
			func_312(uParam0, 2, 54);
			func_312(uParam0, 0, 62);
			break;
		
		case 75:
			func_312(uParam0, 0, 61);
			func_312(uParam0, 1, 31);
			break;
		
		case 69:
			func_312(uParam0, 1, 63);
			break;
		
		case 84:
			func_312(uParam0, 0, 68);
			func_312(uParam0, 2, 69);
			break;
		
		case 85:
			func_312(uParam0, 0, 64);
			func_312(uParam0, 2, 65);
			break;
		
		case 93:
			func_312(uParam0, 1, 38);
			func_312(uParam0, 2, 39);
			break;
		
		case 11:
			func_312(uParam0, 2, 55);
			break;
		
		case 77:
			func_312(uParam0, 1, 56);
			func_312(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_312(var uParam0, int iParam1, int iParam2)//Position - 0x28877
{
	int iVar0;
	struct<74> Var1;
	var uVar75;
	var uVar78;
	var uVar79;
	var uVar82;
	
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], 9))
	{
		iVar0 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = func_132();
	if (!GlobalFunc_506(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!GlobalFunc_100(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!GlobalFunc_100(Global_88538[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (GlobalFunc_8040(iParam1, iParam2, &Var1, &uVar75, &uVar78, &uVar79, &uVar82))
			{
				Global_89503[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}


















void func_330(int iParam0)//Position - 0x2D921
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(61);
	Global_2408820[iVar0 /*83*/] = 61;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_MICHAEL", 64);
			break;
		
		case 1:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_FRANKLIN", 64);
			break;
		
		case 2:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_TREVOR", 64);
			break;
		
		default:
			break;
	}
}


void func_332()//Position - 0x2D9F0
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(59);
	Global_2408820[iVar0 /*83*/] = 59;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_333()//Position - 0x2DA1D
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(58);
	Global_2408820[iVar0 /*83*/] = 58;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_334()//Position - 0x2DA4A
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(57);
	Global_2408820[iVar0 /*83*/] = 57;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}


void func_336(int iParam0, bool bParam1)//Position - 0x2DAC1
{
	switch (iParam0)
	{
		case 53:
			GlobalFunc_7622(5, 1);
			break;
		
		case 0:
			GlobalFunc_7622(1, 1);
			break;
		
		case 1:
			GlobalFunc_7622(20, bParam1);
			break;
		
		case 2:
			GlobalFunc_7622(0, bParam1);
			break;
		
		case 17:
			GlobalFunc_7622(12, bParam1);
			break;
		
		case 18:
			GlobalFunc_7622(26, bParam1);
			break;
		
		case 19:
			GlobalFunc_7622(3, bParam1);
			break;
		
		case 43:
			GlobalFunc_7622(13, bParam1);
			GlobalFunc_7622(23, bParam1);
			break;
		
		case 62:
			GlobalFunc_7622(2, bParam1);
			GlobalFunc_7622(27, bParam1);
			break;
		
		case 63:
			GlobalFunc_7622(18, bParam1);
			break;
		
		case 12:
			GlobalFunc_7622(25, bParam1);
			break;
		
		case 64:
			GlobalFunc_7622(11, bParam1);
			break;
		
		case 20:
			GlobalFunc_7622(14, bParam1);
			GlobalFunc_7622(10, bParam1);
			break;
		
		case 29:
			GlobalFunc_7622(7, bParam1);
			break;
		
		case 30:
			GlobalFunc_7622(22, bParam1);
			break;
		
		case 31:
			GlobalFunc_7622(8, bParam1);
			break;
		
		case 59:
			GlobalFunc_7622(21, bParam1);
			break;
		
		case 45:
			GlobalFunc_7622(19, bParam1);
			break;
		
		case 42:
			GlobalFunc_7622(24, bParam1);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			GlobalFunc_7622(9, bParam1);
			break;
		
		case 28:
			GlobalFunc_7622(9, 1);
			break;
	}
}










void func_346(int iParam0)//Position - 0x2E2DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 14))
	{
		iVar0 = GlobalFunc_3045(iParam0);
		if (iVar0 != -1)
		{
			iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(iVar0)];
			iVar2 = 0;
			while (iVar2 < Global_86396[iVar1 /*19*/])
			{
				iVar3 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2];
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iVar3))
				{
					Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar3 /*3*/].f_1 = Global_86379[iVar2 /*3*/].f_1;
					Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar3 /*3*/].f_2 = Global_86379[iVar2 /*3*/].f_2;
					func_347(iVar3);
				}
				iVar2++;
			}
		}
	}
	if (Global_86395)
	{
		Global_86395 = 0;
	}
}

void func_347(int iParam0)//Position - 0x2E39D
{
	float fVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] == 2)
	{
		return;
	}
	fVar0 = 0f;
	switch (Global_86242[iParam0 /*5*/])
	{
		case 1:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_655(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 4f);
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_654(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_654(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
	}
	if (fVar0 > 66.6f)
	{
		if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] < 2)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] = 2;
		}
	}
	else if (fVar0 > 33.3f)
	{
		if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] < 1)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] = 1;
		}
	}
}







void func_354(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2E682
{
	int iVar0;
	int iVar1;
	var uVar2;
	char* sVar3;
	struct<2> Var5;
	
	if (iParam3 != -1)
	{
		Global_68514.f_9 = iParam3;
	}
	if (Global_87287)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	Global_86587.f_8 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 21) && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::START_FIRING_AMNESTY(5000);
			if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		}
		if (Global_68250 == iParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	SCRIPT::REQUEST_SCRIPT("buddyDeathResponse");
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 21) && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
		{
			GlobalFunc_9080();
		}
	}
	func_561(GlobalFunc_8315());
	if (!GlobalFunc_Is_Mission_Retry())
	{
		func_426(PLAYER::PLAYER_PED_ID(), 1);
	}
	func_263();
	iVar0 = GlobalFunc_8315();
	if (GlobalFunc_42(iVar0))
	{
		func_304(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar0 /*74*/]), &(Global_89734[iVar0 /*3*/]), &(Global_89744[iVar0]), &(Global_89726[iVar0]), &(Global_2544853[iVar0]));
	}
	GlobalFunc_872();
	Global_2939[0] = 0;
	Global_2939[2] = 0;
	Global_2939[1] = 0;
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = func_421(iParam2);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	if (iParam4 && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
	{
		GlobalFunc_6685(0);
	}
	Global_68490 = 0;
	func_416();
	func_415();
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (Global_68250 == iParam2)
		{
			if (!MISC::ARE_STRINGS_EQUAL("NONE", &Global_68251))
			{
				CUTSCENE::_0x8D9DF6ECA8768583(Global_Running_Missions[iParam1 /*5*/].f_4);
			}
			Global_68250 = -1;
			Global_68249 = 0;
			Global_68263 = 0;
			Global_68257[0] = -1;
			Global_68257[1] = -1;
			Global_68257[2] = -1;
			iVar1 = 0;
			while (iVar1 < Global_68307)
			{
				Global_68308[iVar1 /*4*/] = -1;
				Global_68308[iVar1 /*4*/].f_1 = 0;
				Global_68308[iVar1 /*4*/].f_2 = 0;
				Global_68308[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_68307 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68429)
			{
				Global_68430[iVar1 /*3*/] = -1;
				Global_68430[iVar1 /*3*/].f_1 = 0;
				Global_68430[iVar1 /*3*/].f_2 = -99;
				iVar1++;
			}
			Global_68429 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68443)
			{
				Global_68444[iVar1 /*2*/] = -1;
				Global_68444[iVar1 /*2*/].f_1 = 0;
				iVar1++;
			}
			Global_68443 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68455)
			{
				Global_68456[iVar1 /*4*/] = -1;
				Global_68456[iVar1 /*4*/].f_1 = 0;
				Global_68456[iVar1 /*4*/].f_2 = 0;
				Global_68456[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_68455 = 0;
			GlobalFunc_3047();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				Global_68265[iVar1] = 0;
				iVar1++;
			}
			Global_68248 = 0;
			Global_68264 = 0;
			if (Global_68261 != -1)
			{
				func_412(&Global_68261);
			}
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
			Global_68262 = 1;
		}
	}
	func_411(iParam2);
	uVar2 = GlobalFunc_5110(iParam2);
	sVar3 = { Global_81155[iParam2 /*34*/].f_8 };
	if (iParam2 == 90)
	{
		switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
		{
			case 1:
				StringConCat(&sVar3, "A", 8);
				break;
			
			case 2:
				StringConCat(&sVar3, "B", 8);
				break;
			}
	}
	GlobalFunc_5225(&sVar3, uVar2, 0);
	Var5 = { GlobalFunc_125(iParam2) };
	HUD::SET_MISSION_NAME(1, &Var5);
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 3))
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			func_408(iParam2);
		}
	}
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 1) && !MISC::IS_BIT_SET(Global_Running_Missions[iParam1 /*5*/].f_1, 3))
	{
		func_370(iParam0);
	}
	func_356(iParam2);
	func_355(iParam2);
	CAM::STOP_GAMEPLAY_HINT(0);
	Global_68507 = iParam2;
}

void func_355(int iParam0)//Position - 0x2EABD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!Global_86395)
	{
		iVar0 = GlobalFunc_3045(iParam0);
		iVar1 = GlobalFunc_656(iVar0);
		if (iParam0 == 93)
		{
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[9] != 5)
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[9] = 5;
			}
		}
		if (MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 14))
		{
			if (iVar0 != -1)
			{
				iVar2 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[iVar1];
				iVar3 = 0;
				while (iVar3 < Global_86396[iVar2 /*19*/])
				{
					iVar4 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar2 /*6*/][iVar3];
					Global_86379[iVar3 /*3*/] = 0;
					Global_86379[iVar3 /*3*/].f_1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar4 /*3*/].f_1;
					Global_86379[iVar3 /*3*/].f_2 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar4 /*3*/].f_2;
					iVar3++;
				}
				Global_86395 = 1;
			}
		}
	}
}

void func_356(int iParam0)//Position - 0x2EB9D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (iParam0 == 26)
	{
		Global_54771 = 1;
	}
	iVar1 = iParam0;
	if (iVar1 == 28)
	{
		return;
	}
	if (iVar1 == 27)
	{
		iVar1 = 26;
		if (Global_54743)
		{
			return;
		}
		bVar0 = true;
	}
	if (Global_3)
	{
		GlobalFunc_6836();
		return;
	}
	MemCopy(&Global_54765, {GlobalFunc_125(iVar1)}, 4);
	Global_54753 = 0;
	Global_54752 = 0;
	if (MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
	{
		Global_54752 = 1;
	}
	switch (iVar1)
	{
		case 53:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 50:
		case 51:
		case 52:
			Global_54740 = 1;
			Global_54743 = 1;
			Global_54746 = 1;
			break;
		
		case 32:
		case 23:
		case 28:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 77:
			Global_54752 = 1;
			Global_54751 = 1;
			GlobalFunc_6836();
			GlobalFunc_5224();
			return;
			break;
		
		case 90:
		case 74:
		case 75:
		case 93:
		case 69:
		case 70:
		case 84:
		case 85:
			Global_54754 = GlobalFunc_3045(iVar1);
			Global_54753 = 1;
			Global_86587.f_3 = 0;
			break;
	}
	iVar2 = Global_66995;
	Global_66995 = 0;
	iVar3 = Global_66996;
	Global_66996 = iVar1;
	if (!Global_54740)
	{
		if ((Global_66996 != iVar3 || Global_66845 == 0) || iVar2 != Global_66995)
		{
			Global_24693 = 0;
			GlobalFunc_6836();
			func_358(iVar1);
		}
		else
		{
			Global_54743 = 1;
		}
	}
	if (bVar0)
	{
		Global_54747 = 1;
	}
	Global_54778 = MISC::GET_GAME_TIMER();
	Global_54751 = 0;
	GlobalFunc_854();
	Global_54750 = 0;
}


void func_358(int iParam0)//Position - 0x2EE4C
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_5222(0);
			GlobalFunc_5222(1);
			GlobalFunc_5222(2);
			GlobalFunc_5222(3);
			GlobalFunc_5222(4);
			GlobalFunc_5222(5);
			GlobalFunc_5222(6);
			GlobalFunc_5222(7);
			GlobalFunc_5222(8);
			return;
		
		case 1:
			GlobalFunc_5222(9);
			GlobalFunc_5222(10);
			GlobalFunc_5222(11);
			GlobalFunc_5222(12);
			GlobalFunc_5222(13);
			GlobalFunc_5222(14);
			GlobalFunc_5222(15);
			GlobalFunc_5222(16);
			GlobalFunc_5222(17);
			GlobalFunc_5222(18);
			GlobalFunc_5222(19);
			GlobalFunc_5222(20);
			return;
		
		case 2:
			GlobalFunc_5222(21);
			GlobalFunc_5222(22);
			GlobalFunc_5222(23);
			GlobalFunc_5222(24);
			GlobalFunc_5222(25);
			GlobalFunc_5222(26);
			GlobalFunc_5222(27);
			GlobalFunc_5222(28);
			GlobalFunc_5222(29);
			return;
		
		case 3:
			GlobalFunc_5222(30);
			GlobalFunc_5222(31);
			GlobalFunc_5222(32);
			GlobalFunc_5222(33);
			GlobalFunc_5222(34);
			GlobalFunc_5222(35);
			GlobalFunc_5222(36);
			GlobalFunc_5222(37);
			GlobalFunc_5222(38);
			GlobalFunc_5222(39);
			GlobalFunc_5222(40);
			GlobalFunc_5222(41);
			GlobalFunc_5222(42);
			return;
		
		case 4:
			GlobalFunc_5222(43);
			GlobalFunc_5222(44);
			GlobalFunc_5222(45);
			GlobalFunc_5222(46);
			GlobalFunc_5222(47);
			GlobalFunc_5222(48);
			GlobalFunc_5222(49);
			GlobalFunc_5222(50);
			GlobalFunc_5222(51);
			GlobalFunc_5222(52);
			GlobalFunc_5222(53);
			GlobalFunc_5222(54);
			GlobalFunc_5222(55);
			GlobalFunc_5222(56);
			return;
		
		case 5:
			GlobalFunc_5222(57);
			GlobalFunc_5222(58);
			GlobalFunc_5222(59);
			GlobalFunc_5222(60);
			GlobalFunc_5222(61);
			GlobalFunc_5222(62);
			GlobalFunc_5222(63);
			GlobalFunc_5222(64);
			GlobalFunc_5222(65);
			GlobalFunc_5222(66);
			GlobalFunc_5222(67);
			GlobalFunc_5222(68);
			GlobalFunc_5222(69);
			GlobalFunc_5222(70);
			return;
		
		case 6:
			GlobalFunc_5222(71);
			GlobalFunc_5222(72);
			GlobalFunc_5222(73);
			GlobalFunc_5222(74);
			GlobalFunc_5222(75);
			GlobalFunc_5222(76);
			GlobalFunc_5222(77);
			GlobalFunc_5222(78);
			GlobalFunc_5222(79);
			GlobalFunc_5222(80);
			GlobalFunc_5222(81);
			GlobalFunc_5222(82);
			GlobalFunc_5222(83);
			GlobalFunc_5222(84);
			GlobalFunc_5222(85);
			return;
		
		case 7:
			GlobalFunc_5222(86);
			GlobalFunc_5222(87);
			GlobalFunc_5222(88);
			GlobalFunc_5222(89);
			GlobalFunc_5222(90);
			GlobalFunc_5222(91);
			GlobalFunc_5222(92);
			GlobalFunc_5222(93);
			GlobalFunc_5222(94);
			GlobalFunc_5222(95);
			GlobalFunc_5222(96);
			GlobalFunc_5222(97);
			GlobalFunc_5222(98);
			GlobalFunc_5222(99);
			GlobalFunc_5222(100);
			GlobalFunc_5222(101);
			return;
		
		case 9:
			GlobalFunc_5222(102);
			GlobalFunc_5222(103);
			GlobalFunc_5222(104);
			GlobalFunc_5222(105);
			GlobalFunc_5222(106);
			GlobalFunc_5222(107);
			GlobalFunc_5222(108);
			GlobalFunc_5222(109);
			GlobalFunc_5222(110);
			return;
		
		case 8:
			GlobalFunc_5222(111);
			GlobalFunc_5222(112);
			GlobalFunc_5222(113);
			GlobalFunc_5222(114);
			GlobalFunc_5222(115);
			GlobalFunc_5222(116);
			GlobalFunc_5222(117);
			GlobalFunc_5222(118);
			GlobalFunc_5222(119);
			return;
		
		case 10:
			GlobalFunc_5222(120);
			GlobalFunc_5222(121);
			GlobalFunc_5222(122);
			GlobalFunc_5222(123);
			GlobalFunc_5222(124);
			GlobalFunc_5222(125);
			GlobalFunc_5222(126);
			GlobalFunc_5222(127);
			GlobalFunc_5222(128);
			return;
		
		case 11:
			GlobalFunc_5222(129);
			GlobalFunc_5222(130);
			GlobalFunc_5222(131);
			GlobalFunc_5222(132);
			GlobalFunc_5222(133);
			GlobalFunc_5222(134);
			GlobalFunc_5222(135);
			return;
		
		case 12:
			GlobalFunc_5222(136);
			GlobalFunc_5222(137);
			GlobalFunc_5222(138);
			GlobalFunc_5222(139);
			GlobalFunc_5222(140);
			GlobalFunc_5222(141);
			GlobalFunc_5222(142);
			GlobalFunc_5222(143);
			GlobalFunc_5222(144);
			GlobalFunc_5222(145);
			GlobalFunc_5222(146);
			GlobalFunc_5222(147);
			return;
		
		case 13:
			GlobalFunc_5222(148);
			GlobalFunc_5222(149);
			GlobalFunc_5222(150);
			GlobalFunc_5222(151);
			GlobalFunc_5222(152);
			GlobalFunc_5222(153);
			GlobalFunc_5222(154);
			GlobalFunc_5222(155);
			GlobalFunc_5222(156);
			GlobalFunc_5222(157);
			GlobalFunc_5222(158);
			GlobalFunc_5222(159);
			GlobalFunc_5222(160);
			return;
		
		case 14:
			GlobalFunc_5222(161);
			GlobalFunc_5222(162);
			GlobalFunc_5222(163);
			GlobalFunc_5222(164);
			GlobalFunc_5222(165);
			GlobalFunc_5222(166);
			GlobalFunc_5222(167);
			GlobalFunc_5222(168);
			GlobalFunc_5222(169);
			GlobalFunc_5222(170);
			GlobalFunc_5222(171);
			return;
		
		case 15:
			GlobalFunc_5222(172);
			GlobalFunc_5222(173);
			GlobalFunc_5222(174);
			GlobalFunc_5222(175);
			GlobalFunc_5222(176);
			GlobalFunc_5222(177);
			GlobalFunc_5222(178);
			GlobalFunc_5222(179);
			GlobalFunc_5222(180);
			GlobalFunc_5222(181);
			GlobalFunc_5222(182);
			GlobalFunc_5222(183);
			GlobalFunc_5222(184);
			return;
		
		case 16:
			GlobalFunc_5222(185);
			GlobalFunc_5222(186);
			GlobalFunc_5222(187);
			GlobalFunc_5222(188);
			GlobalFunc_5222(189);
			GlobalFunc_5222(190);
			GlobalFunc_5222(191);
			GlobalFunc_5222(192);
			GlobalFunc_5222(193);
			GlobalFunc_5222(194);
			GlobalFunc_5222(195);
			return;
		
		case 17:
			GlobalFunc_5222(196);
			GlobalFunc_5222(197);
			GlobalFunc_5222(198);
			GlobalFunc_5222(199);
			GlobalFunc_5222(200);
			GlobalFunc_5222(201);
			GlobalFunc_5222(202);
			GlobalFunc_5222(203);
			GlobalFunc_5222(204);
			return;
		
		case 18:
			GlobalFunc_5222(205);
			GlobalFunc_5222(206);
			GlobalFunc_5222(207);
			GlobalFunc_5222(208);
			GlobalFunc_5222(209);
			GlobalFunc_5222(210);
			GlobalFunc_5222(211);
			GlobalFunc_5222(212);
			GlobalFunc_5222(213);
			GlobalFunc_5222(214);
			GlobalFunc_5222(215);
			GlobalFunc_5222(216);
			return;
		
		case 19:
			GlobalFunc_5222(217);
			GlobalFunc_5222(218);
			GlobalFunc_5222(219);
			GlobalFunc_5222(220);
			GlobalFunc_5222(221);
			GlobalFunc_5222(222);
			GlobalFunc_5222(223);
			GlobalFunc_5222(224);
			GlobalFunc_5222(225);
			GlobalFunc_5222(226);
			GlobalFunc_5222(227);
			GlobalFunc_5222(228);
			return;
		
		case 20:
			GlobalFunc_5222(229);
			GlobalFunc_5222(230);
			GlobalFunc_5222(231);
			GlobalFunc_5222(232);
			GlobalFunc_5222(233);
			GlobalFunc_5222(234);
			GlobalFunc_5222(235);
			GlobalFunc_5222(236);
			GlobalFunc_5222(237);
			GlobalFunc_5222(238);
			return;
		
		case 21:
			GlobalFunc_5222(239);
			GlobalFunc_5222(240);
			GlobalFunc_5222(241);
			GlobalFunc_5222(242);
			GlobalFunc_5222(243);
			GlobalFunc_5222(244);
			GlobalFunc_5222(245);
			GlobalFunc_5222(246);
			GlobalFunc_5222(247);
			GlobalFunc_5222(248);
			return;
		
		case 22:
			GlobalFunc_5222(249);
			GlobalFunc_5222(250);
			GlobalFunc_5222(251);
			GlobalFunc_5222(252);
			GlobalFunc_5222(253);
			GlobalFunc_5222(254);
			GlobalFunc_5222(255);
			GlobalFunc_5222(256);
			return;
		
		case 26:
			GlobalFunc_5222(257);
			GlobalFunc_5222(258);
			GlobalFunc_5222(259);
			GlobalFunc_5222(260);
			GlobalFunc_5222(261);
			GlobalFunc_5222(262);
			GlobalFunc_5222(263);
			GlobalFunc_5222(264);
			GlobalFunc_5222(265);
			GlobalFunc_5222(266);
			GlobalFunc_5222(267);
			GlobalFunc_5222(268);
			GlobalFunc_5222(269);
			GlobalFunc_5222(270);
			GlobalFunc_5222(271);
			GlobalFunc_5222(272);
			return;
		
		case 29:
			GlobalFunc_5222(273);
			GlobalFunc_5222(274);
			GlobalFunc_5222(275);
			GlobalFunc_5222(276);
			GlobalFunc_5222(277);
			GlobalFunc_5222(278);
			GlobalFunc_5222(279);
			GlobalFunc_5222(280);
			GlobalFunc_5222(281);
			GlobalFunc_5222(282);
			return;
		
		case 30:
			GlobalFunc_5222(283);
			GlobalFunc_5222(284);
			GlobalFunc_5222(285);
			GlobalFunc_5222(286);
			GlobalFunc_5222(287);
			GlobalFunc_5222(288);
			GlobalFunc_5222(289);
			GlobalFunc_5222(290);
			GlobalFunc_5222(291);
			GlobalFunc_5222(292);
			GlobalFunc_5222(293);
			return;
		
		case 31:
			GlobalFunc_5222(294);
			GlobalFunc_5222(295);
			GlobalFunc_5222(296);
			GlobalFunc_5222(297);
			GlobalFunc_5222(298);
			GlobalFunc_5222(299);
			GlobalFunc_5222(300);
			GlobalFunc_5222(301);
			GlobalFunc_5222(302);
			GlobalFunc_5222(303);
			GlobalFunc_5222(304);
			GlobalFunc_5222(305);
			return;
		
		case 38:
			GlobalFunc_5222(306);
			GlobalFunc_5222(307);
			GlobalFunc_5222(308);
			GlobalFunc_5222(309);
			GlobalFunc_5222(310);
			GlobalFunc_5222(311);
			GlobalFunc_5222(312);
			GlobalFunc_5222(313);
			GlobalFunc_5222(314);
			GlobalFunc_5222(315);
			GlobalFunc_5222(316);
			return;
		
		case 33:
			GlobalFunc_5222(317);
			GlobalFunc_5222(318);
			GlobalFunc_5222(319);
			GlobalFunc_5222(320);
			GlobalFunc_5222(321);
			return;
		
		case 34:
			GlobalFunc_5222(322);
			GlobalFunc_5222(323);
			GlobalFunc_5222(324);
			GlobalFunc_5222(325);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 39:
			GlobalFunc_5222(326);
			GlobalFunc_5222(327);
			GlobalFunc_5222(328);
			GlobalFunc_5222(329);
			GlobalFunc_5222(330);
			GlobalFunc_5222(331);
			GlobalFunc_5222(332);
			GlobalFunc_5222(333);
			GlobalFunc_5222(334);
			GlobalFunc_5222(335);
			GlobalFunc_5222(336);
			GlobalFunc_5222(337);
			return;
		
		case 40:
			GlobalFunc_5222(338);
			GlobalFunc_5222(339);
			GlobalFunc_5222(340);
			GlobalFunc_5222(341);
			GlobalFunc_5222(342);
			GlobalFunc_5222(343);
			GlobalFunc_5222(344);
			GlobalFunc_5222(345);
			return;
		
		case 41:
			GlobalFunc_5222(346);
			GlobalFunc_5222(347);
			GlobalFunc_5222(348);
			GlobalFunc_5222(349);
			GlobalFunc_5222(350);
			GlobalFunc_5222(351);
			GlobalFunc_5222(352);
			GlobalFunc_5222(353);
			GlobalFunc_5222(354);
			GlobalFunc_5222(355);
			GlobalFunc_5222(356);
			GlobalFunc_5222(357);
			GlobalFunc_5222(358);
			GlobalFunc_5222(359);
			return;
		
		case 42:
			GlobalFunc_5222(360);
			GlobalFunc_5222(361);
			GlobalFunc_5222(362);
			GlobalFunc_5222(363);
			GlobalFunc_5222(364);
			GlobalFunc_5222(365);
			GlobalFunc_5222(366);
			GlobalFunc_5222(367);
			GlobalFunc_5222(368);
			GlobalFunc_5222(369);
			GlobalFunc_5222(370);
			GlobalFunc_5222(371);
			return;
		
		case 43:
			GlobalFunc_5222(372);
			GlobalFunc_5222(373);
			GlobalFunc_5222(374);
			GlobalFunc_5222(375);
			GlobalFunc_5222(376);
			GlobalFunc_5222(377);
			GlobalFunc_5222(378);
			GlobalFunc_5222(379);
			GlobalFunc_5222(380);
			GlobalFunc_5222(381);
			GlobalFunc_5222(382);
			GlobalFunc_5222(383);
			return;
		
		case 44:
			GlobalFunc_5222(384);
			GlobalFunc_5222(385);
			GlobalFunc_5222(386);
			GlobalFunc_5222(387);
			GlobalFunc_5222(388);
			GlobalFunc_5222(389);
			GlobalFunc_5222(390);
			GlobalFunc_5222(391);
			GlobalFunc_5222(392);
			return;
		
		case 45:
			GlobalFunc_5222(393);
			GlobalFunc_5222(394);
			GlobalFunc_5222(395);
			GlobalFunc_5222(396);
			GlobalFunc_5222(397);
			GlobalFunc_5222(398);
			GlobalFunc_5222(399);
			return;
		
		case 46:
			GlobalFunc_5222(400);
			GlobalFunc_5222(401);
			GlobalFunc_5222(402);
			GlobalFunc_5222(403);
			GlobalFunc_5222(404);
			GlobalFunc_5222(405);
			GlobalFunc_5222(406);
			GlobalFunc_5222(407);
			GlobalFunc_5222(408);
			GlobalFunc_5222(409);
			GlobalFunc_5222(410);
			GlobalFunc_5222(411);
			GlobalFunc_5222(412);
			return;
		
		case 47:
			GlobalFunc_5222(413);
			GlobalFunc_5222(414);
			GlobalFunc_5222(415);
			GlobalFunc_5222(416);
			GlobalFunc_5222(417);
			GlobalFunc_5222(418);
			GlobalFunc_5222(419);
			GlobalFunc_5222(420);
			GlobalFunc_5222(421);
			GlobalFunc_5222(422);
			GlobalFunc_5222(423);
			GlobalFunc_5222(424);
			GlobalFunc_5222(425);
			GlobalFunc_5222(426);
			GlobalFunc_5222(427);
			GlobalFunc_5222(428);
			return;
		
		case 48:
			GlobalFunc_5222(429);
			GlobalFunc_5222(430);
			GlobalFunc_5222(431);
			GlobalFunc_5222(432);
			GlobalFunc_5222(433);
			GlobalFunc_5222(434);
			GlobalFunc_5222(435);
			GlobalFunc_5222(436);
			GlobalFunc_5222(437);
			GlobalFunc_5222(438);
			GlobalFunc_5222(439);
			GlobalFunc_5222(440);
			return;
		
		case 49:
			GlobalFunc_5222(441);
			GlobalFunc_5222(442);
			GlobalFunc_5222(443);
			GlobalFunc_5222(444);
			GlobalFunc_5222(445);
			GlobalFunc_5222(446);
			GlobalFunc_5222(447);
			GlobalFunc_5222(448);
			GlobalFunc_5222(449);
			GlobalFunc_5222(450);
			GlobalFunc_5222(451);
			GlobalFunc_5222(452);
			GlobalFunc_5222(453);
			return;
		
		case 53:
			GlobalFunc_5222(454);
			GlobalFunc_5222(455);
			GlobalFunc_5222(456);
			GlobalFunc_5222(457);
			GlobalFunc_5222(458);
			GlobalFunc_5222(459);
			GlobalFunc_5222(460);
			GlobalFunc_5222(461);
			GlobalFunc_5222(462);
			GlobalFunc_5222(463);
			GlobalFunc_5222(464);
			GlobalFunc_5222(465);
			return;
		
		case 60:
			GlobalFunc_5222(466);
			GlobalFunc_5222(467);
			GlobalFunc_5222(468);
			GlobalFunc_5222(469);
			GlobalFunc_5222(470);
			GlobalFunc_5222(471);
			GlobalFunc_5222(472);
			GlobalFunc_5222(473);
			return;
		
		case 61:
			GlobalFunc_5222(474);
			GlobalFunc_5222(475);
			GlobalFunc_5222(476);
			GlobalFunc_5222(477);
			GlobalFunc_5222(478);
			GlobalFunc_5222(479);
			GlobalFunc_5222(480);
			GlobalFunc_5222(481);
			GlobalFunc_5222(482);
			GlobalFunc_5222(483);
			GlobalFunc_5222(484);
			GlobalFunc_5222(485);
			return;
		
		case 62:
			GlobalFunc_5222(486);
			GlobalFunc_5222(487);
			GlobalFunc_5222(488);
			GlobalFunc_5222(489);
			GlobalFunc_5222(490);
			GlobalFunc_5222(491);
			GlobalFunc_5222(492);
			GlobalFunc_5222(493);
			GlobalFunc_5222(494);
			GlobalFunc_5222(495);
			GlobalFunc_5222(496);
			GlobalFunc_5222(497);
			GlobalFunc_5222(498);
			return;
		
		case 63:
			GlobalFunc_5222(499);
			GlobalFunc_5222(500);
			GlobalFunc_5222(501);
			GlobalFunc_5222(502);
			GlobalFunc_5222(503);
			GlobalFunc_5222(504);
			GlobalFunc_5222(505);
			GlobalFunc_5222(506);
			GlobalFunc_5222(507);
			GlobalFunc_5222(508);
			GlobalFunc_5222(509);
			GlobalFunc_5222(510);
			GlobalFunc_5222(511);
			GlobalFunc_5222(512);
			GlobalFunc_5222(513);
			GlobalFunc_5222(514);
			return;
		
		case 64:
			GlobalFunc_5222(515);
			GlobalFunc_5222(516);
			GlobalFunc_5222(517);
			GlobalFunc_5222(518);
			GlobalFunc_5222(519);
			GlobalFunc_5222(520);
			GlobalFunc_5222(521);
			GlobalFunc_5222(522);
			GlobalFunc_5222(523);
			GlobalFunc_5222(524);
			GlobalFunc_5222(525);
			GlobalFunc_5222(526);
			return;
		
		case 66:
			GlobalFunc_5222(527);
			GlobalFunc_5222(528);
			GlobalFunc_5222(529);
			GlobalFunc_5222(530);
			GlobalFunc_5222(531);
			GlobalFunc_5222(532);
			GlobalFunc_5222(533);
			return;
		
		case 67:
			GlobalFunc_5222(534);
			GlobalFunc_5222(535);
			GlobalFunc_5222(536);
			GlobalFunc_5222(537);
			GlobalFunc_5222(538);
			GlobalFunc_5222(539);
			return;
		
		case 68:
			GlobalFunc_5222(540);
			GlobalFunc_5222(541);
			GlobalFunc_5222(542);
			GlobalFunc_5222(543);
			GlobalFunc_5222(544);
			GlobalFunc_5222(545);
			GlobalFunc_5222(546);
			return;
		
		case 69:
			GlobalFunc_5222(547);
			GlobalFunc_5222(548);
			GlobalFunc_5222(549);
			GlobalFunc_5222(550);
			GlobalFunc_5222(551);
			GlobalFunc_5222(552);
			GlobalFunc_5222(553);
			GlobalFunc_5222(554);
			GlobalFunc_5222(555);
			GlobalFunc_5222(556);
			GlobalFunc_5222(557);
			GlobalFunc_5222(558);
			GlobalFunc_5222(559);
			GlobalFunc_5222(560);
			return;
		
		case 70:
			GlobalFunc_5222(561);
			GlobalFunc_5222(562);
			GlobalFunc_5222(563);
			GlobalFunc_5222(564);
			GlobalFunc_5222(565);
			GlobalFunc_5222(566);
			GlobalFunc_5222(567);
			GlobalFunc_5222(568);
			GlobalFunc_5222(569);
			GlobalFunc_5222(570);
			GlobalFunc_5222(571);
			GlobalFunc_5222(572);
			GlobalFunc_5222(573);
			GlobalFunc_5222(574);
			GlobalFunc_5222(575);
			return;
		
		case 71:
			GlobalFunc_5222(576);
			GlobalFunc_5222(577);
			GlobalFunc_5222(578);
			GlobalFunc_5222(579);
			GlobalFunc_5222(580);
			GlobalFunc_5222(581);
			GlobalFunc_5222(582);
			GlobalFunc_5222(583);
			GlobalFunc_5222(584);
			GlobalFunc_5222(585);
			GlobalFunc_5222(586);
			return;
		
		case 72:
			GlobalFunc_5222(587);
			GlobalFunc_5222(588);
			GlobalFunc_5222(589);
			GlobalFunc_5222(590);
			GlobalFunc_5222(591);
			GlobalFunc_5222(592);
			GlobalFunc_5222(593);
			GlobalFunc_5222(594);
			return;
		
		case 73:
			GlobalFunc_5222(595);
			GlobalFunc_5222(596);
			GlobalFunc_5222(597);
			GlobalFunc_5222(598);
			GlobalFunc_5222(599);
			GlobalFunc_5222(600);
			GlobalFunc_5222(601);
			GlobalFunc_5222(602);
			GlobalFunc_5222(603);
			GlobalFunc_5222(604);
			return;
		
		case 74:
			GlobalFunc_5222(605);
			GlobalFunc_5222(606);
			GlobalFunc_5222(607);
			GlobalFunc_5222(608);
			GlobalFunc_5222(609);
			GlobalFunc_5222(610);
			GlobalFunc_5222(611);
			GlobalFunc_5222(612);
			GlobalFunc_5222(613);
			GlobalFunc_5222(614);
			GlobalFunc_5222(615);
			GlobalFunc_5222(616);
			GlobalFunc_5222(617);
			GlobalFunc_5222(618);
			GlobalFunc_5222(619);
			GlobalFunc_5222(620);
			return;
		
		case 75:
			GlobalFunc_5222(621);
			GlobalFunc_5222(622);
			GlobalFunc_5222(623);
			GlobalFunc_5222(624);
			GlobalFunc_5222(625);
			GlobalFunc_5222(626);
			GlobalFunc_5222(627);
			GlobalFunc_5222(628);
			GlobalFunc_5222(629);
			GlobalFunc_5222(630);
			GlobalFunc_5222(631);
			GlobalFunc_5222(632);
			GlobalFunc_5222(633);
			GlobalFunc_5222(634);
			GlobalFunc_5222(635);
			GlobalFunc_5222(636);
			return;
		
		case 76:
			GlobalFunc_5222(637);
			GlobalFunc_5222(638);
			GlobalFunc_5222(639);
			GlobalFunc_5222(640);
			GlobalFunc_5222(641);
			GlobalFunc_5222(642);
			GlobalFunc_5222(643);
			GlobalFunc_5222(644);
			GlobalFunc_5222(645);
			GlobalFunc_5222(646);
			GlobalFunc_5222(647);
			GlobalFunc_5222(648);
			return;
		
		case 78:
			GlobalFunc_5222(649);
			GlobalFunc_5222(650);
			GlobalFunc_5222(651);
			GlobalFunc_5222(652);
			return;
		
		case joaat("mpsv_lp0_31"):
			GlobalFunc_5222(653);
			GlobalFunc_5222(654);
			GlobalFunc_5222(655);
			GlobalFunc_5222(656);
			GlobalFunc_5222(657);
			GlobalFunc_5222(658);
			GlobalFunc_5222(659);
			return;
		
		case 84:
			GlobalFunc_5222(660);
			GlobalFunc_5222(661);
			GlobalFunc_5222(662);
			GlobalFunc_5222(663);
			GlobalFunc_5222(664);
			GlobalFunc_5222(665);
			GlobalFunc_5222(666);
			GlobalFunc_5222(667);
			GlobalFunc_5222(668);
			GlobalFunc_5222(669);
			GlobalFunc_5222(670);
			GlobalFunc_5222(671);
			GlobalFunc_5222(672);
			GlobalFunc_5222(673);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 85:
			GlobalFunc_5222(674);
			GlobalFunc_5222(675);
			GlobalFunc_5222(676);
			GlobalFunc_5222(677);
			GlobalFunc_5222(678);
			GlobalFunc_5222(679);
			GlobalFunc_5222(680);
			GlobalFunc_5222(681);
			GlobalFunc_5222(682);
			GlobalFunc_5222(683);
			GlobalFunc_5222(684);
			GlobalFunc_5222(685);
			GlobalFunc_5222(686);
			GlobalFunc_5222(687);
			GlobalFunc_5222(688);
			return;
		
		case 86:
			GlobalFunc_5222(689);
			GlobalFunc_5222(690);
			GlobalFunc_5222(691);
			GlobalFunc_5222(692);
			GlobalFunc_5222(693);
			GlobalFunc_5222(694);
			GlobalFunc_5222(695);
			return;
		
		case 87:
			GlobalFunc_5222(696);
			GlobalFunc_5222(697);
			GlobalFunc_5222(698);
			GlobalFunc_5222(699);
			GlobalFunc_5222(700);
			GlobalFunc_5222(701);
			return;
		
		case 88:
			GlobalFunc_5222(702);
			GlobalFunc_5222(703);
			GlobalFunc_5222(704);
			GlobalFunc_5222(705);
			GlobalFunc_5222(706);
			GlobalFunc_5222(707);
			GlobalFunc_5222(708);
			return;
		
		case 91:
			GlobalFunc_5222(709);
			GlobalFunc_5222(710);
			GlobalFunc_5222(711);
			GlobalFunc_5222(712);
			GlobalFunc_5222(713);
			GlobalFunc_5222(714);
			GlobalFunc_5222(715);
			GlobalFunc_5222(716);
			GlobalFunc_5222(717);
			return;
		
		case 92:
			GlobalFunc_5222(718);
			GlobalFunc_5222(719);
			GlobalFunc_5222(720);
			GlobalFunc_5222(721);
			GlobalFunc_5222(722);
			GlobalFunc_5222(723);
			GlobalFunc_5222(724);
			GlobalFunc_5222(725);
			GlobalFunc_5222(726);
			GlobalFunc_5222(727);
			GlobalFunc_5222(728);
			return;
		
		case 93:
			GlobalFunc_5222(729);
			GlobalFunc_5222(730);
			GlobalFunc_5222(731);
			GlobalFunc_5222(732);
			GlobalFunc_5222(733);
			GlobalFunc_5222(734);
			GlobalFunc_5222(735);
			GlobalFunc_5222(736);
			GlobalFunc_5222(737);
			GlobalFunc_5222(738);
			GlobalFunc_5222(739);
			GlobalFunc_5222(740);
			return;
		
		case 90:
			GlobalFunc_5222(810);
			GlobalFunc_5222(811);
			GlobalFunc_5222(812);
			GlobalFunc_5222(813);
			GlobalFunc_5222(814);
			GlobalFunc_5222(815);
			GlobalFunc_5222(816);
			GlobalFunc_5222(817);
			GlobalFunc_5222(818);
			GlobalFunc_5222(819);
			return;
		
		case 36:
			GlobalFunc_5222(820);
			GlobalFunc_5222(821);
			GlobalFunc_5222(822);
			GlobalFunc_5222(823);
			return;
		
		case 37:
			GlobalFunc_5222(824);
			GlobalFunc_5222(825);
			GlobalFunc_5222(826);
			GlobalFunc_5222(827);
			return;
		
		case 24:
			GlobalFunc_5222(846);
			GlobalFunc_5222(847);
			GlobalFunc_5222(848);
			GlobalFunc_5222(849);
			GlobalFunc_5222(850);
			GlobalFunc_5222(851);
			return;
		
		case 25:
			GlobalFunc_5222(852);
			GlobalFunc_5222(853);
			GlobalFunc_5222(854);
			GlobalFunc_5222(855);
			GlobalFunc_5222(856);
			GlobalFunc_5222(857);
			GlobalFunc_5222(858);
			GlobalFunc_5222(859);
			GlobalFunc_5222(860);
			return;
		
		case 59:
			GlobalFunc_5222(861);
			GlobalFunc_5222(862);
			GlobalFunc_5222(863);
			GlobalFunc_5222(864);
			GlobalFunc_5222(865);
			GlobalFunc_5222(866);
			GlobalFunc_5222(867);
			GlobalFunc_5222(868);
			GlobalFunc_5222(869);
			return;
		
		case 65:
			GlobalFunc_5222(870);
			GlobalFunc_5222(871);
			GlobalFunc_5222(872);
			GlobalFunc_5222(873);
			GlobalFunc_5222(874);
			return;
		
		case 80:
			GlobalFunc_5222(875);
			GlobalFunc_5222(876);
			GlobalFunc_5222(877);
			GlobalFunc_5222(878);
			GlobalFunc_5222(879);
			GlobalFunc_5222(880);
			GlobalFunc_5222(881);
			GlobalFunc_5222(882);
			return;
		
		case 81:
			GlobalFunc_5222(883);
			GlobalFunc_5222(884);
			GlobalFunc_5222(885);
			GlobalFunc_5222(886);
			GlobalFunc_5222(887);
			GlobalFunc_5222(888);
			GlobalFunc_5222(889);
			GlobalFunc_5222(890);
			return;
		
		case 82:
			GlobalFunc_5222(891);
			GlobalFunc_5222(892);
			GlobalFunc_5222(893);
			GlobalFunc_5222(894);
			GlobalFunc_5222(895);
			GlobalFunc_5222(896);
			GlobalFunc_5222(897);
			GlobalFunc_5222(898);
			return;
		
		case 83:
			GlobalFunc_5222(899);
			GlobalFunc_5222(900);
			GlobalFunc_5222(901);
			GlobalFunc_5222(902);
			GlobalFunc_5222(903);
			GlobalFunc_5222(904);
			GlobalFunc_5222(905);
			return;
		
		case 89:
			GlobalFunc_5222(906);
			GlobalFunc_5222(907);
			GlobalFunc_5222(908);
			GlobalFunc_5222(909);
			GlobalFunc_5222(910);
			GlobalFunc_5222(911);
			GlobalFunc_5222(912);
			return;
		
		default:
	}
}












void func_370(int iParam0)//Position - 0x30916
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	MISC::CLEAR_BIT(&(Global_Mission_Fail_State.f_20), 17);
	func_372(&(Global_81155[iVar0 /*34*/]), 1, 0);
	if ((Global_81155[iVar0 /*34*/].f_13 != -1 && Global_81155[iVar0 /*34*/].f_14 != -1) && !MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 30))
	{
		iVar1 = GlobalFunc_208(Global_91351.f_1);
		iVar2 = Global_81155[iVar0 /*34*/].f_13;
		iVar3 = Global_81155[iVar0 /*34*/].f_14;
		if (!GlobalFunc_740(iVar1, iVar2, iVar3))
		{
			GlobalFunc_3030(&(Global_91351.f_1), iVar2);
			GlobalFunc_3030(&(Global_93588.f_1), iVar2);
		}
	}
	if (iVar0 == 62)
	{
		Global_91351 = 2;
		Global_93588 = 2;
	}
	if (iVar0 == 20)
	{
		if (Global_91351 == 1)
		{
			Global_91351 = 0;
			Global_93588 = 0;
		}
	}
}


void func_372(char[4] cParam0, int iParam1, int iParam2)//Position - 0x30A97
{
	if (Global_Mission_Fail_State != 10 && Global_Mission_Fail_State != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_374(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_374(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3176C
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = func_132();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_376(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}


void func_376(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x32612
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = GlobalFunc_6674(iParam2);
	}
	if (func_385(iParam2, &iVar0, iParam3, iParam5))
	{
		GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}









int func_385(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x32C72
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_309(*uParam1, GlobalFunc_8315(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}























void func_408(int iParam0)//Position - 0x35ADE
{
	if (iParam0 < 94)
	{
		GlobalFunc_53();
		Global_68500 = iParam0;
		Global_68499 = 0;
		Global_68502 = 1;
	}
}



void func_411(int iParam0)//Position - 0x35B7E
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(1, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPM_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(1, &cVar1);
	}
}

void func_412(var uParam0)//Position - 0x35BD5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0 == -1)
	{
		return;
	}
	if (Global_68242 == *uParam0)
	{
		GlobalFunc_3046(*uParam0, 0);
	}
	if (Global_68241 == *uParam0)
	{
		Global_68241 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68238)
	{
		if (Global_68227[iVar1 /*2*/] == *uParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_68238 - 2))
	{
		Global_68227[iVar2 /*2*/] = Global_68227[iVar2 + 1 /*2*/];
		Global_68227[iVar2 /*2*/].f_1 = Global_68227[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68227[(Global_68238 - 1) /*2*/] = -1;
	Global_68227[(Global_68238 - 1) /*2*/].f_1 = 3;
	Global_68238 = (Global_68238 - 1);
	Global_68239 = 1;
	Global_68240 = MISC::GET_FRAME_COUNT();
	*uParam0 = -1;
}



void func_415()//Position - 0x35D29
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar5 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar4];
		if (GlobalFunc_506(iVar5, &uVar0, &uVar3))
		{
			if (((iVar5 != 8 && iVar5 != 11) && iVar5 != 9) && iVar5 != 10)
			{
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar4] = 318;
			}
		}
		iVar4++;
	}
}

void func_416()//Position - 0x35D91
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 262)
	{
		if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 6)
		{
			iVar1 = iVar0;
			GlobalFunc_5773(iVar1);
		}
		iVar0++;
	}
}





int func_421(int iParam0)//Position - 0x35F9A
{
	switch (iParam0)
	{
		case 62:
		case 15:
			return 0;
			break;
		
		case 47:
			return 1;
			break;
	}
	return 145;
}





void func_426(int iParam0, int iParam1)//Position - 0x360D1
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_433(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}







void func_433(int iParam0, var uParam1, bool bParam2)//Position - 0x369C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11063(iParam0, iVar1, &iVar2, 0))
			{
				func_284(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11062(iParam0, iVar1, &iVar2))
			{
				func_284(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_436(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_436(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}



int func_436(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x36C59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11066(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_436(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			func_518(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11065(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_436(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_7062(iParam0, 1);
			iVar3 = GlobalFunc_11065(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_436(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_7062(iParam0, 11);
				iVar71 = GlobalFunc_7062(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7062(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11065(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_7062(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_436(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_436(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_436(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_436(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_436(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_518(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11066(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_476(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_518(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7062(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7062(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7062(iParam0, 7);
				if (!GlobalFunc_8525(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9000(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_7062(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_436(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7940(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10950(iParam0, 9, iVar97))
						{
							func_436(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_436(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_436(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11066(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11066(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_436(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_436(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_436(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_436(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11175(iParam0, &uVar4))
		{
			func_436(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_436(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_436(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_436(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_436(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}








































void func_476(int iParam0, int iParam1, bool bParam2)//Position - 0x3CDA5
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9757(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_477(iParam0, bParam2, 0);
}

void func_477(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CDE7
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = GlobalFunc_11177(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11176(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}









































void func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4933E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_7062(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_7062(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9757(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9757(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9013(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}











































void func_561(int iParam0)//Position - 0x61443
{
	if (iParam0 == 2)
	{
		if (!GlobalFunc_6687(0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1865950624);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, -1865950624);
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
	}
}


















int func_579(int iParam0)//Position - 0x61C0F
{
	if (iParam0 < 0 || iParam0 > 7)
	{
		return 0;
	}
	if (Global_87300[iParam0 /*17*/].f_1)
	{
		Global_87300[iParam0 /*17*/].f_1 = 0;
		return 1;
	}
	return 0;
}

void func_580(int iParam0)//Position - 0x61C4C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_585(iParam0, iVar0))
		{
			if (GlobalFunc_5984(iVar0, &iVar1, &iVar2))
			{
				if (GlobalFunc_2014(iVar0) != -1)
				{
					func_581(iVar1, iVar2, 0, iParam0);
				}
			}
		}
		iVar0++;
	}
}

int func_581(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x61C95
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	iVar3 = 0;
	if (iParam2 != 0 && iParam3 != -1)
	{
		return 0;
	}
	if (iParam2 == 0 && iParam3 == 94)
	{
		return 0;
	}
	if (iParam2 == 0 && iParam3 == -1)
	{
		return 0;
	}
	if (iVar2 != 10)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, iParam2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2), iParam2);
			iVar3 = 1;
		}
		if (iParam2 == 0)
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_3 = iParam3;
		}
	}
	return iVar3;
}




int func_585(int iParam0, int iParam1)//Position - 0x61E11
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1 || iParam0 == 94)
	{
		return 0;
	}
	uVar0 = Global_81155[iParam0 /*34*/].f_12;
	GlobalFunc_5984(iParam1, &iVar1, &iVar2);
	if (GlobalFunc_5584(uVar0, iVar1) && GlobalFunc_5584(uVar0, iVar2))
	{
		return 1;
	}
	return 0;
}



void func_588(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)//Position - 0x61EC5
{
	func_589(iParam0, iParam1, uParam2, iParam3, uParam4);
	Global_87300[*iParam0 /*17*/].f_3 = 1;
}

void func_589(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x61EE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_87299)
	{
		if (Global_87300[iVar1 /*17*/] == 0)
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		iVar0 = Global_87299;
		Global_87299++;
		if (Global_87299 > 8)
		{
		}
	}
	Global_87300[iVar0 /*17*/] = 1;
	Global_87300[iVar0 /*17*/].f_1 = 0;
	Global_87300[iVar0 /*17*/].f_6 = uParam2;
	Global_87300[iVar0 /*17*/].f_4 = uParam3;
	Global_87300[iVar0 /*17*/].f_7 = -1;
	Global_87300[iVar0 /*17*/].f_5 = iParam1;
	Global_87300[iVar0 /*17*/].f_8 = uParam4;
	if (!MISC::IS_BIT_SET(Global_81155[iParam1 /*34*/].f_15, 27))
	{
		GlobalFunc_507(iParam1, 1);
	}
	*uParam0 = iVar0;
}

bool func_590(int iParam0)//Position - 0x61FA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = GlobalFunc_2014(iVar1);
		iVar3 = GlobalFunc_3050(iVar1);
		if ((iVar2 == 3 || iVar2 == 4) && ((iVar3 == 0 || iVar3 == 1) || iVar3 == 3))
		{
			if (func_585(iParam0, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0 != 0;
}


int func_592(int iParam0)//Position - 0x6203C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = GlobalFunc_Find_Running_Mission(iParam0);
	if (!iVar0 == -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_Running_Missions[iVar1 /*5*/] == -1)
		{
			iVar2 = iVar1;
			bVar3 = false;
		}
		else
		{
			iVar1++;
			if (iVar1 >= 7)
			{
				bVar3 = false;
			}
		}
	}
	if (iVar2 == -1)
	{
		return -1;
	}
	Global_Running_Missions[iVar2 /*5*/] = iParam0;
	return iVar2;
}



void func_595(int iParam0, int iParam1, bool bParam2)//Position - 0x62103
{
	if (bParam2)
	{
		if (GlobalFunc_6687(0))
		{
			func_615(Global_Running_Missions[iParam1 /*5*/].f_2);
		}
		else
		{
			GlobalFunc_7999(Global_Running_Missions[iParam1 /*5*/].f_2);
		}
	}
	else
	{
		GlobalFunc_54(&(Global_Running_Missions[iParam1 /*5*/].f_3));
	}
	GlobalFunc_8306();
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_81155[Global_68514.f_109[iParam0 /*4*/] /*34*/].f_6);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
	GlobalFunc_5841(iParam0);
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}




















void func_615(int iParam0)//Position - 0x62D13
{
	if (!GlobalFunc_6687(0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 7)
	{
		return;
	}
	Global_87297 = 0;
	Global_34913 = 15;
	Global_87300[iParam0 /*17*/].f_7 = -1;
	if (Global_87300[iParam0 /*17*/].f_9 != 262)
	{
		GlobalFunc_2198(Global_87300[iParam0 /*17*/].f_9, 0, 0);
	}
	GlobalFunc_5842(iParam0);
}



int func_618(int iParam0)//Position - 0x62DE4
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (iParam0 % 1000000);
	if (func_620(iVar0))
	{
		return -2;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[func_619(iVar0) /*6*/])
	{
		return -2;
	}
	return -1;
}

int func_619(int iParam0)//Position - 0x62E2C
{
	switch (iParam0)
	{
		case 0:
			return 54;
			break;
		
		case 1:
			return 55;
			break;
		
		case 2:
			return 56;
			break;
		
		case 3:
			return 57;
			break;
		
		case 4:
			return 58;
			break;
	}
	return -1;
}

bool func_620(int iParam0)//Position - 0x62E82
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 4)
	{
		iVar0 = GlobalFunc_5895(iParam0, 0);
		return iVar0 != 1;
	}
	Var1 = { GlobalFunc_5898(iParam0, &iVar7, &uVar8, 0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		return 0;
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	iVar5 = func_622(&Var1, iVar7);
	if (iVar5 <= 0)
	{
		return 0;
	}
	iVar6 = func_621(&(Global_SAVE_DATA.SHRINK_iByte0));
	return iVar5 > iVar6;
}

int func_621(var uParam0)//Position - 0x62F01
{
	return *uParam0 & 31;
}

int func_622(char* sParam0, int iParam1)//Position - 0x62F0F
{
	int iVar0;
	
	iVar0 = -1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return iVar0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL1"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_EXILE"))
	{
		if (iParam1 > 0)
		{
			iVar0 = 8;
		}
		else
		{
			iVar0 = 7;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL2"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_MIC2"))
	{
		iVar0 = 10;
	}
	return iVar0;
}





int func_627(int iParam0)//Position - 0x63318
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (!GlobalFunc_42(iVar0))
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	iVar3 = Global_68514.f_109[iParam0 /*4*/].f_3;
	if (iVar3 <= 0)
	{
		return -2;
	}
	if (iVar1 == 1)
	{
		GlobalFunc_10829(iVar0, iVar2, iVar3, 1, 0);
	}
	else
	{
		GlobalFunc_10608(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_17, iVar1, iVar2, iVar3, 1);
	}
	return -2;
}
























int func_651(int iParam0)//Position - 0x642BB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	bVar2 = GlobalFunc_2345(PLAYER::PLAYER_PED_ID(), iVar0, 0);
	if (iVar1 == 1)
	{
		bVar2 = !bVar2;
	}
	if (bVar2)
	{
		return -2;
	}
	return -1;
}

int func_652(int iParam0)//Position - 0x6430F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_15692 == 4)
	{
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return -1;
		}
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	if (iVar1 != -1)
	{
		if (!GlobalFunc_485(iVar1))
		{
			GlobalFunc_585(iVar1, 1);
		}
	}
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (MISC::IS_BIT_SET(iVar2, 2))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return -1;
		}
	}
	GlobalFunc_2196(1, iVar0, MISC::IS_BIT_SET(iVar2, 0));
	GlobalFunc_2196(2, iVar0, 1);
	Global_68514.f_7 = 1;
	return -2;
}



int func_655(int iParam0)//Position - 0x64433
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	GlobalFunc_8649(iVar0, 0);
	Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/] = 0;
	return -2;
}

int func_656(int iParam0)//Position - 0x64470
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	GlobalFunc_8649(iVar0, 1);
	Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/] = 1;
	return -2;
}

int func_657(int iParam0)//Position - 0x644AD
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(iVar0));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1611[iVar0] = 1;
	}
	else
	{
		PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(iVar0));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1611[iVar0] = 0;
	}
	return -2;
}

int func_658(int iParam0)//Position - 0x6451D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	GlobalFunc_4927(iVar0, bVar1);
	return -2;
}

int func_659(int iParam0)//Position - 0x64560
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	func_660(0, iVar0, iVar1, !bVar2);
	func_660(2, iVar0, iVar1, !bVar2);
	func_660(1, iVar0, iVar1, !bVar2);
	return -2;
}

void func_660(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x645CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_7171(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_661(iParam0, iParam1, iParam2, iVar0);
	}
}

void func_661(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6461E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5846(iParam2, iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_0"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_0"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_0"), iParam3, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_1"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_1"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_1"), iParam3, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_2"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_2"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_2"), iParam3, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_3"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_3"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_3"), iParam3, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_4"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_4"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_4"), iParam3, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_5"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_5"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_5"), iParam3, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}






int func_667(int iParam0)//Position - 0x6548D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	GlobalFunc_9131(iVar0, bVar1, 0);
	GlobalFunc_1293(iVar0);
	return -2;
}




int func_671(int iParam0)//Position - 0x655D7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	bVar2 = MISC::IS_BIT_SET(iVar1, 0);
	bVar3 = MISC::IS_BIT_SET(iVar1, 1);
	func_673(iVar0, bVar2);
	GlobalFunc_5845(iVar0, bVar3);
	return -2;
}


void func_673(int iParam0, bool bParam1)//Position - 0x65695
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_85405[iParam0 /*10*/].f_8, bParam1, 1);
	GlobalFunc_9130(iParam0);
	GlobalFunc_5647(iParam0);
	GlobalFunc_5646(iParam0);
	func_674(iParam0);
}

void func_674(int iParam0)//Position - 0x656F8
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_675(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_675(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_675(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_675(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_675(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_675(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_675(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_675(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_675(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_675(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_675(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_675(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_675(50, 0);
			break;
	}
}

void func_675(int iParam0, int iParam1)//Position - 0x65888
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_677(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_677(int iParam0)//Position - 0x659CF
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_682(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9135(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_8989())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}





void func_682(int iParam0, var uParam1)//Position - 0x661FB
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_132();
	iVar1 = GlobalFunc_208(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (GlobalFunc_5097(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[4])
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (GlobalFunc_5097(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!GlobalFunc_5097(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[26 /*34*/].f_6) == 0)
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[43 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[93 /*34*/].f_6) > 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[10 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!GlobalFunc_5097(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[47 /*34*/].f_6) == 0)
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[70 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[48 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[39 /*34*/].f_6) == 0)
			{
				if (!GlobalFunc_5097(iParam0))
				{
					Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (GlobalFunc_5097(iParam0))
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0], 1, 1);
			}
			break;
	}
}










int func_692(int iParam0)//Position - 0x69C34
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!GlobalFunc_42(iVar0))
	{
		return -2;
	}
	if (func_693(GlobalFunc_237(iVar0), 1))
	{
		return -2;
	}
	return -1;
}

int func_693(int iParam0, bool bParam1)//Position - 0x69C68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_742(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_719(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_696(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_696(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x69E20
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			func_713(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_713((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_Running_Missions[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_Running_Missions[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		func_674(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8311();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

















void func_713(int iParam0, bool bParam1)//Position - 0x6AE5F
{
	func_718(iParam0);
	GlobalFunc_7904(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}





void func_718(int iParam0)//Position - 0x6B102
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar0] = func_132();
	}
}

int func_719(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x6B13C
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			func_741(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_736(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_721(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}


int func_721(int iParam0, bool bParam1)//Position - 0x6B254
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_426(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7939(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_426(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10949(iParam0, 3, 169))
					{
						func_284(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 10))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 50))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 59))
			{
				func_284(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 22))
			{
				func_284(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10949(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 4))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 3))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 82))
			{
				func_284(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 76))
			{
				func_284(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 1))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10949(iParam0, 12, 12))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10949(iParam0, 3, 71))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 7))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 88))
			{
				func_284(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 17))
			{
				func_284(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_284(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}















void func_736(int iParam0)//Position - 0x6C424
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_433(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11064(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11064(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11064(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_433(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}





int func_741(int iParam0, int iParam1, bool bParam2)//Position - 0x6C85A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = func_132();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}

int func_742(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6C9B0
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				func_741(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_736(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_721(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}


int func_744(int iParam0)//Position - 0x6CA90
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = 0;
	if ((Global_68514.f_3590[iParam0 /*2*/].f_1 % 1000000) == 1)
	{
		iVar1 = 1;
	}
	if (iVar0 == 144)
	{
		return -2;
	}
	GlobalFunc_5671(iVar0, iVar1);
	return -2;
}


int func_746(int iParam0)//Position - 0x6CB09
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar6;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	iVar2 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar1];
	if (iVar2 != 318)
	{
		if (!(((iVar2 == 11 || iVar2 == 8) || iVar2 == 9) || iVar2 == 10))
		{
			if (GlobalFunc_506(iVar2, &uVar3, &fVar6))
			{
				return -2;
			}
		}
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar1] = uVar0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar1 /*3*/] = { 0f, 0f, 0f };
	return -2;
}

int func_747(int iParam0)//Position - 0x6CBB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iVar0 /*5*/][iVar1] = 1;
		iVar1++;
	}
	return -2;
}

int func_748(int iParam0)//Position - 0x6CBE4
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if ((Global_68514.f_3590[iParam0 /*2*/].f_1 % 1000000) == 1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	func_675(iVar0, iVar1);
	return -2;
}

int func_749(int iParam0)//Position - 0x6CC2F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 12)
	{
		return -2;
	}
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (MISC::IS_BIT_SET(iVar2, 3))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar1);
	}
	MISC::SET_BIT(&Global_86375, iVar0);
	return -2;
}

int func_750()//Position - 0x6CCD8
{
	if (GlobalFunc_486())
	{
		return -1;
	}
	return -2;
}


int func_752(int iParam0)//Position - 0x6CCFC
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (!GlobalFunc_42(iVar0))
	{
		return -2;
	}
	if (GlobalFunc_236())
	{
		if (Global_87845.f_45 == iVar0)
		{
			return Global_68514.f_109[iParam0 /*4*/].f_1;
		}
		else
		{
			return Global_68514.f_109[iParam0 /*4*/].f_2;
		}
	}
	return Global_68514.f_109[iParam0 /*4*/].f_2;
}

int func_753(int iParam0)//Position - 0x6CD6E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (!GlobalFunc_42(iVar0))
	{
		return -2;
	}
	if (GlobalFunc_8633(iVar0))
	{
		return Global_68514.f_109[iParam0 /*4*/].f_1;
	}
	return Global_68514.f_109[iParam0 /*4*/].f_2;
}

int func_754(int iParam0)//Position - 0x6CDC5
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/])
	{
		return uVar1;
	}
	return uVar2;
}

int func_755(int iParam0)//Position - 0x6CE34
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	if (GlobalFunc_485(0))
	{
		GlobalFunc_585(0, 0);
		return Global_68514.f_4824[iParam0 /*11*/].f_4;
	}
	iVar0 = Global_68514.f_4824[iParam0 /*11*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_68514.f_4824[iParam0 /*11*/].f_1;
	if (iVar1 == 3 || iVar1 == 4)
	{
		return -2;
	}
	iVar2 = Global_68514.f_4824[iParam0 /*11*/].f_2;
	if (iVar2 == 12)
	{
		return -2;
	}
	iVar3 = GlobalFunc_3051(iVar0);
	iVar4 = GlobalFunc_597(iVar3);
	if (iVar4 < 0 || iVar4 >= 5)
	{
		return -2;
	}
	iVar5 = iVar4;
	iVar6 = Global_68514.f_4824[iParam0 /*11*/].f_5;
	bVar7 = MISC::IS_BIT_SET(iVar6, 0);
	bVar8 = MISC::IS_BIT_SET(iVar6, 1);
	switch (iVar1)
	{
		case 0:
			if (iVar5 != 1)
			{
				GlobalFunc_3026(iVar3, 1);
				GlobalFunc_2196(3, iVar0, 0);
				GlobalFunc_2196(1, iVar0, bVar7);
			}
			else if (GlobalFunc_892(3, iVar0))
			{
				if (bVar8)
				{
					GlobalFunc_3026(iVar3, 0);
				}
				GlobalFunc_2196(3, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar2);
					MISC::SET_BIT(&Global_86375, iVar0);
				}
				return Global_68514.f_4824[iParam0 /*11*/].f_3;
			}
			break;
		
		case 1:
			if (iVar5 != 2)
			{
				GlobalFunc_3026(iVar3, 2);
				if (iVar2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar2);
					MISC::SET_BIT(&Global_86375, iVar0);
				}
				GlobalFunc_2196(4, iVar0, 0);
				GlobalFunc_2196(1, iVar0, bVar7);
			}
			else if (GlobalFunc_892(4, iVar0))
			{
				if (bVar8)
				{
					GlobalFunc_3026(iVar3, 0);
				}
				GlobalFunc_2196(4, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar2);
					MISC::SET_BIT(&Global_86375, iVar0);
				}
				switch (iVar0)
				{
					case 0:
						iVar9 = 7;
						break;
					
					case 1:
						iVar9 = 8;
						break;
					
					case 2:
						iVar9 = 9;
						break;
					
					case 3:
						iVar9 = 10;
						break;
					
					case 4:
						iVar9 = 11;
						break;
				}
				iVar10 = GlobalFunc_597(iVar9);
				iVar11 = 0;
				while (iVar11 < Global_86396[iVar10 /*19*/])
				{
					iVar12 = func_757(iVar0, iVar11);
					if (iVar12 != joaat("cities_passed"))
					{
						STATS::STAT_SET_INT(iVar12, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar10 /*6*/][iVar11], 1);
					}
					iVar11++;
				}
				return Global_68514.f_4824[iParam0 /*11*/].f_3;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar13 = 7;
					break;
				
				case 1:
					iVar13 = 8;
					break;
				
				case 2:
					iVar13 = 9;
					break;
				
				case 3:
					iVar13 = 10;
					break;
				
				case 4:
					iVar13 = 11;
					break;
			}
			if (iVar5 != 3)
			{
				GlobalFunc_3026(iVar3, 3);
				GlobalFunc_3026(iVar13, 0);
				GlobalFunc_2196(5, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar2);
					MISC::SET_BIT(&Global_86375, iVar0);
				}
				GlobalFunc_2196(1, iVar0, bVar7);
			}
			else if (GlobalFunc_597(iVar13) != 0 && GlobalFunc_892(5, iVar0))
			{
				if (bVar8)
				{
					GlobalFunc_3026(iVar3, 0);
				}
				GlobalFunc_2196(5, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0]), iVar2);
					MISC::SET_BIT(&Global_86375, iVar0);
				}
				iVar14 = GlobalFunc_597(iVar13);
				iVar15 = func_756(iVar0);
				if (iVar15 != joaat("cities_passed"))
				{
					STATS::STAT_SET_INT(iVar15, iVar14, 1);
				}
				return Global_68514.f_4824[iParam0 /*11*/].f_3;
			}
			break;
	}
	return -1;
}

int func_756(int iParam0)//Position - 0x6D1EA
{
	switch (iParam0)
	{
		case 0:
			return joaat("hcs_jewel_gameplay_choice");
			break;
		
		case 1:
			return joaat("hcs_port_gameplay_choice");
			break;
		
		case 3:
			return joaat("hcs_bureau_gameplay_choice");
			break;
		
		case 4:
			return joaat("hcs_bigs_gameplay_choice");
			break;
	}
	return joaat("cities_passed");
}

int func_757(int iParam0, int iParam1)//Position - 0x6D242
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("hcs_jewel_crew1_choice");
					break;
				
				case 1:
					return joaat("hcs_jewel_crew2_choice");
					break;
				
				case 2:
					return joaat("hcs_jewel_crew3_choice");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("hcs_paleto_crew1_choice");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("hcs_bureau_crew1_choice");
					break;
				
				case 1:
					return joaat("hcs_bureau_crew2_choice");
					break;
				
				case 2:
					return joaat("hcs_bureau_crew3_choice");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("hcs_bigs_crew1_choice");
					break;
				
				case 1:
					return joaat("hcs_bigs_crew2_choice");
					break;
				
				case 2:
					return joaat("hcs_bigs_crew3_choice");
					break;
				
				case 3:
					return joaat("hcs_bigs_crew4_choice");
					break;
				
				case 4:
					return joaat("hcs_bigs_crew5_choice");
					break;
			}
			break;
	}
	return joaat("cities_passed");
}





int func_762(int iParam0)//Position - 0x6D472
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_109[iParam0 /*4*/];
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	if (Global_68514.f_109[iParam0 /*4*/].f_3 == 1)
	{
		iVar4 = iVar3;
		iVar4++;
		GlobalFunc_3052(iVar4, 0, 6);
		iVar3 = iVar4;
	}
	func_763(uVar0, uVar1, iVar3, iVar2);
	return -2;
}

void func_763(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6D4EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_764();
	iVar0 = iParam2;
	iVar1 = uParam1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam3)
	{
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		Global_87459[iVar0 /*25*/][iVar1] = uParam0;
		Global_87456++;
		iVar1++;
		iVar2++;
	}
}

void func_764()//Position - 0x6D54B
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
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!Global_87453)
	{
		Global_87637 = CLOCK::GET_CLOCK_MONTH();
		Global_87636 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		Global_87635 = CLOCK::GET_CLOCK_HOURS();
		Global_87453 = 1;
		Global_87458 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		Global_87457 = CLOCK::GET_CLOCK_HOURS();
		func_768();
		return;
	}
	iVar0 = CLOCK::GET_CLOCK_MONTH();
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = Global_87637;
	iVar4 = Global_87636;
	iVar5 = Global_87635;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_765(iVar4, iVar3, iVar1, iVar0);
	if (iVar11 > 0)
	{
		iVar10 = 0;
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
			iVar8 = 0;
			while (iVar8 < 7)
			{
				iVar9 = 0;
				while (iVar9 < 24)
				{
					if (!Global_87459[iVar6 /*25*/][iVar7] == 0)
					{
						Global_87454++;
						Global_87456 = (Global_87456 - 1);
					}
					Global_87459[iVar6 /*25*/][iVar7] = 0;
					iVar9++;
				}
				iVar8++;
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = (iVar10 + (iVar11 - 1) * 24);
		}
		iVar10 = (iVar10 + (24 - iVar5));
		iVar10 = (iVar10 + (24 - (24 - iVar2)));
		iVar8 = 0;
		iVar7 = Global_87457;
		iVar6 = Global_87458;
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6++;
			}
			if (iVar6 > 6)
			{
				iVar6 = 0;
			}
			if (!Global_87459[iVar6 /*25*/][iVar7] == 0)
			{
				Global_87454++;
				Global_87456 = (Global_87456 - 1);
			}
			Global_87459[iVar6 /*25*/][iVar7] = 0;
			iVar7++;
			iVar8++;
		}
		Global_87457 = (iVar7 - 1);
		Global_87458 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_87637 = iVar0;
			Global_87636 = iVar1;
			Global_87635 = iVar2;
			Global_87458 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
			Global_87457 = CLOCK::GET_CLOCK_HOURS();
			return;
		}
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = (iVar2 - iVar5);
			iVar8 = 0;
			iVar7 = Global_87457;
			iVar6 = Global_87458;
			iVar8 = 0;
			while (iVar8 < iVar10)
			{
				if (!Global_87459[iVar6 /*25*/][iVar7] == 0)
				{
					Global_87454++;
					Global_87456 = (Global_87456 - 1);
				}
				Global_87459[iVar6 /*25*/][iVar7] = 0;
				iVar7++;
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6++;
				}
				if (iVar6 > 6)
				{
					iVar6 = 0;
				}
				iVar8++;
			}
			Global_87457 = iVar7;
			Global_87458 = iVar6;
		}
	}
	if (Global_87454 > Global_87455)
	{
	}
	if ((iVar3 == iVar0 && iVar5 == iVar2) && iVar4 == iVar1)
	{
	}
	else
	{
		Global_87637 = iVar0;
		Global_87636 = iVar1;
		Global_87635 = iVar2;
	}
}

int func_765(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D7E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			iVar1 = (func_766(iParam1) - (func_766(iParam1) - iParam0));
			iVar2 = 0;
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = (iParam3 - iParam1);
				iVar4 = iParam1 + 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iVar3)
				{
					if (iVar4 > 11)
					{
						iVar4 = 0;
					}
					iVar2 = (iVar2 + func_766(iVar4));
					iVar4++;
					iVar0++;
				}
			}
			iVar5 = (func_766(iParam3) - iParam2);
			iVar6 = ((iVar1 + iVar2) + iVar5);
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
		{
			return 0;
		}
		if (iParam2 == iParam0)
		{
			return 0;
		}
		return (iParam2 - iParam0);
	}
	return 0;
}

int func_766(int iParam0)//Position - 0x6D89B
{
	return func_767(iParam0);
}

int func_767(int iParam0)//Position - 0x6D8A9
{
	switch (iParam0)
	{
		case 8:
			return 30;
		
		case 3:
			return 30;
		
		case 5:
			return 30;
		
		case 10:
			return 30;
		
		case 1:
			return 28;
		
		default:
	}
	return 31;
	return 0;
}

void func_768()//Position - 0x6D8F5
{
	int iVar0;
	int iVar1;
	
	Global_87457 = 0;
	Global_87458 = 0;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			Global_87459[iVar0 /*25*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_769();
}

void func_769()//Position - 0x6D943
{
	Global_87457 = 0;
	Global_87458 = 0;
	Global_87635 = CLOCK::GET_CLOCK_HOURS();
	Global_87636 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_87637 = CLOCK::GET_CLOCK_MONTH();
}


int func_771(int iParam0)//Position - 0x6DA0F
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_68514.f_109[iParam0 /*4*/].f_3;
	func_772(uVar0, iVar1, iVar2, 3, 3600000, uVar3, 4);
	return -2;
}

int func_772(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6)//Position - 0x6DA6F
{
	struct<15> Var0;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (MISC::IS_BIT_SET(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls < 30)
	{
		Var0 = uParam0;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_9 = uParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 6);
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls++;
		return 1;
	}
	return 0;
}

int func_773(int iParam0)//Position - 0x6DB75
{
	GlobalFunc_7917(iParam0);
	return -2;
}










int func_783(int iParam0)//Position - 0x6E1EB
{
	GlobalFunc_7917(iParam0);
	return -2;
}

int func_784(int iParam0)//Position - 0x6E1FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_4824[iParam0 /*11*/];
	if (func_794() == iVar0)
	{
		return -2;
	}
	iVar1 = Global_68514.f_4824[iParam0 /*11*/].f_6;
	if (!GlobalFunc_2647(iVar0))
	{
		iVar2 = Global_68514.f_4824[iParam0 /*11*/].f_1;
		iVar3 = Global_68514.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_68514.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_68514.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_68514.f_4824[iParam0 /*11*/].f_5;
		iVar7 = 0;
		if (MISC::IS_BIT_SET(iVar1, 13))
		{
			MISC::SET_BIT(&iVar7, 4);
		}
		if (MISC::IS_BIT_SET(iVar1, 3))
		{
			MISC::SET_BIT(&iVar7, 2);
		}
		else if (MISC::IS_BIT_SET(iVar1, 4))
		{
			MISC::SET_BIT(&iVar7, 3);
		}
		func_785(iVar0, iVar4, iVar2, iVar3, iVar5, iVar6, Global_68514.f_4824[iParam0 /*11*/].f_8, Global_68514.f_4824[iParam0 /*11*/].f_9, Global_68514.f_4824[iParam0 /*11*/].f_10, iVar7);
	}
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_785(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9)//Position - 0x6E316
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = GlobalFunc_779(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = uParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails /*10*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails++;
		return 1;
	}
	else
	{
		Var10 = { GlobalFunc_5593(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, uParam8, iParam9) };
		iVar20 = 0;
		GlobalFunc_5592(&iVar20);
		iVar21 = GlobalFunc_2038(Var10, Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			GlobalFunc_5591(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/]);
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/] = { Var10 };
			GlobalFunc_2037(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (GlobalFunc_2036(Var10))
			{
				GlobalFunc_5591(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/]);
				Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/] = { Var10 };
				GlobalFunc_2037(&Var10);
				return 1;
			}
			else
			{
				if (!GlobalFunc_2036(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/]))
				{
					Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar20 /*10*/] = { Var10 };
					GlobalFunc_2037(&Var10);
					return 1;
				}
				GlobalFunc_2037(&Var10);
				return 1;
			}
		}
		else
		{
			GlobalFunc_5591(Var10);
			GlobalFunc_2037(&Var10);
			return 1;
		}
	}
	return 0;
}









int func_794()//Position - 0x6E707
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Email;
}

int func_795(int iParam0)//Position - 0x6E719
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
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_4824[iParam0 /*11*/];
	if (func_797() == iVar0)
	{
		return -2;
	}
	iVar1 = Global_68514.f_4824[iParam0 /*11*/].f_6;
	if (!GlobalFunc_2647(iVar0))
	{
		iVar2 = Global_68514.f_4824[iParam0 /*11*/].f_1;
		iVar3 = Global_68514.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_68514.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_68514.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_68514.f_4824[iParam0 /*11*/].f_5;
		iVar7 = 0;
		if (MISC::IS_BIT_SET(iVar1, 13))
		{
			MISC::SET_BIT(&iVar7, 4);
		}
		if (MISC::IS_BIT_SET(iVar1, 12))
		{
			MISC::SET_BIT(&iVar7, 1);
		}
		if (MISC::IS_BIT_SET(iVar1, 3))
		{
			MISC::SET_BIT(&iVar7, 2);
		}
		else if (MISC::IS_BIT_SET(iVar1, 4))
		{
			MISC::SET_BIT(&iVar7, 3);
		}
		if (MISC::IS_BIT_SET(iVar1, 9))
		{
			MISC::SET_BIT(&iVar7, 16);
		}
		if (MISC::IS_BIT_SET(iVar1, 8))
		{
			MISC::SET_BIT(&iVar7, 17);
		}
		if (MISC::IS_BIT_SET(iVar1, 10))
		{
			MISC::SET_BIT(&iVar7, 18);
		}
		if (MISC::IS_BIT_SET(iVar1, 11))
		{
			MISC::SET_BIT(&iVar7, 19);
		}
		if (MISC::IS_BIT_SET(iVar1, 18))
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = 1;
		}
		add_text_to_queue(iVar0, iVar4, iVar2, iVar3, iVar5, iVar6, Global_68514.f_4824[iParam0 /*11*/].f_8, Global_68514.f_4824[iParam0 /*11*/].f_9, Global_68514.f_4824[iParam0 /*11*/].f_10, iVar7, iVar8);
	}
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		return -1;
	}
	return -2;
}

int add_text_to_queue(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x6E8A6
{
	struct<14> Var0;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = GlobalFunc_779(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = uParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts /*14*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts++;
		GlobalFunc_5093(0);
		GlobalFunc_5093(1);
		GlobalFunc_5093(2);
		return 1;
	}
	return 0;
}

int func_797()//Position - 0x6E9C1
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Text;
}

int func_798(int iParam0)//Position - 0x6E9D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_6684[iParam0 /*14*/];
	iVar1 = Global_68514.f_6684[iParam0 /*14*/].f_8;
	iVar2 = func_805(iVar1);
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		if (GlobalFunc_2646() == iVar0)
		{
			iVar3 = 0;
			if (func_803())
			{
				if (func_802())
				{
					if (func_801())
					{
						func_800();
						return Global_68514.f_6684[iParam0 /*14*/].f_9;
					}
					else
					{
						func_800();
						return Global_68514.f_6684[iParam0 /*14*/].f_10;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			else
			{
				iVar3 = 1;
			}
			if (iVar3 && !MISC::IS_BIT_SET(iVar2, 10))
			{
				func_800();
				return Global_68514.f_6684[iParam0 /*14*/].f_10;
			}
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		uVar4 = Global_68514.f_6684[iParam0 /*14*/].f_1;
		uVar5 = Global_68514.f_6684[iParam0 /*14*/].f_2;
		iVar6 = Global_68514.f_6684[iParam0 /*14*/].f_3;
		iVar7 = Global_68514.f_6684[iParam0 /*14*/].f_4;
		iVar8 = Global_68514.f_6684[iParam0 /*14*/].f_5;
		iVar9 = Global_68514.f_6684[iParam0 /*14*/].f_6;
		iVar10 = Global_68514.f_6684[iParam0 /*14*/].f_7;
		func_799(iVar0, uVar4, uVar5, iVar8, iVar6, iVar7, 3, iVar9, iVar10, -1, Global_68514.f_6684[iParam0 /*14*/].f_11, Global_68514.f_6684[iParam0 /*14*/].f_12, Global_68514.f_6684[iParam0 /*14*/].f_13, iVar2);
	}
	return -1;
}

int func_799(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13)//Position - 0x6EB48
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (MISC::IS_BIT_SET(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam6 < 3)
	{
		if (iParam6 != iParam5)
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam7);
		Var0.f_5 = iParam8;
		Var0.f_1 = iParam13;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_14 = iParam6;
		Var0.f_10 = iParam9;
		Var0.f_12 = uParam1;
		Var0.f_13 = uParam2;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		Var0.f_9 = uParam12;
		MISC::SET_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam9 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam3 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (MISC::IS_BIT_SET(iParam4, iVar15))
			{
				GlobalFunc_5093(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_800()//Position - 0x6ECCF
{
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Response = 0;
}

bool func_801()//Position - 0x6ECF8
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Response;
}

bool func_802()//Position - 0x6ED0A
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response;
}

bool func_803()//Position - 0x6ED1C
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Answered;
}


int func_805(int iParam0)//Position - 0x6ED40
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_BIT_SET(uParam0, 0))
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (MISC::IS_BIT_SET(iParam0, 1))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	if (MISC::IS_BIT_SET(iParam0, 2))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	if (MISC::IS_BIT_SET(iParam0, 13))
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (MISC::IS_BIT_SET(iParam0, 14))
	{
		MISC::SET_BIT(&iVar0, 12);
	}
	if (MISC::IS_BIT_SET(iParam0, 3))
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 4))
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (MISC::IS_BIT_SET(iParam0, 6))
	{
		MISC::SET_BIT(&iVar0, 10);
	}
	else if (MISC::IS_BIT_SET(iParam0, 7))
	{
		MISC::SET_BIT(&iVar0, 11);
	}
	if (MISC::IS_BIT_SET(iParam0, 19))
	{
		MISC::SET_BIT(&iVar0, 21);
	}
	return iVar0;
}

int func_806(int iParam0)//Position - 0x6EE06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_6684[iParam0 /*14*/];
	if (GlobalFunc_2646() == iVar0)
	{
		if (func_801())
		{
			func_800();
			return Global_68514.f_6684[iParam0 /*14*/].f_9;
		}
		else
		{
			func_800();
			return Global_68514.f_6684[iParam0 /*14*/].f_10;
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		iVar1 = Global_68514.f_6684[iParam0 /*14*/].f_1;
		iVar2 = Global_68514.f_6684[iParam0 /*14*/].f_2;
		iVar3 = Global_68514.f_6684[iParam0 /*14*/].f_3;
		iVar4 = Global_68514.f_6684[iParam0 /*14*/].f_4;
		iVar5 = Global_68514.f_6684[iParam0 /*14*/].f_5;
		uVar6 = Global_68514.f_6684[iParam0 /*14*/].f_6;
		uVar7 = func_805(uVar6);
		func_807(iVar0, iVar3, iVar1, iVar2, 3, iVar4, iVar5, -1, Global_68514.f_6684[iParam0 /*14*/].f_11, Global_68514.f_6684[iParam0 /*14*/].f_12, Global_68514.f_6684[iParam0 /*14*/].f_13, uVar7);
	}
	return -1;
}

int func_807(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11)//Position - 0x6EF0B
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam1);
		Var0.f_1 = uParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = uParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar15))
			{
				GlobalFunc_5093(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

int func_808(int iParam0)//Position - 0x6F08B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_6684[iParam0 /*14*/];
	iVar1 = Global_68514.f_6684[iParam0 /*14*/].f_8;
	uVar2 = func_805(iVar1);
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		if (GlobalFunc_2646() == iVar0)
		{
			func_800();
			return -2;
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		uVar3 = Global_68514.f_6684[iParam0 /*14*/].f_1;
		uVar4 = Global_68514.f_6684[iParam0 /*14*/].f_2;
		uVar5 = Global_68514.f_6684[iParam0 /*14*/].f_13;
		iVar6 = Global_68514.f_6684[iParam0 /*14*/].f_3;
		iVar7 = Global_68514.f_6684[iParam0 /*14*/].f_4;
		iVar8 = Global_68514.f_6684[iParam0 /*14*/].f_5;
		iVar9 = Global_68514.f_6684[iParam0 /*14*/].f_6;
		iVar10 = Global_68514.f_6684[iParam0 /*14*/].f_7;
		func_809(iVar0, uVar3, uVar4, uVar5, iVar8, iVar6, iVar7, 3, iVar9, iVar10, Global_68514.f_6684[iParam0 /*14*/].f_11, Global_68514.f_6684[iParam0 /*14*/].f_12, uVar2);
	}
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_809(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12)//Position - 0x6F1A7
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 < 3)
	{
		if (MISC::IS_BIT_SET(iParam5, iParam6))
		{
			return 0;
		}
	}
	if (iParam7 < 3)
	{
		if (iParam7 != iParam6)
		{
			return 0;
		}
	}
	if (iParam5 < 1 || iParam5 > 7)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		Var0.f_10 = uParam1;
		Var0.f_11 = uParam2;
		Var0.f_9 = uParam3;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam4);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_5 = iParam9;
		Var0.f_1 = uParam12;
		Var0.f_2 = iParam5;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (MISC::IS_BIT_SET(iParam5, iVar15))
			{
				GlobalFunc_5093(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

int func_810(int iParam0)//Position - 0x6F316
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_4824[iParam0 /*11*/];
	iVar1 = Global_68514.f_4824[iParam0 /*11*/].f_1;
	iVar2 = Global_68514.f_4824[iParam0 /*11*/].f_7;
	uVar3 = func_805(iVar2);
	if (MISC::IS_BIT_SET(iVar2, 5))
	{
		if (MISC::IS_BIT_SET(uVar3, 11))
		{
			if (GlobalFunc_2647(iVar1))
			{
				return -1;
			}
			else if (func_797() == iVar1)
			{
				func_811();
				if (GlobalFunc_2646() == iVar0)
				{
					func_800();
				}
				return -2;
			}
		}
		if (GlobalFunc_2646() == iVar0)
		{
			func_800();
			return -2;
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		iVar4 = Global_68514.f_4824[iParam0 /*11*/].f_2;
		iVar5 = Global_68514.f_4824[iParam0 /*11*/].f_3;
		iVar6 = Global_68514.f_4824[iParam0 /*11*/].f_4;
		iVar7 = Global_68514.f_4824[iParam0 /*11*/].f_5;
		iVar8 = Global_68514.f_4824[iParam0 /*11*/].f_6;
		func_807(iVar0, iVar6, iVar4, iVar5, 3, iVar7, iVar8, iVar1, Global_68514.f_4824[iParam0 /*11*/].f_8, Global_68514.f_4824[iParam0 /*11*/].f_9, Global_68514.f_4824[iParam0 /*11*/].f_10, iVar3);
	}
	if (MISC::IS_BIT_SET(iVar2, 5))
	{
		return -1;
	}
	return -2;
}

void func_811()//Position - 0x6F458
{
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Text = -1;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Had_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Response = 0;
}

int func_812(int iParam0)//Position - 0x6F481
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_6684[iParam0 /*14*/];
	uVar1 = Global_68514.f_6684[iParam0 /*14*/].f_8;
	if (MISC::IS_BIT_SET(uVar1, 5))
	{
		if (GlobalFunc_2646() == iVar0)
		{
			func_800();
			return -2;
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		uVar2 = Global_68514.f_6684[iParam0 /*14*/].f_1;
		uVar3 = Global_68514.f_6684[iParam0 /*14*/].f_2;
		uVar4 = Global_68514.f_6684[iParam0 /*14*/].f_13;
		iVar5 = Global_68514.f_6684[iParam0 /*14*/].f_3;
		iVar6 = Global_68514.f_6684[iParam0 /*14*/].f_4;
		iVar7 = Global_68514.f_6684[iParam0 /*14*/].f_5;
		iVar8 = Global_68514.f_6684[iParam0 /*14*/].f_6;
		iVar9 = Global_68514.f_6684[iParam0 /*14*/].f_7;
		uVar10 = func_805(iVar1);
		func_813(iVar0, uVar2, uVar3, uVar4, iVar7, iVar6, iVar5, 3, iVar8, iVar9, Global_68514.f_6684[iParam0 /*14*/].f_11, Global_68514.f_6684[iParam0 /*14*/].f_12, uVar10);
	}
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_813(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12)//Position - 0x6F59D
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		Var0.f_10 = uParam1;
		Var0.f_11 = uParam2;
		Var0.f_9 = uParam3;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = uParam12;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		GlobalFunc_5093(iParam5);
		return 1;
	}
	return 0;
}

int func_814(int iParam0)//Position - 0x6F6FA
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_4824[iParam0 /*11*/];
	uVar1 = Global_68514.f_4824[iParam0 /*11*/].f_6;
	if (MISC::IS_BIT_SET(uVar1, 5))
	{
		if (GlobalFunc_2646() == iVar0)
		{
			func_800();
			return -2;
		}
	}
	if (!GlobalFunc_2647(iVar0))
	{
		iVar2 = Global_68514.f_4824[iParam0 /*11*/].f_1;
		iVar3 = Global_68514.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_68514.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_68514.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_68514.f_4824[iParam0 /*11*/].f_5;
		uVar7 = func_805(iVar1);
		func_815(iVar0, iVar4, iVar3, iVar2, 3, iVar5, iVar6, Global_68514.f_4824[iParam0 /*11*/].f_8, Global_68514.f_4824[iParam0 /*11*/].f_9, Global_68514.f_4824[iParam0 /*11*/].f_10, uVar7);
	}
	if (MISC::IS_BIT_SET(iVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_815(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x6F7F0
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = uParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = uParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		GlobalFunc_5093(iParam2);
		return 1;
	}
	return 0;
}

int func_816(int iParam0)//Position - 0x6F941
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_4824[iParam0 /*11*/];
	if (GlobalFunc_42(GlobalFunc_8315()))
	{
		if (MISC::IS_BIT_SET(uVar0, GlobalFunc_8315()))
		{
			iVar1 = Global_68514.f_4824[iParam0 /*11*/].f_1;
			if (iVar1 == GlobalFunc_8315())
			{
				return -2;
			}
			if (GlobalFunc_665(iVar1))
			{
				return Global_68514.f_4824[iParam0 /*11*/].f_2;
			}
		}
	}
	return Global_68514.f_4824[iParam0 /*11*/].f_3;
}


int func_818(int iParam0)//Position - 0x6FA22
{
	if (iParam0 == -1)
	{
		return -2;
	}
	func_581(Global_68514.f_109[iParam0 /*4*/], Global_68514.f_109[iParam0 /*4*/].f_1, 0, Global_68514.f_109[iParam0 /*4*/].f_2);
	return -2;
}

int func_819(int iParam0)//Position - 0x6FA61
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (GlobalFunc_5985(iVar0, iVar1, 2))
		{
			return -2;
		}
		func_581(iVar0, iVar1, 2, -1);
	}
	else
	{
		if (!GlobalFunc_5985(iVar0, iVar1, 2))
		{
			return -2;
		}
		func_820(iVar0, iVar1, 2);
	}
	return -2;
}

int func_820(int iParam0, int iParam1, int iParam2)//Position - 0x6FAEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	iVar3 = 0;
	if (iVar2 != 10)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, iParam2))
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2), iParam2);
			iVar3 = 1;
		}
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, 0))
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_3 = -1;
		}
	}
	return iVar3;
}


int func_822(int iParam0)//Position - 0x6FBB2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (GlobalFunc_5985(iVar0, iVar1, 1))
		{
			return -2;
		}
		func_581(iVar0, iVar1, 1, -1);
	}
	else
	{
		if (!GlobalFunc_5985(iVar0, iVar1, 1))
		{
			return -2;
		}
		func_820(iVar0, iVar1, 1);
	}
	return -2;
}

int func_823(int iParam0)//Position - 0x6FC3B
{
	if (iParam0 == -1)
	{
		return -2;
	}
	GlobalFunc_8596(Global_68514.f_3590[iParam0 /*2*/], Global_68514.f_3590[iParam0 /*2*/].f_1, 0);
	return -2;
}








int func_831(int iParam0)//Position - 0x6FE8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	switch (iVar0)
	{
		case 0:
			iVar2 = 0;
			break;
		
		case 1:
			iVar2 = 1;
			break;
		
		case 2:
			iVar2 = 2;
			break;
		
		default:
			break;
	}
	GlobalFunc_495(iVar1, iVar2);
	return -2;
}

int func_832(int iParam0)//Position - 0x6FEF7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	switch (iVar0)
	{
		case 0:
			iVar3 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			break;
		
		case 2:
			iVar3 = 2;
			break;
		
		default:
			break;
	}
	GlobalFunc_9621(iVar1, iVar3, bVar2);
	return -2;
}




int func_836(int iParam0)//Position - 0x70246
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (iVar0 == 262)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	GlobalFunc_2198(iVar0, bVar1, 0);
	return -2;
}

int func_837(int iParam0)//Position - 0x70298
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = GlobalFunc_3053(Global_68514.f_3590[iParam0 /*2*/]);
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	func_838(0, iVar0, bVar1, 1);
	func_838(2, iVar0, bVar1, 1);
	func_838(1, iVar0, bVar1, 1);
	return -2;
}

void func_838(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x702F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_7173(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_840(iParam0, iParam1, iVar0);
		if (bParam3)
		{
			func_839(iParam0, iParam1);
		}
	}
}

void func_839(int iParam0, int iParam1)//Position - 0x7034F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = GlobalFunc_4980(iParam1, iVar0);
	while (iVar1 != 0)
	{
		func_660(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = GlobalFunc_4980(iParam1, iVar0);
	}
}

void func_840(int iParam0, int iParam1, int iParam2)//Position - 0x70388
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_4977(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_0"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_2"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}





int func_845(int iParam0)//Position - 0x70CA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	iVar2 = 0;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		iVar2 = 1;
	}
	GlobalFunc_7621(iVar0, iVar1, iVar2, 1, 0);
	return -2;
}






int func_851(int iParam0)//Position - 0x7512F
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (iVar0 == 262)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	GlobalFunc_2439(iVar0, 0, bVar1);
	return -2;
}

int func_852(int iParam0)//Position - 0x75181
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (iVar0 == 262)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_68514.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	GlobalFunc_2439(iVar0, 1, bVar1);
	return -2;
}

int func_853(int iParam0)//Position - 0x751D3
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (iVar0 == 0 || iVar0 == 235)
	{
		return -2;
	}
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	if (iVar1 < 0)
	{
		return -2;
	}
	GlobalFunc_66(iVar0, iVar1);
	return -2;
}

int func_854(int iParam0)//Position - 0x75232
{
	struct<8> Var0;
	var uVar8;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	Var0 = { Global_68514.f_4160[iParam0 /*12*/] };
	uVar8 = Global_68514.f_4160[iParam0 /*12*/].f_8;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Var0)) > 0)
	{
		return -2;
	}
	SCRIPT::REQUEST_SCRIPT(&Var0);
	if (!SCRIPT::HAS_SCRIPT_LOADED(&Var0))
	{
		return -1;
	}
	SYSTEM::START_NEW_SCRIPT(&Var0, uVar8);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var0);
	return -2;
}

int func_855(int iParam0, int iParam1)//Position - 0x752A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = GlobalFunc_Find_Running_Mission(iParam0);
	iVar1 = Global_68514.f_109[iParam0 /*4*/];
	iVar2 = Global_81155[iVar1 /*34*/].f_6;
	if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
	}
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
	if (GlobalFunc_142())
	{
		return -1;
	}
	else if (Global_Mission_Fail_State.f_1 == iParam0)
	{
		if (Global_Mission_Fail_State == 11)
		{
			func_937(iVar1);
			func_595(iParam0, iVar0, 0);
			return Global_68514.f_109[iParam0 /*4*/].f_2;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (iVar0 == -1 || !MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 5))
		{
			return -1;
		}
	}
	if (!GlobalFunc_42(GlobalFunc_8315()))
	{
		return -1;
	}
	if (iVar0 == -1)
	{
		iVar0 = func_592(iParam0);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	uVar3 = Global_Running_Missions[iVar0 /*5*/].f_3;
	if (func_590(iVar1))
	{
		return -1;
	}
	if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 2))
	{
		if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 1))
		{
			if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 3))
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) || MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 19))
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 5;
				}
				if (iVar4 == 5)
				{
					if (Global_35461 != -1)
					{
						uVar3 = Global_35461;
						Global_35461 = -1;
						iVar5 = 1;
					}
					else
					{
						iVar5 = GlobalFunc_7733(&uVar3, iVar4, 0, 0, 0);
					}
				}
				else
				{
					iVar5 = GlobalFunc_7733(&uVar3, iVar4, 0, 0, 0);
				}
				Global_Running_Missions[iVar0 /*5*/].f_3 = uVar3;
				if (iVar5 == 2)
				{
					return -1;
				}
				else if (iVar5 == 0)
				{
					return Global_68514.f_109[iParam0 /*4*/].f_2;
				}
			}
			MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 1);
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/])
			{
				MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
				MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 4);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			}
		}
		if (!Global_131420)
		{
			return -1;
		}
		if (iVar1 != 28)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				if (!Global_54750 && (iVar1 != 27 || !Global_54755))
				{
					if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 7))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
						{
							GlobalFunc_5224();
							return -1;
						}
						else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
						{
							SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
							SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
							MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 7);
						}
						else
						{
							return -1;
						}
					}
				}
				else if (iVar1 == 27)
				{
					MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 7);
				}
			}
		}
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		Global_Running_Missions[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 17000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
		iVar6 = 0;
		if (MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 18))
		{
			iVar6 = 1;
		}
		func_354(iParam0, iVar0, iVar1, iParam1, iVar6);
		return -1;
	}
	bVar7 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_Running_Missions[iVar0 /*5*/].f_4))
	{
		if (bVar7)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1) && Global_89998 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar8 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 4);
	if (bVar8 && bVar7)
	{
		bVar7 = false;
	}
	if (!bVar8 && !bVar7)
	{
		bVar7 = true;
	}
	if (bVar8)
	{
		return func_274(iParam0, iVar0, iVar1, 0, 0);
	}
	return func_228(iParam0, iVar0, iVar1, 0);
}



int func_858(int iParam0, int iParam1)//Position - 0x75805
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = GlobalFunc_Find_Running_Mission(iParam1);
	iVar1 = Global_68514.f_109[iParam1 /*4*/];
	iVar2 = Global_81155[iVar1 /*34*/].f_6;
	if (Global_87287)
	{
		if (Global_87289 == iVar1)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		}
	}
	if (GlobalFunc_142())
	{
		return -1;
	}
	else if (Global_Mission_Fail_State.f_1 == iParam1)
	{
		if (Global_Mission_Fail_State == 11)
		{
			func_937(iVar1);
			func_595(iParam1, iVar0, 1);
			Global_54752 = 0;
			Global_54771 = 0;
			return Global_68514.f_109[iParam1 /*4*/].f_2;
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_592(iParam1);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	iVar3 = Global_Running_Missions[iVar0 /*5*/].f_2;
	if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 3))
	{
		if (iVar3 == -1)
		{
			if (Global_84352[iVar1 /*2*/])
			{
				return -1;
			}
			uVar4 = Global_81155[iVar1 /*34*/].f_11;
			iVar5 = Global_81155[iVar1 /*34*/].f_10;
			if (iVar5 == 262)
			{
				Global_81155[iVar1 /*34*/].f_10 = 161;
				iVar5 = 161;
			}
			if (func_590(iVar1))
			{
				return -1;
			}
			func_864(&iVar3, iVar5, iVar1, iParam0, 6, uVar4);
			if (iVar3 == -1)
			{
				return -1;
			}
			func_580(iVar1);
			Global_Running_Missions[iVar0 /*5*/].f_2 = iVar3;
		}
	}
	if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 2))
	{
		if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 1))
		{
			if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 3))
			{
				if (!func_579(iVar3))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/])
					{
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 4);
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 6);
						if (Global_87289 == iVar1)
						{
							GlobalFunc_562(iVar1);
						}
					}
					else if (func_862(iVar1))
					{
						if (!func_620(func_861(iVar1)))
						{
							GlobalFunc_7999(iVar3);
							func_860(iVar1);
							GlobalFunc_5841(iParam1);
							return Global_68514.f_109[iParam1 /*4*/].f_2;
						}
					}
					return -1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
			MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 1);
			if (!Global_131420)
			{
				return -1;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::GET_ENTITY_HEALTH(iVar6) < 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar6, 1);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar6, 1f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar6, 1f);
						}
						if ((!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 13) && !MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 25)) || (iVar1 == 15 && GlobalFunc_8315() == 1))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar6))
							{
								GlobalFunc_530(iVar6, 2.5f, 2, 0.5f, 1, 1);
							}
						}
					}
				}
			}
			return -1;
		}
		if (iVar1 != 28 && iVar1 != 28)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				if (!MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 7))
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
					{
						GlobalFunc_5224();
						return -1;
					}
					else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
					{
						SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
						MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 7);
					}
					else
					{
						return -1;
					}
				}
			}
		}
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		if ((iVar1 != 15 && iVar1 != 67) && iVar1 != 20)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iVar7 = STREAMING::GET_PLAYER_SWITCH_TYPE();
				if (iVar7 != 3)
				{
					iVar8 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if (iVar8 < 8)
					{
						return -1;
					}
				}
			}
		}
		if (Global_68248 && !Global_68263)
		{
			return -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 13))
				{
					if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 24))
					{
						if (!(iVar1 == 15 && GlobalFunc_8315() == 1))
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 500, 0);
								}
							}
							else
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							return -1;
						}
					}
				}
			}
			if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
			{
				if (Global_68489 == -1)
				{
					Global_68489 = MISC::GET_GAME_TIMER();
					return -1;
				}
				else if ((MISC::GET_GAME_TIMER() - Global_68489) < 400)
				{
					return -1;
				}
			}
		}
		if (Global_68264)
		{
			func_859();
			if (!Global_68249)
			{
				return -1;
			}
			return -1;
		}
		Global_Running_Missions[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 17000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_Running_Missions[iVar0 /*5*/].f_1), 2);
		func_354(iParam1, iVar0, iVar1, iParam0, 1);
		Global_68489 = -1;
		return -1;
	}
	bVar9 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_Running_Missions[iVar0 /*5*/].f_4))
	{
		if (bVar9)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1) && Global_89998 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar10 = MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 4);
	if (bVar10 && bVar9)
	{
		bVar9 = false;
	}
	if (!(bVar10 || bVar9))
	{
		bVar9 = true;
	}
	if (bVar10)
	{
		return func_274(iParam1, iVar0, iVar1, 1, MISC::IS_BIT_SET(Global_Running_Missions[iVar0 /*5*/].f_1, 6));
	}
	return func_228(iParam1, iVar0, iVar1, 1);
}

void func_859()//Position - 0x75E08
{
	if (!Global_68244)
	{
		Global_68244 = 1;
	}
}

void func_860(int iParam0)//Position - 0x75E1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_3 == iParam0)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_2), 0);
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_3 = -1;
				GlobalFunc_6877(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5));
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_8 = 1;
			}
		}
		iVar0++;
	}
}

int func_861(int iParam0)//Position - 0x75EAA
{
	switch (iParam0)
	{
		case 54:
			return 0;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 2;
			break;
		
		case 57:
			return 3;
			break;
		
		case 58:
			return 4;
			break;
	}
	return 5;
}

int func_862(int iParam0)//Position - 0x75EFB
{
	switch (iParam0)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 1;
			break;
	}
	return 0;
}


void func_864(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)//Position - 0x75F54
{
	bool bVar0;
	bool bVar1;
	
	func_589(iParam0, iParam2, uParam3, iParam4, uParam5);
	Global_87300[*iParam0 /*17*/].f_3 = 0;
	Global_87300[*iParam0 /*17*/].f_9 = iParam1;
	GlobalFunc_3056(iParam1);
	if (Global_87300[*iParam0 /*17*/].f_8 != 7)
	{
		bVar0 = false;
		bVar1 = false;
		if (MISC::IS_BIT_SET(Global_87300[*iParam0 /*17*/].f_8, 0))
		{
			GlobalFunc_5986(iParam1, 1, 0, bVar0);
			bVar0 = true;
		}
		if (MISC::IS_BIT_SET(Global_87300[*iParam0 /*17*/].f_8, 1))
		{
			GlobalFunc_5986(iParam1, 1, 1, bVar0);
			if (bVar0 == 1)
			{
				bVar1 = true;
			}
			bVar0 = true;
		}
		if (MISC::IS_BIT_SET(Global_87300[*iParam0 /*17*/].f_8, 2) && !bVar1)
		{
			GlobalFunc_5986(iParam1, 1, 2, bVar0);
		}
	}
	else
	{
		GlobalFunc_5986(iParam1, 0, 0, 0);
	}
	if (GlobalFunc_3055(iParam2))
	{
		GlobalFunc_3054(iParam1, 3);
	}
	else
	{
		GlobalFunc_3054(iParam1, 0);
	}
}





int func_869(int iParam0)//Position - 0x7636A
{
	if (iParam0 == -1)
	{
		return -2;
	}
	GlobalFunc_5207(&(Global_68514.f_4160[iParam0 /*12*/]), 1);
	return -2;
}





int func_874(int iParam0)//Position - 0x765FD
{
	if (iParam0 == -1)
	{
		return -2;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_68514.f_4160[iParam0 /*12*/]), ""))
	{
		GlobalFunc_6677(&(Global_68514.f_4160[iParam0 /*12*/]), (Global_68514.f_4160[iParam0 /*12*/].f_8 % 1000000), 0, -1, Global_68514.f_4160[iParam0 /*12*/].f_9, Global_68514.f_4160[iParam0 /*12*/].f_10, Global_68514.f_4160[iParam0 /*12*/].f_11, 0, 0);
	}
	else
	{
		return -2;
	}
	return -2;
}

int func_875(int iParam0)//Position - 0x76680
{
	int iVar0;
	
	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/]), 1);
	return -2;
}

int func_876(int iParam0)//Position - 0x7669F
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/]), 1);
	if (Global_68514.f_109[iParam0 /*4*/].f_1 == 1)
	{
		GlobalFunc_8950(iVar0);
	}
	return -2;
}



int func_879(int iParam0)//Position - 0x76750
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_880(int iParam0, int iParam1)//Position - 0x767B7
{
	var uVar0;
	
	if (!Global_68514.f_10[iParam0])
	{
		uVar0 = iParam1;
		Global_68514.f_76[iParam0] = uVar0;
		Global_68514.f_10[iParam0] = 1;
	}
	else if (func_881(Global_68514.f_76[iParam0]))
	{
		Global_68514.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

bool func_881(int iParam0)//Position - 0x7680E
{
	return GlobalFunc_7640(func_132(), iParam0);
}



int func_884(int iParam0, int iParam1)//Position - 0x76A08
{
	int iVar0;
	int iVar1;
	
	if (!Global_68514.f_10[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_132();
		if (GlobalFunc_208(iVar1) > iVar0)
		{
			func_116(&iVar1, 0, 0, 0, 1, 0, 0);
		}
		if (GlobalFunc_208(iVar1) != iVar0)
		{
			GlobalFunc_3032(&iVar1, 0);
			GlobalFunc_3031(&iVar1, 0);
			GlobalFunc_3030(&iVar1, iVar0);
		}
		Global_68514.f_76[iParam0] = iVar1;
		Global_68514.f_10[iParam0] = 1;
	}
	else if (func_881(Global_68514.f_76[iParam0]))
	{
		Global_68514.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_885(int iParam0, int iParam1)//Position - 0x76AB5
{
	if (!Global_68514.f_10[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_68514.f_43[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_68514.f_10[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > Global_68514.f_43[iParam0])
	{
		Global_68514.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_886(int iParam0, int iParam1)//Position - 0x76B19
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		return -2;
	}
	if (!Global_68514.f_10[iParam0])
	{
		Global_68514.f_76[iParam0] = func_132();
		iVar0 = Global_68514.f_109[iParam1 /*4*/].f_2;
		iVar1 = Global_68514.f_109[iParam1 /*4*/].f_1;
		iVar2 = Global_68514.f_109[iParam1 /*4*/];
		func_116(&(Global_68514.f_76[iParam0]), iVar0, iVar1, iVar2, 0, 0, 0);
		Global_68514.f_10[iParam0] = 1;
	}
	else if (GlobalFunc_7640(func_132(), Global_68514.f_76[iParam0]))
	{
		Global_68514.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_887(int iParam0)//Position - 0x76BBD
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar1 = Global_68514.f_109[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(uVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(GlobalFunc_208(uVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), GlobalFunc_207(uVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), GlobalFunc_206(uVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(GlobalFunc_209(uVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), GlobalFunc_210(uVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), GlobalFunc_4975(uVar1));
	}
	return -2;
}

int func_888(int iParam0)//Position - 0x76C96
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 57)
	{
		return -2;
	}
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT[iVar0] = 1;
	return -2;
}

int func_889(int iParam0)//Position - 0x76CD0
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 57)
	{
		return -2;
	}
	if (!Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_890(int iParam0)//Position - 0x76D11
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 32)
	{
		return -2;
	}
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_891(int iParam0)//Position - 0x76D81
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 11)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_68514.f_109[iParam0 /*4*/].f_3;
	if (GlobalFunc_892(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_892(int iParam0)//Position - 0x76E0D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 13)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_68514.f_109[iParam0 /*4*/].f_3;
	if (GlobalFunc_597(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_893(int iParam0)//Position - 0x76E81
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_68514.f_109[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 144)
	{
		return -2;
	}
	uVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_68514.f_109[iParam0 /*4*/].f_2;
	if (GlobalFunc_485(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_894(int iParam0)//Position - 0x76EEA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 11)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if (Global_68514.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	GlobalFunc_2196(iVar0, iVar1, bVar2);
	return -2;
}

int func_895(int iParam0)//Position - 0x76F6B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 13)
	{
		return -2;
	}
	iVar1 = Global_68514.f_109[iParam0 /*4*/].f_1;
	GlobalFunc_3026(iVar0, iVar1);
	return -2;
}

int func_896(int iParam0)//Position - 0x76FBC
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 144)
	{
		return -2;
	}
	iVar1 = 0;
	if (Global_68514.f_109[iParam0 /*4*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	GlobalFunc_585(iVar0, iVar1);
	return -2;
}

int func_897(int iParam0)//Position - 0x77015
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_68514.f_3590[iParam0 /*2*/];
	if (iVar0 == -1 || iVar0 == 32)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return -2;
	}
	iVar1 = Global_68514.f_3590[iParam0 /*2*/].f_1;
	iVar2 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/].f_1;
	iVar3 = Global_68514.f_12526[iVar0 /*2*/];
	iVar4 = Global_68514.f_12526[iVar0 /*2*/].f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (Global_68514.f_6825[iVar5 /*3*/] == 531432813)
		{
			iVar6 = Global_68514.f_6825[iVar5 /*3*/].f_2;
			iVar7 = Global_68514.f_109[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/].f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_898(int iParam0)//Position - 0x77141
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 256)
	{
		return -2;
	}
	return iVar0;
}

int func_899(int iParam0)//Position - 0x7716F
{
	int iVar0;
	
	if (iParam0 < -1 || iParam0 > 32)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/]), 2);
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/]), 1);
	}
	return -2;
}

int func_900(int iParam0)//Position - 0x771F7
{
	int iVar0;
	
	if (iParam0 < -1 || iParam0 > 32)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/]), 1);
	return -2;
}

void func_901()//Position - 0x77257
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_47++;
	if (iLocal_47 >= 94)
	{
		iLocal_47 = 0;
	}
	func_931();
	func_930();
	func_924();
	if (Global_68500 > -1)
	{
		if (Global_68502 == 1)
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = Global_68500;
			if (((iVar2 == 76 || iVar2 == 4) || iVar2 == 84) || iVar2 == 50)
			{
				iVar0 = 1;
			}
			func_912(Global_68251, 0, 0, iVar0, iVar1, 0);
		}
	}
	func_902();
}

void func_902()//Position - 0x772D7
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
	
	if (!iLocal_53)
	{
		STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iVar0, -1);
		STATS::STAT_GET_INT(joaat("sp0_kills_cop"), &iVar1, -1);
		STATS::STAT_GET_INT(joaat("sp0_kills_swat"), &iVar2, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_cars"), &iVar4, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_bikes"), &iVar5, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_quadbikes"), &iVar6, -1);
		STATS::STAT_GET_INT(joaat("sp0_large_accidents"), &iVar7, -1);
		iLocal_49 = iVar0;
		iLocal_50 = (((iVar0 + iVar1) + iVar2) + iVar3);
		iLocal_51 = ((iVar4 + iVar5) + iVar6);
		iLocal_52 = iVar7;
		iLocal_53 = 1;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_48)
	{
		func_911();
		func_910();
		func_909();
		func_907();
		STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iVar0, -1);
		STATS::STAT_GET_INT(joaat("sp0_kills_cop"), &iVar1, -1);
		STATS::STAT_GET_INT(joaat("sp0_kills_swat"), &iVar2, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_cars"), &iVar4, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_bikes"), &iVar5, -1);
		STATS::STAT_GET_INT(joaat("sp0_number_stolen_quadbikes"), &iVar6, -1);
		STATS::STAT_GET_INT(joaat("sp0_large_accidents"), &iVar7, -1);
		if (iLocal_49 < iVar0)
		{
			iVar8 = 0;
			while (iVar8 < (iVar0 - iLocal_49))
			{
				GlobalFunc_5987(1);
				iVar8++;
			}
			iLocal_49 = iVar0;
		}
		if (iLocal_50 < (((iVar0 + iVar1) + iVar2) + iVar3))
		{
			iVar8 = 0;
			while (iVar8 < ((((iVar0 + iVar1) + iVar2) + iVar3) - iLocal_50))
			{
				GlobalFunc_5987(4);
				iVar8++;
			}
			iLocal_50 = (((iVar0 + iVar1) + iVar2) + iVar3);
		}
		if (iLocal_51 < ((iVar4 + iVar5) + iVar6))
		{
			iVar8 = 0;
			while (iVar8 < (((iVar4 + iVar5) + iVar6) - iLocal_51))
			{
				GlobalFunc_5987(7);
				iVar8++;
			}
			iLocal_51 = ((iVar4 + iVar5) + iVar6);
		}
		if (iLocal_52 < iVar7)
		{
			iVar8 = 0;
			while (iVar8 < (iVar7 - iLocal_52))
			{
				GlobalFunc_5987(9);
				iVar8++;
			}
			iLocal_52 = iVar7;
		}
		if (GlobalFunc_8315() == 0 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
			{
				GlobalFunc_5987(0);
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 && (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("ShopRobberies")) <= 0 || GlobalFunc_5894(5) <= 0))
			{
				GlobalFunc_5987(2);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 1)
			{
				GlobalFunc_5987(8);
			}
		}
		iLocal_48 += 2000;
	}
}





void func_907()//Position - 0x77730
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = iVar1;
		switch (iVar0)
		{
			case 0:
				func_908(&Global_86835, 1, 5760000);
				break;
			
			case 1:
				func_908(&Global_86837, 3, 5760000);
				break;
			
			case 2:
				func_908(&Global_86841, 1, 5760000);
				break;
			
			case 3:
				func_908(&Global_86843, 1, 300000);
				break;
			
			case 4:
				func_908(&Global_86845, 1, 5760000);
				break;
			
			case 5:
				func_908(&Global_86847, 1, 5760000);
				break;
			
			case 6:
				func_908(&Global_86849, 1, 5760000);
				break;
			
			case 7:
				func_908(&Global_86851, 2, 5760000);
				break;
			
			case 8:
				func_908(&Global_86854, 1, 5760000);
				break;
			
			case 9:
				func_908(&Global_86856, 1, 5760000);
				break;
		}
		iVar1++;
	}
}

void func_908(var uParam0, int iParam1, int iParam2)//Position - 0x77832
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - (*uParam0)[iVar0]) > iParam2)
			{
				(*uParam0)[iVar0] = 0;
			}
			else
			{
				iVar0 = iParam1;
			}
		}
		iVar0++;
	}
}

void func_909()//Position - 0x77875
{
	if (Global_86834 > 0 && (MISC::GET_GAME_TIMER() - Global_86834) > 5760000)
	{
		Global_86834 = 0;
	}
}

void func_910()//Position - 0x7789E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_86832[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - Global_86832[iVar0]) > 5760000)
			{
				Global_86832[iVar0] = 0;
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar0++;
	}
}

void func_911()//Position - 0x778E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_86829[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - Global_86829[iVar0]) > 5760000)
			{
				Global_86829[iVar0] = 0;
			}
			else
			{
				iVar0 = 2;
			}
		}
		iVar0++;
	}
}

void func_912(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x77930
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}












void func_924()//Position - 0x7810A
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (Global_68248)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_68251, "NONE"))
		{
			if (Global_68261 == -1)
			{
				func_929(&Global_68261, 2);
			}
			else
			{
				switch (GlobalFunc_3058(Global_68261))
				{
					case 1:
						if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							iVar0 = GlobalFunc_8315();
							if (GlobalFunc_42(iVar0))
							{
								if (Global_68257[iVar0] != -1)
								{
									SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(Global_81155[Global_68250 /*34*/].f_6);
									if (Global_68257[iVar0] == 0)
									{
										CUTSCENE::REQUEST_CUTSCENE(&Global_68251, 8);
									}
									else
									{
										uVar1 = Global_68257[iVar0];
										CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(&Global_68251, uVar1, 8);
									}
									if (Global_68250 != -1)
									{
										if (MISC::IS_BIT_SET(Global_2621447[Global_68250], 2))
										{
											STREAMING::_0xF8155A7F03DDFC8E(1);
										}
										else if (MISC::IS_BIT_SET(Global_81155[Global_68250 /*34*/].f_15, 29))
										{
											STREAMING::_0xF8155A7F03DDFC8E(3);
										}
										else
										{
											STREAMING::_0xF8155A7F03DDFC8E(2);
										}
									}
									else
									{
										STREAMING::_0xF8155A7F03DDFC8E(2);
									}
									Global_68264 = 1;
									Global_68263 = 1;
									GlobalFunc_3046(Global_68261, 1);
								}
							}
						}
						break;
					
					case 2:
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::_0xF8155A7F03DDFC8E(0);
						Global_68264 = 0;
						Global_68263 = 0;
						GlobalFunc_3046(Global_68261, 0);
						break;
					}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!CUTSCENE::IS_CUTSCENE_PLAYBACK_FLAG_SET(1))
				{
					while (Global_68443 > 0)
					{
						iVar2 = (Global_68443 - 1);
						if (!PED::IS_PED_INJURED(Global_68444[iVar2 /*2*/].f_1))
						{
							func_926(&(Global_68270[Global_68444[iVar2 /*2*/] /*6*/]), Global_68444[iVar2 /*2*/].f_1, 0, 2);
						}
						Global_68444[iVar2 /*2*/] = -1;
						Global_68444[iVar2 /*2*/].f_1 = 0;
						Global_68443 = (Global_68443 - 1);
					}
					while (Global_68429 > 0)
					{
						iVar3 = (Global_68429 - 1);
						if (Global_68430[iVar3 /*3*/].f_2 != -99)
						{
							func_925(&(Global_68270[Global_68430[iVar3 /*3*/] /*6*/]), Global_68430[iVar3 /*3*/].f_1, Global_68430[iVar3 /*3*/].f_2);
						}
						Global_68430[iVar3 /*3*/] = -1;
						Global_68430[iVar3 /*3*/].f_1 = 0;
						Global_68430[iVar3 /*3*/].f_2 = -99;
						Global_68429 = (Global_68429 - 1);
					}
					while (Global_68307 > 0)
					{
						iVar4 = (Global_68307 - 1);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(&(Global_68270[Global_68308[iVar4 /*4*/] /*6*/]), Global_68308[iVar4 /*4*/].f_1, Global_68308[iVar4 /*4*/].f_2, Global_68308[iVar4 /*4*/].f_3, 0);
						Global_68308[iVar4 /*4*/] = -1;
						Global_68308[iVar4 /*4*/].f_1 = 0;
						Global_68308[iVar4 /*4*/].f_2 = 0;
						Global_68308[iVar4 /*4*/].f_3 = 0;
						Global_68307 = (Global_68307 - 1);
					}
					while (Global_68455 > 0)
					{
						iVar5 = (Global_68455 - 1);
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(&(Global_68270[Global_68456[iVar5 /*4*/] /*6*/]), Global_68456[iVar5 /*4*/].f_1, Global_68456[iVar5 /*4*/].f_2, Global_68456[iVar5 /*4*/].f_3, 0);
						Global_68456[iVar5 /*4*/] = -1;
						Global_68456[iVar5 /*4*/].f_1 = 0;
						Global_68456[iVar5 /*4*/].f_2 = 0;
						Global_68456[iVar5 /*4*/].f_3 = 0;
						Global_68455 = (Global_68455 - 1);
					}
				}
				Global_68249 = 1;
				GlobalFunc_3047();
			}
		}
	}
	if (Global_68262)
	{
		if (Global_68250 != -1)
		{
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_81155[Global_68250 /*34*/].f_6);
		}
		Global_68250 = -1;
		Global_68257[0] = -1;
		Global_68257[1] = -1;
		Global_68257[2] = -1;
		Global_68248 = 0;
		Global_68249 = 0;
		Global_68264 = 0;
		Global_68263 = 0;
		if (Global_68261 != -1)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::_0xF8155A7F03DDFC8E(0);
			func_412(&Global_68261);
		}
		iVar6 = 0;
		while (iVar6 < Global_68307)
		{
			Global_68308[iVar6 /*4*/] = -1;
			Global_68308[iVar6 /*4*/].f_1 = 0;
			Global_68308[iVar6 /*4*/].f_2 = 0;
			Global_68308[iVar6 /*4*/].f_3 = 0;
			iVar6++;
		}
		Global_68307 = 0;
		iVar6 = 0;
		while (iVar6 < Global_68429)
		{
			Global_68430[iVar6 /*3*/] = -1;
			Global_68430[iVar6 /*3*/].f_1 = 0;
			Global_68430[iVar6 /*3*/].f_2 = -99;
			iVar6++;
		}
		Global_68429 = 0;
		iVar6 = 0;
		while (iVar6 < Global_68443)
		{
			Global_68444[iVar6 /*2*/] = -1;
			Global_68444[iVar6 /*2*/].f_1 = 0;
			iVar6++;
		}
		Global_68443 = 0;
		iVar6 = 0;
		while (iVar6 < Global_68455)
		{
			Global_68456[iVar6 /*4*/] = -1;
			Global_68456[iVar6 /*4*/].f_1 = 0;
			Global_68456[iVar6 /*4*/].f_2 = 0;
			Global_68456[iVar6 /*4*/].f_3 = 0;
			iVar6++;
		}
		Global_68455 = 0;
		GlobalFunc_3047();
		iVar6 = 0;
		while (iVar6 < 3)
		{
			Global_68265[iVar6] = 0;
			iVar6++;
		}
		Global_68262 = 0;
	}
	if (Global_68264)
	{
		if (Global_68250 != -1)
		{
			if (MISC::IS_BIT_SET(Global_2621447[Global_68250], 2))
			{
				STREAMING::_0xF8155A7F03DDFC8E(1);
			}
			else if (MISC::IS_BIT_SET(Global_81155[Global_68250 /*34*/].f_15, 29))
			{
				STREAMING::_0xF8155A7F03DDFC8E(3);
			}
			else
			{
				STREAMING::_0xF8155A7F03DDFC8E(2);
			}
		}
		else
		{
			STREAMING::_0xF8155A7F03DDFC8E(2);
		}
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(&Global_68251))
		{
			Global_68264 = 0;
			Global_68248 = 0;
		}
	}
}

void func_925(var uParam0, int iParam1, int iParam2)//Position - 0x7860C
{
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar46;
	
	uVar15 = 9;
	uVar30 = { GlobalFunc_7617(iParam1, iParam2) };
	iVar46 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99)
	{
		iVar46 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14)
	{
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar15 = { GlobalFunc_7616(iParam1, uVar30[iVar28]) };
				iVar29 = 0;
				while (iVar29 <= 8)
				{
					iVar25 = iVar29;
					iVar26 = GlobalFunc_40(iVar25);
					iVar27 = GlobalFunc_29(iVar26);
					if (uVar15[iVar29] != iVar27)
					{
						Var1 = { GlobalFunc_10836(iParam1, 14, uVar15[iVar29]) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else
			{
				Var1 = { GlobalFunc_10836(iParam1, iVar0, uVar30[iVar28]) };
				if (((iVar28 == 2 || iVar28 == 0) && iVar46) || uVar30[iVar28] == -99)
				{
					Var1.f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/][iVar28];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(uParam0, GlobalFunc_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}

void func_926(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x78769
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	GlobalFunc_10947(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(uParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}



void func_929(var uParam0, int iParam1)//Position - 0x78ACB
{
	bool bVar0;
	int iVar1;
	
	if (Global_68238 < 5)
	{
		Global_68227[Global_68238 /*2*/] = 0;
		Global_68227[Global_68238 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_68238)
			{
				if (Global_68227[iVar1 /*2*/] == Global_68227[Global_68238 /*2*/])
				{
					Global_68227[Global_68238 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*uParam0 = Global_68227[Global_68238 /*2*/];
		Global_68238++;
		Global_68239 = 1;
	}
	else
	{
		*uParam0 = -1;
	}
}

void func_930()//Position - 0x78B69
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_Running_Missions[iVar0 /*5*/] != -1)
		{
			iVar1 = Global_68514.f_109[Global_Running_Missions[iVar0 /*5*/] /*4*/];
			if (iVar1 != -1)
			{
				if (Global_84352[iVar1 /*2*/])
				{
					if (Global_81155[iVar1 /*34*/].f_10 != 262)
					{
						if (Global_81155[iVar1 /*34*/].f_7 != Global_Mission_Fail_State.f_1 || !GlobalFunc_142())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_8315() <= 2)
								{
									iVar2 = Global_81155[iVar1 /*34*/].f_10;
									if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 19))
									{
										Var3 = { Global_Mission_Blips[iVar2 /*23*/][GlobalFunc_8315() /*3*/] };
									}
									else
									{
										Var3 = { Global_Mission_Blips[iVar2 /*23*/][0 /*3*/] };
									}
									fVar6 = Global_84352[iVar1 /*2*/].f_1;
									fVar7 = (fVar6 * fVar6);
									fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var3);
									if (fVar8 > fVar7 || MISC::IS_BIT_SET(Global_2621447[iVar1], 1))
									{
										Global_84352[iVar1 /*2*/] = 0;
										Global_2544857 = 0;
										if (MISC::IS_BIT_SET(Global_2621447[iVar1], 1))
										{
											MISC::CLEAR_BIT(&(Global_2621447[iVar1]), 1);
										}
									}
								}
							}
						}
					}
					else
					{
						Global_84352[iVar1 /*2*/] = 0;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_931()//Position - 0x78CB1
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 1))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/]), 1);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
}

void func_932()//Position - 0x78CF8
{
	func_933();
	GlobalFunc_53();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_933()//Position - 0x78D0C
{
	Global_68262 = 1;
	func_924();
}

void func_934()//Position - 0x78D1D
{
	Global_89997 = 0;
	Global_1312466 = MISC::GET_GAME_TIMER();
	func_935(1);
}

void func_935(int iParam0)//Position - 0x78D37
{
	int iVar0;
	
	if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides)
		{
			if (Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] != -1)
			{
				if (iParam0 || !Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar0])
				{
					Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] /*3*/].f_1 = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_OVERRIDE_ARRAY[iVar0];
					Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0] /*3*/].f_2 = Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_COMMAND_POINTER_HASH_ID_ARRAY[iVar0];
					if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0] != -1)
					{
						if (GlobalFunc_3059(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0]) == Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar0])
						{
							GlobalFunc_8649(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISSION_TO_UNCOMPLETE[iVar0], 0);
						}
					}
				}
			}
			iVar0++;
		}
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Answered = 0;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response = 0;
	}
}


void func_937(int iParam0)//Position - 0x79174
{
	var uVar0;
	
	HUD::SET_MISSION_NAME(0, 0);
	if (Global_87289 == iParam0)
	{
		if (iParam0 != 77)
		{
			Global_87293 = 1;
		}
	}
	GlobalFunc_5207("TRIG_FT", 1);
	GlobalFunc_5207("TRIG_F", 1);
	GlobalFunc_5207("TRIG_T", 1);
	GlobalFunc_5207("TRIG_MT", 1);
	GlobalFunc_5207("TRIG_M", 1);
	GlobalFunc_5207("TRIG_T", 1);
	func_952();
	GlobalFunc_5848();
	Global_97344 = (MISC::GET_GAME_TIMER() - 120000);
	func_860(iParam0);
	func_561(GlobalFunc_8315());
	if (Global_86395)
	{
		Global_86395 = 0;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_BRIEF();
	GlobalFunc_53();
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_3061(30000);
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	Global_24491 = MISC::GET_GAME_TIMER();
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	}
	uVar0 = Global_81155[iParam0 /*34*/].f_12;
	if (GlobalFunc_747(uVar0, 1))
	{
		GlobalFunc_3060(0);
		GlobalFunc_3060(4);
		GlobalFunc_3060(8);
		GlobalFunc_3060(9);
		GlobalFunc_3060(10);
	}
	if (GlobalFunc_747(uVar0, 2))
	{
		GlobalFunc_3060(1);
		GlobalFunc_3060(4);
		GlobalFunc_3060(8);
		GlobalFunc_3060(5);
	}
	if (GlobalFunc_747(uVar0, 4))
	{
		GlobalFunc_3060(2);
		GlobalFunc_3060(4);
		GlobalFunc_3060(5);
		GlobalFunc_3060(9);
		GlobalFunc_3060(11);
	}
	if (GlobalFunc_747(uVar0, 8))
	{
		GlobalFunc_3060(19);
	}
	if (GlobalFunc_747(uVar0, 16))
	{
		GlobalFunc_3060(14);
	}
	if (GlobalFunc_747(uVar0, 32))
	{
		GlobalFunc_3060(17);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("buddyDeathResponse");
	Global_87285 = -15;
	GlobalFunc_9132(0);
	GlobalFunc_748(0);
	GlobalFunc_3002(0);
	GlobalFunc_52(1, 1);
	func_263();
	Global_89752[0 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/] };
	Global_89752[1 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/] };
	Global_89752[2 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/] };
	AUDIO::TRIGGER_MUSIC_EVENT("GLOBAL_KILL_MUSIC");
	GlobalFunc_51();
	Global_24747 = 0;
	Global_68514.f_9 = -1;
	Global_68507 = -1;
}















void func_952()//Position - 0x7980F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 8);
		iVar0++;
	}
}

