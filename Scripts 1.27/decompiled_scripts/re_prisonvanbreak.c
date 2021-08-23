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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	struct<3> Local_218 = { 0, 0, 0 } ;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231[3] = { 0, 0, 0 };
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_259 = 0;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	struct<3> Local_270 = { 0, 0, 0 } ;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	int iLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291[2] = { 0, 0 };
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296[3] = { 0, 0, 0 };
	var uLocal_300[2] = { 0, 0 };
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_218 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_142();
	}
	if (func_89(Local_218, -1, 0, 0, 0))
	{
		func_86(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_273)
		{
			RECORDING::_0x208784099002BC30("RE_CR", 0);
			switch (iLocal_45)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_218, 100f, 100f, 100f, 0, 1, 0))
					{
						func_142();
					}
					if (iLocal_46)
					{
						iLocal_45 = 1;
					}
					else
					{
						func_85();
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					func_84();
					func_82();
					if (!func_81())
					{
						func_78();
					}
					if (!bLocal_48)
					{
						func_67();
					}
					if (!bLocal_49 && !bLocal_283)
					{
						func_63();
					}
					if (iLocal_265 && !bLocal_48)
					{
						func_62(iLocal_225[0]);
						func_62(iLocal_225[1]);
						func_62(iLocal_225[2]);
					}
					if ((!iLocal_265 && !bLocal_283) && func_81())
					{
						func_61(iLocal_231[0], &(uLocal_242[0]), 1, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[1]), 5, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[2]), 0, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[3]), 4, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[4]), 1, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[5]), 5, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[6]), 0, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[7]), 4, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[8]), 1, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[9]), 5, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[10]), 0, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[11]), 4, 0.7f);
						func_61(iLocal_235, &(uLocal_242[12]), 1, 0.7f);
						func_61(iLocal_235, &(uLocal_242[13]), 5, 0.7f);
						func_61(iLocal_235, &(uLocal_242[14]), 0, 0.7f);
						func_61(iLocal_235, &(uLocal_242[15]), 4, 0.7f);
					}
					if (!iLocal_263)
					{
						func_59();
					}
					else
					{
						if (!bLocal_283)
						{
							func_58();
						}
						else if (!iLocal_280 && bLocal_48)
						{
							func_56();
						}
						if (!iLocal_284)
						{
							func_55();
						}
						func_54();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()//Position - 0x31A
{
}

void func_2()//Position - 0x322
{
	int iVar0;
	
	if (!iLocal_278)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_225[0]) || PED::IS_PED_INJURED(iLocal_225[0]))
		{
			func_53(&uLocal_53, 4);
			iLocal_278 = 1;
		}
	}
	if (!bLocal_259)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_221) || PED::IS_PED_INJURED(iLocal_221)) || PED::IS_PED_HURT(iLocal_221))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_270 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_221, 1067030938, 1069547520) };
				Local_270.f_2 = (Local_270.f_2 + 0.3f);
				uLocal_291[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_270 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_300[0]))
				{
					uLocal_300[0] = func_51(uLocal_291[0]);
				}
				bLocal_259 = true;
				func_53(&uLocal_53, 5);
			}
		}
	}
	if (!bLocal_260)
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_222) || PED::IS_PED_INJURED(iLocal_222)) || PED::IS_PED_HURT(iLocal_222))
		{
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				Local_270 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_222, 1067030938, 1069547520) };
				Local_270.f_2 = (Local_270.f_2 + 0.3f);
				uLocal_291[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_270 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!HUD::DOES_BLIP_EXIST(uLocal_300[1]))
				{
					uLocal_300[1] = func_51(uLocal_291[1]);
				}
				bLocal_260 = true;
				func_53(&uLocal_53, 6);
			}
		}
	}
	if (!bLocal_283)
	{
		if (!iLocal_275)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_221) || PED::IS_PED_INJURED(iLocal_221))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), 1))
					{
						HUD::REMOVE_BLIP(&uLocal_294);
						iLocal_275 = 1;
						bLocal_49 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
						if (!PED::IS_PED_INJURED(iLocal_222))
						{
							TASK::TASK_COMBAT_PED(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_222, 1);
							PED::REGISTER_TARGET(iLocal_222, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222, 1);
							func_53(&uLocal_53, 5);
							func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_274)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_222) || PED::IS_PED_INJURED(iLocal_222))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
					{
						HUD::REMOVE_BLIP(&uLocal_295);
						iLocal_274 = 1;
						bLocal_49 = true;
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
						if (!PED::IS_PED_INJURED(iLocal_221))
						{
							TASK::TASK_COMBAT_PED(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_221, 1);
							PED::REGISTER_TARGET(iLocal_221, PLAYER::PLAYER_PED_ID());
							PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_221, 1);
							func_38(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_37() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (PED::IS_PED_INJURED(iLocal_221) && PED::IS_PED_INJURED(iLocal_222))
			{
				if (func_37() && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_218, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_49 && !bLocal_48)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_283)
	{
		if (func_37())
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_221) && ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
				func_7();
			}
			if (bLocal_283)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_221, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_49)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_222))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_49)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_265 && !bLocal_48)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		STREAMING::REQUEST_MODEL(joaat("ambulance"));
		STREAMING::REQUEST_ANIM_DICT("random@countrysiderobbery");
		if (((ENTITY::IS_ENTITY_DEAD(iLocal_221) && ENTITY::IS_ENTITY_DEAD(iLocal_222)) && STREAMING::HAS_MODEL_LOADED(joaat("ambulance"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countrysiderobbery"))
		{
			HUD::REMOVE_BLIP(&uLocal_294);
			HUD::REMOVE_BLIP(&uLocal_295);
			func_53(&uLocal_53, 5);
			func_53(&uLocal_53, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_296[iVar0]));
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_267, 1862763509);
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, 0, 1, 0))
			{
				uLocal_236 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, 1, 1);
			}
			else
			{
				uLocal_236 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, 1, 1);
			}
			VEHICLE::SET_VEHICLE_SIREN(uLocal_236, 1);
			iLocal_223 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_236, 20, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			iLocal_224 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_236, 20, joaat("s_m_m_paramedic_01"), 0, 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_223, 17, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_224, 17, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_223, 185, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_224, 185, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_236, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_221, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_221, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_221, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_223, uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				PED::SET_PED_KEEP_TASK(iLocal_223, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_PAUSE(0, 15000);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_222, -1, 2f, 1f, 10f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_222, -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_222, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_224, uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				PED::SET_PED_KEEP_TASK(iLocal_224, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_225[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_235))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_225[0], 185, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_235, 0) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_SWAP_WEAPON(0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_225[0], uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				PED::SET_PED_KEEP_TASK(iLocal_225[0], 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_229))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_225[1], 185, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_225[1], joaat("weapon_unarmed"), 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_229, 0) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_229, 0), -1, 2052, 2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_229, 0), 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_225[1], uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				PED::SET_PED_KEEP_TASK(iLocal_225[1], 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_225[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_222))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_225[2], 185, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_222))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_222, 0) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					TASK::TASK_SWAP_WEAPON(0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_225[2], uLocal_268);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				}
				PED::SET_PED_KEEP_TASK(iLocal_225[2], 1);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_265 = 1;
		}
	}
	if (iLocal_263 && !func_81())
	{
		func_5();
	}
	if (((((ENTITY::IS_ENTITY_DEAD(iLocal_221) && ENTITY::IS_ENTITY_DEAD(iLocal_222)) && ENTITY::IS_ENTITY_DEAD(iLocal_225[0])) && ENTITY::IS_ENTITY_DEAD(iLocal_225[1])) && ENTITY::IS_ENTITY_DEAD(iLocal_225[2])) && (func_37() || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		func_7();
	}
}

