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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 16;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
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
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	float fLocal_274 = 0f;
	bool bLocal_275 = 0;
	bool bLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	char* sLocal_284 = NULL;
	bool bLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_257 = joaat("a_m_m_eastsa_02");
	iLocal_258 = joaat("ig_talina");
	iLocal_259 = joaat("emperor");
	sLocal_260 = "RANDOM@CRASH_RESCUE@WOUNDED@BASE";
	sLocal_261 = "MOVE_INJURED_GENERIC";
	sLocal_262 = "RANDOM@CRASH_RESCUE@HELP_VICTIM_UP";
	sLocal_263 = "random@crash_rescue@dead_ped";
	sLocal_264 = "RANDOM@CRASH_RESCUE@CAR_DEATH@LOW_CAR";
	sLocal_265 = "RANDOM@CRASH_RESCUE@CAR_DEATH@STD_CAR";
	sLocal_266 = "RANDOM@CRASH_RESCUE@CAR_DEATH@VAN";
	sLocal_268 = "random@crash_rescue@get_victim_to_friend";
	Local_271 = { 1933.506f, 6280.579f, 41.7f };
	fLocal_274 = 218.0731f;
	fLocal_280 = 0f;
	fLocal_281 = 0.975f;
	Local_56 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_59 = { 1735.79f, 3840.59f, 33.9f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_74))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_74, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_74);
			}
			TASK::TASK_WANDER_STANDARD(iLocal_74, 1193033728, 0);
			PED::SET_PED_KEEP_TASK(iLocal_74, 1);
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_111() && func_323() == 2)
		{
			GlobalFunc_4956();
		}
		func_308();
	}
	if (func_307())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_2268())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_265(Local_56, -1, 0, 0, 0))
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
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_51)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					switch (iLocal_52)
					{
						case 0:
							if (func_260())
							{
								func_308();
							}
							else if (GlobalFunc_10587())
							{
								func_308();
							}
							else
							{
								func_247();
							}
							break;
						
						case 1:
							func_228();
							break;
						
						case 2:
							func_222();
							break;
					}
				}
				else
				{
					func_308();
				}
				break;
			
			case 1:
				switch (iLocal_53)
				{
					case 0:
						func_195();
						break;
					
					case 1:
						func_20();
						break;
					
					case 2:
						func_1();
						break;
				}
				break;
		}
	}
}

void func_1()//Position - 0x259
{
	switch (iLocal_282)
	{
		case 0:
			if (GlobalFunc_115(iLocal_74))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, 1);
				if (!GlobalFunc_111())
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_73))
					{
						HUD::REMOVE_BLIP(&uLocal_73);
					}
					iLocal_283 = MISC::GET_GAME_TIMER() + 6000;
					if (bLocal_285)
					{
						sLocal_284 = "RECRA_VDIE2";
					}
					else
					{
						sLocal_284 = "RECRA_VDIE";
					}
					PED::SET_PED_CONFIG_FLAG(iLocal_74, 137, 1);
					iLocal_282++;
				}
			}
			else
			{
				func_308();
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_74))
			{
				if (GlobalFunc_10618(&uLocal_87, "RECRAAU", sLocal_284, 3, 0, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_283)
				{
					iLocal_282++;
				}
			}
			else
			{
				func_308();
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_8315() == 0)
				{
					if (bLocal_285)
					{
						sLocal_284 = "RECRA_MDIE2";
					}
					else
					{
						sLocal_284 = "RECRA_MDIE";
					}
				}
				else if (GlobalFunc_8315() == 1)
				{
					if (bLocal_285)
					{
						sLocal_284 = "RECRA_FDIE2";
					}
					else
					{
						sLocal_284 = "RECRA_FDIE";
					}
				}
				else if (GlobalFunc_8315() == 2)
				{
					if (bLocal_285)
					{
						sLocal_284 = "RECRA_TDIE2";
					}
					else
					{
						sLocal_284 = "RECRA_TDIE";
					}
				}
				iLocal_283 = MISC::GET_GAME_TIMER() + 500;
				iLocal_282++;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() > iLocal_283 && CAM::IS_SCREEN_FADED_IN())
			{
				if (!PED::IS_PED_INJURED(iLocal_74))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
					{
						PED::SET_PED_DIES_IN_VEHICLE(iLocal_74, 1);
						PED::APPLY_DAMAGE_TO_PED(iLocal_74, 200, 0);
					}
					else
					{
						PED::SET_PED_TO_RAGDOLL(iLocal_74, 500, 1000, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_74, 0);
					}
					iLocal_283 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_282++;
				}
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() > iLocal_283 && GlobalFunc_10618(&uLocal_87, "RECRAAU", sLocal_284, 3, 0, 0, 0)) || MISC::GET_GAME_TIMER() > iLocal_283 + 6000)
			{
				func_308();
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_74))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				TASK::CLEAR_PED_TASKS(iLocal_74);
				PED::SET_PED_TO_RAGDOLL(iLocal_74, 500, 1000, 0, 0, 0, 0);
				PED::APPLY_DAMAGE_TO_PED(iLocal_74, 200, 0);
				func_308();
			}
			else
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				func_308();
			}
			break;
	}
}



















