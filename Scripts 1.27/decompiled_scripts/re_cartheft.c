#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
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
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	char* sLocal_85 = NULL;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	float fLocal_118 = 0f;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	struct<10> Local_121[16];
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	char* sLocal_286 = NULL;
	char* sLocal_287 = NULL;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	char* sLocal_290 = NULL;
	char* sLocal_291 = NULL;
	char* sLocal_292 = NULL;
	char[] cLocal_293[8] = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_325 = { 0, 0, 0 } ;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 1000;
	var uLocal_339 = 1000;
	var uLocal_340 = 0;
	bool bLocal_341 = 0;
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
	int iVar3;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_55 = 10f;
	fLocal_56 = 7f;
	iLocal_57 = 1;
	sLocal_83 = "random@car_thief@waving_ig_1";
	fLocal_118 = 1f;
	iLocal_298 = 786603;
	iLocal_299 = 786469;
	sLocal_306 = "car_returned_peyote";
	sLocal_307 = "girl_car_returned";
	sLocal_308 = "player_car_returned";
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_54 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_220();
	}
	func_219();
	if (iLocal_300 == 2)
	{
		if (GlobalFunc_891(34))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var0.f_2 > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
	if (func_177(Local_51, 17, iLocal_300, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		GlobalFunc_4715(uLocal_62, &uLocal_65);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		}
		func_171();
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10586())
			{
				func_220();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_47)
				{
					case 0:
						if (func_152())
						{
							PED::SET_CREATE_RANDOM_COPS(0);
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_75))
						{
							if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_74)) && GlobalFunc_4947(iLocal_76)) && !func_150(0))
							{
								if (func_149())
								{
									if (GlobalFunc_4947(iLocal_79))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_79, 0);
									}
									GlobalFunc_9559(1);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									GlobalFunc_8523(39, 1);
									GlobalFunc_8523(40, 1);
									GlobalFunc_8523(41, 1);
									GlobalFunc_8523(42, 1);
									GlobalFunc_8523(43, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_74))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_74, 1);
									SYSTEM::WAIT(0);
								}
								func_220();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_74) && GlobalFunc_4947(iLocal_76))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_74, iLocal_76, 20f, iLocal_298);
								PED::SET_PED_KEEP_TASK(iLocal_74, 1);
								SYSTEM::WAIT(0);
							}
							func_103(0);
						}
						break;
				}
			}
			else
			{
				func_220();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(iLocal_75))
			{
				if (Local_121[2 /*10*/].f_7)
				{
					GlobalFunc_200(&Local_121, 2);
				}
			}
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_94();
			if (GlobalFunc_4947(iLocal_76) && !func_93())
			{
				if (func_91())
				{
					if (!PED::IS_PED_INJURED(iLocal_74))
					{
						switch (iLocal_48)
						{
							case 0:
								if (!PED::IS_PED_INJURED(iLocal_75))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_75, iLocal_76, 0))
									{
										if (iLocal_300 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_75, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_76, 1);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_76, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_299, 200f, 10f, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_75, uLocal_77);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_75, 1);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_76, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_76, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_299, 200f, 10f, 1);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_75, uLocal_77);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
										}
										Local_316 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_76, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_76, "wheel_lr")) };
										Local_319 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_76, Local_316) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_76, Local_319 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_322 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_76, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_76, "wheel_rr")) };
										Local_325 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_76, Local_322) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_76, Local_325 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										if (!HUD::DOES_BLIP_EXIST(uLocal_63))
										{
											uLocal_63 = func_89(iLocal_76, 1, 0);
										}
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_48 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_76, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!PED::IS_PED_INJURED(iLocal_75))
										{
											TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_75, 1);
											SYSTEM::WAIT(0);
										}
										func_220();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_74, iLocal_76, 20f, iLocal_298);
									PED::SET_PED_KEEP_TASK(iLocal_74, 1);
									SYSTEM::WAIT(0);
									func_103(0);
								}
								break;
							
							case 1:
								if (GlobalFunc_4947(iLocal_76))
								{
									if (iLocal_300 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_118 = (fLocal_118 + 0.4f);
											}
											else
											{
												fLocal_118 = (fLocal_118 + 0.2f);
											}
											if (fLocal_118 > 30f)
											{
												fLocal_118 = 30f;
											}
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_76, fLocal_118);
											iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), 5f, 0, 4);
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
											{
												if (GlobalFunc_4947(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
												{
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_76))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (GlobalFunc_4947(iVar3))
												{
													if (iVar3 != iLocal_76)
													{
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, iLocal_76))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_76) < 700f)
									{
										func_220();
									}
								}
								func_66();
								if ((((((func_65() || func_64()) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_76)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_76, 1, 5000)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_76)) || PED::IS_PED_INJURED(iLocal_75)) || !PED::IS_PED_IN_VEHICLE(iLocal_75, iLocal_76, 0))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (GlobalFunc_4947(iLocal_76))
										{
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_76, 0);
										}
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_63))
									{
										HUD::REMOVE_BLIP(&uLocal_63);
									}
									func_63();
									if (HUD::DOES_BLIP_EXIST(uLocal_62))
									{
										HUD::REMOVE_BLIP(&uLocal_62);
									}
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_74);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_76, 50f, 5, 0);
									uLocal_64 = func_89(iLocal_76, 0, 0);
									fLocal_108 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
									fLocal_106 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_COORDS(iLocal_74, 1));
									fLocal_107 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_74, 1));
									GlobalFunc_4948(&uLocal_329, 0, 0);
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if (GlobalFunc_4947(iLocal_76))
								{
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_76) < 700f)
									{
										func_220();
									}
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									func_220();
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_75))
								{
									if (!PED::IS_PED_IN_VEHICLE(iLocal_75, iLocal_76, 0))
									{
										GlobalFunc_661(iLocal_75, &uLocal_66, -1, 0, 0, 0, -1082130432, 0);
									}
								}
								else
								{
									GlobalFunc_589(&uLocal_66);
								}
								if (!PED::IS_PED_INJURED(iLocal_75))
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_75, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_COMBAT_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
									}
								}
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fLocal_108 + 220f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_COORDS(iLocal_74, 1)) > (fLocal_106 + 220f)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_74, 1)) > (fLocal_107 + 220f))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76, 0))
									{
										func_103(0);
									}
									else
									{
										func_220();
									}
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_64))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76, 0))
									{
										HUD::REMOVE_BLIP(&uLocal_64);
										uLocal_62 = func_55(iLocal_74, 0, 0);
										GlobalFunc_4713(&uLocal_65);
										GlobalFunc_4948(&uLocal_329, 0, 0);
										if (!iLocal_59)
										{
											if (iLocal_300 == 1)
											{
												Local_92 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_60)
											{
												Local_92 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_92 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!CAM::IS_SPHERE_VISIBLE(Local_92, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_74))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_74, Local_92, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iLocal_74, fLocal_105);
												iLocal_59 = 1;
											}
										}
										iLocal_49 = 3;
										iLocal_303 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_76, iLocal_74, 20f, 20f, 7f, 0, 1, 0))
									{
										func_53();
										if (func_52())
										{
											if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_74, iLocal_76, -1, 0, 0))
											{
												if (!bLocal_295)
												{
													if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
													{
													}
												}
												TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_74, iLocal_76, 35f, iLocal_298);
												PED::SET_PED_KEEP_TASK(iLocal_74, 1);
												func_103(1);
											}
										}
									}
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_62))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76, 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, fLocal_55, fLocal_55, fLocal_55, 0, 1, 0))
										{
											if (GlobalFunc_552(1, 0, 1))
											{
												HUD::REMOVE_BLIP(&uLocal_62);
												if (iLocal_300 == 1)
												{
													if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_76), 336f, 90f))
													{
														sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_305 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												STREAMING::REQUEST_ANIM_DICT(sLocal_305);
												iLocal_49 = 4;
												iLocal_48 = 3;
											}
										}
										else
										{
											func_38(ENTITY::GET_ENTITY_COORDS(iLocal_74, 1), &fLocal_55, &fLocal_56);
										}
									}
									else
									{
										HUD::REMOVE_BLIP(&uLocal_62);
										uLocal_64 = func_89(iLocal_76, 0, 0);
										iLocal_49 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_300 == 1)
								{
									if (func_4())
									{
										if (GlobalFunc_115(iLocal_74))
										{
											PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
										}
										func_103(1);
									}
								}
								else if (func_4())
								{
									if (GlobalFunc_115(iLocal_74))
									{
										PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
									}
									func_103(1);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_75))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_75, iLocal_76, 0))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_75, iLocal_76, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_299, 10f, 10f, 0);
								PED::SET_PED_KEEP_TASK(iLocal_75, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_75, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
							}
						}
						SYSTEM::WAIT(0);
						func_220();
					}
				}
				else
				{
					if (iLocal_48 == 1)
					{
						if (GlobalFunc_4947(iLocal_76))
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_76);
						}
						if (!PED::IS_PED_INJURED(iLocal_75))
						{
							PED::DELETE_PED(&iLocal_75);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_74))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, sLocal_82, "agitated_idle_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_74, "waiting", sLocal_82, -2f);
						}
						GlobalFunc_5130(iLocal_74, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_101, 1f, 20000, 40000f, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
					}
					func_220();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_75))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_75, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_76, 50f);
				}
				func_220();
			}
		}
	}
}