void func_3()//Position - 0xE91
{
	Global_14558 = 0;
	func_4();
}

void func_4()//Position - 0xEA1
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_5()//Position - 0xEC2
{
	func_142();
}

void func_6(int iParam0)//Position - 0xECE
{
	Global_97339 = iParam0;
}

void func_7()//Position - 0xEDC
{
	if (!bLocal_48)
	{
	}
	while (func_36())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_35())
	{
		SYSTEM::WAIT(0);
	}
	func_11(-1, 0);
	func_8();
	func_142();
}

void func_8()//Position - 0xF17
{
	func_9();
}

int func_9()//Position - 0xF24
{
	if (func_10(0))
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

bool func_10(bool bParam0)//Position - 0xF6F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_11(int iParam0, int iParam1)//Position - 0xF9A
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_32(iParam0))
	{
		func_31(iParam0, iParam1);
		if (!func_30(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_6(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)//Position - 0x109D
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
		func_16((891 + iParam0), 1, -1, 1);
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
		func_13();
	}
}

void func_13()//Position - 0x1185
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
		func_15(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_14() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()//Position - 0x1646
{
	return Global_24444;
}

int func_15(int iParam0, int iParam1)//Position - 0x1651
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16A2
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
		iParam2 = func_17();
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

int func_17()//Position - 0x18FD
{
	return Global_1312737;
}

int func_18(int iParam0, int iParam1)//Position - 0x1909
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

int func_19(int iParam0)//Position - 0x1C7D
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

void func_20(int iParam0)//Position - 0x1CAC
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1CEE
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1D0F
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
		func_23();
	}
}

void func_23()//Position - 0x1EE2
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

int func_24()//Position - 0x2002
{
	func_25();
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

void func_25()//Position - 0x2048
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
			if (func_27(iVar0) && (!func_26(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_27(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_26(int iParam0)//Position - 0x2145
{
	return Global_34913 == iParam0;
}

bool func_27(int iParam0)//Position - 0x2153
{
	return iParam0 < 3;
}

int func_28(int iParam0)//Position - 0x215F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)//Position - 0x219C
{
	if (func_27(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x21C6
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

void func_31(int iParam0, int iParam1)//Position - 0x2209
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

int func_32(int iParam0)//Position - 0x2224
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

int func_33()//Position - 0x22D5
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_34(Var0);
	return uVar16;
}

int func_34(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x22F2
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

int func_35()//Position - 0x24CC
{
	return 1;
}

int func_36()//Position - 0x24D5
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x24F7
{
	if (bLocal_259 || bLocal_260)
	{
		if (bLocal_259 && bLocal_260)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_300[0]) && !HUD::DOES_BLIP_EXIST(uLocal_300[1]))
			{
				return 1;
			}
		}
		if (bLocal_259 && !bLocal_260)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_300[0]))
			{
				return 1;
			}
		}
		if (bLocal_260 && !bLocal_259)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_300[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_38(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2588
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_39(sParam2, iParam3, 0);
}

int func_39(char* sParam0, int iParam1, bool bParam2)//Position - 0x25D6
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
					func_48();
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
		if (func_47(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_46();
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
				func_44();
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
				if (func_43())
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
			if (func_42())
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
			func_41();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_40();
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
		func_48();
	}
	return 0;
}

void func_40()//Position - 0x28A2
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

void func_41()//Position - 0x28D3
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

int func_42()//Position - 0x2968
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0x298F
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

void func_44()//Position - 0x2A28
{
	if (func_26(14))
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
		Global_14393 = func_45();
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

int func_45()//Position - 0x2AC9
{
	func_25();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_46()//Position - 0x2AE2
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

bool func_47(int iParam0, int iParam1)//Position - 0x2B39
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

void func_48()//Position - 0x2B74
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

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BCB
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2C21
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
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

int func_51(var uParam0)//Position - 0x2CBC
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)//Position - 0x2CF4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_53(var uParam0, int iParam1)//Position - 0x2D0B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_54()//Position - 0x2D28
{
	if (!iLocal_281)
	{
		if (!PED::IS_PED_INJURED(iLocal_221))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_221, 0))
			{
				iLocal_290 = PED::GET_VEHICLE_PED_IS_IN(iLocal_221, 0);
				if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0)) || PED::IS_PED_BEING_JACKED(iLocal_221)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_290, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_290, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_221, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!PED::IS_PED_INJURED(iLocal_222))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_222, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 0);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_49 = true;
					iLocal_281 = 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), 1))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_221, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_49 = true;
						iLocal_281 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_222))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_222, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 0);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_222))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_222, 0))
			{
				iLocal_290 = PED::GET_VEHICLE_PED_IS_IN(iLocal_222, 0);
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_BEING_JACKED(iLocal_222)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_290, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_290, joaat("weapon_stickybomb"), -1))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
					if (!PED::IS_PED_INJURED(iLocal_221))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_221, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 0);
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("weapon_microsmg"), 1);
								TASK::TASK_DRIVE_BY(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_49 = true;
								iLocal_281 = 1;
							}
						}
					}
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_222, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 0);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
				if (!PED::IS_PED_INJURED(iLocal_221))
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_221, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("weapon_microsmg"), 1);
							TASK::TASK_DRIVE_BY(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_222, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_290))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_222, joaat("weapon_microsmg"), 1);
						TASK::TASK_DRIVE_BY(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_49 = true;
						iLocal_281 = 1;
					}
				}
			}
		}
	}
}

