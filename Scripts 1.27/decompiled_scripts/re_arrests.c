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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 16;
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
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	bool bLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	bool bLocal_297 = 0;
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
	iLocal_243 = 8000;
	iLocal_246 = 8;
	iLocal_248 = 1;
	sLocal_256 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_257 = "RANDOM@ARRESTS";
	sLocal_258 = "RANDOM@ARRESTS@BUSTED";
	iLocal_262 = 1;
	Local_64 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_75 = true;
		func_195();
		func_163();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
	{
		iLocal_52 = 1;
	}
	else
	{
		iLocal_52 = 2;
	}
	if (func_120(Local_64, 15, iLocal_52, 0, 0))
	{
		GlobalFunc_6828(15);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_47)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_114()) && !GlobalFunc_10586())
				{
					if (func_98())
					{
						iLocal_47 = 1;
					}
				}
				else
				{
					func_163();
				}
				break;
			
			case 1:
				if (func_94())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					GlobalFunc_9034(1);
					iLocal_47 = 2;
				}
				else if (!func_82(200f))
				{
					func_163();
				}
				break;
			
			case 2:
				if (func_82(1128792064))
				{
					func_1();
				}
				else
				{
					func_163();
				}
				break;
		}
	}
}

void func_1()//Position - 0x1CF
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	
	MISC::SET_BIT(&uVar0, 3);
	MISC::SET_BIT(&uVar0, 4);
	iVar5 = 0;
	func_81();
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		PED::SET_PED_RESET_FLAG(iLocal_54, 129, 1);
	}
	if (GlobalFunc_777(iLocal_54))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_54, 0))
		{
			bLocal_297 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53) && (iLocal_48 != 2 && iLocal_48 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			switch (iLocal_51)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_73)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 1227113341) == 7)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_73)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1805844857) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, -2017877118) == 1)
								{
									TASK::STOP_ANIM_PLAYBACK(iLocal_54, 2, 1);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_54, iLocal_53, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 1);
					if (SYSTEM::TIMERA() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_76();
						if (iVar5 == 1)
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar5 || iLocal_277 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PCUFF", 4, iLocal_253, 0, 0))
								{
								}
								bLocal_293 = (PED::IS_PED_RAGDOLL(iLocal_54) || TASK::IS_PED_GETTING_UP(iLocal_54));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_53, joaat("weapon_pistol"), 0))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_53, joaat("weapon_pistol"), 1);
								Local_67 = { ENTITY::GET_ENTITY_COORDS(iLocal_54, 1) };
								TASK::CLEAR_PED_TASKS(iLocal_53);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
								if (!bLocal_293 && fVar4 > 2f)
								{
									TASK::TASK_SHOOT_AT_COORD(0, Local_67.x, Local_67.f_1, (Local_67.f_2 + 4f), 1000, 1566631136);
								}
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_54, -1, 2048, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_54, iLocal_54, 1f, 0, 3f, 1082130432, 1, 0, -957453492);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_54, 5000, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
								PED::SET_PED_KEEP_TASK(iLocal_53, 1);
								SYSTEM::SETTIMERA(0);
								iLocal_245 = MISC::GET_GAME_TIMER();
								if (bLocal_293)
								{
									TASK::CLEAR_PED_TASKS(iLocal_54);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_54);
									iLocal_51 = 4;
								}
								else
								{
									iLocal_51 = 2;
								}
							}
							else if (!iLocal_277)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_277 = 1;
							}
						}
						else
						{
							func_64();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_53))
							{
								TASK::CLEAR_PED_TASKS(iLocal_53);
								iLocal_51 = 1;
								TASK::TASK_STAND_STILL(iLocal_53, 500);
							}
						}
					}
					break;
				
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, -982327190) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
						iLocal_51 = 0;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_245) > 1000)
					{
						Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_54) * 3f) };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_54, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_51 = 3;
					}
					break;
				
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_245) > 4500)
					{
						iLocal_51 = 4;
					}
					break;
				
				case 4:
					bLocal_73 = true;
					TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
					TASK::TASK_PLAY_ANIM(0, sLocal_257, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
					PED::SET_PED_KEEP_TASK(iLocal_54, 1);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_54, 1);
					iLocal_51 = 5;
					break;
				
				case 5:
					if (iLocal_49 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_53);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_53, joaat("weapon_pistol"), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_53, joaat("weapon_pistol"), 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_54, -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
							PED::SET_PED_KEEP_TASK(iLocal_53, 1);
							iLocal_51 = 6;
						}
					}
					break;
				
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0) && !PED::IS_PED_INJURED(iLocal_55))
					{
						VEHICLE::_0xBE5C1255A1830FF5(iLocal_56, 1);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, -2017877118) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_55, -1273030092) == 7)
							{
								if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_54, iLocal_56, 2, 0, 0))
								{
									if (!PED::IS_PED_INJURED(iLocal_54))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_54, iLocal_56))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_54, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, -1794415470) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
													TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_71, iLocal_70);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_70, iLocal_71);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_53);
										if (!PED::IS_PED_IN_COMBAT(iLocal_53, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
											{
												if (!GlobalFunc_111())
												{
													if (GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_INCAR", 4, iLocal_253, 0, 0))
													{
														if (func_63(iLocal_53, iLocal_56) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_55, iLocal_54, 180f))
															{
																Local_294 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_294 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_55, iLocal_54, 180f))
														{
															Local_294 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_294 = { -2.978f, 0.75f, 1f };
														}
														TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_56, Local_294), iLocal_54, 0.75f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_54, -1, 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
														PED::SET_PED_KEEP_TASK(iLocal_53, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_56, 0);
														iLocal_243 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_276 = MISC::GET_GAME_TIMER();
														iLocal_51 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_62();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_276) > 8000)
							{
								if (!GlobalFunc_111())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
									iLocal_276 = MISC::GET_GAME_TIMER();
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
						{
							if (iLocal_63)
							{
								if (func_63(iLocal_53, iLocal_56) == 2)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_54, iLocal_56, -1, 2, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_54, iLocal_56, -1, 1, 1f, 1, 0);
								}
								iLocal_51 = 8;
							}
							else if (iLocal_62)
							{
								fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 1);
								if (fVar6 < 4f && iLocal_284 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.x, Local_294.f_1, 1f, 1);
									iLocal_284 = 1;
								}
								else if (fVar6 < 3f)
								{
									TASK::CLEAR_PED_TASKS(iLocal_54);
									iLocal_63 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "kneeling_arrest_get_up", 3))
							{
								if (func_63(iLocal_53, iLocal_56) == 2)
								{
									Local_294 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_294 = { -1.578f, -0.5f, 1f };
								}
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.x, Local_294.f_1, 1f, 1);
								if (bLocal_297)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_54, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_54, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_62 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_55))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_54, iLocal_56))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_57))
								{
									HUD::REMOVE_BLIP(&uLocal_57);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_58))
								{
									HUD::REMOVE_BLIP(&uLocal_58);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_56))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_55, iLocal_56, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_55, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
									func_163();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, -1794415470) == 7)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_56, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_53, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_48();
	if (PED::IS_PED_INJURED(iLocal_54))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (iLocal_48 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_48 == 1 || iLocal_48 == 3)
				{
					if (!GlobalFunc_111())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
						{
							GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_273, 4, iLocal_253, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
					TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				}
				SYSTEM::WAIT(0);
				if (iLocal_48 == 0)
				{
					iLocal_48 = 2;
				}
				func_163();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_54))
	{
		if (!bLocal_60)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_51 == 5 || iLocal_51 == 6)
	{
		if (!bLocal_60)
		{
			if (iLocal_48 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()//Position - 0xBE8
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (MISC::GET_GAME_TIMER() > iLocal_254 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_253 = 1;
		}
		else
		{
			iLocal_253 = 0;
		}
		iLocal_254 = MISC::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)//Position - 0xC80
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		switch (iLocal_49)
		{
			case 0:
				if ((iLocal_242 == 3 || iLocal_51 == 5) || iLocal_51 == 6)
				{
					if (!GlobalFunc_111())
					{
						TASK::CLEAR_PED_TASKS(iLocal_53);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_257, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_257, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
						iLocal_49 = 1;
					}
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAD1", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAD2", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_56, 0);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_56, 1);
						}
						TASK::CLEAR_PED_TASKS(iLocal_53);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
						TASK::TASK_PLAY_ANIM(0, sLocal_257, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_53, 0, 0);
						func_8();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_73)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) || !ENTITY::IS_ENTITY_DEAD(iLocal_54))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54))
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
				{
					PED::SET_IK_TARGET(iLocal_53, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_53, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (SYSTEM::TIMERB() > iLocal_243 || iLocal_261)
					{
						if (iLocal_48 == 3 || iLocal_48 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								if (iLocal_243 == 8000 || iLocal_261)
								{
									if (bLocal_260)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!GlobalFunc_111())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
								}
							}
							else if (iLocal_243 == 8000)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 20000;
								}
							}
							else if (!GlobalFunc_111())
							{
								GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
								iLocal_243 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_54))
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 30000;
								}
							}
							else if (!GlobalFunc_111())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
								iLocal_243 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_243 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_51 != 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_54, iLocal_56, 0))
							{
								func_62();
							}
						}
					}
					else
					{
						func_62();
					}
				}
				break;
			}
	}
}

