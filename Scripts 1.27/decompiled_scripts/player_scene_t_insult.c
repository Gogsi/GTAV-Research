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
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 16;
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
	int iLocal_231 = 0;
	int iLocal_232[2] = { 0, 0 };
	int iLocal_235[2] = { 0, 0 };
	int iLocal_238[2] = { 0, 0 };
	int iLocal_241[2] = { 0, 0 };
	int iLocal_244[2] = { 0, 0 };
	var uLocal_247 = 0;
	int iLocal_248[2] = { 0, 0 };
	int iLocal_251[2] = { 0, 0 };
	struct<3> Local_254[2];
	struct<3> Local_261[2];
	struct<3> Local_268 = { 0, 0, 0 } ;
	float fLocal_271 = 0f;
	struct<3> Local_272[2];
	struct<3> Local_279[2];
	float fLocal_286[2] = { 0f, 0f };
	float fLocal_289[2] = { 0f, 0f };
	char* sLocal_292 = NULL;
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
	char[] cLocal_308[8] = 0;
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
	char[] cLocal_324[8] = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	char cLocal_340[64] = "";
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	struct<16> Local_356[2];
	struct<16> Local_389[2];
	struct<16> Local_422[2];
	struct<16> Local_455[2];
	struct<16> Local_488[2];
	struct<16> Local_521[2];
	struct<16> Local_554[2];
	struct<16> Local_587[2];
	struct<16> Local_620[2];
	struct<16> Local_653[2];
	struct<16> Local_686[2];
	int iLocal_719 = 0;
	struct<2> Local_720 = { 0, 0 } ;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	float fLocal_724 = 0f;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
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
	iLocal_65 = 318;
	iLocal_231 = 1;
	iLocal_719 = -1;
	StringCopy(&Local_720, "", 16);
	fLocal_724 = 0f;
	iLocal_726 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_49();
	}
	SYSTEM::WAIT(0);
	func_39();
	func_38();
	GlobalFunc_576();
	while (iLocal_231 && GlobalFunc_9549(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_32())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (func_30())
				{
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_64 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_49();
}

void func_1()//Position - 0x120
{
	iLocal_231 = 0;
}

int func_2()//Position - 0x12B
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		func_20(iLocal_232[iVar0], iVar0);
		iVar0++;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
	{
		fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_720))
		{
			if (!iLocal_725)
			{
				if (fVar1 < fLocal_724)
				{
				}
				else if (GlobalFunc_10641(&uLocal_66, "PRSAUD", &Local_720, 3, 0, 0, 0))
				{
					iLocal_725 = 1;
				}
			}
		}
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (SYSTEM::VDIST(Var2, Local_268) < 100f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (!PED::IS_PED_INJURED(iLocal_232[iVar0]))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_232[iVar0], 1) };
			if (SYSTEM::VDIST(Var2, Var5) < 100f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}


















