#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<6> Local_71 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101[2] = { 0, 0 };
	var uLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	var uLocal_154 = 16;
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
	var uLocal_286 = 0;
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
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	StringCopy(&Local_71, "", 24);
	Local_117 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_134 = -1;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
			}
		}
		func_217();
	}
	if (GlobalFunc_433(256, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_174(Local_50, -1, 0, 0, 0))
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
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_48 == 4) || iLocal_67 > 18)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_217();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DO", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_47)
				{
					case 0:
						if (!bLocal_49)
						{
							if (func_157())
							{
								func_217();
							}
							if (!bLocal_58)
							{
								func_156();
							}
							if (bLocal_58)
							{
								func_155();
							}
						}
						if (bLocal_49)
						{
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						func_147();
						if (iLocal_68 > 3)
						{
							if (!iLocal_91 && !GlobalFunc_111())
							{
								GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_91 = 1;
							}
						}
						switch (iLocal_48)
						{
							case 0:
								func_141();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!iLocal_98)
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_105, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 20f, 20f, 20f, 0, 1, 0))
									{
										func_140();
										GlobalFunc_9559(1);
										iLocal_98 = 1;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 50f, 50f, 50f, 0, 1, 0))
									{
										func_129();
									}
									if (!PED::IS_PED_INJURED(iLocal_57))
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_62, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_48 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_127();
								if (iLocal_67 > 18)
								{
									func_126();
								}
								else if (!GlobalFunc_111())
								{
									func_126();
								}
								break;
							
							case 7:
								func_127();
								func_122();
								break;
							
							case 4:
								func_127();
								func_75();
								if (func_74(Local_111))
								{
									func_56(0);
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (GlobalFunc_9562())
								{
									func_56(0);
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_88)
								{
									if (func_51())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, 23f, 60f, 20f, 0, 1, 0))
										{
											func_56(0);
											GlobalFunc_4956();
											SYSTEM::WAIT(0);
											if (!GlobalFunc_111())
											{
												GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_88 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_50();
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_56))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "f_attack_end", 3))
							{
								GlobalFunc_5653(iLocal_56, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((GlobalFunc_831() && !GlobalFunc_832()) && iLocal_47 != 2)
						{
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_117, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
									{
										iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									GlobalFunc_619(0);
									SYSTEM::WAIT(0);
									GlobalFunc_4956();
									iLocal_47 = 2;
								}
							}
						}
						if (func_44())
						{
							func_50();
						}
						break;
					
					case 2:
						if (GlobalFunc_6568())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
							{
								PED::DELETE_PED(&iLocal_57);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_217();
		}
	}
}

void func_1()//Position - 0x4A7
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		GlobalFunc_9158(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
		{
			uLocal_132 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_golfclub"), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1), ENTITY::GET_ENTITY_ROTATION(iLocal_120[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			OBJECT::DELETE_OBJECT(&(iLocal_120[8]));
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
		if (bLocal_58)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_104))
		{
			HUD::REMOVE_BLIP(&uLocal_104);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_101[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_57);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		iLocal_148 = 1;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_62, 80f, 80f, 80f, 0, 1, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_132)) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]) && !OBJECT::DOES_PICKUP_EXIST(uLocal_132)))
	{
		func_217();
	}
}













void func_14()//Position - 0xB89
{
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iREDomesticCompOrder = GlobalFunc_56() + 1;
	func_18(-1, 0);
	GlobalFunc_7068();
	iLocal_47 = 3;
}




void func_18(int iParam0, int iParam1)//Position - 0xC50
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
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


























int func_44()//Position - 0x21B4
{
	if (PED::IS_PED_INJURED(iLocal_56) && PED::IS_PED_INJURED(iLocal_57))
	{
		return 1;
	}
	return 0;
}






void func_50()//Position - 0x2412
{
	iLocal_47 = 3;
}

int func_51()//Position - 0x241D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_150 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_150, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_150))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}





