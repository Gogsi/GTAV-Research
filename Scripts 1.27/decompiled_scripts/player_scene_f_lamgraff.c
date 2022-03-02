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
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	struct<3> Local_266 = { 0, 0, 0 } ;
	var uLocal_269 = 0;
	char* sLocal_270 = NULL;
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
	char[] cLocal_286[8] = 0;
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
	char cLocal_302[64] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
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
	iLocal_262 = 1;
	iLocal_318 = -1;
	fLocal_320 = 0f;
	fLocal_321 = 1f;
	fLocal_322 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_45();
	}
	SYSTEM::WAIT(0);
	func_31();
	func_28();
	GlobalFunc_576();
	while (iLocal_262 && GlobalFunc_9548(2, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_95)
		{
			case 0:
				if (GlobalFunc_6547())
				{
					iLocal_95 = 1;
				}
				break;
			
			case 1:
				if (func_20())
				{
					iLocal_95 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_95 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_45();
}

void func_1()//Position - 0x11F
{
	iLocal_262 = 0;
}

int func_2()//Position - 0x12B
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(Global_89748))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_264))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_89748, &sLocal_270, &cLocal_302, 3))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Global_89748))
				{
					TASK::STOP_ANIM_PLAYBACK(Global_89748, 0, 0);
					TASK::CLEAR_PED_TASKS(Global_89748);
					return 0;
				}
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318);
				if (!iLocal_263)
				{
					if (GlobalFunc_10643(&uLocal_97, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
					{
						iLocal_263 = 1;
					}
				}
				if (fVar0 < 0.2812f)
				{
					if (iLocal_319 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
						iLocal_319 = 0;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_319 == 0)
					{
						iLocal_319 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_lamgraff_paint_spray", uLocal_264, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_319, fLocal_320, fLocal_321, fLocal_322, 0);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_319 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
						iLocal_319 = 0;
					}
				}
				else if (fVar0 < 0.7712f)
				{
					if (iLocal_319 == 0)
					{
						iLocal_319 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_lamgraff_paint_spray", uLocal_264, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_319, fLocal_320, fLocal_321, fLocal_322, 0);
					}
				}
				else if (iLocal_319 != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
					iLocal_319 = 0;
				}
			}
			else if (iLocal_319 != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
				iLocal_319 = 0;
			}
		}
	}
	else
	{
		func_45();
		return 0;
	}
	return 0;
}


















int func_20()//Position - 0xAB2
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(Global_89748))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_264))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_89748, &sLocal_270, &cLocal_286, 3))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Global_89748))
				{
					TASK::STOP_ANIM_PLAYBACK(Global_89748, 0, 0);
					TASK::CLEAR_PED_TASKS(Global_89748);
					return 0;
				}
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
				if (fVar0 < 0.3812f)
				{
					if (iLocal_319 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
						iLocal_319 = 0;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_319 == 0)
					{
						iLocal_319 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_lamgraff_paint_spray", uLocal_264, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_319, fLocal_320, fLocal_321, fLocal_322, 0);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_319 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
						iLocal_319 = 0;
					}
				}
				else if (fVar0 < 0.6712f)
				{
					if (iLocal_319 == 0)
					{
						iLocal_319 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_lamgraff_paint_spray", uLocal_264, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_319, fLocal_320, fLocal_321, fLocal_322, 0);
					}
				}
				else if (fVar0 < 1f)
				{
					if (iLocal_319 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
						iLocal_319 = 0;
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_89748);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_318))
					{
						iLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(Local_266, 0f, 0f, uLocal_269, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_318, 1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(Global_89748, iLocal_318, &sLocal_270, &cLocal_302, 8f, -8f, 257, 0, 8f, 0);
					return 1;
				}
			}
			else
			{
				if (iLocal_319 != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
					iLocal_319 = 0;
				}
				if (GlobalFunc_10643(&uLocal_97, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(Global_89748);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_89748, 16);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_318))
					{
						iLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(Local_266, 0f, 0f, uLocal_269, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_318, 1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(Global_89748, iLocal_318, &sLocal_270, &cLocal_302, 8f, -8f, 257, 0, 8f, 0);
					return 1;
				}
			}
		}
	}
	else
	{
		func_45();
		return 0;
	}
	return 0;
}








void func_28()//Position - 0xECC
{
	STREAMING::REQUEST_MODEL(iLocal_265);
	STREAMING::REQUEST_PTFX_ASSET();
	while (!ENTITY::DOES_ENTITY_EXIST(Global_89748) || !STREAMING::HAS_MODEL_LOADED(iLocal_265))
	{
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89748, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
	{
		if (!PED::IS_PED_INJURED(Global_89748))
		{
			TASK::TASK_STAND_STILL(Global_89748, -1);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_89748, 1862763509);
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89748, 1, 1);
	PED::SET_PED_CONFIG_FLAG(Global_89748, 132, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_89748, 16);
	GlobalFunc_4667(&Global_89748, Global_85371);
	GlobalFunc_878(&uLocal_97, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	uLocal_264 = OBJECT::CREATE_OBJECT(iLocal_265, ENTITY::GET_ENTITY_COORDS(Global_89748, 1), 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_264, Global_89748, PED::GET_PED_BONE_INDEX(Global_89748, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
}



void func_31()//Position - 0x107C
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	char[] cVar237[8];
	var uVar253;
	var uVar254;
	
	iLocal_96 = Global_89502;
	GlobalFunc_8273(iLocal_96, &Local_266, &uLocal_269, &cVar0);
	iLocal_265 = joaat("prop_cs_spray_can");
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_96;
	Var8.f_3 = Global_87845.f_45;
	GlobalFunc_7224(Var8, &Var117);
	GlobalFunc_6548(iLocal_96, &sLocal_270, &cVar237, &cLocal_286, &uVar253, &uVar254);
	StringCopy(&cLocal_302, "Lamar_tagging_EXIT_LOOP_LAMAR", 64);
}














void func_45()//Position - 0x9DB9
{
	if (iLocal_319 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_319, 0);
		iLocal_319 = 0;
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