void func_20(int iParam0, int iParam1)//Position - 0xA21
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iLocal_235[iParam1])
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &cLocal_340, &(Local_389[iParam1 /*16*/]), 2))
				{
					fVar0 = -1f;
					fVar1 = -1f;
					if (ENTITY::FIND_ANIM_EVENT_PHASE(&cLocal_340, &(Local_389[iParam1 /*16*/]), "WalkInterruptible", &fVar0, &fVar1) || func_29(&cLocal_340, &(Local_389[iParam1 /*16*/]), "WalkInterruptible", &fVar0, &fVar1))
					{
						fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
						if (fVar2 > fVar0)
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iParam0, -8f, 1);
							PED::SET_PED_MOVE_ANIMS_BLEND_OUT(iParam0);
							fVar3 = 1f;
							iVar4 = -668482597;
							if (iLocal_65 == 263)
							{
								fVar3 = 2f;
								iVar4 = -530524;
								GlobalFunc_5117(iParam0, "GENERIC_FRIGHTENED_HIGH", "A_M_O_TRAMP_01_BLACK_FULL_01", 24);
							}
							if (iLocal_65 == 244)
							{
								fVar3 = 2f;
								iVar4 = -530524;
							}
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_268 + Local_279[iParam1 /*3*/], fVar3, -1, (fLocal_289[iParam1] * 0.1f), 0, 1193033728);
							PED::FORCE_PED_MOTION_STATE(iParam0, iVar4, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
							iLocal_235[iParam1] = 1;
							return;
						}
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_422[iParam1 /*16*/])))
					{
						if (GlobalFunc_100(Local_279[iParam1 /*3*/], 0f, 0f, 0f))
						{
							Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
							Local_279[iParam1 /*3*/] = { Var5 - Local_268 * Vector(4f, 4f, 4f) };
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_686[iParam1 /*16*/])))
						{
							PED::SET_PED_MOVEMENT_CLIPSET(iParam0, &(Local_686[iParam1 /*16*/]), 1048576000);
						}
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_268 + Local_279[iParam1 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
						iLocal_235[iParam1] = 1;
					}
					else
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_719))
						{
							iLocal_719 = PED::CREATE_SYNCHRONIZED_SCENE(Local_268, 0f, 0f, fLocal_271, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_719, 1);
						}
						iVar8 = 5;
						iVar9 = 144;
						iVar10 = 0;
						if (iLocal_251[0] == joaat("p_trev_rope_01_s") || iLocal_251[1] == joaat("p_trev_rope_01_s"))
						{
							if (!GlobalFunc_2951(iVar8, 4))
							{
								GlobalFunc_2953(&iVar8, 4);
							}
							if (!GlobalFunc_2951(iVar8, 1))
							{
								GlobalFunc_2953(&iVar8, 1);
							}
							if (!GlobalFunc_2951(iVar9, 16))
							{
								GlobalFunc_2953(&iVar9, 16);
							}
							if (!GlobalFunc_2951(iVar9, 128))
							{
								GlobalFunc_2953(&iVar9, 128);
							}
							if (!GlobalFunc_2951(iVar10, 0))
							{
								GlobalFunc_2953(&iVar10, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_232[iParam1], 1);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_232[iParam1], 0);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_232[iParam1], 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_232[iParam1], 1000);
							ENTITY::SET_ENTITY_HEALTH(iLocal_232[iParam1], ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_232[iParam1]));
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_232[iParam1], 0);
							PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 64, 1);
							PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 249, 1);
							PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 335, 1);
							iVar11 = 0;
							while (iVar11 < iLocal_248)
							{
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_248[iVar11], 0);
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_248[iVar11], 0);
								iVar11++;
							}
						}
						if (!GlobalFunc_2951(iVar9, 16))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_232[iParam1], 0);
						}
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iParam1], iLocal_719, &cLocal_340, &(Local_422[iParam1 /*16*/]), 1000f, -1000f, iVar8, iVar9, 1000f, iVar10);
						iVar11 = 0;
						while (iVar11 < iLocal_248)
						{
							if (iLocal_251[iVar11] != 0)
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_587[iVar11 /*16*/])))
								{
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar11], iLocal_719, &(Local_587[iVar11 /*16*/]), &cLocal_340, 8f, 8f, 0, 1148846080);
								}
							}
							iVar11++;
						}
						Local_279[iParam1 /*3*/] = { Local_272[iParam1 /*3*/] };
						iLocal_235[iParam1] = 10;
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_GROUP_MEMBER(iLocal_232[iParam1], uLocal_247))
				{
					if (!PED::DOES_GROUP_EXIST(uLocal_247))
					{
						uLocal_247 = PED::CREATE_GROUP(0);
					}
					if (iParam1 == 0)
					{
						PED::SET_PED_AS_GROUP_LEADER(iLocal_232[iParam1], uLocal_247);
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_232[iParam1], uLocal_247);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
				{
					if (fLocal_289[iParam1] == 0f)
					{
						fLocal_289[iParam1] = (SYSTEM::VMAG(Local_279[iParam1 /*3*/]) * 0.75f);
					}
					TASK::TASK_WANDER_IN_AREA(iParam0, Local_268 + Local_279[iParam1 /*3*/], fLocal_289[iParam1], 1077936128, 1086324736);
					iLocal_235[iParam1] = 2;
					break;
				}
				if (func_23(iParam0))
				{
					iLocal_235[iParam1] = 3;
					break;
				}
				break;
			
			case 2:
				if (func_23(iParam0))
				{
					iLocal_235[iParam1] = 3;
					break;
				}
				break;
			
			case 3:
				iVar12 = 0;
				while (iVar12 < iLocal_235)
				{
					if (iParam1 != iVar12)
					{
						if (iLocal_235[iVar12] != 3 && iLocal_235[iVar12] != 4)
						{
							iLocal_235[iVar12] = 3;
						}
					}
					iVar12++;
				}
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0, 1);
				iLocal_235[iParam1] = 4;
				break;
			
			case 4:
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
				{
					iLocal_235[iParam1] = 1;
				}
				break;
			
			case 10:
				if (func_22(iParam0))
				{
					iLocal_235[iParam1] = 1;
					break;
				}
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 64, 1);
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 249, 1);
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 335, 1);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_232[iParam1], &cLocal_340, &(Local_422[iParam1 /*16*/]), 2))
				{
					if (iLocal_65 == 288)
					{
						if (iLocal_726 <= 0)
						{
							iLocal_726 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
						}
						if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
						{
							iLocal_726 = -1;
						}
						if (iLocal_726 > 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_726)
							{
								GlobalFunc_1286(&uLocal_66, 3, iLocal_232[iParam1], "PIERWOMAN", 0, 1);
								if (GlobalFunc_10641(&uLocal_66, "PRSAUD", "TRVS_STRUG", 3, 0, 0, 0))
								{
									iLocal_726 = -1;
								}
							}
						}
					}
				}
				else
				{
					iVar13 = 0;
					iVar14 = 0;
					iVar15 = 0;
					if (iLocal_251[0] == joaat("p_trev_rope_01_s") || iLocal_251[1] == joaat("p_trev_rope_01_s"))
					{
						if (!GlobalFunc_2951(iVar13, 4))
						{
							GlobalFunc_2953(&iVar13, 4);
						}
						if (!GlobalFunc_2951(iVar13, 1))
						{
							GlobalFunc_2953(&iVar13, 1);
						}
						if (!GlobalFunc_2951(iVar14, 16))
						{
							GlobalFunc_2953(&iVar14, 16);
						}
						if (!GlobalFunc_2951(iVar14, 128))
						{
							GlobalFunc_2953(&iVar14, 128);
						}
						if (!GlobalFunc_2951(iVar15, 0))
						{
							GlobalFunc_2953(&iVar15, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_232[iParam1], 1);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_232[iParam1], 0);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_232[iParam1], 0);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iParam1], iLocal_719, &cLocal_340, &(Local_422[iParam1 /*16*/]), 1000f, -1000f, iVar13, iVar14, 1000f, iVar15);
					iVar16 = 0;
					while (iVar16 < iLocal_248)
					{
						if (iLocal_251[iVar16] != 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_587[iVar16 /*16*/])))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar16], iLocal_719, &(Local_587[iVar16 /*16*/]), &cLocal_340, 8f, 8f, 0, 1148846080);
							}
						}
						iVar16++;
					}
				}
				switch (iLocal_241[iParam1])
				{
					case -1:
						break;
					
					case 0:
						iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 4000);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_232[iParam1], PLAYER::PLAYER_PED_ID(), iVar17, 0, 2);
						iLocal_244[iParam1] = ((MISC::GET_GAME_TIMER() + iVar17) + MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
						iLocal_241[iParam1] = 1;
						break;
					
					case 1:
						if (MISC::GET_GAME_TIMER() > iLocal_244[iParam1])
						{
							iLocal_244[iParam1] = 0;
							iLocal_241[iParam1] = 0;
						}
						break;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_232[iParam1], PLAYER::PLAYER_PED_ID(), 1))
				{
				}
				bVar18 = false;
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_232[iParam1]) < ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_232[iParam1]))
				{
					bVar18 = true;
				}
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_232[iParam1]))
				{
					bVar18 = true;
				}
				if (bVar18)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_719, 0f);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_719, 1);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_719, 0);
					iVar19 = 4;
					iVar20 = 4276;
					iVar21 = 0;
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iParam1], iLocal_719, &cLocal_340, &(Local_455[iParam1 /*16*/]), 8f, -1000f, iVar19, iVar20, 8f, iVar21);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_232[iParam1], 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_232[iParam1], iVar20);
					PED::SET_PED_CONFIG_FLAG(iLocal_232[iParam1], 208, 1);
					iVar22 = 0;
					while (iVar22 < iLocal_248)
					{
						if (iLocal_251[iVar22] != 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_620[iVar22 /*16*/])))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar22], iLocal_719, &(Local_620[iVar22 /*16*/]), &cLocal_340, 8f, 8f, 0, 1148846080);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_248[iVar22], 0);
							}
						}
						iVar22++;
					}
					iLocal_235[iParam1] = 11;
					break;
				}
				break;
			
			case 11:
				bVar23 = true;
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_719))
				{
					bVar23 = false;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_719) >= 0.99f)
				{
					bVar23 = false;
				}
				if (!bVar23)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_719))
					{
						iLocal_719 = PED::CREATE_SYNCHRONIZED_SCENE(Local_268, 0f, 0f, fLocal_271, 2);
					}
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_719, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_719, 1);
					iVar24 = 0;
					iVar25 = 180;
					iVar26 = 0;
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iParam1], iLocal_719, &cLocal_340, &(Local_488[iParam1 /*16*/]), 1000f, -1000f, iVar24, iVar25, 1000f, iVar26);
					iVar27 = 0;
					while (iVar27 < iLocal_248)
					{
						if (iLocal_251[iVar27] != 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_653[iVar27 /*16*/])))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar27], iLocal_719, &(Local_653[iVar27 /*16*/]), &cLocal_340, 8f, 8f, 0, 1148846080);
							}
						}
						iVar27++;
					}
					iLocal_235[iParam1] = 12;
					break;
				}
				break;
			
			case 12:
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 64, 1);
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 249, 1);
				PED::SET_PED_RESET_FLAG(iLocal_232[iParam1], 335, 1);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_232[iParam1], &cLocal_340, &(Local_488[iParam1 /*16*/]), 2))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_719))
					{
						iLocal_719 = PED::CREATE_SYNCHRONIZED_SCENE(Local_268, 0f, 0f, fLocal_271, 2);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iParam1], iLocal_719, &cLocal_340, &(Local_488[iParam1 /*16*/]), 1000f, -1000f, 0, 0, 1148846080, 0);
					iVar28 = 0;
					while (iVar28 < iLocal_248)
					{
						if (iLocal_251[iVar28] != 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_653[iVar28 /*16*/])))
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar28], iLocal_719, &(Local_653[iVar28 /*16*/]), &cLocal_340, 8f, 8f, 0, 1148846080);
							}
						}
						iVar28++;
					}
				}
				break;
			
			default:
				break;
		}
	}
	else
	{
		iLocal_235[iParam1] = -1;
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar29 = 0;
			while (iVar29 < iLocal_248)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar29]))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar29], -8f, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_248[iVar29], 0);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_248[iVar29], 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_248[iVar29]));
				}
				iVar29++;
			}
		}
	}
}


