#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<6> Local_48[11];
	struct<4> Local_115[5];
	char* sLocal_136 = NULL;
	char* sLocal_137 = NULL;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 2;
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
	int iLocal_170 = 0;
	int iLocal_171[1] = { 0 };
	var uLocal_173 = 16;
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
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
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
	iLocal_0 = 3;
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
	sLocal_136 = "RE_SeaPlane1";
	sLocal_137 = "RE_SeaPlane2";
	Local_138 = { 0f, 0f, 0f };
	Local_144 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_150 = -1;
	iLocal_151 = -1;
	iLocal_152 = joaat("dodo");
	iLocal_153 = joaat("tropic");
	iLocal_154 = joaat("g_m_y_mexgoon_02");
	iLocal_155 = joaat("suntrap");
	iLocal_156 = joaat("g_m_y_armgoon_02");
	Local_141 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (GlobalFunc_115(Local_115[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_115[0 /*4*/], 2);
		}
		func_168(1, 0);
	}
	if (func_167() && func_124(Local_141, 32, 0, 0, 1))
	{
		func_121(32);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_120(1)) || func_120(4))
		{
			if (func_120(7))
			{
				func_81();
			}
			switch (iLocal_46)
			{
				case 0:
					func_34();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (GlobalFunc_115(Local_115[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_115[0 /*4*/], 2);
			}
			func_168(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x188
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_147)
			{
				case 0:
					iLocal_47 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1CC
{
	GlobalFunc_4927(66, 1);
	GlobalFunc_4927(67, 1);
	func_6(-1, 0);
	GlobalFunc_7068();
	func_168(1, 0);
}




void func_6(int iParam0, int iParam1)//Position - 0x275
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8917(), 0, 138, 0);
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




























void func_34()//Position - 0x1870
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_47)
	{
		case 0:
			func_68();
			func_67(7);
			STREAMING::REQUEST_MODEL(iLocal_153);
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_147)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_153))
					{
						STREAMING::REQUEST_MODEL(iLocal_152);
						iLocal_147++;
					}
					break;
				
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_152))
					{
						STREAMING::REQUEST_MODEL(iLocal_154);
						iLocal_147++;
					}
					break;
				
				case 2:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_154))
					{
						STREAMING::REQUEST_MODEL(iLocal_155);
						iLocal_147++;
					}
					break;
				
				case 3:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_155))
					{
						STREAMING::REQUEST_MODEL(iLocal_156);
						iLocal_147++;
					}
					break;
				
				case 4:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_156))
					{
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_136);
						iLocal_147++;
					}
					break;
				
				case 5:
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_136))
					{
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_137);
						iLocal_147++;
					}
					break;
				
				case 6:
					if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_153) && STREAMING::HAS_MODEL_LOADED(iLocal_152)) && STREAMING::HAS_MODEL_LOADED(iLocal_154)) && STREAMING::HAS_MODEL_LOADED(iLocal_156)) && STREAMING::HAS_MODEL_LOADED(iLocal_155)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_136)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_137))
					{
						func_63(0, Local_138, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152);
						func_63(1, Local_138, -1082130432, 0);
						func_63(2, Local_138, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_54(iVar0, 0, Local_138, -1082130432);
							iVar0++;
						}
						GlobalFunc_9034(1);
						iLocal_147++;
					}
					break;
				
				case 7:
					if (func_43())
					{
						GlobalFunc_846(&(Local_115[0 /*4*/].f_1));
						func_67(1);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_170);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_170, 1862763509);
						func_63(3, Local_138, -1082130432, 0);
						func_63(4, Local_138, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_155);
						func_54(7, 0, Local_138, -1082130432);
						func_54(8, 0, Local_138, -1082130432);
						func_54(9, 0, Local_138, -1082130432);
						func_54(10, 0, Local_138, -1082130432);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_156);
						iLocal_147++;
					}
					if (func_41())
					{
						if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_170);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_170, 1862763509);
						}
						else if (!func_120(2))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_170);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_170, 1862763509);
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_38(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_147++;
					}
					break;
				
				case 9:
					if (GlobalFunc_115(Local_115[0 /*4*/]))
					{
						if (GlobalFunc_879(PLAYER::PLAYER_PED_ID(), Local_144, 1) >= 200f && GlobalFunc_879(Local_115[0 /*4*/], Local_144, 1) >= 200f)
						{
							iLocal_47 = 2;
						}
					}
					else
					{
						func_36();
					}
					break;
			}
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_35(int iParam0)//Position - 0x1BAF
{
	iLocal_147 = 0;
	iLocal_47 = 0;
	iLocal_46 = iParam0;
}

