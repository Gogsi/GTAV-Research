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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<62> Local_36 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 16;
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
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	char[] cLocal_273[8] = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280[2] = { 0, 0 };
	var uLocal_283[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_290[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_297[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_271 = -1;
	iLocal_272 = -1;
	StringCopy(&cLocal_273, "PMGAUD", 8);
	iLocal_275 = -1;
	iLocal_276 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_4670(2);
		func_55();
	}
	func_48();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GlobalFunc_111())
		{
			iLocal_272 = -1;
		}
		else if (iLocal_272 == -1)
		{
			iLocal_272 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()//Position - 0xBC
{
	char cVar0[16];
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	switch (iLocal_35)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("PGANG", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[iVar4]))
					{
						uLocal_283[iVar4] = Global_96066.f_225[iVar4];
						Global_96066.f_225[iVar4] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_283[iVar4], 1, 1);
						if (iLocal_306 == 0)
						{
							iLocal_306 = ENTITY::GET_ENTITY_MODEL(uLocal_283[iVar4]);
						}
						if (!PED::IS_PED_INJURED(uLocal_283[iVar4]))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_283[iVar4], iLocal_304);
							PED::SET_PED_COMBAT_MOVEMENT(uLocal_283[iVar4], 1);
							PED::SET_PED_COMBAT_RANGE(uLocal_283[iVar4], 0);
							PED::SET_PED_ACCURACY(uLocal_283[iVar4], 5);
							PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_283[iVar4], 1);
							GlobalFunc_4495(uLocal_283[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_105 == 0)
							{
								PED::SET_PED_COMBAT_MOVEMENT(uLocal_283[iVar4], 2);
							}
							uLocal_297[iVar4] = GlobalFunc_6829(uLocal_283[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_222[iVar4]))
					{
						uLocal_280[iVar4] = Global_96066.f_222[iVar4];
						Global_96066.f_222[iVar4] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_280[iVar4], 1, 1);
						if (iLocal_305 == 0)
						{
							iLocal_305 = ENTITY::GET_ENTITY_MODEL(uLocal_280[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&cVar0, "START_", 16);
				StringConCat(&cVar0, &(Local_36.f_61), 16);
				func_42(&cVar0, 7500, 1);
				iLocal_35++;
			}
			break;
		
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_290[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar4]) && !PED::IS_PED_INJURED(uLocal_283[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			if (bVar6)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_277)
					{
						func_42("LOSE_WANTED", 7500, 1);
						iLocal_277 = 1;
					}
				}
				else
				{
					func_41();
				}
			}
			break;
	}
	switch (iLocal_105)
	{
		case 1:
			func_39();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar4]))
		{
			if (PED::IS_PED_INJURED(uLocal_283[iVar4]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_283[iVar4]));
			}
			else if (GlobalFunc_879(uLocal_283[iVar4], GlobalFunc_4546(GlobalFunc_4669()), 1) > 100f && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), uLocal_283[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_279 && GlobalFunc_879(uLocal_283[iVar4], GlobalFunc_4546(GlobalFunc_4669()), 1) > 50f)
			{
				if (GlobalFunc_5171())
				{
					if (!iLocal_278)
					{
						StringCopy(&cVar0, "ESC_", 16);
						StringConCat(&cVar0, &(Local_36.f_61), 16);
						func_42(&cVar0, 7500, 1);
						iLocal_278 = 1;
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_297[iVar4]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar4]) || PED::IS_PED_INJURED(uLocal_283[iVar4]))
			{
				HUD::REMOVE_BLIP(&(uLocal_297[iVar4]));
			}
		}
		iVar4++;
	}
}



void func_4()//Position - 0x454
{
	GlobalFunc_4670(2);
	func_55();
}