int func_22(int iParam0)//Position - 0x15A3
{
	int iVar0;
	
	if (iLocal_251[0] == joaat("p_trev_rope_01_s") || iLocal_251[1] == joaat("p_trev_rope_01_s"))
	{
		return 0;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (iParam0 != iLocal_232[iVar0])
		{
			if (iLocal_235[iVar0] < 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_232[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x163F
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (iParam0 != iLocal_232[iVar0])
		{
			if (iLocal_235[iVar0] < 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_232[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (iLocal_65 == 237)
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
		if (fVar1 < (10f * 10f))
		{
			return 1;
		}
	}
	return 0;
}






int func_29(char[4] cParam0, char* sParam1, char* sParam2, float fParam3, float fParam4)//Position - 0x193B
{
	if (MISC::ARE_STRINGS_EQUAL(sParam2, "WalkInterruptible"))
	{
		if (MISC::ARE_STRINGS_EQUAL(cParam0, "SWITCH@TREVOR@SCARES_TRAMP"))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam1, "trev_scares_tramp_exit_tramp"))
			{
				*fParam3 = 0.8f;
				*fParam4 = 1f;
				return 1;
			}
		}
		if (MISC::ARE_STRINGS_EQUAL(cParam0, "SWITCH@TREVOR@CHASE_STRIPPERS"))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "EXIT_STRIPPER_01") || MISC::ARE_STRINGS_EQUAL(sParam1, "EXIT_STRIPPER_02"))
			{
				*fParam3 = 0.4f;
				*fParam4 = 1f;
				return 1;
			}
		}
		if (MISC::ARE_STRINGS_EQUAL(cParam0, "SWITCH@TREVOR@THROW_FOOD"))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "EXIT_Ped"))
			{
				*fParam3 = 0.7f;
				*fParam4 = 1f;
				return 1;
			}
		}
	}
	return 0;
}