void func_55()//Position - 0x3260
{
	if (!PED::IS_PED_INJURED(iLocal_221) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
	{
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_221, iLocal_235, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_221, iLocal_235, 0, 0, 0))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_221, Local_218, 1000f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_221, 1);
			iLocal_284 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_222) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
	{
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_222, iLocal_235, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_222, iLocal_235, 0, 0, 0))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_222, Local_218, 1000f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_222, 1);
			iLocal_284 = 1;
		}
	}
}

void func_56()//Position - 0x330E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		Local_270 = { ENTITY::GET_ENTITY_COORDS(iLocal_221, 1) };
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
	{
		Local_270 = { ENTITY::GET_ENTITY_COORDS(iLocal_222, 1) };
	}
	Local_270.f_2 = (Local_270.f_2 - 0.11f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		SYSTEM::SETTIMERA(0);
		if (!bLocal_49)
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
			{
				func_57(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_57(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			OBJECT::CREATE_MONEY_PICKUPS(OBJECT::GET_SAFE_PICKUP_COORDS(Local_270, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_280 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_222) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_222, iLocal_235, 0))
		{
			SYSTEM::SETTIMERA(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
			{
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
			}
			iLocal_280 = 1;
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3427
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_39(sParam2, iParam4, 0);
}

void func_58()//Position - 0x347B
{
	if (!bLocal_283)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_287)
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				if (PED::IS_PED_JACKING(iLocal_221))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_287 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (PED::IS_PED_JACKING(iLocal_222))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_287 = 1;
				}
			}
		}
		if (iLocal_264 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_221) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_221, iLocal_235, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_221, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_235, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_221, uLocal_268);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
					PED::SET_PED_KEEP_TASK(iLocal_221, 1);
					bLocal_283 = true;
				}
			}
		}
		if (iLocal_264 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_222) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_222, iLocal_235, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_222, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_235, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_222, uLocal_268);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
					PED::SET_PED_KEEP_TASK(iLocal_222, 1);
					bLocal_283 = true;
				}
			}
		}
		if (iLocal_264 == 3)
		{
			if ((!PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_INJURED(iLocal_221)) && !ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_221, iLocal_235, 0) && PED::IS_PED_IN_VEHICLE(iLocal_222, iLocal_235, 0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_221, 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_222, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_235, PLAYER::PLAYER_PED_ID(), 8, 100f, 786469, 1000f, 10f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_221, uLocal_268);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 0);
					PED::SET_PED_KEEP_TASK(iLocal_221, 1);
					bLocal_283 = true;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_221) && !PED::IS_PED_INJURED(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				TASK::TASK_ENTER_VEHICLE(iLocal_222, iLocal_235, -1, -1, 2f, 8, 0);
				iLocal_264 = 2;
			}
			if (PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_INJURED(iLocal_221))
			{
				func_53(&uLocal_53, 6);
				TASK::TASK_ENTER_VEHICLE(iLocal_221, iLocal_235, -1, -1, 2f, 8, 0);
				iLocal_264 = 1;
			}
		}
		if (iLocal_264 == 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				TASK::CLEAR_PED_TASKS(iLocal_221);
				TASK::TASK_SMART_FLEE_COORD(iLocal_221, Local_218, 1000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_221, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				TASK::CLEAR_PED_TASKS(iLocal_222);
				TASK::TASK_SMART_FLEE_COORD(iLocal_222, Local_218, 1000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_222, 1);
			}
			bLocal_283 = true;
		}
	}
}

void func_59()//Position - 0x3782
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_225[0]) && ENTITY::IS_ENTITY_DEAD(iLocal_225[1])) && ENTITY::IS_ENTITY_DEAD(iLocal_225[2]))
	{
		func_53(&uLocal_53, 4);
		iLocal_273 = 1;
		iLocal_263 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 1862763509);
		if (!bLocal_49 && bLocal_48)
		{
			HUD::REMOVE_BLIP(&uLocal_294);
			HUD::REMOVE_BLIP(&uLocal_295);
		}
		if (!bLocal_49)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
			{
				func_60(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_60(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, 0))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_235);
			if (!PED::IS_PED_INJURED(iLocal_221) && !PED::IS_PED_HURT(iLocal_221))
			{
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_221, 1, 1, 1, 0);
				iLocal_264 = 1;
				TASK::CLEAR_PED_TASKS(iLocal_221);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 1);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_221);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_235);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_235, -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_221, uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				if (!PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_HURT(iLocal_222))
				{
					TASK::CLEAR_PED_TASKS(iLocal_222);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_222);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_235);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 1);
					TASK::TASK_ENTER_VEHICLE(iLocal_222, iLocal_235, -1, 0, 2f, 1, 0);
					iLocal_264 = 3;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 1);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_222, 1, 1, 1, 0);
				TASK::CLEAR_PED_TASKS(iLocal_222);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 1);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_222);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_235);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_268);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_235, -1, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_268);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_222, uLocal_268);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_268);
				iLocal_264 = 2;
			}
		}
		else
		{
			iLocal_264 = 4;
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3973
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_39(sParam2, iParam4, 0);
}

