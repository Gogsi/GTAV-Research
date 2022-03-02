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
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 3;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87[5];
	struct<8> Local_103[5];
	int iLocal_144 = 0;
	struct<9> ScriptParam_0 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	iLocal_78 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_19();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = MISC::GET_GAME_TIMER();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((MISC::GET_GAME_TIMER() - iVar6) > 100)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
				if (GlobalFunc_5780(iLocal_78[iVar3]))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_78[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_78[iVar3]))
					{
						GlobalFunc_589(&(Local_103[iVar3 /*8*/]));
						GlobalFunc_132(&(iLocal_78[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_78[iVar3], &(Local_103[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_78[iVar3]))
				{
					GlobalFunc_132(&(iLocal_78[iVar3]), 1, 0, 1);
				}
				if (GlobalFunc_5230(iLocal_78.f_5[iVar4]))
				{
					if (SYSTEM::VDIST2(Var0, Local_87[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_78.f_5[iVar4]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_78.f_5[iVar4], 0))
						{
							GlobalFunc_131(&(iLocal_78.f_5[iVar4]));
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_78.f_5[iVar4]))
				{
					GlobalFunc_131(&(iLocal_78.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_78)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_78.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = MISC::GET_GAME_TIMER();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x20A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_78.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_78[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}




int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x2E4
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(uParam0, 1);
			uParam1->f_7 = uParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(uParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(uParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(uParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(uParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}




int func_9()//Position - 0x4DE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bailbond2")) == 0)
	{
		if (!GlobalFunc_4938(4))
		{
			return 0;
		}
	}
	if (Global_87287 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_24446)
	{
		return 0;
	}
	if (GlobalFunc_8354() != 2)
	{
		return 0;
	}
	return 1;
}









void func_18()//Position - 0x8B7
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_144, 1862763509);
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (GlobalFunc_5230(iLocal_78.f_5[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_78.f_5[iVar0], 1, 1);
			Local_87[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_78.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (GlobalFunc_5780(iLocal_78[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_78[iVar0], 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_78[iVar0], iLocal_144);
			func_5(iLocal_78[iVar0], &(Local_103[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		}
		iVar0++;
	}
}

void func_19()//Position - 0x97F
{
	int iVar0;
	
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_144);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_144, 1862763509);
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		GlobalFunc_589(&(Local_103[iVar0 /*8*/]));
		GlobalFunc_132(&(iLocal_78[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		GlobalFunc_131(&(iLocal_78.f_5[iVar0]));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

