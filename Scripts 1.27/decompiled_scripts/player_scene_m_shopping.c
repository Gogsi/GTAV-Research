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
	var uLocal_63 = 0;
	var uLocal_64 = 8;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 16;
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
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 5;
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
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	struct<3> Local_297 = { 0, 0, 0 } ;
	float fLocal_300 = 0f;
	struct<3> Local_301 = { 0, 0, 0 } ;
	float fLocal_304 = 0f;
	char cLocal_305[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	char cLocal_337[64] = "";
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	char cLocal_353[64] = "";
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	struct<3> Local_369 = { 0, 0, 0 } ;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	iLocal_96 = 318;
	iLocal_286 = 1;
	StringCopy(&cLocal_353, "", 64);
	fLocal_373 = -1f;
	iLocal_375 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_144();
	}
	SYSTEM::WAIT(0);
	func_124();
	func_122();
	GlobalFunc_576();
	while (iLocal_286 && GlobalFunc_9548(1, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_95)
		{
			case 0:
				if (func_114())
				{
					iLocal_95 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_95 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_144();
}

void func_1()//Position - 0x10B
{
	iLocal_286 = 0;
}

int func_2()//Position - 0x117
{
	func_3(&Global_89748);
	return 0;
}

int func_3(var uParam0)//Position - 0x129
{
	float fVar0;
	float fVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!GlobalFunc_9548(1, *uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
			PED::DELETE_PED(uParam0);
			func_113(-2, "ped dead baby, ped dead");
			return 0;
		}
		if (iLocal_287 >= 0)
		{
			if (FIRE::IS_ENTITY_ON_FIRE(*uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1805844857) != 1)
				{
					TASK::STOP_ANIM_PLAYBACK(*uParam0, 0, 0);
				}
				TASK::CLEAR_PED_TASKS(*uParam0);
				func_113(-1, "ped on fire");
				return 0;
			}
		}
		switch (iLocal_287)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
				{
					func_113(1, "loop or exit synch started");
					return 1;
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696))
				{
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
				{
					PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_87697);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cLocal_305, &cLocal_337, 2))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -16f, 1);
						PED::SET_PED_MOVE_ANIMS_BLEND_OUT(*uParam0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_297 + Local_301, 1f, -1, (fLocal_304 * 0.1f), 0, 1193033728);
						PED::FORCE_PED_MOTION_STATE(*uParam0, -668482597, 0, 0, 0);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*uParam0, 2);
						func_113(3, "not playing exit synch anim");
						return 1;
					}
					else
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
						if (!ENTITY::FIND_ANIM_EVENT_PHASE(&cLocal_305, &cLocal_337, "WalkInterruptible", &fVar1, &uVar2))
						{
						}
						else
						{
							if (fLocal_373 >= 0f)
							{
								if (fVar0 >= fLocal_373)
								{
									GlobalFunc_5117(*uParam0, "DISMISS_MICHAEL", "AMANDA_NORMAL", 24);
									fLocal_373 = -1f;
								}
							}
							if (fVar0 >= fVar1)
							{
								TASK::CLEAR_PED_TASKS(*uParam0);
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -16f, 1);
								PED::SET_PED_MOVE_ANIMS_BLEND_OUT(*uParam0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_297 + Local_301, 1f, -1, (fLocal_304 * 0.1f), 0, 1193033728);
								PED::FORCE_PED_MOTION_STATE(*uParam0, -668482597, 0, 0, 0);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*uParam0, 2);
								func_113(3, "WalkInterruptible phase reached");
								return 1;
							}
						}
					}
				}
				else if (iLocal_96 != 151)
				{
					TASK::CLEAR_PED_TASKS(*uParam0);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_353))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_297 + Local_301, 1f, -1, (fLocal_304 * 0.1f), 0, 1193033728);
						PED::FORCE_PED_MOTION_STATE(*uParam0, -668482597, 0, 0, 0);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*uParam0, 2);
						func_113(3, "not playing synch scene (navmesh)");
						return 1;
					}
					else
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, &cLocal_353, Local_297 + Local_369, (fLocal_300 + fLocal_372), 0, 0, 1);
						func_113(6, "not playing synch scene (scenario)");
						return 1;
					}
				}
				else
				{
					func_113(7, "not playing synch scene (anim)");
					return 1;
				}
				break;
			
			case 2:
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				}
				else
				{
					if (PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
					{
						return 0;
					}
					TASK::CLEAR_PED_TASKS(*uParam0);
					if (GlobalFunc_100(Local_301, 0f, 0f, 0f))
					{
						Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 5f, 0f, 0f) };
						Local_301 = { Var3 - Local_297 * Vector(4f, 4f, 4f) };
					}
					TASK::CLEAR_PED_TASKS(*uParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_297 + Local_301, 1f, -1, (fLocal_304 * 0.1f), 0, 1193033728);
					func_113(3, "not in vehicle");
					return 1;
				}
				break;
			
			case 3:
				if (func_110(*uParam0, 1))
				{
					func_113(8, 0);
					return 0;
				}
				if (func_109(uParam0))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
				{
					return 0;
				}
				func_7(*uParam0);
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 713668775) != 1)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Local_297 + Local_301) < (fLocal_304 * fLocal_304))
					{
						if (fLocal_304 == 0f)
						{
							fLocal_304 = (SYSTEM::VMAG(Local_301) * 0.75f);
						}
						TASK::TASK_WANDER_IN_AREA(*uParam0, Local_297 + Local_301, fLocal_304, 1077936128, 1086324736);
						func_113(4, 0);
						return 1;
					}
				}
				break;
			
			case 4:
				if (func_110(*uParam0, 1))
				{
					func_113(8, 0);
					return 0;
				}
				if (func_109(uParam0))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
				{
					return 0;
				}
				func_7(*uParam0);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Local_297 + Local_301) < (fLocal_304 * fLocal_304))
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_297 + Local_301, fLocal_304, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, Local_297 + Local_301, fLocal_304, 0);
						PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_374, 0);
						func_113(5, 0);
						return 1;
					}
				}
				break;
			
			case 5:
				if (func_110(*uParam0, 1))
				{
					func_113(8, 0);
					return 0;
				}
				if (func_109(uParam0))
				{
					return 0;
				}
				func_7(*uParam0);
				if (TASK::PED_HAS_USE_SCENARIO_TASK(*uParam0))
				{
				}
				else
				{
					if (PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
					{
						return 0;
					}
					Var6 = { func_4(Local_297 + Local_301, (fLocal_304 * 0.9f), 0f) };
					if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var6, 0, &Var9, 14))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Var9) > 100f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Var9, 1f, -1, 0.25f, 0, 1193033728);
							Var12 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) - Vector(2f, 2f, 2f) };
							Var15 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) + Vector(2f, 2f, 2f) };
							uLocal_374 = PED::ADD_SCENARIO_BLOCKING_AREA(Var12, Var15, 0, 0, 1, 1);
							func_113(3, "not using scenario");
							return 1;
						}
					}
				}
				break;
			
			case 6:
				if (func_110(*uParam0, 1))
				{
					func_113(8, 0);
					return 0;
				}
				if (func_109(uParam0))
				{
					return 0;
				}
				func_7(*uParam0);
				if (TASK::PED_HAS_USE_SCENARIO_TASK(*uParam0))
				{
				}
				else
				{
					func_7(*uParam0);
				}
				break;
			
			case 7:
				if (func_110(*uParam0, 0))
				{
					func_113(8, 0);
					return 0;
				}
				if (func_109(uParam0))
				{
					return 0;
				}
				func_7(*uParam0);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cLocal_305, &cLocal_321, 2))
				{
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cLocal_305, &cLocal_337, 2))
				{
				}
				break;
			
			case 8:
				if (func_109(uParam0))
				{
					return 0;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1805844857) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 50f, 20000, 1, 0);
					return 1;
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1)) > (50f * 1.25f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_297 + Local_301, 1f, -1, (fLocal_304 * 0.1f), 0, 1193033728);
					func_113(3, "flee to navmesh");
					return 1;
				}
				break;
			
			case -1:
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	else
	{
		if (iLocal_287 != -2)
		{
			func_113(-2, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			func_7(*uParam0);
		}
	}
	return 0;
}

