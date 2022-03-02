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
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	char* sLocal_84 = NULL;
	struct<61> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_146 = 16;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
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
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	float fLocal_314 = 0f;
	float fLocal_315 = 0f;
	float fLocal_316 = 0f;
	float fLocal_317 = 0f;
	float fLocal_318 = 0f;
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
	uLocal_79 = GlobalFunc_4946(60);
	uLocal_80 = GlobalFunc_4946(14);
	sLocal_84 = "Marnie";
	fLocal_314 = 40f;
	fLocal_315 = 0.35f;
	fLocal_316 = 0f;
	fLocal_317 = 0f;
	fLocal_318 = 0.05f;
	Local_85 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_85);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_296();
		AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_287(&Local_85))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	GlobalFunc_9621(60, 0, 0);
	GlobalFunc_9621(55, 0, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_BTT", 0);
		SYSTEM::WAIT(0);
		func_269(Local_85.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_82)
		{
			case 0:
				func_250();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x144
{
	switch (iLocal_83)
	{
		case 0:
			GlobalFunc_9623("ep_5_rcm", 0);
			iLocal_83 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7628(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_85.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_85.f_28[0], sLocal_84, 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				GlobalFunc_8954();
				iLocal_311 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("EPS5_START");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(0);
				func_229(638.7248f, 108.2159f, 87.00301f, 644.4667f, 124.2222f, 94.64042f, 12.5f, 638.915f, 101.537f, 88.1472f, 331.3091f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_225(637.02f, 119.7093f, 89.5f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_83 = 2;
			}
			break;
		
		case 2:
			if (iLocal_311 == 0)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					iLocal_311 = 1;
				}
				if (func_224())
				{
					iLocal_311 = 1;
				}
				func_222();
			}
			else if (iLocal_311 == 1)
			{
				func_222();
				func_224();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_212(1, 1, 1, 1);
					iLocal_83 = 3;
				}
			}
			break;
		
		case 3:
			RECORDING::_0x81CBAE94390F9F89();
			AUDIO::TRIGGER_MUSIC_EVENT("EPS5_STOP");
			GlobalFunc_4923(&Local_85, 0, 1);
			func_2();
			break;
	}
}

void func_2()//Position - 0x2E2
{
	int iVar0;
	
	func_210();
	GlobalFunc_6677("EPSROBE_HE", 1, 0, -1, 10000, 1, 0, 0, 0);
	GlobalFunc_10731(4, 16, 0);
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 14)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 14, 1);
		GlobalFunc_4(23, 14);
	}
	GlobalFunc_11314(322, 1);
	func_296();
}
















































































































































































































void func_210()//Position - 0x25E0C
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
}


void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25F12
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










void func_222()//Position - 0x26203
{
	if (GlobalFunc_115(Local_85.f_28[0]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			GlobalFunc_881(&(Local_85.f_28[0]));
		}
	}
}


int func_224()//Position - 0x2626D
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_225(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x262A1
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
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




void func_229(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x264E2
{
	GlobalFunc_9250(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}





















void func_250()//Position - 0x272A5
{
	GlobalFunc_8320();
	switch (iLocal_83)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("rcmepsilonism5");
			iLocal_83 = 1;
			break;
		
		case 1:
			if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 1) >= 4.5f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (GlobalFunc_1720())
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(Local_85.f_28[0], 0f, 0f, 0.5f, 1, 30000, 2000, 2000, 0);
					}
					else
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(Local_85.f_28[0], -1f, 0f, 0f, 0, 30000, 2000, 2000, 0);
					}
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_314);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_315);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_316);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_317);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_318);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
			}
			if (iLocal_313 == 0)
			{
				if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 1) <= 2.5f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 0);
					iLocal_313 = 1;
				}
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism5"))
			{
				if (GlobalFunc_115(Local_85.f_28[0]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_85.f_28[0], "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_85.f_28[0], "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall") < 0.1f)
						{
							GlobalFunc_1286(&uLocal_146, 4, Local_85.f_28[0], "MARNIE", 0, 1);
							GlobalFunc_1286(&uLocal_146, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							TASK::TASK_LOOK_AT_ENTITY(Local_85.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 12, 2);
							TASK::TASK_PLAY_ANIM(Local_85.f_28[0], "rcmepsilonism5", "leadin_action", 8f, -8f, -1, 2, 0, 0, 0, 0);
							iLocal_83 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(Local_85.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_85.f_28[0], "rcmepsilonism5", "leadin_action", 3))
				{
					if (iLocal_312 == 0)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_85.f_28[0], "rcmepsilonism5", "leadin_action") >= 0.38f)
						{
							if (GlobalFunc_10607(&uLocal_146, "EPS5AUD", "EP5_RCM_LI", 8, 0, 0, 0))
							{
								iLocal_312 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_85.f_28[0], "rcmepsilonism5", "leadin_action") >= 0.95f)
					{
						iLocal_83 = 3;
					}
					if (iLocal_313 == 0)
					{
						if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 1) <= 2.5f)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_85.f_28[0], 0);
							iLocal_313 = 1;
						}
					}
				}
				else
				{
					iLocal_83 = 3;
				}
			}
			break;
		
		case 3:
			iLocal_82 = 1;
			iLocal_83 = 0;
			break;
	}
}



















void func_269(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x27E12
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


















int func_287(var uParam0)//Position - 0x28A58
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0[0] = uLocal_79;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 638.1478f, 106.1284f, 87.36301f };
			uParam0->f_17[1 /*3*/] = { 646.6449f, 129.2266f, 93.14977f };
			uParam0->f_24 = 12.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_5_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall", 0);
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
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 60, 636.58f, 119.68f, 90.56f, 80.62f, "EPSILON LAUNCHER RC", 1) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
				{
					iVar4 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar4);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}









void func_296()//Position - 0x28DEA
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	if (GlobalFunc_115(Local_85.f_28[0]))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_85.f_28[0], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_85.f_28[0], 1862763509);
	}
	GlobalFunc_9165(&Local_85, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






































