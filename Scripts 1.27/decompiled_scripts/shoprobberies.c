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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
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
	struct<487> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	bool bLocal_575 = 0;
	int iLocal_576 = 0;
	char* sLocal_577 = NULL;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	bool bLocal_581 = 0;
	int iLocal_582 = 0;
	struct<33> Local_583 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_616 = 1;
	var uLocal_617[3] = { 0, 0, 0 };
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	var uLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	int iLocal_641 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_48 = { 500f, 500f, 500f };
	iLocal_629 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_303();
	}
	if (GlobalFunc_6687(0))
	{
		bLocal_573 = true;
		iLocal_570 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_3)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_39(14))
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_4719(&Local_583, 3);
	func_289(&uScriptParam_0);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var3 = { 24.94562f, -1344.954f, 29.49f };
	Var6 = { Var0 - Var3 };
	Var6 = { Var3 - Var0 };
	fVar12 = 147.297f;
	Var9 = { -1228.443f, -905.3416f, 13.523f };
	Var6 = { Var9 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var6 = { GlobalFunc_415(Var6, fVar12) };
	if ((((GlobalFunc_875() && !GlobalFunc_874()) || Global_97297) || Global_24446) || Global_97342 != -1)
	{
		if (GlobalFunc_875() && !GlobalFunc_874())
		{
		}
		else if (Global_97297)
		{
		}
		else if (Global_24446)
		{
		}
		else if (Global_97342 != -1)
		{
		}
		if (!func_285())
		{
			GlobalFunc_5312(&(Local_67.f_470), 64);
			func_281(1);
		}
		else
		{
			func_281(0);
		}
		func_303();
	}
	else if (Global_SAVE_DATA.ShopRob_NumTimesRobbed_Array[iLocal_567] > 0)
	{
		if (func_280())
		{
			func_278(iLocal_567, Local_67.f_486.f_9.f_2, &Var13, &Var16);
			MISC::CLEAR_AREA_OF_PEDS(Local_67.f_181, 15f, 0);
			uLocal_566 = PED::ADD_SCENARIO_BLOCKING_AREA(Var13, Var16, 0, 1, 1, 1);
			if (!func_285())
			{
				func_281(1);
			}
			else
			{
				func_281(0);
				GlobalFunc_5211(&(Local_67.f_470), 512);
			}
			iLocal_66 = 2;
		}
		else
		{
			func_281(0);
		}
		if (!func_275())
		{
			iLocal_63 = 10;
			iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar19 == 0)
			{
				Local_67.f_2.f_12 = 1;
			}
			else
			{
				Local_67.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_281(0);
	}
	while (true)
	{
		GlobalFunc_8277(&Local_583);
		if (func_267())
		{
			func_303();
		}
		if (!bLocal_573)
		{
			if (GlobalFunc_6687(0))
			{
				func_266();
				bLocal_573 = true;
			}
		}
		switch (iLocal_66)
		{
			case 0:
				func_237();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_285())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!GlobalFunc_4728("SHOP_CLOSED", func_4(iLocal_567)))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
							GlobalFunc_4727("SHOP_CLOSED", func_4(iLocal_567));
						}
					}
				}
				else
				{
					if (GlobalFunc_4728("SHOP_CLOSED", func_4(iLocal_567)))
					{
						HUD::CLEAR_HELP(1);
					}
					if (GlobalFunc_747(Local_67.f_470, 512))
					{
						func_281(1);
						GlobalFunc_5312(&(Local_67.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}




char* func_4(int iParam0)//Position - 0x39F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_5()//Position - 0x447
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_234();
	func_231();
	func_226();
	func_220();
	func_202();
	func_180();
	func_174();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!GlobalFunc_579())
	{
		func_36();
		func_26();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_67))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_67, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_575 = false;
	if (!PED::IS_PED_INJURED(Local_67.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_67.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_67.f_2, 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_67.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_67.f_2))
				{
					if (!GlobalFunc_1536() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_575 = true;
					}
				}
			}
		}
	}
	if (bLocal_575)
	{
		if (!iLocal_576 && GlobalFunc_747(Local_67.f_470, 4))
		{
			iVar2 = GlobalFunc_1535(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_577 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_577, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_577 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_577, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_577 = "";
			}
			iLocal_576 = 1;
		}
	}
	else if (iLocal_576)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_577))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_577, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_577, -1056964608);
			}
		}
		iLocal_576 = 0;
	}
	switch (iLocal_63)
	{
		case 0:
			if (func_285())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_63 = 12;
				}
				else
				{
					iLocal_51 = 2;
					iLocal_58 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_67))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_67, 0))
						{
							if ((GlobalFunc_1535(Local_67) == joaat("weapon_unarmed") || GlobalFunc_1535(Local_67) == joaat("object")) || GlobalFunc_1535(Local_67) == joaat("weapon_briefcase"))
							{
								iLocal_61 = 1;
								iLocal_63 = 1;
							}
							else if (!GlobalFunc_747(Local_67.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_61 = 2;
									iLocal_63 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_61 = 3;
									iLocal_63 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_61 = 4;
									iLocal_63 = 5;
								}
								else
								{
									iLocal_63 = 2;
								}
								GlobalFunc_5211(&(Local_67.f_470), 1);
							}
						}
						else
						{
							iLocal_63 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_51 = 2;
				iLocal_63 = 3;
			}
			else if (!func_285() && func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1))
			{
				iLocal_63 = 12;
			}
			break;
		
		case 1:
			if (!GlobalFunc_747(Local_67.f_470, 2))
			{
				iLocal_52 = 1;
				iLocal_57 = 1;
				GlobalFunc_5211(&(Local_67.f_470), 2);
			}
			iLocal_63 = 5;
			break;
		
		case 2:
			iLocal_52 = 5;
			iLocal_57 = 3;
			iLocal_63 = 5;
			break;
		
		case 3:
			iLocal_52 = 6;
			iLocal_57 = 4;
			iLocal_63 = 5;
			break;
		
		case 5:
			if (!func_285() && !GlobalFunc_747(Local_67.f_470, 1))
			{
				iLocal_63 = 0;
			}
			break;
		
		case 6:
			if (iLocal_52 >= 13)
			{
				if (Local_67.f_2.f_12)
				{
					if (!GlobalFunc_111())
					{
						iLocal_63 = 7;
					}
				}
				else
				{
					iLocal_63 = 8;
				}
				iLocal_53 = 1;
			}
			break;
		
		case 7:
			if (GlobalFunc_747(Local_67.f_470, 256))
			{
				func_18();
				MISC::CLEAR_BIT(&Global_86218, 3);
				iLocal_63 = 13;
			}
			break;
		
		case 8:
			if (GlobalFunc_747(Local_67.f_470, 16))
			{
				if (func_16())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
					{
						if (!PED::IS_PED_RAGDOLL(Local_67.f_2))
						{
							if (func_285())
							{
								if (Local_67.f_486 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
									{
										TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_59 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_67.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								iLocal_59 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_86218, 3);
					iLocal_63 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_60 = 7;
			if (iLocal_64 == 1)
			{
				iLocal_63 = 8;
			}
			else
			{
				iLocal_63 = 13;
			}
			break;
		
		case 10:
			if (func_285())
			{
				iLocal_63 = 11;
			}
			break;
		
		case 11:
			if (!GlobalFunc_226(&(Local_67.f_477)))
			{
				if (!Local_67.f_2.f_12)
				{
					iLocal_52 = 28;
				}
				else
				{
					iLocal_52 = 29;
				}
				GlobalFunc_7777(&(Local_67.f_477));
			}
			else if (GlobalFunc_5182(&(Local_67.f_477)) > 5f)
			{
				func_15(1, 0);
				iLocal_63 = 13;
			}
			else if (GlobalFunc_5182(&(Local_67.f_477)) > 1.5f)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_59 != 12)
					{
						iLocal_59 = 12;
						if (!Local_67.f_2.f_12)
						{
							func_7();
						}
						else
						{
							func_18();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!GlobalFunc_226(&(Local_67.f_477)))
			{
				func_6();
				iLocal_52 = 30;
				iLocal_59 = 12;
				GlobalFunc_7777(&(Local_67.f_477));
			}
			else if (GlobalFunc_5182(&(Local_67.f_477)) > 3f)
			{
				iLocal_63 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()//Position - 0xA20
{
	var uVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_67.f_2.f_6, 2f, -1, 0.25f, 0, Local_67.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_67.f_2, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	GlobalFunc_5211(&(Local_67.f_470), 128);
}

void func_7()//Position - 0xA7E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_565);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_565);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_565);
		TASK::TASK_PERFORM_SEQUENCE(Local_67.f_2, uLocal_565);
	}
}








void func_15(int iParam0, bool bParam1)//Position - 0xBC7
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_573 || (bLocal_573 && iParam0 < iLocal_570)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
		Local_67.f_158 = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_573 && iParam0 > iLocal_570)
	{
	}
}

int func_16()//Position - 0xC3A
{
	func_17();
	switch (iLocal_55)
	{
		case 0:
			Local_67.f_486 = PED::CREATE_SYNCHRONIZED_SCENE(Local_67.f_486.f_6, Local_67.f_486.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_67.f_2, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28))
				{
					if (Local_67.f_486 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_67.f_28, 1, 0);
						ENTITY::SET_ENTITY_DYNAMIC(Local_67.f_28, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_67.f_2, Local_67.f_486, Local_67.f_486.f_1, Local_67.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_67.f_28, Local_67.f_486, Local_67.f_486.f_4, Local_67.f_486.f_1, 1000f, 8f, 137, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_67.f_96.f_1, Local_67.f_486, Local_67.f_486.f_5, Local_67.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_56 = 1;
					iLocal_59 = 5;
					iLocal_55 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_67.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_67.f_28, Local_67.f_486, Local_67.f_486.f_4, Local_67.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_67.f_28.f_7 = { Local_67.f_28.f_7, Local_67.f_28.f_7.f_1, (Local_67.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_67.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_67.f_28))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_67.f_28, 1);
							}
						}
					}
					if (Local_67.f_467)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_67.f_486) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_67.f_486, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.894f)
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28))
			{
				if (Local_67.f_486 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
					{
						if (iLocal_54 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.871f)
							{
								iLocal_56 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_67.f_28, -16f, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_67.f_28);
						}
					}
				}
			}
			iLocal_55 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0xEDA
{
	if (Local_67.f_486 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.117f)
				{
					iLocal_54 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.154f)
				{
					iLocal_54 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.477f)
				{
					iLocal_54 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.487f)
				{
					iLocal_54 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.809f)
				{
					iLocal_54 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.871f)
				{
					iLocal_54 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.894f)
				{
					iLocal_54 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) < 0.999f)
				{
					iLocal_54 = 8;
				}
				else if (iLocal_54 == 9)
				{
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else if (iLocal_54 == 0)
		{
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

void func_18()//Position - 0xFE2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_67.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_67.f_2, joaat("weapon_pumpshotgun"), 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_67.f_2, -2065892691);
		TASK::OPEN_SEQUENCE_TASK(&(Local_67.f_2.f_22));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_67, 2000, 0);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_67, 4000, -957453492);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_67.f_2.f_22);
		TASK::TASK_PERFORM_SEQUENCE(Local_67.f_2, Local_67.f_2.f_22);
	}
}


