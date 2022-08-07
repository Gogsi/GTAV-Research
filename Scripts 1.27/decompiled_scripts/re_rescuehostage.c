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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	struct<10> Local_100[16];
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	char* sLocal_266 = NULL;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_62 = 8000;
	iLocal_67 = -1;
	bLocal_86 = true;
	sLocal_91 = "NULL";
	fLocal_92 = -120f;
	fLocal_93 = 120f;
	fLocal_94 = 40f;
	fLocal_95 = 90f;
	bLocal_97 = true;
	sLocal_266 = "RANDOM@RESCUE_HOSTAGE";
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_50 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_157();
	}
	if (Global_32360[0] == 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_115(Local_47, -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_111();
	GlobalFunc_587();
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_106())
					{
						iLocal_98 = MISC::GET_GAME_TIMER();
						iLocal_46 = 1;
					}
					else if (func_105())
					{
						func_157();
					}
					break;
				
				case 1:
					if (iLocal_63 == 0)
					{
						iLocal_63 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_104();
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						func_103();
					}
					else if (!PED::IS_PED_INJURED(iLocal_53))
					{
						func_99();
						func_98();
					}
					else
					{
						func_157();
					}
					if (bLocal_75)
					{
						func_96();
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						if (!GlobalFunc_6827())
						{
							if (GlobalFunc_10589())
							{
								func_157();
							}
							func_68();
						}
						else if (!bLocal_75)
						{
							func_51();
						}
					}
					else
					{
						if (Local_100[1 /*10*/].f_7)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_56))
							{
								HUD::REMOVE_BLIP(&uLocal_56);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_57))
							{
								HUD::REMOVE_BLIP(&uLocal_57);
							}
							GlobalFunc_200(&Local_100, 1);
							GlobalFunc_4956();
						}
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (bLocal_75)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_66))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) == 1f)
									{
										if (!PED::IS_PED_INJURED(iLocal_52))
										{
											PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
											ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
										}
									}
								}
							}
							else
							{
								if (func_47())
								{
									iLocal_46 = 3;
								}
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					uLocal_55 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 35f, 0, 101383);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_55, 0))
					{
						if (!bLocal_99)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						func_157();
					}
					if (!iLocal_85)
					{
						if (MISC::CREATE_INCIDENT(7, Local_47, 2, 0f, &uLocal_87))
						{
							iLocal_85 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_83)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!PED::IS_PED_INJURED(iLocal_52))
							{
								PED::SET_PED_KEEP_TASK(iLocal_52, 1);
								func_22();
							}
							func_157();
						}
					}
					else
					{
						if (func_47())
						{
							if (!bLocal_76)
							{
								if (bLocal_86)
								{
									if (GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_THANK", 4, iLocal_265, 0, 0))
									{
										bLocal_76 = true;
									}
								}
								else if (GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_NOGUN", 4, iLocal_265, 0, 0))
								{
									bLocal_76 = true;
								}
							}
						}
						func_3();
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_65 + 100)
							{
								GlobalFunc_5653(iLocal_52, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_65 = MISC::GET_GAME_TIMER();
							}
						}
						if (bLocal_76)
						{
							if (!iLocal_84)
							{
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
									if (GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_CONS", 4, iLocal_265, 0, 0))
									{
										iLocal_84 = 1;
									}
								}
							}
						}
						uLocal_55 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_47, 5f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_55, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_83 = 1;
						}
						iLocal_54 = PED::GET_RANDOM_PED_AT_COORD(Local_47, 1.5f, 1.5f, 1.5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							SYSTEM::SETTIMERA(5000);
							iLocal_83 = 1;
						}
						if (!iLocal_85 && iLocal_84)
						{
							if (MISC::CREATE_INCIDENT(5, Local_47, 2, 0f, &uLocal_88))
							{
								iLocal_85 = 1;
							}
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_47) > 5625f && !CAM::IS_SPHERE_VISIBLE(Local_47, 10f))
						{
							func_22();
						}
					}
					break;
			}
		}
		else if (iLocal_46 == 3)
		{
			func_22();
		}
		else
		{
			func_157();
		}
	}
}



