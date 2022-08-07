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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	struct<3> Local_64[5];
	float fLocal_80[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_86[5];
	struct<3> Local_102[5];
	struct<3> Local_118[5];
	struct<3> Local_134[5];
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	struct<3> Local_170 = { 0, 0, 0 } ;
	float fLocal_173 = 0f;
	int iLocal_174 = 0;
	var uLocal_175[3] = { 0, 0, 0 };
	int iLocal_179[3] = { 0, 0, 0 };
	struct<3> Local_183 = { 0, 0, 0 } ;
	float fLocal_186 = 0f;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	char* sLocal_191 = NULL;
	int iLocal_192[2] = { 0, 0 };
	int iLocal_195[2] = { 0, 0 };
	var uLocal_198[2] = { 0, 0 };
	int iLocal_201[2] = { 0, 0 };
	struct<3> Local_204[2];
	float fLocal_211[2] = { 0f, 0f };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	struct<11> Local_226 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	int iLocal_239 = 0;
	float fLocal_240 = 0f;
	float fLocal_241 = 0f;
	float fLocal_242 = 0f;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	
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
	fLocal_57 = 0.5f;
	fLocal_58 = 0.9f;
	iLocal_154 = joaat("lazer");
	sLocal_156 = "pc_bench";
	fLocal_157 = 4500f;
	iLocal_159 = 10000;
	iLocal_160 = 104000;
	iLocal_161 = 10000;
	fLocal_163 = 2f;
	iLocal_166 = 32000;
	iLocal_167 = 100000;
	iLocal_169 = joaat("patriot");
	Local_170 = { 295.5545f, 175.0924f, 103.0558f };
	fLocal_173 = 66.6414f;
	Local_183 = { 299.0901f, 184.7974f, 103.1263f };
	fLocal_186 = 142.087f;
	iLocal_190 = 1;
	sLocal_191 = "pc_bench";
	iLocal_215 = joaat("tanker");
	iLocal_220 = 70000;
	iLocal_223 = 500;
	fLocal_240 = 0f;
	fLocal_241 = 0f;
	fLocal_242 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_509(1);
	}
	if (MISC::_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE())
	{
		while (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE())
	{
		iLocal_37 = 0;
	}
	else
	{
		iLocal_37 = func_479(0);
	}
	while (true)
	{
		if (iLocal_37 == 0)
		{
			func_478();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				switch (iLocal_36)
				{
					case 0:
						func_104();
						break;
					
					case 1:
						func_93();
						break;
					
					case 2:
						func_82();
						break;
					
					case 3:
						func_44();
						break;
					
					case 4:
						func_43();
						break;
					
					case 5:
						func_38();
						break;
					
					case 6:
						func_15();
						break;
					
					case 7:
						func_12();
						break;
					
					default:
						break;
				}
				func_5();
				func_2();
			}
		}
		else
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
			if (!PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				if (iLocal_38 == 0)
				{
					MISC::SET_GAME_PAUSED(1);
					iLocal_38 = 1;
				}
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				uVar0 = GlobalFunc_2374(iLocal_37, 60);
				HUD::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, 0, -1, "FBR_BENCHMARK", uVar0, 1);
			}
			else
			{
				MISC::SET_GAME_PAUSED(0);
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0x30D
{
	float fVar0;
	int iVar1;
	
	if (GlobalFunc_74("BMARK_EXIT"))
	{
		fLocal_43[iLocal_42] = (1f / MISC::_GET_BENCHMARK_TIME());
		iLocal_42++;
		if (iLocal_42 == 10)
		{
			iLocal_42 = 0;
			fVar0 = 0f;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 10)
			{
				fVar0 = (fVar0 + fLocal_43[iVar1]);
				iVar1++;
			}
			fLocal_41 = (fVar0 / 10f);
		}
		if (fLocal_41 > 0f)
		{
			HUD::SET_TEXT_JUSTIFICATION(0);
			HUD::SET_TEXT_OUTLINE();
			GlobalFunc_2375(fLocal_57, fLocal_58, "BMARK_FPS", fLocal_41, 1);
		}
	}
}



void func_5()//Position - 0x3B9
{
	if (iLocal_36 != 0)
	{
		if (!GlobalFunc_74("BMARK_EXIT"))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				GlobalFunc_Display_Help_Text("BMARK_EXIT");
			}
		}
		else if (GlobalFunc_4926(1000))
		{
			func_8();
			if (bLocal_39)
			{
				MISC::_SAVE_BENCHMARK_RECORDING();
			}
			if (MISC::_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE())
			{
				func_7(iLocal_223, 1);
				func_509(1);
			}
			else
			{
				func_6();
			}
			MISC::_RESET_BENCHMARK_RECORDING();
		}
	}
}

