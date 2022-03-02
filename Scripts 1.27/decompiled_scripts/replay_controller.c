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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	while (true)
	{
		if (iLocal_79 == 0)
		{
			iLocal_79 = 1;
			iLocal_78 = 0;
			bLocal_80 = false;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
			{
				switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
				{
					case 16:
						iLocal_78 = 1;
						bLocal_80 = true;
						iLocal_79 = 0;
						break;
					
					case 64:
						iLocal_78 = 1;
						bLocal_80 = false;
						iLocal_79 = 0;
						break;
					
					case 2:
						func_713();
						break;
					
					case 32:
						func_713();
						break;
					
					default:
						break;
					}
				}
		}
		if (iLocal_78 == 1)
		{
			func_712(bLocal_80);
		}
		else
		{
			iVar0 = 1;
			if (iVar0 == 1)
			{
				switch (Global_89962)
				{
					case 12:
						Global_89962 = 13;
						break;
					
					case 0:
						func_710();
						break;
					
					case 1:
						func_709();
						break;
					
					case 2:
						func_708();
						break;
					
					case 3:
						func_707();
						break;
					
					case 4:
						func_706();
						break;
					
					case 5:
						func_670();
						break;
					
					case 6:
						func_255();
						break;
					
					case 7:
						break;
					
					case 8:
						break;
					
					case 9:
						func_19();
						break;
					
					case 10:
						if (func_9())
						{
							if (Global_89957 != 6)
							{
								if (func_2(&uLocal_84))
								{
									MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(1);
								}
							}
						}
						break;
					
					case 11:
						break;
					
					case 13:
						if (!(((((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4)) || GlobalFunc_39(9)) || GlobalFunc_39(10)))
						{
							func_713();
						}
						break;
					
					default:
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}


int func_2(var uParam0)//Position - 0x206
{
	if (!GlobalFunc_199())
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		switch (Global_89957)
		{
			case 0:
				break;
			
			case 1:
				MISC::SET_GAME_PAUSED(0);
				MISC::CLEAR_AREA(Global_89958, 5f, 1, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_89958, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Global_89961);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
				}
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_89958, func_7(), 0);
				SYSTEM::WAIT(0);
				MISC::CLEAR_AREA(Global_89958, 5000f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Global_89958, 5000f, 0);
				func_6(5000f);
				GlobalFunc_2825();
				GlobalFunc_2769();
				SYSTEM::SETTIMERA(0);
				MISC::SET_GAME_PAUSED(1);
				Global_89957 = 2;
				break;
			
			case 2:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					SYSTEM::SETTIMERA(0);
					Global_89957 = 3;
				}
				else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_89958, func_7(), 0))
				{
					SYSTEM::SETTIMERA(0);
					Global_89957 = 3;
				}
				else if (SYSTEM::TIMERA() > 5000)
				{
					Global_89957 = 4;
				}
				break;
			
			case 3:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						Global_89957 = 4;
					}
				}
				if (SYSTEM::TIMERA() > 20000)
				{
					Global_89957 = 4;
				}
				break;
			
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						MISC::SET_GAME_PAUSED(0);
						PED::INSTANTLY_FILL_PED_POPULATION();
						if (MISC::IS_BIT_SET(Global_89962.f_20, 14))
						{
							VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
							*uParam0 = MISC::GET_GAME_TIMER() + 1000;
						}
						else
						{
							*uParam0 = MISC::GET_GAME_TIMER() + 10;
						}
						MISC::POPULATE_NOW();
					}
				}
				Global_89957 = 5;
				break;
			
			case 5:
				if (((VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && GlobalFunc_2768()) && MISC::GET_GAME_TIMER() > (*uParam0 - 990)) || MISC::GET_GAME_TIMER() > *uParam0)
				{
					if (MISC::GET_GAME_TIMER() > *uParam0)
					{
						if (MISC::IS_BIT_SET(Global_89962.f_20, 14))
						{
						}
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					MISC::SET_GAME_PAUSED(1);
					Global_89957 = 6;
					return 1;
				}
				break;
			
			case 6:
				return 1;
				break;
			}
	}
	return 0;
}




void func_6(float fParam0)//Position - 0x4A0
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var0, fParam0);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(Var0, fParam0);
		}
	}
}

float func_7()//Position - 0x4E0
{
	if (MISC::IS_BIT_SET(Global_89962.f_20, 24))
	{
		return 500f;
	}
	return 4500f;
}


int func_9()//Position - 0x528
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_135())
	{
		iVar0 = GlobalFunc_4942(&(Global_89962.f_3), 0);
		switch (iVar0)
		{
			case 53:
				return 1;
				break;
			
			case 46:
				return 1;
				break;
			
			case 84:
				return 1;
				break;
			
			case 85:
				return 1;
				break;
			
			case 90:
				return 1;
				break;
			
			case 0:
				return 1;
				break;
			
			case 1:
				return 1;
				break;
			
			case 2:
				return 1;
				break;
			
			case 8:
				return 1;
				break;
			
			case 9:
				return 1;
				break;
			
			case 10:
				return 1;
				break;
			
			case 11:
				return 1;
				break;
			
			case 62:
				return 1;
				break;
			
			case 63:
				return 1;
				break;
			
			case 12:
				return 1;
				break;
			
			case 13:
				return 1;
				break;
			
			case 43:
				return 1;
				break;
			
			case 44:
				return 1;
				break;
			
			case 71:
				return 1;
				break;
			
			case 74:
				return 1;
				break;
			
			case 75:
				return 1;
				break;
			
			case 31:
				return 1;
				break;
			
			case 66:
				return 1;
				break;
			
			case 67:
				return 1;
				break;
			
			case 68:
				return 1;
				break;
			
			case 70:
				return 1;
				break;
			
			case 87:
				return 1;
				break;
			
			case 88:
				return 1;
				break;
			
			case 24:
				return 1;
				break;
			
			case 25:
				return 1;
				break;
			
			case 17:
				return 1;
				break;
			
			case 18:
				return 1;
				break;
			
			case 19:
				return 1;
				break;
			
			case 21:
				return 1;
				break;
			
			case 22:
				return 1;
				break;
			
			case 41:
				return 1;
				break;
			
			case 42:
				return 1;
				break;
			
			case 59:
				return 1;
				break;
			
			case 72:
				return 1;
				break;
			
			case 91:
				return 1;
				break;
			
			case 92:
				return 1;
				break;
			
			case 93:
				return 1;
				break;
			
			case 76:
				return 1;
				break;
			
			case 89:
				return 1;
				break;
			
			case 64:
				return 1;
				break;
			
			case 65:
				return 1;
				break;
			
			case 32:
				return 1;
				break;
			
			case 33:
				return 1;
				break;
			
			case 34:
				return 1;
				break;
			
			case 36:
				return 1;
				break;
			
			case 37:
				return 1;
				break;
			
			case 78:
				return 1;
				break;
			
			case 80:
				return 1;
				break;
			
			case 81:
				return 1;
				break;
			
			case 82:
				return 1;
				break;
			
			case 60:
				return 1;
				break;
			
			case 83:
				return 1;
				break;
			
			case 40:
				return 1;
				break;
			
			case 30:
				return 1;
				break;
			
			case 14:
				return 1;
				break;
			
			case 16:
				return 1;
				break;
			
			case 26:
				return 1;
				break;
			
			case 27:
				return 1;
				break;
			
			case 47:
				return 1;
				break;
			
			case 48:
				return 1;
				break;
			
			case 49:
				return 1;
				break;
			
			case 52:
				return 1;
				break;
			
			case 73:
				return 1;
				break;
			
			case 86:
				return 1;
				break;
			
			case 45:
				return 1;
				break;
			
			case 61:
				return 1;
				break;
			
			case joaat("mpsv_lp0_31"):
				return 1;
				break;
			
			case 3:
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				return 1;
				break;
			
			case 6:
				return 1;
				break;
			
			case 7:
				return 1;
				break;
			
			case 20:
				return 1;
				break;
			
			case 29:
				return 1;
				break;
			
			case 38:
				return 1;
				break;
			
			case 39:
				return 1;
				break;
			
			case 15:
				return 1;
				break;
			
			case 69:
				return 1;
				break;
		}
	}
	else
	{
		switch (Global_89962.f_11)
		{
			case 6:
				iVar1 = GlobalFunc_7706(&(Global_89962.f_3), 0);
				switch (iVar1)
				{
					case 1:
						return 1;
						break;
					
					case 2:
						return 1;
						break;
					
					case 3:
						return 1;
						break;
					
					case 4:
						return 1;
						break;
					
					case 5:
						return 1;
						break;
					
					case 6:
						return 1;
						break;
					
					case 7:
						return 1;
						break;
					
					case 8:
						return 1;
						break;
					
					case 11:
						return 1;
						break;
					
					case 12:
						return 1;
						break;
					
					case 14:
						return 1;
						break;
					
					case 15:
						return 1;
						break;
					
					case 16:
						return 1;
						break;
					
					case 17:
						return 1;
						break;
					
					case 18:
						return 1;
						break;
					
					case 19:
						return 1;
						break;
					
					case 20:
						return 1;
						break;
					
					case 21:
						return 1;
						break;
					
					case 22:
						return 1;
						break;
					
					case 23:
						return 1;
						break;
					
					case 25:
						return 1;
						break;
					
					case 26:
						return 1;
						break;
					
					case 24:
						return 1;
						break;
					
					case 28:
						return 1;
						break;
					
					case 29:
						return 1;
						break;
					
					case 30:
						return 1;
						break;
					
					case 31:
						return 1;
						break;
					
					case 38:
						return 1;
						break;
					
					case 39:
						return 1;
						break;
					
					case 40:
						return 1;
						break;
					
					case 41:
						return 1;
						break;
					
					case 42:
						return 1;
						break;
					
					case 43:
						return 1;
						break;
					
					case 32:
						return 1;
						break;
					
					case 33:
						return 1;
						break;
					
					case 34:
						return 1;
						break;
					
					case 36:
						return 1;
						break;
					
					case 46:
						return 1;
						break;
					
					case 47:
						return 1;
						break;
					
					case 49:
						return 1;
						break;
					
					case 50:
						return 1;
						break;
					
					case 51:
						return 1;
						break;
					
					case 52:
						return 1;
						break;
					
					case 53:
						return 1;
						break;
					
					case 54:
						return 1;
						break;
					
					case 55:
						return 1;
						break;
					
					case 56:
						return 1;
						break;
					
					case 57:
						return 1;
						break;
					
					case 58:
						return 1;
						break;
					
					case 59:
						return 1;
						break;
					
					case 60:
						return 1;
						break;
					
					case 61:
						return 1;
						break;
					
					case 62:
						return 1;
						break;
				}
				break;
			
			case 5:
				if (((((MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "Traffick_Ground") || MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "Traffick_Air")) || MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "BailBond1")) || MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "BailBond2")) || MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "BailBond3")) || MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), "BailBond4"))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}