int func_20(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x108B
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(uParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(uParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_21(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x1203
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(uVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


int func_23()//Position - 0x132B
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_67, 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_67, 0);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_67.f_186, Local_67.f_189, Local_67.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_67.f_200, Local_67.f_203, Local_67.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_67.f_207, Local_67.f_210, Local_67.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_67.f_199 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_67.f_193, Local_67.f_196, Local_67.f_199, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_26()//Position - 0x1441
{
	switch (iLocal_51)
	{
		case 0:
			break;
		
		case 2:
			if (!GlobalFunc_579())
			{
				if (func_285())
				{
					if (!GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 1))
					{
						switch (GlobalFunc_5585("SHR_HOLDUP_1"))
						{
							case 2:
								GlobalFunc_6677("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								GlobalFunc_5211(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData), 1);
								iLocal_51 = 1;
								break;
						}
						if (iLocal_64 > 0)
						{
							if (GlobalFunc_2017("SHR_HOLDUP_1"))
							{
								GlobalFunc_5696("SHR_HOLDUP_1", 1);
								iLocal_51 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_51 = 1;
					}
				}
				else if (GlobalFunc_2017("SHR_HOLDUP_1"))
				{
					GlobalFunc_5696("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_579())
			{
				if (func_285())
				{
					if (!GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 2))
					{
						switch (GlobalFunc_5585("SHR_SNK_TUT"))
						{
							case 2:
								GlobalFunc_6677("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								GlobalFunc_5211(&(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData), 2);
								iLocal_51 = 4;
								break;
						}
					}
					else
					{
						iLocal_51 = 4;
					}
				}
				else if (GlobalFunc_2017("SHR_SNK_TUT"))
				{
					GlobalFunc_5696("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_74("SHR_HOLDUP_1") || GlobalFunc_74("SHR_SNK_TUT"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (GlobalFunc_2017("SHR_SNK_TUT") && !GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 2))
			{
				GlobalFunc_5696("SHR_SNK_TUT", 1);
			}
			if (GlobalFunc_2017("SHR_HOLDUP_1") && !GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 1))
			{
				GlobalFunc_5696("SHR_HOLDUP_1", 1);
			}
			iLocal_51 = 4;
			break;
		
		case 4:
			if ((!func_285() && GlobalFunc_2017("SHR_HOLDUP_1")) && !GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 1))
			{
				GlobalFunc_5696("SHR_HOLDUP_1", 1);
				iLocal_51 = 2;
			}
			if ((!func_285() && GlobalFunc_2017("SHR_SNK_TUT")) && !GlobalFunc_747(Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_GenericShopData, 2))
			{
				GlobalFunc_5696("SHR_SNK_TUT", 1);
				iLocal_51 = 2;
			}
			break;
	}
}










void func_36()//Position - 0x1C4E
{
	if (func_285())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
	}
	switch (iLocal_52)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_GREET", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, GlobalFunc_1078(bLocal_581, "SHOP_THREATENED", GlobalFunc_1078(GlobalFunc_745(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, GlobalFunc_1078(bLocal_581, "SHOP_THREATENED", GlobalFunc_1078(GlobalFunc_745(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, GlobalFunc_1078(bLocal_581, "SHOP_THREATENED", GlobalFunc_1078(GlobalFunc_745(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, GlobalFunc_1078(bLocal_581, "SHOP_THREATENED", GlobalFunc_1078(GlobalFunc_745(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, GlobalFunc_1078(bLocal_581, "SHOP_THREATENED", GlobalFunc_1078(GlobalFunc_745(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 36:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 9:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "BUMP", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 10:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 11:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_578)
					{
						iLocal_52 = 7;
						iLocal_578 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_579)
					{
						iLocal_52 = 8;
						iLocal_579 = 1;
					}
				}
				if (!GlobalFunc_226(&(Local_67.f_483)))
				{
					GlobalFunc_7777(&(Local_67.f_483));
				}
				else if (GlobalFunc_225(&(Local_67.f_483)))
				{
					GlobalFunc_6421(&(Local_67.f_483));
				}
				else if (GlobalFunc_5182(&(Local_67.f_483)) > 10f)
				{
					if (!GlobalFunc_747(Local_67.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_67.f_2) && GlobalFunc_747(Local_67.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						GlobalFunc_5211(&(Local_67.f_470), 32);
					}
				}
			}
			else if (GlobalFunc_226(&(Local_67.f_483)) && !GlobalFunc_225(&(Local_67.f_483)))
			{
				GlobalFunc_5693(&(Local_67.f_483));
			}
			break;
		
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				GlobalFunc_6877(&(Local_67.f_471));
				if (Local_67.f_2.f_11)
				{
					iLocal_52 = 37;
				}
				else
				{
					iLocal_52 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 13:
			if (GlobalFunc_5425(&(Local_67.f_471)) > 3f)
			{
				if (Local_67.f_2.f_12)
				{
					iLocal_52 = 22;
				}
				else if (Local_67.f_458)
				{
					iLocal_52 = 17;
				}
				else if (Local_67.f_459)
				{
					iLocal_52 = 18;
				}
				else if (Local_67.f_460)
				{
					iLocal_52 = 19;
				}
				else if (Local_67.f_461)
				{
					iLocal_52 = 20;
				}
				else if (Local_67.f_462)
				{
					iLocal_52 = 21;
				}
				else
				{
					iLocal_52 = 16;
				}
				GlobalFunc_235(&(Local_67.f_471));
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_BRAVE", 8);
				}
				GlobalFunc_5211(&(Local_67.f_470), 256);
				iLocal_52 = 37;
			}
			break;
		
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_67.f_28.f_14)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
					{
						GlobalFunc_5130(Local_67.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_52 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67.f_46.f_4[0], 0))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_67.f_46.f_4[0], 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[0]))
			{
				GlobalFunc_5130(Local_67.f_46[0], "SURROUNDED", 15);
			}
			iLocal_52 = 25;
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 27:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_52 = 37;
			}
			else
			{
				GlobalFunc_4956();
			}
			break;
		
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_52 = 37;
			break;
		
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_52 = 37;
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				GlobalFunc_5130(Local_67.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 31:
			if (!GlobalFunc_111())
			{
				iLocal_52 = 37;
			}
			break;
		
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_67.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				GlobalFunc_6877(&(Local_67.f_471));
				iLocal_52 = 32;
			}
			break;
		
		case 32:
			if (GlobalFunc_5425(&(Local_67.f_471)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 34:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_SELL", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 35:
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
				{
					GlobalFunc_5130(Local_67.f_2, "SHOP_STEAL", 3);
				}
				iLocal_52 = 37;
			}
			break;
	}
}







int func_43()//Position - 0x2565
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_200, Local_67.f_203, Local_67.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()//Position - 0x2598
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_214, Local_67.f_217, Local_67.f_220, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}






void func_50()//Position - 0x281A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_285() && iLocal_65 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 140:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != GlobalFunc_1421(Local_67.f_2) && iVar1 != GlobalFunc_1421(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5211(&(Local_67.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							GlobalFunc_5211(&(Local_67.f_470), 8);
						}
					}
					break;
				
				case 139:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != GlobalFunc_1421(Local_67.f_2) && iVar1 != GlobalFunc_1421(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5211(&(Local_67.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							GlobalFunc_5211(&(Local_67.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}


int func_52(int iParam0)//Position - 0x2942
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_67.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_67.f_186, Local_67.f_189, Local_67.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_67.f_200, Local_67.f_203, Local_67.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_67.f_207, Local_67.f_210, Local_67.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_67.f_193, Local_67.f_196, Local_67.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()//Position - 0x29FE
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_285())
		{
			if (!MISC::IS_BIT_SET(Local_67.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_67.f_162)
				{
					Local_67.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_67.f_162)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar13]) && !PED::IS_PED_INJURED(uVar1[iVar13])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar13], 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar13], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_67.f_162[iVar0] = uVar1[iVar13];
								Local_67.f_162.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar13], 1) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				MISC::SET_BIT(&(Local_67.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_67.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_67.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_67.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_67.f_162[iVar0], 0))
				{
					if (MISC::IS_BIT_SET(Local_67.f_162.f_18, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_67.f_162[iVar0], 0);
						ENTITY::SET_ENTITY_COLLISION(Local_67.f_162[iVar0], 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_162[iVar0], 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_67.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_67.f_162[iVar0], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_67.f_162[iVar0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_162[iVar0], 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_67.f_162.f_18, 0))
			{
				MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_67.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_67.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_67.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_67.f_162[iVar0], 0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_67.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_67.f_162[iVar0], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_67.f_162[iVar0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_162[iVar0], 0);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()//Position - 0x2CAC
{
	switch (iLocal_621)
	{
		case 0:
			if (func_285())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_63(iLocal_567), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_573)
				{
					STREAMING::REQUEST_MODEL(Local_67.f_46.f_26);
					STREAMING::REQUEST_MODEL(Local_67.f_46.f_27);
				}
				iLocal_621 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_573)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_67.f_46.f_26))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_67.f_46.f_27))
				{
					return;
				}
			}
			if (!GlobalFunc_6490("SNK_MNU", iLocal_567))
			{
				return;
			}
			if (!GlobalFunc_747(Local_67.f_470, 4))
			{
				if (!GlobalFunc_747(Local_67.f_470, 1024))
				{
					uLocal_617[0] = OBJECT::CREATE_OBJECT(func_60(0), func_59(0), 1, 1, 0);
					uLocal_617[1] = OBJECT::CREATE_OBJECT(func_60(1), func_59(1), 1, 1, 0);
					uLocal_617[2] = OBJECT::CREATE_OBJECT(func_60(2), func_59(2), 1, 1, 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_617[0], 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_617[1], 0);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_617[2], 0);
					GlobalFunc_5211(&(Local_67.f_470), 1024);
				}
				GlobalFunc_5211(&(Local_67.f_470), 4);
				iLocal_621 = 2;
			}
			break;
		
		case 2:
			if (!func_285())
			{
				func_55();
				GlobalFunc_5312(&(Local_67.f_470), 4);
				iLocal_621 = 0;
			}
			break;
		
		case 3:
			if (GlobalFunc_747(Local_67.f_470, 4))
			{
				func_55();
				GlobalFunc_5312(&(Local_67.f_470), 4);
			}
			break;
	}
}

