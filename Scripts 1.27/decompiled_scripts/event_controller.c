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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
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
	fLocal_46 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_127();
		func_1();
	}
}

void func_1()//Position - 0xA2
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
			switch (iVar7)
			{
				case 186:
					func_124();
					break;
				
				case 187:
					func_123();
					break;
				
				case 188:
					func_117(iVar2);
					break;
				
				case 189:
					func_116(iVar2);
					break;
				
				case 190:
					func_107(iVar2);
					break;
				
				case 208:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		iLocal_88 = 1;
		switch (iVar0)
		{
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &uVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_47002.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_47002.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &uVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_47002.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_47002.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_47002 = iVar3;
	Global_47002.f_12 = iVar4;
	Global_47002.f_24 = iVar5;
	Global_47002.f_36 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24B
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x258
{
	struct<39> Var0;
	int iVar39;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar39 = NETWORK::_0x742B58F723233ED9(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar39) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
				{
					func_53(iVar39);
				}
				else
				{
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
				}
				func_52(Var0.f_37, -1);
			}
			else if (func_45())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)//Position - 0x2F5
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44())
		{
			func_43(uParam22);
			return 0;
		}
		if (func_42())
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&Param23))
		{
			func_43(uParam22);
			return 0;
		}
		if (Global_14336)
		{
			func_43(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_41())
		{
			if (!func_40(0))
			{
				if (bVar1)
				{
					func_43(uParam22);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_39(PLAYER::PLAYER_ID()))
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param6))
	{
		func_43(uParam22);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_43(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_38(Var2);
	if (iVar18 != -1)
	{
		func_35(iVar18);
	}
	uVar19 = NETWORK::_0x742B58F723233ED9(uParam22);
	iVar20 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2394796[iVar21 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2394796[iVar21 /*4*/].f_2)
		{
			Global_2394796[iVar21 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
			iVar21 = 12;
			func_43(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_34(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_33(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_31(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_30(iVar34, Var22.f_1);
		iVar33 = func_29(&Var22);
		Var36 = { func_28(&Var22, 0) };
		Var52 = { func_27(&Var22) };
		iVar69 = 1;
		iVar68 = func_26(&Var22, 0);
		iVar73 = func_25(&Var22);
		bVar74 = func_20(&Var22);
		if (!bVar74)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar75 = false;
		if (func_18(PLAYER::PLAYER_ID()))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar75 = true;
			}
			else
			{
				func_43(uParam22);
				if ((MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_17();
				}
				else
				{
					func_15(0);
				}
				return 0;
			}
		}
		if (!bVar75)
		{
			if (func_13(PLAYER::PLAYER_ID()))
			{
				func_43(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!func_12())
		{
			func_43(uParam22);
			bVar76 = true;
			func_15(bVar76);
			return 0;
		}
		bVar77 = false;
		if (!bVar75)
		{
			if (func_7(Param23, &bVar77))
			{
				func_43(uParam22);
				func_15(bVar77);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar78 = Global_1335217;
	if (iVar78 >= 12)
	{
		iVar78 = (iVar78 - 1);
	}
	iVar79 = (iVar78 - 1);
	while (iVar79 >= 0)
	{
		Global_2392870[iVar78 /*95*/] = { Global_2392870[iVar79 /*95*/] };
		iVar78 = (iVar78 - 1);
		iVar79 = (iVar79 - 1);
	}
	Global_1335217++;
	if (Global_1335217 > 12)
	{
		Global_1335217 = 12;
	}
	iVar80 = 0;
	Global_2392870[iVar80 /*95*/] = 0;
	Global_2392870[iVar80 /*95*/].f_1 = 0;
	Global_2392870[iVar80 /*95*/].f_5 = 0;
	Global_2392870[iVar80 /*95*/].f_2 = iVar70;
	Global_2392870[iVar80 /*95*/].f_3 = 0;
	Global_2392870[iVar80 /*95*/].f_4 = iVar71;
	Global_2392870[iVar80 /*95*/].f_6 = { Param0 };
	Global_2392870[iVar80 /*95*/].f_12 = { Param6 };
	StringCopy(&(Global_2392870[iVar80 /*95*/].f_28), "", 64);
	Global_2392870[iVar80 /*95*/].f_46 = iVar34;
	Global_2392870[iVar80 /*95*/].f_47 = iVar32;
	Global_2392870[iVar80 /*95*/].f_48 = iVar33;
	Global_2392870[iVar80 /*95*/].f_88 = uParam22;
	Global_2392870[iVar80 /*95*/].f_54 = { Var36 };
	Global_2392870[iVar80 /*95*/].f_70 = { Var52 };
	Global_2392870[iVar80 /*95*/].f_49 = iVar68;
	Global_2392870[iVar80 /*95*/].f_50 = 0;
	Global_2392870[iVar80 /*95*/].f_50.f_1 = 0;
	Global_2392870[iVar80 /*95*/].f_50.f_2 = 0;
	Global_2392870[iVar80 /*95*/].f_53 = iVar69;
	Global_2392870[iVar80 /*95*/].f_87 = uParam36;
	Global_2392870[iVar80 /*95*/].f_89 = -1;
	Global_2392870[iVar80 /*95*/].f_90 = iVar72;
	Global_2392870[iVar80 /*95*/].f_91 = Global_2394848;
	Global_2392870[iVar80 /*95*/].f_92 = iVar73;
	if (Global_2392870[iVar80 /*95*/].f_47 == 0)
	{
		if (Global_2392870[iVar80 /*95*/].f_48 == 1)
		{
			Global_2392870[iVar80 /*95*/].f_53 = 0;
		}
	}
	Global_2392870[iVar80 /*95*/].f_93 = func_6(Param23, iVar80);
	Global_2392870[iVar80 /*95*/].f_94 = 0;
	Global_2392870[iVar80 /*95*/].f_86 = iParam37;
	Global_2394848++;
	Global_2392870[iVar80 /*95*/].f_44 = func_5(Param23);
	if (Global_2392870[iVar80 /*95*/].f_44 != -1)
	{
		Global_2392870[iVar80 /*95*/].f_45 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x816
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x851
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
	{
		return 0;
	}
	if (Global_2392870[iParam13 /*95*/].f_87 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x87A
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1))
	{
		return 1;
	}
	Var0 = { func_8(PLAYER::PLAYER_ID()) };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &uParam0))
	{
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x8DE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x8F5
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x950
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x9C8
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()//Position - 0xA23
{
	if (!MISC::IS_XBOX360_VERSION())
	{
		return 1;
	}
	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

int func_13(int iParam0)//Position - 0xA3B
{
	if (!func_14(iParam0))
	{
		if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xA64
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)//Position - 0xA90
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_2394845)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2394845 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)//Position - 0xAE6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_17()//Position - 0xAFD
{
	int iVar0;
	
	if (!MISC::IS_XBOX360_VERSION() && !MISC::IS_PS3_VERSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_2394845)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2394845 = (iVar0 + 1800000);
}

int func_18(int iParam0)//Position - 0xB53
{
	if (!func_14(iParam0))
	{
		if (!func_19())
		{
			return 1;
		}
	}
	return 0;
}

int func_19()//Position - 0xB72
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, 0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, 0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(var uParam0)//Position - 0xBF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return MISC::IS_BIT_SET(Global_2394850.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return MISC::IS_BIT_SET(Global_2397607.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return MISC::IS_BIT_SET(Global_794503.f_4[iVar1 /*86*/].f_76, 14);
		
		case 62:
			return MISC::IS_BIT_SET(Global_903016.f_1204[iVar1 /*86*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_21(var uParam0)//Position - 0xCD4
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794503.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794503.f_4[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794503.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (MISC::IS_BIT_SET(Global_794503.f_4[iVar0 /*86*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794503.f_4[iVar0 /*86*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_903016.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_903016.f_1204[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_903016.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (MISC::IS_BIT_SET(Global_903016.f_1204[iVar0 /*86*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_903016.f_1204[iVar0 /*86*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_944662.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_944662.f_5[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_944662.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_944662.f_5[iVar0 /*86*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_944662.f_5[iVar0 /*86*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_22(var uParam0)//Position - 0xF44
{
	if (Global_2397607)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2397607.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_23(int iParam0)//Position - 0xF69
{
	return iParam0 == 9999;
}

int func_24(var uParam0)//Position - 0xF77
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2394850.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2394850.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_2394850.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_25(var uParam0)//Position - 0xFDA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return MISC::IS_BIT_SET(Global_2394850.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return MISC::IS_BIT_SET(Global_2397607.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return MISC::IS_BIT_SET(Global_794503.f_4[iVar1 /*86*/].f_76, 17);
		
		case 62:
			return MISC::IS_BIT_SET(Global_903016.f_1204[iVar1 /*86*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_26(var uParam0, bool bParam1)//Position - 0x10B6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (MISC::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397741.f_513[uParam0->f_9];
			}
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397607.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794503.f_4[iVar1 /*86*/].f_54;
		
		case 62:
			return Global_903016.f_1204[iVar1 /*86*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_944662.f_5[iVar1 /*86*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_27(var uParam0)//Position - 0x1198
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_24(uParam0))
	{
		return Global_2394850.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397607.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794503.f_4[iVar16 /*86*/].f_38;
		
		case 62:
			return Global_903016.f_1204[iVar16 /*86*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_944662.f_5[iVar16 /*86*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_28(var uParam0, bool bParam1)//Position - 0x1288
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (MISC::IS_BIT_SET(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397741[uParam0->f_9 /*16*/];
			}
			return Global_2394850.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397607.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794503.f_4[iVar16 /*86*/].f_22;
		
		case 62:
			return Global_903016.f_1204[iVar16 /*86*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_944662.f_5[iVar16 /*86*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_29(var uParam0)//Position - 0x13AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_24(uParam0))
	{
		return Global_2394850.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397607.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794503.f_4[iVar1 /*86*/].f_68;
		
		case 62:
			return Global_903016.f_1204[iVar1 /*86*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		return Global_944662.f_5[iVar1 /*86*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)//Position - 0x147B
{
	if (func_23(iParam1))
	{
		if (Global_2397607)
		{
			return Global_2397607.f_1.f_53;
		}
		return 135;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794503.f_4[iParam1 /*86*/].f_65;
		
		case 62:
			return Global_903016.f_1204[iParam1 /*86*/].f_65;
		
		default:
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_944662.f_5[iParam1 /*86*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 135;
	}
	return 135;
}

int func_31(char* sParam0, var uParam1, bool bParam2)//Position - 0x1501
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (MISC::IS_BIT_SET(Global_794503.f_4[iVar0 /*86*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_794503.f_4[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_794503.f_4[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794503.f_4[iVar0 /*86*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (MISC::IS_BIT_SET(Global_903016.f_1204[iVar0 /*86*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_903016.f_1204[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_903016.f_1204[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (MISC::IS_BIT_SET(Global_944662.f_5[iVar0 /*86*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_944662.f_5[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_944662.f_5[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1699
{
	switch (iParam0)
	{
		case 15:
			return 53;
		
		case 14:
			return 54;
		
		case 122:
			return 58;
		
		case 11:
			return 55;
		
		case 13:
			return 56;
		
		case 12:
			return 57;
		
		case 8:
			return 60;
		
		case 1:
			return 61;
		
		case 5:
			return 59;
		
		case 6:
			return 62;
		
		case 3:
			return 65;
		
		case 0:
			return 63;
		
		case 2:
			return 64;
		
		default:
	}
	return 0;
}

int func_33(char* sParam0, int iParam1, int iParam2)//Position - 0x1738
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 0, 5), 8);
	if (!MISC::ARE_STRINGS_EQUAL(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 5, 12), 16);
	if (MISC::ARE_STRINGS_EQUAL(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, HUD::_GET_TEXT_SUBSTRING_SLICE(sParam0, 12, iVar0), 8);
	if (!MISC::STRING_TO_INT(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0)//Position - 0x1827
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_35(int iParam0)//Position - 0x184A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1335217)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (MISC::GET_GAME_TIMER() > Global_2394796[iVar0 /*4*/].f_2 || Global_2394796[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2392870[iParam0 /*95*/].f_88 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2394796[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2392870[iParam0 /*95*/].f_88);
				Global_2394796[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392870[iParam0 /*95*/].f_89 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2392870[iParam0 /*95*/].f_89);
	}
	if (!Global_2392870[iParam0 /*95*/].f_53)
	{
		if (Global_2392870[iParam0 /*95*/].f_49 != 0)
		{
			NETWORK::_0x5A34CD9C3C5BEC44(Global_2392870[iParam0 /*95*/].f_49);
		}
	}
	func_43(Global_2392870[iParam0 /*95*/].f_88);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1335217)
	{
		Global_2392870[iVar1 /*95*/] = { Global_2392870[iVar2 /*95*/] };
		iVar1++;
		iVar2++;
	}
	func_37(iVar1);
	Global_1335217 = (Global_1335217 - 1);
	if (Global_1335190)
	{
		if (Global_1335188 > 0)
		{
			func_36();
		}
	}
}

void func_36()//Position - 0x1992
{
	Global_1335190 = 0;
}

void func_37(int iParam0)//Position - 0x199F
{
	Global_2392870[iParam0 /*95*/] = 0;
	Global_2392870[iParam0 /*95*/].f_1 = 0;
	Global_2392870[iParam0 /*95*/].f_5 = 0;
	StringCopy(&(Global_2392870[iParam0 /*95*/].f_12), "", 64);
	StringCopy(&(Global_2392870[iParam0 /*95*/].f_28), "", 64);
	Global_2392870[iParam0 /*95*/].f_44 = -1;
	Global_2392870[iParam0 /*95*/].f_45 = MISC::GET_GAME_TIMER();
	Global_2392870[iParam0 /*95*/].f_46 = -1;
	Global_2392870[iParam0 /*95*/].f_47 = -1;
	Global_2392870[iParam0 /*95*/].f_48 = -1;
	Global_2392870[iParam0 /*95*/].f_49 = 0;
	Global_2392870[iParam0 /*95*/].f_50 = 0;
	Global_2392870[iParam0 /*95*/].f_50.f_1 = 0;
	Global_2392870[iParam0 /*95*/].f_50.f_2 = 0;
	Global_2392870[iParam0 /*95*/].f_53 = 0;
	StringCopy(&(Global_2392870[iParam0 /*95*/].f_54), "", 64);
	StringCopy(&(Global_2392870[iParam0 /*95*/].f_70), "", 64);
	Global_2392870[iParam0 /*95*/].f_86 = 0;
	Global_2392870[iParam0 /*95*/].f_87 = 0;
	Global_2392870[iParam0 /*95*/].f_88 = -1;
	Global_2392870[iParam0 /*95*/].f_89 = -1;
	Global_2392870[iParam0 /*95*/].f_90 = 0;
	Global_2392870[iParam0 /*95*/].f_91 = -1;
	Global_2392870[iParam0 /*95*/].f_92 = 0;
	Global_2392870[iParam0 /*95*/].f_93 = 0;
	Global_2392870[iParam0 /*95*/].f_94 = 0;
}

int func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1AD6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1335217)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2392870[iVar0 /*95*/].f_12)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)//Position - 0x1B0F
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_116, 22);
}

bool func_40(bool bParam0)//Position - 0x1B28
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_41()//Position - 0x1B53
{
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_42()//Position - 0x1B70
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 2);
}

void func_43(var uParam0)//Position - 0x1B8A
{
	int iVar0;
	
	iVar0 = NETWORK::_0x742B58F723233ED9(uParam0);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return;
	}
	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
	{
		return;
	}
}

bool func_44()//Position - 0x1BBD
{
	return Global_1315857 == 10;
}

int func_45()//Position - 0x1BCC
{
	if (!Global_68245)
	{
		return 1;
	}
	else if (func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x1BEF
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	return func_47(120, -1);
}

int func_47(int iParam0, int iParam1)//Position - 0x1C1F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_48(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)//Position - 0x1C4B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

int func_49()//Position - 0x1C7F
{
	return Global_1312737;
}

bool func_50()//Position - 0x1C8B
{
	return Global_1315888;
}

bool func_51()//Position - 0x1C97
{
	return Global_1315890;
}

void func_52(var uParam0, int iParam1)//Position - 0x1CA3
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_49();
	}
	Global_1315877[iVar0] = uParam0;
}

void func_53(int iParam0)//Position - 0x1CC5
{
	func_100();
	if (func_99(1))
	{
		if (!func_90())
		{
			if (!func_78(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					func_77();
				}
				func_56(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_55();
				func_54();
			}
		}
	}
}

void func_54()//Position - 0x1D0A
{
	Global_1683768.f_7 = 1;
}

void func_55()//Position - 0x1D19
{
	Global_1683768.f_6 = 1;
}

void func_56(int iParam0, bool bParam1)//Position - 0x1D28
{
	if (func_99(iParam0))
	{
		Global_1683768.f_16[iParam0 /*36*/].f_5 = 1;
		func_58(iParam0, 0);
		func_57();
		if (bParam1)
		{
			Global_1683768 = 1;
		}
	}
}

void func_57()//Position - 0x1D5B
{
	Global_1683768.f_2 = 1;
}

void func_58(int iParam0, bool bParam1)//Position - 0x1D6A
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_76();
			func_70(PLAYER::PLAYER_ID(), 0, 81920, 1);
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_75 = 8;
			func_69();
			func_68();
		}
		func_67(iParam0);
		func_66(iParam0);
		func_64();
		func_63();
		func_57();
	}
	Var0 = { func_62(iParam0) };
	func_61(iParam0);
	func_59(&Var0);
}