void func_4()//Position - 0x104F
{
	if (!iLocal_261)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_259 = "idle_a";
				break;
			
			case 1:
				sLocal_259 = "idle_b";
				break;
			
			case 2:
				sLocal_259 = "idle_c";
				break;
		}
		TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, sLocal_259, 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, "enter", 3))
	{
		if (func_5())
		{
			GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, sLocal_259, 3))
	{
		GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()//Position - 0x1194
{
	if (MISC::GET_GAME_TIMER() > iLocal_263 + 6000)
	{
		iLocal_263 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x11B5
{
	if (!iLocal_261)
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_54, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, "radio_chatter", 3))
	{
		if (func_5())
		{
			GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_257, "radio_exit", 3))
	{
		iLocal_262 = 0;
		func_8();
	}
}

void func_7()//Position - 0x1289
{
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_73)
			{
				if (iLocal_48 == 3)
				{
					iLocal_50 = 1;
				}
				else if (iLocal_48 == 0)
				{
					iLocal_50 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_53);
				ENTITY::IS_ENTITY_DEAD(iLocal_54);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_54))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_54, -1, 3f, 0f, 0f, 1f, 0);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::REMOVE_BLIP(&uLocal_57);
			}
			iLocal_50 = 2;
			iLocal_243 = 8000;
			iLocal_290 = MISC::GET_GAME_TIMER();
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_290) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_55, -1273030092) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_56, -1, 0, 1f, 1, 0);
							iLocal_50 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_55))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_56))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_55, iLocal_56, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_55, 1);
						func_163();
					}
				}
			}
			break;
	}
}