void func_19()//Position - 0x27CC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (func_9())
	{
		if (func_254() == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
			Global_89957 = 0;
		}
	}
	if ((iVar0 == 1 && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		if (iVar1 < 150)
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 150);
		}
	}
	if (GlobalFunc_135())
	{
		func_227();
	}
	else
	{
		switch (Global_89962.f_11)
		{
			case 5:
				func_226();
				break;
			
			case 6:
				func_62();
				break;
			
			default:
				break;
			}
	}
	if (func_254() == 0)
	{
		if (GlobalFunc_198() != 0)
		{
			func_60();
		}
		GlobalFunc_7();
		GlobalFunc_8();
	}
	func_20();
	SYSTEM::WAIT(0);
	if (func_254() == 0)
	{
		Global_89962 = 10;
	}
	else
	{
		SYSTEM::WAIT(500);
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_20()//Position - 0x28B1
{
	GlobalFunc_7632(0);
	GlobalFunc_8316(0, 1, 1, 0);
	PAD::ENABLE_CONTROL_ACTION(0, 59, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 60, 1);
	func_43(0);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	MISC::CLEAR_BIT(&(Global_89962.f_20), 7);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 22);
	GlobalFunc_136(1);
	func_41(0);
	GlobalFunc_2826(0);
	GlobalFunc_137(0);
	func_38(0);
	GlobalFunc_4944(1);
	func_34();
	GlobalFunc_9531(0);
	GlobalFunc_10549(0);
	GlobalFunc_4535(0, 1);
	func_25(0);
	func_23(0);
	func_22(0);
	func_21(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_21(int iParam0)//Position - 0x2977
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 23))
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			MISC::SET_BIT(&(Global_89962.f_20), 23);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 23))
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 23);
	}
}

void func_22(int iParam0)//Position - 0x29C9
{
	bool bVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 15);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			else
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_89962.f_20, 15))
		{
			bVar0 = false;
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				uVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar1, 0);
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			MISC::CLEAR_BIT(&(Global_89962.f_20), 15);
		}
	}
}

void func_23(int iParam0)//Position - 0x2AB0
{
	struct<3> Var0;
	
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 19))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			}
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			MISC::CLEAR_AREA(Var0, 100f, 1, 0, 0, 0);
			MISC::SET_BIT(&(Global_89962.f_20), 19);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 19))
	{
		GlobalFunc_2225();
		MISC::CLEAR_BIT(&(Global_89962.f_20), 19);
	}
}


void func_25(int iParam0)//Position - 0x2BFF
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 18))
		{
			GRAPHICS::_0xE63D7C6EECECB66B(0);
			MISC::SET_BIT(&(Global_89962.f_20), 18);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 18))
	{
		GRAPHICS::_0xE63D7C6EECECB66B(1);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 18);
	}
}









void func_34()//Position - 0x2F42
{
	if (Global_89962.f_18 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_89962.f_18))
		{
			AUDIO::STOP_SOUND(Global_89962.f_18);
		}
		Global_89962.f_18 = -1;
	}
	if (Global_89962.f_19 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_89962.f_19))
		{
			AUDIO::STOP_SOUND(Global_89962.f_19);
		}
		Global_89962.f_19 = -1;
	}
	if (MISC::IS_BIT_SET(Global_89962.f_20, 6))
	{
		MISC::CLEAR_BIT(&(Global_89962.f_20), 6);
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("replay_controller"))
	{
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
}




void func_38(int iParam0)//Position - 0x3022
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 11))
		{
			AUDIO::BLOCK_DEATH_JINGLE(1);
			MISC::SET_BIT(&(Global_89962.f_20), 11);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 11))
	{
		AUDIO::BLOCK_DEATH_JINGLE(0);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 11);
	}
}



void func_41(int iParam0)//Position - 0x3108
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 12))
		{
			AUDIO::START_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
			MISC::SET_BIT(&(Global_89962.f_20), 12);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 12))
	{
		AUDIO::STOP_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
		MISC::CLEAR_BIT(&(Global_89962.f_20), 12);
	}
}


void func_43(int iParam0)//Position - 0x3175
{
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		MISC::SET_BIT(&(Global_89962.f_20), 10);
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 10))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 37, 1);
		MISC::CLEAR_BIT(&(Global_89962.f_20), 10);
	}
}

















void func_60()//Position - 0x35F5
{
	Global_54747 = 1;
	if (Global_54758)
	{
	}
	Global_54758 = 0;
}


void func_62()//Position - 0x3635
{
	int iVar0;
	var uVar1;
	struct<42> Var33;
	
	iVar0 = GlobalFunc_7706(&(Global_89962.f_3), 0);
	GlobalFunc_6675(iVar0, &uVar1);
	GlobalFunc_2826(0);
	Var33.f_17 = 2;
	Var33.f_28 = 6;
	Var33.f_35 = 5;
	Var33.f_41 = 6;
	GlobalFunc_4517(&Var33);
	Var33.f_1 = { Global_89962.f_3 };
	Var33 = iVar0;
	func_60();
	while (!func_64(&Var33))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_876(iVar0);
}


