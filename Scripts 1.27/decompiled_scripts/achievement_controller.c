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
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
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
	sLocal_17 = "NULL";
	iLocal_20 = 3;
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_56 = 1000;
	iLocal_57 = 3333;
	fLocal_58 = 0f;
	bLocal_65 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_51 = MISC::GET_GAME_TIMER();
	iLocal_60 = 0;
	GlobalFunc_238(iLocal_61);
	func_148();
	GlobalFunc_6716(&Global_2544859);
	func_145(&Global_2544859, 1);
	GlobalFunc_6715(&uLocal_62);
	while (true)
	{
		if (Global_24690 != iLocal_60)
		{
			if (iLocal_60 == 0 && Global_24690 != 0)
			{
				if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
				{
					GlobalFunc_159("CHEAT_TROPHIE", -1);
				}
				else
				{
					GlobalFunc_159("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_60 != 0 && Global_24690 == 0)
			{
			}
		}
		iLocal_60 = Global_24690;
		if (!GlobalFunc_39(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				func_132();
			}
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
			{
				func_130();
			}
			if (Global_24453)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					iVar0 = func_115(1);
					if (iVar0 > 0)
					{
						GlobalFunc_4(12, iVar0);
						STATS::STAT_SET_INT(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70)
					{
						GlobalFunc_8964(12, 1);
					}
				}
				Global_24453 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_61++;
					if (MISC::GET_GAME_TIMER() > iLocal_51)
					{
						func_97(0);
						iLocal_51 = (MISC::GET_GAME_TIMER() + iLocal_56);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_52)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_59 == 1)
						{
							if (GlobalFunc_230(53))
							{
								func_95();
							}
						}
						iLocal_52 = (MISC::GET_GAME_TIMER() + iLocal_57);
					}
				}
			}
			func_90(&Global_2544859);
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1F7
{
	var uVar0;
	int iVar1;
	
	if (!GlobalFunc_182(&Global_2544859))
	{
		return;
	}
	if (!Global_68245)
	{
		if (iLocal_67)
		{
			iLocal_67 = 0;
		}
		return;
	}
	if (!GlobalFunc_6714())
	{
		return;
	}
	if (bLocal_65)
	{
		if (!GlobalFunc_6713(3, -1))
		{
			return;
		}
		if (!GlobalFunc_6713(5, -1))
		{
			return;
		}
	}
	if (iLocal_67)
	{
		return;
	}
	uVar0 = SOCIALCLUB::_0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_66 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
	{
		func_83();
		iLocal_67 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x287
{
	int iVar0;
	
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
	{
		if (func_80())
		{
			GlobalFunc_8964(33, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (GlobalFunc_4981(&uLocal_62) > 5f)
		{
			func_19(PLAYER::PLAYER_PED_ID());
			GlobalFunc_6715(&uLocal_62);
		}
	}
	iVar0 = GlobalFunc_204(func_18(-1), 0);
	if (iVar0 >= 100)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
		{
			GlobalFunc_8964(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
		{
			GlobalFunc_8964(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
		{
			GlobalFunc_8964(34, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		func_15(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
	{
		if (GlobalFunc_203(joaat("mpply_total_custom_races_won")) >= 5)
		{
			GlobalFunc_8964(38, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
	{
		if (func_13(48, -1) >= 10)
		{
			GlobalFunc_8964(39, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
	{
		if (func_13(52, -1) > 0)
		{
			GlobalFunc_8964(40, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_2059.f_18, 1))
		{
			GlobalFunc_8964(41, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
	{
		if (GlobalFunc_6709(743, -1, 0) >= 30)
		{
			GlobalFunc_8964(43, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
	{
		if (func_13(14, -1) >= 20)
		{
			GlobalFunc_8964(44, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		func_10(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (GlobalFunc_6708(11, -1, -1))
		{
			GlobalFunc_8964(48, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)//Position - 0x42A
{
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	if (!Global_68245)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!GlobalFunc_6707(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!GlobalFunc_6707(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!GlobalFunc_6707(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	GlobalFunc_8964(49, 1);
	return 1;
}







int func_10(bool bParam0)//Position - 0x7F7
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!Global_68245)
	{
		return 0;
	}
	uVar2 = GlobalFunc_6709(744, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (GlobalFunc_202(uVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		GlobalFunc_8964(45, 1);
		return 1;
	}
	return 0;
}



int func_13(int iParam0, int iParam1)//Position - 0x923
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2475233[iParam0 /*6*/][GlobalFunc_4916(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}


int func_15(bool bParam0)//Position - 0x96D
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		return 0;
	}
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	if (!Global_68245)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = (iVar0 - func_13(58, -1));
		iVar0 = (iVar0 - func_13(57, -1));
	}
	if (func_16(8, -1))
	{
		GlobalFunc_8964(37, 1);
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0x9D7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475762[iParam0 /*6*/][GlobalFunc_4916(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}


int func_18(int iParam0)//Position - 0xAC2
{
	return Global_1335605[GlobalFunc_4916(iParam0)];
}

void func_19(int iParam0)//Position - 0xAD6
{
	int iVar0;
	struct<134> Var1;
	
	Var1 = 44;
	Var1.f_133 = 50;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		return;
	}
	func_72(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (func_20(iParam0, Var1[iVar0 /*3*/]))
		{
			GlobalFunc_8964(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_133)
	{
		if (func_20(iParam0, Var1.f_133[iVar0 /*3*/]))
		{
			GlobalFunc_8964(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_20(var uParam0, int iParam1)//Position - 0xB65
{
	var uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<6> Var45;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, iParam1, 0))
	{
		return 0;
	}
	iVar39 = GlobalFunc_221(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar39 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar39) < 3))
	{
		return 0;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, iParam1, iVar44, 0))
	{
		if (Var45.f_4 == joaat("WAPClip"))
		{
			iVar41++;
		}
		if (Var45.f_4 == joaat("WAPScop"))
		{
			iVar40++;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iParam1, Var45))
		{
			if (Var45.f_4 == joaat("WAPClip"))
			{
				iVar43 = Var45.f_5;
			}
			else if (Var45.f_4 == joaat("WAPScop"))
			{
				iVar42 = Var45.f_5;
			}
		}
		else if (((Var45.f_4 == joaat("WAPClip") || Var45.f_4 == joaat("WAPScop")) || Var45.f_4 == joaat("WAPRail")) || Var45.f_4 == -1441477783)
		{
		}
		else
		{
			return 0;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return 0;
	}
	if (iVar41 > iVar43)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDD4
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
	var uVar12;
	struct<4> Var51;
	
	func_70(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_pistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_appistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_microsmg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_smg_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 6:
					func_70(uParam0, joaat("component_assaultrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 6:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 7:
					func_70(uParam0, joaat("component_carbinerifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_advancedrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_sniperrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_pistol50_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 6:
					func_70(uParam0, joaat("component_marksmanrifle_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_heavypistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_heavypistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_heavypistol_varmod_luxe"), -1441477783, 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_combatpdw_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_combatpdw_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = GlobalFunc_221(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = 0;
				while (iVar11 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar10))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar10, iVar11, &Var51))
					{
						if (Var51 == joaat("WAPClip"))
						{
							iVar1++;
						}
						else if (Var51 == 1170392792)
						{
							iVar2++;
						}
						else if (Var51 == joaat("WAPScop"))
						{
							iVar3++;
						}
						else if (Var51 == joaat("WAPRail"))
						{
							iVar4++;
						}
						else if (Var51 == joaat("WAPGrip"))
						{
							iVar5++;
						}
						else if (Var51 == joaat("WAPSupp"))
						{
							iVar6++;
						}
						else if (Var51 == 1731751835)
						{
							iVar7++;
						}
						else if (Var51 == -1441477783)
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var51 == joaat("WAPClip"))
							{
								iVar0 = iVar1;
							}
							else if (Var51 == 1170392792)
							{
								iVar0 = iVar2;
							}
							else if (Var51 == joaat("WAPScop"))
							{
								iVar0 = iVar3;
							}
							else if (Var51 == joaat("WAPRail"))
							{
								iVar0 = iVar4;
							}
							else if (Var51 == joaat("WAPGrip"))
							{
								iVar0 = iVar5;
							}
							else if (Var51 == joaat("WAPSupp"))
							{
								iVar0 = iVar6;
							}
							else if (Var51 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var51 == -1441477783)
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_70(uParam0, Var51.f_3, Var51, iVar0, Var51.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)//Position - 0x1C35
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			default:
				iVar2 = GlobalFunc_221(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2855));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4305));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4306));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8238;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2856));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4307));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4308));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2858));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4309));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4310));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8237;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2859));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4313));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4315));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4314));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8241;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2860));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4316));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4318));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4317));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8240;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2862));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4325));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4322));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4324));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4323));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8234;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2863));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4333));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4330));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4332));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4331));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8236;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2865));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4335));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8235;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2866));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2867));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2869));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8243;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2861));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4319));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4321));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4320));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_4939;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5516;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5520;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5523;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5519;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5517;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5522;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5521;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5524;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5518;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5543;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5527;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5529;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5525;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5526;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5528;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_5999;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6000;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6649;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6650;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6651;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6652;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6655;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = Global_262145.f_6657;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6656;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6658;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6659;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_6660;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2857));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4311));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4312));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8239;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8242;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
				}
				break;
			
			default:
				iVar65 = GlobalFunc_221(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		StringCopy(&Var144, GlobalFunc_4978(iParam1, iParam0), 16);
		GlobalFunc_215(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, GlobalFunc_4977(iParam0), -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_23(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)//Position - 0x3324
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_68245)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_49 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			if (GlobalFunc_10830())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}





























