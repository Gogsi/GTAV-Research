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
	float fLocal_261[2] = { 0f, 0f };
	struct<16> Local_264[2];
	struct<16> Local_297[2];
	struct<3> Local_330 = { 0, 0, 0 } ;
	float fLocal_333 = 0f;
	struct<3> Local_334[2];
	float fLocal_341[2] = { 0f, 0f };
	char* sLocal_344 = NULL;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	char[] cLocal_360[8] = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	char[] cLocal_376[8] = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	struct<16> Local_392[2];
	struct<16> Local_425[2];
	struct<2> Local_458 = { 0, 0 } ;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	float fLocal_462 = 0f;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	struct<2> Local_465 = { 0, 0 } ;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469[2] = { 0, 0 };
	var uLocal_472 = 0;
	float fLocal_473 = 0f;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	float fLocal_476 = 0f;
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
	iLocal_65 = 318;
	iLocal_231 = 1;
	StringCopy(&Local_465, "", 16);
	fLocal_476 = 0.97f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_177();
	}
	SYSTEM::WAIT(0);
	func_166();
	func_37();
	GlobalFunc_576();
	while (iLocal_231 && GlobalFunc_9548(1, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_30())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (func_29())
				{
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				if (func_9())
				{
					iLocal_64 = 3;
				}
				break;
			
			case 3:
				if (func_2())
				{
					iLocal_64 = 4;
				}
				break;
			
			case 4:
				func_1();
				break;
		}
	}
	func_177();
}

void func_1()//Position - 0x12F
{
	iLocal_231 = 0;
}

int func_2()//Position - 0x13A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		func_3(iLocal_232[iVar0], iVar0);
		iVar0++;
	}
	return 0;
}

void func_3(var uParam0, int iParam1)//Position - 0x162
{
	struct<3> Var0;
	float fVar3;
	char* sVar4;
	char[] cVar20[8];
	int iVar36;
	int iVar37;
	struct<3> Var38;
	float fVar41;
	char* sVar42;
	char[] cVar58[8];
	int iVar74;
	int iVar75;
	struct<3> Var76;
	float fVar79;
	
	Var0 = { -812.0607f, 179.5117f, 71.1531f };
	fVar3 = 222.8314f;
	if (!PED::IS_PED_INJURED(uParam0))
	{
		switch (iLocal_238[iParam1])
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, &sLocal_344, &(Local_425[iParam1 /*16*/]), 2))
					{
						iLocal_238[iParam1] = 5;
					}
				}
				break;
			
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, &sLocal_344, &(Local_425[iParam1 /*16*/]), 2))
				{
					if (func_6(iLocal_241[iParam1], iLocal_244[iParam1], &sVar4, &cVar20, &iVar36, &iVar37))
					{
						STREAMING::REQUEST_ANIM_DICT(&sVar4);
						if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar4))
						{
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iParam1]))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_248[iParam1], &sLocal_344, &(Local_297[iParam1 /*16*/]), 2))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697) > 0.817f)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iParam1], -8f, 1);
									Var38 = { -824.5328f, 175.0702f, 69.8919f };
									fVar41 = 156.6901f;
									Var38.x = -824.333f;
									fVar41 = 140.49f;
									ENTITY::SET_ENTITY_COORDS(iLocal_248[iParam1], Var38, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iLocal_248[iParam1], fVar41);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_248[iParam1]);
								}
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697) > fLocal_476)
						{
							iLocal_238[iParam1] = 10;
						}
					}
					else
					{
						iLocal_238[iParam1] = 10;
					}
				}
				else
				{
					iLocal_238[iParam1] = 10;
				}
				break;
			
			case 20:
				break;
			
			case 10:
				if (iLocal_244[iParam1] == 137)
				{
					iLocal_238[iParam1] = 1;
					break;
				}
				if (func_6(iLocal_241[iParam1], iLocal_244[iParam1], &sVar42, &cVar58, &iVar74, &iVar75) && GlobalFunc_5937(iLocal_241[iParam1], iLocal_244[iParam1], &Var76, &fVar79))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_475))
					{
						uLocal_475 = PED::CREATE_SYNCHRONIZED_SCENE(Var0 + Var76, 0f, 0f, (fVar3 + fVar79), 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_475, 1);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_475, 0);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0, uLocal_475, &sVar42, &cVar58, 1000f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_475, 1);
					iLocal_238[iParam1] = 1;
				}
				break;
			
			case 1:
				if (iLocal_244[iParam1] != Global_85373[iLocal_241[iParam1]])
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Global_89748))
					{
						Global_85373[iLocal_241[iParam1]] = 140;
						Global_85389 = iLocal_244[iParam1];
						Global_89748 = uParam0;
						return;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
					{
					}
				}
				else
				{
					iLocal_238[iParam1] = 2;
				}
				break;
			
			case 2:
				break;
			
			default:
				break;
		}
	}
	else
	{
		iLocal_238[iParam1] = -1;
	}
}