void func_55()//Position - 0x2EB1
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_63(iLocal_567));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	GlobalFunc_6489(1, iLocal_567);
	if (!bLocal_573)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_67.f_46.f_26);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_67.f_46.f_27);
	}
}




Vector3 func_59(int iParam0)//Position - 0x307E
{
	switch (iParam0)
	{
		case 0:
			return Local_67.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_67.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_67.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_67.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_60(int iParam0)//Position - 0x30E8
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}



char* func_63(int iParam0)//Position - 0x3296
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_64()//Position - 0x3342
{
	switch (iLocal_622)
	{
		case 0:
			if (func_285())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_67.f_486.f_1);
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_67.f_486.f_1))
			{
				return;
			}
			if (!GlobalFunc_747(Local_67.f_470, 16))
			{
				GlobalFunc_5211(&(Local_67.f_470), 16);
				iLocal_622 = 2;
			}
			break;
		
		case 2:
			if (!func_285() && iLocal_64 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_67.f_486.f_1);
				GlobalFunc_5312(&(Local_67.f_470), 16);
				iLocal_622 = 0;
			}
			break;
		
		case 3:
			if (GlobalFunc_747(Local_67.f_470, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_67.f_486.f_1);
				GlobalFunc_5312(&(Local_67.f_470), 16);
			}
			break;
	}
}

void func_65()//Position - 0x340B
{
	switch (iLocal_641)
	{
		case 0:
			if (Local_67.f_158)
			{
				iLocal_641 = 1;
			}
			break;
		
		case 1:
			if (func_285())
			{
				if (GlobalFunc_226(&(Local_67.f_158.f_1)))
				{
					GlobalFunc_235(&(Local_67.f_158.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				GlobalFunc_6877(&(Local_67.f_158.f_1));
				iLocal_641 = 2;
			}
			break;
		
		case 2:
			if (func_285())
			{
				iLocal_641 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_66()//Position - 0x34A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	var uVar8;
	
	func_173();
	if (((((iLocal_59 == 1 || iLocal_59 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_67)) && !GlobalFunc_1546(-1082130432)) && !PED::IS_PED_INJURED(Local_67.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_65 != 2 && iLocal_65 != 3) && iLocal_65 != 4) && func_285())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_65)
		{
			case 0:
				if (GlobalFunc_747(Local_67.f_470, 4) && GlobalFunc_1535(Local_67) == joaat("weapon_unarmed"))
				{
					if (func_171(iLocal_567, &(Local_67.f_486.f_6), Local_67.f_486.f_9.f_2, &(Local_67.f_102.f_26[0 /*3*/]), &(Local_67.f_102.f_26[1 /*3*/]), &(Local_67.f_102.f_33), &(Local_67.f_102.f_36)))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_67.f_102.f_33, 1) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_67.f_102.f_26[0 /*3*/], Local_67.f_102.f_26[1 /*3*/], Local_67.f_102.f_36, 0, 1, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_67.f_102.f_33, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!GlobalFunc_74("SHR_HOLDUP_1") && !GlobalFunc_74("SHR_MENU")) && !GlobalFunc_579()) && GlobalFunc_1545())
									{
										GlobalFunc_Display_Help_Text("SHR_MENU");
									}
									Local_67.f_469 = -1;
									GlobalFunc_7016(&(Local_67.f_469), 4, "SHR_MENU", 0, 0);
									MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
									MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 0);
									iLocal_65 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_67.f_102.f_33, 135f) || !GlobalFunc_1535(Local_67) == joaat("weapon_unarmed"))
				{
					if (GlobalFunc_74("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					Local_67.f_102.f_22 = -1;
					GlobalFunc_5420(&(Local_67.f_469));
					iLocal_65 = 0;
				}
				else if (((!GlobalFunc_74("SHR_MENU") && !GlobalFunc_74("SHR_HOLDUP_1")) && GlobalFunc_1545()) && !GlobalFunc_5456(Local_67.f_469, 0))
				{
					GlobalFunc_Display_Help_Text("SHR_MENU");
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_5079(Local_67.f_469, 1))
					{
						if (GlobalFunc_74("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						MISC::SET_BIT(&(Local_67.f_162.f_18), 1);
						GlobalFunc_6877(&(Local_67.f_102.f_53));
						GlobalFunc_5420(&(Local_67.f_469));
						GlobalFunc_601(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_67.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_67.f_2, 0);
						}
						iLocal_65 = 2;
					}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(uLocal_640))
				{
					uLocal_640 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_162(iLocal_567, Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, &(Local_67.f_102), &(Local_67.f_102.f_3), &uVar8);
				CAM::SET_CAM_COORD(uLocal_640, Local_67.f_102);
				CAM::SET_CAM_ROT(uLocal_640, Local_67.f_102.f_3, 2);
				CAM::SET_CAM_FOV(uLocal_640, 35f);
				CAM::SHAKE_CAM(uLocal_640, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_640, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_5211(&(Local_67.f_470), 2048);
				}
				Local_67.f_102.f_46 = func_63(iLocal_567);
				Local_67.f_102.f_23 = 0;
				Local_67.f_102.f_24 = 3;
				GlobalFunc_262(0);
				GlobalFunc_1317(1, 1, 0, 0, 0);
				GlobalFunc_1316(1, 2, 1, 1, 1);
				GlobalFunc_1318(func_4(iLocal_567));
				GlobalFunc_5426(1, Local_67.f_102.f_46, Local_67.f_102.f_46);
				GlobalFunc_1395();
				GlobalFunc_7830(0, "SNK_ITEM1", 0, 1, 0, 0);
				GlobalFunc_7830(0, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(0), 0);
				GlobalFunc_7830(1, "SNK_ITEM2", 0, 1, 0, 0);
				GlobalFunc_7830(1, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(1), 0);
				GlobalFunc_7830(2, "SNK_ITEM3", 0, 1, 0, 0);
				GlobalFunc_7830(2, "ITEM_COST", 1, 1, 0, 0);
				func_148(func_151(2), 0);
				GlobalFunc_1543(0);
				GlobalFunc_1355(Local_67.f_102.f_23, 1, 1);
				GlobalFunc_1353("SNK_ITEM1_D", 0, 0);
				GlobalFunc_1354(201, "ITEM_SELECT", -1);
				GlobalFunc_1354(202, "ITEM_BACK", -1);
				GlobalFunc_1354(203, "SNK_LIFT", -1);
				iLocal_65 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						GlobalFunc_6900(0, 0, 0, 1);
						GlobalFunc_1393(0, -1);
						if (GlobalFunc_1391())
						{
							if (Global_2543381 != Local_67.f_102.f_23)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_67.f_102.f_23 = Global_2543381;
								GlobalFunc_1355(Local_67.f_102.f_23, 1, 1);
								Local_67.f_102.f_37 = 0;
								Local_67.f_102.f_41 = 0;
								Local_67.f_102.f_42 = 0;
								sVar7 = func_138(Local_67.f_102.f_23);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar7))
								{
									GlobalFunc_1353(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				GlobalFunc_8446(1, iLocal_567, 1, 0, 1, -1082130432, 0, 0);
				func_98();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201) || iVar6 == 1)
				{
					Local_67.f_102.f_37 = 1;
					Local_67.f_102.f_41 = 0;
					Local_67.f_102.f_42 = 0;
					if (Local_67.f_102.f_40 && Local_67.f_102.f_43)
					{
						Local_67.f_102.f_44 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_630 = 1;
						iLocal_633 = Local_67.f_102.f_23;
						iLocal_65 = 4;
					}
					else
					{
						Local_67.f_102.f_44 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203))
				{
					iLocal_65 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_97();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					iLocal_65 = 7;
					Local_67.f_102.f_45 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_97();
				}
				break;
			
			case 4:
				GlobalFunc_8446(1, iLocal_567, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_67.f_102.f_23)
				{
					case 0:
						iVar0 = func_151(Local_67.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10);
						}
						break;
					
					case 1:
						iVar0 = func_151(Local_67.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20);
						}
						break;
					
					case 2:
						iVar0 = func_151(Local_67.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15);
						}
						break;
				}
				GlobalFunc_10834(GlobalFunc_8315(), 96, iVar0);
				if (!Local_67.f_102.f_39)
				{
					iLocal_52 = 34;
					Local_67.f_102.f_39 = 1;
				}
				GlobalFunc_6877(&(Local_67.f_102.f_53));
				iLocal_65 = 3;
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_573)
					{
					}
					iLocal_65 = 6;
				}
				break;
			
			case 6:
				switch (Local_67.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				GlobalFunc_601(23, 0);
				iLocal_52 = 35;
				if (!PED::IS_PED_INJURED(Local_67.f_2) && GlobalFunc_747(Local_67.f_470, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_67.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_65 = 8;
				break;
			
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_67.f_102.f_45) > 1000)
				{
					iLocal_65 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 193);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_65 != 8 && GlobalFunc_747(Local_67.f_470, 4))
		{
			if ((iLocal_65 == 3 || iLocal_65 == 2) || iLocal_65 == 4)
			{
				func_97();
			}
			iLocal_65 = 8;
		}
		if (GlobalFunc_74("SHR_SNACKS"))
		{
			HUD::CLEAR_HELP(1);
			GlobalFunc_5420(&(Local_67.f_469));
		}
		if (GlobalFunc_74("SHR_MENU"))
		{
			HUD::CLEAR_HELP(1);
			GlobalFunc_5420(&(Local_67.f_469));
		}
		if (MISC::IS_BIT_SET(Local_67.f_162.f_18, 1) && iLocal_623 < 2)
		{
			MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
		}
		if (GlobalFunc_747(Local_67.f_470, 4))
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3E25
{
	if (GlobalFunc_747(Local_67.f_470, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_5312(&(Local_67.f_470), 2048);
		}
	}
	Local_67.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(uLocal_640))
	{
		CAM::DESTROY_CAM(uLocal_640, 0);
	}
}






