int func_52(int iParam0)//Position - 0x3E79
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = GlobalFunc_8329();
	if (iParam0 == 0 || !GlobalFunc_42(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (GlobalFunc_4976(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = GlobalFunc_4976(1, iVar0);
		iVar3[1] = GlobalFunc_4976(3, iVar0);
		iVar3[2] = GlobalFunc_4976(2, iVar0);
		iVar3[3] = GlobalFunc_4976(4, iVar0);
		iVar3[4] = GlobalFunc_4976(5, iVar0);
		iVar3[5] = GlobalFunc_4976(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}


















void func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x525F
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}


void func_72(var uParam0, var uParam1)//Position - 0x52B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = GlobalFunc_223(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(uParam0, GlobalFunc_223(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(uParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = GlobalFunc_4980(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = GlobalFunc_4980(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = FILES::GET_NUM_DLC_WEAPONS();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar7, &Var9) && !GlobalFunc_222(Var9.f_1)) && iVar70 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9))
				{
					Var4.x = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(uParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(uParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar7))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar7, iVar1, &Var48))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, Var4.x, Var48.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}








int func_80()//Position - 0x617A
{
	if (Global_1312448)
	{
		return 1;
	}
	if (GlobalFunc_228())
	{
		return 1;
	}
	if (GlobalFunc_227())
	{
		return 1;
	}
	return GlobalFunc_6707(124, -1);
}



void func_83()//Position - 0x61C2
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				GlobalFunc_8964(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				GlobalFunc_8964(iVar0, 1);
			}
		}
		iVar0++;
	}
}