void func_9()//Position - 0x6BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar0]) && !PED::IS_PED_INJURED(uLocal_283[iVar0]))
		{
			switch (uLocal_290[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_271 = 0;
						uLocal_290[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar1]) && !PED::IS_PED_INJURED(uLocal_283[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_290[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_290[iVar0] > 0)
			{
				iVar3 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_283[iVar0], &iVar3, 1);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_283[iVar0], joaat("weapon_microsmg"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_283[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_283[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_290[iVar0])
			{
				case 0:
					func_33(uLocal_283[iVar0], Local_36[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!GlobalFunc_2664(uLocal_283[iVar0], 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 2:
					if (!GlobalFunc_2664(uLocal_283[iVar0], 1805844857, 1))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_271)
	{
		case 0:
			if (GlobalFunc_5170())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					GlobalFunc_5122(uLocal_283[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				cVar5 = { func_27("START") };
				if (GlobalFunc_10641(&uLocal_106, &cLocal_273, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					GlobalFunc_5122(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_272) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_5122(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_272) > 1000)
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					if (uLocal_290[iVar4] == 2)
					{
						GlobalFunc_5122(uLocal_283[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						GlobalFunc_5122(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}


















struct<4> func_27(char* sParam0)//Position - 0x123E
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (GlobalFunc_8329())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}



int func_30()//Position - 0x148F
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar1]) && !PED::IS_PED_INJURED(uLocal_283[iVar1]))
		{
			fVar3 = GlobalFunc_850(uLocal_283[iVar1], PLAYER::PLAYER_PED_ID(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}



void func_33(int iParam0, struct<3> Param1)//Position - 0x156F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (!GlobalFunc_105(Param1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, 1);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_molotov"), 1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar2);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, GlobalFunc_6474(Param1, 1f));
				TASK::SET_SEQUENCE_TO_REPEAT(uVar2, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar2);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar2);
				TASK::CLEAR_SEQUENCE_TASK(&uVar2);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -653332088) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -653332088) != 0)
		{
			TASK::TASK_SHOOT_AT_COORD(iParam0, Param1, -1, -687903391);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -982327190) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -982327190) != 0)
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}




int func_37(int iParam0)//Position - 0x17D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar0]) && !PED::IS_PED_INJURED(uLocal_283[iVar0])) && uLocal_290[iVar0] > 0)
		{
			iLocal_279 = 1;
		}
		iVar0++;
	}
	if (((((((((((GlobalFunc_747(Global_96066.f_35, 134217728) || PED::CAN_PED_SEE_HATED_PED(uLocal_283[iParam0], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_283[iParam0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_283[iParam0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f, 1)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f, 1, 1)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || iLocal_279)
	{
		return 1;
	}
	return 0;
}


void func_39()//Position - 0x1952
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	char cVar5[24];
	int iVar11;
	bool bVar12;
	int iVar13;
	var uVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char cVar20[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_280[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_280[iVar0], 0))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar4]) && !PED::IS_PED_INJURED(uLocal_283[iVar4]))
				{
					if (Local_36[iVar4 /*10*/].f_8 != -1 && Local_36[iVar4 /*10*/].f_8 == iVar0)
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_283[iVar4], uLocal_280[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar5, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar0]) && !PED::IS_PED_INJURED(uLocal_283[iVar0]))
		{
			switch (uLocal_290[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_271 = 0;
						uLocal_290[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_36[iVar0 /*10*/].f_8 == -1)
					{
						if (!PED::GET_PED_CONFIG_FLAG(uLocal_283[iVar0], 286, 1))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_283[iVar0], 286, 1);
						}
					}
					else
					{
						bVar12 = false;
						if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iVar0], 0))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_280[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_275 == -1 && GlobalFunc_1518(uLocal_283[iVar0]) == -1)
								{
									iLocal_275 = iVar0;
								}
								uLocal_290[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_275 != -1)
					{
						iLocal_276 = iLocal_275;
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iLocal_275]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iLocal_275], 0))
							{
								uVar14 = PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iLocal_275], 0);
							}
						}
					}
					if ((((((((iLocal_275 == -1 || !ENTITY::DOES_ENTITY_EXIST(uLocal_283[iLocal_275])) || PED::IS_PED_INJURED(uLocal_283[iLocal_275])) || !ENTITY::DOES_ENTITY_EXIST(uVar14)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar14, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 0, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 1, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 4, 1)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 5, 1))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar11]) && !PED::IS_PED_INJURED(uLocal_283[iVar11]))
							{
								if (GlobalFunc_1518(uLocal_283[iVar11]) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_275 = iVar15;
						}
					}
					break;
			}
			if (uLocal_290[iVar0] > 0)
			{
				iVar17 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_283[iVar0], &iVar17, 1);
				if (iVar17 == joaat("weapon_molotov"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_283[iVar0], joaat("weapon_microsmg"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_283[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_283[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_290[iVar0])
			{
				case 0:
					func_33(uLocal_283[iVar0], Local_36[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_36[iVar0 /*10*/].f_8 == -1)
					{
						if (!GlobalFunc_2664(uLocal_283[iVar0], 780511057, 1))
						{
							TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (uLocal_280[Local_36[iVar0 /*10*/].f_8] == 0 || Local_36[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 0))
					{
						if (GlobalFunc_850(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!GlobalFunc_2664(uLocal_283[iVar0], 780511057, 1))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (!GlobalFunc_2664(uLocal_283[iVar0], -1794415470, 1))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], -1, Local_36[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!GlobalFunc_2664(uLocal_283[iVar0], 538064912, 1))
					{
						TASK::TASK_VEHICLE_SHOOT_AT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 1101004800);
					}
					break;
				
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iVar0], 0))
					{
						if (iLocal_275 == iVar0)
						{
							if (GlobalFunc_1518(uLocal_283[iVar0]) != -1)
							{
								if (!GlobalFunc_2664(uLocal_283[iVar0], 355471868, 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0));
								}
							}
							else if (!GlobalFunc_2664(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_283[iVar0], -1273030092) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_283[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (GlobalFunc_1518(uLocal_283[iVar0]) == -1)
						{
							if (!GlobalFunc_2664(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
							{
								TASK::TASK_VEHICLE_ESCORT(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0), PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iLocal_275], 0), -1, 40f, 786468, -1082130432, 20, 1101004800);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_283[iVar0], -1273030092) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_283[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0), -1);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar18) || PED::IS_PED_INJURED(iVar18))
							{
								if (!GlobalFunc_2664(uLocal_283[iVar0], 355471868, 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0));
								}
							}
							else if (!GlobalFunc_2664(uLocal_283[iVar0], 2104565373, 1) || iLocal_275 != iLocal_276)
							{
								TASK::TASK_DRIVE_BY(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_271)
	{
		case 0:
			if (GlobalFunc_5170())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					GlobalFunc_5122(uLocal_283[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_5170())
			{
				cVar20 = { func_27("START") };
				if (GlobalFunc_10641(&uLocal_106, &cLocal_273, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5170())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					GlobalFunc_5122(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_272) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_5122(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_272) > 1000)
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iVar19], 0))
					{
						GlobalFunc_5122(uLocal_283[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						GlobalFunc_5122(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}


void func_41()//Position - 0x22EB
{
	GlobalFunc_4670(1);
	func_55();
}

void func_42(char[4] cParam0, int iParam1, int iParam2)//Position - 0x22FC
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(cParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}






void func_48()//Position - 0x2480
{
	int iVar0;
	
	switch (GlobalFunc_8329())
	{
		case 0:
			GlobalFunc_1286(&uLocal_106, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			GlobalFunc_1286(&uLocal_106, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			GlobalFunc_1286(&uLocal_106, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	iLocal_105 = func_52();
	switch (GlobalFunc_4669())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_51(&(Local_36[0 /*10*/]), GlobalFunc_4669(), 0);
	func_51(&(Local_36[1 /*10*/]), GlobalFunc_4669(), 1);
	func_51(&(Local_36[2 /*10*/]), GlobalFunc_4669(), 2);
	func_51(&(Local_36[3 /*10*/]), GlobalFunc_4669(), 3);
	func_51(&(Local_36[4 /*10*/]), GlobalFunc_4669(), 4);
	func_51(&(Local_36[5 /*10*/]), GlobalFunc_4669(), 5);
	StringCopy(&(Local_36.f_61), func_50(iVar0), 16);
	StringCopy(&(Local_36.f_65), func_49(iVar0), 16);
	PED::ADD_RELATIONSHIP_GROUP("relGang", &iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_304, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_304, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, 296331235);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_304, 296331235);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, iLocal_304);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1033021910);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_304, -1033021910);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, iLocal_304);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, 1782292358);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_304, 1782292358);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, iLocal_304);
			break;
	}
}

char* func_49(int iParam0)//Position - 0x266E
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_50(int iParam0)//Position - 0x26B9
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_51(var uParam0, int iParam1, int iParam2)//Position - 0x2704
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_52()//Position - 0x2E6B
{
	return func_53(Global_96066.f_20, Global_96066.f_29);
}

int func_53(var uParam0, int iParam1)//Position - 0x2E83
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}


void func_55()//Position - 0x2F4C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_283[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_283[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_283[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_297[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_297[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_280[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_280[iVar0]));
		}
		iVar0++;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_305, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_306, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