void func_56(bool bParam0)//Position - 0x2525
{
	if (bParam0)
	{
		if (iLocal_70)
		{
			if (GlobalFunc_10699(&uLocal_154, "REDO2AU", &Local_77, &Local_71, 8, 0, 0))
			{
				iLocal_70 = 0;
			}
		}
	}
	else if ((!iLocal_70 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_61())
	{
		Local_77 = { GlobalFunc_560() };
		Local_71 = { GlobalFunc_2209() };
		GlobalFunc_5105();
		iLocal_70 = 1;
	}
}





int func_61()//Position - 0x261F
{
	if (((((((GlobalFunc_5672("REDO2_DRP") || GlobalFunc_5672("REDO2_UV")) || GlobalFunc_5672("REDO2_UV2")) || GlobalFunc_5672("REDO2_CULT")) || GlobalFunc_5672("REDO2_NEAR")) || GlobalFunc_5672("REDO2_GETOUT")) || GlobalFunc_5672("REDO2_JACK")) || GlobalFunc_5672("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}













int func_74(struct<3> Param0)//Position - 0x2D42
{
	if (GlobalFunc_8329() == 2)
	{
		if (GlobalFunc_831() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_46 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_75()//Position - 0x2DCF
{
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_67 > 18)
			{
				iLocal_69++;
			}
			else if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_57, 1f);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_67 < 19)
					{
						if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_69++;
						}
					}
					else
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 1:
			func_118();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_57))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_120[8]));
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_57))
					{
						func_116();
						func_110();
						if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_69++;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_57, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_110();
			func_109();
			func_118();
			func_108();
			if (SYSTEM::TIMERB() > 1500)
			{
				func_107();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, 10f, 10f, 10f, 0, 1, 0))
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_111, Global_18, 1, 1, 0) && GlobalFunc_552(1, 0, 1))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_99))
						{
							HUD::REMOVE_BLIP(&uLocal_99);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_100))
						{
							HUD::REMOVE_BLIP(&uLocal_100);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_57, 0), 10.5f, 3, 0);
							iLocal_69++;
						}
						else
						{
							iLocal_69 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_105();
			if (bLocal_144)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_76();
			if (bLocal_144)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_76()//Position - 0x2FD4
{
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			GlobalFunc_5105();
			if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			iLocal_142++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				PED::SET_PED_KEEP_TASK(iLocal_57, 1);
				iLocal_143 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_142++;
			}
			break;
		
		case 3:
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_142++;
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				GlobalFunc_159("DOM_GOLF", -1);
				func_103(&(Global_SAVE_DATA.GOLF_COURSE_), 16);
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 1);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 4);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 2);
				}
				GlobalFunc_10829(GlobalFunc_8329(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_142++;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}



























void func_103(var uParam0, int iParam1)//Position - 0x4114
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}


void func_105()//Position - 0x413E
{
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			GlobalFunc_5105();
			if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_142++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_142++;
			break;
		
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				PED::SET_PED_KEEP_TASK(iLocal_57, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
				{
					iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_143 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_142++;
			}
			break;
		
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_143 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_142++;
				}
			}
			break;
		
		case 5:
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_142++;
			}
			break;
		
		case 6:
			if (!GlobalFunc_111())
			{
				GlobalFunc_159("DOM_GOLF", -1);
				func_103(&(Global_SAVE_DATA.GOLF_COURSE_), 16);
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 1);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 4);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_812(&(Global_SAVE_DATA.GOLF_SAVED_STRUCT.GOLF_eGolfSavedFlags), 2);
				}
				GlobalFunc_10829(GlobalFunc_8329(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_142++;
			}
			break;
		
		case 7:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}


void func_107()//Position - 0x4467
{
	if (!func_61())
	{
		func_56(1);
	}
	if (!GlobalFunc_111())
	{
		switch (iLocal_140)
		{
			case 0:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 1:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 2:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 3:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 4:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 5:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 6:
				iLocal_141 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_140++;
				break;
			
			case 7:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 8:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 9:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 10:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 11:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 12:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 13:
				iLocal_141 = MISC::GET_GAME_TIMER() + 600;
				iLocal_140++;
				break;
			
			case 14:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 15:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 16:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 17:
				iLocal_141 = MISC::GET_GAME_TIMER() + 800;
				iLocal_140++;
				break;
			
			case 18:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_140++;
				}
				break;
			
			case 19:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 20:
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_140++;
				break;
			}
	}
}