void func_20()//Position - 0xCD5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_54)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_74) && !PED::IS_PED_INJURED(iLocal_75))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_74) || ENTITY::IS_ENTITY_AT_COORD(iLocal_74, Local_59, Global_21, 0, 1, 0))
				{
					GlobalFunc_702(1, 0, 1);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 1, 1056964608, 0, 1))
						{
							iVar0 = 1;
						}
					}
					else
					{
						GlobalFunc_9628(1722.325f, 3842.08f, 33.5323f, 1741.269f, 3856.862f, 37.1775f, 11f, 1740.917f, 3831.571f, 33.8387f, 121.9f, 1, 1, 1, 0, 0);
						iVar0 = 1;
					}
				}
			}
			if (iVar0 == 1)
			{
				if (GlobalFunc_1720())
				{
					iLocal_287 = 1;
				}
				else
				{
					iLocal_287 = 0;
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_73))
				{
					HUD::REMOVE_BLIP(&uLocal_73);
				}
				func_65(1731.052f, 3847.646f, 33.813f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_75, 1), 20f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_75, 1), 20f, 0);
				SYSTEM::WAIT(0);
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_74) && !PED::IS_PED_INJURED(iLocal_75))
			{
				if (GlobalFunc_10630(&uLocal_87, "RECRAAU", "RECRA_ARRIV", "RECRA_ARRIV_1", 3, 0, 0))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_74, 200);
					GlobalFunc_8380(1, 1, 1, 0);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
						if (func_56(iVar1))
						{
							ENTITY::SET_ENTITY_COORDS(iVar1, 1738.655f, 3836.227f, 33.879f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar1, 119f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iVar1, Local_59, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar1, 119f);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1);
						if (GlobalFunc_1720())
						{
							CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
					}
					else
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1734.259f, 3840.59f, 33.7883f, 1, 0, 0, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_74, 1738.047f, 3842.438f, 33.7707f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_74, 36.8203f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_74, 0, 0);
					MISC::CLEAR_AREA(Local_59, 4f, 1, 0, 0, 0);
					GlobalFunc_190(&iVar1);
					uLocal_270 = PED::CREATE_SYNCHRONIZED_SCENE(Local_79, Local_82, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_74, uLocal_270, sLocal_268, "helping_friend_inside_victim", 1000f, -1000f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_75, uLocal_270, sLocal_268, "helping_friend_inside_friend", 1000f, -1000f, 0, 0, 1148846080, 0);
					uLocal_86 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_86, uLocal_270, "HELPING_FRIEND_INSIDE_CAM", sLocal_268);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_270, fLocal_280);
					CAM::SET_CAM_ACTIVE(uLocal_86, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					iLocal_54 = 4;
				}
			}
			break;
		
		case 4:
			if ((iLocal_287 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_270)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_270) > 0.97f)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_287 = 0;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_270) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_270) >= fLocal_281) || func_52())
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				CAM::SET_CAM_ACTIVE(uLocal_86, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_86, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				PED::DELETE_PED(&iLocal_74);
				PED::DELETE_PED(&iLocal_75);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_50(1, 1, 1, 1);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_702(0, 0, 1);
				func_21();
			}
			break;
	}
}

void func_21()//Position - 0x10B3
{
	GlobalFunc_9533(13, 0);
	GlobalFunc_82();
	func_25(-1, 0);
	GlobalFunc_7068();
	func_308();
}




void func_25(int iParam0, int iParam1)//Position - 0x1158
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8310(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_47.x, Local_47.f_1);
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

























void func_50(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2727
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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
		if ((iLocal_50 != 0 && iLocal_50 != joaat("object")) && iLocal_50 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_50, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_50, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


int func_52()//Position - 0x27EE
{
	if (GlobalFunc_4926(1000))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_270) < 1f)
		{
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_270, 1f);
		}
		return 1;
	}
	return 0;
}




int func_56(int iParam0)//Position - 0x28E2
{
	struct<3> Var0[2];
	struct<3> Var7;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var7 = { GlobalFunc_625() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var7.x)
		{
			return 1;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var7.f_1)
		{
			return 1;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var7.f_2)
		{
			return 1;
		}
	}
	return 0;
}









