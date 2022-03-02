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
	int iLocal_232 = 0;
	struct<3> Local_233 = { 0, 0, 0 } ;
	float fLocal_236 = 0f;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<3> Local_239 = { 0, 0, 0 } ;
	float fLocal_242 = 0f;
	int iLocal_243 = 0;
	struct<3> Local_244 = { 0, 0, 0 } ;
	float fLocal_247 = 0f;
	int iLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	float fLocal_252 = 0f;
	int iLocal_253 = 0;
	struct<3> Local_254 = { 0, 0, 0 } ;
	float fLocal_257 = 0f;
	float fLocal_258 = 0f;
	int iLocal_259 = 0;
	struct<3> Local_260 = { 0, 0, 0 } ;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	int iLocal_265 = 0;
	struct<3> Local_266 = { 0, 0, 0 } ;
	float fLocal_269 = 0f;
	float fLocal_270 = 0f;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	struct<3> Local_273 = { 0, 0, 0 } ;
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	char* sLocal_278 = NULL;
	char* sLocal_279 = NULL;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	var uLocal_286 = 0;
	int iLocal_287 = 0;
	struct<2> Local_288 = { 0, 0 } ;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
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
	iLocal_232 = 2;
	Local_233 = { 1373.39f, -2072.44f, 51.38f };
	fLocal_236 = 137.37f;
	iLocal_237 = 1;
	iLocal_238 = joaat("cs_fbisuit_01");
	Local_239 = { 1372.2f, -2073.76f, 51.12f };
	fLocal_242 = -38.38f;
	iLocal_243 = joaat("frogger");
	Local_244 = { 1368.5f, -2076.7f, 51f };
	fLocal_247 = -15.08f;
	iLocal_248 = 1;
	Local_249 = { 1373.42f, -2079.67f, 51f };
	fLocal_252 = -78.9f;
	iLocal_253 = joaat("utillitruck3");
	Local_254 = { 1390.31f, -2050.63f, 51f };
	fLocal_257 = 74.2f;
	fLocal_258 = 0.19f;
	iLocal_259 = joaat("utillitruck2");
	Local_260 = { 1400.29f, -2053.63f, 51f };
	fLocal_263 = 166.8f;
	fLocal_264 = 0.37f;
	iLocal_265 = joaat("fbi2");
	Local_266 = { 1365.29f, -2065.67f, 51f };
	fLocal_269 = -83.3f;
	fLocal_270 = 0f;
	Local_273 = { 1372.64f, -2073.13f, 51f };
	sLocal_276 = "MISSFBI2_intro";
	sLocal_277 = "TrevFIB_talkLoop_FIB";
	sLocal_278 = "TrevFIB_talkLoop_trev";
	sLocal_279 = "FR_byBike";
	iLocal_287 = -1;
	StringCopy(&Local_288, "", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_363();
	}
	SYSTEM::WAIT(0);
	func_353();
	func_16();
	GlobalFunc_576();
	while (iLocal_231 && 1 | func_6(3, 0))
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(Global_89748))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_89748, 1);
			PED::SET_PED_KEEP_TASK(Global_89748, 1);
		}
		switch (iLocal_64)
		{
			case 0:
				if (GlobalFunc_6547())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_6547())
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
	func_363();
}

void func_1()//Position - 0x266
{
	iLocal_231 = 0;
}

int func_2()//Position - 0x271
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_283, 1);
	iVar4 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		Var5 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_287, 13000f, &Local_288) };
		iVar8 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var5, 30f, 0, 4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar8) && iVar8 != iVar4)
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar8) > 5f)
			{
				iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar8, -1);
				if (!PED::IS_PED_INJURED(iVar9))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar8, 1), Var5) > (8f * 8f))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(iVar9, iVar8, 24, 500);
					}
				}
			}
		}
	}
	if (fVar3 > 500f)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_3))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_2))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_4))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_5))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_6))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_9))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_7))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_8))
	{
	}
	return 0;
}