int func_6(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x238A
{
	*iParam4 = 9;
	*iParam5 = 0;
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*iParam4 |= 262146;
			*iParam4 = (*iParam4 - 1);
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam3, "jimmy_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam3, "tracy_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 2:
					StringCopy(sParam3, "_amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 2:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			*iParam4 |= 262146;
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 5:
		case 21:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 7:
		case 22:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 33816576;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262146;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 34340864;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 42:
			return func_6(iParam0, 43, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 44:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_6(iParam0, 26, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 3:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262146;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 49:
			return func_6(iParam0, 140, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*iParam4 |= 1;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 786434;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*iParam4 |= 266240;
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 62:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 1;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					if (iParam1 == 82)
					{
						*iParam5 = 3;
					}
					if (iParam1 == 83)
					{
						*iParam5 = 2;
					}
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*iParam5 = 4;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*iParam5 = 4;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*iParam5 = 3;
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*iParam4 |= 262144;
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262146;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					GlobalFunc_2976(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0;
					break;
				
				case 7:
					GlobalFunc_2976(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 101:
		case 119:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam4 = 263176;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*iParam4 |= 262152;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262152;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*iParam5 = 3;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*iParam5 = 3;
					*iParam4 |= 33816576;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*iParam4 |= 266240;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 = 267272;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*iParam4 |= 786434;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 8:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 266240;
					return 1;
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 14:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 138:
		case 137:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
		
		case 140:
		case 141:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
		
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*iParam4 = -1;
	*iParam5 = 5;
	return 0;
}



int func_9()//Position - 0x3F65
{
	float fVar0;
	int iVar1;
	
	if (!GlobalFunc_2927())
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_458))
			{
			}
			else if (!iLocal_463)
			{
				if (func_11(&uLocal_66, "PRSAUD", &Local_458, 3, 0, 0, 0, 0))
				{
					iLocal_463 = 1;
				}
			}
			else
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
				if (!iLocal_464)
				{
					if (fVar0 <= fLocal_462)
					{
					}
					else
					{
						GlobalFunc_2207();
						iLocal_464 = 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		func_3(iLocal_232[iVar1], iVar1);
		iVar1++;
	}
	return 0;
}


bool func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4010
{
	GlobalFunc_154(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16685 = 1;
	Global_16689 = 0;
	Global_16687 = iParam7;
	Global_2621441 = 0;
	return GlobalFunc_9820(sParam2, iParam3, 0);
}


















int func_29()//Position - 0x487F
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458) && !iLocal_463)
	{
		if (func_11(&uLocal_66, "PRSAUD", &Local_458, 3, 0, 0, 0, 0))
		{
			iLocal_463 = 1;
		}
	}
	if (!GlobalFunc_2927())
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_232)
			{
				if (!PED::IS_PED_INJURED(iLocal_232[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_232[iVar0], iLocal_248[iVar0]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_232[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_232[iVar0], 1), 1, 0, 0, 1);
						}
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iVar0], Global_87697, &sLocal_344, &(Local_425[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
					iLocal_238[iVar0] = 0;
				}
				else
				{
					iLocal_238[iVar0] = -1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar0], Global_87697, &(Local_297[iVar0 /*16*/]), &sLocal_344, 8f, 1090519040, 0, 1148846080);
				}
				iVar0++;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458) && iLocal_463)
			{
				if (!iLocal_464 && fLocal_462 == 0f)
				{
					GlobalFunc_2207();
					iLocal_464 = 1;
				}
			}
			return 1;
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		func_3(iLocal_232[iVar1], iVar1);
		iVar1++;
	}
	return 0;
}