int func_4()//Position - 0xD9F
{
	struct<3> Var0;
	char* sVar3;
	struct<3> Var4;
	float fVar7;
	
	sVar3 = "chassis";
	func_53();
	if (((!PED::IS_PED_INJURED(iLocal_74) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && GlobalFunc_4947(iLocal_76)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_305))
	{
		switch (iLocal_50)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_552(1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Global_2263, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_8316(1, 1, 1, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									HUD::CLEAR_HELP(1);
									while (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_56, 1, 1056964608, 0, 1))
									{
										HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
									GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_56, 0, 1056964608, 0, 1);
								}
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								if (!PED::IS_PED_INJURED(iLocal_74))
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_74, 0);
								}
								GlobalFunc_4956();
								GlobalFunc_7629();
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_50 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_76, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_76, 0, 1, 1, 1);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_300 == 1)
				{
					if (GlobalFunc_4947(iLocal_76))
					{
						if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_76), 336f, 90f))
						{
							Local_89 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_104 = 336.6557f;
							Local_86 = { -2252.683f, 4274.16f, 45.0612f };
							Local_92 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_105 = 272.8688f;
							Local_112 = { -2254.588f, 4277.307f, 45.6133f };
							Local_115 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_89 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_104 = 148.0287f;
							Local_92 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_105 = 179.4774f;
							Local_86 = { -2257.088f, 4268.938f, 44.6456f };
							Local_112 = { -2255.775f, 4274.144f, 46.0666f };
							Local_115 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var4 = { -2269.34f, 4279.89f, 45.47f };
					fVar7 = 53.23f;
					fLocal_111 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_86, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_74, Local_92, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_76, fLocal_104);
					ENTITY::SET_ENTITY_COORDS(iLocal_76, Local_89, 1, 0, 0, 1);
				}
				else
				{
					if (!GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iLocal_76), 64.6764f, 90f))
					{
						Local_112 = { -478.7095f, -2163.598f, 10.3091f };
						Local_115 = { -7.4391f, 0.0006f, 35.6865f };
						Local_89 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_104 = 243.308f;
						fLocal_111 = 22f;
					}
					else
					{
						Local_112 = { -488.0143f, -2149.419f, 9.9817f };
						Local_115 = { -11.7475f, 0.0006f, -145.0045f };
						Local_89 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_104 = 64.6764f;
						fLocal_111 = 36.9289f;
					}
					Var4 = { -486.92f, -2169.01f, 8.89f };
					fVar7 = 63.1f;
					ENTITY::SET_ENTITY_COORDS(iLocal_76, Local_89, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_76, fLocal_104);
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				if (GlobalFunc_4947(iLocal_76))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_76);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_75))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_75, iLocal_76, 0))
						{
							PED::DELETE_PED(&iLocal_75);
						}
					}
				}
				Local_309 = { 0f, 0f, 0f };
				Local_312 = { 0f, 0f, 0f };
				uLocal_301 = PED::CREATE_SYNCHRONIZED_SCENE(Local_309, Local_312, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_301, iLocal_76, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_76, sVar3));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_301, Local_309, Local_312, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_74, uLocal_301, sLocal_305, sLocal_307, 1000f, -2f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_301, sLocal_305, sLocal_308, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_78 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", Local_112, Local_115, fLocal_111, 0, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_78, uLocal_301, "car_returned_cam", sLocal_305);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_76, sLocal_306, sLocal_305, 1000f, 0, 0, 0, 0, 262144);
				Local_309 = { ENTITY::GET_ENTITY_COORDS(iLocal_76, 1) };
				Local_312 = { ENTITY::GET_ENTITY_ROTATION(iLocal_76, 2) };
				if (GlobalFunc_4947(iLocal_79))
				{
					if (GlobalFunc_713(iLocal_79, Local_89, 1) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_79, Var4, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_79, fVar7);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_79);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_79, 1, 0);
					}
				}
				MISC::CLEAR_AREA(Local_89, 10f, 1, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				if (iLocal_300 == 2)
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
				}
				FIRE::STOP_FIRE_IN_RANGE(Local_89, 15f);
				CAM::SET_CAM_ACTIVE(uLocal_78, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_50 = 3;
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			
			case 3:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (func_19())
				{
					iLocal_50 = 4;
				}
				if (iLocal_300 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_341)
					{
						if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_50 = 4;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301) && !bLocal_341)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) >= 0.2f)
					{
						if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_120, 4, 0, 0, 0))
						{
							iLocal_61 = 0;
							iLocal_50 = 4;
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
			
			case 4:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_300 == 2)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_61 == 0)
						{
							if (GlobalFunc_10641(&Local_121, cLocal_293, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_61 = 1;
							}
						}
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (iLocal_300 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301))
					{
						if (iLocal_315 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) >= 0.83f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301), 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
								iLocal_315 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_74))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, sLocal_305, sLocal_307, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_74, -1000f, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
									{
										if (GlobalFunc_4947(iLocal_76))
										{
											PED::SET_PED_INTO_VEHICLE(iLocal_74, iLocal_76, -1);
											PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
										}
									}
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_74, 1, 0);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301))
				{
					if (iLocal_315 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) >= 0.86f)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_305, sLocal_308, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301), 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							iLocal_315 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_74))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, sLocal_305, sLocal_307, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_74, -1000f, 0);
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
								{
									if (GlobalFunc_4947(iLocal_76))
									{
										PED::SET_PED_INTO_VEHICLE(iLocal_74, iLocal_76, -1);
										PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
									}
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_74, 1, 0);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_301) >= 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301)) || func_19())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_76) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_76, sLocal_305, sLocal_306, 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_76, sLocal_305, sLocal_306, 1f);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_301))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_301, 1f);
					}
					if (bLocal_341)
					{
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
						Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_305, sLocal_308, Local_309, Local_312, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
					{
						if (GlobalFunc_4947(iLocal_76))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_74, iLocal_76, -1);
							PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_74))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
						{
							if (GlobalFunc_4947(iLocal_76))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_76, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_76, 0, 1, 1, 1);
								iLocal_304 = MISC::GET_GAME_TIMER();
								iLocal_50 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((MISC::GET_GAME_TIMER() - iLocal_304) > 100)
				{
					if (GlobalFunc_115(iLocal_74) && GlobalFunc_4947(iLocal_76))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_76, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_76, 25f, iLocal_298);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
						PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					if (bLocal_341)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_78))
						{
							CAM::SET_CAM_ACTIVE(uLocal_78, 0);
							CAM::DESTROY_CAM(uLocal_78, 0);
						}
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						GlobalFunc_79(500, 1);
					}
					else
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						CAM::SET_CAM_ACTIVE(uLocal_78, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_190(&iLocal_76);
					GlobalFunc_8039(GlobalFunc_8329(), 4, 5);
					return 1;
				}
				else if (GlobalFunc_115(iLocal_74))
				{
					PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
				}
				break;
			}
	}
	return 0;
}