int func_6(int iParam0, int iParam1)//Position - 0x42B
{
	struct<3> Var0;
	float fVar3;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (GlobalFunc_39(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!GlobalFunc_2987(iParam0, GlobalFunc_8310()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == GlobalFunc_217(Global_89748) && iParam1 != 0)
		{
			Global_89748 = 0;
		}
	}
	return 1;
}










void func_16()//Position - 0x733
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 400)
	{
		bVar1 = true;
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89748))
		{
			if (iLocal_65 != 76)
			{
				bVar1 = false;
			}
		}
		if (iLocal_232 != 145)
		{
			GlobalFunc_7215(iLocal_232);
			if (!GlobalFunc_7214(iLocal_232))
			{
				GlobalFunc_7215(iLocal_232);
				bVar1 = false;
			}
		}
		if (iLocal_237 != 145)
		{
			GlobalFunc_7215(iLocal_237);
			if (!GlobalFunc_7214(iLocal_237))
			{
				GlobalFunc_7215(iLocal_237);
				bVar1 = false;
			}
		}
		if (iLocal_238 != 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_238);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_238))
			{
				STREAMING::REQUEST_MODEL(iLocal_238);
				bVar1 = false;
			}
		}
		if (iLocal_248 != 145)
		{
			GlobalFunc_7046(iLocal_248, 2);
			if (!GlobalFunc_7045(iLocal_248, 2))
			{
				GlobalFunc_7046(iLocal_248, 2);
				bVar1 = false;
			}
		}
		if (iLocal_243 != 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_243);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_243))
			{
				STREAMING::REQUEST_MODEL(iLocal_243);
				bVar1 = false;
			}
		}
		if (iLocal_253 != 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_253);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_253))
			{
				STREAMING::REQUEST_MODEL(iLocal_253);
				bVar1 = false;
			}
		}
		if (iLocal_259 != 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_259);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_259))
			{
				STREAMING::REQUEST_MODEL(iLocal_259);
				bVar1 = false;
			}
		}
		if (iLocal_265 != 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_265);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
			{
				STREAMING::REQUEST_MODEL(iLocal_265);
				bVar1 = false;
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_276))
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_276);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_276))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_276);
				bVar1 = false;
			}
		}
		if (iLocal_287 >= 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_288))
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_287, &Local_288);
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_287, &Local_288))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_287, &Local_288);
				bVar1 = false;
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
	if (iLocal_248 != 145)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_3))
		{
			GlobalFunc_10543(&(Global_89491.f_3), iLocal_248, Local_249, fLocal_252, 1, 2);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_89491.f_3);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_89491.f_3, 1);
		}
	}
	if (iLocal_243 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_2))
		{
			Global_89491.f_2 = VEHICLE::CREATE_VEHICLE(iLocal_243, Local_244, fLocal_247, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_89491.f_2);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_89491.f_2, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_89491.f_2, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_89491.f_2, 1);
		}
	}
	if (iLocal_253 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_4))
		{
			Global_89491.f_4 = VEHICLE::CREATE_VEHICLE(iLocal_253, Local_254, fLocal_257, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_89491.f_4);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_89491.f_4, 1);
			iVar2 = 1;
			while (iVar2 <= 8)
			{
				VEHICLE::SET_VEHICLE_EXTRA(Global_89491.f_4, iVar2, true);
				iVar2++;
			}
			VEHICLE::SET_VEHICLE_EXTRA(Global_89491.f_4, 1, false);
			VEHICLE::SET_VEHICLE_EXTRA(Global_89491.f_4, 3, false);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_89491.f_4, fLocal_258);
		}
	}
	if (iLocal_259 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_5))
		{
			Global_89491.f_5 = VEHICLE::CREATE_VEHICLE(iLocal_259, Local_260, fLocal_263, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_89491.f_5);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_89491.f_5, 1);
			iVar2 = 1;
			while (iVar2 <= 8)
			{
				VEHICLE::SET_VEHICLE_EXTRA(Global_89491.f_5, iVar2, true);
				iVar2++;
			}
			VEHICLE::SET_VEHICLE_EXTRA(Global_89491.f_5, 3, false);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_89491.f_5, fLocal_264);
		}
	}
	if (iLocal_265 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_6))
		{
			Global_89491.f_6 = VEHICLE::CREATE_VEHICLE(iLocal_265, Local_266, fLocal_269, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_89491.f_6);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_89491.f_6, 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_89491.f_6, fLocal_270);
		}
	}
	if (iLocal_238 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_9))
		{
			Global_89491.f_9 = PED::CREATE_PED(26, iLocal_238, Local_239, fLocal_242, 1, 1);
		}
	}
	if (iLocal_232 != 145)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_7))
		{
			func_133(&(Global_89491.f_7), iLocal_232, Local_233, fLocal_236, 1, 0, 0);
			GlobalFunc_11267(Global_89491.f_7, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11267(Global_89491.f_7, 4, 91, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_89491.f_7, 6, 10, 0, 0);
		}
	}
	if (iLocal_237 != 145)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_89491.f_8))
		{
			func_133(&(Global_89491.f_8), iLocal_237, Local_249, fLocal_247, 1, 0, 0);
			GlobalFunc_11267(Global_89491.f_8, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_276))
	{
		uLocal_271 = PED::CREATE_SYNCHRONIZED_SCENE(Local_273, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_271, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_89491.f_9, uLocal_271, sLocal_276, sLocal_277, 8f, -8f, 1, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_89491.f_7, uLocal_271, sLocal_276, sLocal_278, 8f, -8f, 1, 0, 1148846080, 0);
		uLocal_272 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_272, Global_89491.f_3, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_89491.f_3, "seat_f"));
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_272, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_89491.f_8, uLocal_272, sLocal_276, sLocal_279, 8f, -8f, 0, 0, 1148846080, 0);
	}
	GlobalFunc_173(&uLocal_66, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89748, 1, 1);
		GlobalFunc_173(&uLocal_66, 4, Global_89748, "Dave", 0, 1);
	}
	Global_89491.f_10 = 1;
}





















































































