int func_30()//Position - 0x49FB
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87696))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_232)
		{
			if (!PED::IS_PED_INJURED(iLocal_232[iVar0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_232[iVar0], Global_87696, &sLocal_344, &(Local_392[iVar0 /*16*/]), 8f, -1000f, 0, 0, 1148846080, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_264[iVar0 /*16*/])))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_248[iVar0], Global_87696, &(Local_264[iVar0 /*16*/]), &sLocal_344, 8f, 1090519040, 0, 1148846080);
				}
				else
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0], iLocal_469[iVar0], &Local_465, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0], (fLocal_473 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_248[iVar0])));
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_248[iVar0], uLocal_474);
				}
			}
			iVar0++;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458))
		{
			GlobalFunc_878(&uLocal_66, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (iLocal_65 == 156)
			{
				GlobalFunc_878(&uLocal_66, 3, Global_89748, "JIMMY", 0, 1);
				GlobalFunc_878(&uLocal_66, 5, iLocal_232[0], "AMANDA", 0, 1);
				GlobalFunc_878(&uLocal_66, 4, iLocal_232[1], "TRACEY", 0, 1);
			}
			else if (iLocal_65 == 173)
			{
				GlobalFunc_878(&uLocal_66, 4, iLocal_232[0], "JIMMY", 0, 1);
			}
		}
		return 1;
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_87697))
	{
		PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_87697);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_458))
		{
			GlobalFunc_878(&uLocal_66, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (iLocal_65 == 156)
			{
				GlobalFunc_878(&uLocal_66, 3, Global_89748, "JIMMY", 0, 1);
				GlobalFunc_878(&uLocal_66, 5, iLocal_232[0], "AMANDA", 0, 1);
				GlobalFunc_878(&uLocal_66, 4, iLocal_232[1], "TRACEY", 0, 1);
			}
			else if (iLocal_65 == 173)
			{
				GlobalFunc_878(&uLocal_66, 4, iLocal_232[0], "JIMMY", 0, 1);
			}
		}
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		func_3(iLocal_232[iVar1], iVar1);
		iVar1++;
	}
	return 0;
}







void func_37()//Position - 0x4E3B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<8> Var3;
	char cVar19[64];
	int iVar35;
	int iVar36;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_232)
		{
			if (iLocal_235[iVar0] != 145)
			{
				GlobalFunc_7049(iLocal_235[iVar0]);
				if (!GlobalFunc_7048(iLocal_235[iVar0]))
				{
					bVar2 = false;
					GlobalFunc_7049(iLocal_235[iVar0]);
				}
			}
			if (iLocal_251[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_251[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_251[iVar0]))
				{
					bVar2 = false;
					STREAMING::REQUEST_MODEL(iLocal_251[iVar0]);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_465) && iLocal_469[iVar0] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_469[iVar0], &Local_465);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_469[iVar0], &Local_465))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_469[iVar0], &Local_465);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&sLocal_344))
		{
			STREAMING::REQUEST_ANIM_DICT(&sLocal_344);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&sLocal_344))
			{
				bVar2 = false;
				STREAMING::REQUEST_ANIM_DICT(&sLocal_344);
			}
		}
		StringCopy(&Var3, "", 64);
		StringCopy(&cVar19, "", 64);
		iVar35 = 0;
		iVar36 = 0;
		if (func_6(iLocal_241[0], iLocal_244[0], &Var3, &cVar19, &iVar35, &iVar36))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
			{
				STREAMING::REQUEST_ANIM_DICT(&Var3);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var3))
				{
					bVar2 = false;
					STREAMING::REQUEST_ANIM_DICT(&Var3);
				}
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_248)
	{
		if (iLocal_251[iVar0] != 0)
		{
			iLocal_248[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_251[iVar0], Local_330 + Local_254[iVar0 /*3*/], (fLocal_333 + fLocal_261[iVar0]), 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_248[iVar0]);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_264[iVar0 /*16*/])))
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_248[iVar0], &(Local_264[iVar0 /*16*/]), &sLocal_344, 8f, 1, 0, 0, 0, 0);
			}
			else
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0], iLocal_469[iVar0], &Local_465, 1);
			}
		}
		iVar0++;
	}
	PED::ADD_RELATIONSHIP_GROUP("KIDSS", &uLocal_247);
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (iLocal_235[iVar0] != 145)
		{
			if (GlobalFunc_6808(&(iLocal_232[iVar0]), iLocal_235[iVar0], Local_330 + Local_334[iVar0 /*3*/], (fLocal_333 + fLocal_341[iVar0]), 1))
			{
				func_38(&(iLocal_232[iVar0]), iLocal_235[iVar0], iLocal_65);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_232[iVar0], uLocal_247);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_392[iVar0 /*16*/])))
				{
					TASK::TASK_PLAY_ANIM(iLocal_232[iVar0], &sLocal_344, &(Local_392[iVar0 /*16*/]), 8f, -8f, -1, 9, 0, 0, 0, 0);
					iLocal_238[iVar0] = 0;
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_232[iVar0], iLocal_248[iVar0], -1);
					iLocal_238[iVar0] = 20;
				}
			}
		}
		iVar0++;
	}
}