void func_97()//Position - 0x4F01
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	GlobalFunc_5312(&(Local_67.f_470), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	GlobalFunc_601(23, 0);
	Local_67.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(uLocal_640))
	{
		CAM::DESTROY_CAM(uLocal_640, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_98()//Position - 0x4F79
{
	char* sVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 193);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (func_101())
	{
		Local_67.f_102.f_37 = 0;
		GlobalFunc_235(&(Local_67.f_102.f_53));
		Local_67.f_102.f_23 = (Local_67.f_102.f_23 - 1);
		if (Local_67.f_102.f_23 < 0)
		{
			Local_67.f_102.f_23 = (Local_67.f_102.f_24 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		GlobalFunc_1355(Local_67.f_102.f_23, 1, 1);
		sVar0 = func_138(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 0;
		Local_67.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			GlobalFunc_1353(sVar0, 0, 0);
		}
	}
	if (func_100())
	{
		Local_67.f_102.f_37 = 0;
		GlobalFunc_235(&(Local_67.f_102.f_53));
		Local_67.f_102.f_23++;
		if (Local_67.f_102.f_23 > (Local_67.f_102.f_24 - 1))
		{
			Local_67.f_102.f_23 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		GlobalFunc_1355(Local_67.f_102.f_23, 1, 1);
		sVar0 = func_138(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 0;
		Local_67.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			GlobalFunc_1353(sVar0, 0, 0);
		}
	}
	if (!Local_67.f_102.f_41)
	{
		Local_67.f_102.f_40 = GlobalFunc_469(GlobalFunc_6674(PLAYER::PLAYER_PED_ID())) >= func_151(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 1;
	}
	if (!Local_67.f_102.f_42)
	{
		Local_67.f_102.f_43 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_67.f_102.f_42 = 1;
	}
	if (Local_67.f_102.f_37)
	{
		if (GlobalFunc_5425(&(Local_67.f_102.f_53)) < 3f)
		{
			if (Local_67.f_102.f_44)
			{
				GlobalFunc_1353("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_67.f_102.f_40)
			{
				GlobalFunc_1353("SNK_AFFORD", 0, 0);
			}
			else if (!Local_67.f_102.f_43)
			{
				GlobalFunc_1353("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_67.f_102.f_37 = 0;
			Local_67.f_102.f_44 = 0;
			GlobalFunc_235(&(Local_67.f_102.f_53));
			sVar0 = func_138(Local_67.f_102.f_23);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				GlobalFunc_1353(sVar0, 0, 0);
			}
		}
	}
}


int func_100()//Position - 0x51F0
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!GlobalFunc_226(&uLocal_637))
		{
			GlobalFunc_7777(&uLocal_637);
			return 1;
		}
		else if (GlobalFunc_5182(&uLocal_637) > 0.25f)
		{
			GlobalFunc_6877(&uLocal_637);
			return 1;
		}
	}
	else if (GlobalFunc_226(&uLocal_637))
	{
		GlobalFunc_235(&uLocal_637);
	}
	return 0;
}

int func_101()//Position - 0x526F
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!GlobalFunc_226(&uLocal_634))
		{
			GlobalFunc_7777(&uLocal_634);
			return 1;
		}
		else if (GlobalFunc_5182(&uLocal_634) > 0.25f)
		{
			GlobalFunc_6877(&uLocal_634);
			return 1;
		}
	}
	else if (GlobalFunc_226(&uLocal_634))
	{
		GlobalFunc_235(&uLocal_634);
	}
	return 0;
}





































char* func_138(int iParam0)//Position - 0x9225
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}










void func_148(var uParam0, bool bParam1)//Position - 0x9951
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = uParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = GlobalFunc_7829();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			GlobalFunc_6942(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = GlobalFunc_7828();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}



int func_151(int iParam0)//Position - 0x9F19
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}











int func_162(int iParam0, struct<3> Param1, float fParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA77D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
			*uParam6 = -4.2069f;
			uParam6->f_1 = -0.027f;
			uParam6->f_2 = (fParam4 + 22.8175f);
			*uParam7 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
			*uParam6 = -9.3866f;
			uParam6->f_1 = -0.0011f;
			uParam6->f_2 = (fParam4 + 46.9866f);
			*uParam7 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
			*uParam6 = -8.483f;
			uParam6->f_1 = 0.0149f;
			uParam6->f_2 = (fParam4 + 53.5519f);
			*uParam7 = 35f;
			break;
		
		case -2:
			*uParam5 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam6 = { -3.6091f, 0.022f, -8.6461f };
			*uParam7 = 35f;
			break;
	}
	return 1;
}









int func_171(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xAC48
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}


void func_173()//Position - 0xAE7F
{
	if (iLocal_630)
	{
		if (iLocal_629 == 3)
		{
			iLocal_629 = 0;
		}
		iLocal_630 = 0;
	}
	switch (iLocal_629)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(uLocal_617[iLocal_633], 1);
			uLocal_631 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_67.f_486.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_67.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_67.f_2, uLocal_631, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_617[iLocal_633], uLocal_631, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_629 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_631))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_631) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_67.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_67.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_617[iLocal_633]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(uLocal_617[iLocal_633], 1);
					}
					iLocal_632 = MISC::GET_GAME_TIMER();
					iLocal_629 = 2;
				}
			}
			else
			{
				iLocal_632 = MISC::GET_GAME_TIMER();
				iLocal_629 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_632) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_617[iLocal_633]))
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_617[iLocal_633], 0);
					ENTITY::SET_ENTITY_COORDS(uLocal_617[iLocal_633], func_59(iLocal_633), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_DYNAMIC(uLocal_617[iLocal_633], 0);
				}
				iLocal_629 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_174()//Position - 0xB01A
{
	if (iLocal_53 != 6)
	{
		switch (iLocal_53)
		{
			case 1:
				if (func_179())
				{
					iLocal_53 = 2;
				}
				else
				{
					iLocal_53 = 6;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_86))
				{
					func_178();
					GlobalFunc_7777(&(Local_67.f_86.f_7));
					iLocal_53 = 3;
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_86))
				{
					if ((GlobalFunc_7084(&(Local_67.f_86.f_7), 5f) || func_175(Local_67.f_2, &(Local_67.f_451))) || PED::IS_PED_RAGDOLL(Local_67.f_86))
					{
						iLocal_53 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_86))
				{
					iLocal_52 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_67.f_86, Local_67, 500f, -1, 0, 0);
					iLocal_53 = 5;
				}
				GlobalFunc_235(&(Local_67.f_86.f_7));
				break;
			}
	}
}

int func_175(int iParam0, var uParam1)//Position - 0xB0ED
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (GlobalFunc_6440(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



void func_178()//Position - 0xB1AB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_86))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_67.f_86.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_67, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_67, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_67.f_86.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_67.f_86, Local_67.f_86.f_6);
	}
}

int func_179()//Position - 0xB200
{
	PED::GET_CLOSEST_PED(Local_67.f_86.f_2, Local_67.f_86.f_5, 1, 0, &(Local_67.f_86), 0, 1, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_86))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_67.f_86) == Local_67.f_86.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_67.f_86, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_86, 1);
			return 1;
		}
	}
	return 0;
}