int func_64(int iParam0)//Position - 0x36DA
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_199())
	{
		while (!func_221(*iParam0))
		{
			if (GlobalFunc_4507(*iParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_173(iParam0, *iParam0 != 2))
			{
				GlobalFunc_143("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (!func_147(iParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*iParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*iParam0);
	if (!GlobalFunc_199())
	{
		if (iParam0->f_16 == 2)
		{
			func_83(&(iParam0->f_1), 0);
		}
		else
		{
			func_83(&(iParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*iParam0, Var0);
	return 1;
}



















void func_83(char[4] cParam0, int iParam1)//Position - 0x40F6
{
	MISC::CLEAR_BIT(&(Global_89962.f_20), 17);
	func_84(cParam0, iParam1, 0);
}

void func_84(char[4] cParam0, int iParam1, int iParam2)//Position - 0x4113
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_86(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_86(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4DE8
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7704(PLAYER::PLAYER_PED_ID(), 0);
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
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}





























































int func_147(var uParam0)//Position - 0x9E4C
{
	var uVar0;
	
	if (GlobalFunc_6480(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			GlobalFunc_9154(1);
			GlobalFunc_4923(uParam0, 1, GlobalFunc_4506(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (GlobalFunc_4505(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_8535();
					SYSTEM::WAIT(0);
				}
			}
		}
		GlobalFunc_9525(*uParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 17000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_143("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			GlobalFunc_143("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}


























int func_173(var uParam0, bool bParam1)//Position - 0xA638
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	GlobalFunc_6675(*uParam0, &Var0);
	if ((GlobalFunc_5229(*uParam0) || func_212(*uParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_205(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_204(uParam0->f_28[0]);
		}
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_184(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_184(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_181(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				GlobalFunc_7523(uParam0);
			}
			else
			{
				func_178(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_181(uParam0, 0, 1))
		{
			func_178(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_181(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_181(uParam0, 1, 0))
		{
			func_178(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_181(uParam0, 0, 0))
		{
			func_178(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (GlobalFunc_115(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_26, GlobalFunc_8315()))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (GlobalFunc_2358(&(uParam0->f_48)) && bParam1)
	{
		GlobalFunc_6481(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}





void func_178(var uParam0)//Position - 0xAC5D
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		GlobalFunc_130(&(uParam0->f_41[1]));
		GlobalFunc_130(&(uParam0->f_41[2]));
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (GlobalFunc_4924(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (GlobalFunc_115(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_204(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}



int func_181(var uParam0, bool bParam1, bool bParam2)//Position - 0xB00C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0]))
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0))
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (GlobalFunc_4947(iVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (GlobalFunc_4947(uParam0->f_35[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (GlobalFunc_4947(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (GlobalFunc_645(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}



int func_184(var uParam0, bool bParam1, int iParam2)//Position - 0xB223
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_178(uParam0);
						}
						else
						{
							GlobalFunc_7523(uParam0);
						}
						GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (GlobalFunc_4514(*uParam0))
					{
						if (!GlobalFunc_4507(*uParam0))
						{
							if (GlobalFunc_8324(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_178(uParam0);
								}
								else
								{
									GlobalFunc_7523(uParam0);
								}
								GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_186(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!GlobalFunc_4513(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_178(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (GlobalFunc_115(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}


int func_186(int iParam0, float fParam1)//Position - 0xB513
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_187(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_187(int iParam0, float fParam1)//Position - 0xB589
{
	return func_188(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_188(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB5A1
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_196(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_191();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_191()//Position - 0xB853
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_196(int iParam0, int iParam1)//Position - 0xB9A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}








void func_204(int iParam0)//Position - 0xBDCC
{
	var uVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_205(int iParam0)//Position - 0xBE69
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_8648();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (GlobalFunc_5229(iParam0))
	{
		return 0;
	}
	if (!GlobalFunc_4938(4))
	{
		if (func_212(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (GlobalFunc_875() && !GlobalFunc_874())
	{
		return 1;
	}
	if (!GlobalFunc_873(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}







int func_212(int iParam0)//Position - 0xC1D5
{
	if ((GlobalFunc_142() && Global_89962.f_11 == 6) && iParam0 == GlobalFunc_7706(&(Global_89962.f_3), 0))
	{
		return 1;
	}
	return 0;
}









int func_221(int iParam0)//Position - 0xC516
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_8648();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = GlobalFunc_7733(&(Global_96440[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	GlobalFunc_876(iParam0);
	return 1;
}





void func_226()//Position - 0xC735
{
	Global_89996 = 1;
}

void func_227()//Position - 0xC742
{
	Global_68250 = -1;
	Global_68248 = 0;
	Global_68263 = 0;
	Global_68262 = 1;
	Global_68264 = 0;
	if (func_254())
	{
		func_229();
	}
	else
	{
		MISC::SET_BIT(&(Global_81119[GlobalFunc_2634(Global_89962.f_1) /*5*/].f_1), 3);
	}
}


void func_229()//Position - 0xC7B8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (GlobalFunc_135())
	{
		Global_89962 = 11;
	}
	else
	{
		switch (Global_89962.f_11)
		{
			case 6:
				iVar0 = Global_89962.f_1;
				GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
				func_245(iVar0, 0, 0, 0);
				break;
			
			case 5:
				break;
			
			case 0:
				break;
		}
		GlobalFunc_8306();
	}
}
















void func_245(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD077
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::SET_TIME_SCALE(1f);
	GlobalFunc_53();
	GlobalFunc_52(1, 1);
	GlobalFunc_51();
	GlobalFunc_8311();
	GlobalFunc_3061(30000);
	if (iParam1 == 1)
	{
		func_246(iParam0, iParam2, iParam3);
	}
	HUD::SET_MISSION_NAME(0, 0);
}

void func_246(int iParam0, var uParam1, var uParam2)//Position - 0xD114
{
	struct<4> Var0;
	var uVar32;
	
	if (iParam0 != -1)
	{
		GlobalFunc_6675(iParam0, &Var0);
		MemCopy(&uVar32, {GlobalFunc_44(iParam0)}, 4);
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar32, 0, Global_89999, 0);
		GlobalFunc_46(&uVar32, Var0.f_3, Global_89999, uParam1, uParam2);
	}
}








int func_254()//Position - 0xD27E
{
	int iVar0;
	
	if (!GlobalFunc_2(0))
	{
		if (GlobalFunc_135() == 1)
		{
			iVar0 = GlobalFunc_4942(&(Global_89962.f_3), 0);
			switch (iVar0)
			{
				case 88:
				case 89:
				case 33:
				case 68:
				case 92:
					return 1;
					break;
				
				default:
					break;
				}
			}
	}
	return 0;
}

void func_255()//Position - 0xD2D4
{
	func_669();
	func_664(1, 0, 0);
	func_657(" ", 1, 0);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_256();
	}
}

void func_256()//Position - 0xD30D
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar2 = 0;
	GlobalFunc_6836();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		GlobalFunc_5224();
	}
	func_34();
	GlobalFunc_4535(0, 1);
	GlobalFunc_136(0);
	func_656();
	GlobalFunc_11();
	GlobalFunc_2826(0);
	func_655();
	func_654(&iVar0);
	func_652(&uVar1);
	Global_89962 = 8;
	func_651();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GlobalFunc_2(0))
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(1);
		MISC::IGNORE_NEXT_RESTART(1);
		Global_89962 = 11;
		GlobalFunc_2826(0);
		GlobalFunc_9531(0);
		return;
	}
	if (Global_89962.f_11 == 0 || Global_89962.f_11 == 3)
	{
		iVar7 = func_650();
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar7 /*6*/].f_1 = 0;
	}
	func_646(0, Var3, uVar6);
	if (!GlobalFunc_5141(GlobalFunc_6674(PLAYER::PLAYER_PED_ID())))
	{
		Global_89962.f_21 = Global_91351;
	}
	if (Global_89962.f_21 != 145)
	{
		if (func_644(Global_89962.f_21))
		{
			func_445(Global_89962.f_21);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
					Global_89962.f_21 = 145;
				}
			}
			Global_89997 = 0;
		}
		else
		{
			MISC::IGNORE_NEXT_RESTART(1);
			Global_89997 = 1;
		}
	}
	SYSTEM::WAIT(0);
	func_21(0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(1);
	}
	func_443(&uVar1);
	func_441(1);
	func_23(1);
	func_22(1);
	if (Global_89962.f_21 != 145)
	{
		func_445(Global_89962.f_21);
	}
	else
	{
		GlobalFunc_9750(&(Global_93588.f_2167), &Global_93588, 0, 0, 0, 0);
	}
	if (Global_89997 == 0)
	{
	}
	else
	{
		iVar2 = func_440();
	}
	func_436(&iVar2);
	func_435();
	func_433(&iVar0, 1, iVar2, 1, 0);
	if (iVar2 == 1)
	{
		func_383(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), 1);
		func_382();
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	func_373();
	func_259();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (Global_24504[iVar8 /*11*/].f_2)
		{
			Global_24504[iVar8 /*11*/].f_4 = 1;
		}
		iVar8++;
	}
	Global_84545 = 0;
	iVar9 = 800;
	if (func_258())
	{
		iVar9 = 1600;
	}
	func_229();
	func_20();
	RECORDING::_0xF854439EFBB3B583();
	SYSTEM::WAIT(500);
	if (iVar2 == 0)
	{
		func_257(iVar0);
		func_433(&iVar0, 1, iVar2, 0, 1);
	}
	SYSTEM::WAIT(0);
	CAM::DO_SCREEN_FADE_IN(iVar9);
}

void func_257(int iParam0)//Position - 0xD57C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			ENTITY::SET_ENTITY_VELOCITY(iParam0, Global_89962.f_31);
		}
	}
}

int func_258()//Position - 0xD5AC
{
	int iVar0;
	
	if (Global_89962.f_11 == 6)
	{
		iVar0 = Global_89962.f_1;
		if ((((iVar0 == 52 || iVar0 == 53) || iVar0 == 54) || iVar0 == 55) || iVar0 == 56)
		{
			return 1;
		}
	}
	return 0;
}

void func_259()//Position - 0xD5FF
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
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_260(iVar1, 14, iVar2);
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

int func_260(int iParam0, int iParam1, int iParam2)//Position - 0xD6C0
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
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
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
				func_260(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_260(iParam0, 14, uVar20[iVar18]))
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
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		func_263(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		func_263(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xD940
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
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
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
									iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_263(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_263(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11095(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_263(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_263(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_263(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_263(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_263(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_263(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_263(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_263(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_263(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_263(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_263(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_263(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}














































































































void func_373()//Position - 0x298B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (iVar3 == GlobalFunc_8315())
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar3++;
					iVar4 = 1;
				}
			}
			else
			{
				iVar3++;
				iVar4 = 1;
			}
		}
		if (iVar4 == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 43)
			{
				iVar1 = GlobalFunc_223(iVar0);
				if (iVar1 != 0)
				{
					if (Global_2621550)
					{
						if (!GlobalFunc_8244(iVar3, Global_3145728.f_962.f_539.f_298[iVar3 /*284*/][iVar0 /*3*/]))
						{
							if (iVar3 == GlobalFunc_8315())
							{
								iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), iVar1);
								if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
								{
									WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar2, 0);
									WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iVar2);
								}
							}
							else if (Global_3145728.f_962.f_539.f_298[iVar3 /*284*/][iVar0 /*3*/].f_1 > 0)
							{
								Global_3145728.f_962.f_539.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/].f_1 = 0;
								Global_3145728.f_962.f_539.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/] = 0;
							}
						}
					}
					else if (Global_2621549)
					{
						if (!GlobalFunc_8244(iVar3, Global_3670016.f_962.f_539.f_298[iVar3 /*284*/][iVar0 /*3*/]))
						{
							if (iVar3 == GlobalFunc_8315())
							{
								iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), iVar1);
								if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
								{
									WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar2, 0);
									WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iVar2);
								}
							}
							else if (Global_3670016.f_962.f_539.f_298[iVar3 /*284*/][iVar0 /*3*/].f_1 > 0)
							{
								Global_3670016.f_962.f_539.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/].f_1 = 0;
								Global_3670016.f_962.f_539.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/] = 0;
							}
						}
					}
					else if (!GlobalFunc_8244(iVar3, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar3 /*284*/][iVar0 /*3*/]))
					{
						if (iVar3 == GlobalFunc_8315())
						{
							iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), iVar1);
							if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
							{
								WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar2, 0);
								WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iVar2);
							}
						}
						else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar3 /*284*/][iVar0 /*3*/].f_1 > 0)
						{
							Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/].f_1 = 0;
							Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar3 /*284*/][GlobalFunc_3268(iVar1) /*3*/] = 0;
						}
					}
				}
				iVar0++;
			}
		}
		iVar4 = 0;
		iVar3++;
	}
}









void func_382()//Position - 0x2A2E6
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
		PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
	}
}

int func_383(int iParam0, int iParam1)//Position - 0x2A312
{
	int iVar0;
	
	if (func_432(&Global_93588, iParam0))
	{
		if (func_384(&(Global_93588.f_2167), &iVar0, 0, 0, 0, iParam1, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
			}
			return 1;
		}
	}
	if (func_432(&Global_91351, iParam0))
	{
		Global_91351.f_2167 = { Global_93588.f_2167 };
		Global_91351.f_2167.f_6 = Global_93588.f_2167.f_6;
		if (func_384(&(Global_91351.f_2167), &iVar0, 0, 0, 0, iParam1, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x2A3BF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	
	iVar0 = 0;
	if (GlobalFunc_6794(uParam0))
	{
		if (iParam2 == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42))
			{
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8920(&(uParam0->f_12), uParam0->f_11);
				}
				return 0;
			}
		}
		if (iParam4 == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_12.f_42))
			{
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8920(&(uParam0->f_12), uParam0->f_11);
				}
				return 0;
			}
		}
		if (iParam5 == 0)
		{
			if (GlobalFunc_540(uParam0->f_12.f_42))
			{
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8920(&(uParam0->f_12), uParam0->f_11);
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				MISC::GET_MODEL_DIMENSIONS(uParam0->f_12.f_42, &Var7, &Var10);
				fVar13 = (Var10.x - Var7.x);
				fVar14 = (Var10.f_1 - Var7.f_1);
				fVar15 = (Var10.f_2 - Var7.f_2);
				fVar16 = fVar13;
				if (fVar14 > fVar16)
				{
					fVar16 = fVar14;
				}
				if (fVar15 > fVar16)
				{
					fVar16 = fVar15;
				}
				Var1 = { *uParam0 };
				Var1 = { Var1 - Var7 };
				Var4 = { *uParam0 };
				Var4 = { Var4 + Var10 };
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar17 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iVar17 = PLAYER::PLAYER_PED_ID();
				}
				bVar18 = true;
				if (bParam7)
				{
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_HELI(uParam0->f_12.f_42))
					{
						bVar18 = false;
					}
				}
				if (bVar18)
				{
					if (!func_424(*uParam0, iVar17))
					{
						if (!func_421(uParam0, iVar17))
						{
							if (uParam0->f_9 == 1)
							{
								GlobalFunc_8920(&(uParam0->f_12), uParam0->f_11);
							}
							return 0;
						}
					}
				}
				MISC::CLEAR_AREA(*uParam0, fVar16, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(*uParam0, fVar16, 2);
				GlobalFunc_7697(uParam0);
				while (!GlobalFunc_7696(uParam0))
				{
					SYSTEM::WAIT(0);
				}
				*iParam1 = GlobalFunc_9147(uParam0, 0f, 0f, 0f, 0f, bParam6);
				if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (iParam3 == 1 && uParam0->f_8 == 1)
								{
									iVar0 = 1;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 3f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1))
								{
									iVar0 = 1;
								}
								if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("startup_positioning"))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam1, 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
									{
										iVar0 = 0;
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam1, 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
									{
										iVar0 = 0;
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam1, 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
									{
										iVar0 = 0;
									}
								}
								if (iVar0 == 1)
								{
									if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
									{
										ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0);
									}
									else
									{
										ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
									}
									ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
									PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam1, -1);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(uParam0->f_12.f_42))
									{
										VEHICLE::SET_HELI_BLADES_FULL_SPEED(*iParam1);
									}
								}
							}
						}
					}
				}
				return 1;
			}
		}
	}
	return 0;
}





































int func_421(var uParam0, int iParam1)//Position - 0x2D8BF
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	
	iVar0 = 1;
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((*uParam0 - 150f), (uParam0->f_1 - 150f), (*uParam0 + 150f), (uParam0->f_1 + 150f));
	while (!PATHFIND::ARE_NODES_LOADED_FOR_AREA((*uParam0 - 150f), (uParam0->f_1 - 150f), (*uParam0 + 150f), (uParam0->f_1 + 150f)))
	{
		SYSTEM::WAIT(0);
	}
	while (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var3, &uVar2, &uVar1, 1, 1077936128, 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam0, Var3, 0) <= 150f)
		{
			if (func_422(Var3, uVar2, *uParam0, iParam1))
			{
				*uParam0 = { Var3 };
				uParam0->f_6 = uVar2;
				uParam0->f_3 = { 0f, 0f, 0f };
				return 1;
			}
			else
			{
				iVar0++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_422(struct<3> Param0, var uParam3, struct<13> Param4, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, int iParam70)//Position - 0x2D99E
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var11;
	var uVar14;
	var uVar17;
	int iVar20;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/])
		{
			iVar5 = Global_87300[iVar0 /*17*/].f_9;
			iVar4 = 262;
			if (iVar5 >= iVar4)
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar5 /*23*/].f_11, 19))
			{
				Var1 = { GlobalFunc_2247(iVar5, GlobalFunc_8315()) };
			}
			else
			{
				Var1 = { GlobalFunc_2247(iVar5, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 9f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar20 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param4.f_12.f_42, &Var8, &Var11);
	uVar6 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var11 - Var8, 0f, 0f, uParam3, 2, 90, iParam70, 4);
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar6, &iVar20, &uVar14, &uVar17, &uVar7) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar20 == 0)
	{
		return 1;
	}
	if (iVar20 == 1)
	{
		return 0;
	}
	return 0;
}


int func_424(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, int iParam66)//Position - 0x2DAC8
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var11;
	var uVar14;
	var uVar17;
	int iVar20;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/])
		{
			iVar5 = Global_87300[iVar0 /*17*/].f_9;
			iVar4 = 262;
			if (iVar5 >= iVar4)
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar5 /*23*/].f_11, 19))
			{
				Var1 = { GlobalFunc_2247(iVar5, GlobalFunc_8315()) };
			}
			else
			{
				Var1 = { GlobalFunc_2247(iVar5, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 3f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar20 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param0.f_12.f_42, &Var8, &Var11);
	if (!ENTITY::IS_ENTITY_DEAD(iParam66))
	{
		uVar6 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var11 - Var8, 0f, 0f, Param0.f_6, 2, 90, iParam66, 4);
	}
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar6, &iVar20, &uVar14, &uVar17, &uVar7) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar20 == 0)
	{
		return 1;
	}
	if (iVar20 == 1)
	{
		return 0;
	}
	return 0;
}








int func_432(var uParam0, int iParam1)//Position - 0x2E15B
{
	int iVar0;
	
	if (GlobalFunc_6794(&(uParam0->f_2167)))
	{
		if (uParam0->f_3 == 0)
		{
			iVar0 = uParam0->f_2167.f_11;
			if (iVar0 == 145 || iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2E1A1
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (iParam3 == 1)
	{
		fVar6 = 5000f;
	}
	else
	{
		fVar6 = 10f;
	}
	if (iParam2 == 1)
	{
		func_434(iParam0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
						iVar3 = 1;
						if (*iParam0 == iVar7)
						{
							func_434(iParam0, 0);
						}
					}
				}
			}
			if (iParam2 == 0)
			{
				MISC::CLEAR_AREA(Var0, fVar6, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Var0, fVar6, 0);
			}
			if (iVar3 == 1)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			}
		}
	}
	func_6(fVar6);
	if (iParam3 == 1 && iParam2 == 0)
	{
		if (MISC::IS_BIT_SET(Global_89962.f_20, 2))
		{
			iVar4 = 1;
			GlobalFunc_2826(0);
		}
		PED::INSTANTLY_FILL_PED_POPULATION();
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		MISC::POPULATE_NOW();
		iVar5 = MISC::GET_GAME_TIMER() + 1000;
		while (!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && MISC::GET_GAME_TIMER() < iVar5)
		{
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() > iVar5)
		{
		}
		if (iVar4 == 1)
		{
			GlobalFunc_2826(1);
		}
	}
	if (iParam4 == 1)
	{
		func_434(iParam0, 0);
	}
	if (iParam1 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
}

void func_434(var uParam0, int iParam1)//Position - 0x2E30C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar1 = -1;
		while (iVar1 <= (8 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (iVar0 != PLAYER::PLAYER_PED_ID())
					{
						if (iVar1 != -1 || ENTITY::GET_ENTITY_MODEL(*uParam0) != joaat("taxi"))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
							PED::DELETE_PED(&iVar0);
						}
						else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxiservice")) > 0)
						{
							Global_96404 = 1;
						}
					}
				}
			}
			iVar1++;
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
		if (iParam1 == 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_435()//Position - 0x2E3E7
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_436(int iParam0)//Position - 0x2E43C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2, 0, 0))
		{
			func_438(-1036.121f, -2731.833f, 12.7565f, 332.5734f, 0, 1);
			func_437(&(Global_93588.f_2167), -1023.841f, -2728.188f, 12.7005f, 238.436f);
			*iParam0 = 1;
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 0, 0))
		{
			func_438(-1588.728f, 2787.359f, 15.8569f, 225.7622f, 0, 1);
			func_437(&(Global_93588.f_2167), -1549.093f, 2765.367f, 16.7419f, 230.0104f);
			*iParam0 = 1;
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 4, 0, 0))
		{
			func_438(1850.764f, 2586.424f, 44.6721f, 269.1614f, 0, 1);
			func_437(&(Global_93588.f_2167), 1870.1f, 2581.241f, 44.6721f, 89.292f);
			*iParam0 = 1;
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, 0, 0))
		{
			func_438(3413.768f, 3764.552f, 29.4592f, 172.4372f, 0, 1);
			func_437(&(Global_93588.f_2167), 3406.909f, 3753.437f, 29.6532f, 143.9102f);
			*iParam0 = 1;
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, 0, 0))
		{
			func_438(512.847f, -3041.45f, 5.0693f, 262.3306f, 0, 1);
			func_437(&(Global_93588.f_2167), 540.0468f, -3053.917f, 5.0693f, 179.415f);
			*iParam0 = 1;
		}
		else if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 7, 0, 0))
		{
			func_438(-1068.581f, -463.2691f, 35.6624f, 275.0622f, 0, 1);
			func_437(&(Global_93588.f_2167), -1068.014f, -456.7559f, 35.5259f, 219.4607f);
			*iParam0 = 1;
		}
	}
}