Vector3 func_4(struct<3> Param0, float fParam3, float fParam4)//Position - 0x86E
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return Param0 + Var0;
		}
		iVar5++;
	}
	return GlobalFunc_5726(Param0, fParam3, fParam4);
}



void func_7(var uParam0)//Position - 0x966
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		if (!iLocal_377 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			iVar0 = GlobalFunc_7124(uParam0);
			iVar1 = GlobalFunc_769(iVar0);
			iVar2 = GlobalFunc_4327(iVar1);
			if (iVar2 != -1)
			{
				iVar3 = func_104(uParam0);
				if (iVar3 != 0)
				{
					if (!GlobalFunc_2647(iVar2) || func_95(iVar2) == 6)
					{
						GlobalFunc_2947(75, ENTITY::GET_ENTITY_COORDS(uParam0, 0), 250f, -1);
						if (func_40(Global_86101, iVar0, 2, 0, iVar3, iVar2, 75))
						{
							iLocal_377 = 1;
						}
					}
				}
			}
		}
		return;
	}
	func_10(uParam0, 138, &uLocal_97, "FMMAUD", &uLocal_262, &uLocal_283, 3);
	fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	if (fVar4 > (8f * 8f))
	{
		iLocal_375 = -1;
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0))
	{
		iLocal_375 = -1;
	}
	else
	{
		if (iLocal_375 <= 0)
		{
			iLocal_375 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_375 > 0)
		{
			if (iLocal_376 == 0)
			{
				if (iLocal_375 + 15000 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_5122(uParam0, "FRIEND_FOLLOWED_BY_PLAYER", 24);
					iLocal_375 = -1;
					iLocal_376++;
				}
			}
			else if (iLocal_375 + 10000 < MISC::GET_GAME_TIMER())
			{
				GlobalFunc_5122(uParam0, "HIT_BY_PLAYER", 24);
				iLocal_375 = -1;
				iLocal_376++;
			}
		}
	}
}