void func_3()//Position - 0x65A
{
	if (func_4())
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
			TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_52, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
			GlobalFunc_4956();
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
			TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
			GlobalFunc_4956();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_52))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_52))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
			TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_52, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
			GlobalFunc_4956();
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
				TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
				GlobalFunc_4956();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
		TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_53, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		GlobalFunc_4956();
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_53))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_53, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_53))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
			TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
			GlobalFunc_4956();
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
				TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
				GlobalFunc_4956();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_52))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
		TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
		GlobalFunc_4956();
	}
}

bool func_4()//Position - 0x863
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 15f, 15f, 10f };
	Var4 = { -15f, -15f, -10f };
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_97 = true;
			bVar0 = true;
		}
		if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_97 = true;
			bVar0 = true;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_97 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
}


















void func_22()//Position - 0x11D4
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	GlobalFunc_82();
	func_26(-1, 0);
	GlobalFunc_7068();
	func_157();
}




void func_26(int iParam0, int iParam1)//Position - 0x127A
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8917(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}





















int func_47()//Position - 0x264A
{
	if (!iLocal_80)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (iLocal_67 == -1)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_52, 0);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(5, 0.5f);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(5, 1f);
				PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iLocal_52, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_52, 1);
				TASK::TASK_PLAY_ANIM(iLocal_52, sLocal_266, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_67 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, uLocal_58);
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_53, iLocal_67, sLocal_266, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
					}
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, iLocal_67, sLocal_266, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_67))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_67) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_77)
				{
					if (bLocal_86)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_67) > 0.5f)
						{
							if (GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_SAINT", 4, iLocal_265, 0, 0))
							{
								iLocal_77 = 1;
							}
						}
					}
					else if (GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_THANK", 4, iLocal_265, 0, 0))
					{
						iLocal_77 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_67) == 1f)
				{
					iLocal_67 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
					GlobalFunc_5653(iLocal_52, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_67, 1);
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (bLocal_86)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_53, iLocal_67, sLocal_266, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_78);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_52, -1, 1024, 2);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_52, 20000, 3f, 1f, 1073741824, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_78);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_78);
						}
						PED::SET_PED_KEEP_TASK(iLocal_53, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, uLocal_60);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, iLocal_67, sLocal_266, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					PED::SET_PED_KEEP_TASK(iLocal_52, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, uLocal_60);
					PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					iLocal_80 = 1;
				}
			}
		}
	}
	return iLocal_80;
}




void func_51()//Position - 0x28F4
{
	if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID())) || (func_61(iLocal_51, &uLocal_61, &iLocal_62, 0, 0, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID()))) || (GlobalFunc_116(1) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID()))) || func_58()) || func_57()) || func_4()) || func_56()) || PED::IS_PED_RAGDOLL(iLocal_51)) || func_55()) || func_54()) || func_52(iLocal_51))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_51, joaat("weapon_stungun"), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_51))
					{
						iLocal_66 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_66, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, iLocal_66, sLocal_266, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_66, sLocal_266, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						PED::SET_PED_KEEP_TASK(iLocal_52, 1);
						PED::SET_PED_CAN_RAGDOLL(iLocal_52, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_53, 1);
				}
				bLocal_75 = true;
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_51, 50);
			}
		}
	}
	else if (SYSTEM::TIMERA() > 6000)
	{
		if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_51) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID())) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_51) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID())))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_56, 1);
			}
			if (!iLocal_79)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
				{
					if (GlobalFunc_10670(&Local_100, "RERHOAU", sLocal_90, 4, 0, 0, 0))
					{
						iLocal_62 = 24000;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_79 = 1;
				}
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sLocal_91, "NULL"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_96)
					{
						sLocal_91 = "RERHO_HELP";
						iLocal_96 = 0;
					}
					else
					{
						sLocal_91 = "RERHO_RANT";
						iLocal_96 = 1;
					}
					break;
				
				case 2:
					sLocal_91 = "RERHO_SCREAM";
					break;
			}
		}
		else if (GlobalFunc_10670(&Local_100, "RERHOAU", sLocal_91, 4, iLocal_265, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
		}
	}
	else
	{
		sLocal_91 = "NULL";
	}
}