void func_65(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2B9D
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_9249(0);
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
			iLocal_50 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_50 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}


































































































































void func_195()//Position - 0x1F9D1
{
	if (!PED::IS_PED_INJURED(iLocal_74))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_74))
		{
			bLocal_285 = true;
			iLocal_53 = 2;
			iLocal_282 = 5;
		}
		else if (MISC::GET_GAME_TIMER() < iLocal_283)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_74, 0);
			if (!PED::IS_PED_FLEEING(iLocal_74))
			{
				func_219();
			}
			if (func_207())
			{
				if (iLocal_77)
				{
					if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 1935.53f, 6291.888f, 41.144f, 100f))
					{
						GlobalFunc_2297(&iLocal_76, 1, 0, 1);
						GlobalFunc_190(&iLocal_78);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_278))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_278, 0);
						}
						iLocal_77 = 0;
					}
					else
					{
						func_204();
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_73))
				{
					uLocal_73 = func_201(Local_59, 1);
				}
				if (bLocal_255)
				{
					if (PED::IS_PED_INJURED(iLocal_75))
					{
						bLocal_285 = true;
						iLocal_53 = 2;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_75, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_155(iLocal_75, PLAYER::PLAYER_PED_ID(), 1.25f))
					{
						TASK::CLEAR_PED_TASKS(iLocal_75);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 0);
						PED::SET_PED_TO_RAGDOLL(iLocal_75, 250, 500, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_75, 1);
						bLocal_285 = true;
						iLocal_53 = 2;
						iLocal_282 = 0;
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, Global_18, 1, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1722.09f, 3843f, 33.6f, 1740.11f, 3854.94f, 39.22f, 12f, 0, 1, 0))
					{
						iLocal_53 = 1;
						iLocal_54 = 0;
					}
				}
				else
				{
					func_198();
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_74) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_ON_ANY_BIKE(iLocal_74))
					{
						sLocal_267 = sLocal_265;
						if (func_197())
						{
							sLocal_267 = sLocal_264;
						}
						else if (func_196())
						{
							sLocal_267 = sLocal_266;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, -2017877118) == 7)
						{
							TASK::TASK_PLAY_ANIM(iLocal_74, sLocal_267, "LOOP", 2f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_73))
				{
					HUD::REMOVE_BLIP(&uLocal_73);
				}
				if (bLocal_255)
				{
					if (PED::IS_PED_INJURED(iLocal_75))
					{
						bLocal_285 = true;
						iLocal_53 = 2;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_75, PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_155(iLocal_75, PLAYER::PLAYER_PED_ID(), 1.25f))
					{
						TASK::CLEAR_PED_TASKS(iLocal_75);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 0);
						PED::SET_PED_TO_RAGDOLL(iLocal_75, 250, 500, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_75, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_75, 1);
						bLocal_285 = true;
						iLocal_53 = 2;
						iLocal_282 = 0;
					}
				}
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_74, 200f))
				{
					iLocal_53 = 2;
					iLocal_282 = 5;
				}
			}
		}
		else
		{
			bLocal_285 = false;
			iLocal_53 = 2;
		}
	}
	else
	{
		bLocal_285 = true;
		iLocal_53 = 2;
	}
}

int func_196()//Position - 0x1FC83
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_74, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			iVar1 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iVar0);
			if ((((iVar1 == -1965057835 || iVar1 == 919485892) || iVar1 == -1838563680) || iVar1 == 1576485197) || iVar1 == 929009548)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197()//Position - 0x1FCF8
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_74, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_74, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			iVar1 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iVar0);
			if (((((((((iVar1 == -2066252141 || iVar1 == 542797648) || iVar1 == 1105669833) || iVar1 == 925191417) || iVar1 == -782720499) || iVar1 == 68566729) || iVar1 == -1150063973) || iVar1 == 1630950849) || iVar1 == -463340997) || iVar1 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198()//Position - 0x1FDB3
{
	if (!bLocal_255 && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_59, 150f))
	{
		STREAMING::REQUEST_MODEL(iLocal_257);
		STREAMING::REQUEST_ANIM_DICT(sLocal_268);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_257) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_268)) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1728.778f, 3851.287f, 33.7826f, 5f, joaat("prop_skid_chair_01"), 0))
		{
			uLocal_256 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1728.778f, 3851.287f, 33.7826f, 5f, joaat("prop_skid_chair_01"), 1, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_256, 1);
			Local_79 = { 1730.038f, 3853.562f, 34.661f };
			Local_82 = { 0f, 0f, 36f };
			iLocal_75 = PED::CREATE_PED(26, iLocal_257, 1728.778f, 3851.287f, 33.7826f, 211.7722f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_75, 1);
			GlobalFunc_173(&uLocal_87, 5, iLocal_75, "CrashSafehouse", 0, 1);
			uLocal_270 = PED::CREATE_SYNCHRONIZED_SCENE(Local_79, Local_82, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_75, uLocal_270, sLocal_268, "helping_friend_idle_friend", 1000f, -1000f, 0, 0, 1148846080, 0);
			bLocal_255 = true;
		}
	}
}



