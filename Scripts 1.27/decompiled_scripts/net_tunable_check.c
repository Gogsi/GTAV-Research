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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
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
	sLocal_19 = "NULL";
	while (true)
	{
		if (GlobalFunc_7814())
		{
			GlobalFunc_491();
		}
		if (func_1(&uLocal_20, &Global_270488))
		{
			GlobalFunc_491();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, var uParam1)//Position - 0x5E
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	int iVar9;
	int iVar10;
	
	if (uParam0->f_2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0->f_1)) >= uParam0->f_3)
		{
			func_4();
		}
	}
	else
	{
		if (!*uParam1)
		{
			return 0;
		}
		if (NETWORK::NETWORK_CAN_BAIL())
		{
			func_3(*uParam0, &Var3);
			iVar9 = 1534;
			iVar2 = uParam0->f_4;
			while (iVar2 <= uParam0->f_4 + 5)
			{
				if (iVar2 < iVar9)
				{
					if (iVar2 >= Var3.f_4 && iVar2 != 25)
					{
						iVar10 = GlobalFunc_1073(iVar2);
						if (iVar10 != 0 && Var3.f_5 != 0)
						{
							if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT_HASH(iVar10, Var3.f_5, &fVar0))
							{
								if (fVar0 > Var3.f_1 || fVar0 < Var3)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
							else if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar10, Var3.f_5, &iVar1))
							{
								if (iVar1 > Var3.f_3 || iVar1 < Var3.f_2)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				iVar2++;
			}
			uParam0->f_4 += 5;
			if (uParam0->f_4 >= 27)
			{
				uParam0->f_4 = 0;
				*uParam0++;
				if (*uParam0 >= 1534)
				{
					*uParam0 = 0;
					*uParam1 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_3(int iParam0, var uParam1)//Position - 0x3AB
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CASH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 2:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAX_HEALTH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 3:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAX_ARMOR_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 4:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("HOLD_UP_CASH_REWARD_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 5:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("HEALTH_REGEN_RATE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 6:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("HEALTH_REGEN_MAX_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 7:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("PED_DROP_CASH_MULTIPLIER");
			uParam1->f_4 = 0;
			break;
		
		case 12:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 813685198;
			uParam1->f_4 = 1;
			break;
		
		case 13:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_1_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 14:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_2_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 15:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_3_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 16:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_4_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 17:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_5_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 18:
			*uParam1 = 2000f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 19:
			*uParam1 = 2000f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("LOW_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 20:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 21:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("LOW_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 22:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WIN_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 23:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 24:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WIN_RACE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 25:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("CASH_MODIFIER_CRATE_DROP_GANG_ATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 26:
			*uParam1 = 0f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("HIGH_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 27:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("LOW_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 28:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("CARMOD_CAR_VAL_SELL_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 31:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("IMP_EXP_EARN_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 32:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("EARNINGS_IMPORT_EXPORT_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 33:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("HIGH_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 34:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("LOW_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 35:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("HIGH_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 36:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("LOW_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 37:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_CASH_AWARD_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 38:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 39:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_LO");
			uParam1->f_4 = 1;
			break;
		
		case 40:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_HI");
			uParam1->f_4 = 1;
			break;
		
		case 41:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPROMPTU_DM_ENTRY_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 42:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_EXPENSES_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 43:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_ENTRY_FEE_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 44:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("MAX_BET_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 45:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("MIN_BET_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 46:
			*uParam1 = 50f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SHORT_ODDS_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 47:
			*uParam1 = 1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("LONG_ODDS_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 48:
			*uParam1 = 10f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("BOOKIE_RAKE");
			uParam1->f_4 = 1;
			break;
		
		case 49:
			*uParam1 = 0f;
			uParam1->f_1 = 120000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 120000;
			uParam1->f_5 = joaat("MAX_BET_TOTAL_AMOUNT_ON_A_SINGLE_PLAYER");
			uParam1->f_4 = 1;
			break;
		
		case 50:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 51:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW");
			uParam1->f_4 = 1;
			break;
		
		case 52:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ARMORED_TRUCK");
			uParam1->f_4 = 1;
			break;
		
		case 53:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_KILLER");
			uParam1->f_4 = 1;
			break;
		
		case 54:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_TARGET");
			uParam1->f_4 = 1;
			break;
		
		case 55:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP");
			uParam1->f_4 = 1;
			break;
		
		case 56:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP_ENEMY_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 57:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 58:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK_ENEMY_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 59:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_HOLD_UPS");
			uParam1->f_4 = 1;
			break;
		
		case 60:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_IMPORTEXPORT");
			uParam1->f_4 = 1;
			break;
		
		case 61:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LESTER_NPC_TARGET");
			uParam1->f_4 = 1;
			break;
		
		case 62:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ARM_WRESTLING");
			uParam1->f_4 = 1;
			break;
		
		case 63:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_GOLF");
			uParam1->f_4 = 1;
			break;
		
		case 64:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ALL_GOLF_BONUSES");
			uParam1->f_4 = 1;
			break;
		
		case 65:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_SHOOTING_RANGE");
			uParam1->f_4 = 1;
			break;
		
		case 66:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_WIN");
			uParam1->f_4 = 1;
			break;
		
		case 67:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_TAKING_PART");
			uParam1->f_4 = 1;
			break;
		
		case 68:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_GAME");
			uParam1->f_4 = 1;
			break;
		
		case 69:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_SET");
			uParam1->f_4 = 1;
			break;
		
		case 70:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_RALLY");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 71:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_DEAD_CENTRE");
			uParam1->f_4 = 1;
			break;
		
		case 72:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_IN_THE_CIRCLE");
			uParam1->f_4 = 1;
			break;
		
		case 73:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_CLIP_THE_OUTER_RING");
			uParam1->f_4 = 1;
			break;
		
		case 74:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RACE_TO_POINT");
			uParam1->f_4 = 1;
			break;
		
		case 75:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_KILL");
			uParam1->f_4 = 1;
			break;
		
		case 76:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 77:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_2ND_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 78:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_3RD_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_3_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 80:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_6_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 81:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_10_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 82:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_HEADSHOT");
			uParam1->f_4 = 1;
			break;
		
		case 83:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_END_KILLSTREAK");
			uParam1->f_4 = 1;
			break;
		
		case 84:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_REVENGE_KILLSTREAK");
			uParam1->f_4 = 1;
			break;
		
		case 85:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_POWER_PLAY_PLAYER");
			uParam1->f_4 = 1;
			break;
		
		case 89:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PODIUM_FINISH");
			uParam1->f_4 = 1;
			break;
		
		case 90:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_WITHOUT_DYING");
			uParam1->f_4 = 1;
			break;
		
		case 91:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_POWER_PLAYS");
			uParam1->f_4 = 1;
			break;
		
		case 92:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_FINAL_KILL_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 93:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RUNOVERUSINGVEHICLEDM");
			uParam1->f_4 = 1;
			break;
		
		case 94:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_2_WITHIN_10_SECONDSDM");
			uParam1->f_4 = 1;
			break;
		
		case 95:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_FIRST_30_SECONDSDM");
			uParam1->f_4 = 1;
			break;
		
		case 96:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CLOSE_TO_DEATHDM");
			uParam1->f_4 = 1;
			break;
		
		case 97:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LEAST_5_HEADSHOT_KILLSDM");
			uParam1->f_4 = 1;
			break;
		
		case 98:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERMELEEATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 99:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_MORE_KILLS_NO_HEALTH_PACKSDM");
			uParam1->f_4 = 1;
			break;
		
		case 100:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_WITH_A_KD_RATIO_OF_AT_LEAST_2DM");
			uParam1->f_4 = 1;
			break;
		
		case 101:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_USING_ONLY_PISTOLDM");
			uParam1->f_4 = 1;
			break;
		
		case 102:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_TOP_3DM");
			uParam1->f_4 = 1;
			break;
		
		case 103:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GET_A_KILL_STREAKVDM");
			uParam1->f_4 = 1;
			break;
		
		case 104:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_TWO_ENEMIES_WITHIN_10SEC_OF_EACH_OTHERVDM");
			uParam1->f_4 = 1;
			break;
		
		case 105:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ENEMY_WITHIN_THE_60_SECONDSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 106:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLENEMY_WHILE_YOUR_VEHICLE_IS_ON_FIREVDM");
			uParam1->f_4 = 1;
			break;
		
		case 107:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RECOVER_FROM_DEATHSTREAK_FINISH_WITH_MORE_KILLS_THAN_DEATHSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 108:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERWHENDEADVDM");
			uParam1->f_4 = 1;
			break;
		
		case 109:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHMOREKILLSTHANDEATHSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 110:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GETFIRSTKILLVDM");
			uParam1->f_4 = 1;
			break;
		
		case 111:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPOWERPLAYERVDM");
			uParam1->f_4 = 1;
			break;
		
		case 112:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHVDMINTOP3VDM");
			uParam1->f_4 = 1;
			break;
		
		case 113:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_MISSIONS_BONUSES");
			uParam1->f_4 = 1;
			break;
		
		case 114:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ALL_ENEMIES_ON_A_MISSION");
			uParam1->f_4 = 1;
			break;
		
		case 115:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_INDIVIDUAL");
			uParam1->f_4 = 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_TEAM");
			uParam1->f_4 = 1;
			break;
		
		case 117:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_NOT_LOSING_ANY_LIVES_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 118:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DELIVER_A_PACKAGE_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 119:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DIFFICULTY_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 120:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_WINNERS");
			uParam1->f_4 = 1;
			break;
		
		case 121:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_LOSERS");
			uParam1->f_4 = 1;
			break;
		
		case 122:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_SURVIVOR_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 123:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 124:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_2ND_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 125:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_3RD_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 126:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_5_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 127:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_10_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 128:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_15_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 129:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SLIPSTREAM_FOR_5_SECONDS");
			uParam1->f_4 = 1;
			break;
		
		case 130:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BE_IN_FIRST_PLACE_FOR_A_WHOLE_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 131:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GO_IN_TO_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 132:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CLEAN_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 133:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FASTEST_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 134:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PERSONAL_BEST_LAP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 135:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FLYING_UNDER_BRIDGES");
			uParam1->f_4 = 1;
			break;
		
		case 136:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_WAVE_REACHED");
			uParam1->f_4 = 1;
			break;
		
		case 137:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_ENEMY_KILL");
			uParam1->f_4 = 1;
			break;
		
		case 138:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_VEHICLE_DESTROYED");
			uParam1->f_4 = 1;
			break;
		
		case 139:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_BRONZE");
			uParam1->f_4 = 1;
			break;
		
		case 140:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_SILVER");
			uParam1->f_4 = 1;
			break;
		
		case 141:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_GOLD");
			uParam1->f_4 = 1;
			break;
		
		case 142:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 1;
			break;
		
		case 143:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_1_BUDDY");
			uParam1->f_4 = 1;
			break;
		
		case 144:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_2_BUDDIES");
			uParam1->f_4 = 1;
			break;
		
		case 145:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_3_BUDDIES");
			uParam1->f_4 = 1;
			break;
		
		case 146:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_1_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 147:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_2_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 148:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_3_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 149:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_4_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 150:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_5_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 151:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_TIME_WITH_5STAR_WANTED_LEVEL");
			uParam1->f_4 = 1;
			break;
		
		case 152:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_STUNT_JUMPS");
			uParam1->f_4 = 1;
			break;
		
		case 153:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -623433531;
			uParam1->f_4 = 1;
			break;
		
		case 154:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("PSANDQS_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 155:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("EGOCHASER_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 156:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("METEORITE_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 157:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("REDWOOD_HEALTH_DEPLETE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 158:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("ORANGOTANG_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 159:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("BOURGEOIX_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 160:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 1;
			break;
		
		case 161:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_MAX");
			uParam1->f_4 = 1;
			break;
		
		case 162:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_TOTAL_MAX");
			uParam1->f_4 = 1;
			break;
		
		case 163:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 164:
			*uParam1 = -1f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("CRATE_DROP_XP");
			uParam1->f_4 = 1;
			break;
		
		case 165:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_XP");
			uParam1->f_4 = 1;
			break;
		
		case 166:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_BULLSEYE");
			uParam1->f_4 = 1;
			break;
		
		case 167:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_LEG_WON");
			uParam1->f_4 = 1;
			break;
		
		case 168:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_TAKING_PART");
			uParam1->f_4 = 1;
			break;
		
		case 169:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_MATCH_WIN");
			uParam1->f_4 = 1;
			break;
		
		case 170:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_MODIFIER_BUDDY_IN_CAR");
			uParam1->f_4 = 1;
			break;
		
		case 171:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_MISSION_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 172:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("HOSPITAL_BILL_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 173:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("CASH_DROP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 174:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("WANTED_LEVEL_BAIL_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 175:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 176:
			*uParam1 = 50f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("RACE_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 177:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("RACE_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 178:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 179:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("RACE_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 180:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 181:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("RACE_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 182:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("RACE_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 183:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 184:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("DM_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 185:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("DM_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 186:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 187:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("DM_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 188:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 189:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("DM_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 190:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("DM_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 191:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 192:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 193:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("PARACHUTING_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 194:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 195:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 196:
			*uParam1 = 200f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 197:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 198:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("PARACHUTING_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 199:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 200:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 201:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 202:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("LTS_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 203:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("LTS_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 204:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("LTS_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 205:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("LTS_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 206:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 207:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("LTS_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 208:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("LTS_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 209:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("RACE_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 210:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("RACE_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 211:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 212:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 213:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("RACE_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 214:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("RACE_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 215:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 216:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("DM_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 217:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("DM_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 218:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 1149:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = -140847750;
			uParam1->f_4 = 1;
			break;
		
		case 1150:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = -190820730;
			uParam1->f_4 = 1;
			break;
		
		case 219:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 220:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("DM_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 221:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("DM_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 222:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 223:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("PARACHUTING_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 224:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 225:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 226:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 227:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("PARACHUTING_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 228:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("PARACHUTING_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 229:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 230:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("LTS_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 231:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("LTS_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 232:
			*uParam1 = 2f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("LTS_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 233:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 234:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("LTS_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 235:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("LTS_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 236:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 237:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 238:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 239:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 240:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 241:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 242:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 243:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 244:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 245:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 246:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 247:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 248:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 249:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 250:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 251:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 252:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 253:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 254:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 255:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 256:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 257:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 258:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 259:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 260:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 261:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 262:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 263:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 264:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 265:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 266:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 267:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 268:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 269:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_1");
			uParam1->f_4 = 1;
			break;
		
		case 270:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 271:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_2");
			uParam1->f_4 = 1;
			break;
		
		case 272:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 273:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_3");
			uParam1->f_4 = 1;
			break;
		
		case 274:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 275:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_4");
			uParam1->f_4 = 1;
			break;
		
		case 276:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 277:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_1");
			uParam1->f_4 = 1;
			break;
		
		case 278:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 279:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_2");
			uParam1->f_4 = 1;
			break;
		
		case 280:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 281:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_3");
			uParam1->f_4 = 1;
			break;
		
		case 282:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 283:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_4");
			uParam1->f_4 = 1;
			break;
		
		case 284:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 285:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 286:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 287:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 288:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 289:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 290:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 291:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 292:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 293:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 294:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 295:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 296:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 297:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 298:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 299:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 300:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 301:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("RP_REWARD_PER_LIKE");
			uParam1->f_4 = 1;
			break;
		
		case 303:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_HEAD_TO_HEAD");
			uParam1->f_4 = 1;
			break;
		
		case 302:
			*uParam1 = 1f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("ELO_BANDING_SPACING");
			uParam1->f_4 = 1;
			break;
		
		case 304:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_CREW_CHALLENGES");
			uParam1->f_4 = 1;
			break;
		
		case 305:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("RP_REWARD_LIKE_CAP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 29:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("HIGH_SELLING_VEHICLES_MAX_VALUE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 30:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -723379143;
			uParam1->f_4 = 1;
			break;
		
		case 307:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 308:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 1;
			break;
		
		case 309:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("CHEAT_RESET_MINUTES");
			uParam1->f_4 = 1;
			break;
		
		case 310:
			*uParam1 = 1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY");
			uParam1->f_4 = 1;
			break;
		
		case 311:
			*uParam1 = 0f;
			uParam1->f_1 = 6000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6000;
			uParam1->f_5 = joaat("GOOD_BOY_CASH_AWARD");
			uParam1->f_4 = 1;
			break;
		
		case 312:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_HELPFUL");
			uParam1->f_4 = 1;
			break;
		
		case 313:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_FRIENDLY");
			uParam1->f_4 = 1;
			break;
		
		case 314:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_GRIEFING");
			uParam1->f_4 = 1;
			break;
		
		case 315:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_LANGUAGE");
			uParam1->f_4 = 1;
			break;
		
		case 316:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("AMOUNT_TO_DESTORYED_PVEHICLE");
			uParam1->f_4 = 1;
			break;
		
		case 317:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_VOTED_OUT");
			uParam1->f_4 = 1;
			break;
		
		case 318:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_VC_ANNOY");
			uParam1->f_4 = 1;
			break;
		
		case 319:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_TAG");
			uParam1->f_4 = 1;
			break;
		
		case 320:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_UGC");
			uParam1->f_4 = 1;
			break;
		
		case 321:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 322:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 1;
			break;
		
		case 323:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("BADSPORT_RESET_MINUTES");
			uParam1->f_4 = 1;
			break;
		
		case 324:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_1ST_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 325:
			*uParam1 = 0f;
			uParam1->f_1 = 8f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 8;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_2ND_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 326:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_3RD_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 327:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_4TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 328:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_5TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 329:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_6TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 330:
			*uParam1 = 0f;
			uParam1->f_1 = 128f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 128;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_7TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 331:
			*uParam1 = 0f;
			uParam1->f_1 = 256f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 256;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_8TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 332:
			*uParam1 = 0f;
			uParam1->f_1 = 512f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 512;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_9TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 333:
			*uParam1 = 0f;
			uParam1->f_1 = 1024f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1024;
			uParam1->f_5 = 872194479;
			uParam1->f_4 = 1;
			break;
		
		case 334:
			*uParam1 = 1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BADSPORT_BY");
			uParam1->f_4 = 1;
			break;
		
		case 335:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("KICK_VOTES_NEEDED_RATIO");
			uParam1->f_4 = 1;
			break;
		
		case 336:
			*uParam1 = 400f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 400;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1307500572;
			uParam1->f_4 = 1;
			break;
		
		case 337:
			*uParam1 = 70f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 70;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SHOP_DISCOUNT_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 338:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("SHOP_GOODBOY_DISCOUNT_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 339:
			*uParam1 = 200f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 300;
			uParam1->f_5 = 1882659457;
			uParam1->f_4 = 1;
			break;
		
		case 8:
			*uParam1 = 1000f;
			uParam1->f_1 = 1400f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 1400;
			uParam1->f_5 = 858753102;
			uParam1->f_4 = 1;
			break;
		
		case 9:
			*uParam1 = 1000f;
			uParam1->f_1 = 1400f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 1400;
			uParam1->f_5 = -1486015209;
			uParam1->f_4 = 1;
			break;
		
		case 10:
			*uParam1 = 500f;
			uParam1->f_1 = 800f;
			uParam1->f_2 = 500;
			uParam1->f_3 = 800;
			uParam1->f_5 = -1589951667;
			uParam1->f_4 = 1;
			break;
		
		case 11:
			*uParam1 = 500f;
			uParam1->f_1 = 800f;
			uParam1->f_2 = 500;
			uParam1->f_3 = 800;
			uParam1->f_5 = -1410843589;
			uParam1->f_4 = 1;
			break;
		
		case 340:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("COMMENDREPORT_MAX_STRENGTH");
			uParam1->f_4 = 1;
			break;
		
		case 341:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("MAX_NUMBER_STOLEN_VEHICLES_SOLD_DAILY");
			uParam1->f_4 = 1;
			break;
		
		case 342:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("SURVIVAL_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 343:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ROCKSTAR_VERIFIED_RP_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 344:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("IDLE_DM_BOUNTY");
			uParam1->f_4 = 1;
			break;
		
		case 346:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Stolen_Personal_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
		
		case 345:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Purchased_Personal_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
		
		case 347:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Stolen_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 348:
			*uParam1 = 6000f;
			uParam1->f_1 = 15700f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15700;
			uParam1->f_5 = joaat("ASSAULT_SMG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 349:
			*uParam1 = 6000f;
			uParam1->f_1 = 16300f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 16300;
			uParam1->f_5 = joaat("CARBINE_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 350:
			*uParam1 = 7000f;
			uParam1->f_1 = 17800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17800;
			uParam1->f_5 = joaat("ADVANCED_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 351:
			*uParam1 = 7000f;
			uParam1->f_1 = 16900f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 16900;
			uParam1->f_5 = joaat("MG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 352:
			*uParam1 = 7000f;
			uParam1->f_1 = 18500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18500;
			uParam1->f_5 = joaat("COMBAT_MG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 353:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("ASSAULT_SHOTGUN_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 354:
			*uParam1 = 19000f;
			uParam1->f_1 = 47700f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47700;
			uParam1->f_5 = joaat("HEAVY_SNIPER_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 355:
			*uParam1 = 10000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("SNIPER_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 356:
			*uParam1 = 16000f;
			uParam1->f_1 = 40500f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40500;
			uParam1->f_5 = joaat("GRENADE_LAUNCHER_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 357:
			*uParam1 = 13000f;
			uParam1->f_1 = 32800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32800;
			uParam1->f_5 = joaat("RPG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 358:
			*uParam1 = 25000f;
			uParam1->f_1 = 62500f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 62500;
			uParam1->f_5 = joaat("MINIGUN_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 359:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 360:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_PISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 361:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 362:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 363:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 364:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 365:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 366:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 367:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 368:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 369:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 370:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 371:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 372:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 373:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 374:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 375:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 376:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 377:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 378:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 379:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 380:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 381:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 382:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 383:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 384:
			*uParam1 = 185000f;
			uParam1->f_1 = 466300f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 466300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 385:
			*uParam1 = 194000f;
			uParam1->f_1 = 488800f;
			uParam1->f_2 = 194000;
			uParam1->f_3 = 488800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 386:
			*uParam1 = 189000f;
			uParam1->f_1 = 477500f;
			uParam1->f_2 = 189000;
			uParam1->f_3 = 477500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 387:
			*uParam1 = 107000f;
			uParam1->f_1 = 271300f;
			uParam1->f_2 = 107000;
			uParam1->f_3 = 271300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 388:
			*uParam1 = 110000f;
			uParam1->f_1 = 278800f;
			uParam1->f_2 = 110000;
			uParam1->f_3 = 278800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 389:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 390:
			*uParam1 = 99000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 391:
			*uParam1 = 166000f;
			uParam1->f_1 = 418800f;
			uParam1->f_2 = 166000;
			uParam1->f_3 = 418800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 392:
			*uParam1 = 158000f;
			uParam1->f_1 = 398800f;
			uParam1->f_2 = 158000;
			uParam1->f_3 = 398800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_10_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 393:
			*uParam1 = 150000f;
			uParam1->f_1 = 380000f;
			uParam1->f_2 = 150000;
			uParam1->f_3 = 380000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_11_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 394:
			*uParam1 = 116000f;
			uParam1->f_1 = 293800f;
			uParam1->f_2 = 116000;
			uParam1->f_3 = 293800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_12_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 395:
			*uParam1 = 122000f;
			uParam1->f_1 = 308800f;
			uParam1->f_2 = 122000;
			uParam1->f_3 = 308800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_13_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 396:
			*uParam1 = 119000f;
			uParam1->f_1 = 301300f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 301300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 397:
			*uParam1 = 125000f;
			uParam1->f_1 = 316300f;
			uParam1->f_2 = 125000;
			uParam1->f_3 = 316300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_15_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 398:
			*uParam1 = 134000f;
			uParam1->f_1 = 337500f;
			uParam1->f_2 = 134000;
			uParam1->f_3 = 337500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 399:
			*uParam1 = 142000f;
			uParam1->f_1 = 357500f;
			uParam1->f_2 = 142000;
			uParam1->f_3 = 357500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 400:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 401:
			*uParam1 = 63000f;
			uParam1->f_1 = 160000f;
			uParam1->f_2 = 63000;
			uParam1->f_3 = 160000;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 402:
			*uParam1 = 62000f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 403:
			*uParam1 = 72000f;
			uParam1->f_1 = 182500f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 182500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 404:
			*uParam1 = 62000f;
			uParam1->f_1 = 156300f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 156300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 405:
			*uParam1 = 70000f;
			uParam1->f_1 = 176300f;
			uParam1->f_2 = 70000;
			uParam1->f_3 = 176300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 406:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 407:
			*uParam1 = 68000f;
			uParam1->f_1 = 171300f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 171300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 408:
			*uParam1 = 66000f;
			uParam1->f_1 = 167500f;
			uParam1->f_2 = 66000;
			uParam1->f_3 = 167500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 409:
			*uParam1 = 57000f;
			uParam1->f_1 = 143800f;
			uParam1->f_2 = 57000;
			uParam1->f_3 = 143800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 410:
			*uParam1 = 49000f;
			uParam1->f_1 = 123800f;
			uParam1->f_2 = 49000;
			uParam1->f_3 = 123800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 411:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 412:
			*uParam1 = 43000f;
			uParam1->f_1 = 108800f;
			uParam1->f_2 = 43000;
			uParam1->f_3 = 108800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 413:
			*uParam1 = 55000f;
			uParam1->f_1 = 140000f;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 140000;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 414:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 415:
			*uParam1 = 46000f;
			uParam1->f_1 = 116300f;
			uParam1->f_2 = 46000;
			uParam1->f_3 = 116300;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 416:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 417:
			*uParam1 = 38000f;
			uParam1->f_1 = 96900f;
			uParam1->f_2 = 38000;
			uParam1->f_3 = 96900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 418:
			*uParam1 = 71000f;
			uParam1->f_1 = 178100f;
			uParam1->f_2 = 71000;
			uParam1->f_3 = 178100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 419:
			*uParam1 = 67000f;
			uParam1->f_1 = 168800f;
			uParam1->f_2 = 67000;
			uParam1->f_3 = 168800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 420:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 421:
			*uParam1 = 15000f;
			uParam1->f_1 = 36900f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 36900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 422:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 423:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 424:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 425:
			*uParam1 = 36000f;
			uParam1->f_1 = 90600f;
			uParam1->f_2 = 36000;
			uParam1->f_3 = 90600;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 426:
			*uParam1 = 13000f;
			uParam1->f_1 = 33100f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 427:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 428:
			*uParam1 = 14000f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 429:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 430:
			*uParam1 = 16000f;
			uParam1->f_1 = 39400f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 39400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 431:
			*uParam1 = 14000f;
			uParam1->f_1 = 36300f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 36300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 432:
			*uParam1 = 31000f;
			uParam1->f_1 = 78100f;
			uParam1->f_2 = 31000;
			uParam1->f_3 = 78100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 433:
			*uParam1 = 14000f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 434:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 435:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 436:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 437:
			*uParam1 = 33000f;
			uParam1->f_1 = 84400f;
			uParam1->f_2 = 33000;
			uParam1->f_3 = 84400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_18_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 438:
			*uParam1 = 56000f;
			uParam1->f_1 = 140600f;
			uParam1->f_2 = 56000;
			uParam1->f_3 = 140600;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_19_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 439:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_20_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 440:
			*uParam1 = 17000f;
			uParam1->f_1 = 42500f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 42500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_21_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 441:
			*uParam1 = 17000f;
			uParam1->f_1 = 41900f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 41900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_22_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 442:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_23_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 443:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("ADDER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 444:
			*uParam1 = 272000f;
			uParam1->f_1 = 687500f;
			uParam1->f_2 = 272000;
			uParam1->f_3 = 687500;
			uParam1->f_5 = joaat("AIRBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 445:
			*uParam1 = 903000f;
			uParam1->f_1 = 2281300f;
			uParam1->f_2 = 903000;
			uParam1->f_3 = 2281300;
			uParam1->f_5 = joaat("ANNIHILATOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 446:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("BALLER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 447:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = 1743540918;
			uParam1->f_4 = 1;
			break;
		
		case 448:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("BARRACKS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 449:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BATI_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 450:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BATI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 451:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BFINJECTION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 452:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("BISON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 453:
			*uParam1 = 77000f;
			uParam1->f_1 = 193800f;
			uParam1->f_2 = 77000;
			uParam1->f_3 = 193800;
			uParam1->f_5 = joaat("BULLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 454:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("BUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 455:
			*uParam1 = 866000f;
			uParam1->f_1 = 2187500f;
			uParam1->f_2 = 866000;
			uParam1->f_3 = 2187500;
			uParam1->f_5 = joaat("BUZZARD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 456:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("CARBONIZZARE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 457:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("CAVALCADE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 458:
			*uParam1 = 322000f;
			uParam1->f_1 = 812500f;
			uParam1->f_2 = 322000;
			uParam1->f_3 = 812500;
			uParam1->f_5 = joaat("CHEETAH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 459:
			*uParam1 = 260000f;
			uParam1->f_1 = 656300f;
			uParam1->f_2 = 260000;
			uParam1->f_3 = 656300;
			uParam1->f_5 = joaat("COACH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 460:
			*uParam1 = 92000f;
			uParam1->f_1 = 231300f;
			uParam1->f_2 = 92000;
			uParam1->f_3 = 231300;
			uParam1->f_5 = joaat("COGCABRIO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 461:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 125000;
			uParam1->f_5 = joaat("COMET2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 462:
			*uParam1 = 68000f;
			uParam1->f_1 = 172500f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 172500;
			uParam1->f_5 = joaat("COQUETTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 463:
			*uParam1 = 111000f;
			uParam1->f_1 = 281300f;
			uParam1->f_2 = 111000;
			uParam1->f_3 = 281300;
			uParam1->f_5 = joaat("CRUSADER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 464:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("CUBAN800_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 465:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DILETTANTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 466:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("DOUBLE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 467:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("DUMP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 468:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("DUSTER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 469:
			*uParam1 = 394000f;
			uParam1->f_1 = 993800f;
			uParam1->f_2 = 394000;
			uParam1->f_3 = 993800;
			uParam1->f_5 = joaat("ENTITYXF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 470:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("EXEMPLAR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 471:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("FELON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 472:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("FELON2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 473:
			*uParam1 = 72000f;
			uParam1->f_1 = 181300f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 181300;
			uParam1->f_5 = joaat("FELTZER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 474:
			*uParam1 = 644000f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 644000;
			uParam1->f_3 = 1625000;
			uParam1->f_5 = joaat("FROGGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 475:
			*uParam1 = 12000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("FUGITIVE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 476:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("GAUNTLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 477:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("HEXER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 478:
			*uParam1 = 218000f;
			uParam1->f_1 = 550000f;
			uParam1->f_2 = 218000;
			uParam1->f_3 = 550000;
			uParam1->f_5 = joaat("INFERNUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 479:
			*uParam1 = 9000f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("ISSI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 480:
			*uParam1 = 173000f;
			uParam1->f_1 = 437500f;
			uParam1->f_2 = 173000;
			uParam1->f_3 = 437500;
			uParam1->f_5 = joaat("JB700_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 481:
			*uParam1 = 148000f;
			uParam1->f_1 = 373800f;
			uParam1->f_2 = 148000;
			uParam1->f_3 = 373800;
			uParam1->f_5 = joaat("JETMAX_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 482:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("JOURNEY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 483:
			*uParam1 = 804000f;
			uParam1->f_1 = 2031300f;
			uParam1->f_2 = 804000;
			uParam1->f_3 = 2031300;
			uParam1->f_5 = joaat("LUXOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 484:
			*uParam1 = 149000f;
			uParam1->f_1 = 375000f;
			uParam1->f_2 = 149000;
			uParam1->f_3 = 375000;
			uParam1->f_5 = joaat("MAMMATUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 485:
			*uParam1 = 205000f;
			uParam1->f_1 = 517500f;
			uParam1->f_2 = 205000;
			uParam1->f_3 = 517500;
			uParam1->f_5 = joaat("MARQUIS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 486:
			*uParam1 = 386000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 386000;
			uParam1->f_3 = 975000;
			uParam1->f_5 = joaat("MAVERICK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 487:
			*uParam1 = 243000f;
			uParam1->f_1 = 612500f;
			uParam1->f_2 = 243000;
			uParam1->f_3 = 612500;
			uParam1->f_5 = joaat("MONROE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 488:
			*uParam1 = 13000f;
			uParam1->f_1 = 33800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33800;
			uParam1->f_5 = joaat("MULE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 489:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("NINEF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 490:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("NINEF2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 491:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("ORACLE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 492:
			*uParam1 = 69000f;
			uParam1->f_1 = 175000f;
			uParam1->f_2 = 69000;
			uParam1->f_3 = 175000;
			uParam1->f_5 = joaat("RAPIDGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 493:
			*uParam1 = 65000f;
			uParam1->f_1 = 165000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 165000;
			uParam1->f_5 = joaat("RAPIDGT2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 494:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("RENTALBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 495:
			*uParam1 = 743000f;
			uParam1->f_1 = 1875000f;
			uParam1->f_2 = 743000;
			uParam1->f_3 = 1875000;
			uParam1->f_5 = joaat("RHINO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 496:
			*uParam1 = 42000f;
			uParam1->f_1 = 106300f;
			uParam1->f_2 = 42000;
			uParam1->f_3 = 106300;
			uParam1->f_5 = joaat("ROCOTO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 497:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("RUFFIAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 498:
			*uParam1 = 22000f;
			uParam1->f_1 = 56300f;
			uParam1->f_2 = 22000;
			uParam1->f_3 = 56300;
			uParam1->f_5 = joaat("SANDKING_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 499:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("SCHWARZER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 500:
			*uParam1 = 8000f;
			uParam1->f_1 = 21100f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 21100;
			uParam1->f_5 = joaat("SEASHARK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 501:
			*uParam1 = 569000f;
			uParam1->f_1 = 1437500f;
			uParam1->f_2 = 569000;
			uParam1->f_3 = 1437500;
			uParam1->f_5 = joaat("SHAMAL_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 502:
			*uParam1 = 97000f;
			uParam1->f_1 = 245800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 245800;
			uParam1->f_5 = joaat("SQUALO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 503:
			*uParam1 = 421000f;
			uParam1->f_1 = 1062500f;
			uParam1->f_2 = 421000;
			uParam1->f_3 = 1062500;
			uParam1->f_5 = joaat("STINGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 504:
			*uParam1 = 433000f;
			uParam1->f_1 = 1093800f;
			uParam1->f_2 = 433000;
			uParam1->f_3 = 1093800;
			uParam1->f_5 = joaat("STINGERGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 505:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("STRETCH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 506:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("STUNT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 507:
			*uParam1 = 12000f;
			uParam1->f_1 = 31500f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31500;
			uParam1->f_5 = joaat("SUNTRAP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 508:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("SUPERD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 509:
			*uParam1 = 54000f;
			uParam1->f_1 = 137500f;
			uParam1->f_2 = 54000;
			uParam1->f_3 = 137500;
			uParam1->f_5 = joaat("SURANO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 510:
			*uParam1 = 990000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 990000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("TITAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 511:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 512:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 513:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 514:
			*uParam1 = 11000f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("TROPIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 515:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("VACCA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 516:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("VELUM_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 517:
			*uParam1 = 10000f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("VIGERO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 518:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("VOLTIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 519:
			*uParam1 = 30000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("ZION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 520:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("ZION2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 521:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("ZTYPE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 522:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("ASEA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 523:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 524:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 525:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 526:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 527:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 528:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 529:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 530:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 531:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 532:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 533:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 534:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 535:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 536:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 537:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 538:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 539:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 540:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 541:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 542:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSHIGHEND_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 543:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSPORT_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 544:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSLOWRIDER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 545:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSUV_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 546:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSMUSCLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 547:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSTUNER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 548:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSOFFROAD_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 549:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSBIKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 550:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 551:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 552:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 553:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 554:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 555:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 556:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 557:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 558:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 559:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 560:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 561:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 562:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 563:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 564:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 565:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 566:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 567:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 568:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 569:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 570:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 571:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 572:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 573:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 574:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 575:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 576:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 577:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 578:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 579:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 580:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 581:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 582:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 583:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 584:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 585:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 586:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 587:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 588:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 589:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 590:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 591:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 592:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 593:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 594:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 595:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 596:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 597:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 598:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 599:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 600:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 601:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 602:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 603:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 604:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 605:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 606:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 607:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 608:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 609:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 610:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 611:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 612:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 613:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 614:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 615:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 616:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 617:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 618:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 619:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 620:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 621:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 622:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 623:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 624:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 625:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 626:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 627:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 628:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 629:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 630:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 631:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 632:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 633:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 634:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 635:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 636:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 637:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 638:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 639:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 640:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 641:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 642:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 643:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 644:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 645:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 646:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 647:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 648:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 649:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 650:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 651:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 652:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 653:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 654:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 655:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 656:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 657:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 658:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 659:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 660:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 661:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 662:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 663:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 664:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 665:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Bone_Skull");
			uParam1->f_4 = 1;
			break;
		
		case 666:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pogo");
			uParam1->f_4 = 1;
			break;
		
		case 667:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Green_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 668:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pink_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 669:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Red_Monster");
			uParam1->f_4 = 1;
			break;
		
		case 670:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Helmets_Shatter_Pattern_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 671:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Helmets_Crimson_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 672:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Helmets_Skull_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 673:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Helmets_Ace_of_Spades_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 674:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Helmets_Flamejob_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 675:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Bone_Skull");
			uParam1->f_4 = 1;
			break;
		
		case 676:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pogo");
			uParam1->f_4 = 1;
			break;
		
		case 677:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Green_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 678:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pink_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 679:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Red_Monster");
			uParam1->f_4 = 1;
			break;
		
		case 680:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Helmets_Shatter_Pattern_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 681:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Helmets_Crimson_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 682:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Helmets_Skull_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 683:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Helmets_Ace_of_Spades_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 684:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Helmets_Flamejob_Helmet");
			uParam1->f_4 = 1;
			break;
		
		case 685:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_SERPENTINE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 686:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_TRAPPEDINABOX_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 687:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_CLOWNING_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 688:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HEAD_BANGER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 689:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HUSTLER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 690:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_WIN_EVER_MODE_ONCE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 691:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HOLD_UP_SHOPS_4_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 692:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1914127564;
			uParam1->f_4 = 1;
			break;
		
		case 693:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 983218273;
			uParam1->f_4 = 1;
			break;
		
		case 694:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 178678567;
			uParam1->f_4 = 1;
			break;
		
		case 695:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_13_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 696:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_16_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 697:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_17_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 698:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_19_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 699:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1411998323;
			uParam1->f_4 = 1;
			break;
		
		case 700:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_25_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 701:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_38_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 702:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_46_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 703:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 704:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 705:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 706:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLACK_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 707:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 708:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RAINBOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 709:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 710:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_YELLOWWHITEBLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 711:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_WHITEREDBROWN_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 712:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUEWHITERED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 713:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 714:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLACK_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 715:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BROWNYELLOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 716:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 717:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 718:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 719:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 720:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 721:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 722:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 723:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 724:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 725:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 726:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 727:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 728:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 729:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 730:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 731:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 732:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 733:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 734:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 735:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 736:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 737:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 738:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 739:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 740:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 741:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 742:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 743:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 744:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 745:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 746:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 747:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 748:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 749:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 750:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 751:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 752:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 753:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 754:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 193513430;
			uParam1->f_4 = 1;
			break;
		
		case 755:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1232863007;
			uParam1->f_4 = 1;
			break;
		
		case 756:
			*uParam1 = 5000f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("BODHI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 757:
			*uParam1 = 10000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = joaat("DUNE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 758:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("SADLER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 759:
			*uParam1 = 19000f;
			uParam1->f_1 = 47500f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47500;
			uParam1->f_5 = joaat("SANDKING2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 760:
			*uParam1 = 371000f;
			uParam1->f_1 = 937500f;
			uParam1->f_2 = 371000;
			uParam1->f_3 = 937500;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_SEDAN");
			uParam1->f_4 = 1;
			break;
		
		case 761:
			*uParam1 = 7000f;
			uParam1->f_1 = 18300f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18300;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_GUSENBERG");
			uParam1->f_4 = 1;
			break;
		
		case 762:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ALPHA");
			uParam1->f_4 = 1;
			break;
		
		case 763:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_HUNTLEY");
			uParam1->f_4 = 1;
			break;
		
		case 764:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_JESTER");
			uParam1->f_4 = 1;
			break;
		
		case 765:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MASSACRO");
			uParam1->f_4 = 1;
			break;
		
		case 766:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_TURISMOR");
			uParam1->f_4 = 1;
			break;
		
		case 767:
			*uParam1 = 359000f;
			uParam1->f_1 = 906300f;
			uParam1->f_2 = 359000;
			uParam1->f_3 = 906300;
			uParam1->f_5 = joaat("business_vehicles_Zentorno");
			uParam1->f_4 = 1;
			break;
		
		case 768:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ASTEROPE");
			uParam1->f_4 = 1;
			break;
		
		case 769:
			*uParam1 = 11000f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_BOBCATXL");
			uParam1->f_4 = 1;
			break;
		
		case 770:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_CAVALCADE2");
			uParam1->f_4 = 1;
			break;
		
		case 771:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_GRANGER");
			uParam1->f_4 = 1;
			break;
		
		case 772:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_INTRUDER");
			uParam1->f_4 = 1;
			break;
		
		case 773:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MINIVAN");
			uParam1->f_4 = 1;
			break;
		
		case 774:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_PREMIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 775:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_RADI");
			uParam1->f_4 = 1;
			break;
		
		case 776:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STANIER");
			uParam1->f_4 = 1;
			break;
		
		case 777:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STRATUM");
			uParam1->f_4 = 1;
			break;
		
		case 778:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_WASHINGTON");
			uParam1->f_4 = 1;
			break;
		
		case 779:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLE_VESTRA");
			uParam1->f_4 = 1;
			break;
		
		case 780:
			*uParam1 = 7000f;
			uParam1->f_1 = 17500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17500;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 781:
			*uParam1 = 8750f;
			uParam1->f_1 = 21900f;
			uParam1->f_2 = 8750;
			uParam1->f_3 = 21900;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 782:
			*uParam1 = 7000f;
			uParam1->f_1 = 17500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17500;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 783:
			*uParam1 = 8750f;
			uParam1->f_1 = 21900f;
			uParam1->f_2 = 8750;
			uParam1->f_3 = 21900;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 784:
			*uParam1 = 7000f;
			uParam1->f_1 = 17500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17500;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 785:
			*uParam1 = 8750f;
			uParam1->f_1 = 21900f;
			uParam1->f_2 = 8750;
			uParam1->f_3 = 21900;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 786:
			*uParam1 = 7000f;
			uParam1->f_1 = 17500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17500;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 787:
			*uParam1 = 8750f;
			uParam1->f_1 = 21900f;
			uParam1->f_2 = 8750;
			uParam1->f_3 = 21900;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 788:
			*uParam1 = 7000f;
			uParam1->f_1 = 17500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17500;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_PURPLE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 789:
			*uParam1 = 8750f;
			uParam1->f_1 = 21900f;
			uParam1->f_2 = 8750;
			uParam1->f_3 = 21900;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_GREEN_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 790:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("XP_TUNABLE_COLLECT_MISSION_PACKAGE");
			uParam1->f_4 = 1;
			break;
		
		case 791:
			*uParam1 = 0f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("XP_TUNABLE_VOTE_FOR_CONTENT");
			uParam1->f_4 = 1;
			break;
		
		case 792:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 793:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_XP_REWARD_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 794:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CTF_PED");
			uParam1->f_4 = 1;
			break;
		
		case 795:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("EXPIRED_CHALLENGE_BASIC_XP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 796:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("JOB_RP_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 797:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_DM_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 798:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_RACE_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 799:
			*uParam1 = 0f;
			uParam1->f_1 = 7500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 7500;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_MISSION_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 800:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MISSION_AI_KILL_RP");
			uParam1->f_4 = 1;
			break;
		
		case 801:
			*uParam1 = 0f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("MISSION_AI_KILL_AMOUNT_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 802:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("RACE_WORLD_RECORD_RP");
			uParam1->f_4 = 1;
			break;
		
		case 803:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("KILL_A_MUGGER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 804:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SING_IN_SHOWER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 805:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PLAYLIST_WINNER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 806:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("LESTER_BOUNTY_CUT");
			uParam1->f_4 = 1;
			break;
		
		case 807:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("REQUEST_A_JOB_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 808:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("MECHANIC_DAILY_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 809:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("PLAYER_CASHDROP_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 810:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PLAYLIST_ENTRY_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 811:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("MUGGER_AMOUNT_STEAL");
			uParam1->f_4 = 1;
			break;
		
		case 812:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("MUGGER_STEAL_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 813:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_1_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 814:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_2_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 815:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_3_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 816:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_4_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 817:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_5_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 818:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("BUSINESS2_THRUST_PRICE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 819:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_FASHION_HOCKEY");
			uParam1->f_4 = 1;
			break;
		
		case 820:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("DLC_METAL_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 821:
			*uParam1 = 5600f;
			uParam1->f_1 = 14100f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14100;
			uParam1->f_5 = joaat("DLC_CIRCUIT_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 822:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_CARBON_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 823:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SNS_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 824:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SNS_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 825:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 826:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 827:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_HEAVY_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 828:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_HEAVY_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 829:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 830:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 831:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 2261411;
			uParam1->f_4 = 1;
			break;
		
		case 832:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = -948414722;
			uParam1->f_4 = 1;
			break;
		
		case 833:
			*uParam1 = 5900f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_PIRATE_SKULL");
			uParam1->f_4 = 1;
			break;
		
		case 834:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 1;
			break;
		
		case 835:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_ARM");
			uParam1->f_4 = 1;
			break;
		
		case 836:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_1");
			uParam1->f_4 = 1;
			break;
		
		case 837:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_2");
			uParam1->f_4 = 1;
			break;
		
		case 838:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_3");
			uParam1->f_4 = 1;
			break;
		
		case 839:
			*uParam1 = 12100f;
			uParam1->f_1 = 30600f;
			uParam1->f_2 = 12100;
			uParam1->f_3 = 30600;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_4");
			uParam1->f_4 = 1;
			break;
		
		case 840:
			*uParam1 = 12900f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 12900;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_5");
			uParam1->f_4 = 1;
			break;
		
		case 841:
			*uParam1 = 13600f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 13600;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_6");
			uParam1->f_4 = 1;
			break;
		
		case 842:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_7");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 843:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("DLC_VEHICLE_BF_BIFTA");
			uParam1->f_4 = 1;
			break;
		
		case 844:
			*uParam1 = 19800f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 19800;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("DLC_VEHICLE_CANIS_KALAHARI");
			uParam1->f_4 = 1;
			break;
		
		case 845:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_PARADISE");
			uParam1->f_4 = 1;
			break;
		
		case 846:
			*uParam1 = 160900f;
			uParam1->f_1 = 406300f;
			uParam1->f_2 = 160900;
			uParam1->f_3 = 406300;
			uParam1->f_5 = joaat("DLC_VEHICLE_PEGASSI_SPEEDER");
			uParam1->f_4 = 1;
			break;
		
		case 847:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("DLC_VEHICLE_DINKA_THRUST");
			uParam1->f_4 = 1;
			break;
		
		case 848:
			*uParam1 = 85100f;
			uParam1->f_1 = 215000f;
			uParam1->f_2 = 85100;
			uParam1->f_3 = 215000;
			uParam1->f_5 = joaat("DLC_VEHICLE_COIL_VOLTIC_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 849:
			*uParam1 = 62400f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62400;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_BANSHEE_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 850:
			*uParam1 = 78700f;
			uParam1->f_1 = 198800f;
			uParam1->f_2 = 78700;
			uParam1->f_3 = 198800;
			uParam1->f_5 = joaat("DLC_VEHICLE_INVERTO_COQUETTE_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 851:
			*uParam1 = 431100f;
			uParam1->f_1 = 1088800f;
			uParam1->f_2 = 431100;
			uParam1->f_3 = 1088800;
			uParam1->f_5 = joaat("DLC_VEHICLE_GROTTI_STINGER_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 852:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("DLC_VEHICLE_VAPID_DOMINATOR");
			uParam1->f_4 = 1;
			break;
		
		case 853:
			*uParam1 = 39600f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 39600;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1630934099;
			uParam1->f_4 = 1;
			break;
		
		case 854:
			*uParam1 = 17800f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 17800;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("DLC_VEHICLE_SCHYSTER_FUSILADE");
			uParam1->f_4 = 1;
			break;
		
		case 855:
			*uParam1 = 11900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 11900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("DLC_VEHICLE_MAIBATSU_PENUMBRA");
			uParam1->f_4 = 1;
			break;
		
		case 856:
			*uParam1 = 29700f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 29700;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL_XS");
			uParam1->f_4 = 1;
			break;
		
		case 857:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 858:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 859:
			*uParam1 = 6000f;
			uParam1->f_1 = 15100f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15100;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 860:
			*uParam1 = 5700f;
			uParam1->f_1 = 14400f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 14400;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE");
			uParam1->f_4 = 1;
			break;
		
		case 861:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 862:
			*uParam1 = 5600f;
			uParam1->f_1 = 14200f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14200;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE");
			uParam1->f_4 = 1;
			break;
		
		case 863:
			*uParam1 = 7300f;
			uParam1->f_1 = 18400f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 18400;
			uParam1->f_5 = joaat("DLC_WEAPON_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 864:
			*uParam1 = 7200f;
			uParam1->f_1 = 18100f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 18100;
			uParam1->f_5 = joaat("DLC_WEAPON_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 865:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("REQUEST_COPS_TURN_BLIND_EYE_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 866:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 1;
			break;
		
		case 867:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_ARM");
			uParam1->f_4 = 1;
			break;
		
		case 868:
			*uParam1 = 0.1f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 869:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 870:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("SURVIVAL_RP_CAP_PER_WAVE");
			uParam1->f_4 = 1;
			break;
		
		case 1090:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("REQUEST_A_HEIST_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 871:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 872:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 873:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_UNDER_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 874:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 875:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_BLOW_UP_VEHICLE_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 876:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PED_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 877:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 878:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_RATE");
			uParam1->f_4 = 1;
			break;
		
		case 879:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("DLC_hipster_modifier_Vulcar_Pigalle");
			uParam1->f_4 = 1;
			break;
		
		case 880:
			*uParam1 = 0f;
			uParam1->f_1 = 40f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40;
			uParam1->f_5 = joaat("NUMBER_OF_CHALLENGES_PER_DAY");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 881:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("DLC_HIPSTER_CLOTHING_FEMALE_PURPLE_FLORAL_BABYDOLL");
			uParam1->f_4 = 1;
			break;
		
		case 882:
			*uParam1 = 79200f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 79200;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VAPID_BLADE");
			uParam1->f_4 = 1;
			break;
		
		case 883:
			*uParam1 = 99000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA");
			uParam1->f_4 = 1;
			break;
		
		case 884:
			*uParam1 = 69300f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 69300;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DECLASSE_RHAPSODY");
			uParam1->f_4 = 1;
			break;
		
		case 885:
			*uParam1 = 59400f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 59400;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VULCAR_WARRENER");
			uParam1->f_4 = 1;
			break;
		
		case 886:
			*uParam1 = 42100f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 42100;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_PANTO");
			uParam1->f_4 = 1;
			break;
		
		case 887:
			*uParam1 = 123300f;
			uParam1->f_1 = 400000f;
			uParam1->f_2 = 123300;
			uParam1->f_3 = 400000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DUBSTA3");
			uParam1->f_4 = 1;
			break;
		
		case 888:
			*uParam1 = 24800f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 24800;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BLAZER3");
			uParam1->f_4 = 1;
			break;
		
		case 889:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO");
			uParam1->f_4 = 1;
			break;
		
		case 890:
			*uParam1 = 47500f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 47500;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO2");
			uParam1->f_4 = 1;
			break;
		
		case 891:
			*uParam1 = 10900f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_REBEL2");
			uParam1->f_4 = 1;
			break;
		
		case 892:
			*uParam1 = 5400f;
			uParam1->f_1 = 13800f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 13800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_SURFER");
			uParam1->f_4 = 1;
			break;
		
		case 893:
			*uParam1 = 27200f;
			uParam1->f_1 = 68800f;
			uParam1->f_2 = 27200;
			uParam1->f_3 = 68800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_TAILGATER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 894:
			*uParam1 = 7900f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 7900;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_YOUGA");
			uParam1->f_4 = 1;
			break;
		
		case 895:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PURE_BLACK");
			uParam1->f_4 = 1;
			break;
		
		case 896:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_1");
			uParam1->f_4 = 1;
			break;
		
		case 897:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_2");
			uParam1->f_4 = 1;
			break;
		
		case 898:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_3");
			uParam1->f_4 = 1;
			break;
		
		case 899:
			*uParam1 = 12100f;
			uParam1->f_1 = 30600f;
			uParam1->f_2 = 12100;
			uParam1->f_3 = 30600;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_4");
			uParam1->f_4 = 1;
			break;
		
		case 900:
			*uParam1 = 11100f;
			uParam1->f_1 = 28100f;
			uParam1->f_2 = 11100;
			uParam1->f_3 = 28100;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE");
			uParam1->f_4 = 1;
			break;
		
		case 901:
			*uParam1 = 8200f;
			uParam1->f_1 = 20600f;
			uParam1->f_2 = 8200;
			uParam1->f_3 = 20600;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE");
			uParam1->f_4 = 1;
			break;
		
		case 902:
			*uParam1 = 6000f;
			uParam1->f_1 = 15200f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15200;
			uParam1->f_5 = joaat("DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 903:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GREY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 904:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_TABBY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 905:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_RED_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 906:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 907:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 908:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_WHITE_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 909:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 910:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MASK_BLACK_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 911:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 912:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_TABBY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 913:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_RED_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 914:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 915:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 916:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_WHITE_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 917:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 918:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BLACK_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 919:
			*uParam1 = 12400f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_PURE_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 1;
			break;
		
		case 920:
			*uParam1 = 11600f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_BRUSHED_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 1;
			break;
		
		case 921:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -188849823;
			uParam1->f_4 = 1;
			break;
		
		case 922:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("Car_impound_fee");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 923:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_HYDRA");
			uParam1->f_4 = 1;
			break;
		
		case 924:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_BESRA");
			uParam1->f_4 = 1;
			break;
		
		case 925:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_MILJET");
			uParam1->f_4 = 1;
			break;
		
		case 926:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_COQUETTE2");
			uParam1->f_4 = 1;
			break;
		
		case 927:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_1");
			uParam1->f_4 = 1;
			break;
		
		case 928:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_2");
			uParam1->f_4 = 1;
			break;
		
		case 929:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_3");
			uParam1->f_4 = 1;
			break;
		
		case 930:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardxp");
			uParam1->f_4 = 1;
			break;
		
		case 931:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardcap");
			uParam1->f_4 = 1;
			break;
		
		case 932:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PURCHASED_TATTOO_APPLICATION_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 933:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("SURVIVAL_COMPLETE_BONUS");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 934:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_1_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 935:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_2_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 936:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_3_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 937:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_4_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 938:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_5_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 939:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_6_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 940:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_7_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 941:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_8_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 942:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_9_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 943:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_10_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 944:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 945:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_EASY");
			uParam1->f_4 = 1;
			break;
		
		case 946:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_NORMAL");
			uParam1->f_4 = 1;
			break;
		
		case 947:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_HARD");
			uParam1->f_4 = 1;
			break;
		
		case 948:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 949:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASIC_VALUE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 974:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_FLIGHT_SCHOOL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 973:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ELITAS_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 972:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_BRAZIL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 971:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_JAPAN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 970:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_AUSTRALIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 969:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SPAIN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 968:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_GERMANY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 967:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_FRANCE_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 966:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_CANADA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 965:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SCOTLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 964:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_UNITED_KINGDOM_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 963:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_USA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 962:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_SUNRISE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 961:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_AIRBORNE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 960:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_HIGH_ALTITUDE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 959:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_SHADOW_CHUTE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 958:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_DESERT_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 957:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_AIR_FORCE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 956:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_2");
			uParam1->f_4 = 1;
			break;
		
		case 955:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_1");
			uParam1->f_4 = 1;
			break;
		
		case 954:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_BUCKINGHAM_MILJET");
			uParam1->f_4 = 1;
			break;
		
		case 950:
			*uParam1 = 10000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("PS_FLIGHT_SUIT");
			uParam1->f_4 = 1;
			break;
		
		case 951:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC");
			uParam1->f_4 = 1;
			break;
		
		case 952:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 953:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_WESTERN_BESRA");
			uParam1->f_4 = 1;
			break;
		
		case 1045:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("REQUEST_HELI_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1046:
			*uParam1 = 0f;
			uParam1->f_1 = 750f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 750;
			uParam1->f_5 = joaat("REQUEST_BOAT_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1047:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("REQUEST_PEGASUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1048:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("REQUEST_THIEF1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1049:
			*uParam1 = 0f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("REQUEST_ARMY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 975:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 976:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 977:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 978:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 979:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 980:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 981:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 982:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 983:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 984:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 985:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 986:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 987:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 988:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 989:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 990:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 991:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 992:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 993:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 994:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 995:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 996:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 997:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 998:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 999:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1000:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1001:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1002:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1003:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1004:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1005:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1006:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1007:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1008:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1009:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1010:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1011:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1012:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1013:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1014:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1015:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1016:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1017:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1018:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1019:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1020:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1021:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1022:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1023:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_4");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1024:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1025:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1026:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1027:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1028:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1029:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1030:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1031:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1032:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1033:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1034:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1035:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1036:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1037:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1038:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1039:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1040:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1041:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1042:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1043:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1044:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1050:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CARS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1051:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CARMOD_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1052:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CLOTHES_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1053:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("HAIRDO_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1054:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("TATTOO_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1055:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("WEAPONS_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1056:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("PLANES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1057:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("HELIS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1058:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("BOATS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1059:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("PROPERTY_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1060:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("BIKES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1061:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 1062:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1063:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("ELEGY2_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1064:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("KHAMELION_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1065:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("HOTKNIFE_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1066:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("CARBONRS_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1067:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CRATEDROPBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1068:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("SECURITYVANBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1069:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPORTEXPORTBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1070:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CARBONRS_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1071:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("LESTERKILLTARGETBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1072:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("PLANETAKEDOWNBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1073:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("DISTRACTPOLICEBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1074:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("NUMBER_OF_SCRIPTS_IN_HISTORY_LIST");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1075:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ITALY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1076:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SWITZERLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1077:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_JAMAICA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1078:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_COLOMBIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1079:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_NORWAY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1080:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SWEDEN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1081:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_BELGIUM_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1082:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_MEXICO_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1083:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_AUSTRIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1084:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_RUSSIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1085:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ARGENTINA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1086:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_TURKEY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1087:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_IRELAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1088:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_WALES_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1089:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ENGLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1097:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("CASH_REWARD_BET_STAKE_GIFT");
			uParam1->f_4 = 1;
			break;
		
		case 1098:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 1100:
			*uParam1 = 2f;
			uParam1->f_1 = SYSTEM::TO_FLOAT(32);
			uParam1->f_2 = 2;
			uParam1->f_3 = 30;
			uParam1->f_5 = 869147615;
			uParam1->f_4 = 1;
			break;
		
		case 1099:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1414317463;
			uParam1->f_4 = 1;
			break;
		
		case 1101:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_BLACK_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1102:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_GRAY_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1103:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1104:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_TAN_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1105:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_FOREST_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1106:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_BLACK_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1107:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_GRAY_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1108:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1109:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_TAN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1110:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_GREEN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1111:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_BLACK_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1112:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_GRAY_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1113:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1114:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_TAN_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1115:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_FOREST_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1116:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_BLACK_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1117:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_GRAY_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1118:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1119:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_TAN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1120:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_GREEN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1121:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("LTS_LCC_INNOVATION");
			uParam1->f_4 = 1;
			break;
		
		case 1122:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("LTS_SHITZU_HAKUCHOU");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1123:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("LTS_LAMPADATI_FURORE_GT");
			uParam1->f_4 = 1;
			break;
		
		case 1124:
			*uParam1 = 25000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("LTS_CANIS_KALAHARI_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 1125:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN");
			uParam1->f_4 = 1;
			break;
		
		case 1126:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 1127:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 1128:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 1129:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_FINLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1130:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_DENMARK_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1131:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NETHERLANDS_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1132:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PORTUGAL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1133:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CHINA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1134:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CROATIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1135:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CZECH_REPUBLIC_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1136:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_HUNGARY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1137:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_LIECHTENSTEIN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1138:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_MALTA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1139:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NEW_ZEALAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1140:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NIGERIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1141:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_POLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1142:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PUERTO_RICO_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1143:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SLOVAKIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1144:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SLOVENIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1145:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SOUTH_AFRICA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1146:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SOUTH_KOREA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1147:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PALESTINE_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1148:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_ISRAEL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1151:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1467004393;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1152:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BRUTE_BOXVILLE");
			uParam1->f_4 = 1;
			break;
		
		case 1153:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = -1877970625;
			uParam1->f_4 = 1;
			break;
		
		case 1154:
			*uParam1 = 85000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 85000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 639828788;
			uParam1->f_4 = 1;
			break;
		
		case 1155:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_DINKA_ENDURO");
			uParam1->f_4 = 1;
			break;
		
		case 1156:
			*uParam1 = 30000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 290523077;
			uParam1->f_4 = 1;
			break;
		
		case 1157:
			*uParam1 = 185000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -768747205;
			uParam1->f_4 = 1;
			break;
		
		case 1158:
			*uParam1 = 120000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAMMOTH_HYDRA");
			uParam1->f_4 = 1;
			break;
		
		case 1159:
			*uParam1 = 65000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT_PICKUP");
			uParam1->f_4 = 1;
			break;
		
		case 1160:
			*uParam1 = 330000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT");
			uParam1->f_4 = 1;
			break;
		
		case 1161:
			*uParam1 = 35000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -644832470;
			uParam1->f_4 = 1;
			break;
		
		case 1162:
			*uParam1 = 65000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -842117179;
			uParam1->f_4 = 1;
			break;
		
		case 1163:
			*uParam1 = 200000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_PRINCIPE_LECTRO");
			uParam1->f_4 = 1;
			break;
		
		case 1164:
			*uParam1 = 15000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAIBATSU_MULE");
			uParam1->f_4 = 1;
			break;
		
		case 1165:
			*uParam1 = 800000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 800000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_SAVAGE");
			uParam1->f_4 = 1;
			break;
		
		case 1166:
			*uParam1 = 350000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 350000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_KARIN_TECHNICAL");
			uParam1->f_4 = 1;
			break;
		
		case 1167:
			*uParam1 = 900000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 900000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BUCKINGHAM_VALKYRIE");
			uParam1->f_4 = 1;
			break;
		
		case 1168:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1531297517;
			uParam1->f_4 = 1;
			break;
		
		case 1091:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -1369228807;
			uParam1->f_4 = 1;
			break;
		
		case 1092:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 15605478;
			uParam1->f_4 = 1;
			break;
		
		case 1093:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 40165126;
			uParam1->f_4 = 1;
			break;
		
		case 1094:
			*uParam1 = 0f;
			uParam1->f_1 = 2E+07f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000000;
			uParam1->f_5 = 1109954891;
			uParam1->f_4 = 1;
			break;
		
		case 1169:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1779378572;
			uParam1->f_4 = 1;
			break;
		
		case 1170:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -736791602;
			uParam1->f_4 = 1;
			break;
		
		case 1171:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1697146966;
			uParam1->f_4 = 1;
			break;
		
		case 1172:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -478542030;
			uParam1->f_4 = 1;
			break;
		
		case 1173:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("HEIST_SERIES_A_FUNDING_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1174:
			*uParam1 = 0f;
			uParam1->f_1 = 1350000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1350000;
			uParam1->f_5 = -1535523991;
			uParam1->f_4 = 1;
			break;
		
		case 1061:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 1062:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 1;
			break;
		
		case 1098:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 1099:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1414317463;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1175:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -1108389569;
			uParam1->f_4 = 1;
			break;
		
		case 1176:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -927762540;
			uParam1->f_4 = 1;
			break;
		
		case 1177:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -691376018;
			uParam1->f_4 = 1;
			break;
		
		case 1178:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("CASH_REWARD_OVERRIDE_ELITE_OBJECTIVES_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1179:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -1188165573;
			uParam1->f_4 = 1;
			break;
		
		case 1180:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -461998205;
			uParam1->f_4 = 1;
			break;
		
		case 1181:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 732304828;
			uParam1->f_4 = 1;
			break;
		
		case 1182:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1749060561;
			uParam1->f_4 = 1;
			break;
		
		case 1183:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -489806450;
			uParam1->f_4 = 1;
			break;
		
		case 1184:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1236345409;
			uParam1->f_4 = 1;
			break;
		
		case 1185:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = -1140254079;
			uParam1->f_4 = 1;
			break;
		
		case 1186:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 201975816;
			uParam1->f_4 = 1;
			break;
		
		case 1187:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -36998299;
			uParam1->f_4 = 1;
			break;
		
		case 1188:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = 862138175;
			uParam1->f_4 = 1;
			break;
		
		case 1189:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1056121904;
			uParam1->f_4 = 1;
			break;
		
		case 1190:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 241292275;
			uParam1->f_4 = 1;
			break;
		
		case 1191:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 140847792;
			uParam1->f_4 = 1;
			break;
		
		case 1192:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1910687798;
			uParam1->f_4 = 1;
			break;
		
		case 1193:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -1964597960;
			uParam1->f_4 = 1;
			break;
		
		case 1194:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -2014262411;
			uParam1->f_4 = 1;
			break;
		
		case 1195:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 1026862599;
			uParam1->f_4 = 1;
			break;
		
		case 1196:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = 1305296770;
			uParam1->f_4 = 1;
			break;
		
		case 1197:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1536718037;
			uParam1->f_4 = 1;
			break;
		
		case 1198:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 331939322;
			uParam1->f_4 = 1;
			break;
		
		case 1199:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -2098242609;
			uParam1->f_4 = 1;
			break;
		
		case 1200:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -367313129;
			uParam1->f_4 = 1;
			break;
		
		case 1201:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = -1868925097;
			uParam1->f_4 = 1;
			break;
		
		case 1202:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -707243232;
			uParam1->f_4 = 1;
			break;
		
		case 1203:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1669356470;
			uParam1->f_4 = 1;
			break;
		
		case 1204:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -1138011519;
			uParam1->f_4 = 1;
			break;
		
		case 1205:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1944119143;
			uParam1->f_4 = 1;
			break;
		
		case 1213:
			*uParam1 = 0f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 72000;
			uParam1->f_5 = -365813198;
			uParam1->f_4 = 1;
			break;
		
		case 1212:
			*uParam1 = 0f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 36000;
			uParam1->f_5 = -118287201;
			uParam1->f_4 = 1;
			break;
		
		case 1217:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1241897426;
			uParam1->f_4 = 1;
			break;
		
		case 1218:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -284978087;
			uParam1->f_4 = 1;
			break;
		
		case 1214:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -76405223;
			uParam1->f_4 = 1;
			break;
		
		case 1215:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1215175122;
			uParam1->f_4 = 1;
			break;
		
		case 1216:
			*uParam1 = 0f;
			uParam1->f_1 = 45f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 45;
			uParam1->f_5 = -527933388;
			uParam1->f_4 = 1;
			break;
		
		case 1250:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 1596686975;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1095:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 1949822091;
			uParam1->f_4 = 1;
			break;
		
		case 1096:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1282713733;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1219:
			*uParam1 = 20790f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 20790;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -682446881;
			uParam1->f_4 = 1;
			break;
		
		case 1220:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 116463396;
			uParam1->f_4 = 1;
			break;
		
		case 1221:
			*uParam1 = 30690f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 30690;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 715349067;
			uParam1->f_4 = 1;
			break;
		
		case 1222:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("CGTONG_CHEVAL_MARSHALL");
			uParam1->f_4 = 1;
			break;
		
		case 1223:
			*uParam1 = 35145f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 35145;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -575136563;
			uParam1->f_4 = 1;
			break;
		
		case 1224:
			*uParam1 = 655875f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 655875;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -1711319395;
			uParam1->f_4 = 1;
			break;
		
		case 1225:
			*uParam1 = 200f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -1885561778;
			uParam1->f_4 = 1;
			break;
		
		case 1226:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -64032203;
			uParam1->f_4 = 1;
			break;
		
		case 1227:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 563884031;
			uParam1->f_4 = 1;
			break;
		
		case 1228:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 833422834;
			uParam1->f_4 = 1;
			break;
		
		case 1229:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 675628469;
			uParam1->f_4 = 1;
			break;
		
		case 1230:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1942782413;
			uParam1->f_4 = 1;
			break;
		
		case 1231:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1012074199;
			uParam1->f_4 = 1;
			break;
		
		case 1232:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1060446307;
			uParam1->f_4 = 1;
			break;
		
		case 1233:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 2120301072;
			uParam1->f_4 = 1;
			break;
		
		case 1234:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -863377025;
			uParam1->f_4 = 1;
			break;
		
		case 1235:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 79198076;
			uParam1->f_4 = 1;
			break;
		
		case 1236:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -222535300;
			uParam1->f_4 = 1;
			break;
		
		case 1237:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1942366844;
			uParam1->f_4 = 1;
			break;
		
		case 1238:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -441395635;
			uParam1->f_4 = 1;
			break;
		
		case 1239:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -633145824;
			uParam1->f_4 = 1;
			break;
		
		case 1240:
			*uParam1 = 10000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 275702167;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1241:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DINKA_JESTER_RACECAR");
			uParam1->f_4 = 1;
			break;
		
		case 1242:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR");
			uParam1->f_4 = 1;
			break;
		
		case 1243:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_RAT_TRUCK");
			uParam1->f_4 = 1;
			break;
		
		case 1244:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_SLAMVAN");
			uParam1->f_4 = 1;
			break;
		
		case 1245:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_SPRUNK_BUFFALO");
			uParam1->f_4 = 1;
			break;
		
		case 1246:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_VAPID_PISSWASSER_DOMINATOR");
			uParam1->f_4 = 1;
			break;
		
		case 1247:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_REDWOOD_GAUNTLET");
			uParam1->f_4 = 1;
			break;
		
		case 1248:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DECLASSE_BURGER_SHOT_STALLION");
			uParam1->f_4 = 1;
			break;
		
		case 1249:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("WEAPONS_XMAS14_HOMING_LAUNCHER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1251:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_FIRST_PLAY_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1252:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_REPLAY_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1253:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MINIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 1;
			break;
		
		case 1254:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MAXIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 1;
			break;
		
		case 1255:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_1");
			uParam1->f_4 = 1;
			break;
		
		case 1256:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_2");
			uParam1->f_4 = 1;
			break;
		
		case 1257:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_3");
			uParam1->f_4 = 1;
			break;
		
		case 1258:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_4");
			uParam1->f_4 = 1;
			break;
		
		case 1259:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_5");
			uParam1->f_4 = 1;
			break;
		
		case 1260:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_6");
			uParam1->f_4 = 1;
			break;
		
		case 1261:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -402353485;
			uParam1->f_4 = 1;
			break;
		
		case 1262:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 430863878;
			uParam1->f_4 = 1;
			break;
		
		case 1263:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 2083142404;
			uParam1->f_4 = 1;
			break;
		
		case 1264:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -326111676;
			uParam1->f_4 = 1;
			break;
		
		case 1265:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1656333677;
			uParam1->f_4 = 1;
			break;
		
		case 1266:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1852964703;
			uParam1->f_4 = 1;
			break;
		
		case 1267:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1787114410;
			uParam1->f_4 = 1;
			break;
		
		case 1268:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -849109764;
			uParam1->f_4 = 1;
			break;
		
		case 1269:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = 599942040;
			uParam1->f_4 = 1;
			break;
		
		case 1270:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1189510226;
			uParam1->f_4 = 1;
			break;
		
		case 1271:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 633502183;
			uParam1->f_4 = 1;
			break;
		
		case 1272:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = -1019356302;
			uParam1->f_4 = 1;
			break;
		
		case 1273:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = -217455654;
			uParam1->f_4 = 1;
			break;
		
		case 1274:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_GOLD_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1275:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_SILVER_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1276:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_BRONZE_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1277:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1585383603;
			uParam1->f_4 = 1;
			break;
		
		case 1278:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 1667263936;
			uParam1->f_4 = 1;
			break;
		
		case 1279:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -662029971;
			uParam1->f_4 = 1;
			break;
		
		case 1280:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 1479256181;
			uParam1->f_4 = 1;
			break;
		
		case 1281:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 2116066248;
			uParam1->f_4 = 1;
			break;
		
		case 1282:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1062623225;
			uParam1->f_4 = 1;
			break;
		
		case 1283:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -397274584;
			uParam1->f_4 = 1;
			break;
		
		case 1284:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -170073122;
			uParam1->f_4 = 1;
			break;
		
		case 1285:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 2131625723;
			uParam1->f_4 = 1;
			break;
		
		case 1286:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1821454383;
			uParam1->f_4 = 1;
			break;
		
		case 1287:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1138422695;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1288:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1269060505;
			uParam1->f_4 = 1;
			break;
		
		case 1289:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1954484836;
			uParam1->f_4 = 1;
			break;
		
		case 1290:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 281319684;
			uParam1->f_4 = 1;
			break;
		
		case 1291:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -262054156;
			uParam1->f_4 = 1;
			break;
		
		case 1292:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -247589881;
			uParam1->f_4 = 1;
			break;
		
		case 1293:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1308507187;
			uParam1->f_4 = 1;
			break;
		
		case 1294:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1083949574;
			uParam1->f_4 = 1;
			break;
		
		case 1295:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 420923772;
			uParam1->f_4 = 1;
			break;
		
		case 1296:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -1886472598;
			uParam1->f_4 = 1;
			break;
		
		case 1297:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 2133726633;
			uParam1->f_4 = 1;
			break;
		
		case 1298:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -199819395;
			uParam1->f_4 = 1;
			break;
		
		case 1299:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -507946302;
			uParam1->f_4 = 1;
			break;
		
		case 1300:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 1039930178;
			uParam1->f_4 = 1;
			break;
		
		case 1301:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 596116364;
			uParam1->f_4 = 1;
			break;
		
		case 1302:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 475493675;
			uParam1->f_4 = 1;
			break;
		
		case 1303:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 118835879;
			uParam1->f_4 = 1;
			break;
		
		case 1304:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 537918616;
			uParam1->f_4 = 1;
			break;
		
		case 1305:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 164679706;
			uParam1->f_4 = 1;
			break;
		
		case 1306:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1005337439;
			uParam1->f_4 = 1;
			break;
		
		case 1307:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -177821882;
			uParam1->f_4 = 1;
			break;
		
		case 1308:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 605775880;
			uParam1->f_4 = 1;
			break;
		
		case 1309:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 994350686;
			uParam1->f_4 = 1;
			break;
		
		case 1310:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 703591349;
			uParam1->f_4 = 1;
			break;
		
		case 1311:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 386584043;
			uParam1->f_4 = 1;
			break;
		
		case 1312:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 89860748;
			uParam1->f_4 = 1;
			break;
		
		case 1313:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -263389072;
			uParam1->f_4 = 1;
			break;
		
		case 1314:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -553198108;
			uParam1->f_4 = 1;
			break;
		
		case 1315:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1969611153;
			uParam1->f_4 = 1;
			break;
		
		case 1316:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -528257471;
			uParam1->f_4 = 1;
			break;
		
		case 1317:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1499559503;
			uParam1->f_4 = 1;
			break;
		
		case 1318:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1946052474;
			uParam1->f_4 = 1;
			break;
		
		case 1319:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1708744574;
			uParam1->f_4 = 1;
			break;
		
		case 1320:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -2064452993;
			uParam1->f_4 = 1;
			break;
		
		case 1321:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 2039519006;
			uParam1->f_4 = 1;
			break;
		
		case 1322:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1187949946;
			uParam1->f_4 = 1;
			break;
		
		case 1323:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1440816611;
			uParam1->f_4 = 1;
			break;
		
		case 1324:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1542235699;
			uParam1->f_4 = 1;
			break;
		
		case 1325:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1721859582;
			uParam1->f_4 = 1;
			break;
		
		case 1326:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -17216460;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1327:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 2135517534;
			uParam1->f_4 = 1;
			break;
		
		case 1328:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -2013854817;
			uParam1->f_4 = 1;
			break;
		
		case 1329:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 1299723789;
			uParam1->f_4 = 1;
			break;
		
		case 1330:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1343230522;
			uParam1->f_4 = 1;
			break;
		
		case 1331:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1006143612;
			uParam1->f_4 = 1;
			break;
		
		case 1332:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1310928081;
			uParam1->f_4 = 1;
			break;
		
		case 1333:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1145413714;
			uParam1->f_4 = 1;
			break;
		
		case 1334:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -91243912;
			uParam1->f_4 = 1;
			break;
		
		case 1335:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1471181088;
			uParam1->f_4 = 1;
			break;
		
		case 1336:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1537238317;
			uParam1->f_4 = 1;
			break;
		
		case 1337:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -236186605;
			uParam1->f_4 = 1;
			break;
		
		case 1338:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1845534777;
			uParam1->f_4 = 1;
			break;
		
		case 1339:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = 1432380296;
			uParam1->f_4 = 1;
			break;
		
		case 1340:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -815423306;
			uParam1->f_4 = 1;
			break;
		
		case 1341:
			*uParam1 = 0f;
			uParam1->f_1 = 12000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 12000;
			uParam1->f_5 = 542824547;
			uParam1->f_4 = 1;
			break;
		
		case 1342:
			*uParam1 = 0.1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1651561769;
			uParam1->f_4 = 1;
			break;
		
		case 1343:
			*uParam1 = 0.0001f;
			uParam1->f_1 = 1.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 373723198;
			uParam1->f_4 = 1;
			break;
		
		case 1344:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1964434213;
			uParam1->f_4 = 1;
			break;
		
		case 1345:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -2110655325;
			uParam1->f_4 = 1;
			break;
		
		case 1346:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -945941977;
			uParam1->f_4 = 1;
			break;
		
		case 1347:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1543624979;
			uParam1->f_4 = 1;
			break;
		
		case 1348:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("EXPENSES_HEIST_COST_PERCENTAGE_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1349:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = 162756378;
			uParam1->f_4 = 1;
			break;
		
		case 1350:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1198047495;
			uParam1->f_4 = 1;
			break;
		
		case 1351:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1236056555;
			uParam1->f_4 = 1;
			break;
		
		case 1352:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1805291589;
			uParam1->f_4 = 1;
			break;
		
		case 1353:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("HEISTS_PREP_PERCENTAGE_CUT_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1354:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 268818202;
			uParam1->f_4 = 1;
			break;
		
		case 1355:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = -1770038462;
			uParam1->f_4 = 1;
			break;
		
		case 1356:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = -1757323514;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1357:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -1729596367;
			uParam1->f_4 = 1;
			break;
		
		case 1358:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -1718001628;
			uParam1->f_4 = 1;
			break;
		
		case 1359:
			*uParam1 = 6250f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6250;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -1575846672;
			uParam1->f_4 = 1;
			break;
		
		case 1360:
			*uParam1 = 5900f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 36000;
			uParam1->f_5 = 823111805;
			uParam1->f_4 = 1;
			break;
		
		case 1361:
			*uParam1 = 6150f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 37000;
			uParam1->f_5 = -8427937;
			uParam1->f_4 = 1;
			break;
		
		case 1362:
			*uParam1 = 5750f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5750;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -871806160;
			uParam1->f_4 = 1;
			break;
		
		case 1363:
			*uParam1 = 6050f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 37000;
			uParam1->f_5 = -463233030;
			uParam1->f_4 = 1;
			break;
		
		case 1364:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -193691263;
			uParam1->f_4 = 1;
			break;
		
		case 1365:
			*uParam1 = 5850f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5850;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -397055287;
			uParam1->f_4 = 1;
			break;
		
		case 1366:
			*uParam1 = 5600f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -661216548;
			uParam1->f_4 = 1;
			break;
		
		case 1367:
			*uParam1 = 6000f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 36000;
			uParam1->f_5 = -536846871;
			uParam1->f_4 = 1;
			break;
		
		case 1368:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = 1037974626;
			uParam1->f_4 = 1;
			break;
		
		case 1369:
			*uParam1 = 6400f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6400;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -758174303;
			uParam1->f_4 = 1;
			break;
		
		case 1370:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 1566897804;
			uParam1->f_4 = 1;
			break;
		
		case 1371:
			*uParam1 = 5050f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5050;
			uParam1->f_3 = 31000;
			uParam1->f_5 = -2111510718;
			uParam1->f_4 = 1;
			break;
		
		case 1372:
			*uParam1 = 5150f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5150;
			uParam1->f_3 = 31000;
			uParam1->f_5 = -1028732531;
			uParam1->f_4 = 1;
			break;
		
		case 1373:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -46284235;
			uParam1->f_4 = 1;
			break;
		
		case 1374:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -237381221;
			uParam1->f_4 = 1;
			break;
		
		case 1375:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = 242573637;
			uParam1->f_4 = 1;
			break;
		
		case 1376:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 1022653368;
			uParam1->f_4 = 1;
			break;
		
		case 1377:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -201919806;
			uParam1->f_4 = 1;
			break;
		
		case 1378:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -1431057455;
			uParam1->f_4 = 1;
			break;
		
		case 1379:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 1549920548;
			uParam1->f_4 = 1;
			break;
		
		case 1380:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 2102711115;
			uParam1->f_4 = 1;
			break;
		
		case 1381:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 438329486;
			uParam1->f_4 = 1;
			break;
		
		case 1382:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 738158216;
			uParam1->f_4 = 1;
			break;
		
		case 1383:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -918926708;
			uParam1->f_4 = 1;
			break;
		
		case 1384:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1373128818;
			uParam1->f_4 = 1;
			break;
		
		case 1385:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 494546616;
			uParam1->f_4 = 1;
			break;
		
		case 1386:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = -1284435538;
			uParam1->f_4 = 1;
			break;
		
		case 1387:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -365514956;
			uParam1->f_4 = 1;
			break;
		
		case 1388:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -1943656460;
			uParam1->f_4 = 1;
			break;
		
		case 1389:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 1061694457;
			uParam1->f_4 = 1;
			break;
		
		case 1390:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -462275974;
			uParam1->f_4 = 1;
			break;
		
		case 1391:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 174638335;
			uParam1->f_4 = 1;
			break;
		
		case 1392:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = -466789562;
			uParam1->f_4 = 1;
			break;
		
		case 1393:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1266026401;
			uParam1->f_4 = 1;
			break;
		
		case 1394:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 844534447;
			uParam1->f_4 = 1;
			break;
		
		case 1395:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1044673943;
			uParam1->f_4 = 1;
			break;
		
		case 1396:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = -1850514921;
			uParam1->f_4 = 1;
			break;
		
		case 1397:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 1756201683;
			uParam1->f_4 = 1;
			break;
		
		case 1398:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 372185970;
			uParam1->f_4 = 1;
			break;
		
		case 1399:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = 1562446673;
			uParam1->f_4 = 1;
			break;
		
		case 1400:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = 1431347163;
			uParam1->f_4 = 1;
			break;
		
		case 1401:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = -2018857623;
			uParam1->f_4 = 1;
			break;
		
		case 1402:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = 1121234308;
			uParam1->f_4 = 1;
			break;
		
		case 1403:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = 16087852;
			uParam1->f_4 = 1;
			break;
		
		case 1404:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = -1506306818;
			uParam1->f_4 = 1;
			break;
		
		case 1405:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 615535070;
			uParam1->f_4 = 1;
			break;
		
		case 1406:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = 1420361769;
			uParam1->f_4 = 1;
			break;
		
		case 1407:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = 1354405463;
			uParam1->f_4 = 1;
			break;
		
		case 1408:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = 588752792;
			uParam1->f_4 = 1;
			break;
		
		case 1409:
			*uParam1 = 6450f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6450;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -45476468;
			uParam1->f_4 = 1;
			break;
		
		case 1410:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 951218996;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1411:
			*uParam1 = 5800f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 35000;
			uParam1->f_5 = 1006612972;
			uParam1->f_4 = 1;
			break;
		
		case 1412:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = -1591209532;
			uParam1->f_4 = 1;
			break;
		
		case 1413:
			*uParam1 = 8350f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1643342144;
			uParam1->f_4 = 1;
			break;
		
		case 1414:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 387600112;
			uParam1->f_4 = 1;
			break;
		
		case 1415:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -630209226;
			uParam1->f_4 = 1;
			break;
		
		case 1416:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -1518640763;
			uParam1->f_4 = 1;
			break;
		
		case 1417:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 147778759;
			uParam1->f_4 = 1;
			break;
		
		case 1418:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -623557692;
			uParam1->f_4 = 1;
			break;
		
		case 1419:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -457563433;
			uParam1->f_4 = 1;
			break;
		
		case 1420:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 1272142809;
			uParam1->f_4 = 1;
			break;
		
		case 1421:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 868761443;
			uParam1->f_4 = 1;
			break;
		
		case 1422:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -530226293;
			uParam1->f_4 = 1;
			break;
		
		case 1423:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1177716250;
			uParam1->f_4 = 1;
			break;
		
		case 1424:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 1397316083;
			uParam1->f_4 = 1;
			break;
		
		case 1425:
			*uParam1 = 4900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1814667424;
			uParam1->f_4 = 1;
			break;
		
		case 1426:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -92922076;
			uParam1->f_4 = 1;
			break;
		
		case 1427:
			*uParam1 = 4800f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 4800;
			uParam1->f_3 = 29000;
			uParam1->f_5 = -325789041;
			uParam1->f_4 = 1;
			break;
		
		case 1428:
			*uParam1 = 7400f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7400;
			uParam1->f_3 = 44000;
			uParam1->f_5 = 1079257332;
			uParam1->f_4 = 1;
			break;
		
		case 1429:
			*uParam1 = 7150f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7150;
			uParam1->f_3 = 43000;
			uParam1->f_5 = 390774800;
			uParam1->f_4 = 1;
			break;
		
		case 1430:
			*uParam1 = 6800f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6800;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 1348540931;
			uParam1->f_4 = 1;
			break;
		
		case 1431:
			*uParam1 = 7050f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 7050;
			uParam1->f_3 = 42000;
			uParam1->f_5 = -607564288;
			uParam1->f_4 = 1;
			break;
		
		case 1432:
			*uParam1 = 6650f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6650;
			uParam1->f_3 = 40000;
			uParam1->f_5 = 646238916;
			uParam1->f_4 = 1;
			break;
		
		case 1433:
			*uParam1 = 6950f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6950;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 168933341;
			uParam1->f_4 = 1;
			break;
		
		case 1434:
			*uParam1 = 6550f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6550;
			uParam1->f_3 = 40000;
			uParam1->f_5 = 240704550;
			uParam1->f_4 = 1;
			break;
		
		case 1435:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 1870450114;
			uParam1->f_4 = 1;
			break;
		
		case 1436:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = 1659202257;
			uParam1->f_4 = 1;
			break;
		
		case 1437:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 1719875364;
			uParam1->f_4 = 1;
			break;
		
		case 1438:
			*uParam1 = 7200f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 43000;
			uParam1->f_5 = -206626676;
			uParam1->f_4 = 1;
			break;
		
		case 1439:
			*uParam1 = 7300f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 44000;
			uParam1->f_5 = -858654121;
			uParam1->f_4 = 1;
			break;
		
		case 1440:
			*uParam1 = 5400f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 32000;
			uParam1->f_5 = 1362868671;
			uParam1->f_4 = 1;
			break;
		
		case 1441:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = 1318738727;
			uParam1->f_4 = 1;
			break;
		
		case 1442:
			*uParam1 = 5250f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5250;
			uParam1->f_3 = 32000;
			uParam1->f_5 = -696473003;
			uParam1->f_4 = 1;
			break;
		
		case 1443:
			*uParam1 = 5550f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5550;
			uParam1->f_3 = 33000;
			uParam1->f_5 = 1073348675;
			uParam1->f_4 = 1;
			break;
		
		case 1444:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = -985532639;
			uParam1->f_4 = 1;
			break;
		
		case 1445:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 183500134;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1446:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -164210352;
			uParam1->f_4 = 1;
			break;
		
		case 1447:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = 1872053592;
			uParam1->f_4 = 1;
			break;
		
		case 1448:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = -1375849199;
			uParam1->f_4 = 1;
			break;
		
		case 1449:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = -1589468666;
			uParam1->f_4 = 1;
			break;
		
		case 1450:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = -931642865;
			uParam1->f_4 = 1;
			break;
		
		case 1451:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = -192875152;
			uParam1->f_4 = 1;
			break;
		
		case 1452:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = -1805484546;
			uParam1->f_4 = 1;
			break;
		
		case 1453:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -1252693940;
			uParam1->f_4 = 1;
			break;
		
		case 1454:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = 1188109527;
			uParam1->f_4 = 1;
			break;
		
		case 1455:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = 1887430707;
			uParam1->f_4 = 1;
			break;
		
		case 1456:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = 1348348209;
			uParam1->f_4 = 1;
			break;
		
		case 1457:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = 416578167;
			uParam1->f_4 = 1;
			break;
		
		case 1458:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 844638271;
			uParam1->f_4 = 1;
			break;
		
		case 1459:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -27925398;
			uParam1->f_4 = 1;
			break;
		
		case 1460:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = -97710512;
			uParam1->f_4 = 1;
			break;
		
		case 1461:
			*uParam1 = 9450f;
			uParam1->f_1 = 57000f;
			uParam1->f_2 = 9450;
			uParam1->f_3 = 57000;
			uParam1->f_5 = -1560965010;
			uParam1->f_4 = 1;
			break;
		
		case 1462:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = 628262743;
			uParam1->f_4 = 1;
			break;
		
		case 1463:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 499519505;
			uParam1->f_4 = 1;
			break;
		
		case 1464:
			*uParam1 = 2750f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 202689733;
			uParam1->f_4 = 1;
			break;
		
		case 1465:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -1722815609;
			uParam1->f_4 = 1;
			break;
		
		case 1466:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1991533546;
			uParam1->f_4 = 1;
			break;
		
		case 1467:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -1791754603;
			uParam1->f_4 = 1;
			break;
		
		case 1468:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 1813423691;
			uParam1->f_4 = 1;
			break;
		
		case 1469:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1623792009;
			uParam1->f_4 = 1;
			break;
		
		case 1470:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2073796128;
			uParam1->f_4 = 1;
			break;
		
		case 1471:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1992504606;
			uParam1->f_4 = 1;
			break;
		
		case 1472:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 867076051;
			uParam1->f_4 = 1;
			break;
		
		case 1473:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2086339040;
			uParam1->f_4 = 1;
			break;
		
		case 1474:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2054389455;
			uParam1->f_4 = 1;
			break;
		
		case 1475:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1893802109;
			uParam1->f_4 = 1;
			break;
		
		case 1476:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1185920970;
			uParam1->f_4 = 1;
			break;
		
		case 1477:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1077619944;
			uParam1->f_4 = 1;
			break;
		
		case 1478:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -232563180;
			uParam1->f_4 = 1;
			break;
		
		case 1479:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1025128029;
			uParam1->f_4 = 1;
			break;
		
		case 1480:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1184224905;
			uParam1->f_4 = 1;
			break;
		
		case 1481:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1837989889;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1482:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1468325815;
			uParam1->f_4 = 1;
			break;
		
		case 1483:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1489577493;
			uParam1->f_4 = 1;
			break;
		
		case 1484:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1442218045;
			uParam1->f_4 = 1;
			break;
		
		case 1485:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -270424695;
			uParam1->f_4 = 1;
			break;
		
		case 1486:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1554855494;
			uParam1->f_4 = 1;
			break;
		
		case 1487:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -419251367;
			uParam1->f_4 = 1;
			break;
		
		case 1488:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1156096398;
			uParam1->f_4 = 1;
			break;
		
		case 1489:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -301512982;
			uParam1->f_4 = 1;
			break;
		
		case 1490:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2078262605;
			uParam1->f_4 = 1;
			break;
		
		case 1491:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -113903074;
			uParam1->f_4 = 1;
			break;
		
		case 1492:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 145823683;
			uParam1->f_4 = 1;
			break;
		
		case 1493:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -1778646383;
			uParam1->f_4 = 1;
			break;
		
		case 1494:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 215034897;
			uParam1->f_4 = 1;
			break;
		
		case 1495:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1898021273;
			uParam1->f_4 = 1;
			break;
		
		case 1496:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 571859420;
			uParam1->f_4 = 1;
			break;
		
		case 1497:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 2061753098;
			uParam1->f_4 = 1;
			break;
		
		case 1498:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 310707750;
			uParam1->f_4 = 1;
			break;
		
		case 1499:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1096195218;
			uParam1->f_4 = 1;
			break;
		
		case 1500:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1303464864;
			uParam1->f_4 = 1;
			break;
		
		case 1501:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 332547550;
			uParam1->f_4 = 1;
			break;
		
		case 1502:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1109079635;
			uParam1->f_4 = 1;
			break;
		
		case 1503:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -501042997;
			uParam1->f_4 = 1;
			break;
		
		case 1504:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1829780298;
			uParam1->f_4 = 1;
			break;
		
		case 1505:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1466060103;
			uParam1->f_4 = 1;
			break;
		
		case 1506:
			*uParam1 = 5900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -693611144;
			uParam1->f_4 = 1;
			break;
		
		case 1507:
			*uParam1 = 7100f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7100;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 1924117099;
			uParam1->f_4 = 1;
			break;
		
		case 1508:
			*uParam1 = 6050f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 1153855224;
			uParam1->f_4 = 1;
			break;
		
		case 1509:
			*uParam1 = 12400f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -1623493982;
			uParam1->f_4 = 1;
			break;
		
		case 1510:
			*uParam1 = 6150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1433836543;
			uParam1->f_4 = 1;
			break;
		
		case 1511:
			*uParam1 = 8900f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 8900;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 399093662;
			uParam1->f_4 = 1;
			break;
		
		case 1512:
			*uParam1 = 9500f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 9500;
			uParam1->f_3 = 29000;
			uParam1->f_5 = -1230281035;
			uParam1->f_4 = 1;
			break;
		
		case 1513:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 1574338118;
			uParam1->f_4 = 1;
			break;
		
		case 1514:
			*uParam1 = 9000f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 27000;
			uParam1->f_5 = -280547334;
			uParam1->f_4 = 1;
			break;
		
		case 1515:
			*uParam1 = 8050f;
			uParam1->f_1 = 24000f;
			uParam1->f_2 = 8050;
			uParam1->f_3 = 24000;
			uParam1->f_5 = 295997592;
			uParam1->f_4 = 1;
			break;
		
		case 1516:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1693174653;
			uParam1->f_4 = 1;
			break;
		
		case 1517:
			*uParam1 = 11150f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 11150;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -245039713;
			uParam1->f_4 = 1;
			break;
		
		case 1518:
			*uParam1 = 6350f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6350;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 258805324;
			uParam1->f_4 = 1;
			break;
		
		case 1519:
			*uParam1 = 13500f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 13500;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -1421508725;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1520:
			*uParam1 = 480000f;
			uParam1->f_1 = 1463000f;
			uParam1->f_2 = 480000;
			uParam1->f_3 = 1463000;
			uParam1->f_5 = 1325082693;
			uParam1->f_4 = 1;
			break;
		
		case 1521:
			*uParam1 = 2500000f;
			uParam1->f_1 = 1.25E+07f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 12500000;
			uParam1->f_5 = joaat("LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE");
			uParam1->f_4 = 1;
			break;
		
		case 1522:
			*uParam1 = 950000f;
			uParam1->f_1 = 2925000f;
			uParam1->f_2 = 950000;
			uParam1->f_3 = 2925000;
			uParam1->f_5 = -644339642;
			uParam1->f_4 = 1;
			break;
		
		case 1523:
			*uParam1 = 2500000f;
			uParam1->f_1 = 7725000f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 7725000;
			uParam1->f_5 = -1809229921;
			uParam1->f_4 = 1;
			break;
		
		case 1524:
			*uParam1 = 95000f;
			uParam1->f_1 = 293000f;
			uParam1->f_2 = 95000;
			uParam1->f_3 = 293000;
			uParam1->f_5 = 1992732606;
			uParam1->f_4 = 1;
			break;
		
		case 1525:
			*uParam1 = 400000f;
			uParam1->f_1 = 1268000f;
			uParam1->f_2 = 400000;
			uParam1->f_3 = 1268000;
			uParam1->f_5 = 956103291;
			uParam1->f_4 = 1;
			break;
		
		case 1526:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1213298425;
			uParam1->f_4 = 1;
			break;
		
		case 1527:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -1701382164;
			uParam1->f_4 = 1;
			break;
		
		case 1528:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -2116304043;
			uParam1->f_4 = 1;
			break;
		
		case 1529:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1525818559;
			uParam1->f_4 = 1;
			break;
		
		case 1530:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 473787773;
			uParam1->f_4 = 1;
			break;
		
		case 1531:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -2079394194;
			uParam1->f_4 = 1;
			break;
		
		case 1532:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1995714857;
			uParam1->f_4 = 1;
			break;
		
		case 1533:
			*uParam1 = 5800f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -273899566;
			uParam1->f_4 = 1;
			break;
	}
}

void func_4()//Position - 0x12F6E
{
	MISC::_CLEAR_TACTICAL_ANALYSIS_POINTS();
	MISC::ADD_STUNT_JUMP(-9f, -9f, -9f, -10f, -10f, -10f, -25f, -25f, -25f, -28f, -28f, -28f, 0f, 0f, 0f, 0, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(-9f, -9f, -9f, -10f, -10f, -10f, 0, 1, 1, 1);
	func_4();
}