int func_52(int iParam0)//Position - 0x2BCC
{
	var uVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_ar_flsh")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_pi_flsh")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), uVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), GlobalFunc_80(PLAYER::PLAYER_ID())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_54()//Position - 0x2CA5
{
	if (GlobalFunc_6827())
	{
		if (MISC::GET_GAME_TIMER() > (iLocal_98 + 60000))
		{
			bLocal_99 = true;
			return 1;
		}
	}
	else if (MISC::GET_GAME_TIMER() > (iLocal_98 + 120000))
	{
		bLocal_99 = true;
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x2CE2
{
	float fVar0;
	var uVar1[32];
	int iVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	
	fVar0 = 75f;
	iVar36 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_51, 0), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar36))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar36) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar36) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	uVar37 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_51, 0), fVar0, 0, 66561);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar37, 0))
	{
		return 1;
	}
	iVar35 = PED::GET_PED_NEARBY_VEHICLES(iLocal_51, &uVar1);
	if (iVar35 > 0)
	{
		iVar34 = 0;
		while (iVar34 < iVar35)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1[iVar34], 0))
			{
				if (((ENTITY::GET_ENTITY_MODEL(uVar1[iVar34]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(uVar1[iVar34]) == joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar34]) == joaat("sheriff")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar34]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar34++;
		}
	}
	return 0;
}

int func_56()//Position - 0x2DE7
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 2f, 2f, 1.5f, 0, 1, 0))
	{
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_51))
		{
			return 1;
		}
	}
	return 0;
}

bool func_57()//Position - 0x2E18
{
	bool bVar0;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_53))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_52))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_51))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_58()//Position - 0x2EA8
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar5;
	struct<2> Var8;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), &uVar5, &Var8);
		fVar12 = Var8.f_1;
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), &uVar14))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uVar14), &uVar5, &Var8);
				fVar12 = (fVar12 + Var8.f_1);
				fVar12 = (fVar12 + 3f);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, (fVar12 + 17f), (fVar12 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, (fVar12 + 12f), (fVar12 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, (fVar12 + 8f), (fVar12 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_47 };
		fVar11 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.x, Var2.f_1);
		if (func_59(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_47 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar11 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.x, Var2.f_1);
		if (func_59(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
	}
	uVar13 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar13))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar13, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, 1, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_59(var uParam0, float fParam1, float fParam2)//Position - 0x307A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}


int func_61(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x315B
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!MISC::IS_BIT_SET(iParam3, 3))
			{
				if (func_67(iParam0, iParam6))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, 1))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								GlobalFunc_6524("	aggro Ped knows player is pointing gun\n");
								GlobalFunc_6570("		lockOnTimer = ", *iParam2);
								GlobalFunc_6524("\n");
								GlobalFunc_6570("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								GlobalFunc_6524("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *iParam2))
								{
									GlobalFunc_6524("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									GlobalFunc_4718(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = MISC::GET_GAME_TIMER();
	}
	return 0;
}






int func_67(int iParam0, int iParam1)//Position - 0x3407
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_68()//Position - 0x3454
{
	if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, 1, 0) || CAM::IS_SPHERE_VISIBLE(Local_47, 15f)) || bLocal_75) || func_4())
	{
		uLocal_56 = func_79(iLocal_51, 1, 0);
		if (HUD::DOES_BLIP_EXIST(uLocal_56))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_56, 0);
		}
		GlobalFunc_9034(1);
		iLocal_98 = MISC::GET_GAME_TIMER();
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	else
	{
		func_51();
	}
}