void func_108()//Position - 0x4992
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (!iLocal_83)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_56(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_83 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_83 = 0;
			}
		}
		if (!iLocal_84)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_84 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_84 = 0;
		}
		if (!iLocal_85)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_85 = 0;
		}
	}
}

void func_109()//Position - 0x4AB7
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_135 == 0)
		{
			iLocal_135 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_136 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_136 = 0;
		iLocal_135 = 0;
	}
	if ((iLocal_136 - iLocal_135) > 60000)
	{
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_114, 200f, 200f, 200f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_57, Local_114, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_57, 1193033728, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			PED::REMOVE_PED_FROM_GROUP(iLocal_57);
		}
		func_50();
	}
}

void func_110()//Position - 0x4B6F
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
				{
					uLocal_101[0] = GlobalFunc_7491(iLocal_57, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					HUD::REMOVE_BLIP(&uLocal_99);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_101[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					uLocal_99 = GlobalFunc_5104(Local_111, 1);
				}
				if (GlobalFunc_8329() == 2 && !GlobalFunc_832())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_100))
					{
						uLocal_100 = GlobalFunc_5104(Local_117, 0);
						HUD::SET_BLIP_SPRITE(uLocal_100, 269);
						GlobalFunc_9564();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
			{
				uLocal_101[0] = GlobalFunc_7491(iLocal_57, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_99))
			{
				HUD::REMOVE_BLIP(&uLocal_99);
			}
		}
	}
}






void func_116()//Position - 0x4DEB
{
	int iVar0;
	
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
	GlobalFunc_200(&uLocal_154, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_120[iVar0]));
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("random@domestic");
}


void func_118()//Position - 0x4E41
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_121())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_57))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_57, 0, 0);
				}
				if (!iLocal_90)
				{
					func_56(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_4716())
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_57))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_57, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
		}
	}
}



int func_121()//Position - 0x4FDD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_122()//Position - 0x50FF
{
	switch (iLocal_68)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_121())
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_68 = 2;
					}
					else
					{
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_68++;
					}
				}
				else
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_68++;
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!func_121())
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_138 = MISC::GET_GAME_TIMER();
						iLocal_68++;
					}
				}
				else
				{
					iLocal_68++;
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_138 = MISC::GET_GAME_TIMER();
				iLocal_68++;
			}
			break;
		
		case 2:
			iLocal_139 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_121())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
						if (GlobalFunc_6569("REDO2_WT"))
						{
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
						}
						iLocal_68++;
					}
					else if (!GlobalFunc_111() && !iLocal_86)
					{
						if (!GlobalFunc_4716())
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_86 = 1;
					}
				}
			}
			if (iLocal_138 != 0)
			{
				if ((iLocal_139 - iLocal_138) > 60000)
				{
					if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
							SYSTEM::WAIT(3000);
							iLocal_48 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				if (iLocal_67 > 18)
				{
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1)));
				TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				SYSTEM::SETTIMERB(0);
				iLocal_68++;
			}
			break;
		
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_57) && !ENTITY::IS_ENTITY_DEAD(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_57, iLocal_120[8], 0);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68 = 7;
					}
				}
				else if (SYSTEM::TIMERB() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_120[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
						TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
						iLocal_68 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_57) && !ENTITY::IS_ENTITY_DEAD(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_57, iLocal_120[8], 0);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_57, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
					GlobalFunc_9563();
					iLocal_48 = 4;
				}
			}
			break;
	}
}




void func_126()//Position - 0x56C7
{
	if (!iLocal_97)
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15000, 0, 2);
				iLocal_97 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_137)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					bLocal_137 = true;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					bLocal_137 = true;
				}
			}
			if (bLocal_137)
			{
				if (bLocal_53)
				{
					GlobalFunc_5105();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						if (!GlobalFunc_111())
						{
							if (PED::IS_PED_FACING_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_48 = 7;
								}
							}
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 7;
					}
				}
			}
		}
	}
}