int func_201(struct<3> Param0, int iParam3)//Position - 0x1FF86
{
	return func_202(Param0, iParam3);
}

int func_202(struct<3> Param0, var uParam3)//Position - 0x1FF98
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, uParam3);
	return iVar0;
}


void func_204()//Position - 0x1FFDB
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_78, 0))
		{
			iLocal_68 = MISC::GET_GAME_TIMER();
			if ((iLocal_68 - iLocal_69) < 1000)
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_78, 1);
			}
			else if ((iLocal_68 - iLocal_69) > 2000)
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_78, 0);
				iLocal_69 = MISC::GET_GAME_TIMER();
			}
		}
	}
}



int func_207()//Position - 0x20097
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_74, 1f);
	if (PED::IS_PED_GROUP_MEMBER(iLocal_74, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_72))
		{
			HUD::REMOVE_BLIP(&uLocal_72);
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 20f, 20f, 20f, 0, 1, 0) || !func_216())
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_74);
		}
		else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_ON_FOOT(iLocal_74))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_74, -828834893) == 7)
				{
					TASK::CLEAR_PED_TASKS(iLocal_74);
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_74, 0, 0);
				}
			}
		}
		return 1;
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_72))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, Global_18, 0, 1, 0) && func_216())
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_74, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
		}
	}
	else
	{
		uLocal_72 = func_208(iLocal_74, 0, 0);
	}
	return 0;
}

var func_208(int iParam0, bool bParam1, int iParam2)//Position - 0x20179
{
	var uVar0;
	
	iParam2 = iParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			uVar0 = func_214(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bParam1, 0);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			uVar0 = func_212(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), bParam1, 0);
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			uVar0 = func_209(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return uVar0;
}

int func_209(int iParam0)//Position - 0x201DE
{
	return func_210(iParam0);
}

int func_210(int iParam0)//Position - 0x201EC
{
	return GlobalFunc_5976(iParam0, 1, 0);
}


int func_212(int iParam0, bool bParam1, int iParam2)//Position - 0x202A0
{
	iParam2 = iParam2;
	return func_213(iParam0, bParam1, 0);
}

int func_213(int iParam0, bool bParam1, bool bParam2)//Position - 0x202B5
{
	return GlobalFunc_5976(iParam0, !bParam1, bParam2);
}

var func_214(int iParam0, bool bParam1, int iParam2)//Position - 0x202C8
{
	iParam2 = iParam2;
	return GlobalFunc_7254(iParam0, bParam1, 145);
}


int func_216()//Position - 0x20330
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) && !func_218())
			{
				if (((VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1)) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1)) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2))
				{
					iLocal_277 = 0;
					return 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_74))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_74, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					iLocal_277 = 0;
					return 1;
				}
			}
		}
		else if (func_217())
		{
		}
		else
		{
			return 1;
		}
	}
	if (!bLocal_276)
	{
		iLocal_277 = 1;
	}
	return 0;
}

int func_217()//Position - 0x20427
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))))
		{
			return 1;
		}
	}
	return 0;
}

int func_218()//Position - 0x20453
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
	if (iVar0 == joaat("firetruk") || iVar0 == joaat("trash"))
	{
		return 1;
	}
	return 0;
}