int func_19()//Position - 0x1B56
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_300 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (GlobalFunc_4926(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			CAM::SET_CAM_ACTIVE(uLocal_78, 0);
			CAM::DO_SCREEN_FADE_OUT(500);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
			bLocal_341 = true;
			return 1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			bLocal_341 = true;
			return 1;
		}
	}
	return 0;
}



















void func_38(struct<3> Param0, float fParam3, float fParam4)//Position - 0x21C0
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Param0 };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}














int func_52()//Position - 0x2AF8
{
	if (PED::IS_PED_INJURED(iLocal_75))
	{
		return 1;
	}
	else if (GlobalFunc_4947(iLocal_76))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_75, iLocal_76, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_53()//Position - 0x2B3C
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (GlobalFunc_4947(iLocal_76))
	{
		fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_76);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iLocal_76))
		{
			sLocal_120 = sLocal_292;
		}
		else if (bVar2)
		{
			sLocal_120 = sLocal_291;
		}
		else
		{
			sLocal_120 = sLocal_290;
		}
	}
}


var func_55(int iParam0, bool bParam1, int iParam2)//Position - 0x2BC5
{
	iParam2 = iParam2;
	return GlobalFunc_6829(iParam0, bParam1, 145);
}








void func_63()//Position - 0x2F65
{
	if (!PED::IS_PED_INJURED(iLocal_75))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_75, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_75, 6, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_75, 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_75, 1, 0);
		TASK::TASK_COMBAT_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
	}
	if (GlobalFunc_4947(iLocal_76))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_76, 1);
	}
}