void func_8()//Position - 0x13A6
{
	bLocal_260 = GlobalFunc_745();
	bLocal_260 = iLocal_262;
	iLocal_243 = 20000;
	iLocal_261 = 0;
}


int func_10()//Position - 0x13E5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	iVar12 = joaat("pranger");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar12);
	if (STREAMING::HAS_MODEL_LOADED(iVar12))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (VEHICLE::_0xA4822F1CF23F4810(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_56 = VEHICLE::CREATE_VEHICLE(iVar12, Var6, 0, 1, 1);
				iLocal_55 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_56, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_55, 294, 1);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_55, joaat("weapon_pistol"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_55, joaat("weapon_pistol"), -1, 0, 1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_55, joaat("weapon_pistol"), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_70);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_56);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_56, 1);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_56, 1);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_56, 1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Var0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_56, MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_55, iLocal_56, Var0, 4, 7f, 786471, 5f, -1f, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_56, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_56, 1);
				iLocal_76 = 1;
				VEHICLE::SET_RANDOM_TRAINS(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x15A1
{
	if (iLocal_48 != 3)
	{
		iLocal_242 = 3;
	}
	switch (iLocal_242)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 7 || MISC::GET_GAME_TIMER() > iLocal_245 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						TASK::CLEAR_PED_TASKS(iLocal_53);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_54, -1, 3.5f, 2f, 1073741824, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
						iLocal_242 = 1;
					}
				}
				else
				{
					iLocal_242 = 3;
				}
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, 242628503) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_53) > 0)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_244 < 2)
						{
							GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
							if (HUD::DOES_BLIP_EXIST(uLocal_57))
							{
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
							}
						}
						else
						{
							GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
						}
						iLocal_242 = 2;
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				if (iLocal_244 < 2)
				{
					GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
					}
				}
				else
				{
					GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
				}
				iLocal_242 = 2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_242 = 3;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()//Position - 0x1745
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1);
	bVar1 = func_47();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_48 == 2 || bLocal_73 == 1)
				{
					switch (iLocal_246)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(uLocal_58, 1);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
								TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
								iLocal_246 = 9;
							}
							else
							{
								iLocal_246 = 3;
							}
							break;
						
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7)
							{
								iLocal_246 = 0;
							}
							break;
						
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, 0, 1, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_54, 1);
								iLocal_246 = 3;
							}
							break;
						
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_246 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_54);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
								iLocal_246 = 2;
							}
							break;
						
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7 || GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_270, 4, iLocal_253, 0, 0))
								{
									iLocal_246 = 6;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
							}
							break;
						
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_246 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!GlobalFunc_111())
								{
									TASK::CLEAR_PED_TASKS(iLocal_54);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 1073741824, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
									iLocal_246 = 4;
								}
							}
							else
							{
								iLocal_246 = 6;
							}
							break;
						
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_291 = MISC::GET_GAME_TIMER();
								iLocal_246 = 7;
							}
							break;
						
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_54, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_291) > 2000)
							{
								iLocal_246 = 5;
							}
							break;
						
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7)
							{
								if (!GlobalFunc_111())
								{
									if (iLocal_244 < 2)
									{
										GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_265, 4, iLocal_253, 0, 0);
										TASK::TASK_PLAY_ANIM(iLocal_54, sLocal_257, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
									}
									GlobalFunc_10829(GlobalFunc_8329(), 1, 250, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_54);
									iLocal_246 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!GlobalFunc_111())
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								func_163();
							}
							break;
						}
				}
			}
			else
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				func_163();
			}
		}
		else
		{
			GlobalFunc_5105();
			TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_48 = 1;
			}
			if (!GlobalFunc_111())
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
			}
			func_163();
		}
	}
}



