int func_10(var uParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)//Position - 0xCCA
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	bool bVar12;
	int iVar13;
	char cVar14[16];
	int iVar18;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar6 = GlobalFunc_8354();
	iVar7 = GlobalFunc_7535(uParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_85373[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_85373[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_85373[2] == 65 || Global_85373[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar6 == 1)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!GlobalFunc_485(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!GlobalFunc_485(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2f)
		{
			return 0;
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0) || !ENTITY::IS_ENTITY_VISIBLE(uParam0))
	{
		return 0;
	}
	bVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar12 = true;
			break;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(0, 46) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 46))
	{
		return 0;
	}
	if (!bVar12)
	{
		iVar13 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uParam0);
		if (Global_90014.f_289 != iVar13)
		{
			return 0;
		}
	}
	cVar14 = { Var8 };
	StringConCat(&cVar14, "_01", 16);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_31(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				GlobalFunc_878(uParam2, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				GlobalFunc_878(uParam2, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				GlobalFunc_878(uParam2, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
		}
		if (func_14(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			GlobalFunc_6877(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}




int func_14(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, int iParam5)//Position - 0x10F5
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		sVar0 = "";
		switch (GlobalFunc_8354())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
		{
			GlobalFunc_878(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10643(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			GlobalFunc_878(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10643(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				GlobalFunc_619(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}

















int func_31(var uParam0, char* sParam1, var uParam2)//Position - 0x19A1
{
	char cVar0[16];
	char cVar4[16];
	int iVar8;
	struct<4> Var9[15];
	bool bVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(uParam0, 7))
	{
		cVar0 = { *sParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			StringCopy(&cVar4, "", 16);
		}
		else
		{
			StringCopy(&cVar4, "0", 16);
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar70 = true;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = { *sParam1 };
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "o", 16);
				bVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2[iVar72 /*4*/]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var9[iVar73 /*4*/])))
					{
						if (MISC::ARE_STRINGS_EQUAL(uParam2[iVar72 /*4*/], &(Var9[iVar73 /*4*/])))
						{
							iVar74 = iVar73;
							while (iVar74 <= (Var9 - 1))
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74 /*4*/] = { Var9[iVar74 + 1 /*4*/] };
								}
								else
								{
									StringCopy(&(Var9[iVar74 /*4*/]), "", 16);
								}
								iVar74++;
							}
							iVar71 = (iVar71 - 1);
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar71 + 1);
		*sParam1 = { Var9[iVar75 /*4*/] };
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}









int func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2347
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_2962(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (GlobalFunc_7494(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (GlobalFunc_7121(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (GlobalFunc_6420(iVar1, iParam2, -1, &sVar8))
	{
		if (GlobalFunc_10666(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_70();
						break;
					
					case 203:
						func_69();
						break;
					
					case 204:
						func_68();
						break;
					
					case 205:
						func_67();
						break;
					
					case 206:
						func_41();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_41()//Position - 0x24F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8354();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 127, (iVar1 / 10));
	}
}


























void func_67()//Position - 0x3469
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8354();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 126, (iVar1 / 10));
	}
}

void func_68()//Position - 0x34AB
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8354();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 125, (iVar1 / 10));
	}
}

void func_69()//Position - 0x34ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8354();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 124, (iVar1 / 10));
	}
}

void func_70()//Position - 0x352F
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8354();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 123, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 123, (iVar1 / 10));
	}
}

