int func_64()//Position - 0x2FD2
{
	if (GlobalFunc_4947(iLocal_76))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_80)
			{
				if (!PED::IS_PED_INJURED(iLocal_75))
				{
					if (!iLocal_297)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_76))
						{
							TASK::TASK_DRIVE_BY(iLocal_75, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_297 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_302 + 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, 20f, 20f, 10f, 0, 1, 0))
						{
							if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0))
							{
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_76);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_76);
					iLocal_80 = 0;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_76, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_75))
				{
					GlobalFunc_10641(&Local_121, cLocal_293, sLocal_288, 4, 0, 0, 0);
				}
				iLocal_81++;
				iLocal_80 = 1;
			}
			if (iLocal_81 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_297 = 0;
			iLocal_80 = 0;
		}
	}
	return 0;
}

int func_65()//Position - 0x30DE
{
	if (GlobalFunc_4947(iLocal_76))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_76, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_76, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_76, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_76, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()//Position - 0x3129
{
	if (GlobalFunc_4947(iLocal_76) && HUD::DOES_BLIP_EXIST(uLocal_63))
	{
		func_67(&uLocal_329, iLocal_76, 0, 0, 1, 1, 1);
	}
}

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3153
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3170
{
	func_69(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x318E
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	GlobalFunc_8921(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}




















int func_89(int iParam0, bool bParam1, int iParam2)//Position - 0x3F34
{
	iParam2 = iParam2;
	return GlobalFunc_7055(iParam0, bParam1, 0);
}


int func_91()//Position - 0x3F5C
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_300 == 1)
	{
		fVar0 = 220f;
	}
	if (GlobalFunc_4947(iLocal_76))
	{
		GlobalFunc_2216(uLocal_63, iLocal_76, fVar0, 1061158912, 0);
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_76))
		{
			return 1;
		}
	}
	return 0;
}