void func_6()//Position - 0x418
{
	func_7(500, 1);
	if (MISC::_LANDING_MENU_IS_ACTIVE())
	{
		MISC::_RESTART_GAME();
	}
	else
	{
		MISC::_FORCE_SOCIAL_CLUB_UPDATE();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, bool bParam1)//Position - 0x43E
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_478();
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

void func_8()//Position - 0x474
{
	HUD::CLEAR_HELP(1);
	if (iLocal_40 == 1)
	{
		iLocal_40 = 0;
		MISC::_STOP_BENCHMARK_RECORDING();
		bLocal_39 = true;
	}
}




void func_12()//Position - 0x523
{
	if (bLocal_39 == 1)
	{
		MISC::_SAVE_BENCHMARK_RECORDING();
	}
	iLocal_55++;
	if (iLocal_55 >= iLocal_54)
	{
		if (MISC::_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE())
		{
			MISC::_RESET_BENCHMARK_RECORDING();
			func_509(1);
		}
		else
		{
			func_6();
			MISC::_RESET_BENCHMARK_RECORDING();
		}
	}
	else
	{
		func_509(0);
		func_14();
		func_13();
		iLocal_36 = 1;
	}
}

void func_13()//Position - 0x570
{
	if (iLocal_56 == -1)
	{
		iLocal_63 = 0;
	}
	else
	{
		iLocal_63 = iLocal_56;
	}
}

void func_14()//Position - 0x588
{
	iLocal_162 = -1;
	iLocal_174 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_217 = 0;
	iLocal_218 = 0;
	iLocal_221 = -1;
	fLocal_240 = 0f;
	fLocal_241 = 0f;
	fLocal_242 = 0f;
}

void func_15()//Position - 0x5AE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_MAX_WANTED_LEVEL(2);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	}
	func_35();
	if (func_31())
	{
		func_30();
		func_29();
		func_25();
		func_24();
	}
	if (!GlobalFunc_115(iLocal_168))
	{
		if (iLocal_221 == -1)
		{
			iLocal_221 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_221) > 5000)
		{
			func_8();
			func_7(iLocal_223, 1);
			func_19();
			func_18();
		}
	}
	else if (func_16())
	{
		if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_168)) > 0f)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_168, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_168, 1);
			VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_168, 1);
			VEHICLE::SET_VEHICLE_STRONG(iLocal_168, 0);
			VEHICLE::EXPLODE_VEHICLE(iLocal_168, 1, 0);
			iLocal_218 = 1;
			iLocal_222 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_16()//Position - 0x68C
{
	if (iLocal_218 == 1)
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_219) > iLocal_220)
	{
		return 1;
	}
	if (GlobalFunc_115(iLocal_214) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_168, iLocal_214))
	{
		VEHICLE::EXPLODE_VEHICLE(iLocal_214, 1, 0);
		return 1;
	}
	if (GlobalFunc_115(iLocal_192[0]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_168, iLocal_192[0]))
	{
		VEHICLE::EXPLODE_VEHICLE(iLocal_192[0], 1, 0);
		return 1;
	}
	if ((CAM::DOES_CAM_EXIST(uLocal_216) && ENTITY::GET_ENTITY_SPEED(iLocal_168) < 1f) && GlobalFunc_156(iLocal_168, iLocal_214, 1) < 15f)
	{
		return 1;
	}
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_168) && VEHICLE::GET_POSITION_IN_RECORDING(iLocal_168) > 849f)
	{
		return 1;
	}
	return 0;
}


void func_18()//Position - 0x7A4
{
	iLocal_36++;
}

void func_19()//Position - 0x7B2
{
	int iVar0;
	
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (GlobalFunc_115(iLocal_168))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_168, 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_168, 1);
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_168, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_2297(&(uLocal_175[iVar0]), 1, 0, 1);
		iVar0++;
	}
	if (GlobalFunc_115(iLocal_192[0]))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_192[0], 0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		GlobalFunc_2297(&(uLocal_198[iVar0]), 1, 0, 1);
		GlobalFunc_190(&(iLocal_192[iVar0]));
		iVar0++;
	}
	if (GlobalFunc_115(iLocal_214))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_214, 0);
	}
	GlobalFunc_190(&iLocal_214);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_187);
	GlobalFunc_6689(&iLocal_168);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_190, sLocal_191);
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
}





void func_24()//Position - 0xA0B
{
	var uVar0[20];
	int iVar21;
	int iVar22;
	
	if ((iLocal_218 == 1 && (MISC::GET_GAME_TIMER() - iLocal_222) > 250) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_222 = MISC::GET_GAME_TIMER();
		iVar21 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
		iVar22 = 0;
		iVar22 = 0;
		while (iVar22 < iVar21)
		{
			if (((GlobalFunc_115(uVar0[iVar22]) && uVar0[iVar22] != iLocal_168) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar0[iVar22]))) && GlobalFunc_156(uVar0[iVar22], PLAYER::PLAYER_PED_ID(), 1) < 20f)
			{
				VEHICLE::EXPLODE_VEHICLE(uVar0[iVar22], 1, 0);
				return;
			}
			iVar22++;
		}
	}
}

