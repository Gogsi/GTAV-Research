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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	int iLocal_35 = 0;
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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	bool bLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 16;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(58);
	iLocal_80 = joaat("felon2");
	Local_149 = { -1106.999f, 288.96f, 63.4f };
	Local_152 = { 0f, 0f, 12.06f };
	Local_82 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_82);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_292();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_279(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_82, 0, 1);
		Global_68490 = 0;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		uLocal_327 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_115(Local_82.f_28[0]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_82.f_28[0], uLocal_327);
		PED::SET_PED_CONFIG_FLAG(Local_82.f_28[0], 132, 1);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_EC", 0);
		SYSTEM::WAIT(0);
		func_260(Local_82.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_143)
		{
			case 0:
				func_253();
				break;
			
			case 1:
				func_230();
				break;
			
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x179
{
	switch (iLocal_144)
	{
		case 0:
			GlobalFunc_2838("Doing setup for leadout");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
			STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1leadinout") && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 0, 0f, 0);
					}
					iLocal_146 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 1, 0, 1);
				}
				iLocal_144 = 1;
			}
			break;
		
		case 1:
			if (iLocal_157 == 1)
			{
				GlobalFunc_2838("Skip detected, waiting 500ms...");
				if ((MISC::GET_GAME_TIMER() - iLocal_158) >= 500)
				{
					func_219(1, 1, 1);
					iLocal_157 = 0;
				}
			}
			if (!iLocal_159)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_82.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_146))
				{
					uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_149, Local_152, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_82.f_28[0], uLocal_148, "rcmjosh1leadinout", "leadout_josh", 8f, -4f, 27, 0, 1000f, 16);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, uLocal_148, "leadout_gate", "rcmjosh1leadinout", 8f, 1090519040, 0, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_146);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_82.f_28[0], 1, 0);
					GlobalFunc_2838("Done Josh leadout anim");
					iLocal_159 = 1;
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.29f)
				{
					if (!iLocal_160)
					{
						GlobalFunc_173(&uLocal_162, 2, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
						GlobalFunc_173(&uLocal_162, 5, Local_82.f_28[0], "Josh", 0, 1);
						if (GlobalFunc_10607(&uLocal_162, "JOSH1AU", "JOSH1_OUT", 8, 0, 0, 0))
						{
							GlobalFunc_2838("Leadout convo done");
							iLocal_160 = 1;
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.98f)
				{
					GlobalFunc_2838("Leadout done, end mission");
					iLocal_144 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.107f, 290.4275f, 62.9487f, -1102.038f, 291.3421f, 66.27895f, 2f, 0, 1, 0))
				{
					GlobalFunc_2838("Too close, stopping scene");
					if (GlobalFunc_115(Local_82.f_28[0]))
					{
						TASK::CLEAR_PED_TASKS(Local_82.f_28[0]);
						GlobalFunc_2838("Stopping Josh?");
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, -8f, 1);
					}
					iLocal_161 = 1;
				}
				if (func_207(Local_82.f_28[0], PLAYER::PLAYER_PED_ID(), 1) > 17.5f)
				{
					if (GlobalFunc_115(Local_82.f_28[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_82.f_28[0], -8f, 1);
						TASK::CLEAR_PED_TASKS(Local_82.f_28[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, -8f, 1);
					}
					iLocal_161 = 1;
				}
				if ((PED::IS_PED_INJURED(Local_82.f_28[0]) || FIRE::IS_ENTITY_ON_FIRE(Local_82.f_28[0])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_82.f_28[0], 1), 5f))
				{
					if (GlobalFunc_115(Local_82.f_28[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_82.f_28[0], -8f, 1);
						TASK::CLEAR_PED_TASKS(Local_82.f_28[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, -8f, 1);
					}
					iLocal_161 = 1;
				}
			}
			else
			{
				GlobalFunc_2838("Leadout ended early, end mission");
				iLocal_144 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_4923(&Local_82, 0, 0);
			if (GlobalFunc_115(Local_82.f_28[0]))
			{
				if (iLocal_161 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_145);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.44f, 317.46f, 65.98f, 1f, 30000, 1048576000, 0, 1193033728);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 1090519040, -1056964608, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_145);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_145);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.44f, 317.46f, 65.98f, 1f, 30000, 0.25f, 1, 1193033728);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 1090519040, -1056964608, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_145);
				}
				TASK::TASK_PERFORM_SEQUENCE(Local_82.f_28[0], uLocal_145);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_145);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_82.f_28[0], 0);
				if (iLocal_161 == 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_82.f_28[0], -668482597, 0, 0, 1);
				}
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 0, 0f, 0);
			}
			if (iLocal_161 == 0)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 0f, 1, 1);
				GlobalFunc_2838("Josh 4: PROP_LRGGATE_01c_L - Closed");
			}
			func_2();
			break;
	}
}