int func_95(int iParam0)//Position - 0x4B92
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar1 /*15*/] == iParam0)
		{
			return func_101(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar1 /*14*/] == iParam0)
		{
			return func_99(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar1 /*10*/] == iParam0)
		{
			return func_96(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_96(int iParam0, int iParam1)//Position - 0x4C48
{
	struct<10> Var0;
	bool bVar10;
	
	Var0 = { GlobalFunc_4329(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8354()))
	{
		return 6;
	}
	bVar10 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8354()))
	{
		bVar10 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar10)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8354()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_35465[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}



int func_99(int iParam0, int iParam1)//Position - 0x4D48
{
	struct<14> Var0;
	bool bVar14;
	
	Var0 = { GlobalFunc_4330(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8354()))
	{
		return 6;
	}
	bVar14 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8354()))
	{
		bVar14 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar14)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8354()])
		{
			return 5;
		}
	}
	if (Global_35465[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}


int func_101(int iParam0, int iParam1)//Position - 0x4E26
{
	struct<15> Var0;
	bool bVar15;
	
	Var0 = { GlobalFunc_4331(iParam0) };
	if (Var0 != iParam0)
	{
		return 6;
	}
	if (!GlobalFunc_42(GlobalFunc_8354()))
	{
		return 1;
	}
	if (Global_35460 != -1)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_35460 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar15 = false;
	if (MISC::IS_BIT_SET(Var0.f_2, GlobalFunc_8354()))
	{
		bVar15 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar15)
	{
		if (Var0.f_3 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[GlobalFunc_8354()])
		{
			return 5;
		}
	}
	if (Global_35465[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_35464 > iParam1)
	{
		return 2;
	}
	return 1;
}



int func_104(var uParam0)//Position - 0x5015
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			switch (GlobalFunc_793(Var0, 1))
			{
				case 0:
					return 202;
					break;
				
				case 1:
					return 203;
					break;
				
				case 2:
					return 204;
					break;
				
				case 3:
					return 205;
					break;
				
				case 4:
					return 206;
					break;
			}
			return 202;
		}
	}
	return 0;
}





int func_109(var uParam0)//Position - 0x522C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (SYSTEM::VDIST2(Var0, Var3) < (75f * 75f))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 1);
	PED::DELETE_PED(uParam0);
	return 1;
}

int func_110(var uParam0, bool bParam1)//Position - 0x528A
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(uParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(uParam0, 122))
		{
			return 1;
		}
	}
	return 0;
}



void func_113(int iParam0, char* sParam1)//Position - 0x531C
{
	sParam1 = sParam1;
	iLocal_287 = iParam0;
}

int func_114()//Position - 0x532D
{
	if (!GlobalFunc_2927())
	{
		GlobalFunc_878(&uLocal_97, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		switch (GlobalFunc_7535(Global_89748))
		{
			case 0:
				GlobalFunc_878(&uLocal_97, 1, Global_89748, GlobalFunc_2923(0), 0, 1);
				break;
			
			case 1:
				GlobalFunc_878(&uLocal_97, 2, Global_89748, GlobalFunc_2923(1), 0, 1);
				break;
			
			case 2:
				GlobalFunc_878(&uLocal_97, 3, Global_89748, GlobalFunc_2923(2), 0, 1);
				break;
			
			default:
				break;
		}
		func_3(&Global_89748);
		return 1;
	}
	func_3(&Global_89748);
	if (iLocal_290 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_289))
		{
			uLocal_289 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_297 + Local_291, 1f, iLocal_290, 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_289))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_289, Local_297 + Local_291, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uLocal_289, Vector(fLocal_300, 0f, 0f) + Local_294, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_289, 1);
			}
		}
	}
	return 0;
}








void func_122()//Position - 0x570D
{
	int iVar0;
	bool bVar1;
	
	if (iLocal_288 != 0)
	{
		VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_288, 3);
	}
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 400)
	{
		bVar1 = true;
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89748))
		{
			bVar1 = false;
		}
		if (iLocal_288 != 0)
		{
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_288))
			{
				bVar1 = false;
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89748, 1, 1);
	GlobalFunc_4667(&Global_89748, Global_85370);
	PED::SET_PED_CONFIG_FLAG(Global_89748, 132, 1);
	PED::SET_PED_CONFIG_FLAG(Global_89748, 317, 1);
}


