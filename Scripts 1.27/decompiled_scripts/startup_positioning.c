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
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<97> Var12;
	struct<97> Var121;
	struct<97> Var230;
	int iVar350;
	var uVar351;
	struct<3> Var352;
	float fVar355;
	char[] cVar356[8];
	struct<3> Var364;
	int iVar367;
	bool bVar368;
	int iVar369;
	struct<3> Var370;
	int iVar373;
	int iVar374;
	bool bVar375;
	bool bVar376;
	struct<3> Var377;
	var uVar380;
	var uVar381;
	int iVar382;
	float fVar383;
	float fVar384;
	int iVar385;
	int iVar386;
	int iVar387;
	bool bVar388;
	int iVar389;
	int iVar390;
	int iVar391;
	int iVar392;
	int iVar393;
	int iVar394;
	
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	bVar4 = MISC::_0xA4A0065E39C9F25C(&Var0, &uVar3, &uVar5, &uVar6);
	if (!GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
	}
	if (((!bVar4 || func_663()) || Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED != 145) && !(MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE()))
	{
		iVar7 = GlobalFunc_8315();
		if (!GlobalFunc_42(iVar7))
		{
			bVar9 = false;
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (!bVar9)
				{
					iVar10 = iVar8;
					if (GlobalFunc_5141(iVar10))
					{
						iVar7 = iVar10;
						bVar9 = true;
					}
				}
				iVar8++;
			}
			if (iVar7 != GlobalFunc_8315())
			{
				iVar11 = GlobalFunc_237(iVar7);
				while (!func_654(iVar11, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		func_652();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_42(GlobalFunc_8315()))
		{
			GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
			GlobalFunc_7693(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
			func_637(PLAYER::PLAYER_PED_ID());
			PED::_0xE861D0B05C7662B8(PLAYER::PLAYER_PED_ID(), 0, 0);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
			}
		}
		Var12.f_1 = -1;
		Var12.f_17 = 4;
		Var12.f_17.f_8 = 4;
		Var12.f_17.f_13 = 4;
		Var12.f_17.f_18 = 4;
		Var12.f_17.f_24 = 4;
		Var12.f_17.f_29 = 4;
		Var12.f_17.f_34 = 4;
		Var12.f_62 = 8;
		Var12.f_96.f_7 = 21;
		Var12.f_96.f_8 = 6;
		Var12 = 0;
		Var12.f_2 = 318;
		Var12.f_3 = GlobalFunc_8315();
		Var121.f_1 = -1;
		Var121.f_17 = 4;
		Var121.f_17.f_8 = 4;
		Var121.f_17.f_13 = 4;
		Var121.f_17.f_18 = 4;
		Var121.f_17.f_24 = 4;
		Var121.f_17.f_29 = 4;
		Var121.f_17.f_34 = 4;
		Var121.f_62 = 8;
		Var121.f_96.f_7 = 21;
		Var121.f_96.f_8 = 6;
		Var230.f_1 = -1;
		Var230.f_17 = 4;
		Var230.f_17.f_8 = 4;
		Var230.f_17.f_13 = 4;
		Var230.f_17.f_18 = 4;
		Var230.f_17.f_24 = 4;
		Var230.f_17.f_29 = 4;
		Var230.f_17.f_34 = 4;
		Var230.f_62 = 8;
		Var230.f_96.f_7 = 21;
		Var230.f_96.f_8 = 6;
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED != 145)
		{
			Var12.f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED;
			Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
		}
		Global_24747 = 0;
		iVar350 = MISC::GET_GAME_TIMER() + 5000;
		while ((Global_24745 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("blip_controller")) < 1) && iVar350 > MISC::GET_GAME_TIMER())
		{
			SYSTEM::WAIT(0);
		}
		switch (Var12.f_3)
		{
			case 0:
				func_624(&(Var12.f_2), &uVar351, &Var121, &Var230, 1);
				break;
			
			case 1:
				func_614(&(Var12.f_2), &uVar351, &Var121, &Var230, 1);
				break;
			
			case 2:
				func_564(&(Var12.f_2), &uVar351, &Var121, &Var230, 1);
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_558(Var12.f_2, &Var352, &fVar355, &cVar356))
			{
				Var364 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var352, fVar355, 0f, 0f, 5f) };
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var364, 1, 0, 0, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var352, 2000f, 1);
				iVar367 = MISC::GET_GAME_TIMER();
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar367 + 15000)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		func_556();
		if (Global_2)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			GlobalFunc_749(0);
			GlobalFunc_7981(0, 1);
			GlobalFunc_748(0);
		}
		else
		{
			bVar368 = false;
			while (!func_83(&Var12, 64))
			{
				if (!bVar368)
				{
					if (Var121 > 0)
					{
						SCRIPT::SHUTDOWN_LOADING_SCREEN();
						bVar368 = true;
					}
				}
				if (!bVar368)
				{
					if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
					{
						SCRIPT::SHUTDOWN_LOADING_SCREEN();
						bVar368 = true;
					}
				}
				SYSTEM::WAIT(0);
			}
			if (!bVar368)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				SCRIPT::SHUTDOWN_LOADING_SCREEN();
				bVar368 = true;
			}
		}
	}
	else if (MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE())
	{
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
	}
	else if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut && GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
	{
	}
	else
	{
		iVar374 = -1;
		bVar375 = false;
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
		if (!Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut)
		{
			bVar375 = true;
		}
		if (!GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
		{
			bVar375 = true;
		}
		if (!bVar375)
		{
		}
		if (!GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
		{
			if (GlobalFunc_6794(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x)))
			{
				GlobalFunc_7697(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x));
			}
		}
		bVar376 = false;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				MISC::CLEAR_AREA(Var0, 15f, 1, 0, 0, 0);
				if (GlobalFunc_2941(Var0, &Var377, &uVar380, &uVar381))
				{
					Var0 = { Var377 };
					uVar3 = uVar380;
				}
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Var0 + Vector(5f, 0f, 0f), 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_2769();
				while (!GlobalFunc_2768())
				{
					SYSTEM::WAIT(0);
				}
				iVar382 = 0;
				while (iVar382 < 68)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iVar382]) && !ENTITY::IS_ENTITY_DEAD(Global_67138.f_139[iVar382])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iVar382], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							fVar383 = SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(Global_67138.f_139[iVar382], 1));
							fVar384 = 2.5f;
							if (ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iVar382]) == joaat("miljet"))
							{
								fVar384 = 10f;
							}
							if (fVar383 < (fVar384 * fVar384))
							{
								ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_139[iVar382], -1);
								bVar376 = true;
								iVar382 = 69;
							}
						}
					}
					iVar382++;
				}
				if (!bVar376)
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bVar376)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Var0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
					}
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::RESET_PED_AUDIO_FLAGS(PLAYER::PLAYER_PED_ID());
				}
				GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
			}
		}
		if (Global_SAVE_DATA.RP_PLAYER.eRCMissionToBlock != -1)
		{
			Global_96440[Global_SAVE_DATA.RP_PLAYER.eRCMissionToBlock /*10*/].f_3 = 1;
		}
		SYSTEM::WAIT(0);
		MISC::SET_GAME_PAUSED(1);
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var0, 2000f, 1);
		iVar385 = MISC::GET_GAME_TIMER();
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar385 + 15000)
		{
			SYSTEM::WAIT(0);
		}
		MISC::CLEAR_AREA(Var0, 15f, 1, 0, 0, 0);
		MISC::SET_GAME_PAUSED(0);
		SYSTEM::WAIT(1000);
		iVar386 = -1;
		if (Global_SAVE_DATA.RP_PLAYER.Mission != -1)
		{
			iVar387 = Global_SAVE_DATA.RP_PLAYER.Mission;
			if (func_74(Global_81155[iVar387 /*34*/].f_11, GlobalFunc_8315()))
			{
				iVar386 = Global_SAVE_DATA.RP_PLAYER.Mission;
			}
		}
		if (!bVar376 && iVar386 == -1)
		{
			if (!func_73(Var0, uVar3, 0, 1))
			{
				if (func_71(&Var0, &uVar3, 0, 0, 1))
				{
					if (SYSTEM::VDIST2(Var0, -1155.25f, -1519.25f, 3.34375f) < 1f)
					{
						Var0 = { Var0 + Vector(1f, 0f, 0f) };
					}
					else
					{
						Var0 = { Var0 + Vector(5f, 0f, 0f) };
					}
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Var0, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					SYSTEM::WAIT(1000);
				}
			}
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::SET_GAME_PAUSED(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_42(GlobalFunc_8315()))
		{
			GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 1);
			GlobalFunc_7693(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
			func_637(PLAYER::PLAYER_PED_ID());
			PED::_0xE861D0B05C7662B8(PLAYER::PLAYER_PED_ID(), 0, 0);
			Global_87653 = 1;
		}
		if (!GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
		{
			bVar388 = false;
			if (bVar376 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar389 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar389) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar389, 0)) && ENTITY::GET_ENTITY_MODEL(iVar389) == Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_42)
				{
					bVar388 = true;
					if (Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_bTrackedForImpound && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796)
					{
						Global_68043 = iVar389;
					}
				}
			}
			if (!bVar388)
			{
				if (Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.f_12.f_42 == joaat("jet"))
				{
					iVar390 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if ((iVar390 == 0 || iVar390 == 2) && OBJECT::IS_POINT_IN_ANGLED_AREA(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x, -1690.65f, -3130.951f, 12.95889f, -1625.34f, -3169.573f, 29.69495f, 75f, 0, 1))
					{
						bVar388 = true;
					}
				}
			}
			if (!bVar388)
			{
				if (func_12(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x), &iVar369, 1, 1, 1, 1, 1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar369))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar369, 1);
						Var370 = { Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Velocity_x };
						if (Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Vehicle_bTrackedForImpound && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796)
						{
							Global_68043 = iVar369;
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					iVar374 = Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_Parachute;
					if ((iVar374 == 0 || iVar374 == 2) || iVar374 == 1)
					{
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_PARACHUTE(PLAYER::PLAYER_PED_ID(), 1, 0);
						}
					}
				}
			}
			iVar373 = Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_Wanted;
			func_8();
		}
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		MISC::SET_GAME_PAUSED(0);
		PED::INSTANTLY_FILL_PED_POPULATION();
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		MISC::POPULATE_NOW();
		iVar391 = MISC::GET_GAME_TIMER() + 1500;
		while (!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && iVar391 > MISC::GET_GAME_TIMER())
		{
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3.5f, 1, 0, 0, 0);
		}
		if (iVar374 == 2 || iVar374 == 1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::FORCE_PED_TO_OPEN_PARACHUTE(PLAYER::PLAYER_PED_ID());
			}
		}
		GlobalFunc_5848();
		if (iVar386 != -1)
		{
			while (!Global_131420)
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_6549(iVar386);
			while (Global_87290 != -1)
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::WAIT(0);
			while (Global_87294)
			{
				SYSTEM::WAIT(0);
			}
			Global_24747 = 0;
			iVar392 = MISC::GET_GAME_TIMER() + 5000;
			while ((Global_24745 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("blip_controller")) < 1) && iVar392 > MISC::GET_GAME_TIMER())
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_507(iVar386, 0);
		}
		else
		{
			Global_24747 = 0;
			iVar393 = MISC::GET_GAME_TIMER() + 5000;
			while ((Global_24745 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("blip_controller")) < 1) && iVar393 > MISC::GET_GAME_TIMER())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_1554(PLAYER::PLAYER_PED_ID()))
			{
				iVar394 = MISC::GET_GAME_TIMER() + 5000;
				while (!GlobalFunc_747(Global_96378, 32) && MISC::GET_GAME_TIMER() < iVar394)
				{
					SYSTEM::WAIT(0);
				}
				if (MISC::GET_GAME_TIMER() < iVar394)
				{
				}
			}
		}
		if (iVar373 > 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar373, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar369))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar369, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar369, 0))
			{
				ENTITY::SET_ENTITY_VELOCITY(iVar369, Var370);
			}
			if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar369)) || VEHICLE::IS_THIS_MODEL_A_JETSKI(ENTITY::GET_ENTITY_MODEL(iVar369)))
			{
				PHYSICS::ACTIVATE_PHYSICS(iVar369);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar369);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		if (iVar386 != -1)
		{
			SYSTEM::WAIT(1000);
		}
		func_556();
		if (Global_2)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			GlobalFunc_749(0);
			GlobalFunc_7981(0, 1);
			GlobalFunc_748(0);
		}
		else
		{
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(2500);
				}
			}
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
	if (!Global_131421)
	{
		if (GlobalFunc_268())
		{
			Global_131421 = 1;
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}








void func_8()//Position - 0xEE1
{
	GlobalFunc_15(&(Global_SAVE_DATA.RP_PLAYER_x));
	GlobalFunc_4910(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x));
	Global_SAVE_DATA.RP_PLAYER.Mission = -1;
	Global_SAVE_DATA.RP_PLAYER.eRCMissionToBlock = -1;
}




int func_12(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x1012
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
					if (!func_64(*uParam0, iVar17))
					{
						if (!func_56(uParam0, iVar17))
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
				*uParam1 = func_13(uParam0, 0f, 0f, 0f, 0f, bParam6);
				if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (iParam3 == 1 && uParam0->f_8 == 1)
								{
									iVar0 = 1;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 3f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam1))
								{
									iVar0 = 1;
								}
								if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("startup_positioning"))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam1, 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
									{
										iVar0 = 0;
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam1, 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
									{
										iVar0 = 0;
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam1, 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
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
									PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, -1);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(uParam0->f_12.f_42))
									{
										VEHICLE::SET_HELI_BLADES_FULL_SPEED(*uParam1);
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

int func_13(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1371
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (GlobalFunc_6794(uParam0))
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (GlobalFunc_7696(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			GlobalFunc_8365(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				GlobalFunc_6952(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					GlobalFunc_531(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8366(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_536(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						GlobalFunc_7695(iVar8);
					}
				}
				if (((Global_89962 != 13 && Global_89962 != 10) && Global_89962 != 11) && Global_89962 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_89962.f_3)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							GlobalFunc_4927(24, 0);
							GlobalFunc_7695(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8317(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}











































int func_56(var uParam0, int iParam1)//Position - 0x4D79
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
			if (func_57(Var3, uVar2, *uParam0, iParam1))
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

int func_57(struct<3> Param0, var uParam3, struct<13> Param4, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, int iParam70)//Position - 0x4E58
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







int func_64(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, int iParam66)//Position - 0x510D
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







int func_71(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5777
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = 1;
	if (iParam2 == 0)
	{
		iParam2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((*uParam0 - 150f), (uParam0->f_1 - 150f), (*uParam0 + 150f), (uParam0->f_1 + 150f));
	iVar6 = MISC::GET_GAME_TIMER();
	while (!PATHFIND::ARE_NODES_LOADED_FOR_AREA((*uParam0 - 150f), (uParam0->f_1 - 150f), (*uParam0 + 150f), (uParam0->f_1 + 150f)) && (MISC::GET_GAME_TIMER() - iVar6) < 5000)
	{
		SYSTEM::WAIT(0);
	}
	while (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var3, &uVar2, &uVar1, 1, 1077936128, 0))
	{
		if (SYSTEM::VDIST2(*uParam0, Var3) <= 22500f)
		{
			if ((!(iParam3 && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var3))) && !func_72(*uParam0)) && func_73(Var3, uVar2, iParam2, bParam4))
			{
				*uParam0 = { Var3 };
				*uParam1 = uVar2;
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

int func_72(struct<3> Param0)//Position - 0x5895
{
	if ((((((((((((GlobalFunc_537(Param0, 24.2857f, -663.82f, 31.6286f, 1f) || GlobalFunc_537(Param0, -73.2402f, -682.619f, 32.6686f, 1f)) || GlobalFunc_537(Param0, 20.6539f, -673.9974f, 31.3274f, 1f)) || GlobalFunc_537(Param0, 17.0277f, -679.2629f, 31.3381f, 1f)) || GlobalFunc_537(Param0, 13.0123f, -681.9813f, 31.3381f, 1f)) || GlobalFunc_537(Param0, 9.33f, -683.0215f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -3.0009f, -684.3066f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -15.2584f, -685.263f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -27.7868f, -686.3926f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -40.3021f, -687.285f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -44.0514f, -687.7671f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -49.712f, -688.2113f, 31.3381f, 1f)) || GlobalFunc_537(Param0, -57.6906f, -686.7383f, 31.3381f, 1f))
	{
		return 1;
	}
	return 0;
}

int func_73(struct<3> Param0, var uParam3, int iParam4, bool bParam5)//Position - 0x5A25
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	var uVar15;
	var uVar16;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam4 == 0)
		{
			iParam4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = 18;
		if (!bParam5)
		{
			iVar0 = 0;
			iVar1 = 22;
		}
		iVar2 = -1;
		MISC::GET_MODEL_DIMENSIONS(iParam4, &Var3, &Var6);
		uVar15 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var6 - Var3, 0f, 0f, uParam3, 2, iVar1, iVar0, 4);
		while (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar15, &iVar2, &uVar9, &uVar12, &uVar16) == 1)
		{
			SYSTEM::WAIT(0);
		}
		if (iVar2 != 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x5AB3
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return MISC::IS_BIT_SET(iParam0, iParam1);
		
		default:
	}
	return 0;
}









bool func_83(var uParam0, int iParam1)//Position - 0x6C65
{
	return func_84(uParam0, 457276/*func_547*/, 457105/*func_546*/, iParam1);
}

int func_84(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x6C7D
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	var uVar135;
	char* sVar136;
	char[] cVar152[8];
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	int iVar195;
	struct<65> Var196;
	bool bVar261;
	int iVar262;
	bool bVar263;
	bool bVar264;
	int iVar265;
	float fVar266;
	float fVar267;
	bool bVar268;
	bool bVar269;
	struct<6> Var270;
	bool bVar276;
	char cVar277[64];
	char* sVar293;
	char cVar309[64];
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	bool bVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_35464 - 1000))
	{
		GlobalFunc_3061(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var121 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar124 = GlobalFunc_7733(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_68507 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_81155[Global_68507 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (GlobalFunc_8648() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		Global_89750 = 0;
		uParam0->f_61 = GlobalFunc_237(uParam0->f_3);
		if (func_558(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			GlobalFunc_7632(1);
			if (GlobalFunc_10760(uParam0, &Var125, &uVar128))
			{
				uParam0->f_4 = { Var125 };
				uParam0->f_7 = uVar128;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { Var125 };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = uVar128;
				if (Global_89726[uParam0->f_3] == 2)
				{
					Global_89734[uParam0->f_3 /*3*/] = { Var125 };
					Global_89744[uParam0->f_3] = uVar128;
				}
			}
			Global_88209 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				GlobalFunc_7934(21, 0);
			}
			GlobalFunc_7225(uParam0->f_2);
			if (func_519(uParam0->f_2, &Var129, &Var132, &uVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, uVar135);
					PED::SET_PED_NON_CREATION_AREA(Var129 - Var121, Var129 + Var121);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var129 - Var121, Var129 + Var121, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Var129, SYSTEM::VMAG(Var121), 1, 0, 0, 0);
				}
			}
			Global_89750++;
			if (GlobalFunc_2937(uParam0->f_2, &sVar184))
			{
				Global_89750++;
			}
			Global_89502 = uParam0->f_2;
			iVar192 = GlobalFunc_8315();
			if (iVar192 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar192]))
				{
					fVar193 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192]);
					fVar194 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192]);
					if (fVar193 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
					if (fVar194 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
				}
				GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar192 /*74*/]), &(Global_89734[iVar192 /*3*/]), &(Global_89744[iVar192]), &(Global_89726[iVar192]), &(Global_2544853[iVar192]));
				func_511(PLAYER::PLAYER_PED_ID(), 0);
				func_504(PLAYER::PLAYER_PED_ID());
			}
			func_501(uParam0->f_3, uParam0->f_2);
			iLocal_63 = 0;
			Global_24491 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_63++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_63 > 150)
				{
					iLocal_63 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar195 = GlobalFunc_584(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar195]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar195], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar195]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (GlobalFunc_10759(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_247(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) != 3)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] = { Var196 };
					}
				}
				GlobalFunc_5169(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], 1);
				GlobalFunc_2932(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_89751 = -1;
				GlobalFunc_5935(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar262 = MISC::GET_GAME_TIMER();
						while (iVar262 + 500 < MISC::GET_GAME_TIMER() && iVar262 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar262 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, 1, 1);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!GlobalFunc_537(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1), 5f) && !GlobalFunc_537(uParam0->f_4, 0f, 0f, 0f, 5f))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_89751 = -1;
			GlobalFunc_5935(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar263 = false;
		bVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		bVar268 = false;
		bVar269 = false;
		GlobalFunc_9260(uParam0, &bVar263, &bVar264, &iVar265, &fVar266, &fVar267, &bVar268, &bVar269, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (GlobalFunc_2938(uParam0->f_2, &Var270))
			{
				MemCopy(&(uParam0->f_8), {Var270}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar268)
			{
				bVar268 = true;
			}
		}
		bVar276 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_238(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
			{
				bVar276 = true;
			}
		}
		else
		{
			MemCopy(&cVar277, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar277))
			{
				GlobalFunc_2940(uParam0->f_2, &sVar293, &cVar309);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar309))
				{
					StringConCat(&cVar277, &cVar309, 64);
				}
			}
			if (func_232(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
			{
				bVar276 = true;
			}
		}
		if (bVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar325 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar325 == 8 || iVar325 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar325 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_89750 > 0)
						{
							if (Global_89751 < 0)
							{
								Global_89751 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (GlobalFunc_2937(uParam0->f_2, &sVar329))
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_89751 + iVar328))
								{
									Global_89750 = (Global_89750 - 1);
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_89751 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_207(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar325 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar325 >= iVar327)
						{
							bVar337 = false;
							if (func_145(&(uParam0->f_17), bVar263, bVar264, 0))
							{
								bVar337 = true;
							}
							if (bVar337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 1);
								}
								GlobalFunc_2928(&(uParam0->f_17));
								func_207(uParam0);
								GlobalFunc_9259();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_87845 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_87678)
			{
				if (uParam0->f_62.f_19)
				{
					if (GlobalFunc_5934(uParam0))
					{
						Global_87678 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, 0);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar338]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				GlobalFunc_7632(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_35923)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::_0x487A82C650EB7799(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			GlobalFunc_749(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_13, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 0);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(uParam0->f_3));
		iVar339 = GlobalFunc_8315();
		if (iVar339 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar339]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89730[iVar339], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_89730[iVar339]));
				}
			}
			iVar340 = Global_89503[iVar339 /*74*/];
			if (iVar340 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar340);
			}
		}
		GlobalFunc_9271(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_3] = uParam0->f_2;
			GlobalFunc_5933(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		}
		GlobalFunc_5932(uParam0->f_3);
		GlobalFunc_8629(uParam0, &Var1);
		GlobalFunc_8628(uParam0);
		GlobalFunc_7222(uParam0->f_2);
		GlobalFunc_17(&Global_1312465);
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[uParam0->f_3] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_87678 = 0;
		Global_89751 = -1;
		GlobalFunc_54(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			GlobalFunc_7632(0);
		}
		return 1;
	}
	return 0;
}





























