void func_180()//Position - 0xB25F
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_623 > 1 && iLocal_623 < 5)
	{
		if (GlobalFunc_75())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_623 = 6;
		}
	}
	switch (iLocal_623)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_67.f_2) || !func_200()) || GlobalFunc_747(Local_67.f_470, 128)) && iLocal_56 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_67.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_199(0))
				{
					GlobalFunc_159("SHR_ROBTILL", -1);
					Local_67.f_469 = -1;
					GlobalFunc_7016(&(Local_67.f_469), 4, "SHR_ROBTILL", 0, 0);
					MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
					MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 0);
					iLocal_623 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_67.f_2))
			{
			}
			else if (iLocal_56 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_67.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (GlobalFunc_5079(Local_67.f_469, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_67))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_67.f_214, Local_67.f_217, Local_67.f_220, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					MISC::SET_BIT(&(Local_67.f_162.f_18), 1);
					if (GlobalFunc_74("SHR_ROBTILL"))
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_5420(&(Local_67.f_469));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_627, 1);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
					CUTSCENE::_0xC61B86C9F61EB404(0);
					GlobalFunc_6685(0);
					GlobalFunc_8316(1, 1, 1, 0);
					HUD::DISPLAY_RADAR(0);
					GlobalFunc_601(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_67.f_2.f_1, 3f, 0);
					iLocal_623 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_67.f_469 <= 0)
					{
						Local_67.f_469 = -1;
						GlobalFunc_7016(&(Local_67.f_469), 4, "SHR_ROBTILL", 0, 0);
					}
				}
			}
			else
			{
				if (GlobalFunc_74("SHR_ROBTILL"))
				{
					HUD::CLEAR_HELP(1);
				}
				GlobalFunc_5420(&(Local_67.f_469));
				iLocal_623 = 0;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_67.f_2, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_2, 1);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_67.f_2.f_1, Local_67.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_67.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_565);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_565);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_565);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_565);
				if (!CAM::DOES_CAM_EXIST(uLocal_624))
				{
					uLocal_624 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_624, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_624, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_624, 35f);
				CAM::SHAKE_CAM(uLocal_624, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_624, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_623 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_625))
				{
					uLocal_625 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_625, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_625, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_625, 35f);
				CAM::SHAKE_CAM(uLocal_625, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_625, uLocal_624, 8000, 1, 1);
			}
			iLocal_628 = MISC::GET_GAME_TIMER();
			iLocal_623 = 4;
			break;
		
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_628) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_67.f_2.f_1, 3f) > 0)
			{
				iLocal_623 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_628) > 4500)
			{
				if (GlobalFunc_1720())
				{
					if (!iLocal_582)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_582 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_626)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						GlobalFunc_10829(GlobalFunc_8315(), 1, iVar1, 0, 0);
						iLocal_568 = (iLocal_568 + iVar1);
						Local_67.f_28.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
						iLocal_626 = 1;
					}
				}
				else if (iLocal_626)
				{
					iLocal_626 = 0;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_67.f_2, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_2, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(uLocal_624))
			{
				CAM::DESTROY_CAM(uLocal_624, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_625))
			{
				CAM::DESTROY_CAM(uLocal_625, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, 1) };
			}
			if (iLocal_627 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_627, 1);
			}
			if (MISC::IS_BIT_SET(Local_67.f_162.f_18, 1))
			{
				MISC::CLEAR_BIT(&(Local_67.f_162.f_18), 1);
			}
			GlobalFunc_9144(1, 1, 1);
			func_15(1, 0);
			iLocal_61 = 12;
			func_187();
			GlobalFunc_7610(297, 0, 0);
			Local_67.f_468 = 1;
			iLocal_623 = 7;
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(uLocal_625, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_568 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					GlobalFunc_10829(GlobalFunc_8315(), 1, iVar1, 0, 0);
					iLocal_568 = (iLocal_568 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_623 = 5;
			}
			break;
	}
}







void func_187()//Position - 0xC204
{
	if (!iLocal_574)
	{
		Global_SAVE_DATA.ShopRob_NumTimesRobbed_Array[iLocal_567]++;
		Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_LastPlayerToRobShop_Array[iLocal_567] = Local_67.f_1;
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_5987(5);
		}
		iLocal_574 = 1;
	}
}












int func_199(int iParam0)//Position - 0xC61E
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				if (Global_14392 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14393.f_1 > 3)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_200()//Position - 0xC6A2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_67.f_2) == Local_67.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67.f_2, Local_67.f_186, Local_67.f_189, Local_67.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67.f_2, Local_67.f_200, Local_67.f_203, Local_67.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67.f_2, Local_67.f_207, Local_67.f_210, Local_67.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67.f_2, Local_67.f_193, Local_67.f_196, Local_67.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_202()//Position - 0xC799
{
	int iVar0;
	
	func_219();
	func_216();
	if (ENTITY::DOES_ENTITY_EXIST(Local_67))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_67, &iVar0, 1);
		if ((iLocal_59 == 1 && iLocal_621 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_215()) || func_214()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_15(1, 0);
			iLocal_59 = 9;
		}
	}
	else
	{
		return;
	}
	func_211();
	if (!bLocal_573)
	{
		func_210();
	}
	switch (iLocal_59)
	{
		case 1:
			if (func_285())
			{
				if ((func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1) || (func_175(Local_67.f_2, &(Local_67.f_451)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_209();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					iLocal_52 = 12;
					iLocal_51 = 3;
					iLocal_59 = 5;
					MISC::SET_BIT(&Global_86218, 3);
					func_208();
				}
				if (GlobalFunc_747(Local_67.f_470, 8))
				{
					if (!GlobalFunc_747(Local_67.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_67.f_2) && GlobalFunc_747(Local_67.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						func_207();
						GlobalFunc_5211(&(Local_67.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_285())
			{
				if (func_175(Local_67.f_2, &(Local_67.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					Local_67.f_2.f_11 = 1;
					func_187();
					iLocal_52 = 12;
					iLocal_51 = 3;
					iLocal_61 = 11;
					iLocal_59 = 3;
					MISC::SET_BIT(&Global_86218, 3);
					func_208();
				}
				else if (func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					func_207();
					func_209();
					iLocal_52 = 12;
					iLocal_59 = 5;
					func_208();
				}
				else if (GlobalFunc_747(Local_67.f_470, 8))
				{
					if (!GlobalFunc_747(Local_67.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_67.f_2) && GlobalFunc_747(Local_67.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						func_207();
						GlobalFunc_5211(&(Local_67.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_52 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_67.f_2))
				{
					iLocal_52 = 15;
					iLocal_57 = 5;
					iLocal_61 = 12;
					iLocal_59 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1) && func_285())
			{
				func_209();
				if (Local_67.f_2.f_12)
				{
					iLocal_52 = 22;
				}
				else
				{
					iLocal_52 = 16;
				}
				iLocal_59 = 5;
			}
			break;
		
		case 5:
			if (Local_67.f_486 >= 0)
			{
				if (func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1) && func_285())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486) && !Local_67.f_467)
					{
						iLocal_52 = 33;
						Local_67.f_467 = 1;
					}
				}
			}
			if (iLocal_54 >= 1 && iLocal_54 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (func_205(Local_67.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
				{
					iLocal_59 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_55 != 3 && iLocal_55 != 4)
			{
				iLocal_55 = 4;
			}
			MISC::CLEAR_BIT(&Global_86218, 3);
			if (!PED::IS_PED_RAGDOLL(Local_67.f_2))
			{
				func_6();
				iLocal_59 = 0;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_67.f_2))
			{
				func_204();
				iLocal_52 = 36;
				func_15(1, 0);
				GlobalFunc_5211(&(Local_67.f_470), 32);
				iLocal_57 = 7;
				iLocal_59 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1) || func_175(Local_67.f_2, &(Local_67.f_451))) && func_285()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_67.f_2.f_12)
				{
					iLocal_52 = 10;
					iLocal_59 = 9;
				}
				else
				{
					func_18();
					iLocal_52 = 11;
					iLocal_59 = 0;
				}
				Local_67.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_59 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1) || func_175(Local_67.f_2, &(Local_67.f_451))) && func_285()) && iVar0 != joaat("weapon_unarmed")) && !GlobalFunc_226(&(Local_67.f_480)))
			{
				GlobalFunc_7777(&(Local_67.f_480));
				if (PED::IS_PED_RAGDOLL(Local_67.f_2))
				{
					func_6();
				}
				iLocal_52 = 23;
			}
			else if (GlobalFunc_5425(&(Local_67.f_480)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_67.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_67.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				iLocal_59 = 12;
			}
			break;
		
		case 11:
			func_203();
			iLocal_59 = 12;
			break;
	}
}

void func_203()//Position - 0xCCAB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_2, 0);
	}
}

void func_204()//Position - 0xCCC8
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_67.f_2, Local_67, -1, 0, 2);
	}
}

int func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xCCE9
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (GlobalFunc_2265(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_6440(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_207()//Position - 0xCF02
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_285())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_67.f_2) && !PED::IS_PED_INJURED(uVar0[iVar4])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar4], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], 1, 1);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar4], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			iVar4++;
		}
	}
}

void func_208()//Position - 0xCFB8
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_285())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_67.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_565);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_565);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_565);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar4], uLocal_565);
			}
			iVar4++;
		}
	}
}

void func_209()//Position - 0xD072
{
	if (GlobalFunc_1535(Local_67) == joaat("weapon_rpg"))
	{
		Local_67.f_458 = 1;
	}
	else if (GlobalFunc_1535(Local_67) == joaat("weapon_knife"))
	{
		Local_67.f_459 = 1;
	}
	else if (((GlobalFunc_1535(Local_67) == joaat("weapon_hammer") || GlobalFunc_1535(Local_67) == joaat("weapon_crowbar")) || GlobalFunc_1535(Local_67) == joaat("weapon_bat")) || GlobalFunc_1535(Local_67) == joaat("weapon_bottle"))
	{
		Local_67.f_460 = 1;
	}
	else if ((GlobalFunc_1535(Local_67) == joaat("weapon_grenade") || GlobalFunc_1535(Local_67) == joaat("weapon_smokegrenade")) || GlobalFunc_1535(Local_67) == joaat("weapon_molotov"))
	{
		Local_67.f_461 = 1;
	}
	else if (GlobalFunc_1535(Local_67) == joaat("weapon_stickybomb"))
	{
		Local_67.f_462 = 1;
	}
	iLocal_61 = 12;
	func_187();
	iLocal_60 = 2;
	iLocal_64 = 1;
	iLocal_63 = 6;
	Local_67.f_2.f_13 = 0;
}

void func_210()//Position - 0xD15E
{
	if (iLocal_54 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
		{
			switch (iLocal_57)
			{
				case 1:
					iLocal_57 = 0;
					break;
				
				case 2:
					TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_57 = 0;
					break;
				
				case 3:
					TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_57 = 0;
					break;
				
				case 4:
					TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_57 = 0;
					break;
				
				case 5:
					TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_57 = 0;
					break;
				
				case 6:
					iLocal_57 = 0;
					break;
				
				case 7:
					TASK::TASK_PLAY_ANIM(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_57 = 0;
					break;
				}
			}
	}
}

void func_211()//Position - 0xD287
{
	switch (iLocal_58)
	{
		case 1:
			func_204();
			iLocal_58 = 2;
			break;
		
		case 2:
			if (iLocal_54 == 2)
			{
				func_213();
				Local_67.f_2.f_13 = 0;
				iLocal_58 = 3;
			}
			if ((func_44() || func_43()) && !Local_67.f_2.f_13)
			{
				Local_67.f_2.f_13 = 1;
			}
			if (!Local_67.f_2.f_14)
			{
				if (!PED::IS_PED_INJURED(Local_67.f_2) && PED::IS_PED_FLEEING(Local_67.f_2))
				{
					Local_67.f_2.f_14 = 1;
				}
			}
			if ((Local_67.f_2.f_13 && !PED::IS_PED_INJURED(Local_67.f_2)) && !iLocal_59 == 12)
			{
				func_212();
			}
			break;
		
		case 3:
			if (iLocal_54 >= 7)
			{
				func_204();
				iLocal_58 = 4;
			}
			break;
	}
}

void func_212()//Position - 0xD34D
{
	if ((MISC::GET_GAME_TIMER() - Local_67.f_2.f_10) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_67.f_2.f_24));
		TASK::OPEN_SEQUENCE_TASK(&(Local_67.f_2.f_24));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_67, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_67, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_67.f_2.f_24);
		TASK::TASK_PERFORM_SEQUENCE(Local_67.f_2, Local_67.f_2.f_24);
		Local_67.f_2.f_10 = MISC::GET_GAME_TIMER();
	}
}