void func_219()//Position - 0x20488
{
	switch (iLocal_55)
	{
		case 0:
			iLocal_66 = 0;
			iLocal_55 = 1;
			iLocal_65 = MISC::GET_GAME_TIMER() + 1000;
			break;
		
		case 1:
			if (iLocal_66 == 0)
			{
				if (func_221() && !GlobalFunc_111())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_WHEREM", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_WHEREF", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_WHERET", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 1)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 2)
			{
				if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_APPR", 3, 0, 0, 0))
				{
					iLocal_66++;
					if (!HUD::DOES_BLIP_EXIST(uLocal_73))
					{
						uLocal_73 = func_201(Local_59, 1);
					}
				}
			}
			else if (iLocal_66 == 3)
			{
				func_220(0, 1);
			}
			else if (iLocal_66 == 4)
			{
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
				{
					iLocal_66++;
				}
				else
				{
					iLocal_66 = 6;
				}
			}
			else if (iLocal_66 == 5)
			{
				if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_TSS", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 6)
			{
				func_220(1500, 1);
			}
			else if (iLocal_66 == 7)
			{
				if (func_221())
				{
					if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_66 = 0;
						iLocal_55 = 2;
					}
					else
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_66 = 0;
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_66 == 0)
			{
				if (func_221() && !GlobalFunc_111())
				{
					if (func_207())
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_ALTRU", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 1)
			{
				func_220(0, 1);
			}
			else if (iLocal_66 == 2)
			{
				iLocal_65 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_66 = 0;
				iLocal_55 = 3;
			}
			break;
		
		case 3:
			if (iLocal_66 == 0)
			{
				if (func_221() && !GlobalFunc_111())
				{
					if (func_207())
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT1", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 1)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 2)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT1M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT1F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT1T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 3)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 4)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT2", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 5)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 6)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT2M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT2F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT2T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 7)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 8)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT3", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 9)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 10)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT3M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT3F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT3T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 11)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 12)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT4", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 13)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 14)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT4M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT4F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT4T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 15)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 16)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT5", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 17)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 18)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT5M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT5F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT5T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 19)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 20)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT6", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 21)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 22)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT6M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT6F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT6T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 23)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 24)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT7", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 25)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 26)
			{
				if (func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT7M", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT7F", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT7T", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 27)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 28)
			{
				if (func_221() && GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_CHAT8", 3, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			else if (iLocal_66 == 29)
			{
				iLocal_65 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_66 = 0;
				iLocal_55 = 4;
			}
			break;
		
		case 4:
			if (iLocal_66 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_65 && !GlobalFunc_111())
				{
					if (func_207())
					{
						if (func_216() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_PAIN", 3, 0, 0, 0))
							{
								iLocal_66++;
							}
						}
						else if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_GETOUT", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 1)
			{
				func_220(100, 1);
			}
			else if (iLocal_66 == 2)
			{
				if (func_207() && func_221())
				{
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_MC1", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_FC1", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_TC1", 3, 0, 0, 0))
						{
							iLocal_66++;
						}
					}
				}
			}
			else if (iLocal_66 == 3)
			{
				if (!GlobalFunc_111())
				{
					iLocal_71++;
					if (iLocal_71 < 3)
					{
						iLocal_65 = MISC::GET_GAME_TIMER() + 20000;
						iLocal_66 = 0;
					}
					else
					{
						iLocal_55 = 7;
					}
				}
			}
			break;
		
		case 7:
			break;
	}
}

void func_220(int iParam0, bool bParam1)//Position - 0x20DD8
{
	if (!GlobalFunc_111())
	{
		if (iLocal_277)
		{
			if (GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_WALK", 3, 0, 0, 0))
			{
				bLocal_276 = true;
				iLocal_277 = 0;
			}
		}
		else
		{
			if (bParam1)
			{
				iLocal_66++;
			}
			iLocal_65 = (MISC::GET_GAME_TIMER() + iParam0);
		}
	}
}

int func_221()//Position - 0x20E22
{
	if (MISC::GET_GAME_TIMER() >= iLocal_65)
	{
		return 1;
	}
	return 0;
}

void func_222()//Position - 0x20E38
{
	struct<3> Var0;
	char* sVar3;
	
	switch (iLocal_70)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_262);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_262))
			{
				iLocal_70++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_74))
			{
				func_65(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_79 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_74, 0f, 0f, 5f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_79, &(Local_79.f_2));
				Local_82 = { GlobalFunc_3966() };
				Local_82.f_2 = GlobalFunc_739((fLocal_274 + 180f), 0f, 360f);
				uLocal_269 = PED::CREATE_SYNCHRONIZED_SCENE(Local_79, Local_82, 2);
				uLocal_85 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_85, uLocal_269, "HELPING_VICTIM_TO_FEET_CAM", sLocal_262);
				CAM::SET_CAM_ACTIVE(uLocal_85, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (func_225())
				{
					GlobalFunc_9628(1935.59f, 6277.31f, 40.87f, 1930.11f, 6285.06f, 44.4f, 7f, 1936.63f, 6275.5f, 42.59f, -146.8f, 1, 1, 1, 0, 0);
				}
				else
				{
					GlobalFunc_9628(1935.59f, 6277.31f, 40.87f, 1930.11f, 6285.06f, 44.4f, 7f, 1933.36f, 6261.681f, 42.2652f, 218f, 1, 1, 1, 0, 0);
				}
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_74, 1), 5f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_74, 1), 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_74, 1), 7f);
				uLocal_279 = GRAPHICS::ADD_DECAL(1110, Local_271, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
				if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) == 1)
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_269, sLocal_262, "HELPING_VICTIM_TO_FEET_PLAYER", 1000f, -4f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_74, uLocal_269, sLocal_262, "HELPING_VICTIM_TO_FEET_VICTIM", 1000f, -4f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_269, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_269, 0.25f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_74, 0, 0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_8380(1, 1, 1, 0);
				if (GlobalFunc_8315() == 0)
				{
					GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_MHELP", 3, 0, 0, 0);
				}
				else if (GlobalFunc_8315() == 1)
				{
					GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_FHELP", 3, 0, 0, 0);
				}
				else if (GlobalFunc_8315() == 2)
				{
					GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_THELP", 3, 0, 0, 0);
				}
				iLocal_70++;
			}
			break;
		
		case 2:
			if (iLocal_253)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_70 = 4;
				}
			}
			else if (GlobalFunc_4926(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				iLocal_253 = 1;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_269) > 0.5f)
			{
				iLocal_70++;
			}
			break;
		
		case 3:
			if (iLocal_253)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_70 = 4;
				}
			}
			else if (GlobalFunc_4926(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				iLocal_253 = 1;
			}
			else if (func_223(uLocal_269, 0.9f))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -4f, 1);
				iLocal_70 = 4;
				bLocal_254 = true;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_269) > 0.99f)
			{
				iLocal_70++;
			}
			break;
		
		case 4:
			if (iLocal_253)
			{
				GlobalFunc_4956();
			}
			if (bLocal_254)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (GlobalFunc_115(iLocal_74))
				{
					TASK::CLEAR_PED_TASKS(iLocal_74);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_262);
			STREAMING::REMOVE_ANIM_DICT(sLocal_260);
			if (GlobalFunc_115(iLocal_74))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_74, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_74, 172, 0);
			}
			GRAPHICS::REMOVE_DECAL(uLocal_279);
			GlobalFunc_8380(0, 1, 1, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_85))
			{
				CAM::DESTROY_CAM(uLocal_85, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_74, 1862763509);
			if (iLocal_253)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_74);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_74, -1871534317, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_74, 0, 0);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_262, "HELPING_VICTIM_TO_FEET_PLAYER", Local_79, Local_82, 1f, 2) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_262, "HELPING_VICTIM_TO_FEET_PLAYER", Local_79, Local_82, 1f, 2) };
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_2);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_262, "HELPING_VICTIM_TO_FEET_VICTIM", Local_79, Local_82, 1f, 2) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
				ENTITY::SET_ENTITY_COORDS(iLocal_74, Var0, 1, 0, 0, 1);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_262, "HELPING_VICTIM_TO_FEET_VICTIM", Local_79, Local_82, 1f, 2) };
				ENTITY::SET_ENTITY_HEADING(iLocal_74, Var0.f_2);
			}
			else
			{
				if (!bLocal_254)
				{
					if (GlobalFunc_8315() == 0)
					{
						sVar3 = "move_p_m_zero";
					}
					else if (GlobalFunc_8315() == 1)
					{
						sVar3 = "move_p_m_one";
					}
					else if (GlobalFunc_8315() == 2)
					{
						sVar3 = "move_p_m_two";
					}
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar3, "idle_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
			}
			iLocal_253 = 0;
			iLocal_283 = (MISC::GET_GAME_TIMER() + 180000);
			iLocal_65 = MISC::GET_GAME_TIMER() + 3000;
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_252, 0);
			uLocal_252 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(33.813f, 3847.646f, 1731.052f) + Vector(-5f, -20f, -20f), Vector(33.813f, 3847.646f, 1731.052f) + Vector(5f, 25f, 35f), 0, 1, 1, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_50(1, 1, 1, 1);
			iLocal_51 = 1;
			iLocal_53 = 0;
			break;
	}
}