int func_30()//Position - 0x19DE
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (!GlobalFunc_2927())
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_232)
			{
				if (!PED::IS_PED_INJURED(iLocal_232[iVar0]))
				{
					fVar1 = -1000f;
					iVar2 = 0;
					iVar3 = 0;
					fVar4 = 1000f;
					iVar5 = 0;
					fVar6 = -1f;
					fVar7 = -1f;
					if (ENTITY::FIND_ANIM_EVENT_PHASE(&cLocal_340, &(Local_389[iVar0 /*16*/]), "WalkInterruptible", &fVar6, &fVar7) || func_29(&cLocal_340, &(Local_389[iVar0 /*16*/]), "WalkInterruptible", &fVar6, &fVar7))
					{
						fVar1 = -8f;
						iVar2 = 2;
						iVar3 = 0;
						fVar4 = 8f;
						iVar5 = 0;
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iVar0], Global_87697, &cLocal_340, &(Local_389[iVar0 /*16*/]), 1000f, fVar1, iVar2, iVar3, fVar4, iVar5);
					iLocal_235[iVar0] = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_248)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar0]))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_554[iVar0 /*16*/])))
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar0], Global_87697, &(Local_554[iVar0 /*16*/]), &cLocal_340, 8f, -1000f, 0, 1148846080);
					}
				}
				iVar0++;
			}
			PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_87697);
			return 1;
		}
	}
	return 0;
}