void func_61(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x39C7
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var3 = { -0.5f, 0.75f, 0.05f };
					iVar6 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var3 = { 0.5f, 0.75f, 0.05f };
					iVar6 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var3 = { -0.5f, -0.75f, 0.05f };
					iVar6 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var3 = { 0.5f, -0.75f, 0.05f };
					iVar6 = 3;
					break;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, 1, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Var3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_62(int iParam0)//Position - 0x3B44
{
	if ((!PED::IS_PED_INJURED(iParam0) && !func_36()) && SYSTEM::TIMERA() > 12000)
	{
		func_50(&uLocal_53, 4, iParam0, "RECSBCop1", 0, 1);
		if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_38(&uLocal_53, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_63()//Position - 0x3BB0
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), 1))
		{
			bLocal_49 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				TASK::TASK_COMBAT_PED(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_221, 1);
				PED::REGISTER_TARGET(iLocal_221, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_221, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				TASK::TASK_COMBAT_PED(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_222, 1);
				PED::REGISTER_TARGET(iLocal_222, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222, 1);
			}
			if (!bLocal_48)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_221))
		{
			if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_221) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_221))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_221, 20f, 20f, 20f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_221, PLAYER::PLAYER_PED_ID()))
					{
						iLocal_239++;
						if (!iLocal_240 && !func_64("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_221))
							{
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_222))
							{
								func_53(&uLocal_53, 5);
								func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_240 = 1;
						}
						if (iLocal_239 > 45)
						{
							bLocal_49 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_48)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_225[0]))
								{
									func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_240 || iLocal_241)
				{
					iLocal_239 = 45;
				}
				else
				{
					iLocal_239 = 0;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 1))
		{
			bLocal_49 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				TASK::TASK_COMBAT_PED(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_222, 1);
				PED::REGISTER_TARGET(iLocal_222, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				TASK::TASK_COMBAT_PED(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_221, 1);
				PED::REGISTER_TARGET(iLocal_221, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_221, 1);
			}
			if (!bLocal_48)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_222))
		{
			if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_222) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_222))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222, PLAYER::PLAYER_PED_ID()))
					{
						if ((!iLocal_241 && !PED::IS_PED_INJURED(iLocal_221)) && !func_64("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_221))
							{
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_222))
							{
								func_53(&uLocal_53, 5);
								func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						iLocal_238++;
						if (iLocal_238 > 45)
						{
							bLocal_49 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_48)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_225[0]))
								{
									func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_240 || iLocal_241)
				{
					iLocal_239 = 45;
				}
				else
				{
					iLocal_239 = 0;
				}
			}
		}
	}
	if (!iLocal_288 && bLocal_259)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_291[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_221, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
	}
	if (!iLocal_289 && bLocal_260)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_291[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_221, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_221, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_235))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_235, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_235, 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_235, joaat("weapon_stickybomb"), -1))
		{
			bLocal_49 = true;
			SYSTEM::SETTIMERA(0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				TASK::TASK_COMBAT_PED(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_221, 1);
				PED::REGISTER_TARGET(iLocal_221, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_221, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				TASK::TASK_COMBAT_PED(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_222, 1);
				PED::REGISTER_TARGET(iLocal_222, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222, 1);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_235, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_221))
					{
						func_60(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_221, iLocal_235, -1, -1, 2f, 524296, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222))
					{
						func_53(&uLocal_53, 5);
						func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						func_60(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_222, iLocal_235, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_48)
				{
					if (!PED::IS_PED_INJURED(iLocal_225[0]))
					{
						func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_64(char* sParam0)//Position - 0x45E0
{
	var uVar0;
	
	if (func_36())
	{
		MemCopy(&uVar0, {func_65()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_65()//Position - 0x4608
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_66()//Position - 0x462C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67()//Position - 0x4679
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_285)
	{
		PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uLocal_269);
		if (ENTITY::IS_ENTITY_A_PED(uLocal_269))
		{
			iLocal_230 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uLocal_269);
		}
		if ((iLocal_230 == iLocal_225[0] || iLocal_230 == iLocal_225[1]) || iLocal_230 == iLocal_225[2])
		{
			if (!PED::IS_PED_INJURED(iLocal_230))
			{
				if (!func_66() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_230) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_230))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_230, 20f, 20f, 20f, 0, 1, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_230, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_230, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_286)
								{
									if (!func_64("recsb_coppon"))
									{
										if (!PED::IS_PED_INJURED(iLocal_225[0]))
										{
											func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_225[1]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_53, 4);
											func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_225[2]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_53, 4);
											func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
									}
								}
								iLocal_237++;
								if (iLocal_237 > 40)
								{
									bLocal_285 = true;
									bLocal_48 = true;
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_269))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_225)
										{
											if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_225[iVar0], 1);
												PED::REGISTER_TARGET(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID());
												PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_225[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_286)
					{
						iLocal_237 = 40;
					}
					else
					{
						iLocal_237 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_225[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID(), 1))
			{
				bLocal_48 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					bLocal_48 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_285)
	{
	}
	if (iLocal_265)
	{
		if (SYSTEM::TIMERB() > 6000)
		{
			if (SYSTEM::TIMERB() > 6000 && SYSTEM::TIMERB() < 7000)
			{
				FIRE::STOP_FIRE_IN_RANGE(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_261)
			{
				if (bLocal_49)
				{
					if (!func_36())
					{
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_261 = 1;
					}
				}
				else if (!iLocal_263)
				{
					if (!func_36())
					{
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_261 = 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_48 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_235, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_225[0]))
					{
						func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_225)
		{
			if (!PED::IS_PED_INJURED(iLocal_225[iVar1]))
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_291[0]) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_291[1]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_48 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_225[iVar1]))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_267, 1862763509);
					bLocal_48 = true;
				}
			}
			iVar1++;
		}
		if (!PED::IS_PED_INJURED(iLocal_225[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_231[2]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_225[1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_225[1]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_231[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_231)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_231[iVar1]))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_231[iVar1], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_231[iVar1], 0)) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_231[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_48 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_231[iVar1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					bLocal_48 = true;
				}
			}
		}
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_236))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_236, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, 0))
		{
			bLocal_48 = true;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
		{
			uVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iLocal_265)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_235))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar2, iLocal_235))
					{
						bLocal_48 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_231)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_231[iVar1]))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar2, iLocal_231[iVar1]))
					{
						bLocal_48 = true;
					}
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_236))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar2, iLocal_236))
				{
					bLocal_48 = true;
				}
			}
		}
	}
	if (bLocal_48 || bLocal_285)
	{
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(350f);
		bLocal_48 = true;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_235) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_235, 0))
		{
		}
		else
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!iLocal_265)
			{
				if (PED::IS_PED_INJURED(iLocal_221) && !PED::IS_PED_INJURED(iLocal_222))
				{
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
		if (!func_81())
		{
			SYSTEM::SETTIMERA(0);
			if (!func_81())
			{
				func_68(1);
			}
		}
		if (iLocal_265)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!PED::IS_PED_INJURED(iLocal_225[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_225[iVar1], 1);
					PED::REGISTER_TARGET(iLocal_225[iVar1], PLAYER::PLAYER_PED_ID());
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_225[iVar1], 1, 1, 1, 0);
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_225[iVar1], 1);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_225[iVar1], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[iVar1], 50, 1);
				}
				iVar1++;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_223))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_223, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			bLocal_48 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_224))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_224, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			bLocal_48 = true;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		bLocal_48 = true;
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
	}
}