void func_124()//Position - 0x57D9
{
	char[] cVar0[8];
	struct<58> Var8;
	var uVar82;
	var uVar85;
	var uVar86;
	var uVar89;
	var uVar90;
	var uVar91;
	
	iLocal_96 = Global_89502;
	GlobalFunc_8273(iLocal_96, &Local_297, &fLocal_300, &cVar0);
	switch (iLocal_96)
	{
		case 98:
			Local_301 = { -25f, -35f, 0f };
			fLocal_304 = 30f;
			fLocal_373 = 0.73f;
			break;
		
		case 99:
			Local_301 = { Vector(24.3224f, -700.7733f, -1306.836f) - Local_297 };
			fLocal_304 = 40f;
			iLocal_287 = 2;
			break;
		
		case 100:
			Local_301 = { Vector((82.0206f + 1f), 272.6104f, -566.2225f) - Local_297 };
			fLocal_304 = 30f;
			iLocal_287 = 2;
			break;
		
		case 101:
			Local_301 = { Vector((53.6418f + 1f), -217.321f, 77.2686f) - Local_297 };
			fLocal_304 = 25f;
			iLocal_287 = 2;
			break;
		
		case 102:
			Local_301 = { Vector((102.0191f + 1f), 313.2252f, 412.1519f) - Local_297 };
			fLocal_304 = 15f;
			iLocal_287 = 2;
			break;
		
		case 170:
			Local_301 = { Vector((37.8417f + 1f), -275.1926f, -616.7041f) - Local_297 };
			fLocal_304 = 30f;
			break;
		
		case 171:
			Local_301 = { Vector((56.8469f + 1f), -125.1416f, -106.3491f) - Local_297 };
			fLocal_304 = 25f;
			break;
		
		case 172:
			Local_301 = { Vector((56.8469f + 1f), -125.1416f, -106.3491f) - Local_297 };
			fLocal_304 = 25f;
			break;
		
		case 94:
			Local_301 = { Vector((112.1615f + 1f), 328.301f, -16.8925f) - Local_297 };
			fLocal_304 = 25f;
			break;
		
		case 152:
			Local_301 = { 0f, 0f, 0f };
			fLocal_304 = 0f;
			StringCopy(&cLocal_353, "PROP_HUMAN_SEAT_SUNLOUNGER", 64);
			Local_369 = { 1.358f, 2.385f, -0.608f };
			fLocal_372 = 160f;
			iLocal_290 = joaat("prop_patio_lounger1");
			Local_291 = { Vector(63.082f, 357.697f, -1352.644f) - Vector(64.08f, 355.1845f, -1353.791f) };
			Local_294 = { 0f, 0f, (54.35f - 72f) };
			break;
		
		case 151:
			Local_301 = { 0f, 0f, 0f };
			fLocal_304 = 0f;
			iLocal_290 = joaat("prop_chateau_chair_01");
			Local_291 = { 0.8706f, 2.0176f, -0.4948f };
			Local_294 = { 0f, 0f, 0f };
			break;
		
		default:
			Local_301 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-50f, 50f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-50f, 50f), 0f };
			fLocal_304 = (SYSTEM::VMAG(Local_301) * 0.75f);
			break;
	}
	if ((iLocal_96 != 94 && iLocal_96 != 152) && iLocal_96 != 151)
	{
		Var8.f_11 = 12;
		Var8.f_31 = 25;
		Var8.f_57 = 2;
		if (GlobalFunc_8040(0, iLocal_96, &Var8, &uVar82, &uVar85, &uVar86, &uVar89))
		{
			iLocal_288 = Var8;
		}
	}
	else
	{
		iLocal_288 = 0;
	}
	if (iLocal_287 == 0)
	{
		GlobalFunc_6548(iLocal_96, &cLocal_305, &cLocal_321, &cLocal_337, &uVar90, &uVar91);
		iLocal_287 = 0;
	}
	else
	{
		StringCopy(&cLocal_305, "", 64);
		StringCopy(&cLocal_321, "", 64);
		StringCopy(&cLocal_337, "", 64);
		iLocal_287 = 2;
	}
}




















void func_144()//Position - 0xF091
{
	if (iLocal_288 != 0)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_288);
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