void func_25()//Position - 0xABB
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_115(iLocal_168))
	{
		iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_168, 0f, 20f, 0f), 5f, 0, 4);
		if (GlobalFunc_4940(iVar0) && iVar0 != iLocal_168)
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if ((GlobalFunc_115(iVar1) && !GlobalFunc_6964(iVar1, 1805844857)) && !func_26(ENTITY::GET_ENTITY_MODEL(iVar1)))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2048, 1);
				TASK::TASK_SMART_FLEE_PED(iVar1, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iVar1, 1);
			}
			GlobalFunc_2297(&iVar1, 1, 0, 1);
		}
		GlobalFunc_190(&iVar0);
	}
}

int func_26(int iParam0)//Position - 0xB69
{
	if (iParam0 == joaat("s_m_y_cop_01") || iParam0 == joaat("s_f_y_cop_01"))
	{
		return 1;
	}
	return 0;
}



void func_29()//Position - 0xBE2
{
	if (((!CAM::DOES_CAM_EXIST(uLocal_216) && GlobalFunc_115(iLocal_168)) && GlobalFunc_115(iLocal_214)) && GlobalFunc_156(iLocal_168, iLocal_214, 1) < 30f)
	{
		uLocal_216 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -503.5369f, 261.8961f, 88.6503f, -0.1443f, 0f, 103.3085f, 50f, 1, 2);
		CAM::SHAKE_CAM(uLocal_216, "HAND_SHAKE", 0.5f);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_MODE_ACTIVE(0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_214, 0);
	}
}

void func_30()//Position - 0xC70
{
	if (iLocal_188 == 1 && GlobalFunc_115(iLocal_168))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_168))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_168, iLocal_190, sLocal_191, 1);
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_168, 0.7f);
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
		}
	}
}

int func_31()//Position - 0xCCE
{
	int iVar0;
	
	if (iLocal_217 == 1)
	{
		return 1;
	}
	if (func_33())
	{
		MISC::CLEAR_AREA(Local_204[0 /*3*/], 10f, 1, 0, 0, 0);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_192[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_195[iVar0], Local_204[iVar0 /*3*/], fLocal_211[iVar0], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_192[iVar0]);
			uLocal_198[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_192[iVar0], 26, iLocal_201[iVar0], -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_198[iVar0], 1);
			iVar0++;
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_192[0], 1);
		iLocal_214 = VEHICLE::CREATE_VEHICLE(iLocal_215, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_192[0], 0f, -50f, 10f), fLocal_211[0], 1, 1);
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_192[0], iLocal_214, 1065353216);
		VEHICLE::SET_TRAILER_LEGS_RAISED(iLocal_214);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_214, 1);
		iLocal_217 = 1;
		func_32();
		return 1;
	}
	return 0;
}

void func_32()//Position - 0xDB7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_201[iVar0]);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_215);
}

int func_33()//Position - 0xDEE
{
	int iVar0;
	
	func_34();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_195[iVar0]))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_201[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_215))
	{
		return 0;
	}
	return 1;
}

void func_34()//Position - 0xE42
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::REQUEST_MODEL(iLocal_195[iVar0]);
		STREAMING::REQUEST_MODEL(iLocal_201[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(iLocal_215);
}

void func_35()//Position - 0xE79
{
	int iVar0;
	
	if ((iLocal_162 > -1 && GlobalFunc_115(iLocal_168)) && GlobalFunc_115(uLocal_175[0]))
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_175[0], iLocal_168, 0))
		{
			if (iLocal_188 == 0)
			{
				iLocal_188 = 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (GlobalFunc_115(uLocal_175[iVar0]))
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_175[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_175[iVar0], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(uLocal_175[iVar0], 0);
					}
					iVar0++;
				}
				if (iLocal_243 == 1)
				{
					CAM::SET_CINEMATIC_MODE_ACTIVE(1);
				}
				if (iLocal_189 == 0)
				{
					iLocal_189 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(116, PLAYER::PLAYER_PED_ID(), -1082130432);
				}
				fLocal_241 = 0.5f;
				func_37();
			}
		}
		else
		{
			func_34();
			if (!GlobalFunc_6964(uLocal_175[0], -1794415470))
			{
				TASK::TASK_ENTER_VEHICLE(uLocal_175[0], iLocal_168, 20000, 0, 1f, 1, 0);
			}
			if (iLocal_174 == 0)
			{
				func_36();
				iLocal_174 = 1;
			}
		}
	}
}

void func_36()//Position - 0xF68
{
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	MISC::POPULATE_NOW();
}