int func_145(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x14B7D
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
			GlobalFunc_9270(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9270((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_10882(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
			GlobalFunc_8382();
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






























































int func_207(var uParam0)//Position - 0x1C1BE
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_231(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_231(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9272(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_231(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9272(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (GlobalFunc_6710(Global_1312465))
	{
		iVar6 = GlobalFunc_208(Global_1312465);
		iVar7 = GlobalFunc_207(Global_1312465);
		sVar8 = "";
		sVar9 = "";
		if (!GlobalFunc_2929())
		{
			sVar8 = "SMOG";
		}
		if (func_208(&fVar1, 5f))
		{
			return GlobalFunc_9272(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_208(float fParam0, float fParam1)//Position - 0x1C3ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_62 == -1)
	{
		iLocal_62 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_62);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}























int func_231(var uParam0, float fParam1)//Position - 0x1CF6A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_56 };
	Var3 = { Local_59 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_56 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_56 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_59 };
	}
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 0);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 0);
	*fParam1 = (fVar10 / fVar9);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_232(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x1D013
{
	return func_233(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_233(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x1D03A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(uParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_7981(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}





int func_238(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x1D756
{
	return func_233(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}









int func_247(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1DF01
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
			GlobalFunc_8645(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			func_637(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_249(*uParam0, bParam8);
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


int func_249(int iParam0, bool bParam1)//Position - 0x1E019
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_339(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_339(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_11270(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11270(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11270(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11270(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11270(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11270(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11270(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11270(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


























































































void func_339(int iParam0, int iParam1)//Position - 0x37E18
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
					func_341(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_341(int iParam0, var uParam1, bool bParam2)//Position - 0x38093
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
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
			if (GlobalFunc_11085(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11270(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11084(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11270(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
































































































































































int func_501(int iParam0, int iParam1)//Position - 0x65E54
{
	var uVar0;
	var uVar3;
	int iVar4;
	
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
	{
		return 0;
	}
	if (GlobalFunc_506(iParam1, &uVar0, &uVar3))
	{
		return 0;
	}
	iVar4 = GlobalFunc_8630(iParam0);
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iVar4] = 0;
	return 1;
}



void func_504(int iParam0)//Position - 0x66134
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		GlobalFunc_2936(iParam0, iVar0);
		func_505(iParam0, iVar0);
	}
}

void func_505(int iParam0, int iParam1)//Position - 0x66169
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	Global_87757[iParam1 /*29*/].f_15 = 0;
	if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (GlobalFunc_2935(iVar1))
		{
			if ((GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/]), &(Global_87757[iParam1 /*29*/].f_9)) && GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/].f_3), &(Global_87757[iParam1 /*29*/].f_10))) && GlobalFunc_2934(iParam0, &(Global_87757[iParam1 /*29*/].f_6), &(Global_87757[iParam1 /*29*/].f_11)))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iParam0))
				{
					if (fVar0 < 40f)
					{
						fVar0 = 40f;
					}
				}
				else if (fVar0 > 20f)
				{
					fVar0 = 20f;
				}
				else if (fVar0 < 10f)
				{
					fVar0 = 10f;
				}
				Global_87757[iParam1 /*29*/].f_12 = fVar0;
				Global_87757[iParam1 /*29*/].f_13 = fVar0;
				Global_87757[iParam1 /*29*/].f_14 = fVar0;
				if (!GlobalFunc_537(Global_87757[iParam1 /*29*/].f_17, 0f, 0f, 0f, 1.5f))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { Global_87757[iParam1 /*29*/] };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = Global_87757[iParam1 /*29*/].f_9;
				}
				return;
			}
			Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_12 = 0f;
			Global_87757[iParam1 /*29*/].f_13 = 0f;
			Global_87757[iParam1 /*29*/].f_14 = 0f;
			return;
		}
		else
		{
			Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
			Global_87757[iParam1 /*29*/].f_12 = 0f;
			Global_87757[iParam1 /*29*/].f_13 = 0f;
			Global_87757[iParam1 /*29*/].f_14 = 0f;
			return;
		}
	}
	if (PED::IS_PED_IN_ANY_BOAT(iParam0) || PED::IS_PED_IN_ANY_SUB(iParam0))
	{
		Global_87757[iParam1 /*29*/] = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_3 = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_6 = { 0f, 0f, 0f };
		Global_87757[iParam1 /*29*/].f_12 = 0f;
		Global_87757[iParam1 /*29*/].f_13 = 0f;
		Global_87757[iParam1 /*29*/].f_14 = 0f;
		return;
	}
	if (fVar0 > 20f)
	{
		fVar0 = 20f;
	}
	else if (fVar0 < 10f)
	{
		fVar0 = 10f;
	}
	if (func_506(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), 50f, 12, &(Global_87757[iParam1 /*29*/]), &(Global_87757[iParam1 /*29*/].f_9)))
	{
		Global_87757[iParam1 /*29*/].f_12 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_12 = 0f;
	}
	if (func_506(Global_87757[iParam1 /*29*/], Global_87757[iParam1 /*29*/].f_9, (150f - 50f), 12, &(Global_87757[iParam1 /*29*/].f_3), &(Global_87757[iParam1 /*29*/].f_10)))
	{
		Global_87757[iParam1 /*29*/].f_13 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_13 = 0f;
	}
	if (func_506(Global_87757[iParam1 /*29*/].f_3, Global_87757[iParam1 /*29*/].f_10, (500f - 150f), 12, &(Global_87757[iParam1 /*29*/].f_6), &(Global_87757[iParam1 /*29*/].f_11)))
	{
		Global_87757[iParam1 /*29*/].f_14 = fVar0;
	}
	else
	{
		Global_87757[iParam1 /*29*/].f_14 = 0f;
	}
	Global_87757[iParam1 /*29*/].f_15 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) > 0f && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2))
		{
			Global_87757[iParam1 /*29*/].f_15 = 1;
		}
	}
	iVar3 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (((((((iVar3 == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 361.761f, -593.973f, 27.415f, 301.502f, -570.014f, 73.12f, 26.5f, 0, 1, 0)) || (iVar3 == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 331.066f, -601.842f, 56.725f, 285.118f, -584.95f, 41.253f, 26.5f, 0, 1, 0))) || iVar3 == -1020543821) || iVar3 == -1328015348) || iVar3 == -1019167519) || iVar3 == -1324541830) || iVar3 == -1791307508)
	{
		Global_87757[iParam1 /*29*/].f_15 = 1;
	}
}

int func_506(struct<3> Param0, float fParam3, float fParam4, int iParam5, var uParam6, var uParam7)//Position - 0x665EA
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	float fVar5;
	struct<3> Var6;
	
	if (GlobalFunc_537(Param0, 0f, 0f, 0f, 1.5f))
	{
		*uParam6 = { 0f, 0f, 0f };
		*uParam7 = 0f;
		return 0;
	}
	fVar5 = (MISC::GET_RANDOM_FLOAT_IN_RANGE((-fParam4 / 2f), (fParam4 / 2f)) * 0.5f);
	Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, fVar5, fParam4, 0f) };
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var6, 1, &Var1, &uVar4, &iVar0, iParam5, 1077936128, 0))
	{
		*uParam6 = { Var1 };
		*uParam7 = uVar4;
		*uParam6 = { func_507(*uParam6, *uParam7, iVar0) };
		return 1;
	}
	*uParam6 = { Param0 };
	*uParam7 = fParam3;
	return 0;
}

Vector3 func_507(struct<3> Param0, float fParam3, int iParam4)//Position - 0x66686
{
	float fVar0;
	
	if (iParam4 <= 1)
	{
		fVar0 = 0f;
	}
	else
	{
		fVar0 = 2.8f;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, fVar0, 0f, 0f);
}




void func_511(int iParam0, int iParam1)//Position - 0x66AEA
{
	int iVar0;
	struct<3> Var1;
	
	GlobalFunc_9270(iParam0, 0);
	func_339(iParam0, 0);
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], iParam1, &Var1, 16))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			}
		}
	}
}








int func_519(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x68F62
{
	struct<3> Var0;
	float fVar3;
	char[] cVar4[8];
	struct<3> Var12;
	float fVar15;
	char[] cVar16[8];
	
	*uParam3 = 40f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 1:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 2:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 3:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 4:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 6:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 7:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 11:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 9:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 10:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 13:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 14:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 15:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 12:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 16:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 17:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 18:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 19:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 20:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 22:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 74:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 23:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 24:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 67:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 25:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 26:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 27:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 28:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 58:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 59:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 60:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 38:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 40:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1393.829f, 3721.21f, 59.6646f };
			*uParam2 = { -77.4667f, -3.4089f, -29.2756f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 43:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 44:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 124:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 66:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 61:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 62:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 63:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 69:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 64:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 65:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 75:
			*uParam1 = { 1421.37f, -1909.6f, 70f };
			*uParam2 = { -89.49953f, -1E-06f, 166.0406f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 76:
			*uParam1 = { Vector(148.1897f, -2306.583f, 1375.146f) + Vector(-42.5f, 0f, 0f) };
			*uParam2 = { -78.9021f, 0f, 25.2484f };
			return 1;
			break;
		
		case 77:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 78:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = { -806.1221f, 173.3714f, 73.0859f };
			*uParam2 = { -1.4712f, 0f, -95.2503f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 80:
			*uParam1 = { -777.6068f, 187.453f, 74.1732f };
			*uParam2 = { -10.8798f, 0f, -156.0149f };
			return 1;
			break;
		
		case 81:
			*uParam1 = { -1313.857f, 117.7842f, 83.0089f };
			*uParam2 = { -81.4288f, -0.0005f, -4.4763f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 82:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 83:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 84:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 85:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { -779.5107f, 184.6536f, 97.9522f };
			*uParam2 = { -83.1792f, -0.0008f, 33.1776f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 88:
			*uParam1 = { -1350.398f, 355.7088f, 89.1898f };
			*uParam2 = { -83.1793f, -0.0008f, 94.8576f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 184:
			*uParam1 = { -11.4584f, 509.3831f, 199.7681f };
			*uParam2 = { -83.1793f, -0.0008f, 10.655f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 185:
			*uParam1 = { 21.0263f, 518.8938f, 195.3684f };
			*uParam2 = { -83.1792f, -0.0008f, 10.6496f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 186:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 187:
			*uParam1 = { 25.1207f, 538.1634f, 176.3949f };
			*uParam2 = { -9.1084f, 0f, 136.7439f };
			*uParam3 = 60f;
			return 1;
			break;
		
		case 188:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		
		case 189:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 190:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		
		case 191:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 94:
			*uParam1 = { -115.9504f, 359.3368f, 138.8368f };
			*uParam2 = { -84.145f, -0.0028f, 30.813f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 95:
			*uParam1 = { 388.4338f, 181.3034f, 128.5381f };
			*uParam2 = { -82.1573f, 0.0028f, -133.5252f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 96:
			*uParam1 = { -1368.703f, 50.4611f, 55.6791f };
			*uParam2 = { -25.2992f, 0f, 39.0928f };
			return 1;
			break;
		
		case 97:
			*uParam1 = { -1412.473f, -197.0279f, 73.1327f };
			*uParam2 = { -85.8754f, 0.0301f, 103.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 89:
			*uParam1 = { -828.6376f, 153.5095f, 94.4233f };
			*uParam2 = { -82.4779f, -87.738f, -38.5885f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 90:
			*uParam1 = { -886.2003f, 130.811f, 84.4115f };
			*uParam2 = { -82.1702f, -15.3164f, 27.7905f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 91:
			*uParam1 = { -1208.417f, -952.6558f, 28.0064f };
			*uParam2 = { -81.4289f, -0.0005f, 145.6032f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 92:
			*uParam1 = { -848.757f, 852.361f, 228.9125f };
			*uParam2 = { -81.4289f, -0.0005f, -13.8233f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 93:
			*uParam1 = { -1267.417f, -707.9901f, 48.813f };
			*uParam2 = { -81.4294f, -0.001f, 157.5229f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 108:
			*uParam1 = { 252.454f, 1118.039f, 245.2481f };
			*uParam2 = { -77.0357f, 0.0002f, -101.5461f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 109:
			*uParam1 = { -1817.594f, -685.8846f, 35.5217f };
			*uParam2 = { -77.0356f, 0.0002f, 3.4539f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 112:
			*uParam1 = { 815.9318f, 1275.719f, 387.0281f };
			*uParam2 = { -76.9465f, 0.0003f, 175.4883f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 113:
			*uParam1 = { -1664.928f, 493.0317f, 155.4287f };
			*uParam2 = { -76.9465f, 0.0003f, 149.7993f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 661.924f, 3503.337f, 60.5464f };
			*uParam2 = { -76.9465f, -0.0009f, -81.4523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 2409.799f, 4293.222f, 61.6806f };
			*uParam2 = { -76.568f, -3.7101f, 56.4411f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 137:
			*uParam1 = { 100.7403f, 3369.28f, 61.103f };
			*uParam2 = { -77.9654f, 2.7972f, -172.4415f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 138:
			*uParam1 = { 2441.216f, 3795.687f, 66.4953f };
			*uParam2 = { -75.6905f, -1.8311f, -34.0872f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 139:
			*uParam1 = { 1779.841f, 4588.321f, 64.2296f };
			*uParam2 = { -77.2461f, -2.1153f, 134.3354f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 140:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 141:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 142:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 143:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 144:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 145:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 146:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 147:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 148:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 149:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 150:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 118:
			*uParam1 = { -1064.281f, -1530.444f, 4.9643f };
			*uParam2 = { -6.3151f, 0f, -11.6771f };
			return 1;
			break;
		
		case 119:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 120:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 114:
			*uParam1 = { 70.2718f, -1555.779f, 54.57f };
			*uParam2 = { -79.8378f, 0.0014f, 146.7438f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 98:
			*uParam1 = { -611.2242f, -215.1656f, 69.3734f };
			*uParam2 = { -82.5325f, -23.1336f, 38.4436f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 99:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 100:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 101:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 102:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 103:
			*uParam1 = { -1733.709f, -1127.285f, 39.0047f };
			*uParam2 = { -83.9991f, 0.0016f, -37.0248f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 104:
			*uParam1 = { -1926.921f, -575.551f, 37.5216f };
			*uParam2 = { -81.4289f, -0.0005f, 163.5237f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 121:
			*uParam1 = { -832.9372f, -1357.882f, 31.1094f };
			*uParam2 = { -82.6154f, 0.0027f, -121.9677f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 122:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 196:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 197:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 123:
			*uParam1 = { -2008.929f, -494.5522f, 38.0431f };
			*uParam2 = { -74.6696f, 3.4735f, 101.1669f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -1500.457f, -682.8798f, 52.8456f };
			*uParam2 = { -82.2007f, -0.0021f, -20.62f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 115:
			*uParam1 = { -514.3963f, -19.7218f, 71.4872f };
			*uParam2 = { -85.8754f, 0.0302f, -142.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 116:
			*uParam1 = { -627.7501f, 245.722f, 107.7731f };
			*uParam2 = { -85.8754f, 0.0301f, 148.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 117:
			*uParam1 = { -831.1096f, -350.8676f, 64.5357f };
			*uParam2 = { -85.8754f, 0.0301f, 73.7675f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 105:
			*uParam1 = { -466.357f, -1586.527f, 42.1308f };
			*uParam2 = { -24.1059f, 0f, -157.2387f };
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1738.608f, -624.3743f, 12.7827f };
			*uParam2 = { -22.3162f, 0f, 105.6959f };
			return 1;
			break;
		
		case 107:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 110:
			*uParam1 = { -95.4359f, -413.3546f, 61.9024f };
			*uParam2 = { -84.9814f, -0.0003f, 154.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 111:
			*uParam1 = { -1290.972f, -697.7042f, 50.5674f };
			*uParam2 = { -84.9813f, -0.0003f, 54.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1969.998f, 3806.847f, 35.494f };
			*uParam2 = { -14.7978f, 0f, -11.4244f };
			return 1;
			break;
		
		case 127:
			*uParam1 = { 672.4669f, 3502.739f, 58.9099f };
			*uParam2 = { -83.2715f, 4.5479f, 61.6184f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { 1975.91f, 3822.413f, 34.0088f };
			*uParam2 = { -10.9024f, 0f, 154.0872f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { 1983.736f, 3822.763f, 57.6395f };
			*uParam2 = { -83.4323f, -0.0013f, 121.7344f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 130:
			*uParam1 = { 1978.229f, 3820.721f, 34.0738f };
			*uParam2 = { -8.2785f, 0f, 103.9586f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 132:
			*uParam1 = { 1973.951f, 3819.078f, 33.7825f };
			*uParam2 = { -5.3804f, 0f, -17.5258f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 133:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 134:
			*uParam1 = { 1994.985f, 3057.219f, 49.8043f };
			*uParam2 = { -49.0498f, 0.0012f, 99.8958f };
			*uParam3 = 41f;
			return 1;
			break;
		
		case 151:
			*uParam1 = { -113.8308f, 361.9919f, 138.5542f };
			*uParam2 = { -76.7137f, -0.0014f, 41.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 152:
			*uParam1 = { -1349.114f, 351.6396f, 100.0071f };
			*uParam2 = { -80.7411f, -0.0078f, 34.6522f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 153:
			*uParam1 = { -715.1777f, 255.9193f, 105.5536f };
			*uParam2 = { -84.0507f, -0.0034f, 89.2749f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 154:
			*uParam1 = { -715.3492f, 256.7212f, 105.5855f };
			*uParam2 = { -82.4496f, -0.003003f, 99.94753f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 155:
			*uParam1 = { -774.8297f, 164.9666f, 104.4211f };
			*uParam2 = { -81.8771f, -0.0817f, 178.2323f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 156:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 157:
			*uParam1 = { -720.5396f, 253.1793f, 105.7766f };
			*uParam2 = { -83.2751f, 3.4532f, -42.6086f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 158:
			*uParam1 = { 533.3047f, 120.3593f, 122.7126f };
			*uParam2 = { -83.8911f, -0.0019f, -129.3945f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 159:
			*uParam1 = { -827.4469f, -191.4707f, 63.4392f };
			*uParam2 = { -80.7034f, 0.0005f, -51.0296f };
			*uParam3 = 44.888f;
			return 1;
			break;
		
		case 160:
			*uParam1 = { -718.5201f, -159.4091f, 62.5628f };
			*uParam2 = { -79.3643f, 0.0002f, -33.1272f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 161:
			*uParam1 = { -786.2485f, 187.686f, 97.9448f };
			*uParam2 = { -80.7232f, 0.0002f, 104.9069f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 162:
			*uParam1 = { -1370.73f, -209.3841f, 70.322f };
			*uParam2 = { -85.8754f, 0.0301f, -94.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 163:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 164:
			*uParam1 = { -778.8658f, 185.7413f, 98.1194f };
			*uParam2 = { -84.2688f, 0.0243f, 42.5521f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 165:
			*uParam1 = { -1133.295f, -455.1246f, (95.9402f - 30f) };
			*uParam2 = { -85.6256f, 0f, 28.0351f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 166:
			*uParam1 = { -1046.601f, -478.8773f, 62.6878f };
			*uParam2 = { -77.3255f, -6.297f, 139.6857f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 167:
			*uParam1 = { -1184.291f, -505.4514f, 75.0146f };
			*uParam2 = { -82.6035f, 0.0014f, -31.0152f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 168:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 169:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 170:
			*uParam1 = { -657.0717f, -271.9325f, 61.5797f };
			*uParam2 = { -78.4277f, 9.0072f, -174.2934f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 171:
			*uParam1 = { -252.0919f, -81.0714f, 74.7886f };
			*uParam2 = { -86.5763f, 49.0804f, -90.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 173:
			*uParam1 = { -831.4534f, 178.1406f, 96.6498f };
			*uParam2 = { -73.1145f, -0.0027f, -93.0056f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 172:
			*uParam1 = { -250.7753f, -80.1775f, 74.8044f };
			*uParam2 = { -85.8438f, 27.439f, -107.783f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 174:
			*uParam1 = { -803.7232f, 181.6804f, 73.2304f };
			*uParam2 = { -5.3638f, 0f, -22.9153f };
			*uParam3 = 50f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -23.8601f, -1456.89f, 30.8716f };
			*uParam2 = { 2.4688f, 0f, -32.828f };
			*uParam3 = 37.6481f;
			return 1;
			break;
		
		case 176:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 177:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 178:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 179:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 180:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 181:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 182:
			*uParam1 = { -13.2465f, -1425.419f, 31.1279f };
			*uParam2 = { -30.6822f, 0.6787f, 15.1437f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 183:
			*uParam1 = { 14.9547f, 525.4391f, 170.6328f };
			*uParam2 = { -30.6819f, 0.6789f, -170.1687f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 193:
			*uParam1 = { -1175.938f, -1575.701f, 30.1692f };
			*uParam2 = { -84.0992f, -0.0012f, -19.5058f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 192:
			*uParam1 = { -1175.792f, -1576.049f, 30.8335f };
			*uParam2 = { -80.2938f, 0.0008f, -26.9162f };
			*uParam3 = 49.9377f;
			return 1;
			break;
		
		case 194:
			*uParam1 = { -1151.191f, -1365.485f, 9.0273f };
			*uParam2 = { -14.4946f, 0f, 176.3572f };
			return 1;
			break;
		
		case 195:
			*uParam1 = { -1171.874f, -1425.224f, 9.2445f };
			*uParam2 = { -17.1697f, 0f, -111.3917f };
			return 1;
			break;
		
		case 198:
			*uParam1 = { -14.2911f, -1443.628f, 56.3341f };
			*uParam2 = { -81.6191f, 0.0002f, -175.2965f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 199:
			*uParam1 = { 18.2618f, 537.6057f, 201.7112f };
			*uParam2 = { -81.6191f, 0.0002f, 31.4594f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 200:
			*uParam1 = { -0.9251f, -1606.806f, 54.3956f };
			*uParam2 = { -81.9792f, -0.0059f, -89.5973f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 201:
			*uParam1 = { 1.8601f, -1609.959f, 55.0489f };
			*uParam2 = { -81.9213f, 0.0006f, -30.8316f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 202:
			*uParam1 = { -1246.266f, -1614.218f, 30.1603f };
			*uParam2 = { -85.4036f, -0.0003f, -85.7066f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 203:
			*uParam1 = { -13.0353f, -1450.723f, 55.6841f };
			*uParam2 = { -83.5727f, -0.0019f, 129.2043f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 204:
			*uParam1 = { -11.3015f, -1423.062f, 55.8104f };
			*uParam2 = { -83.5727f, 0.0005f, 102.8099f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 206:
			*uParam1 = { 154.6263f, 769.2573f, 234.8318f };
			*uParam2 = { -83.5727f, -0.0019f, -173.7957f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 207:
			*uParam1 = { -264.6808f, 416.6765f, 134.8675f };
			*uParam2 = { -83.5727f, -0.0019f, 126.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 205:
			*uParam1 = { 13.4706f, 520.5046f, 195.3417f };
			*uParam2 = { -83.5727f, 0.0005f, -15.8635f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 208:
			*uParam1 = { -452.4845f, -1591.881f, 43.1702f };
			*uParam2 = { -15.7272f, 0f, 116.1361f };
			return 1;
			break;
		
		case 209:
			*uParam1 = { 41.4086f, -1491.707f, 94.2915f };
			*uParam2 = { -83.0867f, 0f, -132.4861f };
			return 1;
			break;
		
		case 210:
			*uParam1 = { 213.7408f, 224.4167f, 107.2885f };
			*uParam2 = { -17.6158f, 0f, 124.3368f };
			return 1;
			break;
		
		case 211:
			*uParam1 = { -26.0418f, -1435.756f, 56.3367f };
			*uParam2 = { -85.6549f, 0.0007f, -100.97f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 212:
			*uParam1 = { -26.9523f, -1443.459f, 56.3006f };
			*uParam2 = { -82.158f, 0.0001f, -120.4657f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 213:
			*uParam1 = { 13.481f, 547.7665f, 201.6628f };
			*uParam2 = { -85.4529f, 32.8556f, -165.2088f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 214:
			*uParam1 = { 9.7918f, 546.587f, 201.411f };
			*uParam2 = { -85.6569f, 7.19613f, 128.447f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 215:
			*uParam1 = { 5.4402f, 547.371f, 201.086f };
			*uParam2 = { -75.7499f, -5.6172f, -42.2747f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 216:
			*uParam1 = { -1150.732f, 941.2178f, 224.4071f };
			*uParam2 = { -84.8486f, -22.4675f, 10.6362f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 217:
			*uParam1 = { -1690.135f, -945.0534f, 33.3591f };
			*uParam2 = { -85.6549f, 0.0007f, -128.97f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 221:
			*uParam1 = { -527.845f, -32.3779f, 69.5368f };
			*uParam2 = { -77.7626f, 15.8623f, -13.8244f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 222:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 223:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 224:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 226:
			*uParam1 = { 30.1511f, -1357.028f, 54.6942f };
			*uParam2 = { -78.5097f, 0.001f, 21.588f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 227:
			*uParam1 = { -380.8515f, 226.4113f, 109.5036f };
			*uParam2 = { -78.5097f, 0.001f, -153.161f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 228:
			*uParam1 = { 135.3769f, -1305.289f, 54.269f };
			*uParam2 = { -81.3478f, 0.0016f, 71.6158f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		
		case 229:
			*uParam1 = { 789.0312f, -738.351f, 52.6819f };
			*uParam2 = { -81.3478f, 0.0016f, -42.3726f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		
		case 230:
			*uParam1 = { -296.2211f, -1326.732f, 56.6653f };
			*uParam2 = { -78.5097f, 0.001f, 177.9219f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 218:
			*uParam1 = { -6.8196f, -1411.324f, 55.2464f };
			*uParam2 = { -78.7542f, -0.0029f, 172.9781f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 219:
			*uParam1 = { -237.5357f, -1534.073f, 57.4441f };
			*uParam2 = { -78.2577f, 0.0009f, 122.6248f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 220:
			*uParam1 = { -21.2522f, -1820.312f, 51.5856f };
			*uParam2 = { -76.786f, 0.0038f, -145.6433f };
			*uParam3 = 43.299f;
			return 1;
			break;
		
		case 225:
			*uParam1 = { 189.5486f, -1676.406f, 54.9378f };
			*uParam2 = { -76.6137f, 0.0002f, -45.2699f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 231:
			*uParam2 = { -89.49953f, -1E-06f, (166.0406f - 180f) };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		
		case 232:
			*uParam1 = { -79.1742f, -1020.333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 233:
			*uParam1 = { -79.1742f, -1020.333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 235:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 236:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 237:
			*uParam1 = { 133.4546f, -1306.806f, 55.17f };
			*uParam2 = { -79.386f, -0.0059f, 29.3671f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 238:
			*uParam1 = { 135.0825f, -1306.157f, 54.8922f };
			*uParam2 = { -83.3399f, 0.2592f, 40.162f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 239:
			*uParam1 = { -50.4324f, 348.2621f, 157.2838f };
			*uParam2 = { -83.7124f, 0.0772f, 28.1343f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 240:
			*uParam1 = { 1534.406f, 3607.274f, 36.6934f };
			*uParam2 = { -12.1833f, 0f, 9.7072f };
			return 1;
			break;
		
		case 241:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 242:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 273:
			*uParam1 = { -119.1385f, -444.0774f, 61.0046f };
			*uParam2 = { -85.9063f, 0.0045f, -35.758f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 274:
			*uParam1 = { -1857.702f, 2072.045f, 166.0882f };
			*uParam2 = { -85.9063f, 0.0045f, 126.242f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 245:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 250:
			*uParam1 = { 287.7224f, -3200.387f, 31.6541f };
			*uParam2 = { -83.4634f, -0.0001f, -168.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 251:
			*uParam1 = { -869.8748f, 66.6628f, 77.9598f };
			*uParam2 = { -83.4634f, -0.0001f, 62.087f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 252:
			*uParam1 = { -44.7279f, -1473.664f, 57.8914f };
			*uParam2 = { -83.4634f, -0.0001f, 107.5896f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 253:
			*uParam1 = { 1874.677f, 2621.563f, 71.5578f };
			*uParam2 = { -83.4635f, -0.0001f, -120.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 243:
			*uParam1 = { 437.0992f, -1462.18f, 54.8615f };
			*uParam2 = { -83.9471f, 0.0018f, 96.0313f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 244:
			*uParam1 = { 442.4368f, -1461.108f, 54.2539f };
			*uParam2 = { -72.1078f, -0.0029f, 104.5689f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 271:
			*uParam1 = { -1267.94f, -1104.505f, 32.918f };
			*uParam2 = { -80.9687f, 0f, -3.6111f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 272:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 246:
			*uParam1 = { -1201.496f, -1571.586f, 29.7218f };
			*uParam2 = { -84.4445f, 0.0015f, -51.2858f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 247:
			*uParam1 = { -1322.594f, -1669.339f, 27.6893f };
			*uParam2 = { -81.6907f, 0.0005f, 60.2722f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 278:
			*uParam1 = { 638.9762f, -1002.293f, 68.2444f };
			*uParam2 = { -82.3678f, -0.0043f, -59.3736f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 279:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 280:
			*uParam1 = { 2786.551f, -1451.673f, 26.3083f };
			*uParam2 = { -81.3303f, -0.0028f, -117.8646f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 264:
			*uParam1 = { 492.7402f, -1337.7f, 53.2989f };
			*uParam2 = { -74.0621f, -0.0069f, 128.6647f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 266:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 265:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 267:
			*uParam1 = { 2210.537f, 4919.154f, 41.1959f };
			*uParam2 = { -3.5325f, 0f, 169.681f };
			return 1;
			break;
		
		case 268:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 269:
			*uParam1 = { 415.3352f, -800.8342f, 51.2722f };
			*uParam2 = { -17.2722f, 0f, -24.592f };
			return 1;
			break;
		
		case 270:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 255:
			*uParam1 = { 411.8938f, -1481.106f, 55.0911f };
			*uParam2 = { -73.5286f, 0.0012f, 177.4479f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 248:
			*uParam1 = { 297.5302f, 179.229f, 129.4594f };
			*uParam2 = { -83.7434f, 0.0126f, 62.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 249:
			*uParam1 = { 294.6928f, 195.4445f, 129.4204f };
			*uParam2 = { -77.0175f, -0.0008f, 155.6596f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 281:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 50f;
			return 0;
			break;
		
		case 282:
			*uParam1 = { Vector(22.1187f, 2873.078f, -930.9908f) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f), 0f, 0f) };
			*uParam2 = { -89.49953f, -1E-06f, 1.040573f };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		
		case 283:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 284:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 275:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 276:
			*uParam1 = { 1893.4f, 2303.4f, (54.5f + 30f) };
			*uParam2 = { -89.4995f, 0.0001f, -15.996f };
			*uParam3 = 55f;
			return 1;
			break;
		
		case 277:
			*uParam1 = { 1076.988f, 2685.153f, (37.973f + 30f) };
			*uParam2 = { -89.4995f, 0.0796f, -93.9607f };
			*uParam3 = 55f;
			return 1;
			break;
		
		case 254:
			*uParam1 = { 150.8545f, -214.1522f, 79.4128f };
			*uParam2 = { -78.7899f, -0.0026f, -136.2629f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 285:
			*uParam1 = { 43.4637f, -2055.634f, 47.3524f };
			*uParam2 = { -80.4436f, 0f, -109.8209f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 256:
			*uParam1 = { -1241.5f, -1099.606f, 10.4958f };
			*uParam2 = { -8.2431f, 0f, 146.4822f };
			return 1;
			break;
		
		case 257:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 258:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 259:
			*uParam1 = { -725.9904f, -1305.716f, 30.7195f };
			*uParam2 = { -86.3376f, 0.0189f, -169.3006f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 260:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 261:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 286:
			*uParam1 = { -1275.476f, -1194.211f, 38.3756f };
			*uParam2 = { -84.3481f, -0.0001f, -125.4683f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 287:
			*uParam1 = { -876.4864f, -849.5565f, 45.7044f };
			*uParam2 = { -65.634f, -0.0013f, 106.1902f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 288:
			*uParam1 = { -1708.97f, -1055.762f, 44.8272f };
			*uParam2 = { -76.5326f, -0.0048f, -144.2845f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 262:
			*uParam1 = { -1153.228f, -1526.379f, 30.1087f };
			*uParam2 = { -87.0602f, 0.0019f, -17.9875f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 263:
			*uParam1 = { -562.2963f, -1256.627f, 38.9716f };
			*uParam2 = { -80.9113f, -0.0008f, 143.1449f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 289:
			*uParam1 = { 442.2141f, -229.2575f, 81.2032f };
			*uParam2 = { -83.8876f, -0.0064f, 45.2185f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 290:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 291:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 292:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 293:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 294:
			return func_519(293, uParam1, uParam2, uParam3);
			break;
		
		case 295:
			return func_519(292, uParam1, uParam2, uParam3);
			break;
		
		case 299:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 300:
			return func_519(303, uParam1, uParam2, uParam3);
			break;
		
		case 301:
			return func_519(303, uParam1, uParam2, uParam3);
			break;
		
		case 302:
			return func_519(303, uParam1, uParam2, uParam3);
			break;
		
		case 303:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 296:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 297:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 298:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 304:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 305:
			*uParam1 = { 1395.495f, 3601.725f, 39.5656f };
			*uParam2 = { -6.5114f, 0f, 79.7777f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 306:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 307:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 308:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 309:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 310:
			*uParam1 = { 2022.29f, 3405.734f, 68.8313f };
			*uParam2 = { -84.787f, 0.0001f, 143.9959f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 311:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 312:
			*uParam1 = { -272.257f, 6628.256f, 8.3634f };
			*uParam2 = { -13.8262f, 0f, 79.1812f };
			return 1;
			break;
		
		case 313:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 314:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 234:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 316:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 315:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		default:
			func_558(iParam0, &Var0, &fVar3, &cVar4);
			*uParam1 = { Var0 + Vector(0f, -5f, 0f) };
			*uParam2 = { 0f, 0f, -fVar3 };
			return 1;
			break;
	}
	func_558(iParam0, &Var12, &fVar15, &cVar16);
	*uParam1 = { Var12 + Vector(0f, -5f, 0f) };
	*uParam2 = { 0f, 0f, 0f };
	return 0;
}





































void func_556()//Position - 0x6FBBF
{
	if (!Global_2)
	{
		SCRIPT::_0xB1577667C3708F9B();
		Global_2 = GlobalFunc_4731();
		if (Global_2)
		{
		}
	}
}


int func_558(int iParam0, var uParam1, float fParam2, char* sParam3)//Position - 0x6FC1A
{
	int iVar0;
	
	if (func_560(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				GlobalFunc_5936(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_85570[iVar0 /*9*/].f_3 };
					*fParam2 = Global_85570[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_85570[0 /*9*/].f_3 };
					*fParam2 = Global_85570[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_88210[0 /*109*/].f_4 };
				*fParam2 = Global_88210[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_88210[1 /*109*/].f_4 };
				*fParam2 = Global_88210[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_88210[2 /*109*/].f_4 };
				*fParam2 = Global_88210[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_88538[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}


int func_560(int iParam0, var uParam1, char* sParam2)//Position - 0x6FEC7
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			GlobalFunc_5936(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_85570[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_85570[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_88210[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_88210[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_88210[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[0];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[2]), 32);
			return 1;
			break;
		
		case 11:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_560(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_560(8, uParam1, sParam2);
			break;
		
		case 13:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_560(208, uParam1, sParam2);
			break;
		
		case 24:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (GlobalFunc_5937(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_560(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_560(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_560(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_560(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_560(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_560(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			Var8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var8.x, -Var8.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			Var11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var11.x, -Var11.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			Var14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var14.x, -Var14.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			Var17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var17.x, -Var17.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}




bool func_564(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x74541
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_613(2, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_612(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_610(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_565(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
	}
	return *uParam0 != 318;
}

int func_565(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x74649
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar74;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 71;
	fVar74 = 71;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 3, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_607(iVar1, *uParam0, 3);
			}
		}
		if (!GlobalFunc_485(1))
		{
			func_606(250, 5f, &iVar2, &fVar74, &iVar0);
			func_606(251, 5f, &iVar2, &fVar74, &iVar0);
			if (GlobalFunc_230(30))
			{
				func_606(252, 5f, &iVar2, &fVar74, &iVar0);
			}
			func_606(253, 5f, &iVar2, &fVar74, &iVar0);
		}
		func_606(235, 2.5f, &iVar2, &fVar74, &iVar0);
		if (!GlobalFunc_891(85))
		{
			func_606(236, (2.5f / 2f), &iVar2, &fVar74, &iVar0);
			func_606(237, (2.5f / 2f), &iVar2, &fVar74, &iVar0);
		}
		func_606(238, 2.5f, &iVar2, &fVar74, &iVar0);
		func_604(&iVar0, 70f, &iVar2, &fVar74);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 3, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_607(iVar1, *uParam0, 3);
		}
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_606(305, 5f, &iVar2, &fVar74, &iVar0);
			}
		}
		if (!func_603(25, 2) && !func_603(26, 2))
		{
			if (func_601(2, joaat("weapon_sniperrifle")) || func_601(2, joaat("weapon_heavysniper")))
			{
				func_606(306, 5f, &iVar2, &fVar74, &iVar0);
				func_606(307, 5f, &iVar2, &fVar74, &iVar0);
				func_606(308, 5f, &iVar2, &fVar74, &iVar0);
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_606(309, 10f, &iVar2, &fVar74, &iVar0);
		}
		func_606(315, 5f, &iVar2, &fVar74, &iVar0);
		func_606(316, 5f, &iVar2, &fVar74, &iVar0);
		func_598(&iVar0, 30f, &iVar2, &fVar74);
	}
	return func_566(iVar1, &iVar2, &fVar74, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}

int func_566(int iParam0, int iParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8)//Position - 0x74892
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	char cVar11[32];
	float fVar19;
	float fVar20;
	
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_568((*iParam1)[iVar1], iParam0, uParam5, uParam6, bParam7, bParam8))
		{
			fVar0 = (fVar0 + (*fParam2)[iVar1]);
		}
		else
		{
			(*iParam1)[iVar1] = 318;
			(*fParam2)[iVar1] = 0f;
		}
		iVar1++;
	}
	if (!bParam7 && !bParam8)
	{
		if (Global_87680[iParam0] == 1)
		{
			iVar2 = Global_87684[iParam0];
			iVar3 = Global_81155[iVar2 /*34*/].f_10;
			if (!GlobalFunc_4324(iVar3))
			{
				Var4 = { GlobalFunc_2247(iVar3, 0) };
			}
			else
			{
				Var4 = { GlobalFunc_2247(iVar3, iParam0) };
			}
			Var7 = { 0f, 0f, 0f };
			fVar10 = 0f;
			StringCopy(&cVar11, "", 32);
			iVar1 = 0;
			while (iVar1 < *fParam2)
			{
				if ((*iParam1)[iVar1] != 318)
				{
					if (func_558((*iParam1)[iVar1], &Var7, &fVar10, &cVar11))
					{
						fVar19 = SYSTEM::VDIST2(Var4, Var7);
						if (fVar19 < 22500f)
						{
							*uParam3 = (*iParam1)[iVar1];
							*uParam4 = 100f;
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar0);
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if ((*iParam1)[iVar1] != 318)
		{
			if (fVar20 < (*fParam2)[iVar1])
			{
				*uParam3 = (*iParam1)[iVar1];
				*uParam4 = (*fParam2)[iVar1];
				return 1;
			}
			fVar20 = (fVar20 - (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	*uParam3 = 318;
	*uParam4 = -1f;
	return 0;
}


int func_568(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x74A4B
{
	struct<4> Var0;
	float fVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam0 == 318 || iParam0 == 0)
	{
		return 0;
	}
	if (bParam4)
	{
		if (((((((((((((((((((((((((iParam0 == 196 || iParam0 == 197) || iParam0 == 305) || iParam0 == 313) || iParam0 == 314) || iParam0 == 105) || iParam0 == 106) || iParam0 == 107) || iParam0 == 208) || iParam0 == 209) || iParam0 == 210) || iParam0 == 192) || iParam0 == 222) || iParam0 == 223) || iParam0 == 224) || iParam0 == 281) || iParam0 == 282) || iParam0 == 283) || iParam0 == 284) || iParam0 == 275) || iParam0 == 276) || iParam0 == 277) || iParam0 == 218) || iParam0 == 219) || iParam0 == 220) || iParam0 == 225)
		{
			return 0;
		}
		StringCopy(&Var0, "", 32);
		fVar8 = 0f;
		if (GlobalFunc_2980(iParam0, &Var0, &fVar8, &uVar9, &uVar10, &uVar11))
		{
			return 0;
		}
	}
	if (func_596(iParam0))
	{
		return 0;
	}
	if (func_594(iParam1, iParam0))
	{
		return 0;
	}
	if (func_593(iParam1, iParam0))
	{
		return 0;
	}
	if (func_591(iParam0))
	{
		return 0;
	}
	if (func_589(iParam0, uParam2, uParam3))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_588(iParam0))
		{
			return 0;
		}
	}
	if (func_587(iParam0))
	{
		return 0;
	}
	if (func_582(iParam0))
	{
		return 0;
	}
	if (func_579(iParam0, uParam2, uParam3, bParam4))
	{
		return 0;
	}
	if (func_577(iParam1, iParam0))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_574(iParam0))
		{
			return 0;
		}
	}
	if (func_572(iParam0, bParam4))
	{
		return 0;
	}
	if (func_571(iParam1, iParam0, bParam4))
	{
		return 0;
	}
	if (func_570(iParam1, iParam0))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_569(iParam0, bParam4, 1137180672))
		{
			return 0;
		}
	}
	else if (func_569(iParam0, bParam4, 15f))
	{
		return 0;
	}
	return 1;
}

int func_569(int iParam0, bool bParam1, float fParam2)//Position - 0x74CC5
{
	struct<3> Var0;
	var uVar3;
	char[] cVar4[8];
	struct<3> Var12;
	float fVar15;
	
	if (bParam1)
	{
		return 0;
	}
	if (func_558(iParam0, &Var0, &uVar3, &cVar4))
	{
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		fVar15 = SYSTEM::VDIST2(Var0, Var12);
		if (fVar15 < (fParam2 * fParam2))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_570(int iParam0, int iParam1)//Position - 0x74D14
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	var uVar9;
	char[] cVar10[8];
	float fVar18;
	
	if (iParam1 == 197)
	{
		return 0;
	}
	Var0 = { 0f, 0f, 0f };
	fVar3 = -1f;
	switch (iParam0)
	{
		case 0:
			if (25 <= 31)
			{
				iVar4 = 9;
				iVar5 = 25;
			}
			else
			{
				iVar4 = 10;
				iVar5 = (25 - 31);
			}
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar4], iVar5))
			{
				Var0 = { -808.7974f, 169.3193f, 70.9558f };
				fVar3 = 85f;
			}
			break;
		
		case 1:
			if (24 <= 31)
			{
				iVar4 = 9;
				iVar5 = 24;
			}
			else
			{
				iVar4 = 10;
				iVar5 = (24 - 31);
			}
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar4], iVar5))
			{
				Var0 = { -2.62564f, 528.3256f, 178.392f };
				fVar3 = 65f;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (fVar3 < 0f)
	{
		return 0;
	}
	if (func_558(iParam1, &Var6, &uVar9, &cVar10))
	{
		fVar18 = SYSTEM::VDIST2(Var6, Var0);
		if (fVar18 < (fVar3 * fVar3))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_571(int iParam0, int iParam1, bool bParam2)//Position - 0x74E27
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	if (!GlobalFunc_6710(iVar0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 77:
		case 78:
		case 89:
		case 90:
		case 83:
		case 82:
		case 84:
		case 163:
		case 175:
		case 176:
		case 292:
		case 295:
		case 293:
		case 294:
			if (!GlobalFunc_10380(iVar0, 6))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_572(int iParam0, bool bParam1)//Position - 0x74EC7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 87:
		case 88:
		case 80:
		case 164:
		case 152:
		case 184:
		case 185:
		case 241:
		case 247:
		case 286:
			iVar0 = MISC::GET_PREV_WEATHER_TYPE_HASH_NAME();
			iVar1 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
			iVar3 = 0;
			iVar4 = 0;
			if (!bParam1)
			{
				if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar0 == -273223690)
				{
					iVar3 = 1;
				}
			}
			if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -273223690)
			{
				iVar3 = 1;
			}
			if (iVar3 || iVar4)
			{
				return 1;
			}
			iVar2 = GlobalFunc_8043();
			if (iVar2 < 9 || iVar2 >= 14)
			{
				return 1;
			}
			break;
		
		case 192:
		case 193:
		case 202:
			iVar2 = GlobalFunc_8043();
			if (iVar2 < 9 || iVar2 >= 21)
			{
				return 1;
			}
			break;
		
		case 81:
			iVar2 = GlobalFunc_8043();
			if (!GlobalFunc_4393(iVar2))
			{
				return 1;
			}
			break;
		
		case 296:
			if (Global_32360[145] != 1)
			{
				return 1;
			}
			break;
		
		case 89:
		case 90:
		case 112:
		case 113:
		case 123:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128])
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_574(int iParam0)//Position - 0x75064
{
	struct<3> Var0;
	var uVar3;
	char[] cVar4[8];
	int iVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	int iVar24;
	struct<3> Var25;
	
	if (func_558(iParam0, &Var0, &uVar3, &cVar4))
	{
		iVar12 = 0;
		while (iVar12 < 8)
		{
			if (Global_87300[iVar12 /*17*/] && Global_87300[iVar12 /*17*/].f_3 != 1)
			{
				iVar13 = Global_87300[iVar12 /*17*/].f_9;
				if (iVar13 >= 0 && iVar13 < 262)
				{
					Var14 = { GlobalFunc_2247(iVar13, 0) };
					fVar17 = 0f;
					if (func_576(iParam0, Var0, Var14, &fVar17, iVar13, 0))
					{
						return 1;
					}
				}
			}
			iVar12++;
		}
		iVar18 = 0;
		while (iVar18 < 262)
		{
			if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar18 /*23*/].f_11, 0))
			{
				Var19 = { GlobalFunc_2247(iVar18, 0) };
				fVar22 = 0f;
				if (func_576(iParam0, Var0, Var19, &fVar22, iVar18, 0))
				{
					return 1;
				}
				if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar18 /*23*/].f_11, 19))
				{
					iVar24 = 3;
					iVar23 = 0;
					while (iVar23 < iVar24)
					{
						Var25 = { GlobalFunc_2247(iVar18, iVar23) };
						if (!GlobalFunc_105(Var25))
						{
							if (func_576(iParam0, Var0, Var25, &fVar22, iVar18, iVar23))
							{
								return 1;
							}
						}
						iVar23++;
					}
				}
			}
			iVar18++;
		}
	}
	return 0;
}


int func_576(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9)//Position - 0x751C3
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = iParam8;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam8 == 262)
	{
		return 0;
	}
	if (((Global_Mission_Blips[iVar0 /*23*/].f_16 == 6 || Global_Mission_Blips[iVar0 /*23*/].f_16 == 1) || Global_Mission_Blips[iVar0 /*23*/].f_16 == 9) || Global_Mission_Blips[iVar0 /*23*/].f_16 == 7)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param1, Param4) < (7.5f * 7.5f))
	{
		*fParam7 = SYSTEM::VDIST2(Param1, Param4);
		return 1;
	}
	fVar1 = -1f;
	if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 4)
	{
		fVar1 = 10f;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (Global_87300[iVar2 /*17*/])
			{
				if (Global_87300[iVar2 /*17*/].f_9 == iParam8)
				{
					fVar1 = Global_84352[Global_87300[iVar2 /*17*/].f_5 /*2*/].f_1;
				}
			}
			iVar2++;
		}
	}
	else if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 8)
	{
		fVar1 = 20f;
	}
	if (fVar1 > 0f)
	{
		if (SYSTEM::VDIST2(Param1, Param4) < (fVar1 * fVar1))
		{
			*fParam7 = SYSTEM::VDIST2(Param1, Param4);
			return 1;
		}
		if (iParam0 != 89)
		{
			iVar3 = 0;
			while (iVar3 < 10)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar3], 0))
				{
					if (SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param4) < (50f * 50f))
					{
						if (SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param1) < (30f * 30f))
						{
							*fParam7 = SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param1);
							iParam0 = iParam0;
							return 1;
						}
					}
				}
				iVar3++;
			}
		}
	}
	iParam9 = iParam9;
	*fParam7 = 0f;
	return 0;
}

int func_577(int iParam0, int iParam1)//Position - 0x7539A
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_485(130) && !GlobalFunc_485(131))
			{
				if (func_578(iParam1))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 2:
			if (GlobalFunc_485(58))
			{
				if (func_578(iParam1))
				{
					return 1;
				}
			}
			if (GlobalFunc_485(59))
			{
				if (!func_578(iParam1))
				{
					return 1;
				}
			}
			if (GlobalFunc_485(130) && !GlobalFunc_485(131))
			{
				if (func_578(iParam1))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_578(int iParam0)//Position - 0x7543C
{
	struct<2> Var0;
	var uVar3;
	char[] cVar4[8];
	
	if (func_558(iParam0, &Var0, &uVar3, &cVar4))
	{
		if (Var0.f_1 < 400f)
		{
			if (Var0 < 1400f)
			{
				if (Var0 > -1900f)
				{
					if (Var0.f_1 > -3500f)
					{
						return 1;
					}
				}
			}
		}
		return 0;
	}
	return 0;
}

int func_579(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x7548C
{
	if (bParam3)
	{
		return 0;
	}
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_87845.f_45;
	if (GlobalFunc_7224(*uParam1, uParam2))
	{
		if (iParam0 == 132)
		{
			uParam2->f_111 = 36;
		}
		if (uParam2->f_111 != 145)
		{
			if (GlobalFunc_7231(uParam2->f_111))
			{
				return 1;
			}
		}
	}
	return 0;
}



int func_582(int iParam0)//Position - 0x75653
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	char[] cVar5[8];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_558(iParam0, &Var1, &uVar4, &cVar5))
	{
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
		{
			iVar14 = GlobalFunc_2566(iVar13);
			if (iVar14 != -1)
			{
				if ((((((((((((((((((((((((iVar14 != -1 && iVar14 != 51) && iVar14 != 62) && iVar14 != 52) && iVar14 != 62) && iVar14 != 53) && iVar14 != 62) && iVar14 != 54) && iVar14 != 62) && iVar14 != 55) && iVar14 != 62) && iVar14 != 56) && iVar14 != 62) && iVar14 != 57) && iVar14 != 62) && iVar14 != 58) && iVar14 != 62) && iVar14 != 59) && iVar14 != 62) && iVar14 != 60) && iVar14 != 62) && iVar14 != 61) && iVar14 != 62) && iVar14 != 62) && iVar14 != 63)
				{
					iVar15 = (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar13 /*15*/].Queue_Time - iVar0);
					if (iVar15 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar14))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
		{
			iVar16 = GlobalFunc_2564(iVar13);
			if (iVar16 != -1)
			{
				if ((((((((((((((((((((((((iVar16 != -1 && iVar16 != 51) && iVar16 != 62) && iVar16 != 52) && iVar16 != 62) && iVar16 != 53) && iVar16 != 62) && iVar16 != 54) && iVar16 != 62) && iVar16 != 55) && iVar16 != 62) && iVar16 != 56) && iVar16 != 62) && iVar16 != 57) && iVar16 != 62) && iVar16 != 58) && iVar16 != 62) && iVar16 != 59) && iVar16 != 62) && iVar16 != 60) && iVar16 != 62) && iVar16 != 61) && iVar16 != 62) && iVar16 != 62) && iVar16 != 63)
				{
					iVar17 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar13 /*14*/].Queue_Time - iVar0);
					if (iVar17 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar16))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
		{
			iVar18 = GlobalFunc_2563(iVar13);
			if (iVar18 != -1)
			{
				if ((((((((((((((((((((((((iVar18 != -1 && iVar18 != 51) && iVar18 != 62) && iVar18 != 52) && iVar18 != 62) && iVar18 != 53) && iVar18 != 62) && iVar18 != 54) && iVar18 != 62) && iVar18 != 55) && iVar18 != 62) && iVar18 != 56) && iVar18 != 62) && iVar18 != 57) && iVar18 != 62) && iVar18 != 58) && iVar18 != 62) && iVar18 != 59) && iVar18 != 62) && iVar18 != 60) && iVar18 != 62) && iVar18 != 61) && iVar18 != 62) && iVar18 != 62) && iVar18 != 63)
				{
					iVar19 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar13 /*10*/].Queue_Time - iVar0);
					if (iVar19 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar18))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
	}
	return 0;
}





int func_587(int iParam0)//Position - 0x75B0A
{
	switch (iParam0)
	{
		case 315:
		case 311:
		case 234:
		case 316:
		case 245:
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[35 /*6*/], 3) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[36 /*6*/], 3))
			{
				return 1;
			}
			break;
	}
	switch (Global_68509)
	{
		case 42:
			if (iParam0 == 118)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_588(int iParam0)//Position - 0x75B85
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 86:
		case 87:
		case 122:
		case 89:
			iVar0 = 17;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 19;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 62;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 83:
		case 82:
		case 85:
		case 124:
			iVar0 = 22;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 173:
		case 171:
		case 161:
		case 163:
		case 169:
		case 168:
		case 167:
		case 152:
		case 170:
		case 151:
		case 156:
		case 172:
		case 155:
			iVar0 = 49;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 212:
		case 211:
		case 218:
		case 219:
		case 220:
		case 225:
			iVar0 = 41;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 293:
		case 294:
		case 295:
			iVar0 = iLocal_41;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = iLocal_39;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 71;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 270:
			iVar0 = 71;
			if (!GlobalFunc_230(iVar0))
			{
				return 1;
			}
			break;
		
		case 267:
			iVar0 = 77;
			if (GlobalFunc_230(iVar0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_589(int iParam0, var uParam1, var uParam2)//Position - 0x75D77
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_87845.f_45;
	if (GlobalFunc_7224(*uParam1, uParam2))
	{
		if (uParam2->f_111 != 145 && uParam2->f_111 != 144)
		{
			iVar0 = 0;
			switch (uParam2->f_111)
			{
				case 19:
					iVar0 = 8;
					break;
				
				case 14:
					iVar0 = 16;
					break;
				
				case 17:
					iVar0 = 32;
					break;
				
				default:
					return 0;
					break;
			}
			iVar3 = 0;
			while (iVar3 < Global_81119)
			{
				if (Global_81119[iVar3 /*5*/] != -1)
				{
					uVar1 = Global_68514.f_109[Global_81119[iVar3 /*5*/] /*4*/];
					iVar2 = uVar1;
					if (GlobalFunc_747(Global_81155[iVar2 /*34*/].f_12, iVar0))
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return 0;
}


int func_591(int iParam0)//Position - 0x75E4F
{
	switch (iParam0)
	{
		case 218:
		case 219:
		case 220:
		case 225:
			if (GlobalFunc_7909(1, 19))
			{
				return 1;
			}
			if (GlobalFunc_7909(2, 19))
			{
				return 1;
			}
			break;
		
		case 86:
		case 101:
		case 102:
		case 171:
		case 173:
			if (GlobalFunc_7909(0, 14))
			{
				return 1;
			}
			if (GlobalFunc_7909(1, 14))
			{
				return 1;
			}
			if (GlobalFunc_7909(2, 14))
			{
				return 1;
			}
			break;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 94:
		case 98:
		case 122:
		case 151:
			if (GlobalFunc_7909(0, 17))
			{
				return 1;
			}
			if (GlobalFunc_891(19))
			{
				return 1;
			}
			break;
		
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 295:
		case 293:
		case 294:
			if (GlobalFunc_891(74) || GlobalFunc_891(75))
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_593(int iParam0, int iParam1)//Position - 0x76015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam1 == Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_4[iParam0 /*6*/][iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_594(int iParam0, int iParam1)//Position - 0x7604A
{
	if (iParam1 == Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0])
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (func_595(iParam0, iParam1, 79, 80, 81, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 77, 78, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 82, 83, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 87, 88, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 91, 92, 93, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 112, 113, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 135, 136, 137, 138, 139, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 98, 99, 100, 101, 102, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 95, 96, 97, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 115, 116, 117, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 105, 106, 107, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 118, 119, 120, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 103, 104, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 108, 109, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 110, 111, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 89, 90, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 165, 166, 167, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 170, 171, 172, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_595(iParam0, iParam1, 192, 193, 194, 195, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 200, 201, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 222, 223, 224, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 211, 213, 216, 217, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 226, 227, 228, 229, 230, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 184, 185, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_595(iParam0, iParam1, 250, 251, 252, 253, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 240, 241, 242, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 273, 274, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 275, 276, 277, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 292, 293, 294, 295, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 296, 297, 298, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 299, 300, 301, 302, 303, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 264, 265, 266, 267, 268, 269, 270, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 281, 282, 283, 284, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 256, 257, 258, 246, 239, 259, 260, 261))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 278, 279, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_595(iParam0, iParam1, 243, 244, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_595(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x76585
{
	if ((((((((Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam2 && iParam2 != 318) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam3 && iParam3 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam4 && iParam4 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam5 && iParam5 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam6 && iParam6 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam7 && iParam7 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam8 && iParam8 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam9 && iParam9 != 318))
	{
		if ((((((((iParam1 == iParam2 && iParam2 != 318) || (iParam1 == iParam3 && iParam3 != 318)) || (iParam1 == iParam4 && iParam4 != 318)) || (iParam1 == iParam5 && iParam5 != 318)) || (iParam1 == iParam6 && iParam6 != 318)) || (iParam1 == iParam7 && iParam7 != 318)) || (iParam1 == iParam8 && iParam8 != 318)) || (iParam1 == iParam9 && iParam9 != 318))
		{
			return 1;
		}
	}
	return 0;
}

int func_596(int iParam0)//Position - 0x76734
{
	int iVar0;
	
	if (GlobalFunc_2926(iParam0, &iVar0))
	{
		if (iParam0 == 197)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23, iVar0))
			{
				if (GlobalFunc_230(9))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23), iVar0);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23, iVar0))
		{
			return 1;
		}
	}
	return 0;
}


int func_598(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x768C3
{
	var uVar0;
	int iVar1;
	
	uVar0 = *iParam0;
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_599(iParam0, 240, uParam2);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_599(iParam0, 241, uParam2);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			break;
	}
	if (GlobalFunc_466(13) != 2)
	{
		func_599(iParam0, 258, uParam2);
	}
	func_599(iParam0, 274, uParam2);
	func_599(iParam0, 265, uParam2);
	func_599(iParam0, 267, uParam2);
	func_599(iParam0, 268, uParam2);
	func_599(iParam0, 270, uParam2);
	func_599(iParam0, 276, uParam2);
	func_599(iParam0, 277, uParam2);
	func_599(iParam0, 282, uParam2);
	if (func_601(2, joaat("weapon_pistol")))
	{
		func_599(iParam0, 312, uParam2);
	}
	if (GlobalFunc_230(63))
	{
		func_599(iParam0, 314, uParam2);
	}
	func_599(iParam0, 313, uParam2);
	func_599(iParam0, 310, uParam2);
	func_599(iParam0, 311, uParam2);
	iVar1 = uVar0;
	while (iVar1 <= (*uParam3 - 1))
	{
		if ((*uParam2)[iVar1] == 0)
		{
			(*uParam2)[iVar1] = 318;
		}
		if ((*uParam2)[iVar1] != 318)
		{
			(*uParam3)[iVar1] = (fParam1 / SYSTEM::TO_FLOAT(*iParam0));
		}
		else
		{
			(*uParam3)[iVar1] = 0f;
		}
		iVar1++;
	}
	return 1;
}

int func_599(var uParam0, int iParam1, var uParam2)//Position - 0x76AA1
{
	if (*uParam0 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*uParam0] = iParam1;
	*uParam0++;
	return 1;
}


int func_601(int iParam0, int iParam1)//Position - 0x76ADB
{
	int iVar0;
	
	iVar0 = WEAPON::GET_WEAPONTYPE_SLOT(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iParam0 /*284*/][GlobalFunc_3268(iVar0) /*3*/] == iParam1)
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iParam0 /*284*/][GlobalFunc_3268(iVar0) /*3*/].f_1 > 0)
		{
			return 1;
		}
	}
	return 0;
}


int func_603(int iParam0, int iParam1)//Position - 0x76D29
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_604(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x76D4A
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = *iParam0;
	iVar1 = GlobalFunc_8043();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_599(iParam0, 239, uParam2);
			func_599(iParam0, 242, uParam2);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_599(iParam0, 246, uParam2);
			func_599(iParam0, 247, uParam2);
			func_599(iParam0, 248, uParam2);
			func_599(iParam0, 249, uParam2);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (iVar1 == 18 || iVar1 == 19)
			{
				func_599(iParam0, 287, uParam2);
				func_599(iParam0, 287, uParam2);
			}
			else
			{
				func_599(iParam0, 254, uParam2);
				func_599(iParam0, 255, uParam2);
			}
			break;
	}
	func_599(iParam0, 243, uParam2);
	func_599(iParam0, 244, uParam2);
	func_599(iParam0, 256, uParam2);
	func_599(iParam0, 257, uParam2);
	func_599(iParam0, 259, uParam2);
	func_599(iParam0, 260, uParam2);
	func_599(iParam0, 261, uParam2);
	func_599(iParam0, 263, uParam2);
	if (!GlobalFunc_891(8))
	{
		func_599(iParam0, 264, uParam2);
	}
	func_599(iParam0, 266, uParam2);
	func_599(iParam0, 269, uParam2);
	func_599(iParam0, 271, uParam2);
	if (GlobalFunc_230(65))
	{
		if (GlobalFunc_103(4))
		{
			func_599(iParam0, 272, uParam2);
			func_599(iParam0, 290, uParam2);
		}
	}
	func_599(iParam0, 273, uParam2);
	func_599(iParam0, 275, uParam2);
	func_599(iParam0, 278, uParam2);
	func_599(iParam0, 279, uParam2);
	func_599(iParam0, 281, uParam2);
	func_599(iParam0, 283, uParam2);
	func_599(iParam0, 284, uParam2);
	func_599(iParam0, 285, uParam2);
	func_599(iParam0, 286, uParam2);
	func_599(iParam0, 288, uParam2);
	func_599(iParam0, 289, uParam2);
	if (!GlobalFunc_230(iLocal_39))
	{
		func_599(iParam0, 262, uParam2);
		func_599(iParam0, 292, uParam2);
		func_599(iParam0, 293, uParam2);
		func_599(iParam0, 294, uParam2);
		func_599(iParam0, 295, uParam2);
	}
	iVar2 = uVar0;
	while (iVar2 <= (*uParam3 - 1))
	{
		if ((*uParam2)[iVar2] == 0)
		{
			(*uParam2)[iVar2] = 318;
		}
		if ((*uParam2)[iVar2] != 318)
		{
			(*uParam3)[iVar2] = (fParam1 / SYSTEM::TO_FLOAT(*iParam0));
		}
		else
		{
			(*uParam3)[iVar2] = 0f;
		}
		iVar2++;
	}
	return 1;
}


int func_606(int iParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x770C7
{
	if (*iParam4 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*iParam4] = iParam0;
	(*uParam3)[*iParam4] = fParam1;
	*iParam4++;
	return 1;
}

int func_607(int iParam0, int iParam1, int iParam2)//Position - 0x770F7
{
	if (iParam0 != 145)
	{
	}
	if (iParam1 != 318)
	{
	}
	if (iParam2 != 0)
	{
	}
	return 1;
}

int func_608(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x77115
{
	int iVar0;
	int iVar1[6];
	float fVar8[6];
	
	if (Global_87680[iParam0] == 1)
	{
		return 0;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iParam5])
	{
		if (iParam7 != 318)
		{
			iVar1[iVar0] = iParam7;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam8 != 318)
		{
			iVar1[iVar0] = iParam8;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam9 != 318)
		{
			iVar1[iVar0] = iParam9;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam10 != 318)
		{
			iVar1[iVar0] = iParam10;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam11 != 318)
		{
			iVar1[iVar0] = iParam11;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam12 != 318)
		{
			iVar1[iVar0] = iParam12;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (func_566(iParam0, &iVar1, &fVar8, uParam1, uParam2, uParam3, uParam4, bParam6, 0))
		{
			return *uParam1 != 318;
		}
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iParam5] = 0;
	}
	return 0;
}


int func_610(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7725A
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar67;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 64;
	fVar67 = 64;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 2, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_607(iVar1, *uParam0, 2);
			}
		}
		if (!GlobalFunc_230(iLocal_39))
		{
			func_606(291, 20f, &iVar2, &fVar67, &iVar0);
		}
		func_604(&iVar0, 80f, &iVar2, &fVar67);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 2, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_607(iVar1, *uParam0, 2);
		}
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_606(305, 5f, &iVar2, &fVar67, &iVar0);
			}
		}
		if (GlobalFunc_892(0, 3))
		{
			if (!func_603(25, 2) && !func_603(26, 2))
			{
				if (func_601(2, joaat("weapon_sniperrifle")) || func_601(2, joaat("weapon_heavysniper")))
				{
					func_606(306, 5f, &iVar2, &fVar67, &iVar0);
					func_606(307, 5f, &iVar2, &fVar67, &iVar0);
					func_606(308, 5f, &iVar2, &fVar67, &iVar0);
				}
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_606(309, 10f, &iVar2, &fVar67, &iVar0);
		}
		func_606(315, 5f, &iVar2, &fVar67, &iVar0);
		func_606(316, 5f, &iVar2, &fVar67, &iVar0);
		func_598(&iVar0, 40f, &iVar2, &fVar67);
	}
	return func_566(iVar1, &iVar2, &fVar67, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}


int func_612(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x77476
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar75;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 72;
	fVar75 = 72;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 1, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_607(iVar1, *uParam0, 1);
			}
		}
		if (!GlobalFunc_230(iLocal_39))
		{
			func_606(292, 7.5f, &iVar2, &fVar75, &iVar0);
			func_606(293, 7.5f, &iVar2, &fVar75, &iVar0);
			func_606(294, 7.5f, &iVar2, &fVar75, &iVar0);
			func_606(295, 7.5f, &iVar2, &fVar75, &iVar0);
			func_606(296, 1f, &iVar2, &fVar75, &iVar0);
			func_606(297, 1f, &iVar2, &fVar75, &iVar0);
			func_606(298, 1f, &iVar2, &fVar75, &iVar0);
		}
		func_606(235, 5f, &iVar2, &fVar75, &iVar0);
		if (!GlobalFunc_891(85))
		{
			func_606(236, (5f / 2f), &iVar2, &fVar75, &iVar0);
			func_606(237, (5f / 2f), &iVar2, &fVar75, &iVar0);
		}
		func_606(238, 5f, &iVar2, &fVar75, &iVar0);
		func_604(&iVar0, 50f, &iVar2, &fVar75);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_608(iVar1, uParam0, uParam1, uParam2, uParam3, 1, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_607(iVar1, *uParam0, 1);
		}
		func_606(304, 15f, &iVar2, &fVar75, &iVar0);
		func_606(245, 15f, &iVar2, &fVar75, &iVar0);
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_606(305, 5f, &iVar2, &fVar75, &iVar0);
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_606(309, 10f, &iVar2, &fVar75, &iVar0);
		}
		func_606(315, 5f, &iVar2, &fVar75, &iVar0);
		func_606(316, 5f, &iVar2, &fVar75, &iVar0);
		func_598(&iVar0, 30f, &iVar2, &fVar75);
	}
	return func_566(iVar1, &iVar2, &fVar75, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}

int func_613(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x776AB
{
	int iVar0[3];
	float fVar4[3];
	int iVar8;
	
	iVar8 = -1;
	if (GlobalFunc_891(19))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 140;
			fVar4[0] = 33.3f;
			iVar0[1] = 90;
			fVar4[1] = 33.3f;
			iVar0[2] = 116;
			fVar4[2] = 33.3f;
			iVar8 = 19;
		}
	}
	if (GlobalFunc_891(41))
	{
		if (iParam0 == 1)
		{
			iVar0[0] = 201;
			fVar4[0] = 40f;
			iVar0[1] = 200;
			fVar4[1] = 40f;
			iVar0[2] = 209;
			fVar4[2] = 20f;
			iVar8 = 41;
		}
	}
	if (GlobalFunc_891(45))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 112;
			fVar4[0] = 33.3f;
			iVar0[1] = 113;
			fVar4[1] = 33.3f;
			iVar0[2] = 115;
			fVar4[2] = 33.3f;
			iVar8 = 45;
		}
	}
	if (GlobalFunc_891(46))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 115;
			fVar4[2] = 33.3f;
			iVar8 = 46;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 251;
			fVar4[0] = 50f;
			iVar0[1] = 260;
			fVar4[1] = 25f;
			iVar0[2] = 239;
			fVar4[2] = 25f;
			iVar8 = 46;
		}
	}
	if (GlobalFunc_891(47))
	{
		if (iParam0 == 1)
		{
			iVar0[0] = 218;
			fVar4[0] = 33.3f;
			iVar0[1] = 209;
			fVar4[1] = 33.3f;
			iVar0[2] = 226;
			fVar4[2] = 33.3f;
			iVar8 = 47;
		}
	}
	if (GlobalFunc_891(76))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 104;
			fVar4[2] = 33.3f;
			iVar8 = 76;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 290;
			fVar4[0] = 33.3f;
			iVar0[1] = 236;
			fVar4[1] = 33.3f;
			iVar0[2] = 272;
			fVar4[2] = 33.3f;
			iVar8 = 76;
		}
	}
	if (GlobalFunc_891(77))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 104;
			fVar4[2] = 33.3f;
			iVar8 = 77;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 290;
			fVar4[0] = 33.3f;
			iVar0[1] = 236;
			fVar4[1] = 33.3f;
			iVar0[2] = 272;
			fVar4[2] = 33.3f;
			iVar8 = 77;
		}
	}
	if (GlobalFunc_891(91))
	{
		if (iParam0 == 2)
		{
			iVar0[0] = 240;
			fVar4[0] = 33.3f;
			iVar0[1] = 310;
			fVar4[1] = 33.3f;
			iVar0[2] = 277;
			fVar4[2] = 33.3f;
			iVar8 = 91;
		}
	}
	if (GlobalFunc_891(75))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 91;
			fVar4[0] = 33.3f;
			iVar0[1] = 121;
			fVar4[1] = 33.3f;
			iVar0[2] = 318;
			fVar4[2] = 33.3f;
			iVar8 = 75;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 246;
			fVar4[0] = 33.3f;
			iVar0[1] = 291;
			fVar4[1] = 33.3f;
			iVar0[2] = 298;
			fVar4[2] = 33.3f;
			iVar8 = 75;
		}
	}
	if (GlobalFunc_891(11))
	{
		if (iParam0 == 2)
		{
			iVar0[0] = 235;
			fVar4[0] = 33.3f;
			iVar0[1] = 237;
			fVar4[1] = 33.3f;
			iVar0[2] = 236;
			fVar4[2] = 33.3f;
			iVar8 = 11;
		}
	}
	if (iVar8 != -1)
	{
		if (func_566(iParam0, &iVar0, &fVar4, uParam1, uParam2, uParam3, uParam4, 0, 1))
		{
			return *uParam1 != 318;
		}
	}
	return 0;
}

bool func_614(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x77AA2
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_613(1, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			func_622(uParam0, uParam1, uParam2, uParam3, 494877/*func_623*/, bParam4);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_620(uParam0, uParam1, uParam2, uParam3, 494360/*func_621*/, bParam4);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			func_618(uParam0, uParam1, uParam2, uParam3, 492955/*func_619*/, bParam4);
			break;
		
		case 21:
		case 22:
		case 23:
		case 0:
		case 1:
		case 2:
			func_615(uParam0, uParam1, uParam2, uParam3, 491276/*func_616*/, bParam4);
			break;
	}
	return *uParam0 != 318;
}

bool func_615(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x77BCC
{
	int iVar0;
	int iVar1[13];
	float fVar15[13];
	int iVar29[9];
	float fVar39[9];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		iVar1[0] = 221;
		fVar15[0] = 10f;
		if (GlobalFunc_230(43))
		{
			iVar1[1] = 218;
			fVar15[1] = 1f;
			iVar1[2] = 219;
			fVar15[2] = 1f;
			iVar1[3] = 220;
			fVar15[3] = 1f;
			iVar1[4] = 225;
			fVar15[3] = 5f;
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 218, 219, 220, 225, 196, 318))
			{
				return func_607(iVar0, *uParam0, 3);
			}
		}
		else
		{
			iVar1[1] = 318;
			fVar15[1] = 0f;
			iVar1[2] = 318;
			fVar15[2] = 0f;
			iVar1[3] = 318;
			fVar15[3] = 0f;
			iVar1[4] = 318;
			fVar15[4] = 0f;
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 196, 318, 318, 318, 318, 318))
			{
				return func_607(iVar0, *uParam0, 3);
			}
		}
		iVar1[5] = 226;
		fVar15[5] = 1f;
		iVar1[6] = 227;
		fVar15[6] = 1f;
		iVar1[7] = 228;
		fVar15[7] = 1f;
		iVar1[8] = 229;
		fVar15[8] = 1f;
		iVar1[9] = 230;
		fVar15[9] = 1f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[10] = 222;
			fVar15[10] = 5f;
			iVar1[11] = 223;
			fVar15[11] = 5f;
			iVar1[12] = 224;
			fVar15[12] = 5f;
		}
		else
		{
			iVar1[10] = 318;
			fVar15[10] = 0f;
			iVar1[11] = 318;
			fVar15[11] = 0f;
			iVar1[12] = 318;
			fVar15[12] = 0f;
		}
		if (func_566(iVar0, &iVar1, &fVar15, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_607(iVar0, *uParam0, 3);
	}
	iVar29[0] = 221;
	fVar39[0] = 14.2f;
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar29[1] = 222;
		fVar39[1] = 4.7f;
		iVar29[2] = 223;
		fVar39[2] = 4.7f;
		iVar29[3] = 224;
		fVar39[3] = 4.7f;
	}
	else
	{
		iVar29[1] = 318;
		fVar39[1] = 0f;
		iVar29[2] = 318;
		fVar39[2] = 0f;
		iVar29[3] = 318;
		fVar39[3] = 0f;
	}
	iVar29[4] = 226;
	fVar39[4] = 13.5f;
	iVar29[5] = 227;
	fVar39[5] = 13.5f;
	iVar29[6] = 228;
	fVar39[6] = 13.5f;
	iVar29[7] = 229;
	fVar39[7] = 13.5f;
	iVar29[8] = 230;
	fVar39[8] = 13.5f;
	if (func_566(iVar0, &iVar29, &fVar39, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_616(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x77F0C
{
	return func_622(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_617(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x77F26
{
	*uParam0 = 318;
	*uParam1 = -1f;
	uParam2->f_2 = uParam2->f_2;
	uParam3->f_111 = uParam3->f_111;
	uParam4 = uParam4;
	return *uParam0 != 318;
}

bool func_618(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x77F53
{
	int iVar0;
	int iVar1[29];
	float fVar31[29];
	int iVar61[30];
	float fVar92[30];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (GlobalFunc_230(43))
		{
			iVar1[0] = 218;
			fVar31[0] = 3.8f;
			iVar1[1] = 219;
			fVar31[1] = 3.8f;
			iVar1[2] = 220;
			fVar31[2] = 3.8f;
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 218, 219, 220, 196, 318, 318))
			{
				return func_607(iVar0, *uParam0, 2);
			}
		}
		else
		{
			iVar1[0] = 318;
			fVar31[0] = 0f;
			iVar1[1] = 318;
			fVar31[1] = 0f;
			iVar1[2] = 318;
			fVar31[2] = 0f;
			iVar1[3] = 318;
			fVar31[3] = 0f;
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 196, 318, 318, 318, 318, 318))
			{
				return func_607(iVar0, *uParam0, 2);
			}
		}
		iVar1[4] = 208;
		fVar31[4] = 5f;
		iVar1[5] = 209;
		fVar31[5] = 5f;
		iVar1[6] = 210;
		fVar31[6] = 5f;
		if (GlobalFunc_485(118))
		{
			iVar1[7] = 211;
			fVar31[7] = 2f;
			iVar1[8] = 216;
			fVar31[8] = 2f;
			iVar1[9] = 217;
			fVar31[9] = 2f;
		}
		else
		{
			iVar1[7] = 318;
			fVar31[7] = 0f;
			iVar1[8] = 318;
			fVar31[8] = 0f;
			iVar1[9] = 318;
			fVar31[9] = 0f;
		}
		iVar1[10] = 192;
		fVar31[10] = 2f;
		iVar1[11] = 193;
		fVar31[11] = 2f;
		iVar1[12] = 194;
		fVar31[12] = 2f;
		iVar1[13] = 195;
		fVar31[13] = 2f;
		iVar1[14] = 198;
		fVar31[14] = 6f;
		iVar1[15] = 200;
		fVar31[15] = 2f;
		iVar1[16] = 201;
		fVar31[16] = 2f;
		iVar1[17] = 212;
		fVar31[17] = 6f;
		iVar1[18] = 226;
		fVar31[18] = 1.5f;
		iVar1[19] = 227;
		fVar31[19] = 1.5f;
		iVar1[20] = 228;
		fVar31[20] = 1.5f;
		iVar1[21] = 229;
		fVar31[21] = 1.5f;
		iVar1[22] = 230;
		fVar31[22] = 1.5f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[23] = 222;
			fVar31[23] = 6f;
			iVar1[24] = 223;
			fVar31[24] = 5f;
			iVar1[25] = 224;
			fVar31[25] = 6f;
		}
		else
		{
			iVar1[23] = 318;
			fVar31[23] = 0f;
			iVar1[24] = 318;
			fVar31[24] = 0f;
			iVar1[25] = 318;
			fVar31[25] = 0f;
		}
		if (GlobalFunc_485(63))
		{
			iVar1[26] = 203;
			fVar31[26] = 6f;
			iVar1[27] = 204;
			fVar31[27] = 6f;
		}
		else
		{
			iVar1[26] = 318;
			fVar31[26] = 0f;
			iVar1[27] = 318;
			fVar31[27] = 0f;
		}
		if (func_566(iVar0, &iVar1, &fVar31, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_607(iVar0, *uParam0, 2);
	}
	iVar61[0] = 202;
	fVar92[0] = 4.3f;
	iVar61[1] = 208;
	fVar92[1] = 1.4f;
	iVar61[2] = 209;
	fVar92[2] = 1.4f;
	iVar61[3] = 210;
	fVar92[3] = 1.4f;
	if (GlobalFunc_485(118))
	{
		iVar61[4] = 213;
		fVar92[4] = 1.4f;
		iVar61[5] = 216;
		fVar92[5] = 1.4f;
		iVar61[6] = 217;
		fVar92[6] = 1.4f;
	}
	else
	{
		iVar61[4] = 318;
		fVar92[4] = 0f;
		iVar61[5] = 318;
		fVar92[5] = 0f;
		iVar61[6] = 318;
		fVar92[6] = 0f;
	}
	iVar61[7] = 192;
	fVar92[7] = 4.3f;
	iVar61[8] = 193;
	fVar92[8] = 4.3f;
	iVar61[9] = 194;
	fVar92[9] = 4.3f;
	iVar61[10] = 195;
	fVar92[10] = 4.3f;
	iVar61[11] = 199;
	fVar92[11] = 4.3f;
	iVar61[12] = 200;
	fVar92[12] = 2.15f;
	iVar61[13] = 201;
	fVar92[13] = 2.15f;
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar61[14] = 222;
		fVar92[14] = 1.4f;
		iVar61[15] = 223;
		fVar92[15] = 1.4f;
		iVar61[16] = 224;
		fVar92[16] = 1.4f;
	}
	else
	{
		iVar61[14] = 318;
		fVar92[14] = 0f;
		iVar61[15] = 318;
		fVar92[15] = 0f;
		iVar61[16] = 318;
		fVar92[16] = 0f;
	}
	iVar61[17] = 226;
	fVar92[17] = 7f;
	iVar61[18] = 227;
	fVar92[18] = 7f;
	iVar61[19] = 228;
	fVar92[19] = 7f;
	iVar61[20] = 229;
	fVar92[20] = 7f;
	iVar61[21] = 230;
	fVar92[21] = 7f;
	if (GlobalFunc_485(63))
	{
		iVar61[22] = 205;
		fVar92[22] = 4.3f;
	}
	else
	{
		iVar61[22] = 318;
		fVar92[22] = 0f;
	}
	iVar61[23] = 191;
	fVar92[23] = 8.3f;
	iVar61[24] = 188;
	fVar92[24] = 8.3f;
	iVar61[25] = 189;
	fVar92[25] = 8.3f;
	iVar61[26] = 214;
	fVar92[26] = 8.3f;
	iVar61[27] = 190;
	fVar92[27] = 8.3f;
	iVar61[28] = 186;
	fVar92[28] = 8.3f;
	iVar61[29] = 187;
	fVar92[29] = 8.2f;
	if (func_566(iVar0, &iVar61, &fVar92, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_619(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7859B
{
	return func_615(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_620(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x785B5
{
	int iVar0;
	int iVar1[20];
	float fVar22[20];
	int iVar43[25];
	float fVar69[25];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 196, 318, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 1);
		}
		iVar1[0] = 192;
		fVar22[0] = 6.2f;
		iVar1[1] = 193;
		fVar22[1] = 6.2f;
		iVar1[2] = 194;
		fVar22[2] = 6.2f;
		iVar1[3] = 195;
		fVar22[3] = 6.2f;
		iVar1[4] = 198;
		fVar22[4] = 9.6f;
		iVar1[5] = 200;
		fVar22[5] = 3.3f;
		iVar1[6] = 201;
		fVar22[6] = 3.3f;
		iVar1[7] = 208;
		fVar22[7] = 1.6f;
		iVar1[8] = 209;
		fVar22[8] = 1.6f;
		iVar1[9] = 210;
		fVar22[9] = 1.6f;
		if (GlobalFunc_485(118))
		{
			iVar1[10] = 211;
			fVar22[10] = 1.6f;
			iVar1[11] = 216;
			fVar22[11] = 1.6f;
			iVar1[12] = 217;
			fVar22[12] = 1.6f;
		}
		else
		{
			iVar1[10] = 318;
			fVar22[10] = 0f;
			iVar1[11] = 318;
			fVar22[11] = 0f;
			iVar1[12] = 318;
			fVar22[12] = 0f;
		}
		iVar1[13] = 202;
		fVar22[13] = 6.6f;
		iVar1[14] = 212;
		fVar22[14] = 6.6f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[15] = 222;
			fVar22[15] = 7.2f;
			iVar1[16] = 223;
			fVar22[16] = 7.2f;
			iVar1[17] = 224;
			fVar22[17] = 7.2f;
		}
		else
		{
			iVar1[15] = 318;
			fVar22[15] = 0f;
			iVar1[16] = 318;
			fVar22[16] = 0f;
			iVar1[17] = 318;
			fVar22[17] = 0f;
		}
		if (GlobalFunc_485(63))
		{
			iVar1[18] = 203;
			fVar22[18] = 6.6f;
			iVar1[19] = 204;
			fVar22[19] = 6.6f;
		}
		else
		{
			iVar1[18] = 318;
			fVar22[18] = 0f;
			iVar1[19] = 318;
			fVar22[19] = 0f;
		}
		if (func_566(1, &iVar1, &fVar22, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_607(iVar0, *uParam0, 1);
	}
	iVar43[0] = 192;
	fVar69[0] = 1.5f;
	iVar43[1] = 193;
	fVar69[1] = 1.5f;
	iVar43[2] = 194;
	fVar69[2] = 1.5f;
	iVar43[3] = 195;
	fVar69[3] = 1.5f;
	iVar43[4] = 199;
	fVar69[4] = 4.5f;
	iVar43[5] = 202;
	fVar69[5] = 4.5f;
	iVar43[6] = 208;
	fVar69[6] = 1.5f;
	iVar43[7] = 209;
	fVar69[7] = 1.5f;
	iVar43[8] = 210;
	fVar69[8] = 1.5f;
	if (GlobalFunc_485(118))
	{
		iVar43[9] = 213;
		fVar69[9] = 1.5f;
		iVar43[10] = 216;
		fVar69[10] = 1.5f;
		iVar43[11] = 217;
		fVar69[11] = 1.5f;
	}
	else
	{
		iVar43[9] = 318;
		fVar69[9] = 0f;
		iVar43[10] = 318;
		fVar69[10] = 0f;
		iVar43[11] = 318;
		fVar69[11] = 0f;
	}
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar43[12] = 222;
		fVar69[12] = 1.5f;
		iVar43[13] = 223;
		fVar69[13] = 1.5f;
		iVar43[14] = 224;
		fVar69[14] = 1.5f;
	}
	else
	{
		iVar43[12] = 318;
		fVar69[12] = 0f;
		iVar43[13] = 318;
		fVar69[13] = 0f;
		iVar43[14] = 318;
		fVar69[14] = 0f;
	}
	iVar43[15] = 184;
	fVar69[15] = 6.5f;
	iVar43[16] = 185;
	fVar69[16] = 6.5f;
	if (GlobalFunc_485(63))
	{
		iVar43[17] = 205;
		fVar69[17] = 1.5f;
	}
	else
	{
		iVar43[17] = 318;
		fVar69[17] = 0f;
	}
	iVar43[18] = 191;
	fVar69[18] = 8.5f;
	iVar43[19] = 188;
	fVar69[19] = 8.5f;
	iVar43[20] = 189;
	fVar69[20] = 8.5f;
	iVar43[21] = 214;
	fVar69[21] = 4.5f;
	iVar43[22] = 190;
	fVar69[22] = 8.5f;
	iVar43[23] = 186;
	fVar69[23] = 8.5f;
	iVar43[24] = 187;
	fVar69[24] = 8.5f;
	if (func_566(1, &iVar43, &fVar69, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_621(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x78B18
{
	return func_618(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_622(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x78B32
{
	int iVar0;
	int iVar1[6];
	float fVar8[6];
	int iVar15[8];
	float fVar24[8];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 196, 318, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 0);
		}
		iVar1[0] = 175;
		fVar8[0] = 30f;
		iVar1[1] = 179;
		fVar8[1] = 10f;
		iVar1[2] = 181;
		fVar8[2] = 10f;
		iVar1[3] = 182;
		fVar8[3] = 10f;
		iVar1[4] = 225;
		fVar8[4] = 10f;
		iVar1[5] = 221;
		fVar8[5] = 10f;
		if (func_566(1, &iVar1, &fVar8, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_607(iVar0, *uParam0, 0);
	}
	iVar15[0] = 176;
	fVar24[0] = (50f / 3f);
	iVar15[1] = 177;
	fVar24[1] = (50f / 3f);
	iVar15[2] = 178;
	fVar24[2] = (50f / 3f);
	iVar15[3] = 180;
	fVar24[3] = 10f;
	iVar15[4] = 191;
	fVar24[4] = 10f;
	iVar15[5] = 215;
	fVar24[5] = 10f;
	iVar15[6] = 188;
	fVar24[6] = 10f;
	iVar15[7] = 183;
	fVar24[7] = 10f;
	if (func_566(1, &iVar15, &fVar24, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_623(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x78D1D
{
	return func_620(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_624(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x78D37
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_613(0, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			func_635(uParam0, uParam1, uParam2, uParam3, 502133/*func_636*/, bParam4);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			func_630(uParam0, uParam1, uParam2, uParam3, 501090/*func_634*/, bParam4);
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_628(uParam0, uParam1, uParam2, uParam3, 498235/*func_629*/, bParam4);
			break;
		
		case 20:
		case 21:
		case 22:
		case 23:
			func_625(uParam0, uParam1, uParam2, uParam3, 496555/*func_627*/, bParam4);
			break;
	}
	return *uParam0 != 318;
}

bool func_625(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x78E61
{
	int iVar0;
	int iVar1;
	int iVar2[12];
	float fVar15[12];
	int iVar28[10];
	float fVar39[10];
	int iVar50[11];
	float fVar62[11];
	int iVar74[9];
	float fVar84[9];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 91;
		fVar15[0] = 8f;
		iVar2[1] = 86;
		fVar15[1] = 14f;
		iVar2[2] = 103;
		fVar15[2] = 1f;
		iVar2[3] = 104;
		fVar15[3] = 1f;
		iVar2[4] = 112;
		fVar15[4] = 1f;
		iVar2[5] = 113;
		fVar15[5] = 1f;
		if (GlobalFunc_230(17))
		{
			iVar2[6] = 121;
			fVar15[6] = 8f;
		}
		else
		{
			iVar2[6] = 318;
			fVar15[6] = 0f;
		}
		iVar2[7] = 122;
		fVar15[7] = 10f;
		if (GlobalFunc_230(18) && !GlobalFunc_230(20))
		{
			iVar2[8] = 100;
			fVar15[8] = 21f;
		}
		else
		{
			iVar2[8] = 318;
			fVar15[8] = 0f;
		}
		iVar2[9] = 125;
		fVar15[9] = 7f;
		iVar2[10] = 140;
		fVar15[10] = (5f / 2f);
		iVar2[11] = 141;
		fVar15[11] = (5f / 2f);
		if (GlobalFunc_230(18) && !GlobalFunc_230(20))
		{
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 122, 100, 125, 318, 318, 318))
			{
				return func_607(iVar0, *uParam0, 0);
			}
		}
		else if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 122, 125, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 0);
		}
		if (func_566(iVar0, &iVar2, &fVar15, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar28[0] = 91;
		fVar39[0] = 4f;
		iVar28[1] = 92;
		fVar39[1] = 3f;
		iVar28[2] = 93;
		fVar39[2] = 3f;
		iVar28[3] = 103;
		fVar39[3] = 5f;
		iVar28[4] = 104;
		fVar39[4] = 5f;
		iVar28[5] = 112;
		fVar39[5] = 5f;
		iVar28[6] = 113;
		fVar39[6] = 5f;
		iVar28[7] = 123;
		fVar39[7] = 10f;
		iVar28[8] = 125;
		fVar39[8] = 10f;
		iVar28[9] = 124;
		fVar39[9] = 10f;
		if (func_566(iVar0, &iVar28, &fVar39, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar50[0] = 130;
		fVar62[0] = 20f;
		iVar50[1] = 131;
		fVar62[1] = 30f;
		iVar50[2] = 132;
		fVar62[2] = 30f;
		iVar50[3] = 135;
		fVar62[3] = 4f;
		iVar50[4] = 136;
		fVar62[4] = 4f;
		iVar50[5] = 137;
		fVar62[5] = 4f;
		iVar50[6] = 138;
		fVar62[6] = 4f;
		iVar50[7] = 139;
		fVar62[7] = 4f;
		iVar50[8] = 142;
		fVar62[8] = 5f;
		iVar50[9] = 143;
		fVar62[9] = 5f;
		iVar50[10] = 150;
		fVar62[10] = 20f;
		if (func_566(iVar0, &iVar50, &fVar62, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar74[0] = 151;
		fVar84[0] = 10f;
		if (GlobalFunc_230(iLocal_40))
		{
			iVar74[1] = 157;
			fVar84[1] = 20f;
		}
		else
		{
			iVar74[1] = 318;
			fVar84[1] = 0f;
		}
		iVar74[2] = 163;
		fVar84[2] = 10f;
		iVar74[3] = 165;
		fVar84[3] = 5f;
		iVar74[4] = 166;
		fVar84[4] = 5f;
		iVar74[5] = 167;
		fVar84[5] = 5f;
		iVar74[6] = 168;
		fVar84[6] = 15f;
		iVar74[7] = 169;
		fVar84[7] = 15f;
		iVar74[8] = 158;
		fVar84[8] = 15f;
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 165, 156, 168, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 0);
		}
		if (func_566(iVar0, &iVar74, &fVar84, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}


bool func_627(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x793AB
{
	return func_635(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_628(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x793C5
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	float fVar19[16];
	int iVar36[25];
	float fVar62[25];
	int iVar88[13];
	float fVar102[13];
	int iVar116[19];
	float fVar136[19];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 103;
		fVar19[0] = 9f;
		iVar2[1] = 104;
		fVar19[1] = 5f;
		iVar2[2] = 105;
		fVar19[2] = 7f;
		iVar2[3] = 106;
		fVar19[3] = 9f;
		iVar2[4] = 107;
		fVar19[4] = 7f;
		iVar2[5] = 108;
		fVar19[5] = 5f;
		iVar2[6] = 109;
		fVar19[6] = 1f;
		iVar2[7] = 110;
		fVar19[7] = 5f;
		iVar2[8] = 111;
		fVar19[8] = 5f;
		iVar2[9] = 112;
		fVar19[9] = 5f;
		iVar2[10] = 113;
		fVar19[10] = 5f;
		if (GlobalFunc_230(17))
		{
			iVar2[11] = 121;
			fVar19[11] = 10f;
		}
		else
		{
			iVar2[11] = 318;
			fVar19[11] = 0f;
		}
		iVar2[12] = 122;
		fVar19[12] = 16f;
		iVar2[13] = 94;
		fVar19[13] = 5f;
		iVar2[14] = 140;
		fVar19[14] = (2f / 2f);
		iVar2[15] = 141;
		fVar19[15] = (2f / 2f);
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 122, 94, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 3);
		}
		if (func_566(iVar0, &iVar2, &fVar19, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar36[0] = 82;
		fVar62[0] = 10f;
		iVar36[1] = 83;
		fVar62[1] = 10.5f;
		iVar36[2] = 91;
		fVar62[2] = 3f;
		iVar36[3] = 92;
		fVar62[3] = 3f;
		iVar36[4] = 93;
		fVar62[4] = 3f;
		iVar36[5] = 103;
		fVar62[5] = 3f;
		iVar36[6] = 104;
		fVar62[6] = 3f;
		iVar36[7] = 105;
		fVar62[7] = 3f;
		iVar36[8] = 106;
		fVar62[8] = 3f;
		iVar36[9] = 107;
		fVar62[9] = 4f;
		iVar36[10] = 108;
		fVar62[10] = 1.5f;
		iVar36[11] = 109;
		fVar62[11] = 1f;
		iVar36[12] = 110;
		fVar62[12] = 1f;
		iVar36[13] = 111;
		fVar62[13] = 1f;
		iVar36[14] = 112;
		fVar62[14] = 1.5f;
		iVar36[15] = 113;
		fVar62[15] = 1.5f;
		iVar36[16] = 115;
		fVar62[16] = 4f;
		iVar36[17] = 116;
		fVar62[17] = 3f;
		iVar36[18] = 117;
		fVar62[18] = 3f;
		iVar36[19] = 123;
		fVar62[19] = 4f;
		iVar36[20] = 95;
		fVar62[20] = 2.5f;
		iVar36[21] = 96;
		fVar62[21] = 2.5f;
		iVar36[22] = 97;
		fVar62[22] = 5f;
		iVar36[23] = 125;
		fVar62[23] = 8f;
		iVar36[23] = 124;
		fVar62[23] = 8f;
		if (func_566(iVar0, &iVar36, &fVar62, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar88[0] = 130;
		fVar102[0] = 20f;
		iVar88[1] = 131;
		fVar102[2] = 15f;
		iVar88[2] = 132;
		fVar102[2] = 15f;
		iVar88[3] = 133;
		fVar102[3] = 20f;
		iVar88[4] = 134;
		fVar102[4] = 15f;
		iVar88[5] = 135;
		fVar102[5] = 4f;
		iVar88[6] = 136;
		fVar102[6] = 4f;
		iVar88[7] = 137;
		fVar102[7] = 4f;
		iVar88[8] = 138;
		fVar102[8] = 4f;
		iVar88[9] = 139;
		fVar102[9] = 4f;
		iVar88[10] = 148;
		fVar102[10] = 1.5f;
		iVar88[11] = 149;
		fVar102[11] = 1.5f;
		iVar88[12] = 150;
		fVar102[12] = 7.5f;
		if (func_566(iVar0, &iVar88, &fVar102, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar116[0] = 151;
		fVar136[0] = 10f;
		iVar116[3] = 164;
		fVar136[3] = 5f;
		iVar116[4] = 165;
		fVar136[4] = 5f;
		iVar116[5] = 166;
		fVar136[5] = 5f;
		iVar116[6] = 167;
		fVar136[6] = 5f;
		iVar116[7] = 168;
		fVar136[7] = 5f;
		iVar116[8] = 169;
		fVar136[8] = 5f;
		iVar116[9] = 170;
		fVar136[9] = 5f;
		iVar116[10] = 171;
		fVar136[10] = 5f;
		iVar116[11] = 172;
		fVar136[11] = 5f;
		if (GlobalFunc_230(iLocal_40))
		{
			iVar116[1] = 153;
			fVar136[1] = (5f / 2f);
			iVar116[2] = 154;
			fVar136[2] = (5f / 2f);
			iVar116[12] = 157;
			fVar136[12] = 5f;
		}
		else
		{
			iVar116[1] = 318;
			fVar136[1] = 0f;
			iVar116[2] = 318;
			fVar136[2] = 0f;
			iVar116[12] = 318;
			fVar136[12] = 0f;
		}
		iVar116[13] = 152;
		fVar136[13] = 10f;
		iVar116[14] = 173;
		fVar136[14] = 5f;
		iVar116[15] = 156;
		fVar136[15] = 10f;
		iVar116[16] = 161;
		fVar136[16] = 5f;
		iVar116[17] = 155;
		fVar136[17] = 5f;
		if (GlobalFunc_230(iLocal_40))
		{
			if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 170, 171, 172, 168, 318, 318))
			{
				return func_607(iVar0, *uParam0, 3);
			}
		}
		else if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 170, 171, 172, 156, 318, 318))
		{
			return func_607(iVar0, *uParam0, 3);
		}
		if (func_566(iVar0, &iVar116, &fVar136, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}

bool func_629(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x79A3B
{
	return func_625(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_630(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x79A55
{
	int iVar0;
	int iVar1;
	int iVar2[30];
	float fVar33[30];
	int iVar64[23];
	float fVar88[23];
	int iVar112[14];
	float fVar127[14];
	int iVar142[12];
	float fVar155[12];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 87;
		fVar33[0] = 1.5f;
		iVar2[1] = 88;
		fVar33[1] = 1.5f;
		if (GlobalFunc_892(0, 2))
		{
			iVar2[2] = 81;
			fVar33[2] = 2f;
		}
		else
		{
			iVar2[2] = 318;
			fVar33[2] = 0f;
		}
		iVar2[3] = 103;
		fVar33[3] = 1f;
		iVar2[4] = 104;
		fVar33[4] = 1f;
		iVar2[5] = 105;
		fVar33[5] = 1f;
		iVar2[6] = 106;
		fVar33[6] = 1f;
		iVar2[7] = 107;
		fVar33[7] = 1f;
		iVar2[8] = 108;
		fVar33[8] = 2f;
		iVar2[9] = 109;
		fVar33[9] = 1f;
		iVar2[10] = 98;
		fVar33[10] = 10.5f;
		if (GlobalFunc_230(18))
		{
			if (!GlobalFunc_230(20))
			{
				iVar2[11] = 99;
				fVar33[11] = 10.5f;
			}
			else
			{
				iVar2[11] = 318;
				fVar33[11] = 0f;
			}
			iVar2[12] = 101;
			fVar33[12] = 10.5f;
			iVar2[13] = 102;
			fVar33[13] = 10.5f;
		}
		else
		{
			iVar2[11] = 318;
			fVar33[11] = 0f;
			iVar2[12] = 318;
			fVar33[12] = 0f;
			iVar2[13] = 318;
			fVar33[13] = 0f;
		}
		iVar2[14] = 110;
		fVar33[14] = 3f;
		iVar2[15] = 111;
		fVar33[15] = 2f;
		iVar2[16] = 115;
		fVar33[16] = 1f;
		iVar2[17] = 116;
		fVar33[17] = 1f;
		iVar2[18] = 117;
		fVar33[18] = 1f;
		if (GlobalFunc_230(19))
		{
			iVar2[19] = 118;
			fVar33[19] = 2f;
			iVar2[20] = 119;
			fVar33[20] = 2f;
			iVar2[21] = 120;
			fVar33[21] = 2f;
		}
		else
		{
			iVar2[19] = 318;
			fVar33[19] = 0f;
			iVar2[20] = 318;
			fVar33[20] = 0f;
			iVar2[21] = 318;
			fVar33[21] = 0f;
		}
		iVar2[22] = 94;
		fVar33[22] = 10f;
		iVar2[24] = 114;
		fVar33[24] = 5f;
		if (GlobalFunc_230(17))
		{
			iVar2[25] = 121;
			fVar33[25] = 1f;
		}
		else
		{
			iVar2[25] = 318;
			fVar33[25] = 0f;
		}
		iVar2[26] = 122;
		fVar33[26] = 5f;
		iVar2[27] = 140;
		fVar33[27] = (2f / 2f);
		iVar2[28] = 141;
		fVar33[28] = (2f / 2f);
		iVar2[29] = 80;
		fVar33[29] = 10f;
		if (GlobalFunc_230(18))
		{
			if (!GlobalFunc_230(20))
			{
				if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 99, 101, 102, 122, 318))
				{
					return func_607(iVar0, *uParam0, 2);
				}
			}
			else if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 101, 102, 122, 318, 318))
			{
				return func_607(iVar0, *uParam0, 2);
			}
		}
		else if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 122, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 2);
		}
		if (func_566(iVar0, &iVar2, &fVar33, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar64[0] = 82;
		fVar88[0] = 10.5f;
		iVar64[1] = 83;
		fVar88[1] = 10.5f;
		iVar64[2] = 87;
		fVar88[2] = 5f;
		iVar64[3] = 88;
		fVar88[3] = 5f;
		iVar64[4] = 91;
		fVar88[4] = 2.5f;
		iVar64[5] = 92;
		fVar88[5] = 2.5f;
		iVar64[6] = 103;
		fVar88[6] = 2.5f;
		iVar64[7] = 104;
		fVar88[7] = 2.5f;
		iVar64[8] = 105;
		fVar88[8] = 2f;
		iVar64[9] = 106;
		fVar88[9] = 2f;
		iVar64[10] = 107;
		fVar88[10] = 2f;
		iVar64[11] = 108;
		fVar88[11] = 2f;
		iVar64[12] = 109;
		fVar88[12] = 1f;
		iVar64[13] = 110;
		fVar88[13] = 2f;
		iVar64[14] = 112;
		fVar88[14] = 2f;
		iVar64[15] = 113;
		fVar88[15] = 2f;
		iVar64[16] = 115;
		fVar88[16] = 3f;
		iVar64[17] = 116;
		fVar88[17] = 3f;
		iVar64[18] = 117;
		fVar88[18] = 2f;
		iVar64[19] = 95;
		fVar88[19] = 10f;
		iVar64[20] = 96;
		fVar88[20] = 5f;
		iVar64[21] = 97;
		fVar88[21] = 10f;
		iVar64[22] = 124;
		fVar88[22] = 10f;
		if (func_566(iVar0, &iVar64, &fVar88, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar112[0] = 129;
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2708[0 /*166*/][12 /*11*/][(32 / 32)], (32 % 32)))
		{
			fVar127[0] = (20f * 2f);
		}
		else
		{
			fVar127[0] = 20f;
		}
		iVar112[1] = 131;
		fVar127[1] = 20f;
		iVar112[2] = 132;
		fVar127[2] = 20f;
		iVar112[3] = 133;
		fVar127[3] = 15f;
		iVar112[4] = 134;
		fVar127[4] = 15f;
		iVar112[5] = 135;
		fVar127[5] = 3f;
		iVar112[6] = 136;
		fVar127[6] = 3f;
		iVar112[7] = 137;
		fVar127[7] = 3f;
		iVar112[8] = 138;
		fVar127[8] = 3f;
		iVar112[9] = 139;
		fVar127[9] = 3f;
		iVar112[10] = 146;
		fVar127[10] = 1.5f;
		iVar112[11] = 147;
		fVar127[11] = 1.5f;
		iVar112[12] = 84;
		fVar127[12] = 2.5f;
		iVar112[13] = 150;
		fVar127[13] = 15f;
		if (func_566(iVar0, &iVar112, &fVar127, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar142[0] = 151;
		fVar155[0] = 10f;
		iVar142[1] = 162;
		fVar155[1] = 15f;
		iVar142[2] = 164;
		fVar155[2] = 15f;
		iVar142[3] = 170;
		fVar155[3] = 3.33f;
		iVar142[4] = 171;
		fVar155[4] = 3.33f;
		iVar142[5] = 172;
		fVar155[5] = 3.33f;
		iVar142[6] = 153;
		fVar155[6] = (5f / 2f);
		iVar142[7] = 154;
		fVar155[7] = (5f / 2f);
		if (GlobalFunc_8899(0))
		{
			iVar142[8] = 159;
			fVar155[8] = 10f;
		}
		else
		{
			iVar142[8] = 318;
			fVar155[8] = 0f;
		}
		iVar142[9] = 160;
		fVar155[9] = 10f;
		iVar142[10] = 161;
		fVar155[10] = 10f;
		iVar142[11] = 155;
		fVar155[11] = 15f;
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 153, 154, 161, 155, 156, 168))
		{
			return func_607(iVar0, *uParam0, 2);
		}
		if (func_566(iVar0, &iVar142, &fVar155, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}




bool func_634(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7A562
{
	return func_628(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

bool func_635(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x7A57C
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	float fVar13[10];
	int iVar24[9];
	float fVar34[9];
	int iVar44[11];
	float fVar56[11];
	int iVar68[5];
	float fVar74[5];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 77;
		fVar13[0] = 25f;
		iVar2[1] = 78;
		fVar13[1] = 25f;
		iVar2[2] = 89;
		fVar13[2] = 7f;
		iVar2[3] = 90;
		fVar13[3] = 3f;
		iVar2[4] = 85;
		fVar13[4] = 15f;
		iVar2[5] = 79;
		fVar13[5] = 12f;
		iVar2[6] = 140;
		fVar13[6] = (2f / 2f);
		iVar2[7] = 141;
		fVar13[7] = (2f / 2f);
		if (GlobalFunc_8043() > 4)
		{
			iVar2[8] = 108;
			fVar13[8] = 2f;
			iVar2[9] = 109;
			fVar13[9] = 1f;
		}
		else
		{
			iVar2[8] = 318;
			fVar13[8] = 0f;
			iVar2[9] = 318;
			fVar13[9] = 0f;
		}
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 318, 318, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 1);
		}
		if (func_566(iVar0, &iVar2, &fVar13, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar24[0] = 82;
		fVar34[0] = 30f;
		iVar24[1] = 83;
		fVar34[1] = 30f;
		iVar24[2] = 85;
		fVar34[2] = 30f;
		iVar24[3] = 91;
		fVar34[3] = 3f;
		iVar24[4] = 92;
		fVar34[4] = 3f;
		iVar24[5] = 93;
		fVar34[5] = 3f;
		iVar24[6] = 112;
		fVar34[6] = 3f;
		iVar24[7] = 113;
		fVar34[7] = 3f;
		iVar24[8] = 124;
		fVar34[8] = 3f;
		if (func_566(iVar0, &iVar24, &fVar34, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar44[0] = 126;
		fVar56[0] = 20f;
		iVar44[1] = 127;
		fVar56[1] = 10f;
		iVar44[2] = 135;
		fVar56[2] = 2f;
		iVar44[3] = 136;
		fVar56[3] = 2f;
		iVar44[4] = 137;
		fVar56[4] = 2f;
		iVar44[5] = 138;
		fVar56[5] = 2f;
		iVar44[6] = 139;
		fVar56[6] = 2f;
		iVar44[7] = 128;
		fVar56[7] = 10f;
		iVar44[8] = 144;
		fVar56[8] = 2.5f;
		iVar44[9] = 145;
		fVar56[9] = 2.5f;
		iVar44[10] = 150;
		fVar56[10] = 10f;
		if (func_566(iVar0, &iVar44, &fVar56, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar68[0] = 85;
		fVar74[0] = 15f;
		iVar68[1] = 163;
		fVar74[1] = 25f;
		iVar68[2] = 169;
		fVar74[2] = 20f;
		iVar68[3] = 168;
		fVar74[3] = 20f;
		iVar68[4] = 158;
		fVar74[4] = 20f;
		if (func_608(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 169, 168, 318, 318, 318, 318))
		{
			return func_607(iVar0, *uParam0, 1);
		}
		if (func_566(iVar0, &iVar68, &fVar74, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}

bool func_636(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7A975
{
	return func_630(uParam0, uParam1, uParam2, uParam3, 491302/*func_617*/, bParam4);
}

void func_637(int iParam0)//Position - 0x7A98F
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
		func_341(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
				func_341(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}















void func_652()//Position - 0x7BC66
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 317)
	{
		if (func_653(iVar0, &Var1))
		{
			Global_88538[iVar0 /*3*/] = { Var1 };
		}
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		Global_2544853[iVar4] = -1;
		iVar4++;
	}
	if (!Global_SAVE_DATA.FAMILY_SAVED_DATA.f_16)
	{
		iVar5 = 0;
		while (iVar5 < 15)
		{
			Global_SAVE_DATA.FAMILY_SAVED_DATA[iVar5] = 139;
			iVar5++;
		}
		Global_SAVE_DATA.FAMILY_SAVED_DATA.f_16 = 1;
	}
	iVar5 = 0;
	while (iVar5 < 15)
	{
		Global_85373[iVar5] = 141;
		iVar5++;
	}
}

int func_653(int iParam0, var uParam1)//Position - 0x7BD0A
{
	float fVar0;
	struct<8> Var1;
	int iVar9;
	struct<3> Var10;
	var uVar13;
	struct<3> Var14;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			GlobalFunc_5936(&iVar9);
			if (iVar9 < 5)
			{
				*uParam1 = { Global_85570[iVar9 /*9*/].f_3 };
				return 1;
			}
			else
			{
				*uParam1 = { Global_85570[0 /*9*/].f_3 };
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = { Global_88210[0 /*109*/].f_4 };
			fVar0 = Global_88210[0 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = { Global_88210[1 /*109*/].f_4 };
			fVar0 = Global_88210[1 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = { Global_88210[2 /*109*/].f_4 };
			fVar0 = Global_88210[2 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[0];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 11:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_653(8, uParam1);
			break;
		
		case 10:
			return func_653(8, uParam1);
			break;
		
		case 13:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 14:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 15:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 12:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 20:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 21:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 74:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 23:
			return func_653(208, uParam1);
			break;
		
		case 24:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 67:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 26:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 27:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 28:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 58:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 59:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 60:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 38:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
		
		case 40:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 42:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 43:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 44:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 45:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = { -803.734f, 168.148f, 76.3542f };
			return 1;
			break;
		
		case 47:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 49:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 48:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 124:
			*uParam1 = { -803.734f, 168.148f, 76.3542f };
			return 1;
			break;
		
		case 50:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 51:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 52:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 66:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		
		case 54:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 55:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 56:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 57:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 61:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 62:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 63:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 68:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 69:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 64:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 65:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 70:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 71:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 72:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 73:
			if (GlobalFunc_506(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		
		case 234:
			*uParam1 = { 1970.746f, 3818.998f, 33.42f };
			return 1;
			break;
		
		case 316:
			*uParam1 = { 1971.186f, 3818.968f, 33.4287f };
			return 1;
			break;
		
		case 315:
			*uParam1 = { 1975.312f, 3817.041f, 33.53f };
			return 1;
			break;
		
		case 75:
			*uParam1 = { 1424.304f, -1898.611f, 69.8678f };
			return 1;
			break;
		
		case 76:
			*uParam1 = { 1357.3f, -2267.1f, 61.1f };
			return 1;
			break;
		
		case 77:
			*uParam1 = { -814.246f, 181.264f, 75.7407f };
			return 1;
			break;
		
		case 78:
			*uParam1 = { -813.766f, 181.054f, 76.7504f };
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = { -805.17f, 173.99f, 72.6949f };
			StringCopy(&Var1, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = { -774.9665f, 183.9946f, (71.835f + 0.5f) };
			return 1;
			break;
		
		case 81:
			*uParam1 = { -1313.748f, 121.405f, 56.6578f };
			return 1;
			break;
		
		case 82:
			*uParam1 = { -812.926f, 181.614f, (76.7408f - 0.0097f) };
			return 1;
			break;
		
		case 83:
			*uParam1 = { -813.196f, 181.764f, 76.7407f };
			return 1;
			break;
		
		case 84:
			*uParam1 = { 1968.02f, 3816.76f, 32.4291f };
			return 1;
			break;
		
		case 85:
			*uParam1 = { -802.3999f, 172.44f, 72.8447f };
			return 1;
			break;
		
		case 86:
			*uParam1 = { -805.173f, 173.987f, 72.6876f };
			return 1;
			break;
		
		case 87:
			*uParam1 = { -780.694f, 187.325f, ((72.812f - 1f) + 1f) };
			return 1;
			break;
		
		case 88:
			*uParam1 = { -1353.311f, 355.9345f, 64.0704f };
			return 1;
			break;
		
		case 89:
			*uParam1 = { -826.5596f, 155.8342f, 68.3283f };
			return 1;
			break;
		
		case 90:
			*uParam1 = { -887.9781f, 133.6231f, 58.3423f };
			return 1;
			break;
		
		case 91:
			*uParam1 = { -1210.317f, -955.7397f, 1.6553f };
			return 1;
			break;
		
		case 92:
			*uParam1 = { -848.0614f, 855.916f, 202.5614f };
			return 1;
			break;
		
		case 93:
			*uParam1 = { -1268.64f, -711.4f, 22.4619f };
			return 1;
			break;
		
		case 94:
			*uParam1 = { -117.021f, 361.432f, 111.8857f };
			return 1;
			break;
		
		case 95:
			*uParam1 = { 394.68f, 176.81f, 103.8401f };
			return 1;
			break;
		
		case 96:
			*uParam1 = { -1368.025f, 54.7852f, 52.7046f };
			return 1;
			break;
		
		case 97:
			*uParam1 = { -1415.52f, -198.59f, 47.2507f };
			return 1;
			break;
		
		case 98:
			*uParam1 = { Vector((36.1054f + 1f), -211.7579f, -613.756f) + Vector(-0.0069f, 0.026f, 0.0203f) };
			*uParam1 = { *uParam1 + Vector(-0.0009f, 0.0261f, 0.0164f) };
			fVar0 = (fVar0 + 0.0004f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0264f, 0.0168f) };
			fVar0 = (fVar0 + 0.0015f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0268f, 0.0173f) };
			fVar0 = (fVar0 + 0.0002f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0271f, 0.0179f) };
			fVar0 = (fVar0 + -0.0009f);
			return 1;
			break;
		
		case 99:
			*uParam1 = { -1360.156f, -559.5457f, 29.0697f };
			return 1;
			break;
		
		case 100:
			*uParam1 = { -590.0963f, 270.147f, 81.2426f };
			return 1;
			break;
		
		case 101:
			*uParam1 = { 166.4449f, -211.298f, 53.0941f };
			return 1;
			break;
		
		case 102:
			*uParam1 = { 401.7279f, 308.2417f, 102.5f };
			return 1;
			break;
		
		case 103:
			*uParam1 = { -1731.94f, -1125.13f, (12.0176f + 1f) };
			return 1;
			break;
		
		case 104:
			*uParam1 = { -1927.78f, -579.07f, 11.1705f };
			return 1;
			break;
		
		case 105:
			*uParam1 = { -464.22f, -1592.98f, 38.1269f };
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1744.199f, -625.3162f, 9.8308f };
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1426.91f, -39f, 51.8742f };
			return 1;
			break;
		
		case 108:
			*uParam1 = { 260.98f, 1117.81f, 220.1383f };
			return 1;
			break;
		
		case 109:
			*uParam1 = { -1819.58f, -677.59f, 10.4119f };
			return 1;
			break;
		
		case 110:
			*uParam1 = { -95.55f, -415.1f, 35.6806f };
			return 1;
			break;
		
		case 111:
			*uParam1 = { -1292.701f, -697.2287f, 24.2677f };
			return 1;
			break;
		
		case 112:
			*uParam1 = { 814.98f, 1270.01f, 360.4754f };
			return 1;
			break;
		
		case 113:
			*uParam1 = { -1668.26f, 488.3f, 128.876f };
			return 1;
			break;
		
		case 135:
			*uParam1 = { 667.7f, 3503.7f, 33.9937f };
			return 1;
			break;
		
		case 136:
			*uParam1 = { 2405.11f, 4296.96f, 35.1743f };
			return 1;
			break;
		
		case 137:
			*uParam1 = { 100.9571f, 3363.993f, 34.4471f };
			return 1;
			break;
		
		case 138:
			*uParam1 = { 2445.206f, 3800.669f, 40.0793f };
			return 1;
			break;
		
		case 139:
			*uParam1 = { 1775.445f, 4584.743f, 37.6512f };
			return 1;
			break;
		
		case 140:
			*uParam1 = { -760.5784f, 229.583f, 74.6747f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = { 1316.415f, -1599.345f, 51.3924f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = { 2365.105f, 3904.715f, 35.2f };
			return 1;
			break;
		
		case 143:
			*uParam1 = { -483.2213f, 5876.392f, 33f };
			return 1;
			break;
		
		case 144:
			*uParam1 = { -180.0459f, 6464.799f, 30.2f };
			return 1;
			break;
		
		case 145:
			*uParam1 = { 1663.859f, 4876.284f, 41.6f };
			return 1;
			break;
		
		case 146:
			*uParam1 = { 2156.064f, 3253.632f, 46.9f };
			return 1;
			break;
		
		case 147:
			*uParam1 = { 2782.836f, 3476.82f, 54.8f };
			return 1;
			break;
		
		case 148:
			*uParam1 = { 2543.831f, 2618.32f, 37.5f };
			return 1;
			break;
		
		case 149:
			*uParam1 = { 1295.529f, 1529.811f, 96.6f };
			return 1;
			break;
		
		case 150:
			*uParam1 = { 1978.07f, 3819.564f, 32.429f };
			return 1;
			break;
		
		case 114:
			*uParam1 = { 68.79f, -1561.27f, 29.4564f };
			return 1;
			break;
		
		case 115:
			*uParam1 = { -511.73f, -21.87f, 45.5884f };
			return 1;
			break;
		
		case 116:
			*uParam1 = { -628.8f, 242.463f, 81.8695f };
			return 1;
			break;
		
		case 117:
			*uParam1 = { -834.53f, -350.71f, 38.6537f };
			return 1;
			break;
		
		case 118:
			*uParam1 = { -1073.127f, -1538.832f, 4.11f };
			return 1;
			break;
		
		case 119:
			*uParam1 = { 123.0931f, 649.6752f, 207.7751f };
			return 1;
			break;
		
		case 120:
			*uParam1 = { -820.9f, 85.3f, 51.9813f };
			return 1;
			break;
		
		case 121:
			*uParam1 = { -831.353f, -1358.748f, 4.9732f };
			return 1;
			break;
		
		case 122:
			*uParam1 = { -812.346f, 179.87f, 72.1592f };
			return 1;
			break;
		
		case 123:
			*uParam1 = { -2015.68f, -495.4f, 11.7326f };
			return 1;
			break;
		
		case 125:
			*uParam1 = { -1499.98f, -677.09f, 27.0668f };
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1971.862f, 3813.91f, 32.9309f };
			return 1;
			break;
		
		case 127:
			*uParam1 = { 669.7389f, 3503.83f, 32.9168f };
			return 1;
			break;
		
		case 128:
			*uParam1 = { 1974.768f, 3821.242f, (32.4384f + 0.5f) };
			return 1;
			break;
		
		case 129:
			*uParam1 = { 1981.238f, 3821.543f, 31.9677f };
			return 1;
			break;
		
		case 130:
			*uParam1 = { 1976.75f, 3822.76f, 33.28f };
			return 1;
			break;
		
		case 131:
			*uParam1 = { 1981.332f, 3821.52f, 31.9535f };
			return 1;
			break;
		
		case 132:
			*uParam1 = { 1974.312f, 3821.1f, 32.8864f };
			return 1;
			break;
		
		case 133:
			*uParam1 = { 1940.052f, 4018.854f, 28.9009f };
			return 1;
			break;
		
		case 134:
			*uParam1 = { 1992.15f, 3056.42f, 47.0342f };
			return 1;
			break;
		
		case 151:
			*uParam1 = { -115.92f, 363.5f, 112.8857f };
			return 1;
			break;
		
		case 152:
			*uParam1 = { -1353.791f, 355.1845f, 64.08f };
			return 1;
			break;
		
		case 153:
			*uParam1 = { -718.8135f, 256.7636f, 79.8384f };
			return 1;
			break;
		
		case 154:
			*uParam1 = { -718.8735f, 256.4936f, 79.8259f };
			return 1;
			break;
		
		case 155:
			*uParam1 = { -770.6851f, 157.8133f, 67.5042f };
			return 1;
			break;
		
		case 156:
			*uParam1 = { -796.7593f, 180.4725f, 71.8266f };
			return 1;
			break;
		
		case 157:
			*uParam1 = { -718.0311f, 254.9289f, 79.7959f };
			return 1;
			break;
		
		case 158:
			*uParam1 = { 533.1877f, 109.0133f, 96.4624f };
			return 1;
			break;
		
		case 159:
			*uParam1 = { -823.2f, -187.083f, 37.7753f };
			return 1;
			break;
		
		case 160:
			*uParam1 = { -715.6204f, -155.5691f, 37.4023f };
			return 1;
			break;
		
		case 161:
			*uParam1 = { -790.3314f, 186.4809f, 71.835f };
			return 1;
			break;
		
		case 162:
			*uParam1 = { -1367.35f, -208.84f, (((44.4134f + 44.416f) / 2f) - 0.01f) };
			return 1;
			break;
		
		case 163:
			*uParam1 = { -812.896f, 181.114f, 76.7233f };
			return 1;
			break;
		
		case 164:
			*uParam1 = { -781.264f, 187.115f, 72.8425f };
			return 1;
			break;
		
		case 165:
			*uParam1 = { -1135.547f, -450.7346f, 35.4977f };
			return 1;
			break;
		
		case 166:
			*uParam1 = { -1050.013f, -481.4982f, 36.7625f };
			return 1;
			break;
		
		case 167:
			*uParam1 = { -1180.062f, -498.2454f, 35.567f };
			return 1;
			break;
		
		case 168:
			if (GlobalFunc_5937(0, 25, &Var10, &uVar13))
			{
				*uParam1 = { Var10 + Vector(71.1531f, 179.5117f, -812.0607f) };
				StringCopy(&Var1, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = { -808.3299f, 170.7319f, 76.7408f };
			return 1;
			break;
		
		case 170:
			*uParam1 = { -656.9569f, -276.9062f, 35.6524f };
			return 1;
			break;
		
		case 171:
			*uParam1 = { -250.9305f, -80.8638f, 48.4993f };
			return 1;
			break;
		
		case 173:
			*uParam1 = { -817.75f, 170.02f, 70.4911f };
			return 1;
			break;
		
		case 172:
			*uParam1 = { -248.9653f, -81.0186f, 48.6174f };
			*uParam1 = { *uParam1 + Vector(0.0134f, 0.0273f, 0.0091f) };
			fVar0 = (fVar0 + 0.003f);
			return 1;
			break;
		
		case 174:
			*uParam1 = { -803.27f, 183.78f, 71.61f };
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -17.2168f, -1441.224f, 30.1015f };
			return 1;
			break;
		
		case 176:
			*uParam1 = { -0.45f, 525.49f, 169.64f };
			return 1;
			break;
		
		case 177:
			*uParam1 = { -0.109f, 524.3119f, 170.3068f };
			return 1;
			break;
		
		case 178:
			*uParam1 = { 9.0865f, 528.0272f, 170.6172f };
			return 1;
			break;
		
		case 179:
			*uParam1 = { -17.2672f, -1441.154f, 30.1015f };
			return 1;
			break;
		
		case 180:
			*uParam1 = { 1.76f, 525.92f, 173.63f };
			return 1;
			break;
		
		case 181:
			*uParam1 = { -17.4073f, -1439.401f, 31.1023f };
			return 1;
			break;
		
		case 182:
			*uParam1 = { -13.8167f, -1423.673f, 30.7231f };
			return 1;
			break;
		
		case 183:
			*uParam1 = { 15.3608f, 523.6475f, (169.2282f + 1f) };
			return 1;
			break;
		
		case 184:
			*uParam1 = { -11.5281f, 512.304f, 174.5978f };
			return 1;
			break;
		
		case 185:
			*uParam1 = { 20.9569f, 521.8147f, 170.1977f };
			return 1;
			break;
		
		case 186:
			*uParam1 = { -1.579f, 535.2489f, 175.3424f };
			return 1;
			break;
		
		case 187:
			*uParam1 = { 3.8524f, 525.7295f, 174.6234f };
			return 1;
			break;
		
		case 188:
			*uParam1 = { -8.86f, 515.84f, 174.628f };
			return 1;
			break;
		
		case 189:
			*uParam1 = { -6.9799f, 524.9367f, 174.9997f };
			return 1;
			break;
		
		case 190:
			*uParam1 = { 1.4483f, 527.5843f, 170.0596f };
			return 1;
			break;
		
		case 191:
			*uParam1 = { 1.8291f, 526.745f, 174.6267f };
			return 1;
			break;
		
		case 196:
			*uParam1 = { -14.8689f, -1441.182f, 31.1932f };
			return 1;
			break;
		
		case 197:
			*uParam1 = { 3.641f, 530.1489f, 175.6695f };
			return 1;
			break;
		
		case 192:
			*uParam1 = { -1174.458f, -1573.632f, 4.7619f };
			return 1;
			break;
		
		case 193:
			*uParam1 = { -1175.298f, -1573.692f, 4.3599f };
			return 1;
			break;
		
		case 194:
			*uParam1 = { -1153.511f, -1371.652f, 4.073f };
			return 1;
			break;
		
		case 195:
			*uParam1 = { -1162.987f, -1427.264f, 3.637f };
			return 1;
			break;
		
		case 198:
			*uParam1 = { -13.7603f, -1451.2f, 29.6322f };
			return 1;
			break;
		
		case 199:
			*uParam1 = { 14.379f, 544.128f, 175.0021f };
			return 1;
			break;
		
		case 200:
			*uParam1 = { 2.8895f, -1607.286f, 29.2949f };
			return 1;
			break;
		
		case 201:
			*uParam1 = { 2.8895f, -1607.286f, 29.2866f };
			return 1;
			break;
		
		case 202:
			*uParam1 = { -1244.888f, -1613.656f, 4.1295f };
			return 1;
			break;
		
		case 203:
			*uParam1 = { -16.4273f, -1452.266f, 30.5424f };
			return 1;
			break;
		
		case 204:
			*uParam1 = { -15.0259f, -1422.936f, 30.6908f };
			return 1;
			break;
		
		case 205:
			*uParam1 = { 15.3678f, 523.712f, 170.2095f };
			return 1;
			break;
		
		case 206:
			*uParam1 = { 154.0731f, 765.5721f, 209.672f };
			return 1;
			break;
		
		case 207:
			*uParam1 = { -268.139f, 415.2881f, 109.7258f };
			return 1;
			break;
		
		case 208:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			return 1;
			break;
		
		case 209:
			*uParam1 = { 31.9f, -1483.3f, 29.26f };
			return 1;
			break;
		
		case 210:
			*uParam1 = { 208.9683f, 222.0408f, 104.6f };
			return 1;
			break;
		
		case 211:
			*uParam1 = { -24.5203f, -1436.2f, 30.1544f };
			return 1;
			break;
		
		case 212:
			*uParam1 = { -23.8762f, -1444.595f, 30.6345f };
			return 1;
			break;
		
		case 213:
			*uParam1 = { 14f, 546.19f, 175.4851f };
			return 1;
			break;
		
		case 214:
			*uParam1 = { 8.8185f, 545.03f, 175.6051f };
			return 1;
			break;
		
		case 215:
			*uParam1 = { 10.9694f, 551.7596f, 176.1069f };
			return 1;
			break;
		
		case 216:
			*uParam1 = { -1150.82f, 943.27f, 198.237f };
			return 1;
			break;
		
		case 217:
			*uParam1 = { -1689f, -946.16f, 7.1768f };
			return 1;
			break;
		
		case 221:
			*uParam1 = { -521.13f, -28.54f, 45.2617f };
			return 1;
			break;
		
		case 222:
			*uParam1 = { 480.9113f, -1316.355f, 29.1966f };
			return 1;
			break;
		
		case 223:
			*uParam1 = { 473.3613f, -1309.995f, 29.2326f };
			return 1;
			break;
		
		case 224:
			return func_653(222, uParam1);
			break;
		
		case 226:
			*uParam1 = { 28.986f, -1351.412f, 29.3437f };
			return 1;
			break;
		
		case 227:
			*uParam1 = { -379.1773f, 220.9259f, 84.144f };
			return 1;
			break;
		
		case 228:
			*uParam1 = { 131.5816f, -1303.558f, 29.1592f };
			return 1;
			break;
		
		case 229:
			*uParam1 = { 792.1553f, -735.5871f, 27.5721f };
			return 1;
			break;
		
		case 230:
			*uParam1 = { -297.4081f, -1332.343f, 31.3057f };
			return 1;
			break;
		
		case 218:
			*uParam1 = { -9.4f, -1415.3f, 28.32f };
			return 1;
			break;
		
		case 219:
			*uParam1 = { -242.0927f, -1538.181f, 30.5334f };
			return 1;
			break;
		
		case 220:
			*uParam1 = { -18.8892f, -1823.912f, 25.8711f };
			return 1;
			break;
		
		case 225:
			*uParam1 = { 192.751f, -1672.653f, 28.8033f };
			return 1;
			break;
		
		case 231:
			*uParam1 = { -2654.634f, 2625.161f, 15.6744f };
			return 1;
			break;
		
		case 232:
			*uParam1 = { -78.4023f, -1019.235f, 28.5449f };
			return 1;
			break;
		
		case 233:
			*uParam1 = { -78.4023f, -1019.235f, 28.5449f };
			return 1;
			break;
		
		case 235:
			*uParam1 = { 116.9369f, -1287.704f, 28.2979f };
			return 1;
			break;
		
		case 236:
			*uParam1 = { 126.8211f, -1283.766f, 29.274f };
			return 1;
			break;
		
		case 237:
			*uParam1 = { 127.957f, -1298.513f, 29.427f };
			return 1;
			break;
		
		case 238:
			*uParam1 = { 130.2769f, -1300.874f, 29.1559f };
			return 1;
			break;
		
		case 239:
			*uParam1 = { -55.8087f, 358.255f, 113.061f };
			return 1;
			break;
		
		case 240:
			*uParam1 = { 1534.043f, 3613.122f, 34.367f };
			return 1;
			break;
		
		case 241:
			*uParam1 = { -175.4296f, 6428.75f, 29.6226f };
			return 1;
			break;
		
		case 242:
			*uParam1 = { -1654.937f, -147.5126f, 57.461f };
			return 1;
			break;
		
		case 245:
			*uParam1 = { 1972.81f, 3818.273f, 32.005f };
			return 1;
			break;
		
		case 243:
			*uParam1 = { 433.885f, -1462.478f, 28.2735f };
			return 1;
			break;
		
		case 244:
			*uParam1 = { 433.885f, -1462.478f, 28.2804f };
			return 1;
			break;
		
		case 246:
			*uParam1 = { -1199.55f, -1569.688f, 4.612f };
			return 1;
			break;
		
		case 247:
			*uParam1 = { -1325.88f, -1667.49f, 1.5744f };
			return 1;
			break;
		
		case 248:
			*uParam1 = { 285.93f, 182.18f, 103.3496f };
			return 1;
			break;
		
		case 249:
			*uParam1 = { 292.17f, 191.09f, (103.3496f + 1f) };
			return 1;
			break;
		
		case 250:
			*uParam1 = { 288.0774f, -3201.881f, 5.808f };
			return 1;
			break;
		
		case 251:
			*uParam1 = { -871.2493f, 67.3477f, 52.1137f };
			return 1;
			break;
		
		case 252:
			*uParam1 = { -46.1798f, -1474.164f, 32.0083f };
			return 1;
			break;
		
		case 253:
			*uParam1 = { 1876.025f, 2620.827f, 45.6722f };
			return 1;
			break;
		
		case 254:
			*uParam1 = { 154.73f, -219.21f, 54.303f };
			return 1;
			break;
		
		case 255:
			*uParam1 = { 411.625f, -1488.989f, 30.1244f };
			return 1;
			break;
		
		case 264:
			*uParam1 = { 488.0162f, -1342.394f, 29.4108f };
			return 1;
			break;
		
		case 265:
			*uParam1 = { -438.0249f, 1595.895f, 356.5938f };
			return 1;
			break;
		
		case 266:
			*uParam1 = { -3067.868f, 130.6339f, 9.9056f };
			return 1;
			break;
		
		case 267:
			*uParam1 = { 2209.699f, 4914.914f, 39.676f };
			return 1;
			break;
		
		case 268:
			*uParam1 = { 1800.031f, 6293.462f, 48.6294f };
			return 1;
			break;
		
		case 269:
			*uParam1 = { 418.6078f, -788.4689f, 43.5311f };
			return 1;
			break;
		
		case 270:
			*uParam1 = { 2949.567f, 5755.339f, 317.8481f };
			return 1;
			break;
		
		case 271:
			*uParam1 = { -1267.389f, -1098.899f, 6.8082f };
			return 1;
			break;
		
		case 272:
			*uParam1 = { 107.0137f, -1316.035f, 28.2084f };
			return 1;
			break;
		
		case 273:
			*uParam1 = { -118.1968f, -442.9148f, 35.282f };
			return 1;
			break;
		
		case 274:
			*uParam1 = { -1858.957f, 2071.23f, 140.3656f };
			return 1;
			break;
		
		case 275:
			*uParam1 = { Vector(49.4f, -1195.9f, 937.3f) + Vector(48.8f, -1200.3f, 895.4f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		
		case 276:
			*uParam1 = { 1893.4f, 2303.4f, 54.5f };
			return 1;
			break;
		
		case 277:
			*uParam1 = { 1076.988f, 2685.153f, 37.973f };
			return 1;
			break;
		
		case 278:
			*uParam1 = { 642.68f, -1001.27f, 36.8997f };
			return 1;
			break;
		
		case 279:
			*uParam1 = { -145.8739f, 868.3813f, 231.6979f };
			return 1;
			break;
		
		case 280:
			*uParam1 = { 2789.845f, -1453.731f, 0.5519f };
			return 1;
			break;
		
		case 281:
			*uParam1 = { 612.6f, -932.6f, 10.6f };
			return 1;
			break;
		
		case 282:
			*uParam1 = { -975.9f, 2891f, 15.7f };
			return 1;
			break;
		
		case 283:
			*uParam1 = { Vector(1f, 1f, 1f) * Vector(15.66f, 303.17f, -3019.98f) + Vector(2f, 2f, 2f) * Vector(15.7f, 285.2f, -3031.2f) / FtoV((1f + 2f)) };
			return 1;
			break;
		
		case 284:
			*uParam1 = { Vector(51.5964f, -1128.687f, 1356.032f) + Vector(51.5f, -1149f, 1316.7f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		
		case 285:
			*uParam1 = { 48.1743f, -2057.129f, 18.3524f };
			return 1;
			break;
		
		case 256:
			*uParam1 = { -1242.68f, -1105.15f, 7.1f };
			return 1;
			break;
		
		case 257:
			*uParam1 = { -1667.148f, -974.7168f, 6.479f };
			return 1;
			break;
		
		case 258:
			*uParam1 = { -301.4778f, 6250.9f, 30.5054f };
			return 1;
			break;
		
		case 259:
			*uParam1 = { -724.26f, -1307.05f, 5.0602f };
			return 1;
			break;
		
		case 260:
			*uParam1 = { -1280.054f, 303.9235f, 63.9553f };
			return 1;
			break;
		
		case 261:
			*uParam1 = { 924.1288f, 48.0048f, 79.7644f };
			return 1;
			break;
		
		case 286:
			*uParam1 = { -1273.69f, -1195.01f, 5.0372f };
			return 1;
			break;
		
		case 287:
			*uParam1 = { -888.45f, -853.11f, 19.5602f };
			return 1;
			break;
		
		case 288:
			*uParam1 = { -1696.14f, -1073.2f, 0.6898f };
			return 1;
			break;
		
		case 262:
			*uParam1 = { -1155.957f, -1521.686f, 4.3519f };
			return 1;
			break;
		
		case 263:
			*uParam1 = { -565.37f, -1258.02f, 13.8618f };
			return 1;
			break;
		
		case 289:
			*uParam1 = { 440.6737f, -228.7473f, 55.9725f };
			return 1;
			break;
		
		case 290:
			*uParam1 = { 118.4869f, -1286.414f, 28.261f };
			return 1;
			break;
		
		case 291:
			*uParam1 = { -1159.273f, -1522.504f, 9.634f };
			return 1;
			break;
		
		case 292:
			*uParam1 = { -1145.368f, -1515.59f, 9.5847f };
			return 1;
			break;
		
		case 293:
			*uParam1 = { -1145.437f, -1515.649f, 9.5894f };
			return 1;
			break;
		
		case 294:
			return func_653(293, uParam1);
			break;
		
		case 295:
			return func_653(292, uParam1);
			break;
		
		case 299:
			*uParam1 = { -1158.133f, -1521.394f, 9.6327f };
			return 1;
			break;
		
		case 300:
			return func_653(303, uParam1);
			break;
		
		case 301:
			return func_653(303, uParam1);
			break;
		
		case 302:
			return func_653(303, uParam1);
			break;
		
		case 303:
			*uParam1 = { -1157.803f, -1521.334f, 9.6327f };
			return 1;
			break;
		
		case 296:
			*uParam1 = { -1146.127f, -1515.525f, 9.6346f };
			return 1;
			break;
		
		case 297:
			*uParam1 = { -1153.515f, -1518.435f, 9.6346f };
			return 1;
			break;
		
		case 298:
			*uParam1 = { -1156.422f, -1519.561f, 10.6327f };
			return 1;
			break;
		
		case 304:
			*uParam1 = { 1972.432f, 3814.38f, 32.932f };
			return 1;
			break;
		
		case 305:
			*uParam1 = { 1394.208f, 3602.284f, 37.9419f };
			return 1;
			break;
		
		case 306:
			Var14 = { 0.0055f, 7.499f, -1.2748f };
			*uParam1 = { Vector(42.2955f, 5619.934f, -557.5234f) + Var14 };
			return 1;
			break;
		
		case 307:
			*uParam1 = { -1574.465f, 4693.425f, 47.6226f };
			return 1;
			break;
		
		case 308:
			*uParam1 = { -1557.394f, 4590.116f, 18.6076f };
			return 1;
			break;
		
		case 309:
			*uParam1 = { 2113.694f, 4792.353f, 40.2104f };
			return 1;
			break;
		
		case 310:
			*uParam1 = { 2020.252f, 3401.154f, 42.7215f };
			return 1;
			break;
		
		case 311:
			*uParam1 = { 1972.237f, 3817.86f, 33.4287f };
			return 1;
			break;
		
		case 312:
			*uParam1 = { -275.7407f, 6629.969f, 6.4377f };
			return 1;
			break;
		
		case 313:
			*uParam1 = { 1838.1f, 4381.3f, (19.6f + 5f) };
			return 1;
			break;
		
		case 314:
			*uParam1 = { 1126.415f, 2035.135f, 243.9449f };
			return 1;
			break;
	}
	*uParam1 = { 0f, 0f, 0f };
	fVar0 = 0f;
	Var1 = { Var1 };
	return 0;
}

int func_654(int iParam0, bool bParam1)//Position - 0x7E80D
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
		func_657(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_247(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_145(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_657(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7E9C5
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
				GlobalFunc_8645(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				func_637(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_249(*uParam0, bParam6);
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






int func_663()//Position - 0x7EB50
{
	if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch)
	{
		if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[0 /*6*/])
		{
			if (GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
			{
				return 1;
			}
		}
	}
	return 0;
}