void func_437(var uParam0, struct<3> Param1, float fParam4)//Position - 0x2E645
{
	*uParam0 = { Param1 };
	uParam0->f_6 = fParam4;
}

int func_438(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x2E65B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(0);
		MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		GlobalFunc_2825();
		GlobalFunc_2769();
		SYSTEM::SETTIMERA(0);
		GlobalFunc_2826(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam5 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && !GlobalFunc_2768()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_2826(0);
		return 1;
	}
	GlobalFunc_2826(0);
	return 0;
}


int func_440()//Position - 0x2F5CC
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar5;
	float fVar6;
	int iVar7;
	
	if (GlobalFunc_100(Global_68485, 0f, 0f, 0f))
	{
		bVar1 = true;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
			if ((VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					uVar5 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar6);
					if (MISC::ABSF((fVar6 - Var2.f_2)) > 1f)
					{
						iVar7 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iVar7))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar7))
							{
								if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
								{
									func_438(Var2, uVar5, 1, 1);
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_438(Global_68485, Global_68488, 0, 1);
		return 1;
	}
	return 0;
}

void func_441(bool bParam0)//Position - 0x2F6CB
{
	if (GlobalFunc_135())
	{
		GlobalFunc_507(func_650(), bParam0);
	}
	else if (Global_89962.f_11 == 6)
	{
		Global_96440[Global_89962.f_1 /*10*/].f_3 = bParam0;
	}
}