void func_37()//Position - 0xF7C
{
	if (GlobalFunc_115(iLocal_153))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_153))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_153);
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_153, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
		}
	}
	GlobalFunc_6689(&iLocal_153);
	VEHICLE::REMOVE_VEHICLE_RECORDING(uLocal_155, sLocal_156);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
}

void func_38()//Position - 0xFE4
{
	if (!CAM::DOES_CAM_EXIST(uLocal_224))
	{
		uLocal_224 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 0, 2);
		uLocal_225 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 295.1843f, 168.9212f, 111.301f, -43.0954f, 0f, 1.3863f, CAM::GET_FINAL_RENDERED_CAM_FOV(), 0, 2);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_225, uLocal_224, iLocal_161, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 0, 0, 0);
		iLocal_162 = MISC::GET_GAME_TIMER();
	}
	func_40();
	func_35();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && (MISC::GET_GAME_TIMER() - iLocal_162) > 250)
	{
		if (GlobalFunc_115(iLocal_168))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_168, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_168, -1);
			}
		}
		else if (GlobalFunc_115(iLocal_153) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_153, 0))
		{
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_170, fLocal_173, 0, 1);
		}
	}
	if ((((MISC::GET_GAME_TIMER() - iLocal_162) > iLocal_161 && GlobalFunc_115(iLocal_168)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_168, 0))
	{
		iLocal_219 = MISC::GET_GAME_TIMER();
		func_18();
	}
}


void func_40()//Position - 0x1164
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!GlobalFunc_115(iLocal_168))
	{
		func_42();
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_169))
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_179[iVar0]))
			{
				return;
			}
			iVar0++;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_190, sLocal_191))
		{
			return;
		}
		Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_190, sLocal_191), 0f) };
		Var4 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_190, sLocal_191), 0f) };
		MISC::CLEAR_AREA(Var1, 5f, 1, 0, 0, 0);
		iLocal_168 = VEHICLE::CREATE_VEHICLE(iLocal_169, Var1, Var4.f_2, 1, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_168, 0);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_168, 0);
		VEHICLE::SET_VEHICLE_ALARM(iLocal_168, 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_168, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_168, 200);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_168, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_168, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_168, 1);
		VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_168, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 16, 2, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 11, 3, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 12, 2, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 13, 2, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 23, 10, 0);
		VEHICLE::SET_VEHICLE_MOD(iLocal_168, 24, 10, 0);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_168, 22, 1);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_168, 17, 1);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_168, 21, 1);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_168, 20, 1);
		VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_168, 19, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_168, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_168, 0, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_168, 1);
		PED::ADD_RELATIONSHIP_GROUP("rel_group_peds", &iLocal_187);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_187);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_187, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_187, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_187);
		uLocal_175[0] = PED::CREATE_PED(26, iLocal_179[0], Local_183, fLocal_186, 1, 1);
		uLocal_175[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_168, 26, iLocal_179[1], 1, 1, 1);
		uLocal_175[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_168, 26, iLocal_179[2], 2, 1, 1);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (GlobalFunc_115(uLocal_175[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_175[iVar0], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_175[iVar0], iLocal_187);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_175[iVar0], 0);
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_175[iVar0], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_175[iVar0], 42, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_175[iVar0], 116, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_175[iVar0], 26, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_175[iVar0], 20, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_175[iVar0], 32, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_175[iVar0], 1);
			}
			iVar0++;
		}
		func_41();
	}
}

void func_41()//Position - 0x13D8
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[iVar0]);
		iVar0++;
	}
}

void func_42()//Position - 0x1405
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_169);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::REQUEST_MODEL(iLocal_179[iVar0]);
		iVar0++;
	}
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_190, sLocal_191);
}

void func_43()//Position - 0x143A
{
	int iVar0;
	
	if (GlobalFunc_115(iLocal_153) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_153))
	{
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_153, fLocal_163);
		iVar0 = SYSTEM::ROUND(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_153));
		if (iVar0 > iLocal_160)
		{
			func_18();
		}
		else if (iLocal_164 == 0)
		{
			if (iVar0 > iLocal_166)
			{
				if (iLocal_243 == 1)
				{
					CAM::SET_CINEMATIC_MODE_ACTIVE(1);
				}
				iLocal_164 = 1;
				func_42();
			}
		}
		else if (iLocal_165 == 0)
		{
			if (iVar0 > iLocal_167)
			{
				if (iLocal_243 == 1)
				{
					CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				}
				iLocal_165 = 1;
			}
		}
	}
}