void func_127()//Position - 0x586A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15f, 15f, 15f, 0, 1, 0))
		{
			if (GlobalFunc_620())
			{
				GlobalFunc_619(0);
				iLocal_89 = 0;
			}
		}
		else if (GlobalFunc_111() && !iLocal_89)
		{
			GlobalFunc_619(1);
			iLocal_89 = 1;
		}
	}
}


void func_129()//Position - 0x58DA
{
	switch (iLocal_67)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_57) && !PED::IS_PED_INJURED(iLocal_56))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 3f))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_67++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_67++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[8], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[8]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!GlobalFunc_111() || GlobalFunc_620())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[9], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_111() || GlobalFunc_620())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_67++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[9], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[9]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!GlobalFunc_111() || GlobalFunc_620())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[10], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[10], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[10]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!GlobalFunc_111() || GlobalFunc_620())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 11:
			if (!PED::IS_PED_INJURED(iLocal_56) && !PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_56, iLocal_57, 0);
					}
				}
			}
			if (!GlobalFunc_111() || GlobalFunc_620())
			{
				GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_67 = 14;
			}
			break;
		
		case 14:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_130();
					iLocal_67++;
				}
			}
			break;
		
		case 15:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_67++;
				}
			}
			break;
		
		case 16:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_108, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				iLocal_67++;
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_56))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_108, 1f, 1f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_56))
					{
						PED::DELETE_PED(&iLocal_56);
					}
				}
			}
			if (iLocal_92 < MISC::GET_GAME_TIMER())
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_92 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_93++;
					}
				}
			}
			if (iLocal_93 > 0)
			{
				iLocal_67++;
			}
			break;
		
		case 18:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(iLocal_57, 1193033728, 0);
						iLocal_67++;
					}
				}
			}
			break;
	}
	if (!bLocal_53)
	{
		if (iLocal_67 > 2 && iLocal_67 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 6f, 4f, 5f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 12f, 12f, 5f, 0, 1, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					func_130();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						GlobalFunc_5105();
						while (GlobalFunc_111())
						{
							SYSTEM::WAIT(0);
						}
						if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_67 > 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 6f, 8f, 5f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_101[0], 1);
					}
					TASK::CLEAR_PED_TASKS(iLocal_57);
					func_130();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						GlobalFunc_4956();
						while (GlobalFunc_111())
						{
							SYSTEM::WAIT(0);
						}
						if (GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (iLocal_54 < MISC::GET_GAME_TIMER())
		{
			GlobalFunc_5105();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				func_130();
			}
			iLocal_48 = 3;
		}
	}
}

void func_130()//Position - 0x6092
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_108, 1f, -1, 1193033728, 1056964608);
		TASK::TASK_PLAY_ANIM(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}