void func_90(var uParam0)//Position - 0x6304
{
	if (GlobalFunc_178(uParam0, 0))
	{
		return;
	}
	if (!GlobalFunc_182(uParam0))
	{
		return;
	}
	if (GlobalFunc_4981(&(uParam0->f_62)) < 8f)
	{
		return;
	}
	if (func_93((*uParam0)[0]))
	{
		func_92(uParam0);
		func_91(uParam0);
		GlobalFunc_6715(&(uParam0->f_62));
	}
}

void func_91(var uParam0)//Position - 0x635A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (GlobalFunc_178(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_92(var uParam0)//Position - 0x638B
{
	int iVar0;
	
	iVar0 = 1;
	if (GlobalFunc_178(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_93(int iParam0)//Position - 0x63C2
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 0;
	}
	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 1;
	}
	return 0;
}


int func_95()//Position - 0x6404
{
	float fVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_68245)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			fVar0 = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
			if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
			{
				GlobalFunc_4(14, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				GlobalFunc_8964(14, 1);
				return 1;
			}
		}
	}
	return 0;
}


void func_97(bool bParam0)//Position - 0x64A8
{
	if (Global_68245)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	GlobalFunc_9630(bParam0);
	func_100(bParam0);
	func_99();
	func_98();
	if (bParam0)
	{
		if (GlobalFunc_226(&uLocal_53))
		{
		}
	}
}

int func_98()//Position - 0x64FC
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 15)
	{
		GlobalFunc_8964(50, 1);
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x656A
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
	{
		return 0;
	}
	iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
	if (iVar0 > 0)
	{
		if (Global_24705 < iVar0)
		{
			if (Global_24705 >= 0)
			{
				GlobalFunc_4(22, iVar0);
			}
			Global_24705 = iVar0;
		}
	}
	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		GlobalFunc_8964(22, 1);
		return 1;
	}
	return 0;
}

int func_100(bool bParam0)//Position - 0x65C1
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		return 0;
	}
	uVar0[0] = func_106();
	uVar0[1] = func_105();
	uVar0[2] = func_104();
	uVar0[3] = func_103();
	uVar0[4] = func_102();
	uVar0[5] = func_101();
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (uVar0[iVar8])
		{
			iVar7++;
		}
		iVar8++;
	}
	STATS::STAT_GET_INT(joaat("num_discipline_gold_earned"), &iVar9, -1);
	if (iVar7 > iVar9 && iVar7 > 0)
	{
		STATS::STAT_SET_INT(joaat("num_discipline_gold_earned"), iVar7, 1);
		GlobalFunc_4(17, iVar7);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	GlobalFunc_8964(17, 1);
	return 1;
}