void func_443(var uParam0)//Position - 0x2F73F
{
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
	MISC::PAUSE_DEATH_ARREST_RESTART(0);
	while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	func_444(*uParam0);
	GlobalFunc_2826(1);
}

void func_444(int iParam0)//Position - 0x2F776
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 1);
		VEHICLE::DELETE_VEHICLE(&iParam0);
	}
}

int func_445(int iParam0)//Position - 0x2F798
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	int iVar6;
	
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
		
		default:
			return 0;
			break;
	}
	iVar6 = GlobalFunc_8315();
	if (iVar6 != 145)
	{
		Var1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar6 /*3*/] };
		uVar4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar6];
		uVar5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar6];
	}
	while (!func_446(iVar0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (iVar6 != 145)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar6 /*3*/] = { Var1 };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar6] = uVar4;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar6] = uVar5;
	}
	return 1;
}

int func_446(int iParam0, bool bParam1)//Position - 0x2F874
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
		func_642(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_492(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_449(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_449(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2FA2C
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
			GlobalFunc_9136(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9136((*uParam0)[uParam0->f_7], 0);
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
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
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
		func_455(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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






void func_455(int iParam0)//Position - 0x300F8
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			GlobalFunc_10707(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			GlobalFunc_10707(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			GlobalFunc_10707(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			GlobalFunc_10707(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			GlobalFunc_10707(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			GlobalFunc_10707(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			GlobalFunc_10707(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			GlobalFunc_10707(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			GlobalFunc_10707(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			GlobalFunc_10707(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			GlobalFunc_10707(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			GlobalFunc_10707(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			GlobalFunc_10707(50, 0);
			break;
	}
}





































int func_492(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x354E4
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
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_634(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_494(*uParam0, bParam8);
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


int func_494(int iParam0, bool bParam1)//Position - 0x355FC
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_498(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_498(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						func_263(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_263(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_263(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_263(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_263(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_263(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_263(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_263(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_498(int iParam0, int iParam1)//Position - 0x35D4B
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
				iVar1 = GlobalFunc_11095(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_500(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
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


void func_500(int iParam0, var uParam1, bool bParam2)//Position - 0x35FC2
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
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				func_263(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				func_263(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11292(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11292(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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






































































































































void func_634(int iParam0)//Position - 0x614AB
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
		func_500(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11095(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11095(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11095(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11095(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_500(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_642(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x61EB9
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
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_634(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_494(*uParam0, bParam6);
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


int func_644(int iParam0)//Position - 0x61F99
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = GlobalFunc_6674(Global_87736[iVar0]);
		if (iVar1 == iParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87736[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_87736[iVar0]))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}


int func_646(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6203A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 1)
	{
		if (Global_91341 == 1)
		{
			iVar1 = 1;
			if (GlobalFunc_5109(GlobalFunc_2043(), &uParam1, &uParam4))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			GlobalFunc_8522(iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			GlobalFunc_8522(iVar0);
			iVar0++;
		}
	}
	return iVar1;
}




int func_650()//Position - 0x6213D
{
	return Global_68514.f_109[Global_89962.f_1 /*4*/];
}

void func_651()//Position - 0x62153
{
	while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_89962.f_3))) > 0)
	{
		SYSTEM::WAIT(0);
	}
}

void func_652(var uParam0)//Position - 0x62175
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_653(Global_89962.f_22[iVar0], uParam0);
		iVar0++;
	}
}

void func_653(int iParam0, var uParam1)//Position - 0x6219F
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 1);
						VEHICLE::DELETE_VEHICLE(&iParam0);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
					return;
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
			{
				*uParam1 = iParam0;
				return;
			}
		}
		func_444(iParam0);
	}
}

void func_654(var uParam0)//Position - 0x62279
{
	*uParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
	}
}

void func_655()//Position - 0x6229F
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_656()//Position - 0x622EF
{
	int iVar0;
	
	iVar0 = 1;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (iVar0 == 1)
	{
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
	}
}

void func_657(char* sParam0, int iParam1, int iParam2)//Position - 0x62323
{
	func_663();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	if (!MISC::IS_BIT_SET(Global_89962.f_20, 9))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_89962.f_16))
		{
			if (!MISC::IS_BIT_SET(Global_89962.f_20, 9))
			{
				MISC::SET_BIT(&(Global_89962.f_20), 9);
				Global_89962.f_30 = (IntToFloat(MISC::GET_GAME_TIMER()) + (800f * 0.075f));
			}
			if (!iLocal_83)
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(Global_89962.f_16, 1);
				iLocal_83 = 1;
			}
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_89962.f_16))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_89962.f_16, 255, 255, 255, 0, 0);
		GlobalFunc_5077();
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 7))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_16, "SHOW_SHARD_CENTERED_MP_MESSAGE_LARGE");
			if (Global_89962.f_11 == 5 || func_258())
			{
				GlobalFunc_726("REPLAY_TMG");
			}
			else
			{
				GlobalFunc_726("REPLAY_T");
			}
			func_659(sParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			MISC::SET_BIT(&(Global_89962.f_20), 7);
			MISC::SET_BIT(&(Global_89962.f_20), 22);
		}
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 22))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_16, "UPDATE_MESSAGE");
			func_659(sParam0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&(Global_89962.f_20), 22);
		}
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 21))
		{
			GlobalFunc_2826(0);
			if (!MISC::IS_BIT_SET(Global_89962.f_20, 20))
			{
				if (IntToFloat(MISC::GET_GAME_TIMER()) > Global_89962.f_30)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_16, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((0.15f * 0.075f));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					MISC::SET_BIT(&(Global_89962.f_20), 20);
					Global_89962.f_30 = (IntToFloat(MISC::GET_GAME_TIMER()) + (150f * 0.075f));
				}
			}
			if (MISC::IS_BIT_SET(Global_89962.f_20, 20))
			{
				if (IntToFloat(MISC::GET_GAME_TIMER()) > Global_89962.f_30)
				{
					MISC::SET_BIT(&(Global_89962.f_20), 21);
					if (iParam1 == 1)
					{
						GlobalFunc_2826(1);
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (MISC::IS_BIT_SET(Global_89962.f_20, 6))
			{
				if (CAM::IS_SCREEN_FADED_OUT() && MISC::IS_BIT_SET(Global_89962.f_20, 21))
				{
				}
				else if (Global_89962.f_18 == -1)
				{
					Global_89962.f_18 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_89962.f_18, "TextHit", "MissionFailedSounds", 1);
				}
			}
		}
	}
	if (iParam1 == 1)
	{
		if (iLocal_81 > 0)
		{
			if (!func_658())
			{
				return;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_89962.f_17, 255, 255, 255, 0, 0);
		}
	}
}

bool func_658()//Position - 0x625A2
{
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_89962.f_17);
}

void func_659(char* sParam0)//Position - 0x625B4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		GlobalFunc_726(sParam0);
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_68481))
	{
		GlobalFunc_726(&Global_68477);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_68477);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_68481);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
}




void func_663()//Position - 0x62629
{
	if (Global_89962.f_16 == 0)
	{
		Global_89962.f_16 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_83 = 0;
	}
	else if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_89962.f_16))
	{
		Global_89962.f_16 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
	}
	if (Global_89962.f_17 == 0)
	{
		Global_89962.f_17 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
	}
	else if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_89962.f_17))
	{
		Global_89962.f_17 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
	}
}

void func_664(int iParam0, int iParam1, int iParam2)//Position - 0x626A6
{
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			MISC::CLEAR_BIT(&(Global_89962.f_20), 8);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	if (!MISC::IS_BIT_SET(Global_89962.f_20, 8))
	{
		if (func_658())
		{
			iLocal_81 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "SET_CLEAR_SPACE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(200f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			func_667(iParam0);
			func_667(iParam1);
			func_665(iParam2);
			MISC::SET_BIT(&(Global_89962.f_20), 8);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_665(int iParam0)//Position - 0x6279B
{
	if (iParam0 == 1)
	{
		if (func_666())
		{
			if (Global_84545 == 1)
			{
				func_667(9);
			}
			else
			{
				func_667(8);
			}
		}
	}
}

int func_666()//Position - 0x627C7
{
	if (Global_84543 == 1 && Global_89962 != 3)
	{
		return 1;
	}
	return 0;
}

void func_667(int iParam0)//Position - 0x627E8
{
	var uVar0;
	char* sVar1;
	int iVar2;
	
	iVar2 = 332;
	switch (iParam0)
	{
		case 1:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
			sVar1 = "REPLAY_OK";
			iVar2 = 201;
			break;
		
		case 2:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
			sVar1 = "REPLAY_YES";
			iVar2 = 201;
			break;
		
		case 3:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
			sVar1 = "REPLAY_RETRY";
			iVar2 = 201;
			break;
		
		case 4:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1);
			sVar1 = "REPLAY_NO";
			iVar2 = 202;
			break;
		
		case 5:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1);
			sVar1 = "REPLAY_EXIT";
			iVar2 = 202;
			break;
		
		case 6:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 204, 1);
			sVar1 = "REPLAY_RESTART";
			iVar2 = 204;
			break;
		
		case 7:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1);
			sVar1 = "REPLAY_RESTART";
			iVar2 = 201;
			break;
		
		case 8:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 203, 1);
			sVar1 = "REPLAY_SKIP_S";
			iVar2 = 203;
			break;
		
		case 9:
			uVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 203, 1);
			sVar1 = "REPLAY_SKIP_M";
			iVar2 = 203;
			break;
		
		default:
			return;
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_89962.f_17, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_81);
	GlobalFunc_257(uVar0);
	GlobalFunc_726(sVar1);
	if (MISC::IS_PC_VERSION())
	{
		if (iVar2 == 332)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_81++;
}


void func_669()//Position - 0x62973
{
	HUD::CLEAR_PRINTS();
	PAD::SET_PAD_SHAKE(0, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
}

void func_670()//Position - 0x62992
{
	int iVar0;
	
	func_669();
	func_664(2, 4, 0);
	if (Global_84545 == 1)
	{
		func_657("REPLAY_SKIPM", 1, 0);
	}
	else
	{
		func_657("REPLAY_SKIPS", 1, 0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		Global_84544 = 1;
		GlobalFunc_861();
		STATS::STAT_GET_INT(joaat("times_mission_skipped"), &iVar0, -1);
		STATS::STAT_SET_INT(joaat("times_mission_skipped"), iVar0 + 1, 1);
		MISC::SET_BIT(&(Global_89962.f_20), 17);
		func_673(0);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_671();
	}
}

void func_671()//Position - 0x62A35
{
	switch (Global_89962.f_11)
	{
		case 1:
			if (GlobalFunc_2(0))
			{
				func_672(1);
			}
			else
			{
				func_672(2);
			}
			break;
		
		case 2:
			func_672(6);
			break;
		
		default:
			func_672(1);
			break;
	}
}

void func_672(int iParam0)//Position - 0x62A7C
{
	GlobalFunc_10();
	Global_89962 = iParam0;
}

void func_673(bool bParam0)//Position - 0x62A8E
{
	GlobalFunc_6495();
	GlobalFunc_4535(0, 1);
	if (func_254() == 1)
	{
		func_699();
	}
	else
	{
		func_674(bParam0);
	}
}

void func_674(bool bParam0)//Position - 0x62AB5
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	iVar0 = 0;
	func_34();
	GlobalFunc_136(0);
	func_656();
	GlobalFunc_11();
	func_698();
	GlobalFunc_2826(0);
	func_655();
	func_652(&uVar5);
	Global_89962 = 7;
	func_651();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iVar0 = func_646(1, Var1, uVar4);
	SYSTEM::WAIT(0);
	func_21(0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(1);
		Global_2545347 = 0;
	}
	else
	{
		MISC::IGNORE_NEXT_RESTART(1);
		Global_2545347 = 1;
	}
	func_443(&uVar5);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_697(1);
	}
	if (iVar0 == 1)
	{
		func_696(Var1, uVar4);
	}
	if (bParam0 == 1)
	{
		func_678(&Global_91351, 0);
		Global_89962.f_2 = 0;
		Global_89999 = 0;
		Global_84545 = 0;
		func_677();
	}
	else
	{
		func_678(&Global_93588, 0);
	}
	if (bParam0)
	{
		func_676(0);
		func_675();
	}
	else
	{
		func_676(1);
	}
	if (Global_89962.f_2 == 0)
	{
		if (Global_89962.f_11 == 4 || Global_89962.f_11 == 3)
		{
			func_438(Global_91351.f_2161, Global_91351.f_2161.f_3, 1, 1);
		}
	}
	if (!func_9())
	{
		func_433(&uVar6, 0, 0, 1, 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
	iVar7 = 0;
	while (iVar7 < 7)
	{
		if (Global_24504[iVar7 /*11*/].f_2)
		{
			Global_24504[iVar7 /*11*/].f_4 = 1;
		}
		iVar7++;
	}
	GlobalFunc_12(0);
	Global_89962 = 9;
}

void func_675()//Position - 0x62C37
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		Global_66846[iVar0 /*9*/].f_3 = 0;
		iVar0++;
	}
}

void func_676(bool bParam0)//Position - 0x62C62
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (bParam0)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0] = Global_51933[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0] = Global_51933.f_31[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0] = Global_51933.f_62[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0] = Global_51933.f_93[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0] = Global_51933.f_124[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0] = Global_51933.f_155[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0] = Global_51933.f_186[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0] = Global_51933.f_217[iVar0 /*3*/][0];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0] = Global_51933.f_248[iVar0 /*3*/][0];
		}
		else
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0] = Global_51933[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0] = Global_51933.f_31[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0] = Global_51933.f_62[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0] = Global_51933.f_93[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0] = Global_51933.f_124[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0] = Global_51933.f_155[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0] = Global_51933.f_186[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0] = Global_51933.f_217[iVar0 /*3*/][1];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0] = Global_51933.f_248[iVar0 /*3*/][1];
		}
		iVar0++;
	}
}