int func_47()//Position - 0x2E48
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x2F46
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54);
		uVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1);
		if (((uVar1 || func_61()) || func_59()) || bVar0)
		{
			func_58();
			if (bLocal_73)
			{
				if (((bVar0 || uVar1) && !PED::IS_PED_RAGDOLL(iLocal_54)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					PED::SET_PED_TO_RAGDOLL(iLocal_54, 500, 2000, 0, 0, 0, 0);
					TASK::TASK_COWER(iLocal_54, -1);
					PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, 0) && !PED::IS_PED_RAGDOLL(iLocal_54))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					TASK::TASK_COWER(iLocal_54, -1);
					PED::SET_PED_KEEP_TASK(iLocal_54, 1);
				}
				func_54(0);
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_53) && iLocal_285 == 0)
					{
						if (GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0))
						{
							iLocal_285 = 1;
						}
					}
				}
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			HUD::REMOVE_BLIP(&uLocal_58);
			GlobalFunc_200(&uLocal_77, 2);
		}
		func_58();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (bLocal_73)
			{
				func_54(1);
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (bLocal_60)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_163();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_55) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_55)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190) || func_52()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_51()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_53))) || iVar2 == 1)
		{
			func_54(1);
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (iLocal_286 == 0)
			{
				iLocal_286 = 1;
				iLocal_289 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::REMOVE_BLIP(&uLocal_57);
			GlobalFunc_200(&uLocal_77, 1);
		}
	}
	if (iLocal_286)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_289) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			iLocal_286 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_54))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190)
			{
				func_58();
				func_54(1);
				iLocal_48 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, iLocal_53, 110f, 110f, 40f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 20f, 20f, 20f, 0, 1, 0))
			{
				GlobalFunc_4935();
				SYSTEM::WAIT(0);
				GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PORUN", 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 40f, 40f, 40f, 0, 1, 0))
			{
				GlobalFunc_4935();
				SYSTEM::WAIT(0);
				GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_266, 4, iLocal_253, 0, 0);
			}
			func_163();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53) && PED::IS_PED_INJURED(iLocal_54))
	{
		func_163();
	}
	if (PED::IS_PED_INJURED(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 100f, 100f, 40f, 0, 1, 0))
			{
				func_163();
			}
		}
	}
}



bool func_51()//Position - 0x33F0
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
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_56))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_76)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
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

int func_52()//Position - 0x347A
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (PED::IS_PED_INJURED(iLocal_54))
		{
			return 1;
		}
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_54) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_54))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (bLocal_73)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}


void func_54(int iParam0)//Position - 0x363E
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		if (!bLocal_60)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_53, 1);
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 0);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 1805844857) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
							TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_53, 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
							PED::FORCE_PED_MOTION_STATE(iLocal_54, -530524, 0, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_54, 1);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_54);
							TASK::TASK_SMART_FLEE_PED(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_54) && !PED::IS_PED_INJURED(iLocal_54)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
						}
					}
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_53);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_72);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
			PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, 1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_56, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 1);
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_53))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				func_55();
			}
			bLocal_60 = true;
		}
	}
}