void func_59(char* sParam0)//Position - 0x1DD6
{
	StringCopy(&(Global_2428131.f_729), sParam0, 24);
	if (func_60())
	{
		StringCopy(&(Global_964222.f_34), sParam0, 24);
	}
}

bool func_60()//Position - 0x1DFA
{
	return MISC::IS_BIT_SET(Global_2428891.f_1.f_2807, 5);
}

void func_61(int iParam0)//Position - 0x1E10
{
	Global_1683768.f_16[iParam0 /*36*/].f_3 = 1;
}

struct<6> func_62(int iParam0)//Position - 0x1E25
{
	return Global_1683768.f_16[iParam0 /*36*/].f_6;
}

void func_63()//Position - 0x1E3B
{
	Global_2428131.f_4 = 100;
}

void func_64()//Position - 0x1E4B
{
	MISC::SET_BIT(&Global_2428131, 5);
	func_65();
}

void func_65()//Position - 0x1E60
{
	MISC::SET_BIT(&Global_2428131, 8);
}

void func_66(var uParam0)//Position - 0x1E72
{
	Global_1683768.f_8 = uParam0;
}

void func_67(var uParam0)//Position - 0x1E82
{
	Global_1683768.f_9 = uParam0;
}

void func_68()//Position - 0x1E92
{
	Global_2434575.f_1 = 0;
}