int func_223(var uParam0, float fParam1)//Position - 0x21412
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	
	GlobalFunc_612(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
	{
		fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0);
		if (fVar4 >= fParam1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}


int func_225()//Position - 0x21543
{
	struct<3> Var0[2];
	struct<3> Var7;
	int iVar10;
	
	iVar10 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar10), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var7 = { GlobalFunc_625() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var7.x)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var7.f_1)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var7.f_2)
		{
			return 0;
		}
	}
	return 1;
}



void func_228()//Position - 0x21614
{
	if (!PED::IS_PED_INJURED(iLocal_74) && !func_246())
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 80f, 80f, 15f, 0, 1, 0))
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_262);
			if (!iLocal_286)
			{
				func_244(1);
				iLocal_286 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 2.5f, 2.5f, 2.5f, 0, 1, 1) && GlobalFunc_552(1, 0, 1))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_74, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_74, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_74, 206, 1);
				iLocal_52 = 2;
			}
			else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_74, 15f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 4f)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_72))
				{
					uLocal_72 = GlobalFunc_4955(iLocal_74, 1, 1, 5);
				}
			}
			else
			{
				switch (iLocal_67)
				{
					case 0:
						iLocal_65 = MISC::GET_GAME_TIMER();
						if (!GlobalFunc_6827())
						{
							GlobalFunc_9034(1);
						}
						iLocal_67 = 1;
						break;
					
					case 1:
						if (!GlobalFunc_111())
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_72))
							{
								uLocal_72 = GlobalFunc_4955(iLocal_74, 1, 1, 5);
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_72, 0);
							}
							GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_PLEAD", 3, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_65 = MISC::GET_GAME_TIMER() + 18000;
							iLocal_67 = 2;
						}
						break;
					
					case 2:
						if (MISC::GET_GAME_TIMER() > iLocal_65 && !GlobalFunc_111())
						{
							GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_PLEAD2", 3, 0, 0, 0);
							iLocal_65 = MISC::GET_GAME_TIMER() + 12000;
							iLocal_67 = 3;
						}
						break;
					
					case 3:
						if (MISC::GET_GAME_TIMER() > iLocal_65 && !GlobalFunc_111())
						{
							GlobalFunc_10618(&uLocal_87, "RECRAAU", "RECRA_PLEAD3", 3, 0, 0, 0);
							iLocal_65 = MISC::GET_GAME_TIMER() + 9500;
						}
						break;
					}
				}
		}
	}
	else
	{
		iLocal_282 = 5;
		iLocal_51 = 1;
		iLocal_53 = 2;
	}
	func_204();
}
















