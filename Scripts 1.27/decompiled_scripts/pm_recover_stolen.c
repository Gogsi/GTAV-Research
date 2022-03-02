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
	struct<28> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	char[] cLocal_239[8] = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1000;
	var uLocal_263 = 1000;
	var uLocal_264 = 0;
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
	iLocal_66 = -1;
	iLocal_237 = -1;
	iLocal_238 = -1;
	StringCopy(&cLocal_239, "PMRAUD", 8);
	iLocal_251 = -1;
	iLocal_252 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_4670(2);
		func_80();
	}
	func_74();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GlobalFunc_111())
		{
			iLocal_238 = -1;
		}
		else if (iLocal_238 == -1)
		{
			iLocal_238 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()//Position - 0xB7
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_35)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_36.f_10);
			if (Local_36.f_11 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_36.f_11);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("PRECOV", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_222[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96066.f_222[0], 0))
				{
					iLocal_243 = Global_96066.f_222[0];
					Global_96066.f_222[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_243, 1, 1);
					Local_36.f_7 = ENTITY::GET_ENTITY_MODEL(iLocal_243);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_36.f_7);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_36.f_7, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[0]))
				{
					iLocal_244 = Global_96066.f_225[0];
					Global_96066.f_225[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_244, 1, 1);
					Local_36.f_8 = ENTITY::GET_ENTITY_MODEL(iLocal_244);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_244, iLocal_250);
					PED::SET_PED_MONEY(iLocal_244, 0);
					PED::SET_PED_ACCURACY(iLocal_244, 5);
					PED::SET_PED_KEEP_TASK(iLocal_244, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_244, 23, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							PED::SET_PED_HELMET(iLocal_244, 1);
							PED::GIVE_PED_HELMET(iLocal_244, 1, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_244, 0);
						}
					}
					if (Local_36.f_20)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_244, joaat("weapon_pistol"), 120, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_244, joaat("weapon_microsmg"), 120, 1, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_36.f_8);
					ENTITY::SET_ENTITY_PROOFS(iLocal_244, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
					GlobalFunc_1286(&uLocal_72, 3, iLocal_244, "ABIGAIL", 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[1]))
				{
					iLocal_245 = Global_96066.f_225[1];
					Global_96066.f_225[1] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_245, 1, 1);
					Local_36.f_9 = ENTITY::GET_ENTITY_MODEL(iLocal_245);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_245, iLocal_250);
					PED::SET_PED_MONEY(iLocal_245, 0);
					PED::SET_PED_ACCURACY(iLocal_245, 5);
					PED::SET_PED_KEEP_TASK(iLocal_245, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_245, 23, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							PED::SET_PED_HELMET(iLocal_245, 1);
							PED::GIVE_PED_HELMET(iLocal_245, 1, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_245, 0);
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_36.f_9);
					ENTITY::SET_ENTITY_PROOFS(iLocal_245, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
				}
				if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_244) || !PED::IS_PED_INJURED(iLocal_244)) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_245) || !PED::IS_PED_INJURED(iLocal_245)))
				{
					uLocal_248 = GlobalFunc_7055(iLocal_243, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_36.f_12), 32);
					func_70(&cVar0, 7500, 1);
					GlobalFunc_159(&(Local_36.f_22), 10000);
					iLocal_237 = 0;
					iLocal_67 = 0;
					iLocal_68 = 0;
					if (Local_36.f_19 != -1)
					{
						iLocal_66 = (MISC::GET_GAME_TIMER() + Local_36.f_19);
					}
				}
				iLocal_35++;
			}
			break;
		
		case 1:
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_244) && PED::IS_PED_INJURED(iLocal_244)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_245) && PED::IS_PED_INJURED(iLocal_245))) || ((Local_36.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_36.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_243, 0))) || ((Local_36.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_36.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_243, 0))) || ((Local_36.f_18 && !PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_243, 0)) && func_68(iLocal_244)))
			{
				if (Local_36.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_36.f_7))
				{
					if (!PED::IS_PED_INJURED(iLocal_244) && PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_243, 0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_244);
					}
					if (!PED::IS_PED_INJURED(iLocal_245) && PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_243, 0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_245);
					}
				}
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				iLocal_237 = -1;
				if (STREAMING::HAS_MODEL_LOADED(Local_36.f_10) && (Local_36.f_11 == 0 || STREAMING::HAS_MODEL_LOADED(Local_36.f_11)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_244, 1067030938, 1069547520) };
						uLocal_246 = OBJECT::CREATE_PICKUP(joaat("pickup_money_med_bag"), Var8, Local_36.f_28, -1, 1, Local_36.f_10);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_36.f_10);
						if (HUD::DOES_BLIP_EXIST(uLocal_248))
						{
							HUD::REMOVE_BLIP(&uLocal_248);
						}
						uLocal_248 = GlobalFunc_5666(uLocal_246);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_245) && Local_36.f_11 != 0)
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = OBJECT::CREATE_PICKUP(joaat("pickup_money_med_bag"), Var8, Local_36.f_29, -1, 1, Local_36.f_11);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_36.f_11);
						if (HUD::DOES_BLIP_EXIST(uLocal_249))
						{
							HUD::REMOVE_BLIP(&uLocal_249);
						}
						uLocal_249 = GlobalFunc_5666(uLocal_247);
					}
					GlobalFunc_4948(&uLocal_253, 0, 0);
					iLocal_241 = 1;
					iLocal_35++;
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_244, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						HUD::REMOVE_BLIP(&uLocal_249);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_248))
					{
						uLocal_248 = GlobalFunc_7055(PED::GET_VEHICLE_PED_IS_IN(iLocal_244, 0), 1, 0);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_248))
					{
						HUD::REMOVE_BLIP(&uLocal_248);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						uLocal_249 = GlobalFunc_6829(iLocal_244, 1, 145);
					}
				}
				func_40(&uLocal_253, iLocal_244, 0, 0, 1, 1, 1);
				if (iLocal_66 != -1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_66)
					{
						func_39();
					}
					else
					{
						iVar11 = GlobalFunc_254(MISC::ABSI((iLocal_66 - MISC::GET_GAME_TIMER())), 0, Local_36.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 10000, 1);
						}
						else
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
				{
					if (func_33(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) > 500f)
					{
						func_39();
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_248))
					{
						func_32(uLocal_248, iLocal_244, 500f, 0.8f, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
				{
					if (func_33(PLAYER::PLAYER_PED_ID(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_246) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_246))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_246))
				{
					OBJECT::REMOVE_PICKUP(uLocal_246);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_248))
				{
					HUD::REMOVE_BLIP(&uLocal_248);
				}
			}
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_247) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_247))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_247))
				{
					OBJECT::REMOVE_PICKUP(uLocal_247);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_249))
				{
					HUD::REMOVE_BLIP(&uLocal_249);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_248) && !HUD::DOES_BLIP_EXIST(uLocal_249))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_70)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_70 = 1;
					}
				}
				else
				{
					HUD::CLEAR_PRINTS();
					func_31();
				}
			}
			else if ((OBJECT::DOES_PICKUP_EXIST(uLocal_246) && GlobalFunc_879(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(uLocal_246), 1) > 500f) || (OBJECT::DOES_PICKUP_EXIST(uLocal_247) && GlobalFunc_879(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(uLocal_247), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_241 && GlobalFunc_5171())
			{
				HUD::CLEAR_PRINTS();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_36.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_241 = 0;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && !PED::IS_PED_INJURED(iLocal_244))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_243) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_243, 0)) && !iLocal_67)
		{
			if (!GlobalFunc_709(iLocal_244, 242628503, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_242);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_243, 31, 10000);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_243, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_242);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_244, uLocal_242);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_242);
				iLocal_67 = 1;
			}
		}
		else if (((GlobalFunc_709(iLocal_244, 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_244) < 1) && !iLocal_68) && (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_36, Local_36.f_3, Local_36.f_6, 0, 1, 0) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 122)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 123)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 23)) || GlobalFunc_747(Global_96066.f_35, 134217728)))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_244, iLocal_243, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
			iLocal_68 = 1;
		}
		else if ((!GlobalFunc_709(iLocal_244, 242628503, 1) && !GlobalFunc_709(iLocal_244, -1273030092, 1)) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_244, 0))
		{
			if (!GlobalFunc_709(iLocal_244, 1805844857, 1))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_244, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_243, 1) && (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_243, 0, 3000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_243, 1, 3000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_243, 2, 8000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_243, 3, 8000)))
		{
			if (!GlobalFunc_709(iLocal_244, 451360105, 1))
			{
				TASK::TASK_LEAVE_VEHICLE(iLocal_244, iLocal_243, 0);
			}
		}
		if (Local_36.f_20)
		{
			if (!bLocal_69)
			{
				if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_244, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_243, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 122)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 123)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_244, 124))
				{
					bLocal_69 = true;
				}
			}
			if (bLocal_69)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_244, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_244) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_244, -1273030092) == 1)
				{
					if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_244))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_244, joaat("weapon_microsmg"));
						TASK::TASK_DRIVE_BY(iLocal_244, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_243) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_243, 0))
		{
			if (!iLocal_71)
			{
				if ((GlobalFunc_709(iLocal_244, 242628503, 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_244) == 1) || GlobalFunc_709(iLocal_244, -1273030092, 1))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_243, 0, 0, 0);
						iLocal_71 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245) && !PED::IS_PED_INJURED(iLocal_245))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_245, 0) && !GlobalFunc_709(iLocal_245, 1805844857, 1))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_245, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && !PED::IS_PED_INJURED(iLocal_244))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iLocal_244) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_244, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
		}
		else if (func_33(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) < 15f)
		{
			switch (iLocal_237)
			{
				case 0:
					if (GlobalFunc_5170())
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (GlobalFunc_10641(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_5170())
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							GlobalFunc_6551(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 2:
					if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_238) > 3500)
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (GlobalFunc_10641(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 3:
					if (GlobalFunc_5170() && (MISC::GET_GAME_TIMER() - iLocal_238) > 1500)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							GlobalFunc_6551(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237 = (iLocal_237 - 1);
						}
					}
					break;
				}
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (PED::IS_PED_INJURED(iLocal_244))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_251 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_244))
				{
					iLocal_251 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_251) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_244, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (PED::IS_PED_INJURED(iLocal_245))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_245))
				{
					iLocal_252 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_252) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)//Position - 0xDA9
{
	Global_96066.f_220 = iParam0;
}



