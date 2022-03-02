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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 10;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	char* sLocal_97 = NULL;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	
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
	iLocal_89 = joaat("u_m_o_taphillbilly");
	sLocal_97 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_100 = -1;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_93 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_36(0);
	}
	if (GlobalFunc_747(Global_SAVE_DATA.SPEC_PedsKilled, 16384))
	{
		func_36(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_94))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_94) && !iLocal_98 == 7)
			{
				GlobalFunc_812(&(Global_SAVE_DATA.SPEC_PedsKilled), 16384);
				iLocal_98 = 7;
			}
		}
		switch (iLocal_98)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_33()) && !GlobalFunc_10589())
				{
					if (func_11())
					{
						uLocal_94 = PED::CREATE_PED(26, iLocal_89, Local_90, uLocal_93, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_94, 1);
						uLocal_95 = OBJECT::CREATE_OBJECT(joaat("prop_tapeplayer_01"), 704.7615f, 4179.574f, 39.7093f, 1, 1, 0);
						ENTITY::SET_ENTITY_HEADING(uLocal_95, (233.8288f + 180f));
						PED::SET_PED_PROP_INDEX(uLocal_94, 0, 0, 0, 0);
						iLocal_98 = 1;
					}
				}
				else
				{
					func_36(0);
				}
				break;
			
			case 1:
				iLocal_100 = PED::CREATE_SYNCHRONIZED_SCENE(Local_90 + Vector(1f, 0f, 0f), 0f, 0f, uLocal_93, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_94, iLocal_100, sLocal_97, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1148846080, 0);
				AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("MNT_DNC", uLocal_94);
				iLocal_98 = 2;
				break;
			
			case 2:
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(iLocal_100, "MNT_DNC") == 1)
				{
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_100);
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_94, 1) };
				PED::SET_PED_LOD_MULTIPLIER(uLocal_94, 3f);
				if (GlobalFunc_6442(PLAYER::PLAYER_PED_ID(), uLocal_94) < 10f)
				{
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, uLocal_94, 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(uLocal_94, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
				if (GlobalFunc_850(uLocal_94, PLAYER::PLAYER_PED_ID(), 1) < 25f)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_99))
					{
						func_5(&uLocal_99, &uLocal_94, 0);
						HUD::SET_BLIP_COLOUR(uLocal_99, 3);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					GlobalFunc_703(&uLocal_99);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_100) > 0.9999999f)
				{
					iLocal_98 = 1;
				}
				if (PED::IS_PED_RAGDOLL(uLocal_94))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_100);
					iLocal_98 = 4;
				}
				if (((((PED::IS_PED_INJURED(uLocal_94) || MISC::IS_BULLET_IN_AREA(Var0, 50f, 1)) || MISC::IS_BULLET_IN_AREA(Var0, 50f, 0)) || MISC::IS_PROJECTILE_IN_AREA(Var0, 20f, 20f, 20f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 50f)) || (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_94) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_94)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1) < 25f) && GlobalFunc_6441(uLocal_94, PLAYER::PLAYER_PED_ID(), 1126825984, 0)))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_100);
					iLocal_98 = 4;
					iLocal_96 = 1;
				}
				break;
			
			case 4:
				if (HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					GlobalFunc_703(&uLocal_99);
				}
				if (!PED::IS_PED_RAGDOLL(uLocal_94))
				{
					if (iLocal_96 == 1)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_94, 723.1315f, 4171.957f, 39.7091f, 2f, -1, 1f, 1024, 1193033728);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_94, 723.1315f, 4171.957f, 39.7091f, 1f, -1, 1f, 1024, 1193033728);
					}
					PED::SET_PED_KEEP_TASK(uLocal_94, 1);
					iLocal_98 = 6;
				}
				break;
			
			case 6:
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_94, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_94, 713668775) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_94, 0);
					if (iLocal_96 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_94, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(uLocal_94, 1193033728, 0);
					}
					PED::SET_PED_KEEP_TASK(uLocal_94, 1);
					iLocal_98 = 5;
				}
				break;
			
			case 5:
				if ((ENTITY::IS_ENTITY_OCCLUDED(uLocal_94) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_94, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f) && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					func_36(1);
				}
				break;
			
			case 7:
				if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					func_36(0);
				}
				break;
		}
	}
}





void func_5(var uParam0, var uParam1, bool bParam2)//Position - 0x598
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				*uParam0 = GlobalFunc_7502(*uParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*uParam0, 7);
				}
			}
		}
	}
}






int func_11()//Position - 0x756
{
	STREAMING::REQUEST_MODEL(iLocal_89);
	STREAMING::REQUEST_ANIM_DICT(sLocal_97);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_89) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_97))
	{
		return 1;
	}
	return 0;
}






















int func_33()//Position - 0x26FF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9560(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}



void func_36(bool bParam0)//Position - 0x27A5
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_95))
	{
		OBJECT::DELETE_OBJECT(&uLocal_95);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_99))
	{
		GlobalFunc_703(&uLocal_99);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_94))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&uLocal_94);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_94);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

