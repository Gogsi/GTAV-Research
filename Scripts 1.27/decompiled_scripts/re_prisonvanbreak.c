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
		GlobalFunc_6828(-1);
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
					if (!GlobalFunc_6827())
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
					if ((!iLocal_265 && !bLocal_283) && GlobalFunc_6827())
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
					GlobalFunc_587();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}


void func_2()//Position - 0x322
{
	int iVar0;
	
	if (!iLocal_278)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_225[0]) || PED::IS_PED_INJURED(iLocal_225[0]))
		{
			GlobalFunc_200(&uLocal_53, 4);
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
					uLocal_300[0] = GlobalFunc_5666(uLocal_291[0]);
				}
				bLocal_259 = true;
				GlobalFunc_200(&uLocal_53, 5);
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
					uLocal_300[1] = GlobalFunc_5666(uLocal_291[1]);
				}
				bLocal_260 = true;
				GlobalFunc_200(&uLocal_53, 6);
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
							GlobalFunc_200(&uLocal_53, 5);
							GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
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
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
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
						GlobalFunc_4702(5);
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
							GlobalFunc_4702(6);
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
							GlobalFunc_4702(6);
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
			GlobalFunc_200(&uLocal_53, 5);
			GlobalFunc_200(&uLocal_53, 6);
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
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_265 = 1;
		}
	}
	if (iLocal_263 && !GlobalFunc_6827())
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



void func_5()//Position - 0xEC2
{
	func_142();
}


void func_7()//Position - 0xEDC
{
	if (!bLocal_48)
	{
	}
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_11(-1, 0);
	GlobalFunc_7068();
	func_142();
}