int func_32()//Position - 0x1B69
{
	int iVar0;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_232)
		{
			if (!PED::IS_PED_INJURED(iLocal_232[iVar0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iVar0], Global_87696, &cLocal_340, &(Local_356[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_248)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar0]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_521[iVar0 /*16*/])))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar0], Global_87696, &(Local_521[iVar0 /*16*/]), &cLocal_340, 8f, -1000f, 0, 1148846080);
				}
			}
			iVar0++;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_720))
		{
			GlobalFunc_1286(&uLocal_66, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_1286(&uLocal_66, 7, iLocal_232[0], "STRIPPER1", 0, 1);
			GlobalFunc_1286(&uLocal_66, 8, iLocal_232[1], "STRIPPER2", 0, 1);
		}
		return 1;
	}
	return 0;
}






void func_38()//Position - 0x1DEF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_238)
		{
			if (iLocal_238[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_238[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_238[iVar0]))
				{
					bVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_238[iVar0]);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_686[iVar0 /*16*/])))
			{
				STREAMING::REQUEST_CLIP_SET(&(Local_686[iVar0 /*16*/]));
				if (!STREAMING::HAS_CLIP_SET_LOADED(&(Local_686[iVar0 /*16*/])))
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_251)
		{
			if (iLocal_251[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_251[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_251[iVar0]))
				{
					bVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_251[iVar0]);
				}
			}
			iVar0++;
		}
		STREAMING::REQUEST_ANIM_DICT(&cLocal_340);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_340))
		{
			bVar2 = false;
			STREAMING::REQUEST_ANIM_DICT(&cLocal_340);
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (iLocal_238[iVar0] != 0)
		{
			iLocal_232[iVar0] = PED::CREATE_PED(26, iLocal_238[iVar0], Local_268 + Local_272[iVar0 /*3*/], 0, 1, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_232[iVar0], (fLocal_271 + fLocal_286[iVar0]));
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_232[iVar0], 0);
			if (iLocal_238[iVar0] == joaat("a_f_y_beach_01"))
			{
				if (iLocal_65 == 288)
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_232[iVar0], 8, 1, 0, 0);
				}
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_232[iVar0], 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_232[iVar0], 17, 1);
			TASK::TASK_PLAY_ANIM(iLocal_232[iVar0], &cLocal_340, &(Local_356[iVar0 /*16*/]), 8f, -8f, -1, 1, 0f, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_248)
	{
		if (iLocal_251[iVar0] != 0)
		{
			iLocal_248[iVar0] = OBJECT::CREATE_OBJECT(iLocal_251[iVar0], Local_268 + Local_272[iVar0 /*3*/] + Local_254[iVar0 /*3*/], 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_248[iVar0], Vector((fLocal_271 + fLocal_286[iVar0]), 0f, 0f) + Local_261[iVar0 /*3*/], 2, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_521[iVar0 /*16*/])))
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_248[iVar0], &(Local_521[iVar0 /*16*/]), &cLocal_340, 8f, 1, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_39()//Position - 0x204E
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	int iVar10;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_268, &fLocal_271, &cVar0);
	GlobalFunc_5930(iLocal_65, &sLocal_292, &cLocal_308, &cLocal_324, &uVar8, &uVar9);
	StringCopy(&(Local_686[0 /*16*/]), "", 64);
	StringCopy(&(Local_686[1 /*16*/]), "", 64);
	iLocal_251[0] = 0;
	iLocal_251[1] = 0;
	switch (iLocal_65)
	{
		case 237:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(&(Local_356[0 /*16*/]), "LOOP_STRIPPER_01", 64);
			StringCopy(&(Local_389[0 /*16*/]), "EXIT_STRIPPER_01", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			StringCopy(&(Local_356[1 /*16*/]), "LOOP_STRIPPER_02", 64);
			StringCopy(&(Local_389[1 /*16*/]), "EXIT_STRIPPER_02", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			StringCopy(&Local_720, "TRVS_IG_35", 16);
			fLocal_724 = 0.15f;
			Local_272[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_272[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_279[0 /*3*/] = { 8.2284f, -35.8652f, -1.0334f };
			Local_279[1 /*3*/] = { 28.4066f, -23.8848f, -0.7887f };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_286[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_289[0] = 50f;
			fLocal_289[1] = 50f;
			iLocal_238[0] = joaat("s_f_y_stripper_01");
			iLocal_238[1] = joaat("s_f_y_stripper_01");
			iLocal_241[0] = -1;
			iLocal_241[1] = -1;
			break;
		
		case 235:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(&(Local_356[0 /*16*/]), "001443_01_TRVS_28_IDLE_STRIPPER", 64);
			StringCopy(&(Local_389[0 /*16*/]), "001443_01_TRVS_28_EXIT_STRIPPER", 64);
			StringCopy(&(Local_422[0 /*16*/]), "001443_01_TRVS_28_IDLE_STRIPPER", 64);
			StringCopy(&(Local_356[1 /*16*/]), "001443_01_TRVS_28_IDLE_MAN", 64);
			StringCopy(&(Local_389[1 /*16*/]), "001443_01_TRVS_28_EXIT_MAN", 64);
			StringCopy(&(Local_422[1 /*16*/]), "001443_01_TRVS_28_IDLE_MAN", 64);
			Local_272[0 /*3*/] = { -1.5421f, 0.8274f, -1.0288f };
			Local_272[1 /*3*/] = { -0.9636f, 1.1757f, -1.0243f };
			Local_279[0 /*3*/] = { 0f, 0f, 0f };
			Local_279[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_286[0] = -130f;
			fLocal_286[1] = -130f;
			fLocal_289[0] = 0f;
			fLocal_289[1] = 0f;
			iVar10 = CLOCK::GET_CLOCK_HOURS();
			if (iVar10 < 8 || iVar10 > 20)
			{
				iLocal_238[0] = joaat("s_f_y_stripper_02");
			}
			else
			{
				iLocal_238[0] = joaat("s_f_y_stripper_01");
			}
			iLocal_238[1] = joaat("a_m_y_hipster_01");
			iLocal_241[0] = -1;
			iLocal_241[1] = 0;
			break;
		
		case 247:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(&(Local_356[0 /*16*/]), "trev_annoys_sunbathers_loop_girl", 64);
			StringCopy(&(Local_389[0 /*16*/]), "trev_annoys_sunbathers_exit_girl", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			StringCopy(&(Local_686[0 /*16*/]), "move_f@scared", 64);
			StringCopy(&(Local_356[1 /*16*/]), "trev_annoys_sunbathers_loop_guy", 64);
			StringCopy(&(Local_389[1 /*16*/]), "trev_annoys_sunbathers_exit_guy", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			StringCopy(&(Local_686[1 /*16*/]), "move_m@hurry_Butch@A", 64);
			Local_272[0 /*3*/] = { -0.3866f, 0.1726f, 1f };
			Local_272[1 /*3*/] = { -0.0726f, -0.4742f, 1f };
			Local_279[0 /*3*/] = { Vector(1.5806f, -1719.606f, -1291.475f) - Local_268 };
			Local_279[1 /*3*/] = { Local_279[0 /*3*/] };
			fLocal_286[0] = 0f;
			fLocal_286[1] = 0f;
			fLocal_289[0] = 20f;
			fLocal_289[1] = fLocal_289[0];
			iLocal_238[0] = joaat("a_f_y_beach_01");
			iLocal_238[1] = joaat("a_m_y_beach_01");
			iLocal_241[0] = -1;
			iLocal_241[1] = -1;
			iLocal_251[0] = joaat("prop_cs_beachtowel_01");
			Local_254[0 /*3*/] = { 0f, 0f, -1f };
			Local_261[0 /*3*/] = { 0f, 0f, 2.16f };
			iLocal_251[1] = joaat("prop_cs_beachtowel_01");
			Local_254[1 /*3*/] = { 0f, 0f, -1f };
			Local_261[1 /*3*/] = { 0f, 0f, -4.32f };
			break;
		
		case 286:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(&(Local_356[0 /*16*/]), "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_FEMALE", 64);
			StringCopy(&(Local_389[0 /*16*/]), "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_FEMALE", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			Local_272[0 /*3*/] = { 4.261f, -2.388f, 0.5f };
			Local_279[0 /*3*/] = { 10.5918f, -34.5146f, 0f };
			fLocal_286[0] = 57.695f;
			fLocal_289[0] = 30f;
			iLocal_238[0] = joaat("a_f_y_hipster_03");
			iLocal_241[0] = -1;
			StringCopy(&(Local_356[1 /*16*/]), "", 64);
			StringCopy(&(Local_389[1 /*16*/]), "", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			Local_279[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_289[1] = 0f;
			iLocal_238[1] = 0;
			iLocal_241[1] = -1;
			break;
		
		case 263:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(&(Local_356[0 /*16*/]), "trev_scares_tramp_idle_tramp", 64);
			StringCopy(&(Local_389[0 /*16*/]), "trev_scares_tramp_exit_tramp", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			Local_272[0 /*3*/] = { 2.0921f, -1.5872f, 0f };
			Local_279[0 /*3*/] = { Vector(10.9545f, -1419.537f, -605.8271f) - Local_268 };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_289[0] = 40f;
			iLocal_238[0] = joaat("a_m_o_tramp_01");
			iLocal_241[0] = -1;
			StringCopy(&(Local_356[1 /*16*/]), "", 64);
			StringCopy(&(Local_389[1 /*16*/]), "", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			Local_279[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_289[1] = 0f;
			iLocal_238[1] = 0;
			iLocal_241[1] = -1;
			break;
		
		case 244:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(&(Local_356[0 /*16*/]), "LOOP_Ped", 64);
			StringCopy(&(Local_389[0 /*16*/]), "EXIT_Ped", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			Local_272[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			Local_279[0 /*3*/] = { Vector(28.2925f, -1451.728f, 507.6885f) - Local_268 };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_289[0] = 40f;
			iLocal_238[0] = joaat("a_m_y_stlat_01");
			iLocal_241[0] = -1;
			StringCopy(&(Local_356[1 /*16*/]), "", 64);
			StringCopy(&(Local_389[1 /*16*/]), "", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			Local_279[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_289[1] = 0f;
			iLocal_238[1] = 0;
			iLocal_241[1] = -1;
			break;
		
		case 288:
			StringCopy(&cLocal_340, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(&(Local_356[0 /*16*/]), "LOOP_Ped", 64);
			StringCopy(&(Local_389[0 /*16*/]), "EXIT_Ped", 64);
			StringCopy(&(Local_422[0 /*16*/]), "EXIT_LOOP_Ped", 64);
			StringCopy(&(Local_455[0 /*16*/]), "DEATH_Ped", 64);
			StringCopy(&(Local_488[0 /*16*/]), "DEATH_LOOP_Ped", 64);
			Local_272[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_279[0 /*3*/] = { 0f, 0f, 0f };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_289[0] = 0f;
			iLocal_238[0] = joaat("a_m_m_business_01");
			iLocal_241[0] = -1;
			iLocal_251[0] = joaat("p_trev_rope_01_s");
			Local_254[0 /*3*/] = { 0f, 0f, 0f };
			StringCopy(&(Local_521[0 /*16*/]), "LOOP_Rope", 64);
			StringCopy(&(Local_554[0 /*16*/]), "EXIT_Rope", 64);
			StringCopy(&(Local_587[0 /*16*/]), "EXIT_LOOP_Rope", 64);
			StringCopy(&(Local_620[0 /*16*/]), "DEATH_Rope", 64);
			StringCopy(&(Local_653[0 /*16*/]), "DEATH_LOOP_Rope", 64);
			iLocal_251[1] = joaat("prop_rolled_sock_01");
			Local_254[1 /*3*/] = { 0f, 0f, 0f };
			StringCopy(&(Local_521[1 /*16*/]), "LOOP_Sock", 64);
			StringCopy(&(Local_554[1 /*16*/]), "EXIT_Sock", 64);
			StringCopy(&(Local_587[1 /*16*/]), "EXIT_LOOP_Sock", 64);
			StringCopy(&(Local_620[1 /*16*/]), "DEATH_Sock", 64);
			StringCopy(&(Local_653[1 /*16*/]), "DEATH_LOOP_Sock", 64);
			StringCopy(&(Local_356[1 /*16*/]), "", 64);
			StringCopy(&(Local_389[1 /*16*/]), "", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			Local_279[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_289[1] = 0f;
			iLocal_238[1] = 0;
			iLocal_241[1] = -1;
			break;
		
		default:
			StringCopy(&cLocal_340, "", 64);
			StringCopy(&(Local_356[0 /*16*/]), "", 64);
			StringCopy(&(Local_389[0 /*16*/]), "", 64);
			StringCopy(&(Local_422[0 /*16*/]), "", 64);
			StringCopy(&(Local_356[1 /*16*/]), "", 64);
			StringCopy(&(Local_389[1 /*16*/]), "", 64);
			StringCopy(&(Local_422[1 /*16*/]), "", 64);
			Local_272[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_272[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			fLocal_286[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_286[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_238[0] = joaat("a_m_y_musclbeac_01");
			iLocal_238[1] = joaat("a_m_y_musclbeac_01");
			iLocal_241[0] = -1;
			iLocal_241[1] = -1;
			break;
	}
}










void func_49()//Position - 0x907B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_238)
	{
		if (iLocal_238[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_238[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_251)
	{
		if (iLocal_251[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_251[iVar0]);
		}
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_340);
	if (PED::DOES_GROUP_EXIST(uLocal_247))
	{
		PED::REMOVE_GROUP(uLocal_247);
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