int func_38(var uParam0, int iParam1, int iParam2)//Position - 0x5116
{
	switch (iParam2)
	{
		case 77:
		case 78:
			func_155(*uParam0, 85);
			return 1;
			break;
		
		case 163:
			func_155(*uParam0, 86);
			return 1;
			break;
		
		case 122:
			func_39(*uParam0, 2, 53);
			return 1;
			break;
		
		case 94:
		case 98:
		case 170:
			func_155(*uParam0, 82);
			return 1;
			break;
		
		case 151:
			func_155(*uParam0, 80);
			return 1;
			break;
		
		case 152:
			func_155(*uParam0, 87);
			return 1;
			break;
		
		case 155:
		case 161:
			func_155(*uParam0, 80);
			return 1;
			break;
		
		case 99:
			func_155(*uParam0, 34);
			return 1;
			break;
		
		case 172:
			func_155(*uParam0, 35);
			return 1;
			break;
		
		case 100:
			func_155(*uParam0, 36);
			return 1;
			break;
		
		case 169:
			func_39(*uParam0, 0, 21);
			return 1;
			break;
		
		case 167:
			func_155(*uParam0, 135);
			return 1;
			break;
		
		case 101:
		case 102:
		case 171:
			func_39(*uParam0, 0, 22);
			return 1;
			break;
		
		case 173:
			func_39(*uParam0, 0, 23);
			return 1;
			break;
		
		case 86:
			func_39(*uParam0, 0, 19);
			return 1;
			break;
		
		case 168:
			if (iParam1 == 14)
			{
				func_39(*uParam0, 0, 25);
				return 1;
			}
			if (iParam1 == 15)
			{
				func_39(*uParam0, 1, 25);
				return 1;
			}
			break;
		
		case 156:
			if (iParam1 == 14)
			{
				func_39(*uParam0, 0, 2);
				return 1;
			}
			if (iParam1 == 15)
			{
				func_39(*uParam0, 1, 2);
				return 1;
			}
			if (iParam1 == 17)
			{
				func_39(*uParam0, 2, 2);
				return 1;
			}
			break;
		
		case 218:
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
			return 1;
			break;
		
		case 219:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
			return 1;
			break;
		
		case 220:
		case 225:
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
			return 1;
			break;
		
		case 292:
		case 293:
		case 294:
		case 295:
			func_39(*uParam0, 13, 127);
			return 1;
			break;
		
		case 296:
		case 297:
			func_155(*uParam0, 159);
			return 1;
			break;
		
		case 298:
			func_39(*uParam0, 13, 129);
			return 1;
			break;
		
		case 299:
		case 302:
			func_155(*uParam0, 161);
			return 1;
			break;
		
		case 301:
			func_155(*uParam0, 160);
			return 1;
			break;
		
		case 300:
		case 303:
			func_39(*uParam0, 13, 128);
			return 1;
			break;
	}
	if (((iParam1 == 17 || iParam1 == 15) || iParam1 == 14) || iParam1 == 32)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
		return 1;
	}
	if (iParam1 == 19)
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 3) == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
		}
		return 1;
	}
	if (iParam1 == 20)
	{
		func_39(*uParam0, 10, 141);
		return 1;
	}
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
	return 0;
}