int func_68(int iParam0)//Position - 0x536A
{
	if (func_72())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_19(Global_97342))
		{
			func_69(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_19(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_69(int iParam0)//Position - 0x53BD
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_70(var uParam0, int iParam1)//Position - 0x549E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_71(int iParam0)//Position - 0x54B5
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

int func_72()//Position - 0x54F8
{
	switch (func_73(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_73(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x552E
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
		if (func_77(0))
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
		if (!func_75(iParam2))
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
			func_74(uParam0, iParam4);
		}
	}
	return 2;
}

void func_74(var uParam0, int iParam1)//Position - 0x5665
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

bool func_75(int iParam0)//Position - 0x56B4
{
	return func_76(iParam0, Global_34913);
}

int func_76(int iParam0, int iParam1)//Position - 0x56C5
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

int func_77(int iParam0)//Position - 0x58A6
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_78()//Position - 0x58C8
{
	int iVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_225[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_221))
	{
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_218, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_225)
		{
			if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_225[iVar0], 1, iLocal_266);
				if (!HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
				{
					uLocal_296[iVar0] = func_79(iLocal_225[iVar0], 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_296[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_221) || (!PED::IS_PED_INJURED(iLocal_221) && !iLocal_276))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_221, 1, iLocal_267);
			uLocal_294 = func_79(iLocal_221, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_294, 0);
			iLocal_275 = 0;
			iLocal_276 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_222) || (!PED::IS_PED_INJURED(iLocal_222) && !iLocal_277))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222, 1, iLocal_267);
			uLocal_295 = func_79(iLocal_222, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_295, 0);
			iLocal_274 = 0;
			iLocal_277 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!func_81())
		{
			func_68(1);
		}
	}
}

var func_79(var uParam0, bool bParam1, int iParam2)//Position - 0x5A62
{
	var uVar0;
	
	uVar0 = func_80(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x5AB4
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_81()//Position - 0x5B58
{
	if ((Global_97342 == func_33() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_82()//Position - 0x5B83
{
	int iVar0;
	
	if (!iLocal_279)
	{
		if (!bLocal_48 && !iLocal_265)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_225)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_296[iVar0], 1);
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_294))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_294, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_295))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_295, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_279 = 1;
			}
		}
	}
	if ((func_81() && !iLocal_263) && !iLocal_265)
	{
		if (iLocal_282 == 0 && !func_36())
		{
			SYSTEM::SETTIMERA(0);
			if (func_45() == 0)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_45() == 1)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_45() == 2)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_282++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_282 == 1 && !func_36())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_282++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_282 == 2 && SYSTEM::TIMERA() > 2000) && !func_36())
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				func_38(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_282++;
		}
		if ((iLocal_282 == 3 && SYSTEM::TIMERA() > 2000) && !func_36())
		{
			if (!bLocal_49)
			{
				if (!iLocal_262)
				{
					if (!PED::IS_PED_INJURED(iLocal_221))
					{
						func_38(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222))
					{
						func_53(&uLocal_53, 5);
						func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_262 = 1;
				}
			}
			if (!bLocal_48)
			{
				func_83(&(iLocal_225[0]), "recsb_copclo");
				func_83(&(iLocal_225[1]), "recsb_copclo");
				func_83(&(iLocal_225[2]), "recsb_copclo");
			}
		}
		if (iLocal_282 == 4 && SYSTEM::TIMERA() > 5000)
		{
			SYSTEM::SETTIMERA(0);
			iLocal_282++;
		}
	}
}

void func_83(var uParam0, char* sParam1)//Position - 0x5F9A
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_48)
			{
				func_50(&uLocal_53, 4, *uParam0, "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", sParam1, 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 10000, 48, 4);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_282++;
		}
	}
}