void func_213()//Position - 0xD3AE
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_67.f_2);
	}
}

int func_214()//Position - 0xD3CA
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_67.f_186, Local_67.f_189, Local_67.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_215()//Position - 0xD3EF
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_67.f_186, Local_67.f_189, Local_67.f_192))
	{
		return 1;
	}
	return 0;
}

void func_216()//Position - 0xD414
{
	if (!Local_67.f_465)
	{
		if (func_217())
		{
			if (!GlobalFunc_226(&(Local_67.f_474)))
			{
				GlobalFunc_7777(&(Local_67.f_474));
			}
			else if (GlobalFunc_7084(&(Local_67.f_474), 1f))
			{
				Local_67.f_465 = 1;
				iLocal_52 = 26;
				if (!PED::IS_PED_INJURED(Local_67.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_67.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (GlobalFunc_226(&(Local_67.f_474)))
		{
			GlobalFunc_235(&(Local_67.f_474));
		}
	}
}

int func_217()//Position - 0xD49A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (func_218())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_67, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (PED::IS_PED_SHOOTING(Local_67))
				{
					if (PED::IS_PED_FACING_PED(Local_67.f_2, Local_67, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_218()//Position - 0xD4E7
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_186, Local_67.f_189, Local_67.f_192, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_219()//Position - 0xD51A
{
	if (iLocal_59 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
		{
			if (PED::IS_PED_FLEEING(Local_67.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_67.f_2, Local_67, 100f, -1, 0, 0);
				iLocal_59 = 12;
				iLocal_58 = 4;
				iLocal_57 = 8;
				iLocal_61 = 15;
				if (iLocal_64 == 1)
				{
					iLocal_64 = 2;
				}
				else
				{
					iLocal_64 = 3;
				}
				iLocal_63 = 13;
				iLocal_52 = 27;
				if (!Local_67.f_2.f_14)
				{
					Local_67.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_220()//Position - 0xD589
{
	switch (iLocal_56)
	{
		case 1:
			if (Local_67.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.876f)
					{
						iLocal_56 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_67.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_67.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_67.f_486) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_67.f_28, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 1f))
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_221(0);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_67.f_28, 0, 0);
			iLocal_56 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_221(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_67.f_28, 0);
			iLocal_56 = 5;
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_67.f_28, PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_10829(GlobalFunc_8315(), 1, iLocal_568, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_67.f_28, 0);
				if (HUD::DOES_BLIP_EXIST(Local_67.f_28.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_67.f_28.f_2));
				}
				if (iLocal_61 != 12)
				{
					iLocal_61 = 12;
				}
				GlobalFunc_7610(297, 0, 0);
				Local_67.f_468 = 1;
				Local_67.f_28.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				GlobalFunc_6877(&(Local_67.f_28.f_15));
				iLocal_56 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28) && ENTITY::IS_ENTITY_VISIBLE(Local_67.f_28))
			{
			}
			break;
		
		case 6:
			if (GlobalFunc_5182(&(Local_67.f_28.f_15)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_67.f_28) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_67.f_28, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_67.f_28));
				}
				iLocal_56 = 7;
			}
			break;
	}
}

void func_221(bool bParam0)//Position - 0xD75F
{
	Local_67.f_28.f_3 = 0;
	MISC::SET_BIT(&(Local_67.f_28.f_3), 3);
	MISC::SET_BIT(&(Local_67.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_568 = MISC::GET_RANDOM_INT_IN_RANGE(Local_67.f_28.f_4, Local_67.f_28.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_67.f_28.f_2))
		{
			Local_67.f_28.f_2 = func_224(Local_67.f_28);
			HUD::SET_BLIP_COLOUR(Local_67.f_28.f_2, 2);
		}
		OBJECT::_0xA08FE5E49BDC39DD(Local_67.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_568 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_67.f_28.f_4);
		Local_67.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), ENTITY::GET_ENTITY_COORDS(Local_67.f_28, 1), Local_67.f_28.f_3, iLocal_568, 1, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_67.f_28.f_2))
		{
			Local_67.f_28.f_2 = GlobalFunc_5666(Local_67.f_28.f_1);
		}
	}
	Local_67.f_28.f_14 = 1;
}



int func_224(var uParam0)//Position - 0xD87B
{
	return func_225(uParam0, 1, 0);
}

int func_225(int iParam0, int iParam1, bool bParam2)//Position - 0xD88B
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_226()//Position - 0xD92F
{
	int iVar0;
	int iVar1;
	
	if (Local_67.f_464)
	{
		switch (iLocal_60)
		{
			case 2:
				if (GlobalFunc_747(Local_67.f_470, 4))
				{
					func_230();
					Local_67.f_46.f_39 = MISC::GET_GAME_TIMER();
					iLocal_60 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_67.f_46.f_39) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67.f_46.f_4[0], 0))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_67.f_46.f_4[0], 1);
					}
					iLocal_60 = 4;
				}
				break;
			
			case 4:
				if (func_229() && func_228())
				{
					iLocal_60 = 5;
				}
				break;
			
			case 5:
				iLocal_52 = 24;
				func_15(1, 0);
				iLocal_60 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_67.f_46[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_67.f_46[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_67.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_67.f_2, 0, 2))) || func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_67.f_46[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_67.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_46[iVar1], 0);
							}
							iVar1++;
						}
						iLocal_60 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_227();
				iLocal_60 = 0;
				break;
			}
	}
}

void func_227()//Position - 0xDACF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_46[iVar0], 0);
		}
		iVar0++;
	}
}

int func_228()//Position - 0xDB06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_67.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_229()//Position - 0xDB46
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_67.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46.f_4[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_67.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_230()//Position - 0xDBB7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_67.f_46[iVar0] = PED::CREATE_PED(6, Local_67.f_46.f_26, Local_67.f_46.f_8[iVar0 /*3*/], Local_67.f_46.f_18[iVar0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_67.f_46[iVar0], 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_46[iVar0], 1);
		Local_67.f_46.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_67.f_46.f_27, Local_67.f_46.f_8[iVar0 /*3*/], Local_67.f_46.f_18[iVar0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_67.f_46.f_4[iVar0], 1, 0);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]) && ENTITY::IS_ENTITY_DEAD(Local_67.f_46.f_4[iVar0])))
		{
			PED::SET_PED_INTO_VEHICLE(Local_67.f_46[iVar0], Local_67.f_46.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_67.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_67.f_46.f_35[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_67.f_46.f_4[iVar0], Local_67.f_46.f_22, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_67.f_46.f_4[iVar0]) - 8f), 1, Local_67.f_46.f_27, 786981, Local_67.f_46.f_25, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_67, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_67.f_46.f_35[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_67.f_46[iVar0], Local_67.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_231()//Position - 0xDD21
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_67))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_67, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_61)
	{
		case 1:
			iLocal_61 = 6;
			break;
		
		case 2:
			iLocal_52 = 2;
			iLocal_61 = 5;
			break;
		
		case 3:
			iLocal_52 = 3;
			iLocal_61 = 5;
			break;
		
		case 4:
			iLocal_52 = 4;
			iLocal_61 = 5;
			break;
		
		case 5:
			if (((((GlobalFunc_1535(Local_67) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_285())
			{
				iLocal_61 = 7;
			}
			break;
		
		case 6:
			if (GlobalFunc_1535(Local_67) != joaat("weapon_unarmed") && func_285())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_61 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_61 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_61 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_61 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_52 = 5;
			iLocal_57 = 3;
			iLocal_61 = 15;
			break;
		
		case 8:
			iLocal_52 = 2;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 9:
			iLocal_52 = 3;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 10:
			iLocal_52 = 4;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 11:
			if (func_20(Local_67, Local_67.f_2, &(Local_67.f_451), 1))
			{
				func_209();
				iLocal_59 = 5;
			}
			break;
		
		case 12:
			if (!func_285())
			{
				if (!Local_67.f_464)
				{
					iLocal_63 = 9;
					iLocal_61 = 15;
				}
				else
				{
					iLocal_61 = 13;
				}
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_67) < 0.1f && !func_233())
			{
				func_232();
				iLocal_61 = 14;
			}
			else if (func_233() && !func_285())
			{
				iLocal_61 = 14;
			}
			break;
		
		case 14:
			if (func_233() && !func_285())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_67.f_46[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_67.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_46[iVar1], 0);
					}
					iVar1++;
				}
				iLocal_63 = 9;
				iLocal_61 = 15;
			}
			break;
	}
}

void func_232()//Position - 0xDFB1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_46[iVar0]))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_67.f_46[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_67.f_46[iVar0]);
				TASK::TASK_ARREST_PED(Local_67.f_46[iVar0], Local_67);
			}
		}
		iVar0++;
	}
}