int func_133(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1CBDF
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			func_304(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11325(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7714(*uParam0);
			GlobalFunc_11336(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}











































































































































































int func_304(int iParam0, int iParam1, bool bParam2)//Position - 0x4B257
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = GlobalFunc_7681();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}

















































void func_353()//Position - 0x50105
{
	char[] cVar0[8];
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &uLocal_280, &uLocal_286, &cVar0);
	func_354(iLocal_65, &Local_288, &iLocal_287, &uVar8, &uVar9, &uVar10, &uVar11, &uVar12);
	switch (iLocal_65)
	{
		case 75:
			Local_283 = { 1370f, -2034f, 50f };
			iLocal_232 = 2;
			Local_233 = { 1373.39f, -2072.44f, 51.38f };
			fLocal_236 = 137.37f;
			iLocal_237 = 1;
			iLocal_238 = joaat("cs_fbisuit_01");
			Local_239 = { 1372.2f, -2073.76f, 51.12f };
			fLocal_242 = -38.38f;
			iLocal_243 = joaat("frogger");
			Local_244 = { 1368.5f, -2076.7f, 51f };
			fLocal_247 = -15.08f;
			iLocal_248 = 1;
			Local_249 = { 1373.42f, -2079.67f, 51f };
			fLocal_252 = -78.9f;
			iLocal_253 = joaat("utillitruck3");
			Local_254 = { 1390.31f, -2050.63f, 51f };
			fLocal_257 = 74.2f;
			fLocal_258 = 0.19f;
			iLocal_259 = joaat("utillitruck2");
			Local_260 = { 1400.29f, -2053.63f, 51f };
			fLocal_263 = 166.8f;
			fLocal_264 = 0.37f;
			iLocal_265 = joaat("fbi2");
			Local_266 = { 1365.29f, -2065.67f, 51f };
			fLocal_269 = -83.3f;
			fLocal_270 = 0f;
			Local_273 = { 1372.64f, -2073.13f, 51f };
			sLocal_276 = "MISSFBI2_intro";
			sLocal_277 = "TrevFIB_talkLoop_FIB";
			sLocal_278 = "TrevFIB_talkLoop_trev";
			sLocal_279 = "FR_byBike";
			break;
		
		case 76:
			Local_283 = { -710.0626f, 5310.549f, 70.605f };
			iLocal_232 = 145;
			Local_233 = { 0f, 0f, 0f };
			fLocal_236 = 0f;
			iLocal_237 = 145;
			iLocal_238 = 0;
			Local_239 = { 0f, 0f, 0f };
			fLocal_242 = 0f;
			iLocal_243 = 0;
			Local_244 = { 0f, 0f, 0f };
			fLocal_247 = 0f;
			iLocal_248 = 145;
			Local_249 = { 0f, 0f, 0f };
			fLocal_252 = 0f;
			iLocal_253 = 0;
			Local_254 = { 0f, 0f, 0f };
			fLocal_257 = 0f;
			fLocal_258 = 0.19f;
			iLocal_259 = 0;
			Local_260 = { 0f, 0f, 0f };
			fLocal_263 = 0f;
			fLocal_264 = 0.37f;
			iLocal_265 = 0;
			Local_266 = { 0f, 0f, 0f };
			fLocal_269 = 0f;
			fLocal_270 = 0f;
			Local_273 = { 0f, 0f, 0f };
			sLocal_276 = "";
			sLocal_277 = "";
			sLocal_278 = "";
			sLocal_279 = "";
			break;
		
		default:
			break;
	}
	Global_89491.f_10 = 0;
}

int func_354(int iParam0, char* sParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x50348
{
	switch (iParam0)
	{
		case 231:
			StringCopy(sParam1, "lkexcile2_chase", 16);
			*iParam2 = 100;
			*uParam3 = 6500f;
			*uParam4 = 12700f;
			*uParam5 = (5000f + 12700f);
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		
		case 75:
			StringCopy(sParam1, "scene_m_fbi2_", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 6200f;
			*uParam5 = (5000f + 6200f);
			*uParam6 = 0.4f;
			*uParam7 = 0.8f;
			return 1;
			break;
		
		case 76:
			StringCopy(sParam1, "scene_f_fra2_", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam5 = 8500f;
			*uParam4 = 4750f;
			*uParam6 = 0.4f;
			*uParam7 = 0.7f;
			return 1;
			break;
		
		case 173:
			StringCopy(sParam1, "scene_m_biking", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		
		case 281:
			StringCopy(sParam1, "scene_t_chaseA", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 7500f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		
		case 282:
			StringCopy(sParam1, "scene_t_chaseB", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
			break;
		
		case 283:
			StringCopy(sParam1, "scene_t_chaseC", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.9f;
			*uParam7 = 1.1f;
			return 1;
			break;
		
		case 284:
			StringCopy(sParam1, "scene_t_chaseD", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		
		case 275:
			StringCopy(sParam1, "scene_t_policeA", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 1;
			break;
		
		case 276:
			StringCopy(sParam1, "scene_t_policeB", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
		
		case 277:
			StringCopy(sParam1, "scene_t_policeC", 16);
			*iParam2 = 1;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 1;
			break;
	}
	StringCopy(sParam1, "", 16);
	*iParam2 = -1;
	*uParam3 = -1f;
	*uParam4 = -1f;
	*uParam5 = -1f;
	*uParam6 = 0f;
	*uParam7 = 0f;
	return 0;
}









void func_363()//Position - 0x557B7
{
	if (iLocal_232 != 145)
	{
		GlobalFunc_7539(iLocal_232);
	}
	if (iLocal_237 != 145)
	{
		GlobalFunc_7539(iLocal_237);
	}
	if (iLocal_238 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_238);
	}
	if (iLocal_248 != 145)
	{
		GlobalFunc_7516(iLocal_248, 2);
	}
	if (iLocal_243 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243);
	}
	if (iLocal_253 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_253);
	}
	if (iLocal_259 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
	}
	if (iLocal_265 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_276))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_276);
	}
	if (iLocal_287 >= 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_288))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_287, &Local_288);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