int func_101()//Position - 0x66E3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_SAVE_DATA.PILOT_SCHOOL_SAVED_ARRAY[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_SAVE_DATA.PILOT_SCHOOL_SAVED_ARRAY[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_SAVE_DATA.PILOT_SCHOOL_SAVED_ARRAY[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_102()//Position - 0x6750
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_103()//Position - 0x67C6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceWon, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_104()//Position - 0x67FA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceWon, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_105()//Position - 0x682E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106()//Position - 0x6861
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_SAVE_DATA.TRI_RANKS[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}









int func_115(bool bParam0)//Position - 0x6B4E
{
	int iVar0;
	
	iVar0 = (func_128(bParam0) + func_116(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_116(bool bParam0)//Position - 0x6B6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS)
	{
		if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_3 != -1 && GlobalFunc_4984(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_124(iVar0, 7))
			{
				iVar7 = func_122(iVar0, 7, iVar5);
				if (!Global_54975[iVar7 /*13*/].f_7)
				{
					if (func_119(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = GlobalFunc_232(iVar4, iVar3, 0);
			iVar2 = GlobalFunc_231(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}



int func_119(int iParam0)//Position - 0x6CF4
{
	if (func_120(iParam0, GlobalFunc_233(Global_54975[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)//Position - 0x6D17
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_54975[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_SAVE_DATA.PROPERTIES_SAVED_DATA[4 /*4*/] == GlobalFunc_8329())
	{
		Global_54975[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_54975[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_54975[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_54975[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}


int func_122(int iParam0, int iParam1, int iParam2)//Position - 0x6E0A
{
	switch (iParam1)
	{
		case 1:
			return Global_81155[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_123(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_123(int iParam0, int iParam1)//Position - 0x6E4D
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_124(int iParam0, int iParam1)//Position - 0x7531
{
	switch (iParam1)
	{
		case 1:
			return Global_81155[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_125(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x756C
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}



int func_128(bool bParam0)//Position - 0x7AA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY)
	{
		if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_3 != -1 && GlobalFunc_4984(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_124(iVar0, 1))
			{
				iVar7 = func_122(iVar0, 1, iVar5);
				if (!Global_54975[iVar7 /*13*/].f_7)
				{
					if (func_119(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_129(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = GlobalFunc_232(iVar4, iVar3, 0);
			iVar2 = GlobalFunc_231(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_129(int iParam0)//Position - 0x7BBE
{
	int iVar0;
	
	iVar0 = GlobalFunc_233(Global_54975[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_130()//Position - 0x7BE3
{
	var uVar0;
	int iVar1;
	
	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID());
	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		GlobalFunc_8964(25, 1);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
		if (ENTITY::IS_ENTITY_A_PED(uVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0);
			if (GlobalFunc_234(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
				{
					GlobalFunc_8964(25, 1);
					return;
				}
			}
		}
	}
}


void func_132()//Position - 0x7C87
{
	switch (iLocal_50)
	{
		case 0:
			fLocal_58 = 0f;
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_137() == 2)
				{
					GlobalFunc_6715(&uLocal_53);
					iLocal_50++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_236() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				GlobalFunc_235(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				GlobalFunc_235(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (func_137() < 2)
			{
				GlobalFunc_235(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_235(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			fLocal_58 = GlobalFunc_4986(&uLocal_53);
			if (fLocal_58 >= 180f)
			{
				GlobalFunc_8964(24, 1);
				GlobalFunc_4985(&uLocal_53);
				iLocal_50++;
			}
			break;
		
		case 2:
			iLocal_50++;
			break;
	}
}





int func_137()//Position - 0x7E3D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = GlobalFunc_8965(2);
	if (GlobalFunc_9631(iVar1, 0) || MISC::IS_BIT_SET(Global_86218, 2))
	{
		iVar0++;
	}
	iVar1 = GlobalFunc_8965(1);
	if (GlobalFunc_9631(iVar1, 0) || MISC::IS_BIT_SET(Global_86218, 1))
	{
		iVar0++;
	}
	iVar1 = GlobalFunc_8965(0);
	if (GlobalFunc_9631(iVar1, 0) || MISC::IS_BIT_SET(Global_86218, 0))
	{
		iVar0++;
	}
	return iVar0;
}








void func_145(var uParam0, int iParam1)//Position - 0x7FE6
{
	uParam0->f_68 = iParam1;
	if (uParam0->f_68)
	{
		GlobalFunc_6715(&(uParam0->f_65));
	}
}



void func_148()//Position - 0x804A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 61;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
		}
		iVar0++;
	}
}