int func_5()//Position - 0xFC0
{
	return func_6(Global_96066.f_20, Global_96066.f_29);
}

int func_6(int iParam0, int iParam1)//Position - 0xFD8
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}


















struct<4> func_24(char* sParam0)//Position - 0x1855
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







void func_31()//Position - 0x199E
{
	GlobalFunc_4670(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x19AF
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(uParam0, 1);
						HUD::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(uParam0, 0);
						HUD::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1B08
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1B64
{
	GlobalFunc_5152(iParam0, uParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0);
}





void func_39()//Position - 0x1D11
{
	GlobalFunc_4670(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1D22
{
	uParam0->f_6 = 0;
	GlobalFunc_8921(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}




























int func_68(int iParam0)//Position - 0x2D5B
{
	if (((((PED::HAS_PED_RECEIVED_EVENT(uParam0, 122) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 123)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 41)) || (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_RECEIVED_EVENT(iParam0, 29))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	else
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
	return 0;
}


void func_70(char[4] cParam0, int iParam1, int iParam2)//Position - 0x2DEB
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(cParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}




void func_74()//Position - 0x2ED4
{
	func_75(&Local_36);
	PED::ADD_RELATIONSHIP_GROUP("relThief", &iLocal_250);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_250);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_250, 1862763509);
	switch (GlobalFunc_8329())
	{
		case 0:
			GlobalFunc_1286(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			GlobalFunc_1286(&uLocal_72, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			GlobalFunc_1286(&uLocal_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
}

void func_75(var uParam0)//Position - 0x2F65
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	MISC::SET_BIT(&iVar3, 3);
	MISC::SET_BIT(&iVar3, 4);
	MISC::SET_BIT(&iVar4, 3);
	MISC::SET_BIT(&iVar4, 4);
	MISC::SET_BIT(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (GlobalFunc_4669())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(GlobalFunc_4669(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(GlobalFunc_4669(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(GlobalFunc_4669(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)//Position - 0x32C5
{
	switch (iParam0)
	{
		case 5:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, 174.58f, 335.5574f)), GlobalFunc_107(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, -711.023f, 393.0992f)), GlobalFunc_107(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, -215.2002f, -1423.254f)), GlobalFunc_107(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, 274.9096f, -564.5655f)), GlobalFunc_107(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, 338.8084f, 225.5057f)), GlobalFunc_107(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, 6256.5f, -299.9329f)), GlobalFunc_107(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (GlobalFunc_168(GlobalFunc_107(Param1 - Vector(0f, 4287.951f, -2200.204f)), GlobalFunc_107(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}




void func_80()//Position - 0x355A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (!PED::IS_PED_INJURED(iLocal_244))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_244, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_244);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (!PED::IS_PED_INJURED(iLocal_245))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_245, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_243);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_246))
	{
		OBJECT::REMOVE_PICKUP(uLocal_246);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_247))
	{
		OBJECT::REMOVE_PICKUP(uLocal_247);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_248))
	{
		HUD::REMOVE_BLIP(&uLocal_248);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_249))
	{
		HUD::REMOVE_BLIP(&uLocal_249);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_36.f_7, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_250);
	SCRIPT::TERMINATE_THIS_THREAD();
}