void func_36()//Position - 0x1BC1
{
	if (GlobalFunc_115(Local_115[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_115[0 /*4*/], 2);
	}
	func_168(1, 0);
}


int func_38(int iParam0, bool bParam1)//Position - 0x1C1E
{
	int iVar0;
	
	if (!GlobalFunc_115(Local_48[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (GlobalFunc_850(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 1) >= 400f)
		{
			func_39(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !HUD::DOES_BLIP_EXIST(Local_48[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)//Position - 0x1C85
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*6*/]))
	{
		GlobalFunc_846(&(Local_48[iParam0 /*6*/].f_1));
		if ((((GlobalFunc_115(Local_48[iParam0 /*6*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_48[iParam0 /*6*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 1)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_48[iParam0 /*6*/]))
		{
			ENTITY::DETACH_ENTITY(Local_48[iParam0 /*6*/], 1, 1);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_48[iParam0 /*6*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_48[iParam0 /*6*/]));
		}
		Local_48[iParam0 /*6*/].f_3 = 0;
		Local_48[iParam0 /*6*/].f_2 = 0;
	}
}


bool func_41()//Position - 0x1D89
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, 1, 0);
}


int func_43()//Position - 0x1DDF
{
	if (GlobalFunc_115(Local_115[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_115[0 /*4*/], 0))
	{
		return 1;
	}
	return 0;
}











int func_54(int iParam0, bool bParam1, struct<3> Param2, float fParam5)//Position - 0x2365
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	bool bVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	bool bVar65;
	bool bVar66;
	int iVar67;
	bool bVar68;
	int iVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	char* sVar74;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*6*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_138 };
		Var12 = { Local_138 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		fVar27 = 125f;
		iVar28 = iLocal_170;
		iVar29 = 1;
		iVar30 = 1;
		iVar31 = 0;
		iVar32 = 1;
		iVar33 = 1;
		bVar34 = false;
		iVar35 = 0;
		iVar36 = 0;
		iVar37 = 0;
		iVar38 = 1;
		iVar39 = 1;
		iVar40 = 1;
		bVar41 = false;
		iVar42 = 1;
		iVar43 = 0;
		iVar44 = 1;
		iVar45 = 1;
		iVar46 = 1;
		iVar47 = 1;
		iVar48 = 1;
		bVar49 = true;
		bVar50 = false;
		iVar51 = 0;
		iVar52 = 0;
		iVar53 = 0;
		iVar54 = 0;
		bVar55 = false;
		iVar56 = 1;
		iVar57 = 0;
		bVar58 = false;
		iVar59 = 0;
		iVar60 = 1;
		bVar61 = true;
		iVar62 = 0;
		iVar63 = 0;
		iVar64 = 0;
		bVar65 = false;
		bVar66 = false;
		iVar67 = 0;
		bVar68 = false;
		iVar69 = 0;
		bVar70 = false;
		bVar71 = false;
		iVar72 = 0;
		iVar73 = 0;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_156;
				iVar6 = Local_115[1 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 1:
				iVar4 = iLocal_156;
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_115[1 /*4*/], 0f, -1.7f, 0.9f) };
				fVar3 = (ENTITY::GET_ENTITY_HEADING(Local_115[1 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 2:
				iVar4 = iLocal_154;
				iVar6 = Local_115[2 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 3:
				iVar4 = iLocal_154;
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_115[2 /*4*/], 0f, -1.5f, 0.9f) };
				fVar3 = (ENTITY::GET_ENTITY_HEADING(Local_115[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 4:
				iVar4 = iLocal_154;
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_115[2 /*4*/], 0f, -2.3f, 0.9f) };
				fVar3 = (ENTITY::GET_ENTITY_HEADING(Local_115[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 7:
				iVar4 = iLocal_154;
				iVar6 = Local_115[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 8:
				iVar4 = iLocal_154;
				iVar6 = Local_115[3 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 9:
				iVar4 = iLocal_156;
				iVar6 = Local_115[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 10:
				iVar4 = iLocal_156;
				iVar6 = Local_115[4 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!GlobalFunc_100(Param2, Local_138))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (GlobalFunc_115(iVar6))
		{
			Local_48[iParam0 /*6*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar6, 26, iVar4, iVar7, 1, 1);
		}
		else
		{
			Local_48[iParam0 /*6*/] = PED::CREATE_PED(26, iVar4, Var0, fVar3, 1, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_48[iParam0 /*6*/], iVar42, 0);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_48[iParam0 /*6*/], !bVar66, 0);
		}
		if (bVar41)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_48[iParam0 /*6*/], Var0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar28 == iLocal_170)
			{
				Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_48[iParam0 /*6*/], iVar60);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 213, iVar29);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 212, iVar30);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], iVar31);
		PED::SET_PED_KEEP_TASK(Local_48[iParam0 /*6*/], iVar32);
		PED::SET_PED_DIES_WHEN_INJURED(Local_48[iParam0 /*6*/], iVar33);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 188, iVar56);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 42, !bVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 9, iVar36);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 3, iVar38);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 342, bVar58);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[iParam0 /*6*/], iVar37);
		PED::SET_PED_ARMOUR(Local_48[iParam0 /*6*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 8, iVar40);
		ENTITY::SET_ENTITY_VISIBLE(Local_48[iParam0 /*6*/], iVar39);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_48[iParam0 /*6*/], iVar43);
		WEAPON::GIVE_WEAPON_TO_PED(Local_48[iParam0 /*6*/], iVar5, -1, iVar35, iVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 2, iVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, iVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 52, iVar46);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 13, iVar69);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_48[iParam0 /*6*/], iVar47);
		PED::SET_PED_CAN_BE_TARGETTED(Local_48[iParam0 /*6*/], iVar48);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 118, bVar49);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 115, bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 12, iVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 36, iVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 35, iVar53);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 29, iVar54);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 185, bVar55);
		PED::SET_PED_TO_LOAD_COVER(Local_48[iParam0 /*6*/], iVar57);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 17, iVar63);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 5, iVar72);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 46, iVar73);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_48[iParam0 /*6*/], iVar64);
		AUDIO::STOP_PED_SPEAKING(Local_48[iParam0 /*6*/], iVar59);
		func_58(Local_48[iParam0 /*6*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*6*/], iVar67);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*6*/], 203, bVar68);
		PED::_0xA9B61A329BFDCBEA(Local_48[iParam0 /*6*/], !bVar68);
		if (!bVar61)
		{
			func_57(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar74))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_48[iParam0 /*6*/], sVar74, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_48[iParam0 /*6*/]) || iVar62)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_48[iParam0 /*6*/], iVar17);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_48[iParam0 /*6*/], iVar17);
		}
		if (iVar19 > 0)
		{
			PED::SET_PED_ACCURACY(Local_48[iParam0 /*6*/], iVar19);
		}
		if (fVar27 >= 0f)
		{
			PED::SET_PED_HEARING_RANGE(Local_48[iParam0 /*6*/], fVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_48[iParam0 /*6*/], fVar20, fVar21);
		}
		if (bVar70)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_48[iParam0 /*6*/], Var0, 5f, 0, 0);
		}
		if (bVar71)
		{
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_48[iParam0 /*6*/]);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_48[iParam0 /*6*/], iVar28);
		if (ENTITY::DOES_ENTITY_EXIST(uVar8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_48[iParam0 /*6*/], uVar8, -1, Var9, Var12, 1, 1, 1, 0, 2, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_48[iParam0 /*6*/], 0);
			func_57(iParam0, 1);
		}
		func_56(iParam0);
		func_55(iParam0);
		if (iVar15 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_48[iParam0 /*6*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_48[iParam0 /*6*/], iVar5, 1);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_48[iParam0 /*6*/], iVar16);
		if (bVar65)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_48[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_55(int iParam0)//Position - 0x2AA1
{
	if (GlobalFunc_115(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_56(int iParam0)//Position - 0x2AC6
{
	if (GlobalFunc_115(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 1, 2, 0);
				break;
			
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 10:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			}
	}
}

void func_57(int iParam0, int iParam1)//Position - 0x2CAD
{
	MISC::SET_BIT(&(Local_48[iParam0 /*6*/].f_2), iParam1);
}

void func_58(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2CC3
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		PED::SET_PED_SEEING_RANGE(uParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(uParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(uParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(uParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(uParam0, fParam5);
	}
}





int func_63(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x2E35
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	struct<3> Var27;
	struct<3> Var30;
	var uVar33;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_115[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = 1;
		iVar7 = 1;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 1;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		iVar20 = 0;
		bVar21 = false;
		iVar22 = 1;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_144 };
				fVar3 = 163.5528f;
				iVar4 = iLocal_152;
				bVar13 = false;
				iVar18 = 1;
				iVar19 = 0;
				bVar21 = true;
				iVar8 = 1;
				break;
			
			case 1:
				Var0 = { 3087.114f, 2195.558f, 2f };
				fVar3 = 157.68f;
				iVar4 = iLocal_155;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 2:
				Var0 = { 3092.788f, 2197.243f, 2f };
				fVar3 = -22.32f;
				iVar4 = iLocal_153;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 3:
				Var0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar3 = 341.1273f;
				iVar4 = iLocal_153;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 4:
				Var0 = { 3227.12f, 2074.91f, 0.75f };
				fVar3 = 175.16f;
				iVar4 = iLocal_155;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!GlobalFunc_100(Param1, Local_138))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_115[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar4, Var0, fVar3, 1, 1);
		func_66(iParam0);
		func_65(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_115[iParam0 /*4*/], iVar7);
		if (ENTITY::DOES_ENTITY_EXIST(uVar26))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_115[iParam0 /*4*/], uVar26, -1, Var27, Var30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_115[iParam0 /*4*/], iVar6, 0);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_115[iParam0 /*4*/], iVar8);
		ENTITY::FREEZE_ENTITY_POSITION(Local_115[iParam0 /*4*/], iVar9);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_115[iParam0 /*4*/], iVar10);
		if (bVar11)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_115[iParam0 /*4*/], bVar11, 1);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(Local_115[iParam0 /*4*/], iVar14);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_115[iParam0 /*4*/], iVar15);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_115[iParam0 /*4*/], iVar16);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_115[iParam0 /*4*/], iVar17);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_115[iParam0 /*4*/], iVar19, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_115[iParam0 /*4*/], iVar18);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_115[iParam0 /*4*/], iVar20);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_115[iParam0 /*4*/], iVar22);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar33))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_115[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_115[iParam0 /*4*/], fVar23);
		}
		if (bVar12)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_115[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_115[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_115[iParam0 /*4*/], fVar25);
		}
		if (bVar21)
		{
			VEHICLE::SET_BOAT_ANCHOR(Local_115[iParam0 /*4*/], 1);
		}
		if (iVar5 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_115[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_115[iParam0 /*4*/].f_1 = GlobalFunc_6834(Local_115[iParam0 /*4*/], bVar13, 0);
		}
		if (iParam0 == 0)
		{
			VEHICLE::CONTROL_LANDING_GEAR(Local_115[iParam0 /*4*/], 3);
		}
	}
	return 1;
}