var func_79(var uParam0, bool bParam1, int iParam2)//Position - 0x3A43
{
	iParam2 = iParam2;
	return GlobalFunc_6829(uParam0, bParam1, 145);
}

















void func_96()//Position - 0x57E6
{
	if (HUD::DOES_BLIP_EXIST(uLocal_56))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_56, 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		PED::SET_PED_RESET_FLAG(iLocal_51, 156, 1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_66))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) > 0.1f)
			{
				if (!iLocal_81)
				{
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_51, PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_81 = 1;
					iLocal_79 = 1;
					func_97();
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_52))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_66))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) > 0.6f)
			{
				func_97();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_52))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
			ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_66))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) == 1f)
			{
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
				ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
			}
			func_97();
		}
	}
}

void func_97()//Position - 0x58F7
{
	if (!iLocal_82)
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			TASK::CLEAR_PED_TASKS(iLocal_51);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_59, uLocal_58);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_58, uLocal_59);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, uLocal_60, uLocal_58);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_60, uLocal_59);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_59, uLocal_60);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, 0, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_51, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_51, 1);
			GlobalFunc_10670(&Local_100, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_82 = 1;
		}
	}
}

void func_98()//Position - 0x59A6
{
	if (bLocal_97)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
		TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_53, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		GlobalFunc_4956();
	}
}

void func_99()//Position - 0x59DD
{
	if (Local_100[2 /*10*/].f_7)
	{
		GlobalFunc_200(&Local_100, 2);
	}
	func_102();
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_47, 1, 1077936128, 0);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(1, 0.5f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, 1f);
	if (Local_100[1 /*10*/].f_7)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_56))
		{
			HUD::REMOVE_BLIP(&uLocal_56);
		}
		GlobalFunc_200(&Local_100, 1);
	}
	if (iLocal_79)
	{
		if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_53, joaat("weapon_pistol"), 0) && PED::IS_PED_INJURED(iLocal_51))
		{
			if (!bLocal_99)
			{
				iLocal_46 = 2;
			}
			else if (func_101(&Local_100, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_265, 0))
			{
				iLocal_46 = 2;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (!PED::IS_PED_INJURED(iLocal_51))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_51, 100f, -1, 0, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
				if (!bLocal_99)
				{
					if (func_101(&Local_100, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_265, 0))
					{
					}
					else
					{
						GlobalFunc_5130(iLocal_53, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					GlobalFunc_5130(iLocal_53, "GENERIC_SHOCKED_HIGH", 24);
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(1);
			iLocal_46 = 2;
		}
	}
	else
	{
		func_157();
	}
}


bool func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5B39
{
	GlobalFunc_513(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return GlobalFunc_9820(sParam2, iParam4, 0);
}

void func_102()//Position - 0x5B8D
{
	if (func_4())
	{
		bLocal_97 = true;
	}
	if (bLocal_97 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_79)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_78);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 5f, 1073741824, 1073741824, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_266, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_78);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_78);
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_78);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_47, 1f, 20000, 1193033728, 1056964608);
				TASK::TASK_LOOK_AT_COORD(0, Local_47, -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_266, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_78);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_78);
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			}
		}
	}
}

void func_103()//Position - 0x5C9F
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
		PED::SET_PED_CAN_RAGDOLL(iLocal_52, 1);
		ENTITY::SET_ENTITY_HEALTH(iLocal_52, 0);
		bLocal_75 = true;
		iLocal_79 = 1;
		func_97();
	}
	else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_52))
	{
		AUDIO::PLAY_PAIN(iLocal_52, 4, 0, 0);
	}
}

void func_104()//Position - 0x5D03
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 50f, 50f, 25f, 0, 1, 0))
	{
		iLocal_265 = 0;
	}
	else
	{
		iLocal_265 = 1;
	}
}

int func_105()//Position - 0x5D37
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