void func_69()//Position - 0x1EA1
{
	char* sVar0;
	
	StringCopy(&(Global_2428131.f_729), sVar0, 24);
}

void func_70(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1EB4
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_74())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_73(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(uVar23);
				PED::SET_PED_CAN_RAGDOLL(uVar23, 1);
				func_72();
				func_71();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_73(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar23) && !PED::IS_PED_IN_ANY_VEHICLE(uVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}

void func_71()//Position - 0x2233
{
	struct<2> Var0;
	
	Global_2422140.f_676 = 0;
	Global_2422140.f_677 = 0;
	Global_2422140.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404548.f_1376 = { Var0 };
}

void func_72()//Position - 0x2270
{
	Global_2404548.f_538 = 0;
	Global_2404548.f_1417 = 0;
	Global_2404548.f_420 = 0;
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 0;
}

int func_73(var uParam0)//Position - 0x229D
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()//Position - 0x22CE
{
	if (func_75() == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x22E3
{
	return Global_1312467.f_18;
}

void func_76()//Position - 0x22F1
{
	MISC::SET_BIT(&Global_2428131, 7);
}

void func_77()//Position - 0x2302
{
	MISC::SET_BIT(&(Global_2428131.f_2), 15);
}

int func_78(int iParam0)//Position - 0x2316
{
	if (iParam0 || func_89())
	{
		if (!func_88(0, 1))
		{
			return 1;
		}
		if (!func_80(1))
		{
			return 1;
		}
		if (!func_79())
		{
			return 1;
		}
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
		{
			return 1;
		}
	}
	return 0;
}

bool func_79()//Position - 0x2360
{
	return Global_1683768.f_4;
}

int func_80(bool bParam0)//Position - 0x236E
{
	if (!func_85())
	{
		return 0;
	}
	if ((func_83(func_84(-1), 0) >= 3 || func_47(123, -1)) && func_47(133, -1))
	{
		func_82();
		return 1;
	}
	else if (bParam0)
	{
		func_81();
	}
	return 0;
}

void func_81()//Position - 0x23BF
{
	Global_1683768.f_5 = 1;
}

void func_82()//Position - 0x23CE
{
	Global_1683768.f_4 = 1;
}

int func_83(int iParam0, int iParam1)//Position - 0x23DD
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

int func_84(int iParam0)//Position - 0x249C
{
	return Global_1335605[func_48(iParam0)];
}

int func_85()//Position - 0x24B0
{
	if (func_87() && func_86(0))
	{
		return 1;
	}
	return 0;
}

var func_86(int iParam0)//Position - 0x24CE
{
	return Global_1312369[iParam0];
}

var func_87()//Position - 0x24DE
{
	return func_86(func_49() + 1);
}

int func_88(bool bParam0, bool bParam1)//Position - 0x24F0
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

var func_89()//Position - 0x255C
{
	return Global_1683768.f_2;
}

int func_90()//Position - 0x256A
{
	if (((((func_98() || !func_96(-1)) || !func_94()) || !func_93()) || !func_92()) || func_91())
	{
		return 1;
	}
	return 0;
}

var func_91()//Position - 0x25B5
{
	return Global_2435250;
}

int func_92()//Position - 0x25C1
{
	if (MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x25DC
{
	int iVar0;
	
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_94()//Position - 0x25F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_95(iVar0) == 1)
		{
			iVar0 = 5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x2625
{
	if (func_47(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2641
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_97(iParam0);
	uVar1 = MISC::GET_PROFILE_SETTING(uVar0);
	if (MISC::IS_BIT_SET(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x2668
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_49();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_98()//Position - 0x26CB
{
	return Global_2428131.f_616;
}

bool func_99(int iParam0)//Position - 0x26DA
{
	return Global_1683768.f_16[iParam0 /*36*/].f_4;
}

void func_100()//Position - 0x26EE
{
	int iVar0;
	int iVar1;
	
	func_106();
	if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_103())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_102(iVar0));
			if (iVar1 > 0)
			{
				Global_1683768.f_16[iVar0 /*36*/] = iVar1;
				func_101(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1683768.f_16[iVar0 /*36*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_101(int iParam0, int iParam1)//Position - 0x2765
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1683768.f_16[iParam0 /*36*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1))
	{
		MemCopy(&(Global_1683768.f_16[iParam0 /*36*/].f_12), {Var1}, 8);
	}
	else
	{
		bVar0 = false;
	}
	if (SOCIALCLUB::_0x19853B5B17D77BCA(iParam1, &Var1))
	{
		Global_1683768.f_16[iParam0 /*36*/].f_20 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1683768.f_16[iParam0 /*36*/].f_1 = uVar17;
		}
		else
		{
			Global_1683768.f_16[iParam0 /*36*/].f_1 = 120000;
		}
		Global_1683768.f_16[iParam0 /*36*/].f_2 = 0;
		if (SOCIALCLUB::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar17))
		{
			Global_1683768.f_16[iParam0 /*36*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1683768.f_1 = 1;
		}
		Global_1683768.f_16[iParam0 /*36*/].f_4 = 1;
	}
	else
	{
		Global_1683768.f_16[iParam0 /*36*/].f_4 = 0;
	}
}

char* func_102(int iParam0)//Position - 0x2874
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_103()//Position - 0x28C1
{
	if (!func_104())
	{
		return 1;
	}
	return 0;
}

int func_104()//Position - 0x28D6
{
	if (func_105())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_105()//Position - 0x28F6
{
	return Global_2435308;
}

void func_106()//Position - 0x2902
{
	struct<233> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1683768 = { Var0 };
}

void func_107(int iParam0)//Position - 0x292B
{
	var uVar0;
	
	if (Global_68245)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14382, 1);
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 21))
	{
		func_109();
	}
	Global_2451015.f_1 = 0;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	StringCopy(&(Global_2451015.f_4), "", 64);
	func_108(&(Global_2451015.f_20));
}

void func_108(var uParam0)//Position - 0x2994
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_109()//Position - 0x29DC
{
	Global_2451015.f_2 = 1;
	Global_2451015.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2451015 = 0;
			Global_2451015.f_2 = 0;
		}
		else if (func_115(Global_2451015.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2451015.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2451015.f_20)))
				{
					func_114();
				}
			}
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}
	if (Global_2451015.f_37)
	{
		func_110(0);
	}
	Global_2451015.f_37 = 0;
	Global_2451015.f_3 = 0;
}

void func_110(int iParam0)//Position - 0x2A7C
{
	if (Global_14551)
	{
		func_112(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_111())
	{
		Global_14393.f_1 = 3;
	}
}

int func_111()//Position - 0x2AEC
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)//Position - 0x2B13
{
	if (bParam0)
	{
		if (func_113(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_113(int iParam0)//Position - 0x2B87
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
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
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_114()//Position - 0x2BE1
{
	Global_2451015.f_1 = 0;
	Global_2451015 = 0;
	Global_2451015.f_2 = 0;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	StringCopy(&(Global_2451015.f_4), "", 64);
	StringCopy(&(Global_2451015.f_39[0 /*16*/]), "", 64);
	Global_2451015.f_38 = 0;
	Global_2451015.f_56 = 0;
	Global_2451015.f_57 = 0;
	Global_2451015.f_58 = -2;
	Global_2451015.f_3 = 0;
	func_108(&(Global_2451015.f_20));
}

bool func_115(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x2C50
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_116(int iParam0)//Position - 0x2C60
{
	struct<2> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2451015.f_33 = Var0.f_1;
		Global_2451015.f_34 = Var0;
	}
}

void func_117(int iParam0)//Position - 0x2C8B
{
	struct<9> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2451015.f_3 == 0)
		{
			if (!func_118(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(0, 2);
			}
			else
			{
				Global_2451015.f_3 = 1;
				MemCopy(&(Global_2451015.f_4), {Var0}, 16);
				Global_2451015.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2451015.f_39[0 /*16*/]), "", 64);
				Global_2451015.f_58 = -2;
				Global_2451015.f_56 = 0;
				Global_2451015.f_57 = 0;
			}
		}
		else if (!func_118(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(0, 2);
		}
		else
		{
			Global_2451015.f_3 = 1;
			MemCopy(&(Global_2451015.f_4), {Var0}, 16);
			Global_2451015.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2451015.f_39[0 /*16*/]), "", 64);
			Global_2451015.f_58 = -2;
			Global_2451015.f_56 = 0;
			Global_2451015.f_57 = 0;
		}
	}
}

int func_118(var uParam0)//Position - 0x2D6F
{
	if (Global_68245)
	{
		if (func_46() == 0)
		{
			return 0;
		}
		if (func_122(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2451015.f_1)
	{
	}
	if (Global_14559 == 1)
	{
		return 0;
	}
	if (Global_1573708)
	{
		return 0;
	}
	if (Global_2451015.f_36)
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (((Global_34913 != 6 && Global_34913 != 8) && Global_34913 != 12) && Global_34913 != 15)
	{
		return 0;
	}
	if (func_121() && !func_120(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_119(0))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_68505)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
			{
				return 0;
			}
		}
		else if (MISC::IS_ORBIS_VERSION())
		{
			return 0;
		}
	}
	return 1;
}

int func_119(int iParam0)//Position - 0x2EF0
{
	struct<13> Var0;
	
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iParam0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (iParam0 == 0 || iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_8(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, 0) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, 0) && NETWORK::NETWORK_IS_FRIEND(&Var0)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iParam0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(int iParam0)//Position - 0x2FBA
{
	return Global_34913 == iParam0;
}

int func_121()//Position - 0x2FC8
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1, bool bParam2)//Position - 0x2FDD
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
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

void func_123()//Position - 0x3021
{
	func_114();
}

void func_124()//Position - 0x302D
{
	Global_2451015.f_1 = 1;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) == 1)
	{
		if (Global_14381)
		{
			func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14336)
			{
				func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_125(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x30A6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_126(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_126(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_126(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_126(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_126(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_126(var uParam0)//Position - 0x3159
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_127()//Position - 0x316B
{
	int iVar0;
	
	if (iLocal_88)
	{
		Global_47002 = 0;
		Global_47002.f_12 = 0;
		Global_47002.f_24 = 0;
		Global_47002.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_47002.f_1[iVar0] = 0;
			Global_47002.f_13[iVar0] = 0;
			Global_47002.f_25[iVar0] = 0;
			Global_47002.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_88 = 0;
	}
}

