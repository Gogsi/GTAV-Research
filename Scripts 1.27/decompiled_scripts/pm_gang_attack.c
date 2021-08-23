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
		func_56(2);
		func_55();
	}
	func_48();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_47())
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
							func_46(uLocal_283[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_105 == 0)
							{
								PED::SET_PED_COMBAT_MOVEMENT(uLocal_283[iVar4], 2);
							}
							uLocal_297[iVar4] = func_43(uLocal_283[iVar4], 1, 145);
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
			else if (func_6(uLocal_283[iVar4], func_7(func_8()), 1) > 100f && func_5(PLAYER::PLAYER_PED_ID(), uLocal_283[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_279 && func_6(uLocal_283[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
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

int func_2()//Position - 0x40D
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_47() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()//Position - 0x43D
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x454
{
	func_56(2);
	func_55();
}

float func_5(var uParam0, var uParam1, int iParam2)//Position - 0x465
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

float func_6(var uParam0, struct<3> Param1, int iParam4)//Position - 0x4C1
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

Vector3 func_7(int iParam0)//Position - 0x4FA
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()//Position - 0x6AD
{
	return Global_96066.f_20;
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
					if (!func_32(uLocal_283[iVar0], 780511057, 1))
					{
						TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_32(uLocal_283[iVar0], 1805844857, 1))
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
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					func_28(uLocal_283[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar5 = { func_27("START") };
				if (func_10(&uLocal_106, &cLocal_273, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					func_28(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (MISC::GET_GAME_TIMER() - iLocal_272) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				func_28(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_272) > 1000)
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar4]))
				{
					if (uLocal_290[iVar4] == 2)
					{
						func_28(uLocal_283[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						func_28(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA27
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA75
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()//Position - 0xD41
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

void func_13()//Position - 0xD72
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

int func_14()//Position - 0xE07
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xE2E
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

void func_16()//Position - 0xEC7
{
	if (func_22(14))
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
		Global_14393 = func_17();
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

int func_17()//Position - 0xF68
{
	func_18();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_18()//Position - 0xF81
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_20(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_22(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_19(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_19(int iParam0)//Position - 0x107E
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x108A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x10C7
{
	if (func_19(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0x10F1
{
	return Global_34913 == iParam0;
}

void func_23()//Position - 0x10FF
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

bool func_24(int iParam0, int iParam1)//Position - 0x1156
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

void func_25()//Position - 0x1191
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11E8
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

struct<4> func_27(char* sParam0)//Position - 0x123E
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_17())
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

void func_28(var uParam0, char* sParam1, int iParam2)//Position - 0x1289
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_29(iParam2), 1);
}

int func_29(int iParam0)//Position - 0x12A0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
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
			fVar3 = func_5(uLocal_283[iVar1], PLAYER::PLAYER_PED_ID(), 1);
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

int func_31()//Position - 0x1503
{
	if (func_47())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_32(var uParam0, int iParam1, bool bParam2)//Position - 0x1529
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_33(int iParam0, struct<3> Param1)//Position - 0x156F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (!func_36(Param1))
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
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_34(Param1, 1f));
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

Vector3 func_34(struct<3> Param0, float fParam3)//Position - 0x1743
{
	struct<3> Var0;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + func_35(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_35(struct<3> Param0, float fParam3)//Position - 0x1775
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_36(struct<3> Param0)//Position - 0x17AC
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
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
	if (((((((((((func_38(Global_96066.f_35, 134217728) || PED::CAN_PED_SEE_HATED_PED(uLocal_283[iParam0], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_283[iParam0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_283[iParam0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f, 1)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f, 1, 1)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_283[iParam0], 1), 15f)) || iLocal_279)
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)//Position - 0x1943
{
	return (uParam0 && iParam1) != 0;
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
								if (iLocal_275 == -1 && func_40(uLocal_283[iVar0]) == -1)
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
								if (func_40(uLocal_283[iVar11]) == -1)
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
						if (!func_32(uLocal_283[iVar0], 780511057, 1))
						{
							TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (uLocal_280[Local_36[iVar0 /*10*/].f_8] == 0 || Local_36[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_32(uLocal_283[iVar0], 780511057, 1))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								TASK::TASK_COMBAT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (!func_32(uLocal_283[iVar0], -1794415470, 1))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], -1, Local_36[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!func_32(uLocal_283[iVar0], 538064912, 1))
					{
						TASK::TASK_VEHICLE_SHOOT_AT_PED(uLocal_283[iVar0], PLAYER::PLAYER_PED_ID(), 1101004800);
					}
					break;
				
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iVar0], 0))
					{
						if (iLocal_275 == iVar0)
						{
							if (func_40(uLocal_283[iVar0]) != -1)
							{
								if (!func_32(uLocal_283[iVar0], 355471868, 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0));
								}
							}
							else if (!func_32(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
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
						else if (func_40(uLocal_283[iVar0]) == -1)
						{
							if (!func_32(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
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
								if (!func_32(uLocal_283[iVar0], 355471868, 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_283[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_283[iVar0], 0));
								}
							}
							else if (!func_32(uLocal_283[iVar0], 2104565373, 1) || iLocal_275 != iLocal_276)
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
			if (func_31())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					func_28(uLocal_283[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar20 = { func_27("START") };
				if (func_10(&uLocal_106, &cLocal_273, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					func_28(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (MISC::GET_GAME_TIMER() - iLocal_272) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				func_28(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_272) > 1000)
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_283[iVar19]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_283[iVar19], 0))
					{
						func_28(uLocal_283[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						func_28(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}

int func_40(int iParam0)//Position - 0x226E
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_41()//Position - 0x22EB
{
	func_56(1);
	func_55();
}

void func_42(char[4] cParam0, int iParam1, int iParam2)//Position - 0x22FC
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(cParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

var func_43(var uParam0, bool bParam1, int iParam2)//Position - 0x2315
{
	var uVar0;
	
	uVar0 = func_44(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x2367
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_45(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_45(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_45(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)//Position - 0x240B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_46(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2422
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

int func_47()//Position - 0x245E
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x2480
{
	int iVar0;
	
	switch (func_17())
	{
		case 0:
			func_54(&uLocal_106, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_54(&uLocal_106, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_54(&uLocal_106, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	iLocal_105 = func_52();
	switch (func_8())
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
	func_51(&(Local_36[0 /*10*/]), func_8(), 0);
	func_51(&(Local_36[1 /*10*/]), func_8(), 1);
	func_51(&(Local_36[2 /*10*/]), func_8(), 2);
	func_51(&(Local_36[3 /*10*/]), func_8(), 3);
	func_51(&(Local_36[4 /*10*/]), func_8(), 4);
	func_51(&(Local_36[5 /*10*/]), func_8(), 5);
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

void func_54(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2EB1
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

void func_56(int iParam0)//Position - 0x301B
{
	Global_96066.f_22 = iParam0;
}