void func_55()//Position - 0x3813
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_55, uLocal_72);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
			PED::SET_PED_KEEP_TASK(iLocal_55, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_55, 1, 0);
		}
	}
}



void func_58()//Position - 0x38A2
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_58))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uLocal_58, 0);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
	}
}

int func_59()//Position - 0x38CA
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
	{
		if (bLocal_73)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 1000)
				{
					func_60();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_60()//Position - 0x390C
{
	if (!GlobalFunc_111())
	{
		if (iLocal_274 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
		}
	}
	iLocal_274++;
	iLocal_275 = MISC::GET_GAME_TIMER();
}

int func_61()//Position - 0x3955
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_54))
		{
			if (bLocal_73)
			{
				if (iLocal_51 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), Local_67) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (bLocal_73)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_54))
			{
				if (iLocal_51 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), Local_67) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_73)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 1000)
				{
					func_60();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_62()//Position - 0x3A1A
{
	if (!iLocal_74)
	{
		switch (iLocal_244)
		{
			case 0:
				if (!bLocal_60)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								GlobalFunc_4935();
								SYSTEM::WAIT(0);
								GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
							}
						}
						iLocal_244 = 1;
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
							TASK::TASK_PLAY_ANIM(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_53, 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
							PED::FORCE_PED_MOTION_STATE(iLocal_54, -530524, 0, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_54, 1);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
						PED::SET_PED_KEEP_TASK(iLocal_54, 1);
						ENTITY::SET_ENTITY_HEALTH(iLocal_54, 101);
						GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_268, 4, iLocal_253, 0, 0);
						iLocal_244 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						TASK::CLEAR_PED_TASKS(iLocal_53);
						iLocal_244 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_70);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, iLocal_71);
						TASK::TASK_COMBAT_PED(iLocal_53, iLocal_54, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_53, 1193033728, 0);
						func_163();
					}
					PED::SET_PED_KEEP_TASK(iLocal_53, 1);
				}
				iLocal_74 = 1;
				break;
			}
	}
}

int func_63(int iParam0, int iParam1)//Position - 0x3BA5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (SYSTEM::VMAG(Var9) < SYSTEM::VMAG(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_64()//Position - 0x3C32
{
	if (!GlobalFunc_111())
	{
		if (!iLocal_292)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 30f, 30f, 30f, 0, 1, 0))
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PSTOP", 4, iLocal_253, 0, 0);
				iLocal_292 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else
			{
				GlobalFunc_10641(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}












int func_76()//Position - 0x4381
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, iLocal_53, 3.5f, 3.5f, 3.5f, 0, 1, 0) || GlobalFunc_81())
	{
		if (!func_77(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_77(float fParam0)//Position - 0x43C2
{
	var uVar0;
	struct<3> Var1;
	
	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), &uVar0, &Var1))
	{
		if (GlobalFunc_168(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}




void func_81()//Position - 0x443C
{
	if ((MISC::GET_GAME_TIMER() - iLocal_252) > 500)
	{
		if ((iLocal_48 != 1 && iLocal_48 != 3) && iLocal_48 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_58, iLocal_247);
				if (iLocal_247 == 1)
				{
					iLocal_247 = 0;
				}
				else
				{
					iLocal_247 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		if (!bLocal_60)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, iLocal_248);
				if (iLocal_248 == 1)
				{
					iLocal_248 = 0;
				}
				else
				{
					iLocal_248 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		iLocal_252 = MISC::GET_GAME_TIMER();
	}
	if (!bLocal_288 == bLocal_287)
	{
		if (bLocal_287)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_57, 1);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58, 0);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_57, 0);
			}
		}
		bLocal_288 = bLocal_287;
	}
}

int func_82(float fParam0)//Position - 0x451E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_278, Local_281, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}












int func_94()//Position - 0x4B56
{
	float fVar0;
	
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_278, Local_281, 194.75f, 0, 1, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_58))
				{
					uLocal_58 = GlobalFunc_6829(iLocal_54, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = GlobalFunc_6829(iLocal_53, 0, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_57, 0);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = GlobalFunc_6829(iLocal_53, 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				HUD::REMOVE_BLIP(&uLocal_58);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_58))
			{
				uLocal_58 = GlobalFunc_6829(iLocal_54, 0, 145);
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_57))
		{
			HUD::REMOVE_BLIP(&uLocal_57);
		}
		return 1;
	}
	return 0;
}




