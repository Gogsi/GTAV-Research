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
		func_112(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_111();
	func_110();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_109();
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
						if (!func_95())
						{
							if (func_83())
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
							func_50(&Local_100, 1);
							func_48();
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
									if (func_5(&Local_100, "RERHOAU", "RERHO_THANK", 4, iLocal_265, 0, 0))
									{
										bLocal_76 = true;
									}
								}
								else if (func_5(&Local_100, "RERHOAU", "RERHO_NOGUN", 4, iLocal_265, 0, 0))
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
								func_1(iLocal_52, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_65 = MISC::GET_GAME_TIMER();
							}
						}
						if (bLocal_76)
						{
							if (!iLocal_84)
							{
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
									if (func_5(&Local_100, "RERHOAU", "RERHO_CONS", 4, iLocal_265, 0, 0))
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

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x452
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0)//Position - 0x46B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
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
			func_48();
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
			TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
			func_48();
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
			func_48();
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
				TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
				func_48();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
		TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_47, 50f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_53, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		func_48();
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
			func_48();
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
				TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_52, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
				func_48();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_52))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, 0);
		TASK::TASK_SMART_FLEE_COORD(iLocal_52, Local_47, 50f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
		func_48();
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9BB
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xA09
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_18();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_7();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_20();
	}
	return 0;
}

void func_7()//Position - 0xCD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_8()//Position - 0xD07
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_9()//Position - 0xD9C
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xDC3
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_11()//Position - 0xE5C
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_12();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_12()//Position - 0xEFD
{
	func_13();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_13()//Position - 0xF16
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_97353.f_1729.f_539.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_14(iVar0) && (!func_17(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_14(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_14(int iParam0)//Position - 0x1013
{
	return iParam0 < 3;
}

int func_15(int iParam0)//Position - 0x101F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0x105C
{
	if (func_14(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0x1086
{
	return Global_34913 == iParam0;
}

void func_18()//Position - 0x1094
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)//Position - 0x10EC
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_20()//Position - 0x1127
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x117E
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

void func_22()//Position - 0x11D4
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_46();
	func_26(-1, 0);
	func_23();
	func_157();
}

void func_23()//Position - 0x11F7
{
	func_24();
}

int func_24()//Position - 0x1204
{
	if (func_25(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_25(bool bParam0)//Position - 0x124F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_26(int iParam0, int iParam1)//Position - 0x127A
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_37("RE_REWARD", 1, 0, 4000, 10000, func_40(), 0, 138, 0);
			func_36(51);
		}
		if (func_35(iParam0))
		{
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_34(iParam0, iParam1) != 322)
		{
			func_28(func_34(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_27(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_27(7);
			}
			else
			{
				func_27(1);
			}
		}
	}
}

void func_27(int iParam0)//Position - 0x137E
{
	Global_97339 = iParam0;
}

void func_28(int iParam0, var uParam1, var uParam2)//Position - 0x138C
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_32((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_29();
	}
}

void func_29()//Position - 0x1474
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!MISC::IS_BIT_SET(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_97089, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_97072, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_97090, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_97073, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_97091, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_97074, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_97092, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_97075, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_97079, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_97353.f_8448.f_3853))
	{
		func_31(13, SYSTEM::FLOOR(Global_97353.f_8448.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_30() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_24();
				}
			}
		}
	}
}

int func_30()//Position - 0x1935
{
	return Global_24444;
}

int func_31(int iParam0, int iParam1)//Position - 0x1940
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1991
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_33()//Position - 0x1BEE
{
	return Global_1312737;
}

int func_34(int iParam0, int iParam1)//Position - 0x1BFA
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_35(int iParam0)//Position - 0x1F6E
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_36(int iParam0)//Position - 0x1F9D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_37(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1FDF
{
	func_38(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_38(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2001
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_39();
	}
}

void func_39()//Position - 0x21D5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_40()//Position - 0x22F5
{
	func_13();
	switch (Global_97353.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x233B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_42(int iParam0, int iParam1)//Position - 0x237E
{
	MISC::SET_BIT(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)//Position - 0x2399
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_44()//Position - 0x244A
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2467
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_46()//Position - 0x2641
{
	return 1;
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
							if (func_5(&Local_100, "RERHOAU", "RERHO_SAINT", 4, iLocal_265, 0, 0))
							{
								iLocal_77 = 1;
							}
						}
					}
					else if (func_5(&Local_100, "RERHOAU", "RERHO_THANK", 4, iLocal_265, 0, 0))
					{
						iLocal_77 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_67) == 1f)
				{
					iLocal_67 = PED::CREATE_SYNCHRONIZED_SCENE(Local_69, Local_72, 2);
					func_1(iLocal_52, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
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

void func_48()//Position - 0x28A6
{
	Global_14558 = 0;
	func_49();
}

void func_49()//Position - 0x28B6
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_50(var uParam0, int iParam1)//Position - 0x28D7
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_51()//Position - 0x28F4
{
	if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID())) || (func_61(iLocal_51, &uLocal_61, &iLocal_62, 0, 0, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID()))) || (func_60(1) && PED::CAN_PED_SEE_HATED_PED(iLocal_51, PLAYER::PLAYER_PED_ID()))) || func_58()) || func_57()) || func_4()) || func_56()) || PED::IS_PED_RAGDOLL(iLocal_51)) || func_55()) || func_54()) || func_52(iLocal_51))
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
					if (func_5(&Local_100, "RERHOAU", sLocal_90, 4, 0, 0, 0))
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
		else if (func_5(&Local_100, "RERHOAU", sLocal_91, 4, iLocal_265, 0, 0))
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
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), func_53(PLAYER::PLAYER_ID())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)//Position - 0x2C92
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_54()//Position - 0x2CA5
{
	if (func_95())
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

int func_60(int iParam0)//Position - 0x3101
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
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_65(iParam0);
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
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
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
								func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_66("	aggro Ped knows player is pointing gun\n");
								func_62("		lockOnTimer = ", *iParam2);
								func_66("\n");
								func_62("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								func_66("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *iParam2))
								{
									func_66("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_65(iParam0);
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
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_65(iParam0);
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

void func_62(char* sParam0, int iParam1)//Position - 0x33B6
{
	func_64(sParam0);
	func_63(iParam1);
}

void func_63(int iParam0)//Position - 0x33CA
{
	if (iParam0 > 0)
	{
	}
}

void func_64(char* sParam0)//Position - 0x33D8
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

void func_65(var uParam0)//Position - 0x33EB
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0);
}

