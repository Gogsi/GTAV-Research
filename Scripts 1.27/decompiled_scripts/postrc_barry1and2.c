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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	sLocal_43 = "RCMBarryLeadInOut";
	sLocal_44 = "idle";
	Local_48 = { 189.5964f, -956.0344f, 29.5771f };
	Local_51 = { 190.2424f, -956.379f, 28.63f };
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	if (func_24(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_21(0);
	}
	STREAMING::REQUEST_ANIM_DICT(sLocal_43);
	HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_43) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_24(PLAYER::PLAYER_PED_ID());
	iLocal_45 = MISC::GET_GAME_TIMER() + 13000;
	iLocal_46 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	func_18();
	while (!func_13(&uLocal_42, 49, Local_51, func_17(1.12f), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_12();
	iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	while (true)
	{
		func_24(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_GAME_TIMER() < iLocal_47)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_42))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(PLAYER::PLAYER_PED_ID(), Local_51, 1) > 70f)
		{
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_21(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, bool bParam1)//Position - 0x1D6
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)//Position - 0x211
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

int func_3()//Position - 0x24A
{
	var uVar0;
	
	if (((((func_10(PLAYER::PLAYER_PED_ID()) && func_10(uLocal_42)) && !func_9()) && MISC::GET_GAME_TIMER() > iLocal_45) && func_8(PLAYER::PLAYER_PED_ID(), uLocal_42, 1) < 20f) && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_42, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_45 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DA
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x315
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_6()//Position - 0x36B
{
	char* sVar0;
	
	switch (iLocal_46)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_46++;
	if (iLocal_46 > 4)
	{
		iLocal_46 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3D1
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)//Position - 0x46C
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_9()//Position - 0x4C8
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)//Position - 0x4EA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()//Position - 0x50A
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_51, 5f))
	{
		if (func_10(uLocal_42))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_42, 0);
			PED::APPLY_DAMAGE_TO_PED(uLocal_42, 1000, 1);
		}
		if (func_10(uLocal_40))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_40, 0);
		}
		if (func_10(uLocal_39))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_39, 0);
		}
	}
}

void func_12()//Position - 0x559
{
	if (func_10(uLocal_42))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_42))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_42, 1, 0);
		}
		PED::SET_PED_PROP_INDEX(uLocal_42, 1, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_42, 1);
		PED::SET_PED_MONEY(uLocal_42, 0);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_42, 0);
		PED::SET_PED_NAME_DEBUG(uLocal_42, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_42, 1862763509);
		ENTITY::SET_ENTITY_COLLISION(uLocal_42, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_42, 1);
		ENTITY::SET_ENTITY_COORDS(uLocal_42, Local_51, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uLocal_42, func_17(1.12f));
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_42, 1);
		TASK::TASK_PLAY_ANIM(uLocal_42, sLocal_43, sLocal_44, 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::TASK_LOOK_AT_ENTITY(uLocal_42, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)//Position - 0x60A
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)//Position - 0x698
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_86201[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)//Position - 0x6DE
{
	if (!func_16(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0x709
{
	return iParam0 < 3;
}

float func_17(float fParam0)//Position - 0x715
{
	return (fParam0 * 57.29578f);
}

void func_18()//Position - 0x725
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_40))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_40, 1, 0);
			}
			Local_48 = { 189.5964f, -956.0344f, 29.54f };
			ENTITY::SET_ENTITY_COORDS(uLocal_40, Local_48, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_40, func_17(-2.01f));
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_40, 1);
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_39 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_39))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_39, 1, 0);
			}
			Local_48 = { 190.2574f, -956.3513f, 29.621f };
			ENTITY::SET_ENTITY_COORDS(uLocal_39, Local_48, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_39, func_17(-1.68f));
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_39, 1);
		}
	}
	else
	{
		Local_48 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_39, joaat("prop_chair_08"), Local_48, func_17(-1.68f));
		ENTITY::SET_ENTITY_COORDS(uLocal_39, Local_48, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uLocal_39, func_17(-1.68f));
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_39, 1);
	}
	Local_48 = { 192.4462f, -953.5946f, 29.0919f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_48, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_41 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_48, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_41))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_41, 1, 0);
			}
			Local_48.f_2 = 29.603f;
			ENTITY::SET_ENTITY_COORDS(uLocal_41, Local_48, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_41, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_41, joaat("prop_protest_sign_01"), Local_48, 23.45f);
		ENTITY::SET_ENTITY_COORDS(uLocal_41, Local_48, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uLocal_41, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x956
{
	func_20(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
}

void func_20(var uParam0)//Position - 0x97D
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_21(bool bParam0)//Position - 0x9A8
{
	if (bParam0)
	{
		func_23(&uLocal_42);
	}
	else
	{
		func_22(&uLocal_42, 1, 0, 1);
	}
	if (func_10(uLocal_40))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_40, 0);
	}
	if (func_10(uLocal_39))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_39, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_39);
		func_20(&uLocal_40);
		func_20(&uLocal_41);
	}
	else
	{
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_43);
	HUD::CLEAR_ADDITIONAL_TEXT(7, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA26
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_23(var uParam0)//Position - 0xA75
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

bool func_24(var uParam0)//Position - 0xAB4
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam0);
}