void func_677()//Position - 0x62EE0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		GlobalFunc_855(iVar0);
		iVar0++;
	}
}

void func_678(var uParam0, bool bParam1)//Position - 0x62F06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	CLOCK::SET_CLOCK_TIME(GlobalFunc_208(uParam0->f_1), GlobalFunc_207(uParam0->f_1), GlobalFunc_206(uParam0->f_1));
	CLOCK::SET_CLOCK_DATE(GlobalFunc_209(uParam0->f_1), GlobalFunc_210(uParam0->f_1), GlobalFunc_4975(uParam0->f_1));
	MISC::_SET_WEATHER_TYPE_TRANSITION(uParam0->f_6, uParam0->f_7, uParam0->f_8);
	if (!bParam1)
	{
		if (!func_445(*uParam0))
		{
			return;
		}
		GlobalFunc_2000(uParam0);
		GlobalFunc_5575(uParam0);
		STATS::STAT_SET_INT(joaat("sp0_special_ability"), uParam0->f_1618[0], 1);
		STATS::STAT_SET_INT(joaat("sp1_special_ability"), uParam0->f_1618[1], 1);
		STATS::STAT_SET_INT(joaat("sp2_special_ability"), uParam0->f_1618[2], 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xFFEE8FA29AB9A18E(PLAYER::PLAYER_ID());
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 34)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/])) && (iVar1 <= 20 || iVar1 >= 24))
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_3 == 31)
				{
				}
				GlobalFunc_7641(&iVar0, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_1, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_2, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_3, (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_4 - 1), Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/].f_18.f_5);
				if (GlobalFunc_7640(iVar0, uParam0->f_1))
				{
					GlobalFunc_1556(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/]), 1);
					GlobalFunc_5574(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar1 /*104*/]));
				}
			}
			iVar1++;
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		iVar2 = 0;
		while (iVar2 < 3)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar2 /*74*/] = { uParam0->f_25[0 /*223*/][iVar2 /*74*/] };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar2 /*74*/] = { uParam0->f_25[1 /*223*/][iVar2 /*74*/] };
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2])
			{
				while (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 != uParam0->f_9[iVar2] && iVar3 < 11)
				{
					GlobalFunc_5881(iVar2);
					iVar3++;
				}
			}
			iVar5 = (Global_51925[iVar2] - uParam0->f_13[iVar2]);
			if (iVar5 != 0)
			{
				Global_51925[iVar2] = uParam0->f_13[iVar2];
				GlobalFunc_2770(iVar2);
			}
			iVar4 = 0;
			while (iVar4 <= 3)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/][iVar4] = uParam0->f_2115[iVar2 /*15*/][iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/].f_5[iVar4] = uParam0->f_2115[iVar2 /*15*/].f_5[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar2 /*15*/].f_10[iVar4] = uParam0->f_2115[iVar2 /*15*/].f_10[iVar4];
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/][iVar4] = uParam0->f_1622[iVar2 /*164*/][iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_4[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_4[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_8[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_8[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_12[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_12[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_16[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_16[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_20[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_20[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_24[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_24[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_28[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_28[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_32[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_32[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_36[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_36[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_40[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_40[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_44[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_44[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_48[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_48[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_52[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_52[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_56[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_56[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_60[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_60[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_64[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_64[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_68[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_68[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_72[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_72[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_76[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_76[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_80[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_80[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_84[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_84[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_88[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_88[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_92[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_92[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_96[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_96[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_100[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_100[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_104[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_104[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_108[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_108[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_112[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_112[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_116[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_116[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_120[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_120[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_124[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_124[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_128[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_128[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_132[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_132[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_136[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_136[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_140[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_140[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_144[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_144[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_148[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_148[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_152[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_152[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_156[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_156[iVar4];
				Global_SAVE_DATA.COMPONENTS_ARRAY[iVar2 /*164*/].f_160[iVar4] = uParam0->f_1622[iVar2 /*164*/].f_160[iVar4];
				iVar4++;
			}
			iVar2++;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_500(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
			GlobalFunc_7693(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 1);
			}
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
			}
			GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
		}
	}
	GlobalFunc_76(0);
	GlobalFunc_76(1);
	GlobalFunc_76(2);
	GlobalFunc_76(3);
	GlobalFunc_76(4);
	GlobalFunc_76(5);
	GlobalFunc_76(6);
	GlobalFunc_76(7);
	GlobalFunc_76(8);
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
}


















void func_696(struct<3> Param0, var uParam3)//Position - 0x65109
{
	func_438(Param0, uParam3, 0, 0);
}

void func_697(int iParam0)//Position - 0x6511E
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_23(1);
		PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iParam0 == 1)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar5 = 0;
			Var0.f_2 = (Var0.f_2 + 1.5f);
			iVar3 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Var0, 1, &fVar4);
			if (iVar3 == 1)
			{
				iVar5 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				Var0.f_2 = (fVar4 + 10f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			}
			else if (iVar3 == 2)
			{
			}
		}
		func_22(1);
	}
}

void func_698()//Position - 0x651BE
{
	HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
}

void func_699()//Position - 0x651CC
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar1 = 0;
	iVar3 = 0;
	func_676(1);
	func_34();
	GlobalFunc_136(0);
	func_656();
	GlobalFunc_11();
	GlobalFunc_2826(0);
	func_655();
	func_654(&uVar0);
	func_652(&uVar2);
	Global_89962 = 7;
	func_651();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	GlobalFunc_7695(24);
	iVar3 = func_646(1, Var4, uVar7);
	SYSTEM::WAIT(0);
	func_21(0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(1);
	}
	else
	{
		MISC::IGNORE_NEXT_RESTART(1);
	}
	func_443(&uVar2);
	func_697(0);
	if (iVar3 == 1)
	{
		func_696(Var4, uVar7);
	}
	func_678(&Global_91351, 0);
	Global_89962.f_2 = 0;
	Global_89999 = 0;
	iVar8 = 0;
	GlobalFunc_9750(&(Global_93588.f_2167), &Global_93588, 0, 0, 0, 0);
	func_703();
	iVar8 = func_440();
	func_436(&iVar8);
	func_435();
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_701(&(Global_93588.f_2233));
	func_433(&uVar0, 1, iVar8, 1, 1);
	if (iVar8 == 1)
	{
		iVar9 = 1;
		iVar10 = GlobalFunc_4942(&(Global_89962.f_3), 0);
		if (iVar10 == 88)
		{
			iVar9 = 0;
		}
		func_383(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), iVar9);
		func_382();
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	}
	else if (iVar1 != 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					func_22(0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, -1);
					ENTITY::SET_ENTITY_HEALTH(iVar1, ENTITY::GET_ENTITY_MAX_HEALTH(iVar1));
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						VEHICLE::FIX_VEHICLE_WINDOW(iVar1, iVar11);
						iVar11++;
					}
				}
			}
		}
	}
	while (!func_700(&(Global_93588.f_2233)))
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
	iVar12 = 0;
	while (iVar12 < 7)
	{
		if (Global_24504[iVar12 /*11*/].f_2)
		{
			Global_24504[iVar12 /*11*/].f_4 = 1;
		}
		iVar12++;
	}
	GlobalFunc_12(0);
	Global_89962 = 9;
}

int func_700(var uParam0)//Position - 0x653F5
{
	*uParam0 = *uParam0;
	return 1;
}

void func_701(var uParam0)//Position - 0x65404
{
	*uParam0 = *uParam0;
}


int func_703()//Position - 0x6541B
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	
	iVar9 = GlobalFunc_4942(&(Global_89962.f_3), 0);
	switch (iVar9)
	{
		case 33:
			Var0 = { 918.8851f, -269.789f, 67.2145f };
			fVar3 = 68.2149f;
			Var4 = { 917.2133f, -263.7077f, 67.3712f };
			fVar7 = 183.2868f;
			break;
		
		case 68:
			Var0 = { 354.3055f, -1722.206f, 28.259f };
			fVar3 = 109.6154f;
			break;
		
		case 89:
			Global_87263 = GlobalFunc_7719();
			if (MISC::ARE_STRINGS_EQUAL(&Global_87247, "jhp1b"))
			{
				Var0 = { 1015.022f, -919.7524f, 29.3237f };
				fVar3 = 26.8044f;
				Var4 = { 1015.97f, -918.5801f, 29.333f };
				fVar7 = 26.8105f;
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Global_87247, "jhp1bRoute2"))
			{
				Var0 = { -1189.988f, -427.8112f, 32.9417f };
				fVar3 = 82.798f;
				Var4 = { -1190.403f, -426.3514f, 33.015f };
				fVar7 = 82.7692f;
			}
			iVar8 = 1;
			GlobalFunc_6677("AM_H_JHP1B_REAP", 2, 1000, 1000, 10000, 1, 0, 0, 0);
			break;
		
		case 88:
			Global_87245 = GlobalFunc_7719();
			if (MISC::ARE_STRINGS_EQUAL(&Global_87229, "jhp2a_alt"))
			{
				Var0 = { 931.8422f, 259.7393f, 79.5024f };
				fVar3 = 271.357f;
				Var4 = { 932.5095f, 258.41f, 79.4414f };
				fVar7 = 271.3582f;
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Global_87229, "jhp2a_main"))
			{
				Var0 = { 1063.748f, -1183.334f, 54.8147f };
				fVar3 = 284.8731f;
				Var4 = { 1064.563f, -1184.454f, 54.8234f };
				fVar7 = 284.8881f;
			}
			iVar8 = 1;
			GlobalFunc_6677("AM_H_JHP2A_REAP", 2, 1000, 1000, 10000, 1, 0, 0, 0);
			break;
		
		case 92:
			Global_87281 = GlobalFunc_7719();
			Var0 = { 50.2976f, 3069.659f, 40.0506f };
			fVar3 = 213.1591f;
			Var4 = { 53.7574f, 3065.502f, 40.0371f };
			fVar7 = 309.5496f;
			iVar8 = 1;
			GlobalFunc_6677("AM_RHP_REAP", 2, 1000, 1000, 10000, 5, 0, 0, 0);
			break;
		
		default:
			return 0;
			break;
	}
	iVar10 = Global_81155[iVar9 /*34*/].f_10;
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar10 /*23*/].f_11, 19))
	{
		Var11 = { Global_Mission_Blips[iVar10 /*23*/][GlobalFunc_8315() /*3*/] };
	}
	else
	{
		Var11 = { Global_Mission_Blips[iVar10 /*23*/][0 /*3*/] };
	}
	fVar14 = Global_84352[iVar9 /*2*/].f_1;
	fVar15 = (fVar14 * fVar14);
	Var17 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar16 = SYSTEM::VDIST2(Var17, Var11);
	if (fVar16 < fVar15 || iVar8)
	{
		Global_68485 = { Var0 };
		Global_68488 = fVar3;
		Global_93588.f_2167 = { Var4 };
		Global_93588.f_2167.f_6 = fVar7;
		return 1;
	}
	return 0;
}



void func_706()//Position - 0x658DC
{
	func_669();
	func_664(2, 4, 0);
	func_657("REPLAY_REJ", 1, 0);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_256();
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_671();
	}
}

void func_707()//Position - 0x65937
{
	func_669();
	func_664(2, 4, 0);
	func_657("REPLAY_AYS", 1, 0);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_673(1);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_672(2);
	}
}

void func_708()//Position - 0x65994
{
	char* sVar0;
	
	func_669();
	if (Global_89962.f_2 > 0)
	{
		sVar0 = "";
		func_664(3, 6, 1);
	}
	else
	{
		sVar0 = "";
		func_664(7, 0, 1);
	}
	func_657(sVar0, 1, 0);
	if (func_666() && PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SKIP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_672(5);
	}
	else if (Global_89962.f_2 > 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RETRY", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_673(0);
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RESTART", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_672(3);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RESTART", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_673(0);
	}
}

void func_709()//Position - 0x65A61
{
	char* sVar0;
	
	func_669();
	sVar0 = "";
	func_664(3, 5, 1);
	func_657(sVar0, 1, 0);
	if (func_666() && PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SKIP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_672(5);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RETRY", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_673(0);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_672(4);
	}
}

void func_710()//Position - 0x65AEA
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	if (!MISC::IS_BIT_SET(Global_89962.f_20, 0) && !MISC::IS_BIT_SET(Global_89962.f_20, 1))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_89962.f_20), 0);
			SYSTEM::SETTIMERA(SYSTEM::CEIL((2000f * 0.2f)));
			GlobalFunc_4535(1, 1);
		}
		else
		{
			GlobalFunc_9531(1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			SYSTEM::SETTIMERA(0);
		}
		func_41(1);
		GlobalFunc_7632(1);
		func_38(1);
		func_25(1);
		MISC::CANCEL_STUNT_JUMP();
		func_21(1);
		if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
		{
			iLocal_82 = 1;
		}
		else
		{
			iLocal_82 = 0;
		}
		GlobalFunc_53();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		MISC::CLEAR_BIT(&(Global_89962.f_20), 25);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	else
	{
		func_21(1);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PED::_0x5A7F62FDA59759BD();
	PAD::DISABLE_CONTROL_ACTION(2, 0, 1);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (MISC::IS_BIT_SET(Global_89962.f_20, 5))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_remotesniper"))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			}
		}
	}
	func_43(1);
	if (func_711())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (Global_89962.f_19 == -1)
			{
				Global_89962.f_19 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Global_89962.f_19, "Bed", "MissionFailedSounds", 1);
			}
		}
	}
	if (IntToFloat(SYSTEM::TIMERA()) > (2000f * 0.2f))
	{
		func_657("", 0, 1);
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 1))
		{
			func_21(1);
			GlobalFunc_10549(1);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (4000f * 0.075f) || (CAM::IS_SCREEN_FADED_OUT() && iLocal_82 == 0))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
					CAM::DO_SCREEN_FADE_OUT(1000);
					func_21(1);
				}
			}
			else
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_7632(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				func_41(0);
				HUD::RESET_RETICULE_VALUES();
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				}
				GlobalFunc_4935();
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::STOP_PLAYER_SWITCH();
				}
				AUDIO::STOP_ALL_ALARMS(1);
				fVar1 = (IntToFloat(MISC::GET_GAME_TIMER()) + (100f * 0.075f));
				while (IntToFloat(MISC::GET_GAME_TIMER()) < fVar1 || IntToFloat(MISC::GET_GAME_TIMER()) < Global_89962.f_30)
				{
					SYSTEM::WAIT(0);
					func_657("", 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						uVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(uVar2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
							{
								Global_89962.f_31 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(Global_89962.f_20, 21))
				{
					GlobalFunc_2826(1);
				}
				func_671();
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) && SYSTEM::TIMERB() < SYSTEM::CEIL(((4000f * 0.075f) * 0.7f)))
		{
			SYSTEM::SETTIMERB(SYSTEM::CEIL(((4000f * 0.075f) * 0.7f)));
		}
	}
	else
	{
		func_663();
	}
}

bool func_711()//Position - 0x65E71
{
	if (!MISC::IS_BIT_SET(Global_89962.f_20, 6))
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0))
		{
			MISC::SET_BIT(&(Global_89962.f_20), 6);
		}
	}
	return MISC::IS_BIT_SET(Global_89962.f_20, 6);
}

void func_712(bool bParam0)//Position - 0x65EAB
{
	if (bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_20();
	if (GlobalFunc_142())
	{
		Global_89962 = 8;
		func_651();
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GlobalFunc_6836();
		GlobalFunc_5224();
		func_229();
	}
}

void func_713()//Position - 0x65EE7
{
	func_714();
	Global_89962 = 12;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_714()//Position - 0x65EFD
{
	func_20();
	GlobalFunc_8306();
}