int func_233()//Position - 0xE005
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_46.f_28, Local_67.f_46.f_31, Local_67.f_46.f_34, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_234()//Position - 0xE03E
{
	switch (iLocal_64)
	{
		case 0:
			if (!iLocal_580)
			{
				if (func_235())
				{
					iLocal_52 = 9;
					iLocal_59 = 7;
					iLocal_51 = 3;
					iLocal_63 = 13;
					iLocal_64 = 3;
					iLocal_580 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_235()//Position - 0xE082
{
	int iVar0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_67))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_67, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!GlobalFunc_747(Local_67.f_470, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_67.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_67.f_2, Local_67, 1) && iVar0 == joaat("weapon_unarmed"))) || GlobalFunc_2367(Local_67.f_2, Local_67.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_67.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_67.f_2, Local_67, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (GlobalFunc_2367(Local_67.f_2, Local_67.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_67.f_2, Local_67.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_67.f_2, 1) };
				Var1 = { Local_67.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}


void func_237()//Position - 0xE1B2
{
	switch (iLocal_62)
	{
		case 0:
			if (func_265())
			{
				iLocal_62 = 1;
			}
			break;
		
		case 1:
			func_258();
			iLocal_62 = 2;
			break;
		
		case 2:
			func_254();
			iLocal_62 = 3;
			break;
		
		case 3:
			if (func_249())
			{
				iLocal_62 = 4;
			}
			break;
		
		case 4:
			func_238();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_66 = 1;
			break;
	}
}

void func_238()//Position - 0xE21F
{
	func_242();
	func_241();
	func_240();
	if (INTERIOR::IS_VALID_INTERIOR(Local_67.f_185))
	{
		INTERIOR::_0x82EBB79E258FA2B7(Local_67.f_2, Local_67.f_185);
		INTERIOR::_0x82EBB79E258FA2B7(Local_67.f_28, Local_67.f_185);
		if (!bLocal_573)
		{
			INTERIOR::_0x82EBB79E258FA2B7(Local_67.f_96.f_1, Local_67.f_185);
		}
	}
	func_239();
}

void func_239()//Position - 0xE272
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (GlobalFunc_8315() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (GlobalFunc_8315() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_67.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_67.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_67.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_67.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_67.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_67.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_67.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_67.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_67.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_67.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_67.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_67.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_67.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_67.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_67.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_67.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_67.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_67.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_67.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_67.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_67.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_67.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_67.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_67.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_67.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_67.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_67.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_67.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_67.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_67.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_67.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_67.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_67.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_67.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_67.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_67.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_67.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_67.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_67.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_67.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_67.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_67.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_67.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_67.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_67.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_67.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_67.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_67.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_67.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_67.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_67.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_67.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_67.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_67.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_67.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_67.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_67.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_67.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_67.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_67.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_67.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_67.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_67.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_67.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_67.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_67.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_67.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_67.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_67.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_67.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_67.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_67.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_67.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_67.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_67.f_221.f_166 = "OJSRAUD";
	Local_67.f_221.f_167 = "OJSR_GREET";
	Local_67.f_221.f_168 = "OJSR_BATEQ";
	Local_67.f_221.f_169 = "OJSR_TOOLEQ";
	Local_67.f_221.f_170 = "OJSR_STICKEQ";
	Local_67.f_221.f_171 = "OJSR_WORRY";
	Local_67.f_221.f_172 = "OJSR_SHOCK";
	Local_67.f_221.f_173 = "OJSR_STUBBRN";
	Local_67.f_221.f_174 = "OJSR_COUNTER";
	Local_67.f_221.f_175 = "OJSR_BACKRM";
	Local_67.f_221.f_176 = "OJSR_BUMP";
	Local_67.f_221.f_177 = "OJSR_BPAIM";
	Local_67.f_221.f_178 = "OJSR_BPAIMAG";
	Local_67.f_221.f_179 = "OJSR_HOLDUP";
	Local_67.f_221.f_180 = "OJSR_SCARED";
	Local_67.f_221.f_181 = "OJSR_KNIFAIM";
	Local_67.f_221.f_182 = "OJSR_TOOLAIM";
	Local_67.f_221.f_183 = "OJSR_GRANAIM";
	Local_67.f_221.f_184 = "OJSR_STICAIM";
	Local_67.f_221.f_185 = "OJSR_BRAVE";
	Local_67.f_221.f_186 = "OJSR_MOREAIM";
	Local_67.f_221.f_187 = "OJSR_SURNDER";
	Local_67.f_221.f_188 = "OJSR_COPS";
	Local_67.f_221.f_189 = "OJSR_POURCAN";
	Local_67.f_221.f_190 = "OJSR_FLEE";
	Local_67.f_221.f_191 = "OJSR_RECSCAR";
	Local_67.f_221.f_192 = "OJSR_RECAGGR";
	Local_67.f_221.f_193 = "OJSR_CSTMER";
	Local_67.f_221.f_194 = "OJSR_MOSC";
	Local_67.f_221.f_195 = "OJSR_PLRHUR";
	Local_67.f_221.f_196 = "OJSR_BUY";
	Local_67.f_221.f_197 = "OJSR_STEAL";
	iLocal_578 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
}

void func_240()//Position - 0xEFFD
{
	ENTITY::CREATE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_67.f_96.f_1 = OBJECT::CREATE_OBJECT(Local_67.f_96, Local_67.f_486.f_6, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(Local_67.f_96.f_1, Local_67.f_96.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_67.f_96.f_1, 1);
}

void func_241()//Position - 0xF082
{
	Local_67.f_28 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed"), Local_67.f_28.f_7, 0, Local_67.f_28.f_13);
	ENTITY::SET_ENTITY_ROTATION(Local_67.f_28, Local_67.f_28.f_10, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_67.f_28, 0);
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_67.f_28, 1, 0);
	Local_67.f_28.f_14 = 0;
}

void func_242()//Position - 0xF0D2
{
	var uVar0;
	var uVar1;
	
	Local_67.f_2 = PED::CREATE_PED(4, Local_67.f_2.f_5, Local_67.f_2.f_1, Local_67.f_2.f_4, 1, 1);
	func_248(iLocal_567, &uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_67.f_2, 0, uVar1, uVar0, 0);
	func_247(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_67.f_2, 2, uVar1, uVar0, 0);
	func_246(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_67.f_2, 3, uVar1, uVar0, 0);
	func_245(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_67.f_2, 4, uVar1, uVar0, 0);
	func_244(&uVar1, &uVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_67.f_2, 8, uVar1, uVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67.f_2, 1);
	if (Local_67.f_2.f_12)
	{
		func_243();
	}
}

void func_243()//Position - 0xF181
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
	}
}

void func_244(var uParam0, var uParam1)//Position - 0xF195
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_245(var uParam0, var uParam1)//Position - 0xF1BD
{
	*uParam0 = 0;
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_246(var uParam0, var uParam1)//Position - 0xF1D2
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_247(var uParam0, var uParam1)//Position - 0xF1EC
{
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_248(int iParam0, var uParam1, var uParam2)//Position - 0xF214
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_249()//Position - 0xF2C0
{
	if (!func_250(&Local_583))
	{
		return 0;
	}
	if (!bLocal_573)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_67.f_2.f_15))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_67.f_185))
	{
		return 0;
	}
	MISC::_0x6F2135B6129620C1(0);
	return 1;
}

int func_250(var uParam0)//Position - 0xF306
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_251(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_251(var uParam0)//Position - 0xF368
{
	return func_252(*uParam0, "NULL", uParam0->f_1);
}

int func_252(int iParam0, char* sParam1, int iParam2)//Position - 0xF37D
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_2270(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}


void func_254()//Position - 0xF49C
{
	MISC::_0x6F2135B6129620C1(1);
	if (!bLocal_573)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_67.f_2.f_15);
		Local_583.f_32 = MISC::GET_FRAME_COUNT();
	}
	GlobalFunc_7550(&Local_583, Local_67.f_2.f_5);
	GlobalFunc_7550(&Local_583, Local_67.f_28.f_13);
	GlobalFunc_7550(&Local_583, Local_67.f_96);
	Local_67.f_466 = 1;
}




void func_258()//Position - 0xF662
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_263(iLocal_567, &(Local_67.f_46.f_8), &(Local_67.f_46.f_18), &(Local_67.f_46.f_22), &(Local_67.f_46.f_25), &(Local_67.f_46.f_26), &(Local_67.f_46.f_27), &(Local_67.f_46.f_28), &(Local_67.f_46.f_31), &(Local_67.f_46.f_34));
	func_261(iLocal_567);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar9 = 175.074f;
	Var3 = { -3242.008f, 1001.202f, 11.83071f };
	Var6 = { Var3 - Var0 };
	Var6 = { GlobalFunc_415(Var6, fVar9) };
	Var3 = { -3245.088f, 1001.468f, 13.65071f };
	Var6 = { Var3 - Var0 };
	Var6 = { GlobalFunc_415(Var6, fVar9) };
	Var3 = { -3243.37f, 1000.37f, 12.83f };
	Var6 = { Var3 - Var0 };
	Var6 = { GlobalFunc_415(Var6, fVar9) };
	Local_67.f_469 = -1;
	Local_67.f_102.f_22 = -1;
	Local_67.f_96 = joaat("p_till_01_s");
	Local_67.f_96.f_2 = { Local_67.f_486.f_6 };
	Local_67.f_96.f_5 = (Local_67.f_486.f_9.f_2 + 180f);
	Local_67.f_451.f_3 = 0;
	Local_67.f_458 = 0;
	Local_67.f_459 = 0;
	Local_67.f_460 = 0;
	Local_67.f_461 = 0;
	Local_67.f_462 = 0;
	Local_67.f_465 = 0;
	func_260(iLocal_567, &(Local_67.f_2.f_6), &(Local_67.f_2.f_9));
	func_259();
}

void func_259()//Position - 0xF7D1
{
	Local_67.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_67.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_67.f_86.f_5 = 2f;
}

void func_260(int iParam0, var uParam1, var uParam2)//Position - 0xF802
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_261(int iParam0)//Position - 0xFAE1
{
	struct<3> Var0;
	
	Var0 = { func_262(Local_67.f_186, Local_67.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_67.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_67.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_67.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_262(struct<3> Param0, struct<3> Param3)//Position - 0xFBAF
{
	struct<3> Var0;
	
	Var0.x = ((Param0.x + Param3.x) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param3.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param3.f_2) / 2f);
	return Var0;
}

void func_263(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0xFBE2
{
	if (!GlobalFunc_2379(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}


int func_265()//Position - 0x10A7B
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_67, 1) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_67.f_181, 1) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_266()//Position - 0x10AB5
{
	if (Local_67.f_46.f_26 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_67.f_46.f_26);
	}
	if (Local_67.f_46.f_27 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_67.f_46.f_27);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_67.f_2.f_15))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_67.f_2.f_15);
	}
}