int func_93()//Position - 0x411E
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_76, 0) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_76))
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x4144
{
	if (!PED::IS_PED_INJURED(iLocal_74) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_49)
		{
			case 0:
				iLocal_57 = iLocal_57;
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
				{
					if (iLocal_300 == 1)
					{
						if (func_101())
						{
							iLocal_49 = 1;
						}
					}
					else if (!PED::IS_PED_RAGDOLL(iLocal_74) && !TASK::IS_PED_GETTING_UP(iLocal_74))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(iLocal_74, 345f, 0);
							iLocal_49 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
							TASK::TASK_PLAY_ANIM(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_83, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_83, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
							iLocal_303 = MISC::GET_GAME_TIMER();
							iLocal_49 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_300 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
						TASK::TASK_PLAY_ANIM(0, sLocal_83, sLocal_85, 4f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
						iLocal_49 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
						TASK::TASK_PLAY_ANIM(0, sLocal_83, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_60 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, sLocal_83, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
						iLocal_49 = 2;
					}
				}
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				break;
			
			case 2:
				if (func_101())
				{
					if (func_100())
					{
					}
				}
				if (iLocal_300 == 2)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 60f) && !func_98(iLocal_74, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), 0);
					}
					if (GlobalFunc_2834(iLocal_74, PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (!GlobalFunc_111())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_303) > 6000)
							{
								func_96();
							}
						}
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 242628503) != 1 && !func_98(iLocal_74, -875674219))
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_74, Local_92, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 242628503) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_92, 1f, 20000, fLocal_105, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, sLocal_82, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (GlobalFunc_2834(iLocal_74, PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								func_96();
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, sLocal_82, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_74, sLocal_82, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_74, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 40f, 40f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_95())
					{
						if (iLocal_58)
						{
							if (iLocal_300 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
								iLocal_58 = 0;
								iLocal_303 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_74, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 242628503) == 7)
							{
								if (!PED::IS_PED_FACING_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_303) > 6000)
								{
									iLocal_58 = 1;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 70f))
						{
							TASK::CLEAR_PED_TASKS(iLocal_74);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_77);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_74, uLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
							iLocal_303 += 4000;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_75))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_75, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_75);
					}
				}
				else
				{
					if (iLocal_300 == 1)
					{
						Local_92 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_60)
					{
						Local_92 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_92 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_74, Local_92, 4f, 4f, 4f, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, 2106541073) == 7)
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_74, Local_92, 1f, 20000, fLocal_105, 1056964608);
						}
					}
					else if (!PED::IS_PED_FACING_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 50f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_58 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_150(1))
	{
		if (!PED::IS_PED_INJURED(iLocal_74))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_74, 1);
			SYSTEM::WAIT(0);
		}
		func_220();
	}
}