void func_44()//Position - 0x14B5
{
	if ((iLocal_151 == 0 && CAM::DOES_CAM_EXIST(Local_226.f_4)) && CAM::GET_CAM_SPLINE_PHASE(Local_226.f_4) > 0.05f)
	{
		func_81(iLocal_223, 0);
		func_80();
		iLocal_151 = 1;
	}
	if (((iLocal_152 == 0 && iLocal_63 < 4) && CAM::DOES_CAM_EXIST(Local_226.f_4)) && CAM::GET_CAM_SPLINE_PHASE(Local_226.f_4) > 0.88f)
	{
		func_8();
		func_7(iLocal_223, 0);
		iLocal_152 = 1;
	}
	func_79();
	if (GlobalFunc_9141(iLocal_239, 0, "EXTRASUNNY", "cirrocumulus", &Local_226, 0f, 0, 1, 1065353216))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(Local_226.f_10);
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
		GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
		GRAPHICS::_0x0AE73D8DF3A762B2(0);
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
		}
		iLocal_63++;
		if (iLocal_63 < 5)
		{
			if (iLocal_56 == -1)
			{
				iLocal_36 = 1;
			}
			else
			{
				func_7(iLocal_223, 1);
				iLocal_36 = 7;
			}
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::RENDER_SCRIPT_CAMS(false, 1, iLocal_159, 0, 0, 0);
			func_18();
		}
	}
}



































void func_79()//Position - 0x23D6
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((iLocal_63 == 4 && iLocal_150 > -1) && (MISC::GET_GAME_TIMER() - iLocal_158) > (iLocal_150 - 5000))
	{
		if (!GlobalFunc_115(iLocal_153))
		{
			Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_155, sLocal_156), fLocal_157) };
			Var3 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_155, sLocal_156), fLocal_157) };
			iLocal_153 = VEHICLE::CREATE_VEHICLE(iLocal_154, Var0, Var3.f_2, 1, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_153, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_153, 1, 1);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_153, 0);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_153, 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_153, 1, 1, 1, 1, 1, 0, 0, 0);
			VEHICLE::CONTROL_LANDING_GEAR(iLocal_153, 3);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_153, 5000);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_153, iLocal_155, sLocal_156, 1);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_153))
			{
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_153, fLocal_157);
			}
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_153, -1);
			iLocal_150 = -1;
			fLocal_240 = 2f;
			fLocal_241 = 2f;
			fLocal_242 = 1f;
		}
	}
}

void func_80()//Position - 0x24AF
{
	if (iLocal_40 == 0)
	{
		iLocal_40 = 1;
		MISC::_START_BENCHMARK_RECORDING();
	}
}

void func_81(int iParam0, bool bParam1)//Position - 0x24C4
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			func_478();
			SYSTEM::WAIT(0);
		}
	}
}

void func_82()//Position - 0x2508
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
	{
		iLocal_150 = 15000;
		Local_226.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
		CAM::ADD_CAM_SPLINE_NODE(Local_226.f_4, Local_86[iLocal_63 /*3*/], Local_102[iLocal_63 /*3*/], iLocal_150, 3, 2);
		CAM::ADD_CAM_SPLINE_NODE(Local_226.f_4, Local_118[iLocal_63 /*3*/], Local_134[iLocal_63 /*3*/], iLocal_150, 3, 2);
		CAM::SET_CAM_SPLINE_PHASE(Local_226.f_4, 0f);
		CAM::SET_CAM_FOV(Local_226.f_4, 50f);
		CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_226.f_4, 3);
		CAM::SET_CAM_ACTIVE(Local_226.f_4, 1);
		Local_226.f_3 = 0;
		GlobalFunc_9140(&Local_226, 1, 0, 0, 1, 1, 0, 1);
		uLocal_238 = GlobalFunc_7719();
		GlobalFunc_8385(&uLocal_238, 0, 0, 23, 0, 0, 0);
		iLocal_239 = GlobalFunc_208(uLocal_238);
		if (iLocal_63 == 4)
		{
			iLocal_158 = MISC::GET_GAME_TIMER();
		}
		func_18();
	}
}











void func_93()//Position - 0x296E
{
	func_7(iLocal_223, 1);
	func_103();
	if (((iLocal_63 == 0 && GlobalFunc_105(Local_59)) && iLocal_244 == 0) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		uLocal_62 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_244 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (GlobalFunc_115(iLocal_244))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_244, Local_59, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_244, uLocal_62);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_244, 1);
		}
	}
	GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_64[iLocal_63 /*3*/], fLocal_80[iLocal_63], 0, 1);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::CLEAR_AREA(Local_64[iLocal_63 /*3*/], 100f, 1, 0, 0, 0);
	if (GlobalFunc_115(iLocal_244))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_244, 2);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_244, 0);
	}
	GlobalFunc_8533(Local_64[iLocal_63 /*3*/], 100f, 13, 15000, 0, 0);
	func_36();
	func_95(iLocal_63);
	if (iLocal_63 == 4)
	{
		func_94();
	}
	CLOCK::SET_CLOCK_TIME(12, 0, 0);
	iLocal_151 = 0;
	iLocal_152 = 0;
	func_18();
}