void func_65(int iParam0)//Position - 0x3180
{
	if (GlobalFunc_115(Local_115[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 2, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 3, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 4, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 5, 0);
				break;
			
			case 1:
			case 4:
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 2, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 3, 1);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 4, 0);
				VEHICLE::SET_VEHICLE_EXTRA(Local_115[iParam0 /*4*/], 5, 1);
				break;
			}
	}
}

void func_66(int iParam0)//Position - 0x3232
{
	if (GlobalFunc_115(Local_115[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				VEHICLE::SET_VEHICLE_COLOURS(Local_115[iParam0 /*4*/], 111, 28);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_115[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_COLOURS(Local_115[iParam0 /*4*/], 121, 20);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_115[iParam0 /*4*/], 0, 156);
				break;
			
			case 3:
				VEHICLE::SET_VEHICLE_COLOURS(Local_115[iParam0 /*4*/], 121, 46);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_115[iParam0 /*4*/], 0, 156);
				break;
			
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_115[iParam0 /*4*/], 111, 54);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_115[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_67(int iParam0)//Position - 0x32DA
{
	MISC::SET_BIT(&iLocal_148, iParam0);
}

void func_68()//Position - 0x32EA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	GlobalFunc_3025(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_79(0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f);
	if (!CAM::IS_SPHERE_VISIBLE(3084.41f, 2080.39f, 0f, 2f))
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f);
	}
	if (!CAM::IS_SPHERE_VISIBLE(3062.67f, 2081.65f, 0f, 2f))
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f);
	}
	if (!CAM::IS_SPHERE_VISIBLE(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		MISC::CLEAR_AREA_OF_PEDS(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_170, iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_170, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	GlobalFunc_878(&uLocal_173, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	GlobalFunc_9166(1);
}











void func_79(int iParam0)//Position - 0x3A3B
{
	switch (iParam0)
	{
		case 0:
			iLocal_171[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}


void func_81()//Position - 0x3A8B
{
	if (!GlobalFunc_6827())
	{
		if (GlobalFunc_10589())
		{
			func_168(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_SEAPLANE", 0);
	func_105();
	func_93();
	func_89();
	func_84();
	func_82(&uLocal_157, &uLocal_149);
}

void func_82(var uParam0, var uParam1)//Position - 0x3AC8
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (GlobalFunc_747((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}


void func_84()//Position - 0x3C5D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*6*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*6*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iVar0 /*6*/], 0))
			{
				if (!func_88(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_48[iVar0 /*6*/].f_1, 1f);
					func_57(iVar0, 0);
				}
				if (func_87(Local_48[iVar0 /*6*/]) != -1)
				{
					if (func_86(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_88(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_48[iVar0 /*6*/].f_1, 0.7f);
				func_85(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*6*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*6*/].f_1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_48[iVar0 /*6*/]))
			{
				GlobalFunc_846(&(Local_48[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_115[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_115[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_115[iVar0 /*4*/], 0))
			{
				GlobalFunc_846(&(Local_115[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)//Position - 0x3DE6
{
	MISC::CLEAR_BIT(&(Local_48[iParam0 /*6*/].f_2), iParam1);
}

int func_86(int iParam0)//Position - 0x3DFC
{
	if (iParam0 == 1)
	{
		if (!GlobalFunc_115(Local_48[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!GlobalFunc_115(Local_48[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!GlobalFunc_115(Local_48[2 /*6*/]) && !GlobalFunc_115(Local_48[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!GlobalFunc_115(Local_48[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!GlobalFunc_115(Local_48[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_87(int iParam0)//Position - 0x3E8A
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
				if (!ENTITY::IS_ENTITY_DEAD(uVar0))
				{
					iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3) == iParam0)
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

bool func_88(int iParam0, int iParam1)//Position - 0x3F07
{
	return MISC::IS_BIT_SET(Local_48[iParam0 /*6*/].f_2, iParam1);
}

void func_89()//Position - 0x3F1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_115[iVar0 /*4*/]))
		{
			func_90(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)//Position - 0x3F4A
{
	if (GlobalFunc_115(Local_115[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_115[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[iParam0 /*4*/], -1)) && !GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[iParam0 /*4*/], 0))) && !GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[iParam0 /*4*/], 1))) && !GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[iParam0 /*4*/], 2)))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_115[iParam0 /*4*/], 1);
							VEHICLE::SET_BOAT_ANCHOR(Local_115[iParam0 /*4*/], 0);
							Local_115[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_115[iParam0 /*4*/]))
	{
		func_91(iParam0, 0);
	}
	else
	{
		func_91(iParam0, 1);
	}
}

void func_91(int iParam0, bool bParam1)//Position - 0x4046
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_115[iParam0 /*4*/]))
	{
		GlobalFunc_846(&(Local_115[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_115[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_115[iParam0 /*4*/]);
		}
		if (func_92(&(Local_115[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_115[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_115[iParam0 /*4*/]));
			}
		}
		Local_115[iParam0 /*4*/] = 0;
		Local_115[iParam0 /*4*/].f_2 = 0;
		Local_115[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_92(var uParam0)//Position - 0x40C0
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_93()//Position - 0x40DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*6*/]))
		{
			func_94(iVar0);
		}
		iVar0++;
	}
}

void func_94(int iParam0)//Position - 0x410A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (GlobalFunc_115(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_48[iParam0 /*6*/].f_3 >= 2 && Local_48[iParam0 /*6*/].f_3 < 5)
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0))) && FIRE::IS_ENTITY_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
					{
						func_104();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1501), 4096);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
						Local_48[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (GlobalFunc_115(Local_48[3 /*6*/]))
							{
								PED::SET_IK_TARGET(Local_48[iParam0 /*6*/], 1, Local_48[3 /*6*/], 31086, Local_138, 0, -1, -1);
							}
						}
						else if (GlobalFunc_115(Local_48[1 /*6*/]))
						{
							PED::SET_IK_TARGET(Local_48[iParam0 /*6*/], 1, Local_48[1 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((func_120(1) || PED::IS_PED_IN_COMBAT(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID())) || func_101()) || func_100())
						{
							func_99(iParam0);
							TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!GlobalFunc_115(Local_48[1 /*6*/]) || (GlobalFunc_115(Local_115[1 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_48[1 /*6*/], Local_115[1 /*4*/], 1)))
							{
								bVar0 = true;
							}
						}
						else if ((!GlobalFunc_115(Local_48[3 /*6*/]) || (GlobalFunc_115(Local_115[2 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_48[3 /*6*/], Local_115[2 /*4*/], 1))) && (!GlobalFunc_115(Local_48[4 /*6*/]) || (GlobalFunc_115(Local_115[2 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_48[4 /*6*/], Local_115[2 /*4*/], 1))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_136;
						}
						else
						{
							sVar4 = sLocal_137;
						}
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar1);
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sVar4, &iVar3);
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar4, ENTITY::GET_ENTITY_COORDS(Local_48[iParam0 /*6*/], 1), &iVar2);
						if (iVar1 > 0 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, 1, 0))
						{
							iVar1 = GlobalFunc_254(iVar1, 22, iVar3);
						}
						if (GlobalFunc_879(PLAYER::PLAYER_PED_ID(), Local_144, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_150 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_151 != iVar1) && iVar1 > iVar2)) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]))) && !PED::IS_PED_BEING_STUNNED(Local_48[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_150 = iVar1;
							}
							else
							{
								iLocal_151 = iVar1;
							}
							if (GlobalFunc_115(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/])))
							{
								VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0);
								func_85(iParam0, 5);
							}
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_48[iParam0 /*6*/], PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!GlobalFunc_2664(Local_48[iParam0 /*6*/], -235832601, 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_48[iParam0 /*6*/], -235832601) == 7) && !GlobalFunc_2664(Local_48[iParam0 /*6*/], 538064912, 1))
						{
							TASK::TASK_VEHICLE_SHOOT_AT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 1101004800);
							if (GlobalFunc_115(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/])) && VEHICLE::CAN_ANCHOR_BOAT_HERE(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/])))
							{
								VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 1);
								func_57(iParam0, 5);
							}
						}
						if (!func_88(iParam0, 4))
						{
							if (PED::IS_PED_BEING_STUNNED(Local_48[iParam0 /*6*/], 0))
							{
								func_57(iParam0, 4);
								TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*6*/]);
								if (!func_88(iParam0, 5) && VEHICLE::CAN_ANCHOR_BOAT_HERE(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/])))
								{
									VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 1);
								}
							}
						}
						else if (!PED::IS_PED_BEING_STUNNED(Local_48[iParam0 /*6*/], 0))
						{
							func_85(iParam0, 4);
							if (!func_88(iParam0, 5))
							{
								VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0);
							}
						}
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_48[iParam0 /*6*/], -235832601) == 1 && !VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]))) && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_48[iParam0 /*6*/]))
						{
							TASK::TASK_DRIVE_BY(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, Local_138, 500f, 100, 1, -687903391);
						}
						TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, (iVar3 - 1), &Var6);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_48[iParam0 /*6*/], Var6, 8f, 8f, 8f, 0, 1, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							TASK::TASK_BOAT_MISSION(Local_48[iParam0 /*6*/], PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), Local_138, 7, 20f, 786469, 5f, 7);
							func_67(5);
							TASK::REMOVE_WAYPOINT_RECORDING(sVar4);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
						{
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_48[iParam0 /*6*/], -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_48[iParam0 /*6*/]))
							{
								TASK::TASK_DRIVE_BY(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, Local_138, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 4:
						if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!PED::IS_PED_ON_VEHICLE(Local_48[iParam0 /*6*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
								TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && GlobalFunc_2664(Local_48[iParam0 /*6*/], 993674639, 1)) && GlobalFunc_115(Local_48[3 /*6*/]))
						{
							PED::SET_IK_TARGET(Local_48[iParam0 /*6*/], 1, Local_48[3 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && GlobalFunc_115(Local_48[1 /*6*/])) && GlobalFunc_2664(Local_48[iParam0 /*6*/], 993674639, 1))
						{
							PED::SET_IK_TARGET(Local_48[iParam0 /*6*/], 1, Local_48[1 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((func_120(1) || PED::IS_PED_IN_COMBAT(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID())) || func_101()) || func_100())
						{
							func_99(iParam0);
							Local_48[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1250, 1501));
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (MISC::GET_GAME_TIMER() >= Local_48[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && GlobalFunc_115(Local_115[1 /*4*/])) && GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[1 /*4*/], -1)))
							{
								TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*6*/]);
								TASK::TASK_ENTER_VEHICLE(Local_48[iParam0 /*6*/], Local_115[1 /*4*/], 20000, 0, 3f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 3 && GlobalFunc_115(Local_115[2 /*4*/])) && GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[2 /*4*/], -1)))
							{
								TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*6*/]);
								TASK::TASK_ENTER_VEHICLE(Local_48[iParam0 /*6*/], Local_115[2 /*4*/], 20000, 0, 3f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 4 && GlobalFunc_115(Local_115[2 /*4*/])) && GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[2 /*4*/], -1)))
							{
								TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*6*/]);
								TASK::TASK_ENTER_VEHICLE(Local_48[iParam0 /*6*/], Local_115[2 /*4*/], 20000, 1, 3f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							}
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							
							case 3:
								iVar9 = 2;
								break;
							
							case 4:
								iVar9 = 2;
								break;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 1) || !GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_115[iVar9 /*4*/], -1)))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
							TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						else if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && GlobalFunc_115(Local_115[iVar9 /*4*/])))
							{
								TASK::TASK_ENTER_VEHICLE(Local_48[iParam0 /*6*/], Local_115[iVar9 /*4*/], 20000, 0, 3f, 1, 0);
							}
							if (iParam0 == 4 && GlobalFunc_115(Local_115[iVar9 /*4*/]))
							{
								TASK::TASK_ENTER_VEHICLE(Local_48[iParam0 /*6*/], Local_115[iVar9 /*4*/], 20000, 1, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
						{
							if (FIRE::IS_ENTITY_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
							{
								func_104();
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1501), 4096);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_102(Local_48[iParam0 /*6*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
								Local_48[iParam0 /*6*/].f_3++;
							}
							if (Local_48[iParam0 /*6*/].f_3 == 3)
							{
								if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000)) && func_120(5))
								{
									TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], 20000);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
									Local_48[iParam0 /*6*/].f_3 = 5;
								}
								else if (!GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), -1)))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 3, 1);
									TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									Local_48[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!PED::IS_PED_ON_VEHICLE(Local_48[iParam0 /*6*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
								TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0))) && FIRE::IS_ENTITY_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
					{
						func_104();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1501), 4096);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*6*/]))) || func_120(6))
						{
							if (GlobalFunc_115(Local_115[3 /*4*/]))
							{
								VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0);
								fVar10 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
								fVar10 = GlobalFunc_253(fVar10, 10f, 40f);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_115[3 /*4*/], fVar10);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(Local_48[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							TASK::TASK_BOAT_MISSION(Local_48[iParam0 /*6*/], PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), Local_138, 7, 20f, 786469, 5f, 7);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
						{
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_48[iParam0 /*6*/], -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_48[iParam0 /*6*/]))
							{
								TASK::TASK_DRIVE_BY(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, Local_138, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!PED::IS_PED_ON_VEHICLE(Local_48[iParam0 /*6*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
								TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0))) && FIRE::IS_ENTITY_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
					{
						func_104();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1501), 4096);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*6*/]))) || func_120(6))
						{
							if (GlobalFunc_115(Local_115[4 /*4*/]))
							{
								VEHICLE::SET_BOAT_ANCHOR(PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0);
								fVar11 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
								fVar11 = GlobalFunc_253(fVar11, 10f, 40f);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_115[4 /*4*/], fVar11);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(Local_48[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							TASK::TASK_BOAT_MISSION(Local_48[iParam0 /*6*/], PED::GET_VEHICLE_PED_IS_USING(Local_48[iParam0 /*6*/]), 0, PLAYER::PLAYER_PED_ID(), Local_138, 7, 20f, 786469, 5f, 7);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
							Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
						{
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_48[iParam0 /*6*/], -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_48[iParam0 /*6*/]))
							{
								TASK::TASK_DRIVE_BY(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, Local_138, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!PED::IS_PED_ON_VEHICLE(Local_48[iParam0 /*6*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
								TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0))) && FIRE::IS_ENTITY_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
					{
						func_104();
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1501), 4096);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_43() && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*6*/])))
						{
							Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 1, 145);
							HUD::SET_BLIP_ALPHA(Local_48[iParam0 /*6*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iParam0 /*6*/].f_1, 1);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0))
						{
							if (GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0)))
							{
								if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
								{
									TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 1, 0);
									Local_48[iParam0 /*6*/].f_3++;
								}
								else if (!GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_48[iParam0 /*6*/], 0), -1)))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*6*/], 3, 1);
									TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									Local_48[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!GlobalFunc_2664(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!PED::IS_PED_ON_VEHICLE(Local_48[iParam0 /*6*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 0);
								TASK::TASK_COMBAT_PED(Local_48[iParam0 /*6*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							else
							{
								TASK::TASK_GET_OFF_BOAT(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_88(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_48[iParam0 /*6*/], 1);
			ENTITY::DETACH_ENTITY(Local_48[iParam0 /*6*/], 1, 0);
			func_85(iParam0, 1);
		}
		if (!func_88(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_48[iParam0 /*6*/]))
			{
				func_39(iParam0, 0);
			}
			else
			{
				func_39(iParam0, 1);
			}
		}
	}
}