void func_66(char* sParam0)//Position - 0x33F9
{
	func_64(sParam0);
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
		func_69(1);
		iLocal_98 = MISC::GET_GAME_TIMER();
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	else
	{
		func_51();
	}
}

int func_69(int iParam0)//Position - 0x34E4
{
	if (func_73())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_35(Global_97342))
		{
			func_70(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_35(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_70(int iParam0)//Position - 0x3537
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_71(func_72(iParam0), -1);
					Global_97353.f_28192.f_2++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_71(func_72(iParam0), -1);
					Global_97353.f_28192.f_3++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_71(func_72(iParam0), -1);
					Global_97353.f_28192.f_4++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x3618
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_72(int iParam0)//Position - 0x362F
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_73()//Position - 0x3673
{
	switch (func_74(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x36A9
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_78(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_76(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_75(uParam0, iParam4);
		}
	}
	return 2;
}

void func_75(var uParam0, int iParam1)//Position - 0x37E0
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_76(int iParam0)//Position - 0x382F
{
	return func_77(iParam0, Global_34913);
}

int func_77(int iParam0, int iParam1)//Position - 0x3840
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x3A21
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_79(var uParam0, bool bParam1, int iParam2)//Position - 0x3A43
{
	iParam2 = iParam2;
	return func_80(uParam0, bParam1, 145);
}

var func_80(var uParam0, bool bParam1, int iParam2)//Position - 0x3A59
{
	var uVar0;
	
	uVar0 = func_81(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)//Position - 0x3AAB
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_82(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)//Position - 0x3B4F
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()//Position - 0x3B66
{
	if (!func_76(5))
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_84(float fParam0, bool bParam1)//Position - 0x3BC8
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_14(func_12()))
		{
			iVar36 = func_40();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_97353.f_16828[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_85(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_85(int iParam0, var uParam1)//Position - 0x3C7F
{
	switch (iParam0)
	{
		case 0:
			func_86(uParam1, "Abigail1", func_88(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 1:
			func_86(uParam1, "Abigail2", func_88(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 2:
			func_86(uParam1, "Barry1", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 3:
			func_86(uParam1, "Barry2", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 4:
			func_86(uParam1, "Barry3", func_88(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 5:
			func_86(uParam1, "Barry3A", func_88(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 6:
			func_86(uParam1, "Barry3C", func_88(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 7:
			func_86(uParam1, "Barry4", func_88(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_87(iParam0), 0, 0);
			break;
		
		case 8:
			func_86(uParam1, "Dreyfuss1", func_88(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 9:
			func_86(uParam1, "Epsilon1", func_88(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 10:
			func_86(uParam1, "Epsilon2", func_88(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 11:
			func_86(uParam1, "Epsilon3", func_88(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 12:
			func_86(uParam1, "Epsilon4", func_88(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 13:
			func_86(uParam1, "Epsilon5", func_88(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 14:
			func_86(uParam1, "Epsilon6", func_88(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 15:
			func_86(uParam1, "Epsilon7", func_88(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 16:
			func_86(uParam1, "Epsilon8", func_88(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 17:
			func_86(uParam1, "Extreme1", func_88(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 18:
			func_86(uParam1, "Extreme2", func_88(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 19:
			func_86(uParam1, "Extreme3", func_88(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 20:
			func_86(uParam1, "Extreme4", func_88(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 21:
			func_86(uParam1, "Fanatic1", func_88(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 22:
			func_86(uParam1, "Fanatic2", func_88(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 23:
			func_86(uParam1, "Fanatic3", func_88(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_87(iParam0), 0, 1);
			break;
		
		case 24:
			func_86(uParam1, "Hao1", func_88(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_87(iParam0), 0, 1);
			break;
		
		case 25:
			func_86(uParam1, "Hunting1", func_88(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 26:
			func_86(uParam1, "Hunting2", func_88(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 27:
			func_86(uParam1, "Josh1", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 28:
			func_86(uParam1, "Josh2", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 29:
			func_86(uParam1, "Josh3", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 30:
			func_86(uParam1, "Josh4", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 31:
			func_86(uParam1, "Maude1", func_88(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 32:
			func_86(uParam1, "Minute1", func_88(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 33:
			func_86(uParam1, "Minute2", func_88(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 34:
			func_86(uParam1, "Minute3", func_88(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 35:
			func_86(uParam1, "MrsPhilips1", func_88(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 36:
			func_86(uParam1, "MrsPhilips2", func_88(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 37:
			func_86(uParam1, "Nigel1", func_88(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 38:
			func_86(uParam1, "Nigel1A", func_88(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 39:
			func_86(uParam1, "Nigel1B", func_88(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 40:
			func_86(uParam1, "Nigel1C", func_88(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 41:
			func_86(uParam1, "Nigel1D", func_88(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 42:
			func_86(uParam1, "Nigel2", func_88(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 43:
			func_86(uParam1, "Nigel3", func_88(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 44:
			func_86(uParam1, "Omega1", func_88(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 45:
			func_86(uParam1, "Omega2", func_88(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 46:
			func_86(uParam1, "Paparazzo1", func_88(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 47:
			func_86(uParam1, "Paparazzo2", func_88(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 48:
			func_86(uParam1, "Paparazzo3", func_88(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 49:
			func_86(uParam1, "Paparazzo3A", func_88(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 50:
			func_86(uParam1, "Paparazzo3B", func_88(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 51:
			func_86(uParam1, "Paparazzo4", func_88(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 52:
			func_86(uParam1, "Rampage1", func_88(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 54:
			func_86(uParam1, "Rampage3", func_88(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 55:
			func_86(uParam1, "Rampage4", func_88(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 56:
			func_86(uParam1, "Rampage5", func_88(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 53:
			func_86(uParam1, "Rampage2", func_88(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 57:
			func_86(uParam1, "TheLastOne", func_88(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 58:
			func_86(uParam1, "Tonya1", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 59:
			func_86(uParam1, "Tonya2", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 60:
			func_86(uParam1, "Tonya3", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 61:
			func_86(uParam1, "Tonya4", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 62:
			func_86(uParam1, "Tonya5", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_86(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x4EC7
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_87(int iParam0)//Position - 0x4F58
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
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
			return 0;
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
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
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
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
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
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
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
		
		default:
			break;
	}
	return 0;
}

struct<2> func_88(int iParam0)//Position - 0x529E
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_89(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_89(int iParam0)//Position - 0x52D6
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_90()//Position - 0x5723
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_91()//Position - 0x5740
{
	if (func_94() && !func_90())
	{
		return 1;
	}
	if (func_93() && func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()//Position - 0x5772
{
	return Global_97071 > 0;
}

int func_93()//Position - 0x5780
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x5795
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_95()//Position - 0x57BB
{
	if ((Global_97342 == func_44() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
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
			func_5(&Local_100, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
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
		func_48();
	}
}

void func_99()//Position - 0x59DD
{
	if (Local_100[2 /*10*/].f_7)
	{
		func_50(&Local_100, 2);
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
		func_50(&Local_100, 1);
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
						func_100(iLocal_53, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_100(iLocal_53, "GENERIC_SHOCKED_HIGH", 24);
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

void func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x5B22
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5B39
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
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
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (func_84(100f, 1) != -1)
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
		func_108(&Local_100, 0, PLAYER::PLAYER_PED_ID(), sLocal_89, 0, 1);
		func_108(&Local_100, 1, iLocal_51, "RHCriminal", 0, 1);
		func_108(&Local_100, 2, iLocal_52, "RHHostage", 0, 1);
		func_108(&Local_100, 3, iLocal_53, "RHBystander", 0, 1);
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

void func_108(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x617E
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
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_109()//Position - 0x6219
{
}

void func_110()//Position - 0x6221
{
}

void func_111()//Position - 0x6229
{
	switch (func_12())
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

void func_112(int iParam0)//Position - 0x6279
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_113();
}

void func_113()//Position - 0x62AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_114(int iParam0)//Position - 0x62EC
{
	Global_97342 = iParam0;
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
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_156())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_90())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
		{
			return 0;
		}
		if (func_25(0))
		{
			return 0;
		}
		if (func_91())
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_84(100f, 1) != -1)
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
		if (!func_154(iParam3))
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_153(func_12()) == 4 || func_153(func_12()) == 5)
			{
				return 0;
			}
		}
		if (func_14(func_12()))
		{
			if (!func_152(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_151(Global_97353.f_28192.f_43[iParam3]))
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
		if (func_150())
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
		if (!func_141(4))
		{
			return 0;
		}
		if (!func_76(5))
		{
			return 0;
		}
		if (func_140(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_140(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_154(30) && !func_140(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_14(func_12()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_139(iVar8))
				{
					if (func_117(iVar4))
					{
						if (!func_116(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_12() != iVar4)
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

bool func_116(struct<3> Param0, struct<3> Param3)//Position - 0x6693
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_117(int iParam0)//Position - 0x66BC
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)//Position - 0x66DD
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)//Position - 0x66EC
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_139(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x673F
{
	func_121(func_132(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x675D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_131(iParam0, iParam1))
	{
		iVar0 = func_130(iParam1);
		iVar1 = func_128(iParam0);
		iVar2 = (func_128(iParam0) - func_128(iParam1));
		iVar3 = (func_130(iParam0) - func_130(iParam1));
		iVar4 = (func_127(iParam0) - func_127(iParam1));
		iVar5 = (func_126(iParam0) - func_126(iParam1));
		iVar6 = (func_125(iParam0) - func_125(iParam1));
		iVar7 = (func_124(iParam0) - func_124(iParam1));
	}
	else
	{
		iVar0 = func_130(iParam0);
		iVar1 = func_128(iParam1);
		iVar2 = (func_128(iParam1) - func_128(iParam0));
		iVar3 = (func_130(iParam1) - func_130(iParam0));
		iVar4 = (func_127(iParam1) - func_127(iParam0));
		iVar5 = (func_126(iParam1) - func_126(iParam0));
		iVar6 = (func_125(iParam1) - func_125(iParam0));
		iVar7 = (func_124(iParam1) - func_124(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_123(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_122(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_122(float fParam0, float fParam1, float fParam2)//Position - 0x695E
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_123(int iParam0, int iParam1)//Position - 0x69A0
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_124(int iParam0)//Position - 0x6A42
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_125(int iParam0)//Position - 0x6A55
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_126(int iParam0)//Position - 0x6A68
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_127(int iParam0)//Position - 0x6A7B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_128(int iParam0)//Position - 0x6A8D
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_129(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)//Position - 0x6AB2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(int iParam0)//Position - 0x6AC9
{
	return iParam0 & 15;
}

int func_131(int iParam0, int iParam1)//Position - 0x6AD6
{
	int iVar0;
	int iVar1;
	
	if (!func_139(iParam1) || !func_139(iParam0))
	{
		return 1;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	iVar1 = func_127(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_132()//Position - 0x6BE2
{
	var uVar0;
	
	func_138(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_137(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_136(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_135(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_134(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_133(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_133(var uParam0, int iParam1)//Position - 0x6C28
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_134(var uParam0, int iParam1)//Position - 0x6CAE
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)//Position - 0x6CE1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_123(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_136(var uParam0, int iParam1)//Position - 0x6D32
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_137(var uParam0, int iParam1)//Position - 0x6D6C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_138(var uParam0, int iParam1)//Position - 0x6DA7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_139(int iParam0)//Position - 0x6DE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_128(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_130(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_127(iParam0);
	if (iVar5 < 1 || iVar5 > func_123(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)//Position - 0x6EBF
{
	if (MISC::IS_BIT_SET(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x6EE2
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_12();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_96400) || Global_24446) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_149()) || Global_24446) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_96400) || Global_24446) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_149()) || Global_96400) || Global_24446) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_19(8, -1)) || func_144()) || func_143()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_149()) || Global_24446) || func_148()) || func_19(8, -1)) || func_146()) || func_145()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_149()) || func_146()) || Global_96400) || Global_24446) || func_148()) || Global_35957) || func_19(8, -1)) || func_145()) || func_143()) || func_144()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_149()) || Global_96400) || Global_24446) || func_148()) || func_19(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_142()//Position - 0x75FF
{
	return Global_90001.f_1;
}

int func_143()//Position - 0x760D
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_144()//Position - 0x7633
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x764D
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_146()//Position - 0x7677
{
	return Global_90014.f_291 > 0;
}

bool func_147()//Position - 0x7688
{
	return Global_90014.f_290 > 0;
}

var func_148()//Position - 0x7699
{
	return Global_1315900;
}

int func_149()//Position - 0x76A5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_150()//Position - 0x76C1
{
	func_11();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)//Position - 0x76E9
{
	return func_131(func_132(), iParam0);
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x76FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_12();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_153(int iParam0)//Position - 0x77DF
{
	if (!func_14(iParam0))
	{
		return 7;
	}
	return Global_97353.f_5944.f_919[iParam0];
}

bool func_154(int iParam0)//Position - 0x7803
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_155()//Position - 0x7861
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_156()//Position - 0x7898
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_157()//Position - 0x791B
{
	if (func_95())
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
	func_158(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_158(int iParam0)//Position - 0x799F
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_95())
	{
		func_162(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_161(30000);
		StringCopy(&cVar0, func_160(Global_97342, 1), 64);
		if (func_43(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_97339, (MISC::GET_GAME_TIMER() - Global_97340), 0);
	}
	else if (MISC::IS_BIT_SET(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_97349, 0);
	}
	func_159(&Global_24503);
	Global_97343 = 0;
	func_114(-1);
}

void func_159(var uParam0)//Position - 0x7A54
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_160(int iParam0, bool bParam1)//Position - 0x7A91
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_161(int iParam0)//Position - 0x7CDA
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_162(int iParam0)//Position - 0x7CEC
{
	func_163(iParam0, 0, func_168(iParam0));
}

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x7D01
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_132();
	func_166(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_165(iParam0, &uVar0);
	Var1 = { func_164(&uVar0) };
}

struct<16> func_164(var uParam0)//Position - 0x7D30
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_126(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_125(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_124(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_127(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_128(*uParam0), 64);
	return Var0;
}

void func_165(int iParam0, var uParam1)//Position - 0x7E01
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7E19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_130(*uParam0);
	iVar2 = func_127(*uParam0);
	iVar3 = func_126(*uParam0);
	iVar4 = func_125(*uParam0);
	iVar5 = func_124(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_123(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_123(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_167(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7F9B
{
	func_138(uParam0, iParam1);
	func_137(uParam0, iParam2);
	func_136(uParam0, iParam3);
	func_135(uParam0, iParam4);
	func_134(uParam0, iParam5);
	func_133(uParam0, iParam6);
}

int func_168(int iParam0)//Position - 0x7FD3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