bool func_95()//Position - 0x47B0
{
	if (!bLocal_295)
	{
		if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_289, 4, 0, 0, 0))
		{
			bLocal_295 = true;
		}
	}
	return bLocal_295;
}

int func_96()//Position - 0x47D9
{
	if (!iLocal_296)
	{
		if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_287, 4, 0, 0, 0))
		{
			iLocal_296 = 1;
		}
	}
	return iLocal_296;
}


int func_98(int iParam0, int iParam1)//Position - 0x485E
{
	if (GlobalFunc_4950(uParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}


int func_100()//Position - 0x48B1
{
	if (!iLocal_294)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (GlobalFunc_10641(&Local_121, cLocal_293, sLocal_286, 4, 0, 0, 0))
			{
				iLocal_294 = 1;
			}
		}
	}
	return iLocal_294;
}

int func_101()//Position - 0x48E4
{
	if (!PED::IS_PED_INJURED(iLocal_75) && !PED::IS_PED_INJURED(iLocal_74))
	{
		if (GlobalFunc_4947(iLocal_76))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_75, iLocal_76))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_103(bool bParam0)//Position - 0x493F
{
	int iVar0;
	
	if (iLocal_300 == 2)
	{
		iVar0 = GlobalFunc_8329();
		switch (iVar0)
		{
			case 0:
				while (!GlobalFunc_7022(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (GlobalFunc_115(iLocal_74))
					{
						PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!GlobalFunc_7022(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (GlobalFunc_115(iLocal_74))
					{
						PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!GlobalFunc_7022(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (GlobalFunc_115(iLocal_74))
					{
						PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		GlobalFunc_4702(8);
	}
	func_107(17, iLocal_300);
	GlobalFunc_7068();
	func_220();
}




void func_107(int iParam0, int iParam1)//Position - 0x4ABD
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_44.x, Local_44.f_1);
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










































int func_149()//Position - 0x6BC1
{
	float fVar0;
	
	switch (iLocal_300)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_60)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iLocal_74))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_74))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_150(int iParam0)//Position - 0x6C77
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_74))
		{
			if (iParam0 == 0 || GlobalFunc_2834(iLocal_74, iLocal_75, 1) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f) };
				Var4 = { Var4 + PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f) };
				if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}