int func_106()//Position - 0x5DBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_47 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_50 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_ANIM_DICT(sLocal_266);
	if (((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_266))
	{
		MISC::CLEAR_AREA(Local_47, 5f, 1, 1, 0, 0);
		iLocal_52 = PED::CREATE_PED(5, iVar2, Local_47, fLocal_50, 1, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_52, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, sVar3);
		PED::SET_PED_CONFIG_FLAG(iLocal_52, 20, 1);
		iLocal_51 = PED::CREATE_PED(22, iVar0, Local_47, fLocal_50, 1, 1);
		ENTITY::SET_ENTITY_HEALTH(iLocal_51, 125);
		PED::SET_PED_MAX_HEALTH(iLocal_51, 125);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_51, 128, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_51, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_51, 42, 1);
		PED::SET_PED_HEARING_RANGE(iLocal_51, 1.5f);
		AUDIO::STOP_PED_SPEAKING(iLocal_51, 1);
		PED::SET_PED_SEEING_RANGE(iLocal_51, 40f);
		PED::SET_PED_CONFIG_FLAG(iLocal_51, 20, 1);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iLocal_51, fLocal_92);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iLocal_51, fLocal_93);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iLocal_51, fLocal_94);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iLocal_51, fLocal_95);
		iLocal_53 = PED::CREATE_PED(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_50, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		uLocal_64 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_53, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_53, 1);
		Local_47.f_2 = (Local_47.f_2 + 1f);
		Local_69 = { Local_47 };
		Local_72 = { 0f, 0f, fLocal_50 };
		iLocal_66 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_66, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_66, sLocal_266, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52, iLocal_66, sLocal_266, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		uLocal_68 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_68, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_53, iLocal_68, sLocal_266, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 185, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_51, joaat("weapon_pistol"), -1, 1, 1);
		PED::SET_PED_AS_ENEMY(iLocal_51, 1);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relManager", &uLocal_60);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relBadGuy", &uLocal_59);
		uLocal_58 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_59, uLocal_58);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_58, uLocal_59);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, uLocal_60);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51, uLocal_59);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 5, 0);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_53, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 11, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_52, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 5, 0);
		GlobalFunc_1286(&Local_100, 0, PLAYER::PLAYER_PED_ID(), sLocal_89, 0, 1);
		GlobalFunc_1286(&Local_100, 1, iLocal_51, "RHCriminal", 0, 1);
		GlobalFunc_1286(&Local_100, 2, iLocal_52, "RHHostage", 0, 1);
		GlobalFunc_1286(&Local_100, 3, iLocal_53, "RHBystander", 0, 1);
		PED::SET_CREATE_RANDOM_COPS(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_107(1);
		MISC::CLEAR_AREA_OF_OBJECTS(-89f, 6392f, 32f, 3f, 2);
		SYSTEM::SETTIMERA(8000);
		return 1;
	}
	return 0;
}

void func_107(bool bParam0)//Position - 0x6166
{
	if (bParam0)
	{
		Global_24674 = 1;
	}
	else
	{
		Global_24674 = 0;
	}
}




void func_111()//Position - 0x6229
{
	switch (GlobalFunc_8354())
	{
		case 0:
			sLocal_89 = "MICHAEL";
			sLocal_90 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_89 = "FRANKLIN";
			sLocal_90 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_89 = "TREVOR";
			sLocal_90 = "RERHO_TDOWN";
			break;
	}
}




int func_115(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x62FA
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_2663())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_9560(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_6509(GlobalFunc_8354()) == 4 || GlobalFunc_6509(GlobalFunc_8354()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (!GlobalFunc_9561(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10590())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_9547(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8354() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}










































void func_157()//Position - 0x791B
{
	if (GlobalFunc_6827())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(1);
	}
	if (iLocal_46 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_59);
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_60);
		AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(20000);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_64, 0);
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_63);
		func_107(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_51) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_51, 1);
		SYSTEM::WAIT(0);
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