void func_2()//Position - 0x639
{
	GlobalFunc_9621(58, 2, 1);
	while (!GlobalFunc_7168(-1816533207, 0, 4, 58, 6000, 6000, 65, 0, -1, 17, 1))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_11328(322, 1);
	func_292();
}













































































































































































































float func_207(int iParam0, int iParam1, int iParam2)//Position - 0x25630
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}












void func_219(int iParam0, int iParam1, int iParam2)//Position - 0x25D08
{
	func_221(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}


void func_221(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25D78
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_230()//Position - 0x2602E
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_2838("Trying to set Josh component variation");
		if (GlobalFunc_115(Local_82.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Josh", Local_82.f_28[0], 0);
		}
	}
	switch (iLocal_144)
	{
		case 0:
			if (GlobalFunc_7628(1, 1093140480, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1@impatient");
				VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Josh1Driveaway");
				if (GlobalFunc_115(Local_82.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_82.f_28[0], "Josh", 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1140.85f, 263.4714f, 63.35776f, -1205.44f, 412.1574f, 78.2589f, 43.75f, 0, 0, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(-1146.306f, 295.9831f, 66.13612f, 9f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1143.244f, 280.2762f, 65.41892f, 12f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1152.426f, 313.6157f, 67.10429f, 12f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1165.966f, 332.6786f, 68.81f, 12f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1178.729f, 346.4572f, 70.04675f, 12f, 0, 0, 0, 0, 0);
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1140.85f, 263.4714f, 63.35776f, -1205.44f, 412.1574f, 78.2589f, 43.75f, 0, 0, 0, 0, 0);
				uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (GlobalFunc_4940(uVar0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0, -1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, 0, 1, 0))
					{
						Var1 = { -1098.87f, 280.88f, 63.47f };
						fVar4 = 85.98f;
					}
					else
					{
						Var1 = { -1095.231f, 279.3389f, 62.7919f };
						fVar4 = 84.67f;
					}
				}
				else
				{
					Var1 = { -1095.231f, 279.3389f, 62.7919f };
					fVar4 = 84.67f;
				}
				GlobalFunc_8954();
				RECORDING::_0x293220DA1B46CEBC(8f, 0f, 0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(0);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
				{
					GlobalFunc_2838("Locked left gate open?");
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 1, 90f, 0);
				}
				func_235(-1115.984f, 285.5924f, 61.94241f, -1097.599f, 285.1346f, 66.34669f, 33f, Var1, fVar4, 3f, 6f, 3f, 1, 1, 1, 0, 0);
				func_232(-1104.93f, 291.25f, 64.3f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_144 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 8f, 0);
				GlobalFunc_2838("Done Trevor exit");
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
			{
				GlobalFunc_2838("Exit state for Josh...");
				if (!iLocal_159)
				{
					GlobalFunc_2838("Played lead-out on Josh exit state");
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_82.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_149, Local_152, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_82.f_28[0], uLocal_148, "rcmjosh1leadinout", "leadout_josh", 1000f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, uLocal_148, "leadout_gate", "rcmjosh1leadinout", 8f, 1090519040, 0, 1148846080);
						GlobalFunc_2838("Done Josh leadout anim on Josh exit state");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_146);
						PED::FORCE_PED_MOTION_STATE(Local_82.f_28[0], -1871534317, 0, 1, 1);
						iLocal_159 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
			{
				GlobalFunc_2838("Exit state for camera...");
				if (!iLocal_159)
				{
					GlobalFunc_2838("Played lead-out on camera exit state");
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_82.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_149, Local_152, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_82.f_28[0], uLocal_148, "rcmjosh1leadinout", "leadout_josh", 1000f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, uLocal_148, "leadout_gate", "rcmjosh1leadinout", 8f, 1090519040, 0, 1148846080);
						GlobalFunc_2838("Done Josh leadout anim on cam exit state cutscene");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_146);
						PED::FORCE_PED_MOTION_STATE(Local_82.f_28[0], -1871534317, 0, 1, 1);
						iLocal_159 = 1;
					}
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_157 = 1;
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				iLocal_158 = MISC::GET_GAME_TIMER();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
				{
					ENTITY::REMOVE_MODEL_HIDE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 1, 0f, 0);
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0))
				{
					ENTITY::REMOVE_MODEL_HIDE(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, 1, 0f, 0);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				GlobalFunc_2838("cutscene not active...");
				if (!iLocal_159)
				{
					GlobalFunc_2838("Played lead-out on not cutscene active");
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_82.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_146))
					{
						uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_149, Local_152, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_82.f_28[0], uLocal_148, "rcmjosh1leadinout", "leadout_josh", 8f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, uLocal_148, "leadout_gate", "rcmjosh1leadinout", 8f, 1090519040, 0, 1148846080);
						GlobalFunc_2838("Done Josh leadout anim on non active cutscene");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_146);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_82.f_28[0], 0, 0);
						iLocal_159 = 1;
					}
				}
				iLocal_144 = 2;
			}
			break;
		
		case 2:
			func_221(1, 1, 1, 1);
			iLocal_143 = 2;
			iLocal_144 = 0;
			break;
	}
}