int func_152()//Position - 0x6DC8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	char* sVar11;
	char* sVar12;
	
	Var3 = { Local_98 };
	fVar6 = fLocal_110;
	switch (iLocal_300)
	{
		case 1:
			Local_95 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_109 = 293.9091f;
			Local_98 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_110 = 185.5212f;
			iVar7 = joaat("a_f_y_vinewood_04");
			iVar9 = joaat("peyote");
			iVar8 = joaat("g_m_y_salvagoon_01");
			sVar10 = "CThiefVictim";
			sVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_286 = "RECT1_ATTR";
			sLocal_287 = "RECT1_HELP";
			sLocal_288 = "RECT1_FYOU";
			sLocal_289 = "RECT1_JOY";
			sLocal_290 = "RECT1_OK";
			sLocal_291 = "RECT1_BAD";
			sLocal_292 = "RECT1_GOOD";
			cLocal_293 = "RECT1AU";
			sLocal_82 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_84 = "random@car_thief@waving_ig_1";
			Local_101 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_56 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_95) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_98))
			{
				Var3 = { Local_95 };
				fVar6 = fLocal_109;
				bLocal_60 = true;
				sLocal_83 = "random@car_thief@waving_ig_2";
				sLocal_85 = "waving_l";
			}
			else
			{
				sLocal_85 = "waving";
				sLocal_83 = "random@car_thief@waving_ig_1";
				Var3 = { Local_98 };
				fVar6 = fLocal_110;
			}
			break;
		
		case 2:
			Local_98 = { -538.6718f, -2183.442f, 5.2336f };
			Local_95 = { -365.7f, -2179.26f, 9.3184f };
			iVar7 = joaat("a_f_y_indian_01");
			iVar9 = joaat("rocoto");
			iVar8 = joaat("a_m_m_soucent_04");
			sVar10 = "CThiefGolfer";
			sVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_286 = "RECT2_ATTR";
			sLocal_287 = "RECT2_HELP";
			sLocal_288 = "RECT2_FYOU";
			sLocal_289 = "RECT2_JOY";
			sLocal_290 = "RECT2_OK";
			sLocal_291 = "RECT2_BAD";
			sLocal_292 = "RECT2_GOOD";
			cLocal_293 = "RECT2AU";
			sLocal_82 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_83 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_101 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_55 = 15f;
			fLocal_56 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_95) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_98))
			{
				bLocal_60 = true;
			}
			break;
	}
	STREAMING::REQUEST_MODEL(iVar7);
	STREAMING::REQUEST_MODEL(iVar8);
	STREAMING::REQUEST_MODEL(iVar9);
	STREAMING::REQUEST_ANIM_DICT(sLocal_82);
	STREAMING::REQUEST_ANIM_DICT(sLocal_83);
	STREAMING::REQUEST_ANIM_DICT(sLocal_84);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((STREAMING::HAS_MODEL_LOADED(iVar7) && STREAMING::HAS_MODEL_LOADED(iVar8)) && STREAMING::HAS_MODEL_LOADED(iVar9)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_82)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_83)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_84)) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4")) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_300 == 1)
		{
			func_166("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_95));
			func_166("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_98));
			iLocal_76 = VEHICLE::CREATE_VEHICLE(iVar9, Var3, fVar6, 1, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_76, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_76, 1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_76, 2, 0);
			iLocal_75 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76, 22, iVar8, -1, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_75, 42, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_75, 3, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_75, 10);
			PED::SET_DRIVER_ABILITY(iLocal_75, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_75, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_76, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &iLocal_328);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_328, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_328, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_328);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_75, iLocal_328);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_76, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_51 };
				uLocal_54 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
			}
			iLocal_74 = PED::CREATE_PED(5, iVar7, Local_51, uLocal_54, 1, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_74, sVar11);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 4, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(iLocal_74, 1);
			if (bLocal_60)
			{
				Local_89 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_104 = 124.6557f;
				Local_86 = { -2252.683f, 4274.16f, 45.0612f };
				Local_92 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_105 = 272.8688f;
				Local_112 = { -2258.04f, 4272.244f, 45.75466f };
				Local_115 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_89 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_104 = 336.143f;
				Local_92 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_105 = 179.4774f;
				Local_86 = { -2257.088f, 4268.938f, 44.6456f };
				Local_112 = { -2254.886f, 4273.539f, 46.2282f };
				Local_115 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_60)
			{
				iLocal_76 = VEHICLE::CREATE_VEHICLE(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else
			{
				iLocal_76 = VEHICLE::CREATE_VEHICLE(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_76, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_76, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_76, 1);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_76, 11, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_76, 16, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_76, 12, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_76, 13, 1, 0);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(iLocal_76, 3);
			VEHICLE::SET_VEHICLE_MOD(iLocal_76, 23, 6, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_76, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_76, 18, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_76, 22, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_76, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_76, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_76, 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_76, 0);
			if (bLocal_60)
			{
				iLocal_74 = PED::CREATE_PED(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_74 = PED::CREATE_PED(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_74 = PED::CREATE_PED(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_74, 4, 1, 2, 0);
			iLocal_75 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_76, 22, iVar8, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_75, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_75, 10);
			PED::SET_DRIVER_ABILITY(iLocal_75, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_75, 1f);
			PED::SET_PED_CONFIG_FLAG(iLocal_75, 42, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_75, sVar12);
			Local_89 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_104 = 294.4744f;
			Local_86 = { -501.0442f, -2150.799f, 8.139f };
			Local_92 = { -493.8062f, -2156.036f, 8.1978f };
			Local_112 = { -504.365f, -2144.534f, 9.8585f };
			Local_115 = { -6.6935f, 0f, -127.8147f };
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_74, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_74, 185, 1);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(iLocal_76, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_76, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 1);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_74, iLocal_75, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_76);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_76, 1);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_76, 0, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar9, 1);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_76, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_76, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_74, 17, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_74, 512, 1);
		switch (GlobalFunc_8329())
		{
			case 0:
				sLocal_119 = "MICHAEL";
				break;
			
			case 1:
				sLocal_119 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_119 = "TREVOR";
				break;
		}
		GlobalFunc_1286(&Local_121, 0, PLAYER::PLAYER_PED_ID(), sLocal_119, 0, 1);
		GlobalFunc_1286(&Local_121, 1, iLocal_74, sVar10, 0, 1);
		GlobalFunc_1286(&Local_121, 2, iLocal_75, "CThief", 0, 1);
		return 1;
	}
	else if (func_153())
	{
		func_220();
	}
	return 0;
}

