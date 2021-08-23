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
		func_115(15);
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
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_114()) && !func_101())
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
					func_83(1);
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
	if (func_80(iLocal_54))
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
							if (!func_75())
							{
								if (func_65(&uLocal_77, "REARRAU", "REARR_PCUFF", 4, iLocal_253, 0, 0))
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
												if (!func_75())
												{
													if (func_65(&uLocal_77, "REARRAU", "REARR_INCAR", 4, iLocal_253, 0, 0))
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
								if (!func_75())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
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
					if (!func_75())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
						{
							func_65(&uLocal_77, "REARRAU", sLocal_273, 4, iLocal_253, 0, 0);
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
					if (!func_75())
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
						if (!func_75())
						{
							if (func_65(&uLocal_77, "REARRAU", "REARR_PRAD1", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_75())
						{
							if (func_65(&uLocal_77, "REARRAU", "REARR_PRAD2", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_75())
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
						if (!func_75())
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0);
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
								else if (!func_75())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
								}
							}
							else if (iLocal_243 == 8000)
							{
								if (!func_75())
								{
									func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 20000;
								}
							}
							else if (!func_75())
							{
								func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
								iLocal_243 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_54))
							{
								if (!func_75())
								{
									func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 30000;
								}
							}
							else if (!func_75())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
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
			func_65(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, sLocal_258, sLocal_259, 3))
	{
		func_65(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
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
			func_65(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
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
	bLocal_260 = func_9();
	bLocal_260 = iLocal_262;
	iLocal_243 = 20000;
	iLocal_261 = 0;
}

int func_9()//Position - 0x13C4
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
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
					if (!func_75())
					{
						if (iLocal_244 < 2)
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
							if (HUD::DOES_BLIP_EXIST(uLocal_57))
							{
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
							}
						}
						else
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
						}
						iLocal_242 = 2;
					}
				}
			}
			else if (!func_75())
			{
				if (iLocal_244 < 2)
				{
					func_65(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_57))
					{
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_57, 1);
					}
				}
				else
				{
					func_65(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
				}
				iLocal_242 = 2;
			}
			break;
		
		case 2:
			if (!func_75())
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
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, 242628503) == 7 || func_65(&uLocal_77, "REARRAU", sLocal_270, 4, iLocal_253, 0, 0))
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
								if (!func_75())
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
								if (!func_75())
								{
									if (iLocal_244 < 2)
									{
										func_65(&uLocal_77, "REARRAU", sLocal_265, 4, iLocal_253, 0, 0);
										TASK::TASK_PLAY_ANIM(iLocal_54, sLocal_257, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_65(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
									}
									func_15(func_41(), 1, 250, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_54);
									iLocal_246 = 6;
								}
							}
							break;
						
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_75())
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
				if (!func_75())
				{
					func_65(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				func_163();
			}
		}
		else
		{
			func_13();
			TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_48 = 1;
			}
			if (!func_75())
			{
				func_65(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
			}
			func_163();
		}
	}
}

void func_13()//Position - 0x1C87
{
	Global_14558 = 0;
	func_14();
}

void func_14()//Position - 0x1C97
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16703 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1CBB
{
	int iVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1DA2
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_40();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_39(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_34913 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)//Position - 0x23A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)//Position - 0x2623
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)//Position - 0x267D
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_21() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)//Position - 0x2740
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()//Position - 0x27BB
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)//Position - 0x27C8
{
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

bool func_23(int iParam0)//Position - 0x27E8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)//Position - 0x2824
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_37(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)//Position - 0x28DB
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)//Position - 0x28F6
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_36(&Global_2544859))
	{
		if (func_34(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_27(var uParam0, int iParam1)//Position - 0x297A
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)//Position - 0x2A00
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)//Position - 0x2A50
{
	return (*uParam0)[iParam1] == 61;
}

void func_30(var uParam0)//Position - 0x2A61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_62), (8f - 0.5f));
}