void func_94()//Position - 0x2AA6
{
	STREAMING::REQUEST_MODEL(iLocal_154);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_155, sLocal_156);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_154) && !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_155, sLocal_156))
	{
		SYSTEM::WAIT(0);
	}
}

void func_95(int iParam0)//Position - 0x2ADC
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		
		case 1:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
			break;
		
		case 2:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
			break;
		
		case 3:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
			break;
		
		case 4:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
	}
}








void func_103()//Position - 0x2D4D
{
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
}

void func_104()//Position - 0x2D66
{
	if (Global_SAVE_DATA.isGameflowActive)
	{
		GlobalFunc_10869();
		func_130(0, 1, 0);
		MISC::_0xEB2104E905C6F2E9();
		while (MISC::GET_STATUS_OF_MISSION_REPEAT_SAVE() == 1)
		{
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_STATUS_OF_MISSION_REPEAT_SAVE() == 2)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
			return;
		}
		func_105(0);
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	HUD::_FORCE_CLOSE_TEXT_INPUT_BOX();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	GlobalFunc_8316(1, 1, 0, 0);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	PAD::_0xF239400E16C23E08(0, 1);
	SYSTEM::WAIT(100);
	func_7(iLocal_223, 1);
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
	HUD::REQUEST_ADDITIONAL_TEXT("BMARK", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	while (!Global_33954)
	{
		SYSTEM::WAIT(0);
	}
	func_14();
	iLocal_54 = MISC::_GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE();
	if (iLocal_54 < 1)
	{
		iLocal_54 = 1;
	}
	iLocal_56 = MISC::_GET_BENCHMARK_PASS_FROM_COMMAND_LINE();
	if (iLocal_56 < -1 || iLocal_56 >= 5)
	{
		iLocal_56 = -1;
	}
	func_13();
	Local_64[0 /*3*/] = { -9.8369f, -1474.088f, 29.5453f };
	Local_64[1 /*3*/] = { 806.0358f, 1101.248f, 306.0945f };
	Local_64[2 /*3*/] = { 2005.966f, 3803.609f, 31.1808f };
	Local_64[3 /*3*/] = { -1713.261f, -1077.481f, 12.0172f };
	Local_64[4 /*3*/] = { -663.8303f, 4484.105f, 69.2669f };
	fLocal_80[0] = 5.4894f;
	fLocal_80[1] = 348.7347f;
	fLocal_80[2] = 60.1616f;
	fLocal_80[3] = 18.823f;
	fLocal_80[4] = 238.4128f;
	Local_86[0 /*3*/] = { -3.0097f, -1484.317f, 41.1898f };
	Local_86[1 /*3*/] = { 804.6505f, 1184.07f, 347.4004f };
	Local_86[2 /*3*/] = { 1987.125f, 3810.766f, 33.2256f };
	Local_86[3 /*3*/] = { -1705.32f, -1074.665f, 21.6983f };
	Local_86[4 /*3*/] = { -608.3302f, 4463.303f, 23.4348f };
	Local_102[0 /*3*/] = { 0.5292f, 0f, 24.6248f };
	Local_102[1 /*3*/] = { -7.4378f, 0f, 110.8038f };
	Local_102[2 /*3*/] = { -2.1421f, 0f, 37.1211f };
	Local_102[3 /*3*/] = { 1.5777f, 0f, -163.0528f };
	Local_102[4 /*3*/] = { -1.9612f, 0f, -127.5001f };
	Local_118[0 /*3*/] = { -13.842f, -1454.464f, 32.9113f };
	Local_118[1 /*3*/] = { 771.2347f, 1091.115f, 337.3588f };
	Local_118[2 /*3*/] = { 1967.382f, 3840.483f, 54.8269f };
	Local_118[3 /*3*/] = { -1731.106f, -1098.626f, 24.3947f };
	Local_118[4 /*3*/] = { -615.5822f, 4508.309f, 110.3908f };
	Local_134[0 /*3*/] = { -2.4231f, 0f, 1.8101f };
	Local_134[1 /*3*/] = { -4.9158f, 0f, 22.8592f };
	Local_134[2 /*3*/] = { -1.2952f, 0f, 62.8825f };
	Local_134[3 /*3*/] = { -3.393f, 0f, -109.8041f };
	Local_134[4 /*3*/] = { -22.87f, 0f, -133.0594f };
	iLocal_179[0] = joaat("g_m_m_armboss_01");
	iLocal_179[1] = joaat("g_m_m_armgoon_01");
	iLocal_179[2] = joaat("g_m_m_armlieut_01");
	iLocal_195[0] = joaat("phantom");
	iLocal_195[1] = joaat("boxville");
	iLocal_201[0] = joaat("s_m_y_construct_01");
	iLocal_201[1] = joaat("s_m_m_trucker_01");
	Local_204[0 /*3*/] = { -542.9353f, 245.1501f, 82.0225f };
	Local_204[1 /*3*/] = { -543.4668f, 235.8478f, 81.8742f };
	fLocal_211[0] = 173.5275f;
	fLocal_211[1] = 191.928f;
	func_18();
}

void func_105(bool bParam0)//Position - 0x3135
{
	int iVar0;
	
	MISC::SET_GAME_PAUSED(0);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		REPLAY::_0xE058175F8EAFE79A(1);
		Global_96306 = 1;
		while (Global_96306)
		{
			SYSTEM::WAIT(0);
		}
		REPLAY::_0xE058175F8EAFE79A(0);
	}
	PLAYER::FORCE_CLEANUP(8);
	PLAYER::FORCE_CLEANUP(64);
	SYSTEM::WAIT(0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
	}
	if (bParam0)
	{
		while (Global_68507 != -1)
		{
			GlobalFunc_5746();
			if (Global_68507 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_81155[Global_68507 /*34*/]), 2);
			}
			if (Global_34876 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_34876, 2);
				Global_34876 = 0;
			}
			if (Global_34875 != -1)
			{
				GlobalFunc_54(&Global_34875);
			}
			Global_87297 = 0;
			Global_34879 = 0;
			Global_68507 = -1;
		}
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 0, 0, 0, 0);
		Global_87297 = 0;
		Global_34879 = 0;
		Global_68507 = -1;
		Global_34875 = -1;
		Global_34876 = 0;
	}
	else
	{
		while ((((Global_87297 || Global_34879) || Global_68507 != -1) || Global_34875 != -1) || Global_34876 != 0)
		{
			GlobalFunc_5746();
			SYSTEM::WAIT(0);
			if (Global_68507 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_81155[Global_68507 /*34*/]), 2);
			}
			if (Global_34876 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_34876, 2);
				Global_34876 = 0;
			}
			if (Global_34875 != -1)
			{
				GlobalFunc_54(&Global_34875);
			}
			Global_87297 = 0;
			Global_34879 = 0;
			Global_68507 = -1;
			SYSTEM::WAIT(0);
		}
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	HUD::THEFEED_FLUSH_QUEUE();
	while (Global_68250 != -1)
	{
		if (!Global_68262)
		{
			Global_68262 = 1;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE() && iVar0 > MISC::GET_GAME_TIMER())
	{
		SYSTEM::WAIT(0);
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (iVar0 > MISC::GET_GAME_TIMER())
	{
	}
	Global_SAVE_DATA.isGameflowActive = 0;
	GlobalFunc_9080();
	GlobalFunc_6685(1);
	func_108();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	HUD::CLEAR_GPS_PLAYER_WAYPOINT();
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[9] == 5)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[9] = 0;
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[8] == 1)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[8] = 0;
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/].f_13[8] == 3)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/].f_13[8] = 0;
	}
	while (!GlobalFunc_2376(GlobalFunc_1432()))
	{
		STREAMING::REQUEST_MODEL(joaat("player_zero"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("player_zero")))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), joaat("player_zero"));
		}
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
}