int func_153()//Position - 0x75F4
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
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
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}













void func_166(char* sParam0, float fParam1)//Position - 0x9308
{
	GlobalFunc_4615(sParam0);
	GlobalFunc_2453(fParam1);
}





void func_171()//Position - 0x93CB
{
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_76 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_79)
			{
				iLocal_79 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}






int func_177(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x953D
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
	Local_44 = { Param0 };
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
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
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
		if (GlobalFunc_10550())
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
		if (!GlobalFunc_8988(4))
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
		if (GlobalFunc_42(GlobalFunc_8329()))
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
								if (GlobalFunc_8329() != iVar4)
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










































void func_219()//Position - 0xAB9D
{
	if (SYSTEM::VDIST(Local_51, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_300 = 1;
	}
	else if (SYSTEM::VDIST(Local_51, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_300 = 2;
	}
}

void func_220()//Position - 0xABE8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_75) && !ENTITY::IS_ENTITY_DEAD(iLocal_75))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iLocal_75));
		GlobalFunc_132(&iLocal_75, 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_74) && !ENTITY::IS_ENTITY_DEAD(iLocal_74))
	{
		PED::SET_PED_RESET_FLAG(iLocal_74, 310, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_63))
	{
		HUD::REMOVE_BLIP(&uLocal_63);
	}
	GlobalFunc_589(&uLocal_66);
	if (HUD::DOES_BLIP_EXIST(uLocal_64))
	{
		HUD::REMOVE_BLIP(&uLocal_64);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (GlobalFunc_4947(iLocal_76))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_76, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_300 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	}
	else
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));
	}
	GlobalFunc_190(&iLocal_76);
	if (GlobalFunc_4947(iLocal_79))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_79, 1);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_8523(39, 0);
	GlobalFunc_8523(40, 0);
	GlobalFunc_8523(41, 0);
	GlobalFunc_8523(42, 0);
	GlobalFunc_8523(43, 0);
	GlobalFunc_10823(-1);
	GlobalFunc_4948(&uLocal_329, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}