void func_31(var uParam0, float fParam1)//Position - 0x2A98
{
	uParam0->f_1 = (func_32(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)//Position - 0x2AC6
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_33(var uParam0, int iParam1)//Position - 0x2B0E
{
	(*uParam0)[iParam1] = 61;
}

bool func_34(var uParam0, int iParam1)//Position - 0x2B1E
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)//Position - 0x2B30
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(var uParam0)//Position - 0x2B5D
{
	return uParam0->f_68 == 1;
}

int func_37(int iParam0, int iParam1)//Position - 0x2B6B
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

void func_38(int iParam0, int iParam1)//Position - 0x2BBC
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_39(int iParam0, int iParam1)//Position - 0x2BDF
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_40()//Position - 0x2C3C
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_41()//Position - 0x2CB1
{
	func_42();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_42()//Position - 0x2CCA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_46(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_45(PLAYER::PLAYER_PED_ID());
			if (func_44(iVar0) && (!func_43(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_44(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_43(int iParam0)//Position - 0x2DC7
{
	return Global_34913 == iParam0;
}

bool func_44(int iParam0)//Position - 0x2DD5
{
	return iParam0 < 3;
}

int func_45(int iParam0)//Position - 0x2DE1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x2E1E
{
	if (func_44(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
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
				if (!func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_53) && iLocal_285 == 0)
					{
						if (func_65(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0))
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
			func_53(&uLocal_77, 2);
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
			func_53(&uLocal_77, 1);
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
				func_49();
				SYSTEM::WAIT(0);
				func_65(&uLocal_77, "REARRAU", "REARR_PORUN", 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 40f, 40f, 40f, 0, 1, 0))
			{
				func_49();
				SYSTEM::WAIT(0);
				func_65(&uLocal_77, "REARRAU", sLocal_266, 4, iLocal_253, 0, 0);
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

void func_49()//Position - 0x3389
{
	Global_14558 = 0;
	func_50();
}

void func_50()//Position - 0x3399
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

void func_53(var uParam0, int iParam1)//Position - 0x3621
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
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
						if (!func_75())
						{
							func_65(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
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
			func_56();
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

void func_56()//Position - 0x3871
{
	Global_14558 = 0;
	func_57();
}

void func_57()//Position - 0x3881
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
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
	if (!func_75())
	{
		if (iLocal_274 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
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
								func_49();
								SYSTEM::WAIT(0);
								func_65(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
							}
						}
						iLocal_244 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_75())
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
						func_65(&uLocal_77, "REARRAU", sLocal_268, 4, iLocal_253, 0, 0);
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
	if (!func_75())
	{
		if (!iLocal_292)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 30f, 30f, 30f, 0, 1, 0))
			{
				func_65(&uLocal_77, "REARRAU", "REARR_PSTOP", 4, iLocal_253, 0, 0);
				iLocal_292 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				func_65(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_65(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_65(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else
			{
				func_65(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3D32
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x3D80
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
					func_50();
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
		if (func_73(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_72();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_67();
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
		func_50();
	}
	return 0;
}

void func_67()//Position - 0x404E
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

void func_68()//Position - 0x4080
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

int func_69()//Position - 0x4115
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x413C
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

void func_71()//Position - 0x41D5
{
	if (func_43(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
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
		Global_14393 = func_41();
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

void func_72()//Position - 0x4276
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

bool func_73(int iParam0, int iParam1)//Position - 0x42CE
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

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4309
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

int func_75()//Position - 0x435F
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_76()//Position - 0x4381
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, iLocal_53, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_79())
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
		if (func_78(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_78(struct<3> Param0, struct<3> Param3)//Position - 0x43F2
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_79()//Position - 0x4413
{
	return 0;
}

int func_80(int iParam0)//Position - 0x441C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
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

int func_83(int iParam0)//Position - 0x45C8
{
	if (func_88())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_87(Global_97342))
		{
			func_84(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_87(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x461B
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_85(func_86(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_85(func_86(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLIP_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_85(func_86(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_85(var uParam0, int iParam1)//Position - 0x46FC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_86(int iParam0)//Position - 0x4713
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

int func_87(int iParam0)//Position - 0x4757
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

int func_88()//Position - 0x4786
{
	switch (func_89(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_89(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x47BC
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
		if (func_93(0))
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
		if (!func_91(iParam2))
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
			func_90(uParam0, iParam4);
		}
	}
	return 2;
}

void func_90(var uParam0, int iParam1)//Position - 0x48F3
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

bool func_91(int iParam0)//Position - 0x4942
{
	return func_92(iParam0, Global_34913);
}

int func_92(int iParam0, int iParam1)//Position - 0x4953
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

int func_93(int iParam0)//Position - 0x4B34
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_91(iParam0))
	{
		return 0;
	}
	return 1;
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
					uLocal_58 = func_95(iLocal_54, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_57))
				{
					uLocal_57 = func_95(iLocal_53, 0, 145);
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
					uLocal_57 = func_95(iLocal_53, 0, 145);
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
				uLocal_58 = func_95(iLocal_54, 0, 145);
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

var func_95(var uParam0, bool bParam1, int iParam2)//Position - 0x4C74
{
	var uVar0;
	
	uVar0 = func_96(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x4CC6
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_97(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_97(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_97(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_97(bool bParam0, float fParam1, float fParam2)//Position - 0x4D6A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
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
		func_100(&uLocal_77, 1, iLocal_53, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_53, 1);
		iLocal_54 = PED::CREATE_PED(26, iVar1, Var5, fVar9, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_54, 281, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 1);
		func_100(&uLocal_77, 2, iLocal_54, sLocal_264, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54, 1);
		if (iLocal_52 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 0, 0, 0);
		}
		func_99();
		if (func_41() == 0)
		{
			func_100(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_41() == 1)
		{
			func_100(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_41() == 2)
		{
			func_100(&uLocal_77, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
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

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x52DC
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

int func_101()//Position - 0x5377
{
	if (!func_91(5))
	{
		return 1;
	}
	if (func_110())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_102(float fParam0, bool bParam1)//Position - 0x53D9
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
		if (func_44(func_41()))
		{
			iVar36 = func_108();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_103(iVar32, &Var0);
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

void func_103(int iParam0, var uParam1)//Position - 0x5490
{
	switch (iParam0)
	{
		case 0:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 1:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 2:
			func_104(uParam1, "Barry1", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 3:
			func_104(uParam1, "Barry2", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 4:
			func_104(uParam1, "Barry3", func_106(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 5:
			func_104(uParam1, "Barry3A", func_106(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 6:
			func_104(uParam1, "Barry3C", func_106(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 7:
			func_104(uParam1, "Barry4", func_106(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_105(iParam0), 0, 0);
			break;
		
		case 8:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 9:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 10:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 11:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 12:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 13:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 14:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 15:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 16:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 17:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 18:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 19:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 20:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 21:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 22:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 23:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_105(iParam0), 0, 1);
			break;
		
		case 24:
			func_104(uParam1, "Hao1", func_106(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_105(iParam0), 0, 1);
			break;
		
		case 25:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 26:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 27:
			func_104(uParam1, "Josh1", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 28:
			func_104(uParam1, "Josh2", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 29:
			func_104(uParam1, "Josh3", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 30:
			func_104(uParam1, "Josh4", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 31:
			func_104(uParam1, "Maude1", func_106(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 32:
			func_104(uParam1, "Minute1", func_106(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 33:
			func_104(uParam1, "Minute2", func_106(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 34:
			func_104(uParam1, "Minute3", func_106(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 35:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 36:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 37:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 38:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 39:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 40:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 41:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 42:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 43:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 44:
			func_104(uParam1, "Omega1", func_106(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 45:
			func_104(uParam1, "Omega2", func_106(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 46:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 47:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 48:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 49:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 50:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 51:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 52:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 54:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 55:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 56:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 53:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 57:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 58:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 59:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 60:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 61:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 62:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x66D7
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

int func_105(int iParam0)//Position - 0x6768
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

struct<2> func_106(int iParam0)//Position - 0x6AAE
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_107(iParam0) };
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

struct<2> func_107(int iParam0)//Position - 0x6AE6
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

int func_108()//Position - 0x6F33
{
	func_42();
	switch (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213)
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

int func_109()//Position - 0x6F79
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

int func_110()//Position - 0x6F96
{
	if (func_113() && !func_109())
	{
		return 1;
	}
	if (func_112() && func_111())
	{
		return 1;
	}
	return 0;
}

bool func_111()//Position - 0x6FC8
{
	return Global_97071 > 0;
}

int func_112()//Position - 0x6FD6
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_113()//Position - 0x6FEB
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_114()//Position - 0x7011
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_110())
	{
		return 1;
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0)//Position - 0x7097
{
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_117(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_116();
}

void func_116()//Position - 0x70CD
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

void func_117(int iParam0)//Position - 0x710A
{
	Global_97342 = iParam0;
}

int func_118()//Position - 0x7118
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_119(Var0);
	return uVar16;
}

int func_119(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x7135
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
		iParam3 = func_118();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_162())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_109())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_161(0))
		{
			return 0;
		}
		if (func_110())
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_44(func_41()))
		{
			if (func_102(100f, 1) != -1)
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
		if (!func_159(iParam3))
		{
			return 0;
		}
		if (func_44(func_41()))
		{
			if (func_158(func_41()) == 4 || func_158(func_41()) == 5)
			{
				return 0;
			}
		}
		if (func_44(func_41()))
		{
			if (!func_157(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_156(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_155())
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
		if (!func_146(4))
		{
			return 0;
		}
		if (!func_91(5))
		{
			return 0;
		}
		if (func_145(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_145(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_159(30) && !func_145(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_44(func_41()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_144(iVar8))
				{
					if (func_122(iVar4))
					{
						if (!func_121(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_41() != iVar4)
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

bool func_121(struct<3> Param0, struct<3> Param3)//Position - 0x76A8
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_122(int iParam0)//Position - 0x76D1
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_123(iVar0);
}

int func_123(int iParam0)//Position - 0x76F2
{
	return func_124(iParam0, 1);
}

int func_124(int iParam0, int iParam1)//Position - 0x7701
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_144(iParam0))
	{
		return 0;
	}
	func_125(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7754
{
	func_126(func_137(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_126(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7772
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_136(iParam0, iParam1))
	{
		iVar0 = func_135(iParam1);
		iVar1 = func_133(iParam0);
		iVar2 = (func_133(iParam0) - func_133(iParam1));
		iVar3 = (func_135(iParam0) - func_135(iParam1));
		iVar4 = (func_132(iParam0) - func_132(iParam1));
		iVar5 = (func_131(iParam0) - func_131(iParam1));
		iVar6 = (func_130(iParam0) - func_130(iParam1));
		iVar7 = (func_129(iParam0) - func_129(iParam1));
	}
	else
	{
		iVar0 = func_135(iParam0);
		iVar1 = func_133(iParam1);
		iVar2 = (func_133(iParam1) - func_133(iParam0));
		iVar3 = (func_135(iParam1) - func_135(iParam0));
		iVar4 = (func_132(iParam1) - func_132(iParam0));
		iVar5 = (func_131(iParam1) - func_131(iParam0));
		iVar6 = (func_130(iParam1) - func_130(iParam0));
		iVar7 = (func_129(iParam1) - func_129(iParam0));
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
		iVar4 = (iVar4 + func_128(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_127(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_127(float fParam0, float fParam1, float fParam2)//Position - 0x7973
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

int func_128(int iParam0, int iParam1)//Position - 0x79B5
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

int func_129(int iParam0)//Position - 0x7A57
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_130(int iParam0)//Position - 0x7A6A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_131(int iParam0)//Position - 0x7A7D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_132(int iParam0)//Position - 0x7A90
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_133(int iParam0)//Position - 0x7AA2
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_134(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_134(bool bParam0, int iParam1, int iParam2)//Position - 0x7AC7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_135(int iParam0)//Position - 0x7ADE
{
	return iParam0 & 15;
}

int func_136(int iParam0, int iParam1)//Position - 0x7AEB
{
	int iVar0;
	int iVar1;
	
	if (!func_144(iParam1) || !func_144(iParam0))
	{
		return 1;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
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
	iVar0 = func_129(iParam0);
	iVar1 = func_129(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x7BF7
{
	var uVar0;
	
	func_143(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_142(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_141(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_140(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_139(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_138(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_138(var uParam0, int iParam1)//Position - 0x7C3D
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

void func_139(var uParam0, int iParam1)//Position - 0x7CC3
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)//Position - 0x7CF6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_135(*uParam0);
	iVar1 = func_133(*uParam0);
	if (iParam1 < 1 || iParam1 > func_128(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_141(var uParam0, int iParam1)//Position - 0x7D47
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_142(var uParam0, int iParam1)//Position - 0x7D81
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_143(var uParam0, int iParam1)//Position - 0x7DBC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_144(int iParam0)//Position - 0x7DF8
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
	iVar0 = func_129(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_130(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_131(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_133(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_135(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_132(iParam0);
	if (iVar5 < 1 || iVar5 > func_128(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0, int iParam1)//Position - 0x7ED4
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x7EF7
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_41();
				if (!func_44(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_154()) || Global_96400) || Global_24446) || func_153()) || func_73(8, -1)) || func_152()) || func_151()) || func_150()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_154()) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_152()) || func_151()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_154()) || Global_96400) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_152()) || func_151()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_154()) || Global_96400) || Global_24446) || func_153()) || func_73(8, -1)) || func_152()) || func_151()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_154() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_73(8, -1)) || func_149()) || func_148()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_152()) || func_151()) || func_148()) || func_147())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_154()) || Global_24446) || func_153()) || func_73(8, -1)) || func_151()) || func_150()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_154()) || func_151()) || Global_96400) || Global_24446) || func_153()) || Global_35957) || func_73(8, -1)) || func_150()) || func_148()) || func_149()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_154()) || Global_96400) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_148()) || func_152()) || func_151()) || func_149())
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

var func_147()//Position - 0x8615
{
	return Global_90001.f_1;
}

int func_148()//Position - 0x8623
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_149()//Position - 0x8649
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_150()//Position - 0x8663
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

bool func_151()//Position - 0x868D
{
	return Global_90014.f_291 > 0;
}

bool func_152()//Position - 0x869E
{
	return Global_90014.f_290 > 0;
}

var func_153()//Position - 0x86AF
{
	return Global_1315900;
}

int func_154()//Position - 0x86BB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_155()//Position - 0x86D7
{
	func_71();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0)//Position - 0x86FF
{
	return func_136(func_137(), iParam0);
}

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x8711
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_41();
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

int func_158(int iParam0)//Position - 0x87F5
{
	if (!func_44(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_159(int iParam0)//Position - 0x8819
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RE_FLAGS, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_TIME_REQ_SET, iVar0);
	}
	return bVar1;
}

int func_160()//Position - 0x8877
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_161(bool bParam0)//Position - 0x88AE
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_162()//Position - 0x88D9
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
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
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
				func_194(6);
				func_177();
				break;
			
			case 3:
				func_194(5);
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
		if (func_176())
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
	func_164(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_164(int iParam0)//Position - 0x8AE9
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_176())
	{
		func_169(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_168(30000);
		StringCopy(&cVar0, func_167(Global_97342, 1), 64);
		if (func_166(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_97339, (MISC::GET_GAME_TIMER() - Global_97340), 0);
	}
	else if (MISC::IS_BIT_SET(Global_97349, 0) && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
	{
		MISC::CLEAR_BIT(&Global_97349, 0);
	}
	func_165(&Global_24503);
	Global_97343 = 0;
	func_117(-1);
}

void func_165(var uParam0)//Position - 0x8B9E
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

int func_166(int iParam0)//Position - 0x8BDB
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

char* func_167(int iParam0, bool bParam1)//Position - 0x8C8C
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

void func_168(int iParam0)//Position - 0x8ED5
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_169(int iParam0)//Position - 0x8EE7
{
	func_170(iParam0, 0, func_175(iParam0));
}

void func_170(int iParam0, int iParam1, int iParam2)//Position - 0x8EFC
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_137();
	func_173(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_172(iParam0, &uVar0);
	Var1 = { func_171(&uVar0) };
}

struct<16> func_171(var uParam0)//Position - 0x8F2B
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_131(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_129(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_133(*uParam0), 64);
	return Var0;
}

void func_172(int iParam0, var uParam1)//Position - 0x8FFC
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9014
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_133(*uParam0);
	iVar1 = func_135(*uParam0);
	iVar2 = func_132(*uParam0);
	iVar3 = func_131(*uParam0);
	iVar4 = func_130(*uParam0);
	iVar5 = func_129(*uParam0);
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
	iVar6 = func_128(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_128(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_174(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9196
{
	func_143(uParam0, iParam1);
	func_142(uParam0, iParam2);
	func_141(uParam0, iParam3);
	func_140(uParam0, iParam4);
	func_139(uParam0, iParam5);
	func_138(uParam0, iParam6);
}

int func_175(int iParam0)//Position - 0x91CE
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

int func_176()//Position - 0x9371
{
	if ((Global_97342 == func_118() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_177()//Position - 0x939C
{
	if (!bLocal_75)
	{
		func_193();
	}
	func_180(15, iLocal_52);
	func_178();
}

void func_178()//Position - 0x93BB
{
	func_179();
}

int func_179()//Position - 0x93C8
{
	if (func_161(0))
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

void func_180(int iParam0, int iParam1)//Position - 0x9413
{
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_166(iParam0))
	{
		func_192(iParam0, iParam1);
		if (!func_191(51))
		{
			func_188("RE_REWARD", 1, 0, 4000, 10000, func_108(), 0, 138, 0);
			func_187(51);
		}
		if (func_87(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_186(iParam0, iParam1) != 322)
		{
			func_181(func_186(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_194(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_194(7);
			}
			else
			{
				func_194(1);
			}
		}
	}
}

void func_181(int iParam0, var uParam1, var uParam2)//Position - 0x9517
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
		func_184((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = 1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = uParam1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = uParam2;
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
		func_182();
	}
}

void func_182()//Position - 0x95FF
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
	fVar8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
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
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856), 14);
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
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
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
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853))
	{
		func_37(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_183() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_179();
				}
			}
		}
	}
}

int func_183()//Position - 0x9AC0
{
	return Global_24444;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9ACB
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
		iParam2 = func_185();
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

int func_185()//Position - 0x9D28
{
	return Global_1312737;
}

int func_186(int iParam0, int iParam1)//Position - 0x9D34
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

void func_187(int iParam0)//Position - 0xA0A8
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
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

void func_188(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA0EA
{
	func_189(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_189(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xA10C
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
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_190();
	}
}

void func_190()//Position - 0xA2E0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_191(int iParam0)//Position - 0xA400
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
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

void func_192(int iParam0, int iParam1)//Position - 0xA443
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

int func_193()//Position - 0xA45E
{
	return 1;
}

void func_194(int iParam0)//Position - 0xA467
{
	Global_97339 = iParam0;
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