void func_232(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26703
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_235(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x26908
{
	GlobalFunc_9250(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}


















void func_253()//Position - 0x27652
{
	GlobalFunc_8320();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_2838("Trying to set Josh component variation");
		if (GlobalFunc_115(Local_82.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Josh", Local_82.f_28[0], 0);
		}
	}
	switch (iLocal_144)
	{
		case 0:
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1115.071f, 279.6581f, 62.42184f, -1092.428f, 284.1398f, 67.31652f, 15.75f, 0, 1, 0))
			{
				GlobalFunc_2838("Doing setup for leadin");
				GlobalFunc_173(&uLocal_162, 2, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
				GlobalFunc_173(&uLocal_162, 5, Local_82.f_28[0], "Josh", 0, 1);
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1leadinout"))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 0, 0f, 0);
					}
					iLocal_146 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 1, 0, 1);
					GlobalFunc_8955(1);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 14, 8);
					iLocal_144 = 1;
				}
			}
			else
			{
				GlobalFunc_2838("Skipping setup for leadin (wrong area)");
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, 0, 0f, 0);
				}
				iLocal_146 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 1, 0, 1);
				iLocal_144 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				if (!bLocal_155)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1115.071f, 279.6581f, 62.42184f, -1092.428f, 284.1398f, 67.31652f, 15.75f, 0, 1, 0))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_82.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_146))
						{
							uLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(Local_149, Local_152, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_82.f_28[0], uLocal_147, "rcmjosh1leadinout", "leadin_josh", 8f, -8f, 25, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_146, uLocal_147, "leadin_gate", "rcmjosh1leadinout", 8f, 1090519040, 0, 1148846080);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(Local_82.f_28[0], PLAYER::PLAYER_PED_ID(), 4000, 2060, 2);
							GlobalFunc_2838("Done Josh leadin anim");
							bLocal_155 = true;
						}
					}
					else
					{
						if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bLocal_155)
						{
							GlobalFunc_2838("Cannot play lead-in, re-requesting cutscene with new sections");
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 13, 8);
						}
						GlobalFunc_2838("Replay in progress, skipping leadin");
						iLocal_144 = 2;
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_147))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_147) > 0.15f)
					{
						if (!iLocal_156)
						{
							if (GlobalFunc_10607(&uLocal_162, "JOSH1AU", "JOSH1_LEADIN", 8, 0, 0, 0))
							{
								GlobalFunc_2838("Leadin convo done");
								iLocal_156 = 1;
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_147) > 0.9f)
					{
						GlobalFunc_2838("Leadin anim done, launch cutscene");
						iLocal_144 = 2;
					}
					if (func_207(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 2.5f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
				}
				else
				{
					GlobalFunc_2838("Leadin not playing, launch cutscene");
					iLocal_144 = 2;
				}
			}
			else
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bLocal_155)
				{
					GlobalFunc_2838("Cannot play lead-in, re-requesting cutscene with new sections");
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 13, 8);
				}
				GlobalFunc_2838("Replay in progress, skipping leadin");
				iLocal_144 = 2;
			}
			break;
		
		case 2:
			iLocal_143 = 1;
			iLocal_144 = 0;
			break;
	}
}







void func_260(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x27BB3
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}



















int func_279(var uParam0)//Position - 0x28780
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = iLocal_80;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 1;
			uParam0->f_15 = 9f;
			StringCopy(&(uParam0->f_9), "JOSH_1_INT_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmjosh1", "idle", 0);
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 58, -1104.72f, 291.02f, 64.39f, 138.35f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_281(&(uParam0->f_35[0]), 1);
			}
			if (!func_280(1, 1))
			{
				bVar4 = false;
			}
			if (bVar4)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			PATHFIND::SET_PED_PATHS_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, 0, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_280(bool bParam0, bool bParam1)//Position - 0x288ED
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0, bool bParam1)//Position - 0x2895B
{
	struct<3> Var0;
	float fVar3;
	
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar3 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar3 = 6.077003f;
	}
	GlobalFunc_8256(uParam0, iLocal_80, Var0, fVar3);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, 0, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
}











void func_292()//Position - 0x28CB5
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		GlobalFunc_2838("...Random Character Script was triggered so additional cleanup required");
	}
	GlobalFunc_132(&(Local_82.f_28[0]), 1, 1, 1);
	GlobalFunc_9165(&Local_82, 1, 0, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, 1, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, 0);
	CAM::DESTROY_ALL_CAMS(0);
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	SCRIPT::TERMINATE_THIS_THREAD();
}





