int func_96(int iParam0, int iParam1)//Position - 0x5621
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (GlobalFunc_115(Local_115[iVar0 /*4*/]))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(Local_115[iVar0 /*4*/]))
		{
			Local_115[iVar0 /*4*/].f_3 = (Local_115[iVar0 /*4*/].f_3 + MISC::GET_FRAME_TIME());
		}
		else
		{
			Local_115[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_115[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}



void func_99(int iParam0)//Position - 0x573C
{
	func_57(iParam0, 3);
	if (!func_120(4))
	{
		func_67(4);
	}
	if (!func_120(2))
	{
		func_67(2);
	}
	Local_48[iParam0 /*6*/].f_1 = GlobalFunc_7502(Local_48[iParam0 /*6*/], 1, 145);
	PED::SET_PED_SEEING_RANGE(Local_48[iParam0 /*6*/], 200f);
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*6*/], 0))
	{
		if (func_87(Local_48[iParam0 /*6*/]) != -1)
		{
			HUD::SET_BLIP_ALPHA(Local_48[iParam0 /*6*/].f_1, 0);
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(Local_48[iParam0 /*6*/]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*6*/], 1);
		}
	}
}

var func_100()//Position - 0x57D9
{
	return FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_101()//Position - 0x5809
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (GlobalFunc_115(uVar0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_102(var uParam0)//Position - 0x5856
{
	if (func_120(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(uLocal_338);
		func_103(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(uParam0, uLocal_338);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_338);
}

void func_103(int iParam0)//Position - 0x5882
{
	MISC::CLEAR_BIT(&iLocal_148, iParam0);
}

void func_104()//Position - 0x5892
{
	if (!func_120(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_338);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_338);
		func_67(0);
	}
}

void func_105()//Position - 0x58B6
{
	bool bVar0;
	int iVar1;
	
	if (func_120(1) || func_120(4))
	{
		if (GlobalFunc_115(Local_115[0 /*4*/]) && GlobalFunc_850(PLAYER::PLAYER_PED_ID(), Local_115[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_38(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_36();
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_115[0 /*4*/]) && !GlobalFunc_115(Local_115[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_38(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_36();
		}
	}
}















bool func_120(int iParam0)//Position - 0x7565
{
	return MISC::IS_BIT_SET(iLocal_148, iParam0);
}

void func_121(int iParam0)//Position - 0x7575
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	GlobalFunc_817(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_122();
}

void func_122()//Position - 0x75AB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}


int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x75F6
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
		if (GlobalFunc_2663())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_9560(100f, 1) != -1)
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
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (GlobalFunc_6509(GlobalFunc_8354()) == 4 || GlobalFunc_6509(GlobalFunc_8354()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8354()))
		{
			if (!GlobalFunc_9561(iParam3, iParam4, 145))
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
		if (GlobalFunc_10590())
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
		if (!GlobalFunc_9547(4))
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
		if (GlobalFunc_42(GlobalFunc_8354()))
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
								if (GlobalFunc_8354() != iVar4)
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











































int func_167()//Position - 0x8CCB
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3);
		if ((Var0.f_1 < 2149.042f && (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && (Var0.f_2 - fVar3) >= 7.5f))) && (Var0.f_2 - fVar3) >= 3f)
		{
			return 0;
		}
		if (Var0.f_2 >= 100f && PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	return 1;
}

void func_168(bool bParam0, bool bParam1)//Position - 0x8D61
{
	func_197();
	func_196();
	GlobalFunc_3025(0);
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_6415(0);
	func_190();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 1, 1);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(1);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	GlobalFunc_587();
	func_188();
	GlobalFunc_587();
	func_186(bParam1);
	func_185(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_170);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_4956();
	GlobalFunc_4935();
	GlobalFunc_200(&uLocal_173, 1);
	GlobalFunc_200(&uLocal_173, 3);
	GlobalFunc_200(&uLocal_173, 4);
	GlobalFunc_200(&uLocal_173, 5);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	GlobalFunc_9166(0);
	if (bParam0)
	{
		GlobalFunc_10823(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

















void func_185(bool bParam0)//Position - 0x96AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_91(iVar0, bParam0);
		iVar0++;
	}
}

void func_186(bool bParam0)//Position - 0x96D0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_39(iVar0, bParam0);
		iVar0++;
	}
}


void func_188()//Position - 0x96FB
{
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_136);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_137);
}


void func_190()//Position - 0x9717
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_191(iVar0);
		iVar0++;
	}
}

void func_191(int iParam0)//Position - 0x9737
{
	if (iLocal_171[iParam0] != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_171[iParam0], 0);
		iLocal_171[iParam0] = 0;
	}
}





void func_196()//Position - 0x98B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		GlobalFunc_846(&(Local_48[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_846(&(Local_115[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_197()//Position - 0x98F7
{
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
}