void func_108()//Position - 0x344B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_109(iVar0);
		iVar0++;
	}
}

void func_109(int iParam0)//Position - 0x346C
{
	if (!GlobalFunc_7702(iParam0, 16, 1))
	{
		GlobalFunc_7969(iParam0, 17, 1);
	}
}





















void func_130(bool bParam0, int iParam1, bool bParam2)//Position - 0x3C51
{
	var uVar0;
	var uVar3;
	
	GlobalFunc_2292();
	GlobalFunc_7955();
	func_163();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Comms_Game_time = MISC::GET_GAME_TIMER();
	if (Global_68507 == 62 || Global_68508 == 62)
	{
		func_131(2, 1);
	}
	if (!bParam0)
	{
		Global_90001.f_8 = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_SAVE_DATA.RP_PLAYER_x, Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_heading, bParam0, &uVar0, &uVar3);
}

void func_131(int iParam0, bool bParam1)//Position - 0x3CF4
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_85405[iParam0 /*10*/].f_8, bParam1, 1);
	GlobalFunc_9130(iParam0);
	GlobalFunc_5647(iParam0);
	GlobalFunc_5646(iParam0);
	GlobalFunc_10842(iParam0);
}
































void func_163()//Position - 0x8857
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	struct<3> Var11;
	int iVar14;
	
	GlobalFunc_9023(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_11319(PLAYER::PLAYER_PED_ID(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			Var11 = { 0f, 0f, 0f };
			iVar14 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_87708[iVar0], 1);
			if ((((iVar14 != 10 && iVar14 != 3) && iVar14 != 2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_87698[iVar0]))
			{
				while (!bVar1 && GlobalFunc_2197(Global_87708[iVar0], iVar2, &Var3, &iVar14))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_87698[iVar0]))
					{
						bVar1 = true;
						Var11 = { ENTITY::GET_ENTITY_COORDS(Global_87698[iVar0], 0) };
						GlobalFunc_2290(Global_87708[iVar0], iVar2, &Var11);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}



























































































































































































































































































































void func_478()//Position - 0x56932
{
	GlobalFunc_5077();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_242, fLocal_242);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_241);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_241);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_240);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 217, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 211, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 212, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 213, 1);
}

