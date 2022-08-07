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
					GlobalFunc_7205();
					break;
				
				case 188:
					func_117(iVar2);
					break;
				
				case 189:
					GlobalFunc_2865(iVar2);
					break;
				
				case 190:
					GlobalFunc_8621(iVar2);
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
		if (GlobalFunc_1254())
		{
			GlobalFunc_2145(uParam22);
			return 0;
		}
		if (GlobalFunc_1007())
		{
			GlobalFunc_2145(uParam22);
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
			GlobalFunc_2145(uParam22);
			return 0;
		}
		if (Global_14336)
		{
			GlobalFunc_2145(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!GlobalFunc_2845())
		{
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				if (bVar1)
				{
					GlobalFunc_2145(uParam22);
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_1974(PLAYER::PLAYER_ID()))
		{
			GlobalFunc_2145(uParam22);
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param6))
	{
		GlobalFunc_2145(uParam22);
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		GlobalFunc_2145(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = GlobalFunc_2149(Var2);
	if (iVar18 != -1)
	{
		GlobalFunc_5632(iVar18);
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
			GlobalFunc_2145(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	GlobalFunc_1920(&Var22);
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
	if (GlobalFunc_2844(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (GlobalFunc_5911(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = GlobalFunc_5553(iVar34, Var22.f_1);
		iVar33 = GlobalFunc_6992(&Var22);
		Var36 = { GlobalFunc_6897(&Var22, 0) };
		Var52 = { GlobalFunc_7204(&Var22) };
		iVar69 = 1;
		iVar68 = GlobalFunc_7203(&Var22, 0);
		iVar73 = GlobalFunc_7202(&Var22);
		bVar74 = GlobalFunc_7201(&Var22);
		if (!bVar74)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar75 = false;
		if (GlobalFunc_5910(PLAYER::PLAYER_ID()))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar75 = true;
			}
			else
			{
				GlobalFunc_2145(uParam22);
				if ((MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_5909();
				}
				else
				{
					GlobalFunc_5908(0);
				}
				return 0;
			}
		}
		if (!bVar75)
		{
			if (GlobalFunc_5907(PLAYER::PLAYER_ID()))
			{
				GlobalFunc_2145(uParam22);
				GlobalFunc_5908(0);
				return 0;
			}
		}
		if (!GlobalFunc_2843())
		{
			GlobalFunc_2145(uParam22);
			bVar76 = true;
			GlobalFunc_5908(bVar76);
			return 0;
		}
		bVar77 = false;
		if (!bVar75)
		{
			if (GlobalFunc_7200(Param23, &bVar77))
			{
				GlobalFunc_2145(uParam22);
				GlobalFunc_5908(bVar77);
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
	Global_2392870[iVar80 /*95*/].f_93 = GlobalFunc_2842(Param23, iVar80);
	Global_2392870[iVar80 /*95*/].f_94 = 0;
	Global_2392870[iVar80 /*95*/].f_86 = iParam37;
	Global_2394848++;
	Global_2392870[iVar80 /*95*/].f_44 = GlobalFunc_2841(Param23);
	if (Global_2392870[iVar80 /*95*/].f_44 != -1)
	{
		Global_2392870[iVar80 /*95*/].f_45 = MISC::GET_GAME_TIMER() + 15000;
	}
	return 1;
}









































int func_45()//Position - 0x1BCC
{
	if (!Global_68245)
	{
		return 1;
	}
	else if (GlobalFunc_7906())
	{
		return 1;
	}
	return 0;
}







void func_52(var uParam0, int iParam1)//Position - 0x1CA3
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = GlobalFunc_5();
	}
	Global_1315877[iVar0] = uParam0;
}

void func_53(int iParam0)//Position - 0x1CC5
{
	GlobalFunc_8029();
	if (GlobalFunc_2861(1))
	{
		if (!func_90())
		{
			if (!func_78(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					GlobalFunc_2853();
				}
				func_56(1, 0);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				GlobalFunc_2847();
				GlobalFunc_2846();
			}
		}
	}
}



void func_56(int iParam0, bool bParam1)//Position - 0x1D28
{
	if (GlobalFunc_2861(iParam0))
	{
		Global_1683768.f_16[iParam0 /*36*/].f_5 = 1;
		func_58(iParam0, 0);
		GlobalFunc_2848();
		if (bParam1)
		{
			Global_1683768 = 1;
		}
	}
}


void func_58(int iParam0, bool bParam1)//Position - 0x1D6A
{
	struct<6> Var0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			GlobalFunc_2059();
			GlobalFunc_6921(PLAYER::PLAYER_ID(), 0, 81920, 1);
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_75 = 8;
			GlobalFunc_2054();
			GlobalFunc_2053();
		}
		GlobalFunc_2852(iParam0);
		GlobalFunc_2851(iParam0);
		GlobalFunc_5601();
		GlobalFunc_2057();
		GlobalFunc_2848();
	}
	Var0 = { GlobalFunc_2850(iParam0) };
	GlobalFunc_2849(iParam0);
	GlobalFunc_5912(&Var0);
}




















int func_78(int iParam0)//Position - 0x2316
{
	if (iParam0 || GlobalFunc_2857())
	{
		if (!GlobalFunc_524(0, 1))
		{
			return 1;
		}
		if (!func_80(1))
		{
			return 1;
		}
		if (!GlobalFunc_2854())
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


int func_80(bool bParam0)//Position - 0x236E
{
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	if ((GlobalFunc_204(func_84(-1), 0) >= 3 || GlobalFunc_6707(123, -1)) && GlobalFunc_6707(133, -1))
	{
		GlobalFunc_2856();
		return 1;
	}
	else if (bParam0)
	{
		GlobalFunc_2855();
	}
	return 0;
}




int func_84(int iParam0)//Position - 0x249C
{
	return Global_1335605[GlobalFunc_4916(iParam0)];
}






int func_90()//Position - 0x256A
{
	if (((((GlobalFunc_1195() || !func_96(-1)) || !func_94()) || !GlobalFunc_2860()) || !GlobalFunc_2859()) || GlobalFunc_2858())
	{
		return 1;
	}
	return 0;
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
	if (GlobalFunc_6707(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2641
{
	var uVar0;
	var uVar1;
	
	uVar0 = GlobalFunc_4982(iParam0);
	uVar1 = MISC::GET_PROFILE_SETTING(uVar0);
	if (MISC::IS_BIT_SET(uVar1, 1))
	{
		return 1;
	}
	return 0;
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
		if (GlobalFunc_7906() == 0)
		{
			return 0;
		}
		if (GlobalFunc_1269(PLAYER::PLAYER_ID(), 1, 1))
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
	if (GlobalFunc_72())
	{
		return 0;
	}
	if (((Global_34913 != 6 && Global_34913 != 8) && Global_34913 != 12) && Global_34913 != 15)
	{
		return 0;
	}
	if (GlobalFunc_756() && !GlobalFunc_39(12))
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
	if (!GlobalFunc_5255(0))
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






void func_124()//Position - 0x302D
{
	Global_2451015.f_1 = 1;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) == 1)
	{
		if (Global_14381)
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14336)
			{
				GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
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