int func_267()//Position - 0x10AFD
{
	if (Global_SAVE_DATA.isGameflowActive)
	{
		if (!GlobalFunc_485(56))
		{
			return 1;
		}
	}
	if (func_270())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (GlobalFunc_875() && !GlobalFunc_874())
	{
		return 1;
	}
	if (GlobalFunc_2983() && GlobalFunc_4706())
	{
		return 1;
	}
	if (Global_24446)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}



int func_270()//Position - 0x10B90
{
	struct<3> Var0;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_67, 1) };
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_67.f_181, 1);
		if (fVar3 > Local_67.f_184)
		{
			return 1;
		}
	}
	return 0;
}





int func_275()//Position - 0x10D71
{
	int iVar0;
	
	if (Local_67.f_1 != Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_LastPlayerToRobShop_Array[iLocal_567])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastPlayerRobbed_Array[iLocal_567]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastPlayerRobbed_Array[iLocal_567]);
	}
	if (iVar0 < iLocal_572)
	{
		return 0;
	}
	return 1;
}



int func_278(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x10DFD
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(GlobalFunc_5748(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}


int func_280()//Position - 0x1112C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastRobbed_Array[iLocal_567]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastPlayerRobbed_Array[iLocal_567]);
	iLocal_571 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastRobbed_Array[iLocal_567]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_571 && iVar1 == 0) || (iVar0 < iLocal_571 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_281(bool bParam0)//Position - 0x111B3
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	struct<3> Var7[2];
	
	func_282(iLocal_567, &uVar1, &uVar4, &Var7);
	if (!GlobalFunc_747(Local_67.f_470, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar4[0], Var7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar4[1], Var7[1 /*3*/], 0, 0, 0);
			}
		}
		GlobalFunc_5211(&(Local_67.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1129E
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}



int func_285()//Position - 0x11968
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_186, Local_67.f_189, Local_67.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_200, Local_67.f_203, Local_67.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_207, Local_67.f_210, Local_67.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_67, Local_67.f_193, Local_67.f_196, Local_67.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_289(var uParam0)//Position - 0x11A94
{
	iLocal_66 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_60 = 1;
	iLocal_56 = 0;
	iLocal_59 = 1;
	iLocal_58 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_52 = 0;
	iLocal_51 = 0;
	Local_67 = PLAYER::PLAYER_PED_ID();
	func_297(&(uParam0->f_1[0 /*3*/]), &(Local_67.f_181), &iLocal_567);
	if ((((((((iLocal_567 == 10 || iLocal_567 == 11) || iLocal_567 == 12) || iLocal_567 == 13) || iLocal_567 == 14) || iLocal_567 == 15) || iLocal_567 == 16) || iLocal_567 == 17) || iLocal_567 == 18)
	{
		bLocal_581 = true;
	}
	Local_67.f_184 = 150f;
	Local_67.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_67.f_2.f_16 = "absolutely";
	Local_67.f_2.f_17 = "is_this_it";
	Local_67.f_2.f_18 = "shock";
	Local_67.f_2.f_19 = "anger_a";
	Local_67.f_2.f_20 = "screw_you";
	Local_67.f_2.f_21 = "but_why";
	Local_67.f_486.f_1 = "mp_am_hold_up";
	Local_67.f_486.f_2 = "guard_handsup_loop";
	Local_67.f_486.f_3 = "holdup_victim_20s";
	Local_67.f_486.f_4 = "holdup_victim_20s_bag";
	Local_67.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_569 = func_296();
	if (!bLocal_573)
	{
		func_292();
	}
	iLocal_574 = 0;
	if (iLocal_567 != 7)
	{
		iLocal_53 = 6;
	}
	else
	{
		iLocal_53 = 0;
	}
	if (GlobalFunc_8315() == 0)
	{
		Local_67.f_1 = 0;
	}
	else if (GlobalFunc_8315() == 1)
	{
		Local_67.f_1 = 1;
	}
	else if (GlobalFunc_8315() == 2)
	{
		Local_67.f_1 = 2;
	}
	func_291(iLocal_567, &(Local_67.f_186), &(Local_67.f_189), &(Local_67.f_192), &(Local_67.f_193), &(Local_67.f_196), &(Local_67.f_199), &(Local_67.f_200), &(Local_67.f_203), &(Local_67.f_206), &(Local_67.f_207), &(Local_67.f_210), &(Local_67.f_213), &(Local_67.f_214), &(Local_67.f_217), &(Local_67.f_220), &(Local_67.f_102.f_6), &(Local_67.f_102.f_9));
	func_290(iLocal_567, &(Local_67.f_486.f_6), &(Local_67.f_486.f_9), &(Local_67.f_2.f_1), &(Local_67.f_2.f_4), &(Local_67.f_2.f_5), &(Local_67.f_28.f_7), &(Local_67.f_28.f_10), &(Local_67.f_28.f_13), &(Local_67.f_28.f_4), &(Local_67.f_28.f_5), &(Local_67.f_102.f_21));
}

void func_290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x11CC3
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x12225
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_292()//Position - 0x133F7
{
	func_295();
	func_294();
	func_293();
}

void func_293()//Position - 0x1340B
{
	int iVar0;
	
	if (iLocal_569 >= 9)
	{
		if (Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush > 3)
		{
			if (iLocal_569 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_67.f_464 = 1;
				Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush = 0;
			}
			else
			{
				Local_67.f_464 = 0;
				Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush++;
			}
		}
		else
		{
			Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush++;
		}
	}
	else
	{
		Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_NumOfRobsSinceCopAmbush++;
	}
}

void func_294()//Position - 0x1349F
{
	int iVar0;
	
	if (iLocal_569 >= 3)
	{
		if (iLocal_569 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_67.f_2.f_12 = 1;
		}
		else
		{
			Local_67.f_2.f_12 = 0;
		}
	}
}

void func_295()//Position - 0x134DE
{
	int iVar0;
	
	if (iLocal_569 >= 6)
	{
		if (iLocal_569 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_59 = 2;
		}
		else
		{
			iLocal_59 = 1;
		}
	}
}

int func_296()//Position - 0x13514
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_SAVE_DATA.ShopRob_NumTimesRobbed_Array[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_297(var uParam0, var uParam1, int iParam2)//Position - 0x13544
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(GlobalFunc_5748(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, GlobalFunc_5748(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { GlobalFunc_5748(*iParam2) };
}






void func_303()//Position - 0x137DC
{
	if (((iLocal_64 == 1 || iLocal_64 == 2) || iLocal_623 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_67.f_2) && iLocal_66 == 1))
	{
		if (iLocal_64 == 1)
		{
		}
		if (iLocal_64 == 2)
		{
		}
		if (iLocal_623 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_67.f_2) && iLocal_66 == 1)
		{
		}
		Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastRobbed_Array[iLocal_567] = CLOCK::GET_CLOCK_HOURS();
		Global_SAVE_DATA.SHOPROBBERIES_SAVED_STRUCT.ShopRob_TimeLastPlayerRobbed_Array[iLocal_567] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && GlobalFunc_6714()) && Local_67.f_468)
	{
		func_310(&iLocal_567, &iLocal_574, &iLocal_568);
	}
	func_309();
	iLocal_574 = 0;
	iLocal_578 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	if (!bLocal_573)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_566, 0);
	GlobalFunc_5696("SHR_HOLDUP_1", 1);
	GlobalFunc_5696("SHR_SNK_TUT", 1);
	if ((GlobalFunc_74("SHR_MENU") || GlobalFunc_74("SHR_HOLDUP_1")) || GlobalFunc_74("SHR_SNK_TUT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (GlobalFunc_747(Local_67.f_470, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_617[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_617[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_617[2]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_617[0]));
			OBJECT::DELETE_OBJECT(&(uLocal_617[1]));
			OBJECT::DELETE_OBJECT(&(uLocal_617[2]));
		}
	}
	if (iLocal_622 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_67.f_486.f_1);
	}
	func_304(&Local_583, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_304(var uParam0, bool bParam1)//Position - 0x13973
{
	int iVar0;
	
	if (!bParam1)
	{
		func_306(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		GlobalFunc_4708(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}


void func_306(var uParam0)//Position - 0x139C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_307(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_307(var uParam0)//Position - 0x139FD
{
	func_308(*uParam0, "NULL", uParam0->f_1);
}

void func_308(int iParam0, char* sParam1, int iParam2)//Position - 0x13A12
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (GlobalFunc_2270(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_309()//Position - 0x13AD2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_2))
	{
		TASK::CLEAR_PED_TASKS(Local_67.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_67.f_2))
	{
		func_203();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_67.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_67.f_86))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_67.f_86));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_67.f_28))
	{
		if (iLocal_54 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_67.f_28, -8f, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_67.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_67.f_28))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_67.f_28));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_67.f_96.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_67.f_96.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		ENTITY::REMOVE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		ENTITY::REMOVE_MODEL_HIDE(Local_67.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_67.f_28.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_67.f_28.f_1);
	}
	if (GlobalFunc_226(&(Local_67.f_477)))
	{
		GlobalFunc_235(&(Local_67.f_477));
	}
	if (Local_67.f_466)
	{
		if (!bLocal_573)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_67.f_2.f_15);
		}
		Local_67.f_466 = 0;
	}
}

void func_310(int iParam0, var uParam1, var uParam2)//Position - 0x13C0F
{
	var uVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	uVar0 = GlobalFunc_92(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_313(iParam0)}, 6);
	if (func_311(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, uVar0, SYSTEM::TO_FLOAT(uVar0));
	}
}

int func_311(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x13C8C
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { GlobalFunc_902(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2434575.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1683768.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}


struct<8> func_313(var uParam0)//Position - 0x13DD7
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}