int func_39(int iParam0, int iParam1, int iParam2)//Position - 0x5522
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 138:
		case 140:
			return 0;
			break;
		
		case 0:
		case 2:
		case 3:
		case 1:
			switch (iParam1)
			{
				case 0:
					func_155(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 40);
					return 1;
					break;
				
				case 2:
					func_155(iParam0, 85);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					func_155(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 41);
					return 1;
					break;
				
				case 2:
					func_155(iParam0, 81);
					return 1;
					break;
			}
			break;
		
		case 5:
		case 8:
		case 10:
			func_155(iParam0, 131);
			return 1;
			break;
		
		case 21:
			func_155(iParam0, 133);
			return 1;
			break;
		
		case 18:
		case 6:
		case 16:
		case 9:
		case 17:
		case 11:
		case 24:
			func_155(iParam0, 131);
			return 1;
			break;
		
		case 7:
		case 22:
		case 23:
		case 20:
			func_155(iParam0, 132);
			return 1;
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			switch (iParam1)
			{
				case 0:
					func_155(iParam0, 131);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 28:
			func_155(iParam0, 37);
			return 1;
			break;
		
		case 43:
		case 42:
		case 34:
		case 38:
			func_155(iParam0, 42);
			return 1;
			break;
		
		case 29:
		case 30:
		case 35:
		case 44:
		case 45:
			func_155(iParam0, 40);
			return 1;
			break;
		
		case 39:
		case 40:
			func_155(iParam0, 38);
			return 1;
			break;
		
		case 31:
			func_155(iParam0, 43);
			return 1;
			break;
		
		case 26:
		case 46:
			func_155(iParam0, 39);
			return 1;
			break;
		
		case 41:
		case 37:
		case 27:
		case 36:
			func_155(iParam0, 34);
			return 1;
			break;
		
		case 33:
		case 32:
			func_155(iParam0, 41);
			return 1;
			break;
		
		case 54:
		case 70:
			func_155(iParam0, 87);
			return 1;
			break;
		
		case 48:
		case 68:
			func_155(iParam0, 84);
			return 1;
			break;
		
		case 65:
		case 64:
			func_155(iParam0, 85);
			return 1;
			break;
		
		case 66:
			func_155(iParam0, 86);
			return 1;
			break;
		
		case 49:
		case 59:
		case 72:
		case 60:
		case 73:
			func_155(iParam0, 80);
			return 1;
			break;
		
		case 47:
		case 58:
			switch (iParam1)
			{
				case 2:
					func_155(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 40);
					return 1;
					break;
			}
			break;
		
		case 51:
		case 52:
		case 67:
			func_155(iParam0, 82);
			return 1;
			break;
		
		case 53:
			func_155(iParam0, 83);
			return 1;
			break;
		
		case 61:
		case 62:
		case 55:
			func_155(iParam0, 85);
			return 1;
			break;
		
		case 63:
		case 71:
			func_155(iParam0, 86);
			return 1;
			break;
		
		case 50:
		case 69:
		case 57:
		case 56:
			switch (iParam1)
			{
				case 0:
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 37);
					return 1;
					break;
				
				case 2:
					func_155(iParam0, 79);
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 2:
					func_155(iParam0, 81);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 35);
					return 1;
					break;
				
				case 0:
					func_155(iParam0, 131);
					return 1;
					break;
			}
			break;
		
		case 19:
			func_155(iParam0, 134);
			return 1;
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					func_155(iParam0, 134);
					return 1;
					break;
				
				case 1:
					func_155(iParam0, 42);
					return 1;
					break;
			}
			break;
		
		case 95:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, 0);
			return 1;
			break;
		
		case 97:
		case 94:
		case 96:
		case 98:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::CLEAR_PED_PROP(iParam0, 1);
			return 1;
			break;
		
		case 113:
			func_129(iParam0, 12, 12, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			return 1;
			break;
		
		case 115:
			func_129(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			return 1;
			break;
		
		case 126:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 128:
		case 129:
			func_155(iParam0, 159);
			return 1;
			break;
		
		case 127:
		case 135:
			func_155(iParam0, 161);
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 1, 0);
			return 1;
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, 0);
			if (iParam2 != 101)
			{
				PED::CLEAR_PED_PROP(iParam0, 2);
			}
			else
			{
				PED::SET_PED_PROP_INDEX(iParam0, 2, 0, 0, 0);
			}
			return 1;
			break;
		
		case 8:
		case 9:
			if (iParam2 == 108)
			{
				iVar0 = 12;
				iVar1 = 32;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2708[0 /*166*/][iVar0 /*11*/][(iVar1 / 32)], (iVar1 % 32)))
				{
					func_129(iParam0, 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (func_40(iParam0, 12, 12))
			{
				func_129(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			return 1;
			break;
		
		case 6:
			return 1;
			break;
	}
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
	return 0;
}

int func_40(var uParam0, int iParam1, int iParam2)//Position - 0x5C24
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_40(uParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_40(uParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_40(uParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_42(uParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_40(uParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(uParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(uParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(uParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(uParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}


int func_42(var uParam0, int iParam1)//Position - 0x5F2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(uParam0))
	{
		return -99;
	}
	iVar0 = GlobalFunc_33(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(uParam0, iVar0);
	return GlobalFunc_5280(uParam0, iVar1, iVar2, iParam1);
}























































































int func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1F01A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_42(uParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_42(uParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7975(uParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7975(uParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7975(uParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(uParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_2364(uParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_138(uParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_129(uParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(uParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(uParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_138(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_129(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_136(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_135(iParam0, iVar10, &iVar4, 1))
							{
								func_129(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_129(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_129(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_129(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_129(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_129(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_129(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_138(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_129(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_129(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_129(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_135(iParam0, iVar10, &iVar4, 0))
		{
			func_129(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_130(iParam0, iVar10, &iVar4))
		{
			func_129(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_130(var uParam0, int iParam1, int iParam2)//Position - 0x1F807
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_40(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}





int func_135(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1FA60
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_40(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_136(var uParam0, int iParam1, int iParam2)//Position - 0x1FAF6
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_40(uParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_40(uParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7975(uParam0, iParam2);
			}
		}
		else
		{
			return func_42(uParam0, iParam1);
		}
	}
	return -99;
}


int func_138(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1FE9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_42(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_42(uParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_142(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_142(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_142(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_142(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_142(uParam0, 3, 176, 191) && !func_142(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_42(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_42(uParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_42(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_42(uParam0, 8);
								iVar8 = func_42(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_42(uParam0, 11);
								iVar0 = GlobalFunc_11158(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}




int func_142(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21034
{
	int iVar0;
	
	iVar0 = func_42(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}













void func_155(int iParam0, int iParam1)//Position - 0x21BB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	
	if (func_159(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		func_157(uParam0, iVar0);
		func_157(uParam0, iVar1);
		func_157(uParam0, iVar2);
		func_157(uParam0, iVar3);
		func_157(uParam0, iVar4);
		func_157(uParam0, iVar5);
		func_157(uParam0, iVar6);
		func_157(uParam0, iVar7);
		func_157(uParam0, iVar8);
		func_157(uParam0, iVar9);
		func_157(uParam0, iVar10);
		func_157(uParam0, iVar11);
		if (GlobalFunc_747(uVar12, 1))
		{
			PED::CLEAR_ALL_PED_PROPS(uParam0);
		}
		if (GlobalFunc_747(uVar12, 2))
		{
			PED::CLEAR_ALL_PED_PROPS(uParam0);
			PED::SET_PED_PROP_INDEX(uParam0, 1, 0, 0, 0);
		}
		if (GlobalFunc_747(uVar12, 4))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, 0);
		}
	}
}


void func_157(int iParam0, int iParam1)//Position - 0x21C92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	if (GlobalFunc_2952(iParam1, &uVar4, &iVar0, &iVar1, &iVar2))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0, iVar0, iVar1, iVar2, iVar3);
	}
}


int func_159(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x22D15
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 4);
			return 1;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 2);
			return 1;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 4);
			return 1;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 2);
			return 1;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}







void func_166()//Position - 0x2377F
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_330, &fLocal_333, &cVar0);
	GlobalFunc_5930(iLocal_65, &sLocal_344, &cLocal_360, &cLocal_376, &uVar8, &uVar9);
	GlobalFunc_2939(iLocal_65, &Local_465, &uVar10, &uLocal_472, &fLocal_473, &uVar11, &uLocal_474, &uVar12);
	switch (iLocal_65)
	{
		case 86:
			Local_334[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_235[0] = 14;
			iLocal_241[0] = 0;
			iLocal_244[0] = 19;
			Global_85373[iLocal_241[0]] = 140;
			StringCopy(&(Local_392[0 /*16*/]), "BASE_Jimmy", 64);
			StringCopy(&(Local_425[0 /*16*/]), "EXIT_Jimmy", 64);
			Local_334[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_341[1] = 0f;
			iLocal_235[1] = 145;
			iLocal_469[1] = -1;
			break;
			break;
		
		case 168:
			Local_334[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			Local_334[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_235[0] = 14;
			iLocal_235[1] = 15;
			iLocal_241[0] = 0;
			iLocal_241[1] = 1;
			iLocal_244[0] = 25;
			iLocal_244[1] = 25;
			Global_85373[iLocal_241[0]] = 140;
			Global_85373[iLocal_241[1]] = 140;
			StringCopy(&(Local_392[0 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_IDLE_JMY", 64);
			StringCopy(&(Local_425[0 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_EXIT_JMY", 64);
			StringCopy(&(Local_392[1 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_IDLE_TRC", 64);
			StringCopy(&(Local_425[1 /*16*/]), "001520_02_MICS3_14_TV_W_KIDS_EXIT_TRC", 64);
			break;
		
		case 156:
			Local_334[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			Local_334[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_235[0] = 17;
			iLocal_235[1] = 15;
			iLocal_241[0] = 2;
			iLocal_241[1] = 1;
			iLocal_244[0] = 137;
			iLocal_244[1] = 137;
			Global_85373[iLocal_241[0]] = 140;
			Global_85373[iLocal_241[1]] = 140;
			StringCopy(&(Local_392[0 /*16*/]), "AROUND_THE_TABLE_SELFISH_BASE_Amanda", 64);
			StringCopy(&(Local_425[0 /*16*/]), "AROUND_THE_TABLE_SELFISH_Amanda", 64);
			StringCopy(&(Local_392[1 /*16*/]), "AROUND_THE_TABLE_SELFISH_BASE_Tracy", 64);
			StringCopy(&(Local_425[1 /*16*/]), "AROUND_THE_TABLE_SELFISH_Tracy", 64);
			Local_458 = { GlobalFunc_2924("MICS3_IG_12", 3) };
			fLocal_462 = 0f;
			break;
		
		case 173:
			Local_334[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_341[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_235[0] = 14;
			iLocal_241[0] = 0;
			iLocal_244[0] = 137;
			Global_85373[iLocal_241[0]] = 140;
			iLocal_469[0] = 2;
			StringCopy(&(Local_392[0 /*16*/]), "", 64);
			StringCopy(&(Local_425[0 /*16*/]), "EXIT_Jimmy", 64);
			iLocal_251[0] = joaat("scorcher");
			Local_254[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
			fLocal_261[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			StringCopy(&(Local_264[0 /*16*/]), "", 64);
			StringCopy(&(Local_297[0 /*16*/]), "EXIT_TriBike", 64);
			Local_334[1 /*3*/] = { 0f, 0f, 0f };
			fLocal_341[1] = 0f;
			iLocal_235[1] = 145;
			iLocal_469[1] = -1;
			StringCopy(&Local_458, "MICS3_IG_10", 16);
			fLocal_462 = 0.2f;
			break;
		
		default:
			Local_334[0 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			Local_334[1 /*3*/] = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			fLocal_341[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			fLocal_341[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			iLocal_235[0] = 145;
			iLocal_235[1] = 145;
			break;
	}
}











void func_177()//Position - 0x28A01
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_235)
	{
		if (iLocal_235[iVar0] != 145)
		{
			GlobalFunc_7052(iLocal_235[iVar0]);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_465) && iLocal_469[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_469[iVar0], &Local_465);
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_247);
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}