void func_140()//Position - 0x6663
{
	if (HUD::DOES_BLIP_EXIST(uLocal_104))
	{
		HUD::REMOVE_BLIP(&uLocal_104);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
	{
		uLocal_101[0] = GlobalFunc_7491(iLocal_57, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_101[0], 0);
	}
}

void func_141()//Position - 0x669F
{
	GlobalFunc_8536(39, 1);
	GlobalFunc_8536(40, 1);
	GlobalFunc_8536(41, 1);
	GlobalFunc_8536(42, 1);
	GlobalFunc_8536(43, 1);
	MISC::CLEAR_AREA(Local_62, 2f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_59, 2f, 1, 0, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_111 - Vector(3f, 2f, 2f), Local_111 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &uLocal_151);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_151, 1862763509);
	iLocal_56 = PED::CREATE_PED(26, iLocal_95, Local_59, fLocal_65, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_56, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_56, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 2, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 8, 0);
	TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, uLocal_151);
	GlobalFunc_5122(iLocal_56, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
	PED::SET_PED_CONFIG_FLAG(iLocal_56, 185, 1);
	iLocal_57 = PED::CREATE_PED(26, iLocal_96, Local_62, fLocal_66, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 1, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 2, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 65536, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 185, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 206, 1);
	PED::SET_PED_HELMET(iLocal_57, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 0);
	TASK::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, uLocal_151);
	GlobalFunc_5122(iLocal_57, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_57, iLocal_56, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_56, iLocal_57, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 2, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 8, 0, 0, 0);
	func_143();
	MISC::SET_BIT(&uLocal_133, 5);
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_1286(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_1286(&uLocal_154, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_1286(&uLocal_154, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	GlobalFunc_1286(&uLocal_154, 3, iLocal_57, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_57, sLocal_152);
	GlobalFunc_1286(&uLocal_154, 4, iLocal_56, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_56, sLocal_153);
	SYSTEM::SETTIMERA(0);
	iLocal_149 = 1;
}


void func_143()//Position - 0x6A8E
{
	iLocal_120[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[0], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_tshirt_02"));
	iLocal_120[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[1], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_02"));
	iLocal_120[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[2], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_01"));
	iLocal_120[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[3], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_01"));
	iLocal_120[4] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[4], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_02"));
	iLocal_120[5] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[5], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shirt_01"));
	iLocal_120[6] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[6], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_03"));
	iLocal_120[7] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[7], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_01"));
	iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_120[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_rub_binbag_01"));
	iLocal_120[10] = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_golf_bag_01"));
}




void func_147()//Position - 0x6DFA
{
	if (!PED::IS_PED_INJURED(iLocal_57) && !PED::IS_PED_INJURED(iLocal_56))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_57, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_56, PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_57) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_57)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_56)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_56))
				{
					if (iLocal_134 == -1)
					{
						iLocal_134 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_134 = -1;
				}
			}
			if ((iLocal_134 != -1 && MISC::GET_GAME_TIMER() > iLocal_134 + 500) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_154();
			}
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_154();
	}
	if (iLocal_48 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (func_153(iLocal_57))
			{
				func_152();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_151();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (func_150(iLocal_56))
		{
			func_148();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (func_150(iLocal_57) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_148();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (func_150(iLocal_56) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_148();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 250f, 250f, 250f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_WATER(iLocal_57))
		{
			iLocal_48 = 11;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_148();
	}
}

void func_148()//Position - 0x6FBD
{
	GlobalFunc_4956();
	SYSTEM::WAIT(0);
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_149();
	SYSTEM::WAIT(0);
	func_50();
	iLocal_48 = 11;
}

void func_149()//Position - 0x705A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::TASK_COWER(iLocal_56, -1);
		PED::SET_PED_KEEP_TASK(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_150(int iParam0)//Position - 0x70A6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151()//Position - 0x70D3
{
	func_149();
	GlobalFunc_4956();
	SYSTEM::WAIT(0);
	GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_152()//Position - 0x714B
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::TASK_SMART_FLEE_COORD(iLocal_57, ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1), 150f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
	}
	iLocal_48 = 11;
}

int func_153(int iParam0)//Position - 0x718A
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_154()//Position - 0x71DF
{
	GlobalFunc_4956();
	SYSTEM::WAIT(0);
	GlobalFunc_10652(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_155()//Position - 0x7256
{
	STREAMING::REQUEST_MODEL(iLocal_95);
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");
	if ((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_95) && STREAMING::HAS_MODEL_LOADED(iLocal_96)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_iron_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_rub_binbag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_bag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_tshirt_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shirt_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic")) && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_49 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_95);
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}
}

void func_156()//Position - 0x7427
{
	Local_105 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_95 = joaat("a_f_y_business_02");
	iLocal_96 = joaat("a_m_y_golfer_01");
	sLocal_152 = "REDOCastro";
	sLocal_153 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_59 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_65 = 348.9152f;
	Local_62 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_66 = 156.0666f;
	Local_108 = { -469.082f, 535.0479f, 123.3553f };
	Local_111 = { -1378.273f, 40.2254f, 52.6774f };
	Local_114 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_58 = true;
}

int func_157()//Position - 0x74CC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

















int func_174(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x917D
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
	Local_43 = { Param0 };
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
		if (GlobalFunc_2(0))
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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











































void func_217()//Position - 0xA7C5
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		GlobalFunc_9158(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
		if (bLocal_58)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_56, 317, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_104))
		{
			HUD::REMOVE_BLIP(&uLocal_104);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_101[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_57, 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_57);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