int func_479(int iParam0)//Position - 0x56995
{
	return func_480(iParam0, 1, 60);
}

int func_480(var uParam0, bool bParam1, int iParam2)//Position - 0x569A6
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (GlobalFunc_756() && !GlobalFunc_39(14))
	{
		return 3;
	}
	if (GlobalFunc_489())
	{
		return 3;
	}
	if (GlobalFunc_2383())
	{
		return 8;
	}
	if (bParam1)
	{
		if (GlobalFunc_486())
		{
			return 8;
		}
	}
	if (Global_87287)
	{
		return 3;
	}
	if (Global_24697)
	{
		return 8;
	}
	if (Global_24592)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (GlobalFunc_747(Global_96378, 256))
	{
		return 3;
	}
	if (((GlobalFunc_490() || GlobalFunc_331()) || GlobalFunc_9169()) || GlobalFunc_2382())
	{
		return 5;
	}
	if (GlobalFunc_2382())
	{
		return 5;
	}
	if (GlobalFunc_2381())
	{
		return 5;
	}
	if (GlobalFunc_2380())
	{
		return 5;
	}
	if (GlobalFunc_331())
	{
		return 5;
	}
	if (GlobalFunc_160() && !Global_96305)
	{
		return 8;
	}
	if (GlobalFunc_9169())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_488())
	{
		return 4;
	}
	if (GlobalFunc_268())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_484(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_96400)
			{
				return 10;
			}
		}
	}
	if (Global_24695)
	{
		return 8;
	}
	if (Global_68243)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (GlobalFunc_2378())
	{
		return 8;
	}
	if (Global_24446)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!GlobalFunc_5747(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}




int func_484(int iParam0)//Position - 0x56E18
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 5;
	}
	Var0 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
	if (Global_96440[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (GlobalFunc_230(2) && !GlobalFunc_230(17))
	{
		if (SYSTEM::VDIST2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && GlobalFunc_891(26))
	{
		return 9;
	}
	if (!iLocal_26)
	{
		func_485(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_96316 || iVar3 == Global_96317) || iVar3 == Global_96318)
	{
		return 9;
	}
	else if (iVar3 == Global_96307)
	{
		return 9;
	}
	else if (iVar3 == Global_96308)
	{
		return 9;
	}
	else if (iVar3 == Global_96311)
	{
		return 9;
	}
	else if (iVar3 == Global_96310)
	{
		return 9;
	}
	else if (iVar3 == Global_96312)
	{
		return 9;
	}
	else if (iVar3 == Global_96313)
	{
		return 9;
	}
	else if (iVar3 == Global_96314)
	{
		return 9;
	}
	else if (iVar3 == Global_96315)
	{
		return 9;
	}
	else if (iVar3 == Global_96319)
	{
		return 9;
	}
	else if (iVar3 == Global_96320)
	{
		return 9;
	}
	else if (iVar3 == Global_96321)
	{
		return 9;
	}
	else if (iVar3 == Global_96322)
	{
		return 9;
	}
	else if (iVar3 == Global_96323)
	{
		return 9;
	}
	else if ((iVar3 == Global_96324 || iVar3 == Global_96325) && GlobalFunc_230(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_96326[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_485(var uParam0)//Position - 0x57240
{
	int iVar0;
	
	uParam0 = uParam0;
	GlobalFunc_7109(24, &Global_96307);
	GlobalFunc_7109(47, &Global_96308);
	GlobalFunc_7109(10, &Global_96316);
	GlobalFunc_7109(9, &Global_96317);
	GlobalFunc_7109(8, &Global_96318);
	GlobalFunc_7109(21, &Global_96319);
	GlobalFunc_7109(11, &Global_96320);
	GlobalFunc_7109(18, &Global_96324);
	GlobalFunc_7109(19, &Global_96325);
	Global_96311 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_96310 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_96312 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_96313 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_96314 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_96315 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_96321 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_96322 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_96323 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_96326[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(GlobalFunc_5748(iVar0));
		iVar0++;
	}
	iLocal_26 = 1;
}
























void func_509(int iParam0)//Position - 0x58816
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_190(&iLocal_244);
	func_41();
	func_32();
	func_103();
	func_37();
	func_19();
	if (iParam0 == 1)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
		GlobalFunc_8316(0, 1, 0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		CAM::SET_CINEMATIC_MODE_ACTIVE(0);
		PAD::_0xF239400E16C23E08(0, -1);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		MISC::QUEUE_MISSION_REPEAT_LOAD();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