void func_84()//Position - 0x6004
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (PED::IS_PED_INJURED(iLocal_225[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_296[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_221))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_294))
		{
			HUD::REMOVE_BLIP(&uLocal_294);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_222))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_295))
		{
			HUD::REMOVE_BLIP(&uLocal_295);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_231)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_231[iVar0]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_231[iVar0], 0))
			{
				VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_231[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_49)
	{
		if (!iLocal_51)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, 1862763509);
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_294))
				{
					HUD::REMOVE_BLIP(&uLocal_294);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_294))
				{
					uLocal_294 = func_79(iLocal_221, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_221, 1);
				}
				TASK::TASK_COMBAT_PED(iLocal_221, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_221, 1);
				PED::REGISTER_TARGET(iLocal_221, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_221, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_295))
				{
					HUD::REMOVE_BLIP(&uLocal_295);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_295))
				{
					uLocal_295 = func_79(iLocal_222, 1, 145);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_222, 1);
				}
				TASK::TASK_COMBAT_PED(iLocal_222, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_222, 1);
				PED::REGISTER_TARGET(iLocal_222, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_222, 1);
			}
			iLocal_51 = 1;
		}
		if (bLocal_48)
		{
			if (!iLocal_52)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_225)
				{
					if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_225[iVar0], 1);
						if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_296[iVar0]));
						}
						TASK::TASK_COMBAT_PED(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_225[iVar0], 1);
						PED::REGISTER_TARGET(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID());
						PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_225[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_52 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_225[iVar0], 0);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_48)
	{
		if (!iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_221, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_222, 0);
			}
			iLocal_50 = 1;
		}
		if (!iLocal_52)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_225[iVar0], 1);
					HUD::_0xC594B315EDF2D4AF(iLocal_225[iVar0]);
					if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_296[iVar0]));
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
					{
						uLocal_296[iVar0] = func_79(iLocal_225[iVar0], 1, 145);
					}
					TASK::TASK_COMBAT_PED(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_225[iVar0], 1);
					PED::REGISTER_TARGET(iLocal_225[iVar0], PLAYER::PLAYER_PED_ID());
					PED::SET_PED_HIGHLY_PERCEPTIVE(iLocal_225[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_52 = 1;
		}
	}
}

void func_85()//Position - 0x6342
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_paramedic_01"));
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("phoenix"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_paramedic_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("phoenix")))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phoenix"), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, 0);
		iLocal_235 = VEHICLE::CREATE_VEHICLE(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, 1, 1);
		iLocal_231[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, 1, 1);
		iLocal_231[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, 1, 1);
		iLocal_231[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, 1, 1);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_231[2], 1);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_231[1], 1);
		AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_231[0], 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_231[2], 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_231[1], 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_231[0], 1);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_231[0], 1);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_231[2], 1);
		VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_231[1], 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_235, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_231[0], 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_231[1], 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_231[2], 1);
		iLocal_221 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, 1);
		iLocal_222 = PED::CREATE_PED(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, 1);
		iLocal_229 = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, 1);
		iLocal_225[0] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, 1);
		iLocal_225[1] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, 1);
		iLocal_225[2] = PED::CREATE_PED(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_225[0], "ped_cops[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_225[1], "ped_cops[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_225[2], "ped_cops[2]");
		PED::SET_PED_USING_ACTION_MODE(iLocal_225[0], 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_225[1], 1, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_225[2], 1, -1, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_222, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_221, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_225[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_225[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_225[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		TASK::TASK_STAY_IN_COVER(iLocal_225[0]);
		TASK::TASK_STAY_IN_COVER(iLocal_225[1]);
		TASK::TASK_STAY_IN_COVER(iLocal_225[2]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[0], 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[1], 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[2], 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[0], 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[1], 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_225[2], 1, 1);
		PED::SET_PED_ACCURACY(iLocal_225[0], 13);
		PED::SET_PED_ACCURACY(iLocal_225[1], 13);
		PED::SET_PED_ACCURACY(iLocal_225[2], 13);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_221, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_222, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_221, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[0], 0, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[0], 1, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[1], 1, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[1], 0, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[2], 1, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_231[2], 0, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_235, 1, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_235, 0, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_235, 1);
		PED::ADD_RELATIONSHIP_GROUP("robbers", &iLocal_266);
		PED::ADD_RELATIONSHIP_GROUP("cops", &iLocal_267);
		ENTITY::SET_ENTITY_HEALTH(iLocal_229, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_222, iLocal_266);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222, 0, iLocal_267);
		ENTITY::SET_ENTITY_HEALTH(iLocal_222, 300);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_222, joaat("weapon_pistol"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(iLocal_222, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_222, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_222, 35f, 35f, 1);
		PED::SET_PED_ACCURACY(iLocal_222, 13);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_221, iLocal_266);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_221, 0, iLocal_267);
		ENTITY::SET_ENTITY_HEALTH(iLocal_221, 300);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_221, joaat("weapon_pistol"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(iLocal_221, 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_221, 100f);
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_221, 35f, 35f, 1);
		PED::SET_PED_ACCURACY(iLocal_221, 13);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_225[0], 0, iLocal_266);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_225[1], 0, iLocal_266);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_225[2], 0, iLocal_266);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_225[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_225[1], joaat("weapon_pistol"), 200, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_225[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		PED::SET_PED_SEEING_RANGE(iLocal_225[0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_225[0], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_225[1], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_225[1], 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_225[2], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_225[2], 100f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_225[0], iLocal_267);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_225[1], iLocal_267);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_225[2], iLocal_267);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_267, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_267);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_267, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_266, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, iLocal_266);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_266);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, iLocal_267);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_225[0], iLocal_221, 3000, 0);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_225[1], iLocal_221, 3000, 0);
		TASK::TASK_SEEK_COVER_FROM_PED(iLocal_225[2], iLocal_221, 3000, 0);
		if (func_45() == 0)
		{
			func_50(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_45() == 1)
		{
			func_50(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_45() == 2)
		{
			func_50(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
		func_50(&uLocal_53, 5, iLocal_221, "RECSBRobber1", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_46 = 1;
	}
}

void func_86(int iParam0)//Position - 0x6B2E
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_87();
}

void func_87()//Position - 0x6B64
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

void func_88(int iParam0)//Position - 0x6BA1
{
	Global_97342 = iParam0;
}

int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6BAF
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
		iParam3 = func_33();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_135())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_129(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_128(iParam3))
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_127(func_45()) == 4 || func_127(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_45()))
		{
			if (!func_126(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_125(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_124())
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
		if (!func_115(4))
		{
			return 0;
		}
		if (!func_75(5))
		{
			return 0;
		}
		if (func_114(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_114(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_128(30) && !func_114(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_113(iVar8))
				{
					if (func_91(iVar4))
					{
						if (!func_90(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_90(struct<3> Param0, struct<3> Param3)//Position - 0x6F48
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_91(int iParam0)//Position - 0x6F71
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_92(iVar0);
}

int func_92(int iParam0)//Position - 0x6F92
{
	return func_93(iParam0, 1);
}

int func_93(int iParam0, int iParam1)//Position - 0x6FA1
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	func_94(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6FF4
{
	func_95(func_106(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_95(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7012
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_105(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = (func_102(iParam0) - func_102(iParam1));
		iVar3 = (func_104(iParam0) - func_104(iParam1));
		iVar4 = (func_101(iParam0) - func_101(iParam1));
		iVar5 = (func_100(iParam0) - func_100(iParam1));
		iVar6 = (func_99(iParam0) - func_99(iParam1));
		iVar7 = (func_98(iParam0) - func_98(iParam1));
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = (func_102(iParam1) - func_102(iParam0));
		iVar3 = (func_104(iParam1) - func_104(iParam0));
		iVar4 = (func_101(iParam1) - func_101(iParam0));
		iVar5 = (func_100(iParam1) - func_100(iParam0));
		iVar6 = (func_99(iParam1) - func_99(iParam0));
		iVar7 = (func_98(iParam1) - func_98(iParam0));
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
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_96(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_96(float fParam0, float fParam1, float fParam2)//Position - 0x7213
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

int func_97(int iParam0, int iParam1)//Position - 0x7255
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

int func_98(int iParam0)//Position - 0x72F7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_99(int iParam0)//Position - 0x730A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_100(int iParam0)//Position - 0x731D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_101(int iParam0)//Position - 0x7330
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_102(int iParam0)//Position - 0x7342
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_103(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)//Position - 0x7367
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)//Position - 0x737E
{
	return iParam0 & 15;
}

int func_105(int iParam0, int iParam1)//Position - 0x738B
{
	int iVar0;
	int iVar1;
	
	if (!func_113(iParam1) || !func_113(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0x7497
{
	var uVar0;
	
	func_112(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_111(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_110(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_109(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_108(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_107(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_107(var uParam0, int iParam1)//Position - 0x74DD
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

void func_108(var uParam0, int iParam1)//Position - 0x7563
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_109(var uParam0, int iParam1)//Position - 0x7596
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_110(var uParam0, int iParam1)//Position - 0x75E7
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_111(var uParam0, int iParam1)//Position - 0x7621
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_112(var uParam0, int iParam1)//Position - 0x765C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_113(int iParam0)//Position - 0x7698
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
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0, int iParam1)//Position - 0x7774
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x7797
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_45();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_123()) || Global_96400) || Global_24446) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_119()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_123()) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_123()) || Global_96400) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_123()) || Global_96400) || Global_24446) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_123() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_47(8, -1)) || func_118()) || func_117()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_47(8, -1) || func_121()) || func_120()) || func_117()) || func_116())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_123()) || Global_24446) || func_122()) || func_47(8, -1)) || func_120()) || func_119()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_123()) || func_120()) || Global_96400) || Global_24446) || func_122()) || Global_35957) || func_47(8, -1)) || func_119()) || func_117()) || func_118()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_123()) || Global_96400) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_117()) || func_121()) || func_120()) || func_118())
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