int func_98()//Position - 0x4D81
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_52 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_278 = { 2378.284f, 4863.027f, 32.50883f };
		Local_281 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_255 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_264 = "arrestcriminal";
		sLocal_265 = "REARR_CTHANK";
		sLocal_266 = "REARR_CORUN";
		sLocal_267 = "REARR_CWTF";
		sLocal_268 = "REARR_CTURN";
		sLocal_269 = "REARR_CHELP";
		sLocal_270 = "REARR_HATE";
		sLocal_271 = "REARR_CRAND";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_52 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_278 = { 2543.135f, 2683.917f, 0.307461f };
		Local_281 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_255 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_264 = "arrestcriminal2";
		sLocal_265 = "REARR_THANK2";
		sLocal_266 = "REARR_CORUN2";
		sLocal_267 = "REARR_CWTF2";
		sLocal_268 = "REARR_CTURN2";
		sLocal_269 = "REARR_CHELP2";
		sLocal_270 = "REARR_HATE2";
		sLocal_271 = "REARR_CRAND2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_257);
	STREAMING::REQUEST_ANIM_DICT(sLocal_258);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_257)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_258)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_53 = PED::CREATE_PED(6, iVar0, Var2, fVar8, 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 294, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_53, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 1);
		GlobalFunc_1286(&uLocal_77, 1, iLocal_53, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_53, 1);
		iLocal_54 = PED::CREATE_PED(26, iVar1, Var5, fVar9, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 281, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 1);
		GlobalFunc_1286(&uLocal_77, 2, iLocal_54, sLocal_264, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54, 1);
		if (iLocal_52 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 0, 0, 0);
		}
		func_99();
		if (GlobalFunc_8329() == 0)
		{
			GlobalFunc_1286(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (GlobalFunc_8329() == 1)
		{
			GlobalFunc_1286(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (GlobalFunc_8329() == 2)
		{
			GlobalFunc_1286(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_53, joaat("weapon_pistol"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_53, joaat("weapon_pistol"), 1);
		uLocal_59 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), Local_64.x, Local_64.f_1, (Local_64.f_2 + 100f), 1, 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(uLocal_59, 0);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
		{
			iLocal_52 = 1;
			TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_249, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_53, 150f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
			PED::SET_PED_KEEP_TASK(iLocal_54, 1);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_52 = 2;
			TASK::OPEN_SEQUENCE_TASK(&uLocal_72);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_249, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_53, 150f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_72);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_72);
			PED::SET_PED_KEEP_TASK(iLocal_54, 1);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
		}
		if (iLocal_52 == 1)
		{
		}
		TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
		PED::SET_PED_KEEP_TASK(iLocal_53, 1);
		return 1;
	}
	return 0;
}

void func_99()//Position - 0x51FA
{
	Local_249.x = 0f;
	Local_249.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, 0);
	PED::SET_PED_COMBAT_RANGE(iLocal_53, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_54, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 6, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 11, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 1, 0);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_70);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_71);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_70);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_71, iLocal_70);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_70, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_71, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_71, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_256);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54, sLocal_255);
}















int func_114()//Position - 0x7011
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
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}






int func_120(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x730F
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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











































void func_163()//Position - 0x895C
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_48)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				GlobalFunc_4702(6);
				func_177();
				break;
			
			case 3:
				GlobalFunc_4702(5);
				func_177();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_54))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_53);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(iLocal_53, 1), 9000f, -1, 0, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
				PED::SET_PED_KEEP_TASK(iLocal_54, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_PED_KEEP_TASK(iLocal_53, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 0);
				PED::SET_PED_AS_COP(iLocal_53, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_53, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_55();
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, 0);
				PED::SET_PED_AS_COP(iLocal_55, 1);
			}
		}
		if (GlobalFunc_6827())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_71, iLocal_70);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, iLocal_71);
		}
		if (iLocal_76)
		{
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_286)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_10823(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}














void func_177()//Position - 0x939C
{
	if (!bLocal_75)
	{
		GlobalFunc_82();
	}
	func_180(15, iLocal_52);
	GlobalFunc_7068();
}



void func_180(int iParam0, int iParam1)//Position - 0x9413
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















void func_195()//Position - 0xA475
{
	if (!bLocal_73 && iLocal_50 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_54))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 3f, 20000, 1193033728, 1056964608);
			PED::SET_PED_KEEP_TASK(iLocal_53, 1);
			SYSTEM::WAIT(0);
		}
	}
}