void func_11(int iParam0, int iParam1)//Position - 0xF9A
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
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
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
			{
				GlobalFunc_10699(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
				GlobalFunc_200(&uLocal_53, 5);
				GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				GlobalFunc_10699(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_287 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (PED::IS_PED_JACKING(iLocal_222))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_200(&uLocal_53, 5);
					GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
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
				GlobalFunc_200(&uLocal_53, 5);
				TASK::TASK_ENTER_VEHICLE(iLocal_222, iLocal_235, -1, -1, 2f, 8, 0);
				iLocal_264 = 2;
			}
			if (PED::IS_PED_INJURED(iLocal_222) && !PED::IS_PED_INJURED(iLocal_221))
			{
				GlobalFunc_200(&uLocal_53, 6);
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
		GlobalFunc_200(&uLocal_53, 4);
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
				GlobalFunc_10726(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_222))
			{
				GlobalFunc_200(&uLocal_53, 5);
				GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				GlobalFunc_10726(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
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
	if ((!PED::IS_PED_INJURED(iParam0) && !GlobalFunc_111()) && SYSTEM::TIMERA() > 12000)
	{
		GlobalFunc_173(&uLocal_53, 4, iParam0, "RECSBCop1", 0, 1);
		if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
		{
			GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_sscene", 4, 0, 0, 0);
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
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
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
						if (!iLocal_240 && !GlobalFunc_5672("recsb_theaim"))
						{
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_221))
							{
								GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_222))
							{
								GlobalFunc_200(&uLocal_53, 5);
								GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_240 = 1;
						}
						if (iLocal_239 > 45)
						{
							bLocal_49 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_48)
							{
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_225[0]))
								{
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									GlobalFunc_200(&uLocal_53, 4);
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									GlobalFunc_200(&uLocal_53, 4);
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
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
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
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
						if ((!iLocal_241 && !PED::IS_PED_INJURED(iLocal_221)) && !GlobalFunc_5672("recsb_theaim"))
						{
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(iLocal_221))
							{
								GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!PED::IS_PED_INJURED(iLocal_222))
							{
								GlobalFunc_200(&uLocal_53, 5);
								GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
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
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								if (!PED::IS_PED_INJURED(iLocal_225[0]))
								{
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[1]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									GlobalFunc_200(&uLocal_53, 4);
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(iLocal_225[2]))
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									GlobalFunc_200(&uLocal_53, 4);
									GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					GlobalFunc_200(&uLocal_53, 5);
					GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_222, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_222, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					GlobalFunc_200(&uLocal_53, 5);
					GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
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
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_235))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_235, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_221))
					{
						GlobalFunc_10726(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_221, iLocal_235, -1, -1, 2f, 524296, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222))
					{
						GlobalFunc_200(&uLocal_53, 5);
						GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						GlobalFunc_10726(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_222, iLocal_235, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_48)
				{
					if (!PED::IS_PED_INJURED(iLocal_225[0]))
					{
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						GlobalFunc_200(&uLocal_53, 4);
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						GlobalFunc_200(&uLocal_53, 4);
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
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
									if (!GlobalFunc_5672("recsb_coppon"))
									{
										if (!PED::IS_PED_INJURED(iLocal_225[0]))
										{
											GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_225[1]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											GlobalFunc_200(&uLocal_53, 4);
											GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!PED::IS_PED_INJURED(iLocal_225[2]))
										{
											AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											GlobalFunc_200(&uLocal_53, 4);
											GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
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
					if (!GlobalFunc_111())
					{
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_261 = 1;
					}
				}
				else if (!iLocal_263)
				{
					if (!GlobalFunc_111())
					{
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_225[0]))
					{
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[1]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						GlobalFunc_200(&uLocal_53, 4);
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_225[2]))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						GlobalFunc_200(&uLocal_53, 4);
						GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
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
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
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
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_225[0]))
						{
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[1]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!PED::IS_PED_INJURED(iLocal_225[2]))
						{
							AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							GlobalFunc_200(&uLocal_53, 4);
							GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
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
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (!iLocal_265)
			{
				if (PED::IS_PED_INJURED(iLocal_221) && !PED::IS_PED_INJURED(iLocal_222))
				{
					GlobalFunc_200(&uLocal_53, 5);
					GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_225[0]))
				{
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
		if (!GlobalFunc_6827())
		{
			SYSTEM::SETTIMERA(0);
			if (!GlobalFunc_6827())
			{
				GlobalFunc_9034(1);
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
					uLocal_296[iVar0] = GlobalFunc_6829(iLocal_225[iVar0], 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_296[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_221) || (!PED::IS_PED_INJURED(iLocal_221) && !iLocal_276))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_221, 1, iLocal_267);
			uLocal_294 = GlobalFunc_6829(iLocal_221, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_294, 0);
			iLocal_275 = 0;
			iLocal_276 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_222) || (!PED::IS_PED_INJURED(iLocal_222) && !iLocal_277))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_222, 1, iLocal_267);
			uLocal_295 = GlobalFunc_6829(iLocal_222, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_295, 0);
			iLocal_274 = 0;
			iLocal_277 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!GlobalFunc_6827())
		{
			GlobalFunc_9034(1);
		}
	}
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
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[1]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_225[2]))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					GlobalFunc_200(&uLocal_53, 4);
					GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_279 = 1;
			}
		}
	}
	if ((GlobalFunc_6827() && !iLocal_263) && !iLocal_265)
	{
		if (iLocal_282 == 0 && !GlobalFunc_111())
		{
			SYSTEM::SETTIMERA(0);
			if (GlobalFunc_8329() == 0)
			{
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8329() == 1)
			{
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8329() == 2)
			{
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_282++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_282 == 1 && !GlobalFunc_111())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_225[0]))
			{
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[1]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_225[2]))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				GlobalFunc_200(&uLocal_53, 4);
				GlobalFunc_173(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_282++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_282 == 2 && SYSTEM::TIMERA() > 2000) && !GlobalFunc_111())
		{
			if (!PED::IS_PED_INJURED(iLocal_221))
			{
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_222))
			{
				GlobalFunc_200(&uLocal_53, 5);
				GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_282++;
		}
		if ((iLocal_282 == 3 && SYSTEM::TIMERA() > 2000) && !GlobalFunc_111())
		{
			if (!bLocal_49)
			{
				if (!iLocal_262)
				{
					if (!PED::IS_PED_INJURED(iLocal_221))
					{
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_222))
					{
						GlobalFunc_200(&uLocal_53, 5);
						GlobalFunc_173(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						GlobalFunc_10652(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
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
				GlobalFunc_173(&uLocal_53, 4, *uParam0, "RECSBCop1", 0, 1);
				GlobalFunc_10652(&uLocal_53, "recsbau", sParam1, 4, 0, 0, 0);
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
					uLocal_294 = GlobalFunc_6829(iLocal_221, 1, 145);
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
					uLocal_295 = GlobalFunc_6829(iLocal_222, 1, 145);
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
						uLocal_296[iVar0] = GlobalFunc_6829(iLocal_225[iVar0], 1, 145);
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
		if (GlobalFunc_8329() == 0)
		{
			GlobalFunc_173(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (GlobalFunc_8329() == 1)
		{
			GlobalFunc_173(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (GlobalFunc_8329() == 2)
		{
			GlobalFunc_173(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		GlobalFunc_173(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
		GlobalFunc_173(&uLocal_53, 5, iLocal_221, "RECSBRobber1", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_225[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_46 = 1;
	}
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
	Local_42 = { Param0 };
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
			if ((Var1.f_2 - Local_42.f_2) > 50f)
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
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