var func_116()//Position - 0x7EB4
{
	return Global_90001.f_1;
}

int func_117()//Position - 0x7EC2
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_118()//Position - 0x7EE8
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_119()//Position - 0x7F02
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

bool func_120()//Position - 0x7F2C
{
	return Global_90014.f_291 > 0;
}

bool func_121()//Position - 0x7F3D
{
	return Global_90014.f_290 > 0;
}

var func_122()//Position - 0x7F4E
{
	return Global_1315900;
}

int func_123()//Position - 0x7F5A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_124()//Position - 0x7F76
{
	func_44();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x7F9E
{
	return func_105(func_106(), iParam0);
}

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x7FB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_127(int iParam0)//Position - 0x80AB
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_128(int iParam0)//Position - 0x80CF
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
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

int func_129(float fParam0, bool bParam1)//Position - 0x812D
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
		if (func_27(func_45()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_130(iVar32, &Var0);
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

void func_130(int iParam0, var uParam1)//Position - 0x81E4
{
	switch (iParam0)
	{
		case 0:
			func_131(uParam1, "Abigail1", func_133(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 1:
			func_131(uParam1, "Abigail2", func_133(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 2:
			func_131(uParam1, "Barry1", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 3:
			func_131(uParam1, "Barry2", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 4:
			func_131(uParam1, "Barry3", func_133(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 5:
			func_131(uParam1, "Barry3A", func_133(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 6:
			func_131(uParam1, "Barry3C", func_133(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 7:
			func_131(uParam1, "Barry4", func_133(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_132(iParam0), 0, 0);
			break;
		
		case 8:
			func_131(uParam1, "Dreyfuss1", func_133(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 9:
			func_131(uParam1, "Epsilon1", func_133(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 10:
			func_131(uParam1, "Epsilon2", func_133(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 11:
			func_131(uParam1, "Epsilon3", func_133(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 12:
			func_131(uParam1, "Epsilon4", func_133(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 13:
			func_131(uParam1, "Epsilon5", func_133(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 14:
			func_131(uParam1, "Epsilon6", func_133(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 15:
			func_131(uParam1, "Epsilon7", func_133(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 16:
			func_131(uParam1, "Epsilon8", func_133(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 17:
			func_131(uParam1, "Extreme1", func_133(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 18:
			func_131(uParam1, "Extreme2", func_133(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 19:
			func_131(uParam1, "Extreme3", func_133(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 20:
			func_131(uParam1, "Extreme4", func_133(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 21:
			func_131(uParam1, "Fanatic1", func_133(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 22:
			func_131(uParam1, "Fanatic2", func_133(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 23:
			func_131(uParam1, "Fanatic3", func_133(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_132(iParam0), 0, 1);
			break;
		
		case 24:
			func_131(uParam1, "Hao1", func_133(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_132(iParam0), 0, 1);
			break;
		
		case 25:
			func_131(uParam1, "Hunting1", func_133(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 26:
			func_131(uParam1, "Hunting2", func_133(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 27:
			func_131(uParam1, "Josh1", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 28:
			func_131(uParam1, "Josh2", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 29:
			func_131(uParam1, "Josh3", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 30:
			func_131(uParam1, "Josh4", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 31:
			func_131(uParam1, "Maude1", func_133(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 32:
			func_131(uParam1, "Minute1", func_133(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 33:
			func_131(uParam1, "Minute2", func_133(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 34:
			func_131(uParam1, "Minute3", func_133(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 35:
			func_131(uParam1, "MrsPhilips1", func_133(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 36:
			func_131(uParam1, "MrsPhilips2", func_133(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 37:
			func_131(uParam1, "Nigel1", func_133(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 38:
			func_131(uParam1, "Nigel1A", func_133(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 39:
			func_131(uParam1, "Nigel1B", func_133(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 40:
			func_131(uParam1, "Nigel1C", func_133(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 41:
			func_131(uParam1, "Nigel1D", func_133(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 42:
			func_131(uParam1, "Nigel2", func_133(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 43:
			func_131(uParam1, "Nigel3", func_133(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 44:
			func_131(uParam1, "Omega1", func_133(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 45:
			func_131(uParam1, "Omega2", func_133(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 46:
			func_131(uParam1, "Paparazzo1", func_133(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 47:
			func_131(uParam1, "Paparazzo2", func_133(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 48:
			func_131(uParam1, "Paparazzo3", func_133(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 49:
			func_131(uParam1, "Paparazzo3A", func_133(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 50:
			func_131(uParam1, "Paparazzo3B", func_133(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 51:
			func_131(uParam1, "Paparazzo4", func_133(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 52:
			func_131(uParam1, "Rampage1", func_133(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 54:
			func_131(uParam1, "Rampage3", func_133(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 55:
			func_131(uParam1, "Rampage4", func_133(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 56:
			func_131(uParam1, "Rampage5", func_133(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 53:
			func_131(uParam1, "Rampage2", func_133(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 57:
			func_131(uParam1, "TheLastOne", func_133(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 58:
			func_131(uParam1, "Tonya1", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 59:
			func_131(uParam1, "Tonya2", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 60:
			func_131(uParam1, "Tonya3", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 61:
			func_131(uParam1, "Tonya4", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 62:
			func_131(uParam1, "Tonya5", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_131(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x9399
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

int func_132(int iParam0)//Position - 0x942A
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

struct<2> func_133(int iParam0)//Position - 0x9770
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_134(iParam0) };
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

struct<2> func_134(int iParam0)//Position - 0x97A7
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

int func_135()//Position - 0x9BF3
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

int func_136()//Position - 0x9C2A
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()//Position - 0x9C5C
{
	return Global_97071 > 0;
}

int func_138()//Position - 0x9C6A
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()//Position - 0x9C7F
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()//Position - 0x9CA5
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

int func_141()//Position - 0x9CC2
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

void func_142()//Position - 0x9D45
{
	int iVar0;
	
	if (iLocal_47)
	{
		HUD::REMOVE_BLIP(&uLocal_294);
		HUD::REMOVE_BLIP(&uLocal_295);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_225)
		{
			if (!PED::IS_PED_INJURED(iLocal_225[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_225[iVar0], 0);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_STAY_IN_COVER(iLocal_225[iVar0]);
					PED::SET_PED_KEEP_TASK(iLocal_225[iVar0], 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_221, 317, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, 0);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_221, iLocal_235, 0))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_235, 1);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_222, 317, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_222, 0);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_222, iLocal_235, 0))
					{
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_235, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_143(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_143(int iParam0)//Position - 0x9EB1
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_81())
	{
		func_147(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_97342, 1), 64);
		if (func_32(Global_97342) > 0)
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
	func_144(&Global_24503);
	Global_97343 = 0;
	func_88(-1);
}

void func_144(var uParam0)//Position - 0x9F66
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

char* func_145(int iParam0, bool bParam1)//Position - 0x9FA3
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

void func_146(int iParam0)//Position - 0xA1EC
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_147(int iParam0)//Position - 0xA1FE
{
	func_148(iParam0, 0, func_153(iParam0));
}

void func_148(int iParam0, int iParam1, int iParam2)//Position - 0xA213
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_106();
	func_151(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_150(iParam0, &uVar0);
	Var1 = { func_149(&uVar0) };
}

struct<16> func_149(var uParam0)//Position - 0xA242
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_100(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_99(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_98(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_101(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*uParam0), 64);
	return Var0;
}

void func_150(int iParam0, var uParam1)//Position - 0xA312
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA32A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_101(*uParam0);
	iVar3 = func_100(*uParam0);
	iVar4 = func_99(*uParam0);
	iVar5 = func_98(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA4AC
{
	func_112(uParam0, iParam1);
	func_111(uParam0, iParam2);
	func_110(uParam0, iParam3);
	func_109(uParam0, iParam4);
	func_108(uParam0, iParam5);
	func_107(uParam0, iParam6);
}

int func_153(int iParam0)//Position - 0xA4E4
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