void func_244(bool bParam0)//Position - 0x21EEF
{
	if (bParam0)
	{
		GlobalFunc_563(1);
	}
	else
	{
		GlobalFunc_563(0);
	}
}


int func_246()//Position - 0x21F35
{
	if (!PED::IS_PED_INJURED(iLocal_74))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f), 1f, 1))
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74))
				{
					return 1;
				}
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_74, 31086, 0f, 0f, 0f), 8f))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_74))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!GlobalFunc_115(iLocal_74))
	{
		return 1;
	}
	return 0;
}

void func_247()//Position - 0x21FDB
{
	var uVar0;
	struct<3> Var3;
	
	STREAMING::REQUEST_MODEL(iLocal_257);
	STREAMING::REQUEST_MODEL(iLocal_259);
	STREAMING::REQUEST_MODEL(iLocal_258);
	STREAMING::REQUEST_ANIM_DICT(sLocal_260);
	STREAMING::REQUEST_CLIP_SET(sLocal_261);
	STREAMING::REQUEST_ANIM_DICT(sLocal_264);
	STREAMING::REQUEST_ANIM_DICT(sLocal_265);
	STREAMING::REQUEST_ANIM_DICT(sLocal_266);
	STREAMING::REQUEST_ANIM_DICT(sLocal_263);
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_257) && STREAMING::HAS_MODEL_LOADED(iLocal_259)) && STREAMING::HAS_MODEL_LOADED(iLocal_258)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_260)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_261)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_264)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_265)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_266)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_263)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		bLocal_275 = false;
		iLocal_286 = 0;
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		iLocal_78 = VEHICLE::CREATE_VEHICLE(iLocal_259, 1932.98f, 6291.91f, 41.08f, 350.85f, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_78, 0, 0);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_78, 1);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_78, 0, 0, 1148846080);
		MISC::GET_MODEL_DIMENSIONS(iLocal_259, &uVar0, &Var3);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_78, 0);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_78, 2);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_78, 3);
		VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(iLocal_78);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_78, 0f, Var3.f_1, 0f, 500f, 10000f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_78, Var3.x, (Var3.f_1 * 0.75f), 0f, 500f, 10000f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_78, Var3.x, 0f, 0f, 500f, 10000f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_78, 0f, 0f, Var3.f_2, 500f, 10000f, 1);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, 5, 1, 1);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_78, 12f);
		VEHICLE::START_VEHICLE_ALARM(iLocal_78);
		ENTITY::SET_ENTITY_PROOFS(iLocal_78, 0, 1, 0, 0, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_78, 0f, 180f, 0f, 2, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_78, 1);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_78, 1);
		uLocal_278 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_recrash_rescue_fire", iLocal_78, -0.45f, -1.25f, -0.5f, 0f, 0f, 0f, 1f, 0, 0, 1);
		if (bLocal_275)
		{
			iLocal_74 = PED::CREATE_PED(26, iLocal_258, Local_271, (fLocal_274 - 180f), 1, 1);
		}
		else
		{
			iLocal_74 = PED::CREATE_PED(26, iLocal_258, Local_271, fLocal_274, 1, 1);
		}
		PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_74, 0, 0.7f, 0.5f, 2);
		Local_62 = { ENTITY::GET_ENTITY_COORDS(iLocal_74, 1) };
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_62.x, (Local_62.f_1 + 0.1f), (Local_62.f_2 + 0.1f), Local_62.x, (Local_62.f_1 - 0.1f), (Local_62.f_2 - 0.1f), 1, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		TASK::TASK_PLAY_ANIM(iLocal_74, sLocal_260, "BASE", 8f, -8f, -1, 9, 0, 0, 0, 0);
		if (GlobalFunc_115(iLocal_74))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_74, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, 1);
		ENTITY::SET_ENTITY_HEALTH(iLocal_74, 115);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_74, 1);
		PED::SET_PED_KEEP_TASK(iLocal_74, 1);
		PED::SET_PED_DIES_IN_VEHICLE(iLocal_74, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_74, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_74, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_74, 17, 1);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_74, sLocal_261, 1048576000);
		PED::SET_PED_CONFIG_FLAG(iLocal_74, 229, 1);
		GlobalFunc_173(&uLocal_87, 3, iLocal_74, "TALINA", 0, 1);
		PED::APPLY_PED_BLOOD(iLocal_74, 3, 0f, 0f, 0f, "wound_sheet");
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_74, 0);
		iLocal_76 = PED::CREATE_PED(26, iLocal_257, 1935.53f, 6291.888f, 41.144f, -28.44f, 1, 1);
		iLocal_77 = 1;
		Local_62 = { ENTITY::GET_ENTITY_COORDS(iLocal_76, 1) };
		PED::APPLY_PED_BLOOD(iLocal_76, 3, 0f, 0f, 0f, "wound_sheet");
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_62.x, (Local_62.f_1 + 0.1f), (Local_62.f_2 + 0.1f), Local_62.x, (Local_62.f_1 - 0.1f), (Local_62.f_2 - 0.1f), 1, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		PED::SET_PED_CONFIG_FLAG(iLocal_76, 227, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_76, sLocal_263, "dead_ped", 1935.53f, 6291.888f, 41.144f, 0f, 0f, -28.44f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_76, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_257);
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_173(&uLocal_87, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (GlobalFunc_8315() == 1)
		{
			GlobalFunc_173(&uLocal_87, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (GlobalFunc_8315() == 2)
		{
			GlobalFunc_173(&uLocal_87, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		uLocal_252 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(33.7286f, 3850.767f, 1729.311f) - Vector(3f, 25f, 25f), Vector(33.7286f, 3850.767f, 1729.311f) + Vector(3f, 25f, 25f), 0, 1, 1, 1);
		iLocal_52 = 1;
	}
}













int func_260()//Position - 0x240C3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_47) < (75f * 75f))
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
	if (GlobalFunc_9556(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}





int func_265(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x241D2
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
	Local_47 = { Param0 };
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
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_9556(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_47.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_6509(GlobalFunc_8315()) == 4 || GlobalFunc_6509(GlobalFunc_8315()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (!GlobalFunc_9557(iParam3, iParam4, 145))
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
		if (GlobalFunc_10548())
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
		if (!GlobalFunc_9039(4))
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
		if (GlobalFunc_42(GlobalFunc_8315()))
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
								if (GlobalFunc_8315() != iVar4)
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










































int func_307()//Position - 0x257F4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_308()//Position - 0x25818
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_252, 0);
	if (GlobalFunc_6827())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (GlobalFunc_115(iLocal_78))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_78, 0, 0, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_78, -400f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_78, -100f);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_278))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_278, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_256))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_256, 0);
		GlobalFunc_129(&iLocal_256, 0);
	}
	if (iLocal_286)
	{
		func_244(0);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_56 - Vector(3f, 3f, 3f), Local_56 + Vector(3f, 3f, 3f), 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}















int func_323()//Position - 0x26103
{
	int iVar0;
	char cVar1[24];
	var uVar7;
	
	if (Global_15692 == 4)
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar0 = (iVar0 + Global_16702);
		if (iVar0 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar0 /*6*/])))
			{
				cVar1 = { Global_15311 };
				StringConCat(&cVar1, "SL", 24);
				uVar7 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cVar1), iVar0 * 3, iVar0 * 3 + 1);
				return func_324(uVar7);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -2;
		}
	}
	return -3;
}

int func_324(char* sParam0)//Position - 0x2617A
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}


