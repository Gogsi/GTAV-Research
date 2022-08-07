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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 16;
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
	var uLocal_262 = -1;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 1000;
	var uLocal_270 = 1000;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	struct<11> Local_276 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	char* sLocal_295 = NULL;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	bool bLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	float fLocal_314 = 0f;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319[3];
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	bool bLocal_335 = 0;
	bool bLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	struct<3> Local_340[9];
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	bool bLocal_374 = 0;
	bool bLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	struct<3> Local_380[5];
	struct<3> Local_396[4];
	bool bLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	bool bLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	struct<3> Local_417[3];
	struct<3> Local_427[3];
	struct<3> Local_437[9];
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	var uLocal_472 = 0;
	int iLocal_473 = 0;
	bool bLocal_474 = 0;
	bool bLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	struct<3> Local_478 = { 0, 0, 0 } ;
	float fLocal_481 = 0f;
	struct<3> Local_482 = { 0, 0, 0 } ;
	int iLocal_485 = 0;
	struct<8> Local_486[4];
	int iLocal_519 = 0;
	struct<3> Local_520 = { 0, 0, 0 } ;
	struct<3> Local_523 = { 0, 0, 0 } ;
	struct<3> Local_526 = { 0, 0, 0 } ;
	struct<3> Local_529 = { 0, 0, 0 } ;
	bool bLocal_532 = 0;
	struct<8> Local_533 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	struct<3> Local_545[6];
	float fLocal_564[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_571 = 0;
	char* sLocal_572 = NULL;
	int iLocal_573 = 0;
	char* sLocal_574[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<3> Local_583[6];
	int iLocal_602 = 0;
	bool bLocal_603 = 0;
	bool bLocal_604 = 0;
	var uLocal_605[2] = { 0, 0 };
	bool bLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	struct<3> Local_617 = { 0, 0, 0 } ;
	float fLocal_620 = 0f;
	bool bLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	uLocal_89 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_90 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_290 = joaat("a_m_o_acult_01");
	sLocal_295 = "rcmme_tracey1";
	Local_478 = { 238.1823f, -34.5401f, 68.7233f };
	fLocal_481 = 160.6f;
	Local_482 = { 236.23f, -34.25f, 69.71f };
	iLocal_485 = 154.19f;
	Local_520 = { -825.07f, 180.32f, 70.52f };
	Local_523 = { -1316.569f, 391.5938f, 68.7507f };
	iLocal_543 = 2000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_487(0, 0);
	}
	MISC::SET_MISSION_FLAG(1);
	func_474();
	if (GlobalFunc_Is_Mission_Retry())
	{
		switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
		{
			case 0:
				func_456(&iVar0, 1, 1, 1, 1, joaat("tailgater"), 0, 145);
				GlobalFunc_190(&iVar0);
				func_454(1, 1, 1);
				break;
			
			case 2:
				func_452(1, 1);
				func_429(1);
				func_454(1, 1, 1);
				break;
			
			case 3:
				func_452(1, 1);
				func_428(1);
				func_454(1, 1, 1);
				break;
			
			case 4:
				func_452(1, 1);
				func_410(1, 1);
				func_454(1, 1, 1);
				break;
			
			case 5:
				func_452(1, 1);
				func_410(1, 0);
				func_454(1, 1, 1);
				break;
			
			default:
				func_454(1, 1, 1);
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_DD", 0);
		if (iLocal_625 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (iLocal_91 == 11)
		{
			func_399();
		}
		else if (!func_395())
		{
			GlobalFunc_587();
			func_393();
			switch (iLocal_91)
			{
				case 0:
					func_364();
					break;
				
				case 1:
					func_361();
					break;
				
				case 2:
					func_350();
					break;
				
				case 3:
					func_337();
					break;
				
				case 4:
					func_331();
					break;
				
				case 5:
					func_314();
					break;
				
				case 6:
					func_266();
					break;
				
				case 7:
					func_178();
					break;
				
				case 8:
					func_34();
					break;
				
				case 9:
					func_30();
					break;
				
				case 10:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x28E
{
	switch (iLocal_92)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_28(3);
				GlobalFunc_846(&uLocal_296);
				iLocal_92 = 1;
			}
			else
			{
				iLocal_91 = 1;
				iLocal_92 = 0;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_25(3);
					iLocal_92 = 2;
				}
			}
			func_2();
			break;
		
		case 2:
			iLocal_92 = 0;
			iLocal_91 = 1;
			break;
	}
}

int func_2()//Position - 0x306
{
	switch (iLocal_93)
	{
		case 0:
			if (!iLocal_94)
			{
				if (func_24(5))
				{
					iLocal_93 = 3;
				}
				else if (func_24(2))
				{
					if (!GlobalFunc_111())
					{
						iLocal_93 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_94)
			{
				GlobalFunc_200(&uLocal_95, 3);
				GlobalFunc_173(&uLocal_95, 3, 0, "TRACEY", 0, 1);
				if (GlobalFunc_10664(&uLocal_95, 15, "MET1AUD", "MET1_WARN2", 7, 0, 0, 1))
				{
					iLocal_93 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_93 = 3;
			}
			break;
		
		case 3:
			if (!iLocal_94)
			{
				if (func_24(5))
				{
					GlobalFunc_200(&uLocal_95, 3);
					GlobalFunc_173(&uLocal_95, 3, 0, "TRACEY", 0, 1);
					iLocal_91 = 9;
					iLocal_92 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_307) > 15000)
			{
				GlobalFunc_200(&uLocal_95, 3);
				GlobalFunc_173(&uLocal_95, 3, iLocal_288, "TRACEY", 0, 1);
				iLocal_93 = 5;
			}
			break;
		
		case 5:
			if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_WARNC", 7, 0, 0, 0))
			{
				iLocal_307 = MISC::GET_GAME_TIMER();
				iLocal_93 = 4;
			}
			break;
		
		case 7:
			break;
	}
	return 0;
}






















int func_24(int iParam0)//Position - 0xD68
{
	int iVar0;
	
	if (CLOCK::GET_CLOCK_DAY_OF_MONTH() != iLocal_300)
	{
		iVar0 = (60 * ((24 - iLocal_301) + CLOCK::GET_CLOCK_HOURS()));
		iVar0 = ((iVar0 - iLocal_302) + CLOCK::GET_CLOCK_MINUTES());
	}
	else
	{
		iVar0 = (((60 * CLOCK::GET_CLOCK_HOURS()) + CLOCK::GET_CLOCK_MINUTES()) - (iLocal_302 + (60 * iLocal_301)));
	}
	if (iVar0 >= (60 * iParam0))
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)//Position - 0xDC4
{
	HUD::CLEAR_THIS_PRINT(Local_340[iParam0 /*3*/].f_2);
}



void func_28(int iParam0)//Position - 0xE19
{
	if (Local_340[iParam0 /*3*/].f_1 < Local_340[iParam0 /*3*/] || Local_340[iParam0 /*3*/] == -1)
	{
		GlobalFunc_164(Local_340[iParam0 /*3*/].f_2, 7500, 1);
		Local_340[iParam0 /*3*/].f_1++;
	}
}


void func_30()//Position - 0xE82
{
	switch (iLocal_92)
	{
		case 0:
			iLocal_292 = 0;
			GlobalFunc_846(&uLocal_296);
			GlobalFunc_69(&iLocal_288);
			GlobalFunc_7108(&iLocal_272);
			GlobalFunc_200(&uLocal_95, 3);
			GlobalFunc_173(&uLocal_95, 3, 0, "TRACEY", 0, 1);
			if (GlobalFunc_10664(&uLocal_95, 15, "MET1AUD", "MET1_FAIL", 7, 0, 0, 1))
			{
				iLocal_92 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_92 = 2;
			}
			break;
		
		case 2:
			sLocal_572 = "MET1TOOLATE";
			iLocal_91 = 11;
			iLocal_92 = 0;
			break;
	}
}




void func_34()//Position - 0x100D
{
	var uVar0;
	
	switch (iLocal_92)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_272) < 1f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_272, 10f);
			}
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_272) < 1f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_272, 10f);
			}
			if (GlobalFunc_530(iLocal_272, 5f, 5, 1056964608, 0, 1))
			{
				if (bLocal_532)
				{
					Local_529 = { -1321.44f, 379.9881f, 67.8596f };
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PAUSE(0, 650);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_272, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_529, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
				}
				else
				{
					Local_529 = { -813.7761f, 179.4943f, 71.1592f };
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PAUSE(0, 650);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_272, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -820.1358f, 176.9053f, 70.6086f, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_529, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
				}
				TASK::CLEAR_PED_TASKS(iLocal_288);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_288, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::SET_PED_CONFIG_FLAG(iLocal_288, 104, 1);
				iLocal_471 = 0;
				if (GlobalFunc_1720())
				{
					bLocal_475 = true;
					iLocal_476 = 0;
					CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA("ISSI2");
				}
				else
				{
					bLocal_475 = false;
					iLocal_476 = 0;
				}
				func_58(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_526, 8f, 1, 0, 0, 0, 0);
				if (!bLocal_532)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-820.2315f, 176.7027f, 70.6122f, 8f, 1, 0, 0, 0, 0);
				}
				if (bLocal_532)
				{
					iLocal_473 = MISC::GET_GAME_TIMER() + 10000;
					uLocal_472 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1315.612f, 402.8979f, 76.0077f, -26.827f, 0f, 175.0236f, 48.4f, 0, 2);
				}
				else
				{
					iLocal_473 = MISC::GET_GAME_TIMER() + 5000;
					uLocal_472 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -840.7f, 185.3f, 78.4f, -14f, 0f, -110.4f, 48.4f, 0, 2);
				}
				CAM::SET_CAM_ACTIVE(uLocal_472, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				bLocal_474 = false;
				iLocal_92 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4926(1000))
			{
				bLocal_474 = true;
				iLocal_471 = 1;
			}
			if (!iLocal_471)
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_ATHOME", 7, 0, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_473)
				{
					iLocal_471 = 1;
				}
			}
			else if (iLocal_476)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_477)
				{
					iLocal_92 = 2;
				}
			}
			else if ((GlobalFunc_775(iLocal_288, Local_529, 2f) || (MISC::GET_GAME_TIMER() - iLocal_473) > 5000) || bLocal_474)
			{
				if (bLocal_475)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_476 = 1;
					iLocal_477 = MISC::GET_GAME_TIMER() + 300;
				}
				else
				{
					iLocal_92 = 2;
				}
			}
			if (!bLocal_532)
			{
				PED::SET_PED_RESET_FLAG(iLocal_288, 247, 1);
			}
			break;
		
		case 2:
			if (bLocal_532)
			{
				GlobalFunc_69(&iLocal_288);
			}
			else
			{
				if (bLocal_474)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_288);
					ENTITY::SET_ENTITY_COORDS(iLocal_288, -813.7761f, 179.4943f, 71.1592f, 0, 0, 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_288, 0, 0);
				}
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_272, 1, 1);
				func_50(iLocal_288);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			func_40(1, 1, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::DESTROY_CAM(uLocal_472, 0);
			func_35(0);
			break;
	}
}

void func_35(bool bParam0)//Position - 0x1399
{
	GlobalFunc_5103(0, 0);
	if (bParam0)
	{
		func_487(0, 0);
	}
	else
	{
		func_487(0, 1);
	}
}





void func_40(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x152F
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










int func_50(int iParam0)//Position - 0x1805
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = GlobalFunc_7234(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_89749))
		{
			return 0;
		}
		Global_85373[iVar0] = 140;
		Global_89749 = iParam0;
		return 1;
	}
	Global_85373[iVar0] = 140;
	Global_85389 = 137;
	Global_89748 = iParam0;
	return 1;
}








void func_58(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x1A7E
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_11021(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11281(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}
























































































































void func_178()//Position - 0x1DDC8
{
	switch (iLocal_92)
	{
		case 0:
			if (bLocal_532 == 1)
			{
				Local_526 = { Local_523 };
			}
			else
			{
				Local_526 = { Local_520 };
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 0)
				{
					uLocal_296 = GlobalFunc_2324(Local_526, 5, 1);
					iLocal_308 = 0;
					iLocal_309 = 0;
				}
				else
				{
					iLocal_308 = 1;
					iLocal_309 = 1;
				}
				if (bLocal_335)
				{
					GlobalFunc_Checkpoint1(5, "Drive home - stalker dead (CP4)", 0, 0, 0, 1);
				}
				else
				{
					GlobalFunc_Checkpoint1(4, "Drive home - stalker chased off (CP3)", 0, 0, 0, 1);
				}
				iLocal_465 = 0;
				GlobalFunc_846(&uLocal_297);
				func_194();
				iLocal_304 = 0;
				iLocal_470 = 0;
				iLocal_469 = 0;
				iLocal_92 = 1;
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_297))
				{
					uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
				}
				func_28(5);
				iLocal_304 = 1;
			}
			break;
		
		case 1:
			if (!bLocal_311)
			{
				func_192();
				if (bLocal_311)
				{
					iLocal_468 = 1;
				}
			}
			if (iLocal_304)
			{
				if (func_191(5))
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
					{
						func_28(5);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 0;
					GlobalFunc_846(&uLocal_296);
					GlobalFunc_846(&uLocal_297);
					HUD::CLEAR_PRINTS();
					if (!PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
					{
						iLocal_305 = 1;
						iLocal_306 = 0;
						uLocal_297 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
					}
					else
					{
						iLocal_305 = 0;
						iLocal_306 = 0;
						GlobalFunc_502();
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
						{
							iLocal_308 = 0;
							uLocal_296 = GlobalFunc_2324(Local_526, 5, 1);
						}
						else
						{
							iLocal_308 = 1;
							iLocal_309 = 1;
						}
					}
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
				{
					sLocal_572 = "MET1ABANDON";
					iLocal_91 = 11;
					iLocal_92 = 0;
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
				{
					func_28(6);
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				iLocal_304 = 1;
				HUD::CLEAR_PRINTS();
				GlobalFunc_846(&uLocal_296);
				uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
			}
			else if (iLocal_305)
			{
				if (func_191(2) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
				{
					func_28(2);
				}
				if (!iLocal_306 && !func_185())
				{
					iLocal_306 = 1;
					TASK::TASK_ENTER_VEHICLE(iLocal_288, iLocal_272, 20000, 0, 2f, 1, 0);
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
				{
					iLocal_305 = 0;
					GlobalFunc_846(&uLocal_297);
					iLocal_305 = 0;
					iLocal_306 = 0;
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
					{
						iLocal_308 = 0;
						uLocal_296 = GlobalFunc_2324(Local_526, 5, 1);
					}
					else
					{
						iLocal_308 = 1;
						iLocal_309 = 1;
					}
				}
				else if (func_191(6))
				{
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
					{
						func_28(6);
					}
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
				{
					sLocal_572 = "MET1ABANDON";
					iLocal_92 = 0;
					iLocal_91 = 11;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
			{
				iLocal_305 = 1;
				iLocal_306 = 0;
				HUD::CLEAR_PRINTS();
				GlobalFunc_846(&uLocal_296);
				GlobalFunc_846(&uLocal_297);
				uLocal_297 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
			}
			else if (iLocal_308)
			{
				if (iLocal_309)
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || (iLocal_465 >= 4 && !GlobalFunc_111()))
					{
						func_28(3);
						iLocal_309 = 0;
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 1;
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_296);
					GlobalFunc_846(&uLocal_297);
					uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
				}
				else if (!PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
				{
					iLocal_305 = 1;
					iLocal_306 = 0;
					uLocal_297 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
					func_28(2);
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_308 = 0;
					iLocal_467 = 0;
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_296);
					uLocal_296 = GlobalFunc_2324(Local_526, 5, 1);
				}
				func_182();
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_308 = 1;
				iLocal_309 = 1;
				iLocal_467 = 1;
				HUD::CLEAR_PRINTS();
				GlobalFunc_846(&uLocal_296);
			}
			else
			{
				if (func_181())
				{
					iLocal_92 = 2;
				}
				else if (func_180() && !iLocal_470)
				{
					if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_NRHOME", 7, 0, 0, 0))
					{
						iLocal_470 = 1;
					}
				}
				else
				{
					func_182();
				}
				if (func_191(7) && func_191(8))
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
					{
						if (bLocal_532)
						{
							func_28(8);
						}
						else
						{
							func_28(7);
						}
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_846(&uLocal_296);
			func_179(7);
			if (GlobalFunc_111())
			{
				GlobalFunc_5105();
			}
			iLocal_91 = 8;
			iLocal_92 = 0;
			break;
	}
}

void func_179(int iParam0)//Position - 0x1E29E
{
	if (iLocal_573 != iParam0)
	{
		iLocal_571 = 0;
		while (iLocal_571 <= 7)
		{
			if (iLocal_571 == iParam0)
			{
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_574[iLocal_571], "NONE"))
				{
					AUDIO::START_AUDIO_SCENE(sLocal_574[iLocal_571]);
				}
				iLocal_573 = iParam0;
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_574[iLocal_571]))
			{
				AUDIO::STOP_AUDIO_SCENE(sLocal_574[iLocal_571]);
			}
			iLocal_571++;
		}
	}
}

int func_180()//Position - 0x1E310
{
	if (bLocal_532)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_523, 30f))
		{
			return 1;
		}
	}
	else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -842.5665f, 159.2974f, 65.9426f, 11f))
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0x1E35E
{
	if (bLocal_532)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_526, 3.5f, 3.5f, 2f, 1, 1, 0))
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_526, 4.5f, 4.5f, 2f, 1, 1, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.7069f, 176.6418f, 69.66212f, -824.0747f, 184.5666f, 72.91872f, 5.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -827.9308f, 182.0454f, 70.08909f, -820.2387f, 180.1781f, 72.71543f, 6.5f, 0, 1, 0)))
	{
		return 1;
	}
	return 0;
}

void func_182()//Position - 0x1E41B
{
	var uVar0;
	var uVar1;
	
	if (iLocal_465 == 0)
	{
		if (bLocal_335)
		{
			if (bLocal_336)
			{
				if (!iLocal_469)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					iLocal_469 = 1;
				}
				if (GlobalFunc_10618(&uLocal_95, Local_437[0 /*3*/].f_1, Local_437[0 /*3*/].f_2, 7, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, sLocal_295, "react_intro", 8f, -8f, 4900, 8, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_295, "react_loop", 8f, -4f, 12400, 8, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::CLEAR_PED_TASKS(iLocal_288);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_288, uVar0);
					iLocal_465 += 4;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, Local_437[1 /*3*/].f_1, Local_437[1 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_465 += 4;
			}
		}
		else if (bLocal_336)
		{
			if (bLocal_413)
			{
				iLocal_465 += 4;
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TNOGOF", 7, 0, 0, 0))
			{
				iLocal_465 += 4;
				bLocal_413 = true;
			}
		}
		else if (!bLocal_413)
		{
			if (GlobalFunc_10618(&uLocal_95, Local_437[2 /*3*/].f_1, Local_437[2 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_465 += 4;
			}
		}
	}
	else if (iLocal_465 == 4)
	{
		if (!GlobalFunc_111())
		{
			iLocal_465++;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iLocal_467 && !GlobalFunc_111())
		{
			if (func_183())
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TRCOPS", 7, 1, 0, 0))
				{
					iLocal_466 = MISC::GET_GAME_TIMER();
					iLocal_467 = 0;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TRCOPS", 7, 0, 0, 0))
			{
				iLocal_466 = MISC::GET_GAME_TIMER();
				iLocal_467 = 0;
			}
		}
	}
	else if (iLocal_468)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10618(&uLocal_95, Local_437[8 /*3*/].f_1, Local_437[8 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_468 = 0;
				iLocal_466 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else
	{
		if (iLocal_465 == 5)
		{
			if (bLocal_335)
			{
				iLocal_465++;
				iLocal_466 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iLocal_465 += 3;
			}
		}
		else if (iLocal_465 == 6)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_466) > Local_437[3 /*3*/] && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_526, 50f))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_437[3 /*3*/].f_1, Local_437[3 /*3*/].f_2, 7, 0, 0, 0))
				{
					if (!bLocal_336)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, sLocal_295, "react_intro", 8f, -8f, 4900, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_295, "react_loop", 8f, -4f, 12400, 8, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::CLEAR_PED_TASKS(iLocal_288);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_288, uVar1);
					}
					iLocal_465++;
				}
			}
		}
		else if (iLocal_465 == 7)
		{
			if (!GlobalFunc_111())
			{
				iLocal_465++;
			}
		}
		if (iLocal_465 == 8)
		{
			if (GlobalFunc_115(iLocal_272))
			{
				if ((ENTITY::GET_ENTITY_HEALTH(iLocal_272) < 900 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_272) < 900f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_272) < 900f)
				{
					iLocal_465++;
					iLocal_466 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_465 += 3;
				}
			}
		}
		else if (iLocal_465 == 9)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_466) > Local_437[4 /*3*/] && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_526, 50f))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_437[4 /*3*/].f_1, Local_437[4 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_465++;
				}
			}
		}
		else if (iLocal_465 == 10)
		{
			if (!GlobalFunc_111())
			{
				iLocal_465++;
			}
		}
		if (iLocal_465 == 11)
		{
			if (!bLocal_335)
			{
				iLocal_465++;
				iLocal_466 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iLocal_465 += 3;
			}
		}
		else if (iLocal_465 == 12)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_466) > Local_437[5 /*3*/] && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_526, 50f))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_437[5 /*3*/].f_1, Local_437[5 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_465++;
				}
			}
		}
		else if (iLocal_465 == 13)
		{
			if (!GlobalFunc_111())
			{
				iLocal_465++;
			}
		}
		if (iLocal_465 == 14)
		{
			iLocal_465++;
			iLocal_466 = MISC::GET_GAME_TIMER();
		}
		else if (iLocal_465 == 15)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_466) > Local_437[6 /*3*/] && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_526, 50f))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_437[6 /*3*/].f_1, Local_437[6 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_465++;
				}
			}
		}
		else if (iLocal_465 == 16)
		{
			if (!GlobalFunc_111())
			{
				iLocal_465++;
			}
		}
		if (iLocal_465 == 17)
		{
			iLocal_465++;
			iLocal_466 = MISC::GET_GAME_TIMER();
		}
		else if (iLocal_465 == 18)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_466) > Local_437[7 /*3*/] && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_526, 50f))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_437[7 /*3*/].f_1, Local_437[7 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_465++;
				}
			}
		}
		else if (iLocal_465 == 19)
		{
			if (!GlobalFunc_111())
			{
				iLocal_465++;
			}
		}
	}
}

int func_183()//Position - 0x1E99E
{
	iLocal_571 = 0;
	while (iLocal_571 <= 8)
	{
		if (GlobalFunc_663(Local_340[iLocal_571 /*3*/].f_2, 0, 0))
		{
			return 1;
		}
		iLocal_571++;
	}
	return 0;
}


int func_185()//Position - 0x1E9F3
{
	if (iLocal_273 && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_272))
	{
		return 1;
	}
	return 0;
}






int func_191(int iParam0)//Position - 0x1EB24
{
	if (Local_340[iParam0 /*3*/].f_1 < Local_340[iParam0 /*3*/] || Local_340[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_192()//Position - 0x1EB57
{
	if (bLocal_311 == 0)
	{
		if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0) && PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0)) && ENTITY::GET_ENTITY_SPEED(iLocal_272) > 30f)
		{
			fLocal_314 = (fLocal_314 + (1f * SYSTEM::TIMESTEP()));
		}
		if (MISC::GET_GAME_TIMER() > iLocal_313 && PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			iLocal_312++;
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_313 = MISC::GET_GAME_TIMER() + 2000;
		}
		if (iLocal_312 > 2 || fLocal_314 > 10f)
		{
			bLocal_311 = true;
		}
	}
}


void func_194()//Position - 0x1EC26
{
	bLocal_311 = false;
	iLocal_312 = 0;
	iLocal_313 = MISC::GET_GAME_TIMER() + 2000;
	fLocal_314 = 0f;
}








































































void func_266()//Position - 0x25BDB
{
	var uVar0;
	
	switch (iLocal_92)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_295);
			if (GlobalFunc_115(iLocal_289))
			{
				TASK::CLEAR_PED_TASKS(iLocal_289);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_289, 2, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_289, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 257);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2000f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_289, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_289, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2000f, -1, 0, 0);
				}
				iLocal_412 = 0;
				bLocal_413 = false;
				iLocal_414 = 0;
				iLocal_415 = 0;
				bLocal_375 = false;
				bLocal_374 = false;
				iLocal_373 = MISC::GET_GAME_TIMER();
				iLocal_416 = 0;
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				bLocal_603 = false;
				bLocal_604 = false;
				func_313();
				uLocal_605[0] = MISC::GET_GAME_TIMER() + 10000;
				uLocal_605[1] = MISC::GET_GAME_TIMER() + 10000;
				GlobalFunc_846(&uLocal_296);
				uLocal_296 = GlobalFunc_4955(iLocal_289, 1, 0, 5);
				func_312(&uLocal_296, "MET1KSTKRED", "MET1KSTKBLU", &uLocal_298, &iLocal_299, 1, 1);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_289, 1, 0);
				GlobalFunc_10693(&uLocal_260, iLocal_289, 0, 0, 1, 1, 1);
				GlobalFunc_846(&uLocal_297);
				func_179(5);
				func_289();
				iLocal_92 = 1;
			}
			else
			{
				GlobalFunc_846(&uLocal_296);
				bLocal_335 = true;
				func_288();
				bLocal_336 = func_278();
				iLocal_92 = 2;
			}
			break;
		
		case 1:
			func_277(&uLocal_296, "MET1KSTKRED", "MET1KSTKBLU", &uLocal_298, iLocal_299, 1);
			if (GlobalFunc_115(iLocal_289))
			{
				if (!GlobalFunc_155(iLocal_289, PLAYER::PLAYER_PED_ID(), 80f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_289))
				{
					GlobalFunc_69(&iLocal_289);
					bLocal_336 = func_278();
					iLocal_92 = 2;
				}
				else
				{
					if (iLocal_412)
					{
						func_273();
					}
					else if ((((PED::IS_PED_ON_FOOT(iLocal_289) && !PED::IS_PED_RAGDOLL(iLocal_289)) && !TASK::IS_PED_GETTING_UP(iLocal_289)) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_289)) && !ENTITY::IS_ENTITY_IN_AIR(iLocal_289))
					{
						if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
						{
							if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_THERUN", 7, 1, 0, 0))
							{
								iLocal_412 = 1;
							}
						}
						else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_THERUN", 7, 0, 0, 0))
						{
							iLocal_412 = 1;
						}
					}
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_502();
					}
					GlobalFunc_10693(&uLocal_260, iLocal_289, 0, 0, 1, 1, 1);
					func_269();
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_289, 2.2f);
					func_289();
				}
			}
			else
			{
				GlobalFunc_846(&uLocal_296);
				bLocal_335 = true;
				bLocal_336 = func_278();
				func_288();
				iLocal_92 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_846(&uLocal_296);
			if (func_183())
			{
				HUD::CLEAR_PRINTS();
			}
			GlobalFunc_4948(&uLocal_260, 0, 0);
			func_179(6);
			iLocal_92 = 0;
			iLocal_91 = 7;
			break;
	}
}



void func_269()//Position - 0x25FA0
{
	if (!bLocal_603)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_602) > 3000)
		{
			func_272(1);
			if (((GlobalFunc_1986(Local_583[0 /*3*/], Local_583[2 /*3*/], 1f) && !PED::IS_PED_IN_MELEE_COMBAT(iLocal_289)) && !PED::IS_PED_RAGDOLL(iLocal_289)) && !TASK::IS_PED_GETTING_UP(iLocal_289))
			{
				TASK::TASK_COWER(iLocal_289, -1);
				bLocal_603 = true;
			}
		}
		if (!bLocal_603)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_289, 0))
			{
				if (((MISC::GET_GAME_TIMER() > uLocal_605[0] && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 20f)) && !PED::IS_PED_RAGDOLL(iLocal_289)) && !TASK::IS_PED_GETTING_UP(iLocal_289))
				{
					func_270(0, 0);
				}
				else if (MISC::GET_GAME_TIMER() > uLocal_605[1])
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_289, 0f, 1f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_289, 0f, 7f, 5f), 5f, 0, 1, 0) && !PED::IS_PED_RAGDOLL(iLocal_289)) && !TASK::IS_PED_GETTING_UP(iLocal_289))
					{
						func_270(0, 1);
					}
					else
					{
						uLocal_605[1] = MISC::GET_GAME_TIMER() + 2000;
					}
				}
			}
			else if (!bLocal_604 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_289, 0))
			{
				func_270(1, 1);
			}
		}
	}
}

void func_270(int iParam0, bool bParam1)//Position - 0x260F6
{
	if (iParam0 == 0)
	{
		TASK::TASK_SMART_FLEE_COORD(iLocal_289, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2000f, -1, 0, 0);
		uLocal_605[0] = MISC::GET_GAME_TIMER() + 10000;
		if (bParam1)
		{
			uLocal_605[1] = MISC::GET_GAME_TIMER() + 10000;
		}
		else
		{
			uLocal_605[1] = MISC::GET_GAME_TIMER() + 2000;
		}
		bLocal_604 = false;
	}
	else
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_289, PLAYER::PLAYER_PED_ID(), 2000f, -1, 0, 0);
		uLocal_605[0] = MISC::GET_GAME_TIMER() + 10000;
		if (bParam1)
		{
			uLocal_605[1] = MISC::GET_GAME_TIMER() + 10000;
		}
		else
		{
			uLocal_605[1] = MISC::GET_GAME_TIMER() + 2000;
		}
		bLocal_604 = true;
	}
}


void func_272(bool bParam0)//Position - 0x261B2
{
	iLocal_602 = MISC::GET_GAME_TIMER();
	Local_583[0 /*3*/] = { Local_583[1 /*3*/] };
	Local_583[1 /*3*/] = { Local_583[2 /*3*/] };
	Local_583[2 /*3*/] = { Local_583[3 /*3*/] };
	Local_583[3 /*3*/] = { Local_583[4 /*3*/] };
	Local_583[4 /*3*/] = { Local_583[5 /*3*/] };
	if (bParam0)
	{
		Local_583[5 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_289, 1) };
	}
	else
	{
		Local_583[5 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_276, 1) };
	}
}

void func_273()//Position - 0x26239
{
	bool bVar0;
	
	if (func_276() && MISC::GET_GAME_TIMER() > iLocal_411)
	{
		if (iLocal_379 == 0 || iLocal_379 == 1)
		{
			if (GlobalFunc_115(iLocal_272) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_272, 15f)))
			{
				iLocal_379 = 4;
			}
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_373) > 4000)
			{
				GlobalFunc_173(&uLocal_95, 4, iLocal_289, "Stalker", 0, 1);
				iLocal_416 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_272) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			if (GlobalFunc_115(iLocal_289))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 25f))
				{
					if (bVar0 && iLocal_414 > iLocal_415)
					{
						if (iLocal_415 < 3)
						{
							iLocal_416 = 5;
						}
						else if (iLocal_414 < 3)
						{
							iLocal_416 = 2;
						}
						else
						{
							iLocal_416 = 3;
						}
					}
					else if (iLocal_414 < 3)
					{
						iLocal_416 = 2;
					}
					else if (bVar0 && iLocal_415 < 3)
					{
						iLocal_416 = 5;
					}
					else
					{
						iLocal_416 = 3;
					}
				}
				else if (bVar0)
				{
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, (80f * 0.75f)))
					{
						if (!bLocal_413)
						{
							iLocal_416 = 8;
						}
						else if (iLocal_415 < 3)
						{
							iLocal_416 = 5;
						}
						else
						{
							bLocal_375 = false;
							bLocal_409 = false;
							iLocal_373 = MISC::GET_GAME_TIMER();
							iLocal_416 = 0;
						}
					}
					else if (iLocal_415 < 3)
					{
						iLocal_416 = 5;
					}
					else
					{
						bLocal_375 = false;
						bLocal_409 = false;
						iLocal_373 = MISC::GET_GAME_TIMER();
						iLocal_416 = 0;
					}
				}
				else if ((!bLocal_413 && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, (80f * 0.5f))) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 15f))
				{
					iLocal_416 = 8;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(iLocal_289))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 25f))
				{
					if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_95, Local_417[iLocal_414 /*3*/].f_1, Local_417[iLocal_414 /*3*/].f_2, 7, 1, 0, 0))
						{
							bLocal_374 = true;
							bLocal_375 = false;
							bLocal_409 = false;
							iLocal_416 = 10;
						}
					}
					else if (GlobalFunc_10618(&uLocal_95, Local_417[iLocal_414 /*3*/].f_1, Local_417[iLocal_414 /*3*/].f_2, 7, 0, 0, 0))
					{
						bLocal_374 = true;
						bLocal_375 = false;
						bLocal_409 = false;
						iLocal_416 = 10;
					}
				}
				else
				{
					bLocal_374 = false;
					bLocal_375 = false;
					bLocal_409 = false;
					iLocal_373 = MISC::GET_GAME_TIMER();
					iLocal_416 = 0;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_115(iLocal_289))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 25f))
				{
					if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
					{
						if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_STWR", 7, 1, 0, 0))
						{
							bLocal_374 = true;
							bLocal_375 = false;
							bLocal_409 = false;
							iLocal_416 = 10;
						}
					}
					else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_STWR", 7, 0, 0, 0))
					{
						bLocal_374 = true;
						bLocal_375 = false;
						bLocal_409 = false;
						iLocal_416 = 10;
					}
				}
				else
				{
					bLocal_374 = false;
					bLocal_375 = false;
					bLocal_409 = false;
					iLocal_373 = MISC::GET_GAME_TIMER();
					iLocal_416 = 0;
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_427[iLocal_415 /*3*/].f_1, Local_427[iLocal_415 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_374 = false;
					bLocal_375 = true;
					bLocal_409 = false;
					iLocal_416 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, Local_427[iLocal_415 /*3*/].f_1, Local_427[iLocal_415 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_374 = false;
				bLocal_375 = true;
				bLocal_409 = false;
				iLocal_416 = 10;
			}
			break;
		
		case 8:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TNOGOF", 7, 1, 0, 0))
				{
					bLocal_413 = true;
					bLocal_374 = false;
					bLocal_375 = false;
					bLocal_409 = false;
					iLocal_416 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TNOGOF", 7, 0, 0, 0))
			{
				bLocal_413 = true;
				bLocal_374 = false;
				bLocal_375 = false;
				bLocal_409 = false;
				iLocal_416 = 10;
			}
			break;
		
		case 4:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_MESS", 7, 1, 0, 0))
				{
					iLocal_330 = MISC::GET_GAME_TIMER();
					bLocal_374 = false;
					bLocal_375 = false;
					iLocal_376 = 0;
					bLocal_409 = true;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_MESS", 7, 0, 0, 0))
			{
				iLocal_330 = MISC::GET_GAME_TIMER();
				bLocal_374 = false;
				bLocal_375 = false;
				iLocal_376 = 0;
				bLocal_409 = true;
				iLocal_379 = 10;
			}
			break;
		
		case 10:
			if (!GlobalFunc_111())
			{
				if (bLocal_374)
				{
					iLocal_414++;
				}
				else if (bLocal_375)
				{
					iLocal_415++;
				}
				if (bLocal_409)
				{
					iLocal_411 = MISC::GET_GAME_TIMER() + 15000;
				}
				iLocal_373 = MISC::GET_GAME_TIMER();
				iLocal_416 = 0;
			}
			else if (bLocal_374 && GlobalFunc_115(iLocal_289))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 25f))
				{
					GlobalFunc_5105();
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_6402() == 4)
					{
						GlobalFunc_4956();
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_289);
				}
			}
			else if (bLocal_375 && GlobalFunc_115(iLocal_272))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 1) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 25f))
				{
					GlobalFunc_5105();
				}
			}
			break;
		
		case 11:
			break;
	}
}



int func_276()//Position - 0x26B21
{
	int iVar0;
	
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_410 = MISC::GET_GAME_TIMER();
		return 1;
	}
	else
	{
		iVar0 = (MISC::GET_GAME_TIMER() - iLocal_410);
		if (iVar0 > 0 && iVar0 < 4500)
		{
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, int iParam5)//Position - 0x26B63
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *uParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*uParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_663(sParam1, 0, 0))
					{
						GlobalFunc_164(sParam2, 7500, 0);
					}
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY");
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_663(sParam2, 0, 0))
					{
						GlobalFunc_164(sParam1, 7500, 0);
					}
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iParam4) > 7500)
	{
		if (GlobalFunc_663(sParam1, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam1);
		}
		if (GlobalFunc_663(sParam2, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam2);
		}
	}
}

int func_278()//Position - 0x26C5E
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0) && PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
	{
		return 1;
	}
	else if (bLocal_335)
	{
		if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 10f))
		{
			return 1;
		}
		else if (GlobalFunc_775(iLocal_288, ENTITY::GET_ENTITY_COORDS(iLocal_289, 0), 10f))
		{
			return 1;
		}
		else if (func_279(iLocal_288, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
		{
			return 1;
		}
		else if (func_279(iLocal_288, iLocal_289, 1126825984, 1, 250, 7))
		{
			return 1;
		}
	}
	else if (func_279(iLocal_288, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26D21
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_287(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_282();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_282()//Position - 0x26FD3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_287(int iParam0, int iParam1)//Position - 0x27129
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_288()//Position - 0x27168
{
	iLocal_337 = 1;
	iLocal_339 = MISC::GET_GAME_TIMER();
}

void func_289()//Position - 0x2717B
{
	func_279(iLocal_288, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7);
	func_279(iLocal_288, iLocal_289, 1126825984, 1, 250, 7);
}























void func_312(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6)//Position - 0x27FBA
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (bParam5)
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_663(sParam2, 0, 0))
				{
					GlobalFunc_164(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || GlobalFunc_663(sParam1, 0, 0))
				{
					GlobalFunc_164(sParam2, 7500, 0);
				}
			}
		}
		*uParam3 = MISC::GET_GAME_TIMER();
		*uParam4 = MISC::GET_GAME_TIMER();
	}
}

void func_313()//Position - 0x28068
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_289, 1) };
	Local_583[0 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 15f) };
	Local_583[1 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 12f) };
	Local_583[2 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 9f) };
	Local_583[3 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 6f) };
	Local_583[4 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 3f) };
	Local_583[5 /*3*/] = { Var0 };
}

void func_314()//Position - 0x280F8
{
	switch (iLocal_92)
	{
		case 0:
			if (GlobalFunc_115(iLocal_289))
			{
				GlobalFunc_10693(&uLocal_260, iLocal_289, 0, 0, 1, 1, 1);
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 220f))
				{
					GlobalFunc_846(&uLocal_296);
					sLocal_572 = "MET1ESCAPE";
					iLocal_91 = 11;
					iLocal_92 = 0;
				}
				else
				{
					if (func_191(4) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
					{
						func_28(4);
					}
					iLocal_373 = MISC::GET_GAME_TIMER();
					iLocal_411 = MISC::GET_GAME_TIMER();
					iLocal_410 = (MISC::GET_GAME_TIMER() - 4500);
					iLocal_379 = 0;
					iLocal_371 = 0;
					iLocal_372 = 0;
					bLocal_374 = false;
					bLocal_375 = false;
					iLocal_376 = 0;
					bLocal_409 = false;
					iLocal_377 = (MISC::GET_GAME_TIMER() - 1000);
					Local_319[0 /*3*/] = { Local_478 };
					Local_319[1 /*3*/] = { Local_319[0 /*3*/] };
					Local_319[2 /*3*/] = { Local_319[1 /*3*/] };
					iLocal_329 = MISC::GET_GAME_TIMER();
					iLocal_330 = MISC::GET_GAME_TIMER();
					if (!iLocal_332)
					{
						iLocal_332 = 1;
						TASK::CLEAR_PED_TASKS(iLocal_289);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_289, Local_276, PLAYER::PLAYER_PED_ID(), 8, 25f, 786477, 100f, 1f, 1);
					}
					iLocal_602 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_115(Local_276))
					{
						Local_583[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Local_276, 1) };
						Local_583[1 /*3*/] = { Local_583[0 /*3*/] };
						Local_583[2 /*3*/] = { Local_583[1 /*3*/] };
					}
					func_330(&bLocal_608, &uLocal_609, &uLocal_610, &uLocal_611);
					iLocal_612 = MISC::GET_GAME_TIMER();
					if (HUD::DOES_BLIP_EXIST(uLocal_296))
					{
						GlobalFunc_2216(uLocal_296, iLocal_289, 220f, 0.75f, 0);
					}
					iLocal_92 = 1;
				}
				if (iLocal_304)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
					{
						iLocal_304 = 0;
						GlobalFunc_846(&uLocal_297);
						HUD::CLEAR_PRINTS();
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 1;
					uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
					func_28(5);
				}
				func_289();
			}
			else
			{
				GlobalFunc_4948(&uLocal_260, 0, 0);
				GlobalFunc_846(&uLocal_296);
				bLocal_335 = true;
				bLocal_336 = func_278();
				func_288();
				iLocal_92 = 0;
				iLocal_91 = 7;
				HUD::CLEAR_PRINTS();
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_289))
			{
				if (func_326())
				{
					GlobalFunc_846(&uLocal_296);
					iLocal_92 = 0;
					iLocal_91 = 6;
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_289, 0))
				{
					iLocal_92 = 0;
					iLocal_91 = 6;
				}
				else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 220f))
				{
					GlobalFunc_846(&uLocal_296);
					sLocal_572 = "MET1ESCAPE";
					iLocal_91 = 11;
					iLocal_92 = 0;
				}
				else
				{
					if (func_191(4) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
					{
						func_28(4);
					}
					func_324();
					func_322();
					if (iLocal_304)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
						{
							iLocal_304 = 0;
							GlobalFunc_846(&uLocal_297);
							HUD::CLEAR_PRINTS();
							if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
							{
								iLocal_305 = 0;
							}
							else
							{
								iLocal_305 = 1;
								iLocal_306 = 0;
								uLocal_297 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
								func_28(2);
							}
						}
						else if (func_191(6))
						{
							if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
							{
								func_28(6);
							}
						}
						else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
						{
							sLocal_572 = "MET1ABANDON";
							iLocal_92 = 0;
							iLocal_91 = 11;
						}
						else if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
						{
							GlobalFunc_502();
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
					{
						iLocal_304 = 1;
						uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
						if (!func_320())
						{
							func_28(5);
						}
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
					}
					else if (iLocal_305)
					{
						if (!iLocal_306 && !func_185())
						{
							iLocal_306 = 1;
							TASK::TASK_ENTER_VEHICLE(iLocal_288, iLocal_272, 20000, 0, 2f, 1, 0);
						}
						if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
						{
							iLocal_305 = 0;
							GlobalFunc_846(&uLocal_297);
						}
						else if (func_191(6))
						{
							if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
							{
								func_28(6);
							}
						}
						else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
						{
							sLocal_572 = "MET1ABANDON";
							iLocal_92 = 0;
							iLocal_91 = 11;
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
					{
						iLocal_305 = 1;
						iLocal_306 = 0;
						uLocal_297 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
						func_28(2);
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
					}
				}
				if ((HUD::DOES_BLIP_EXIST(uLocal_296) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
				{
					GlobalFunc_2216(uLocal_296, iLocal_289, 220f, 0.75f, 0);
				}
				GlobalFunc_10693(&uLocal_260, iLocal_289, 0, 0, 1, 1, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_319(1);
				}
				else
				{
					func_319(0);
				}
				func_289();
			}
			else
			{
				GlobalFunc_846(&uLocal_296);
				GlobalFunc_4948(&uLocal_260, 0, 0);
				bLocal_335 = true;
				func_288();
				bLocal_336 = func_278();
				iLocal_92 = 0;
				iLocal_91 = 7;
			}
			func_318();
			func_315();
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_315()//Position - 0x2860E
{
	if (iLocal_376 == 1 && (iLocal_379 == 0 || iLocal_379 == 1))
	{
		iLocal_379 = 6;
	}
	else
	{
		iLocal_376 = 0;
	}
	iLocal_378 = (MISC::GET_GAME_TIMER() - iLocal_377);
	if ((((iLocal_378 > 0 && iLocal_378 < 250) && (iLocal_379 == 0 || iLocal_379 == 1)) && ENTITY::GET_ENTITY_SPEED(iLocal_272) < 1.5f) && ENTITY::GET_ENTITY_SPEED(Local_276) > 3f)
	{
		iLocal_379 = 8;
	}
	if (func_317())
	{
		iLocal_377 = MISC::GET_GAME_TIMER();
	}
	if (func_276() && MISC::GET_GAME_TIMER() > iLocal_411)
	{
		if (iLocal_379 == 0 || iLocal_379 == 1)
		{
			iLocal_379 = 4;
		}
	}
	switch (iLocal_379)
	{
		case 0:
			if ((((MISC::GET_GAME_TIMER() - iLocal_373) > 4000 && GlobalFunc_115(iLocal_289)) && !func_183()) && !GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_95, 4, iLocal_289, "Stalker", 0, 1);
				iLocal_379 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_289))
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, (220f * 0.75f)))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_289, 0))
					{
						iLocal_379 = 8;
					}
				}
				else if (func_316() && (MISC::GET_GAME_TIMER() - iLocal_330) > 6000)
				{
					iLocal_379 = 7;
				}
				else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 50f))
				{
					if (iLocal_371 > iLocal_372)
					{
						if (iLocal_372 < 4)
						{
							iLocal_379 = 5;
						}
						else if (iLocal_371 < 5)
						{
							iLocal_379 = 2;
						}
						else
						{
							bLocal_374 = false;
							iLocal_373 = MISC::GET_GAME_TIMER();
							iLocal_379 = 0;
						}
					}
					else if (iLocal_371 < 5)
					{
						iLocal_379 = 2;
					}
					else if (iLocal_372 < 4)
					{
						iLocal_379 = 5;
					}
					else
					{
						bLocal_375 = false;
						iLocal_373 = MISC::GET_GAME_TIMER();
						iLocal_379 = 0;
					}
				}
				else if (iLocal_372 < 4)
				{
					iLocal_379 = 5;
				}
				else
				{
					bLocal_375 = false;
					iLocal_373 = MISC::GET_GAME_TIMER();
					iLocal_379 = 0;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_380[iLocal_371 /*3*/].f_1, Local_380[iLocal_371 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_374 = true;
					bLocal_375 = false;
					bLocal_409 = false;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, Local_380[iLocal_371 /*3*/].f_1, Local_380[iLocal_371 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_374 = true;
				bLocal_375 = false;
				bLocal_409 = false;
				iLocal_379 = 10;
			}
			break;
		
		case 5:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, Local_396[iLocal_372 /*3*/].f_1, Local_396[iLocal_372 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_374 = false;
					bLocal_375 = true;
					bLocal_409 = false;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, Local_396[iLocal_372 /*3*/].f_1, Local_396[iLocal_372 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_374 = false;
				bLocal_375 = true;
				bLocal_409 = false;
				iLocal_379 = 10;
			}
			break;
		
		case 8:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_GETHIM", 7, 1, 0, 0))
				{
					bLocal_374 = false;
					bLocal_375 = false;
					bLocal_409 = false;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_GETHIM", 7, 0, 0, 0))
			{
				bLocal_374 = false;
				bLocal_375 = false;
				bLocal_409 = false;
				iLocal_379 = 10;
			}
			break;
		
		case 6:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_BASH", 7, 1, 0, 0))
				{
					bLocal_374 = false;
					bLocal_375 = false;
					iLocal_376 = 0;
					bLocal_409 = false;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_BASH", 7, 0, 0, 0))
			{
				bLocal_374 = false;
				bLocal_375 = false;
				iLocal_376 = 0;
				bLocal_409 = false;
				iLocal_379 = 10;
			}
			break;
		
		case 7:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_STOP", 7, 1, 0, 0))
				{
					iLocal_330 = MISC::GET_GAME_TIMER();
					bLocal_374 = false;
					bLocal_375 = false;
					iLocal_376 = 0;
					bLocal_409 = false;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_STOP", 7, 0, 0, 0))
			{
				iLocal_330 = MISC::GET_GAME_TIMER();
				bLocal_374 = false;
				bLocal_375 = false;
				iLocal_376 = 0;
				bLocal_409 = false;
				iLocal_379 = 10;
			}
			break;
		
		case 4:
			if (GlobalFunc_663("MET1KSTKRED", 0, 0) || GlobalFunc_663("MET1KSTKBLU", 0, 0))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_MESS", 7, 1, 0, 0))
				{
					iLocal_330 = MISC::GET_GAME_TIMER();
					bLocal_374 = false;
					bLocal_375 = false;
					iLocal_376 = 0;
					bLocal_409 = true;
					iLocal_379 = 10;
				}
			}
			else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_MESS", 7, 0, 0, 0))
			{
				iLocal_330 = MISC::GET_GAME_TIMER();
				bLocal_374 = false;
				bLocal_375 = false;
				iLocal_376 = 0;
				bLocal_409 = true;
				iLocal_379 = 10;
			}
			break;
		
		case 10:
			if (!GlobalFunc_111())
			{
				if (bLocal_374)
				{
					iLocal_371++;
				}
				else if (bLocal_375)
				{
					iLocal_372++;
				}
				if (bLocal_409)
				{
					iLocal_411 = MISC::GET_GAME_TIMER() + 15000;
				}
				iLocal_373 = MISC::GET_GAME_TIMER();
				iLocal_379 = 0;
			}
			break;
		
		case 11:
			break;
	}
}

int func_316()//Position - 0x28B85
{
	if (GlobalFunc_1986(Local_319[0 /*3*/], Local_319[2 /*3*/], 2f))
	{
		return 1;
	}
	iLocal_330 = MISC::GET_GAME_TIMER();
	return 0;
}

int func_317()//Position - 0x28BB1
{
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_272))
	{
		if (GlobalFunc_115(Local_276) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_272, Local_276))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_318()//Position - 0x28BE5
{
	if ((MISC::GET_GAME_TIMER() - iLocal_329) > 3000)
	{
		Local_319[0 /*3*/] = { Local_319[1 /*3*/] };
		Local_319[1 /*3*/] = { Local_319[2 /*3*/] };
		Local_319[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_272, 1) };
		iLocal_329 = MISC::GET_GAME_TIMER();
	}
}

void func_319(int iParam0)//Position - 0x28C32
{
	if (iParam0 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_TRACEY_FOCUS_CAM"))
	{
		AUDIO::START_AUDIO_SCENE("M_E_TRACEY_FOCUS_CAM");
	}
	else if (iParam0 == 0 && AUDIO::IS_AUDIO_SCENE_ACTIVE("M_E_TRACEY_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("M_E_TRACEY_FOCUS_CAM");
	}
}

int func_320()//Position - 0x28C75
{
	float fVar0;
	
	if (GlobalFunc_115(Local_276))
	{
		fVar0 = GlobalFunc_739(ENTITY::GET_ENTITY_ROLL(Local_276), 0f, 360f);
		if (fVar0 > 150f && fVar0 < 210f)
		{
			return 1;
		}
	}
	return 0;
}


void func_322()//Position - 0x28CF9
{
	if (GlobalFunc_115(Local_276))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_602) > 3000)
		{
			func_272(0);
			if (GlobalFunc_1986(Local_583[3 /*3*/], Local_583[5 /*3*/], 2f) && func_323())
			{
				iLocal_91 = 6;
				iLocal_92 = 0;
			}
			else if (GlobalFunc_1986(Local_583[0 /*3*/], Local_583[5 /*3*/], 2f))
			{
				iLocal_91 = 6;
				iLocal_92 = 0;
			}
		}
	}
}

int func_323()//Position - 0x28D66
{
	if (GlobalFunc_775(iLocal_272, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_276, 0f, 3.2f, 0.5f), 3f) || GlobalFunc_775(iLocal_272, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_276, 0f, -3.2f, 0.5f), 3f))
	{
		return 1;
	}
	return 0;
}

void func_324()//Position - 0x28DB0
{
	if (iLocal_616 == 0)
	{
		if (bLocal_608 && (MISC::GET_GAME_TIMER() - iLocal_612) > iLocal_614)
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_616 = 2;
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_612) > iLocal_615 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_276, 0f, -0.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_276, 0f, 6f, 2f), 12f, 0, 1, 0))
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_616 = 1;
		}
	}
	if (iLocal_616 == 1)
	{
		if (bLocal_608)
		{
			iLocal_616 = 2;
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_612) < iLocal_613 && func_325(1))
		{
			PED::SET_IK_TARGET(iLocal_289, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 300, 300);
		}
		else
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_616 = 0;
		}
	}
	if (iLocal_616 == 2)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_612) < iLocal_613 && func_325(0))
		{
			PED::SET_IK_TARGET(iLocal_289, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_616 = 0;
		}
	}
}

int func_325(int iParam0)//Position - 0x28EC5
{
	if (iParam0 == 1 || iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_326()//Position - 0x28EE3
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_276))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_276) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_276, 0))
		{
			return 1;
		}
		if (func_328(Local_276, &bLocal_608, &uLocal_609, &uLocal_610, &uLocal_611, 6, 1082130432))
		{
			return 1;
		}
		if (bLocal_608)
		{
			iLocal_376 = 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_276))
		{
			if (iLocal_317)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_318) > 7000)
				{
					return 1;
				}
			}
			else
			{
				iLocal_317 = 1;
				iLocal_318 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			if (iLocal_317)
			{
			}
			iLocal_317 = 0;
		}
		if (func_327(Local_276))
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x28F88
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
	{
		return 1;
	}
	return 0;
}

int func_328(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6)//Position - 0x28FCA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
		{
			if ((!*uParam1 && (MISC::GET_GAME_TIMER() - *uParam2) > 500) && *uParam4 >= fParam6)
			{
				*uParam1 = 1;
				*uParam3++;
				if (*uParam3 >= iParam5)
				{
					return 1;
				}
			}
		}
		else if (*uParam1)
		{
			*uParam2 = MISC::GET_GAME_TIMER();
			*uParam1 = 0;
		}
		Var1 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iVar0, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
		Var4 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) - ENTITY::GET_ENTITY_VELOCITY(iVar0) };
		*uParam4 = GlobalFunc_168(Var4, Var1);
	}
	return 0;
}


void func_330(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x291D4
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0f;
}

void func_331()//Position - 0x291EC
{
	var uVar0;
	
	switch (iLocal_92)
	{
		case 0:
			if (!func_336())
			{
				func_334();
				STREAMING::REQUEST_ANIM_DICT("missmichael_event@tracy");
				STREAMING::REQUEST_ANIM_DICT(sLocal_295);
				if (iLocal_304)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
					{
						iLocal_304 = 0;
						GlobalFunc_846(&uLocal_297);
						HUD::CLEAR_PRINTS();
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 1;
					uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
					func_28(5);
				}
				if (!iLocal_333 && GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_LOCX", 7, 0, 0, 0))
				{
					iLocal_333 = 1;
				}
				if (func_332(Local_276.f_6, Local_276.f_9, 0))
				{
					iLocal_331 = 0;
					iLocal_332 = 0;
					iLocal_334 = 0;
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_276, Local_276.f_10);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_276, ENTITY::GET_ENTITY_COORDS(iLocal_272, 1), 4, 35f, 2883621, 10f, 12f, 1);
					TASK::TASK_VEHICLE_ESCORT(0, Local_276, iLocal_272, -1, 25f, 2883621, -1082130432, 20, 1101004800);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_289, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					GlobalFunc_Checkpoint1(3, "Stalker appears (CP2)", 0, 0, 0, 1);
					bLocal_335 = false;
					func_289();
					iLocal_92 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_304)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 0;
					GlobalFunc_846(&uLocal_297);
					HUD::CLEAR_PRINTS();
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				iLocal_304 = 1;
				uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
				func_28(5);
			}
			if (GlobalFunc_115(iLocal_289))
			{
				if (GlobalFunc_115(Local_276))
				{
					if (!iLocal_334)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missmichael_event@tracy") && GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_TENDb", 7, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_288, "missmichael_event@tracy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							STREAMING::REMOVE_ANIM_DICT("missmichael_event@tracy");
							if (!HUD::DOES_BLIP_EXIST(uLocal_296))
							{
								uLocal_296 = GlobalFunc_5743(Local_276, 0, 5);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_296, "MET1LBSTALK");
								func_179(4);
							}
							iLocal_334 = 1;
						}
					}
					else
					{
						if (func_191(4) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
						{
							func_28(4);
						}
						if (!iLocal_331)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_276, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 1))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_289);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_276);
								iLocal_331 = 1;
							}
							else if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 15f))
							{
								iLocal_331 = 1;
							}
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_289, Local_276, PLAYER::PLAYER_PED_ID(), 8, 25f, 786477, 100f, 1f, 1);
							iLocal_332 = 1;
							iLocal_92 = 2;
						}
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_289, 220f))
						{
							GlobalFunc_846(&uLocal_296);
							GlobalFunc_846(&uLocal_297);
							sLocal_572 = "MET1ESCAPE";
							iLocal_91 = 11;
							iLocal_92 = 0;
						}
						GlobalFunc_10693(&uLocal_260, iLocal_289, 0, 0, 1, 1, 1);
						if (HUD::DOES_BLIP_EXIST(uLocal_296))
						{
							GlobalFunc_2216(uLocal_296, iLocal_289, 220f, 0.75f, 0);
						}
					}
				}
				else
				{
					iLocal_91 = 6;
					iLocal_92 = 0;
				}
				func_289();
			}
			else
			{
				GlobalFunc_846(&uLocal_296);
				bLocal_335 = true;
				bLocal_336 = func_278();
				func_288();
				iLocal_92 = 0;
				iLocal_91 = 7;
				HUD::CLEAR_PRINTS();
			}
			break;
		
		case 2:
			PED::SET_CREATE_RANDOM_COPS(1);
			if (func_191(4) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
			{
				func_28(4);
			}
			if (iLocal_304)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 0;
					GlobalFunc_846(&uLocal_297);
					HUD::CLEAR_PRINTS();
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				iLocal_304 = 1;
				uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
				func_28(5);
			}
			func_289();
			iLocal_92 = 0;
			iLocal_91 = 5;
			break;
	}
}

int func_332(struct<3> Param0, float fParam3, int iParam4)//Position - 0x295D1
{
	if (iParam4 && !iLocal_291)
	{
		STREAMING::REQUEST_MODEL(iLocal_290);
		STREAMING::REQUEST_MODEL(Local_276.f_1);
		iLocal_291 = 1;
	}
	if (GlobalFunc_115(Local_276) && GlobalFunc_115(iLocal_289))
	{
		return 1;
	}
	else if (iLocal_291)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_290) && STREAMING::HAS_MODEL_LOADED(Local_276.f_1))
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Local_276.f_6, 5f, 0, 0, 0, 0, 0);
			Local_276 = VEHICLE::CREATE_VEHICLE(Local_276.f_1, Param0, fParam3, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_276.f_1);
			VEHICLE::SET_VEHICLE_COLOURS(Local_276, 145, 111);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_276);
			VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_276, 1);
			VEHICLE::SET_CONVERTIBLE_ROOF_LATCH_STATE(Local_276, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_276, 1, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_276, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_276);
			GlobalFunc_534(Local_276, 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_276, "M_E_TRACEY_STALKERS_CAR_GROUP", 0);
			iLocal_316 = 1;
			iLocal_289 = PED::CREATE_PED_INSIDE_VEHICLE(Local_276, 26, iLocal_290, -1, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_289, 4, 1, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_290);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_289, 1);
			PED::SET_PED_KEEP_TASK(iLocal_289, 1);
			GlobalFunc_173(&uLocal_95, 4, iLocal_289, "Stalker", 0, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_289, 281, 1);
			iLocal_291 = 0;
			iLocal_625 = MISC::GET_GAME_TIMER() + 1000;
			return 1;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_290);
		STREAMING::REQUEST_MODEL(Local_276.f_1);
		iLocal_291 = 1;
	}
	return 0;
}


void func_334()//Position - 0x2977C
{
	int iVar0;
	
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_486[3 /*8*/], Local_486[3 /*8*/].f_3))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_276.f_1, Local_545[0 /*3*/], 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		Local_276.f_6 = { Local_545[iVar0 /*3*/] };
		Local_276.f_9 = fLocal_564[iVar0];
		Local_276.f_10 = 15f;
	}
	else
	{
		if (func_335())
		{
			if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_276.f_1, Local_545[2 /*3*/], 0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 3;
			}
		}
		else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_276.f_1, Local_545[4 /*3*/], 0))
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 5;
		}
		Local_276.f_6 = { Local_545[iVar0 /*3*/] };
		Local_276.f_9 = fLocal_564[iVar0];
		Local_276.f_10 = 25f;
	}
}

int func_335()//Position - 0x29852
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (Var0.f_2 < Local_486[3 /*8*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_336()//Position - 0x2987C
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		sLocal_572 = "MET1CPSTALK";
		iLocal_91 = 11;
		iLocal_92 = 0;
		return 1;
	}
	return 0;
}

void func_337()//Position - 0x298A6
{
	if (iLocal_624 == 1 && MISC::GET_GAME_TIMER() > iLocal_623)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_624 = 0;
	}
	switch (iLocal_92)
	{
		case 0:
			if (GlobalFunc_115(iLocal_272))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 1))
				{
					iLocal_304 = 0;
				}
				else
				{
					iLocal_304 = 1;
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 1))
				{
					iLocal_305 = 0;
				}
				else
				{
					iLocal_305 = 1;
				}
				iLocal_519 = 0;
				iLocal_315 = 0;
				Local_319[0 /*3*/] = { Local_478 };
				Local_319[1 /*3*/] = { Local_319[0 /*3*/] };
				Local_319[2 /*3*/] = { Local_319[1 /*3*/] };
				iLocal_329 = MISC::GET_GAME_TIMER();
				iLocal_330 = MISC::GET_GAME_TIMER();
				iLocal_92 = 1;
				func_192();
			}
			break;
		
		case 1:
			if (!func_336())
			{
				func_318();
				func_192();
				if (iLocal_304)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
					{
						iLocal_304 = 0;
						GlobalFunc_846(&uLocal_296);
						HUD::CLEAR_PRINTS();
						if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
						{
							iLocal_305 = 0;
							if (iLocal_315 == 5 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_486[iLocal_519 /*8*/], Local_486[iLocal_519 /*8*/].f_3))
							{
								uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
							}
							else if (iLocal_315 == 1)
							{
								iLocal_315 = 2;
							}
						}
						else
						{
							iLocal_305 = 1;
							iLocal_306 = 0;
						}
					}
					else if (func_340(iLocal_288, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_288);
						TASK::TASK_SMART_FLEE_PED(iLocal_288, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						if (GlobalFunc_111())
						{
							if (GlobalFunc_6402() == 3)
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						sLocal_572 = "MET1TRASCARE";
						iLocal_91 = 11;
						iLocal_92 = 0;
					}
					else if (func_191(6))
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
						{
							func_28(6);
						}
					}
					else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
					{
						sLocal_572 = "MET1ABANDON";
						iLocal_92 = 0;
						iLocal_91 = 11;
					}
					else if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
					{
						GlobalFunc_502();
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 1;
					GlobalFunc_846(&uLocal_296);
					uLocal_296 = GlobalFunc_5743(iLocal_272, 1, 5);
					func_28(5);
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
				}
				else if (iLocal_305)
				{
					if (!iLocal_306 && !func_185())
					{
						iLocal_306 = 1;
						TASK::TASK_ENTER_VEHICLE(iLocal_288, iLocal_272, 20000, 0, 2f, 1, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
					{
						iLocal_305 = 0;
						GlobalFunc_846(&uLocal_296);
						if (iLocal_519 < 4)
						{
							if (iLocal_315 == 1)
							{
								iLocal_315 = 2;
							}
							else if (iLocal_315 == 6)
							{
								iLocal_315 = 7;
							}
						}
					}
					else if (func_191(6))
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 60f))
						{
							func_28(6);
						}
					}
					else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 160f))
					{
						sLocal_572 = "MET1ABANDON";
						iLocal_92 = 0;
						iLocal_91 = 11;
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
				{
					iLocal_305 = 1;
					iLocal_306 = 0;
					GlobalFunc_846(&uLocal_296);
					uLocal_296 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
					func_28(2);
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
				}
				else
				{
					switch (iLocal_315)
					{
						case 0:
							if (!func_185())
							{
								if (GlobalFunc_10618(&uLocal_95, "MET1AUD", Local_486[iLocal_519 /*8*/].f_4, 8, 0, 0, 0))
								{
									iLocal_315 = 1;
								}
							}
							break;
						
						case 1:
							if (GlobalFunc_111())
							{
								iLocal_315 = 2;
							}
							break;
						
						case 2:
							if (GlobalFunc_111())
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= Local_486[iLocal_519 /*8*/].f_7)
								{
									uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
									iLocal_315 = 3;
								}
							}
							else
							{
								uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
								iLocal_315 = 3;
							}
							break;
						
						case 3:
							if (!HUD::DOES_BLIP_EXIST(uLocal_296))
							{
								uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
							}
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_486[iLocal_519 /*8*/], Local_486[iLocal_519 /*8*/].f_3))
							{
								iLocal_315 = 5;
							}
							else if (!GlobalFunc_111())
							{
								iLocal_542 = MISC::GET_GAME_TIMER() + 2000;
								iLocal_315 = 4;
							}
							break;
						
						case 4:
							if (!HUD::DOES_BLIP_EXIST(uLocal_296))
							{
								uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
							}
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_486[iLocal_519 /*8*/], Local_486[iLocal_519 /*8*/].f_3))
							{
								iLocal_315 = 5;
							}
							else if (!GlobalFunc_111() && MISC::GET_GAME_TIMER() > iLocal_542)
							{
								if (!func_185())
								{
									if (bLocal_311 && !MISC::ARE_STRINGS_EQUAL(Local_486[iLocal_519 /*8*/].f_6, "NULL"))
									{
										if (GlobalFunc_10618(&uLocal_95, "MET1AUD", Local_486[iLocal_519 /*8*/].f_6, 8, 0, 0, 0))
										{
											iLocal_315 = 5;
										}
									}
									else if (GlobalFunc_10618(&uLocal_95, "MET1AUD", Local_486[iLocal_519 /*8*/].f_5, 8, 0, 0, 0))
									{
										iLocal_315 = 5;
									}
								}
							}
							break;
						
						case 5:
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_486[iLocal_519 /*8*/], Local_486[iLocal_519 /*8*/].f_3))
							{
								iLocal_519++;
								GlobalFunc_846(&uLocal_296);
								func_339();
								if (iLocal_519 < 4 && GlobalFunc_111())
								{
									GlobalFunc_5105();
									iLocal_315 = 6;
								}
								else
								{
									if (iLocal_519 == 4 && GlobalFunc_111())
									{
										GlobalFunc_5105();
									}
									iLocal_544 = 0;
									iLocal_315 = 7;
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(uLocal_296))
							{
								uLocal_296 = GlobalFunc_2324(Local_486[iLocal_519 /*8*/], 5, 1);
							}
							else
							{
								func_338();
							}
							break;
						
						case 6:
							if (!GlobalFunc_111())
							{
								iLocal_544 = 1;
								iLocal_542 = (MISC::GET_GAME_TIMER() + iLocal_543);
								iLocal_315 = 7;
							}
							break;
						
						case 7:
							if (iLocal_544)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_542)
								{
									iLocal_544 = 0;
								}
							}
							else if (iLocal_519 < 4)
							{
								iLocal_542 = MISC::GET_GAME_TIMER();
								iLocal_315 = 0;
							}
							else
							{
								iLocal_333 = 0;
								STREAMING::REQUEST_ANIM_DICT("missmichael_event@tracy");
								iLocal_92 = 2;
							}
							break;
						}
					}
			}
			if (iLocal_519 >= 2)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			}
			break;
		
		case 2:
			if (!func_336())
			{
				GlobalFunc_846(&uLocal_296);
				if (iLocal_304)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
					{
						iLocal_304 = 0;
						GlobalFunc_846(&uLocal_297);
						HUD::CLEAR_PRINTS();
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
				{
					iLocal_304 = 1;
					uLocal_297 = GlobalFunc_5743(iLocal_272, 1, 5);
					func_28(5);
				}
				func_332(0f, 0f, 0f, 0f, 1);
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_LOCX", 7, 0, 0, 0))
				{
					iLocal_333 = 1;
				}
				func_334();
				iLocal_91 = 4;
				iLocal_92 = 0;
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			break;
	}
}

void func_338()//Position - 0x29F64
{
	if (((!GlobalFunc_111() && !func_185()) && PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
	{
		if (func_316() && (MISC::GET_GAME_TIMER() - iLocal_330) > 18000)
		{
			GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_NOTGO", 4, 0, 0, 0);
			iLocal_330 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_339()//Position - 0x29FD0
{
	var uVar0[2];
	struct<3> Var3[4];
	struct<5> Var16;
	struct<4> Var27;
	
	Var16 = 2;
	Var16.f_1 = 4;
	Var16.f_1.f_5 = 4;
	Var27 = 2;
	Var27.f_1 = 3;
	Var27.f_1.f_4 = 3;
	Var3[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_272, -8f, 2f, 0f) };
	Var3[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_272, -8f, 8f, 0f) };
	Var3[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_272, 8f, 2f, 0f) };
	Var3[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_272, 8f, 8f, 0f) };
	Var27[0 /*4*/][0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Var27[0 /*4*/][0] < 2)
	{
		Var27[0 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(2, 3);
	}
	else
	{
		Var27[0 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
	}
	if (Var27[0 /*4*/][0] > 1)
	{
		Var27[0 /*4*/][2] = MISC::GET_RANDOM_INT_IN_RANGE(2, 3);
	}
	else
	{
		Var27[0 /*4*/][2] = MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
	}
	Var16[0 /*5*/][0] = MISC::GET_RANDOM_INT_IN_RANGE(300, 600);
	Var16[0 /*5*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(400, 1000);
	Var16[0 /*5*/][2] = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
	Var16[0 /*5*/][3] = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
	TASK::OPEN_SEQUENCE_TASK(&(uVar0[0]));
	TASK::TASK_PAUSE(0, Var16[0 /*5*/][0]);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[0 /*4*/][0] /*3*/], Var16[0 /*5*/][1], 2048, 2);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[0 /*4*/][1] /*3*/], Var16[0 /*5*/][2], 2048, 2);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[0 /*4*/][2] /*3*/], Var16[0 /*5*/][3], 2048, 2);
	TASK::CLOSE_SEQUENCE_TASK(uVar0[0]);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_288, uVar0[0]);
	TASK::CLEAR_SEQUENCE_TASK(&(uVar0[0]));
	Var27[1 /*4*/][0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Var27[0 /*4*/][0] == Var27[1 /*4*/][0])
	{
		Var27[1 /*4*/][0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (Var27[1 /*4*/][0] < 2)
	{
		Var27[1 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(2, 3);
	}
	else
	{
		Var27[1 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
	}
	if (Var27[1 /*4*/][0] > 1)
	{
		Var27[1 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(2, 3);
	}
	else
	{
		Var27[1 /*4*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
	}
	Var16[1 /*5*/][0] = 0;
	Var16[1 /*5*/][1] = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
	Var16[1 /*5*/][2] = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
	Var16[1 /*5*/][3] = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
	TASK::OPEN_SEQUENCE_TASK(&(uVar0[1]));
	TASK::TASK_PAUSE(0, Var16[1 /*5*/][0]);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[1 /*4*/][0] /*3*/], Var16[1 /*5*/][1], 2048, 2);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[1 /*4*/][1] /*3*/], Var16[1 /*5*/][2], 2048, 2);
	TASK::TASK_LOOK_AT_COORD(0, Var3[Var27[1 /*4*/][2] /*3*/], Var16[1 /*5*/][3], 2048, 2);
	TASK::CLOSE_SEQUENCE_TASK(uVar0[1]);
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0[1]);
	TASK::CLEAR_SEQUENCE_TASK(&(uVar0[1]));
}

int func_340(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2A2F3
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_341(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0, float fParam1)//Position - 0x2A3AE
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_342(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_342(int iParam0, float fParam1)//Position - 0x2A424
{
	return func_279(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}








void func_350()//Position - 0x2A81D
{
	var uVar0;
	
	switch (iLocal_92)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_295);
			if (!func_336())
			{
				if (!func_2())
				{
					if (((func_360(&iLocal_288, Local_482, iLocal_485, 1) && func_353(&iLocal_272, 15, Local_478, fLocal_481, 1, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_295)) && GlobalFunc_115(iLocal_272))
					{
						iLocal_292 = 1;
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_288, 1);
						GlobalFunc_200(&uLocal_95, 3);
						GlobalFunc_173(&uLocal_95, 3, iLocal_288, "TRACEY", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_288, 32, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_288, 26, 1);
						func_352();
						TASK::TASK_PLAY_ANIM(iLocal_288, sLocal_295, "nervous_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_288, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_272, 1);
						VEHICLE::SET_VEHICLE_STRONG(iLocal_272, 1);
						VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_272, 1);
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_272);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_272, 1);
						GlobalFunc_534(iLocal_272, 1);
						iLocal_273 = 1;
						PED::SET_CREATE_RANDOM_COPS(0);
						iLocal_368 = MISC::GET_GAME_TIMER();
						iLocal_369 = 0;
						iLocal_370 = 0;
						iLocal_303 = 0;
						iLocal_310 = 0;
						iLocal_92 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_94 == 0)
			{
				if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_478, 200f))
				{
					iLocal_94 = 1;
				}
			}
			else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_478, 300f))
			{
				iLocal_94 = 0;
			}
			if (!func_2())
			{
				if (!func_336())
				{
					switch (iLocal_303)
					{
						case 0:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 246.1479f, -39.21085f, 67.89664f, 202.6635f, -23.77725f, 72.90416f, 22f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 233.7891f, -45.51515f, 67.57388f, 229.9916f, -55.96275f, 72.28979f, 12.5f, 0, 1, 0))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_PLAY_ANIM(0, sLocal_295, "breakout", 8f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_272, 60000, 0, 2f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::CLEAR_PED_TASKS(iLocal_288);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 4000, 0, 3);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_288, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
								RECORDING::_0x48621C9FCA3EBD28(3);
								iLocal_623 = MISC::GET_GAME_TIMER() + 10000;
								iLocal_624 = 1;
								iLocal_303 = 1;
							}
							else
							{
								func_351();
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_SEES", 7, 1, 0, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
							{
								GlobalFunc_Checkpoint1(2, "Met Tracey (CP2)", 0, 0, 0, 1);
								iLocal_93 = 4;
								iLocal_307 = MISC::GET_GAME_TIMER();
								GlobalFunc_846(&uLocal_296);
								uLocal_296 = GlobalFunc_5743(iLocal_272, 1, 5);
								func_28(1);
								iLocal_303 = 2;
							}
							if (iLocal_624 == 1 && MISC::GET_GAME_TIMER() > iLocal_623)
							{
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_624 = 0;
							}
							TASK::TASK_LOOK_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 2000, 2048, 4);
							break;
						
						case 2:
							if (((!iLocal_310 && !GlobalFunc_111()) && !GlobalFunc_663("MET1TCAR", 0, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_GETIN", 7, 0, 0, 0))
								{
									iLocal_310 = 1;
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
							{
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
								if (PED::IS_PED_IN_VEHICLE(iLocal_288, iLocal_272, 0))
								{
									HUD::CLEAR_PRINTS();
									TASK::CLEAR_PED_TASKS(iLocal_288);
									func_179(3);
									iLocal_92 = 2;
								}
								else if (func_191(2))
								{
									GlobalFunc_846(&uLocal_296);
									uLocal_296 = GlobalFunc_4955(iLocal_288, 1, 1, 5);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_296, "MET1LBTRAC");
									func_28(2);
								}
							}
							TASK::TASK_LOOK_AT_ENTITY(iLocal_288, PLAYER::PLAYER_PED_ID(), 2000, 2048, 4);
							if (iLocal_624 == 1 && MISC::GET_GAME_TIMER() > iLocal_623)
							{
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_624 = 0;
							}
							break;
					}
					if (iLocal_303 != 0)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 100f))
						{
							sLocal_572 = "MET1ABANDON";
							iLocal_91 = 11;
							iLocal_92 = 0;
						}
						else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_288, 50f))
						{
							func_28(6);
						}
					}
					if (func_340(iLocal_288, 1, 1116471296, 1126825984, 1, 0, 0, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_288);
						TASK::TASK_SMART_FLEE_PED(iLocal_288, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						if (GlobalFunc_111())
						{
							if (GlobalFunc_6402() == 3)
							{
								GlobalFunc_4956();
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						sLocal_572 = "MET1TRASCARE";
						iLocal_91 = 11;
						iLocal_92 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (!func_336())
			{
				GlobalFunc_846(&uLocal_296);
				iLocal_92 = 0;
				iLocal_91 = 3;
				func_194();
			}
			if (iLocal_624 == 1 && MISC::GET_GAME_TIMER() > iLocal_623)
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_624 = 0;
			}
			break;
	}
}

void func_351()//Position - 0x2ACF6
{
	switch (iLocal_370)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_368) > 5000 && GlobalFunc_155(iLocal_288, PLAYER::PLAYER_PED_ID(), 25f))
			{
				iLocal_370 = 9;
			}
			break;
		
		case 9:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_10618(&uLocal_95, "MET1AUD", "MET1_PACE", 7, 0, 0, 0))
				{
					if (iLocal_573 != 2)
					{
						func_179(2);
					}
					iLocal_370 = 10;
				}
			}
			break;
		
		case 10:
			if (!GlobalFunc_111())
			{
				iLocal_369++;
				if (iLocal_369 < 4)
				{
					iLocal_368 = MISC::GET_GAME_TIMER();
					iLocal_370 = 0;
				}
				else
				{
					iLocal_370 = 11;
				}
			}
			break;
		
		case 11:
			break;
	}
}

void func_352()//Position - 0x2ADAD
{
	if (!iLocal_293)
	{
		PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_294);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_294, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_294);
		iLocal_293 = 1;
	}
	if (PED::IS_PED_IN_GROUP(iLocal_288))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_288);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_288, iLocal_294);
}

int func_353(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x2AE01
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				GlobalFunc_7216(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*iParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}







int func_360(int iParam0, struct<3> Param1, int iParam4, bool bParam5)//Position - 0x2BC4B
{
	int iVar0;
	
	iVar0 = GlobalFunc_4946(15);
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		GlobalFunc_69(iParam0);
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, iParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 1, 0, 0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_625 = MISC::GET_GAME_TIMER() + 1000;
		return 1;
	}
	return 0;
}

void func_361()//Position - 0x2BCCA
{
	switch (iLocal_92)
	{
		case 0:
			func_28(0);
			if (!HUD::DOES_BLIP_EXIST(uLocal_296))
			{
				uLocal_296 = func_363(Local_482, 1);
				GlobalFunc_2269(&uLocal_296, 237.2897f, -60.5704f, 68.4345f, 70.9753f);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_304 = 0;
				func_179(1);
			}
			else
			{
				iLocal_304 = 1;
			}
			iLocal_92 = 1;
			break;
		
		case 1:
			if (!func_2())
			{
				if (iLocal_304 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_304 = 0;
					func_179(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_91 = 10;
					iLocal_92 = 0;
				}
				else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_478, 200f))
				{
					iLocal_92 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_2())
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_295);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_533[0 /*3*/], Local_533[1 /*3*/], Local_533.f_7, 0, 0, 1);
				uLocal_541 = PED::ADD_SCENARIO_BLOCKING_AREA(227.4f, -66.5f, 67.5f, 249f, -30.8f, 72.5f, 0, 1, 1, 1);
				MISC::CLEAR_AREA(Local_478, 30f, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_478, 30f, 0, 0, 0, 0, 0);
				iLocal_92 = 0;
				iLocal_91 = 2;
			}
			break;
	}
}


int func_363(struct<3> Param0, int iParam3)//Position - 0x2BE46
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(uVar0, 7);
	HUD::SET_BLIP_SCALE(iVar0, 0.7f);
	HUD::SET_BLIP_COLOUR(iVar0, 3);
	HUD::SET_BLIP_ROUTE(iVar0, iParam3);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "MET1LBTRAC");
	return iVar0;
}

void func_364()//Position - 0x2BE85
{
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		func_179(0);
		GlobalFunc_10718(0f, 0f, 0f, 0f, 1, 0);
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			GlobalFunc_79(500, 1);
		}
		iLocal_91 = 1;
		iLocal_92 = 0;
	}
}





























void func_393()//Position - 0x2E66C
{
	if (!iLocal_337)
	{
		return;
	}
	if (iLocal_338)
	{
		return;
	}
	if (bLocal_336 && (MISC::GET_GAME_TIMER() - iLocal_339) > 8000)
	{
		RECORDING::_0x293220DA1B46CEBC((2.5f + 8f), 1073741824, 3);
		iLocal_338 = 1;
	}
	if (!bLocal_336 && (MISC::GET_GAME_TIMER() - iLocal_339) > 2000)
	{
		RECORDING::_0x293220DA1B46CEBC((2.5f + 2f), 1073741824, 3);
		iLocal_338 = 1;
	}
}


int func_395()//Position - 0x2E6EC
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		func_398("DEFAULT");
		return 1;
	}
	else if (iLocal_292)
	{
		if (!GlobalFunc_115(iLocal_288))
		{
			func_398("MET1TRAKILL");
			return 1;
		}
		else if (func_397())
		{
			func_398("MET1TWRECK");
			return 1;
		}
		else if (func_396())
		{
			func_398("MET1STUCK");
			return 1;
		}
		else
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_288, 0);
		}
	}
	return 0;
}

int func_396()//Position - 0x2E764
{
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_272))
	{
		if (iLocal_274)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_275) > 7000)
			{
				return 1;
			}
		}
		else
		{
			iLocal_274 = 1;
			iLocal_275 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_274)
		{
		}
		iLocal_274 = 0;
	}
	return 0;
}

int func_397()//Position - 0x2E7AA
{
	if (!GlobalFunc_115(iLocal_272))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_272, 0))
	{
		return 1;
	}
	return 0;
}

void func_398(char* sParam0)//Position - 0x2E7D2
{
	sLocal_572 = sParam0;
	iLocal_91 = 11;
	iLocal_92 = 0;
}

void func_399()//Position - 0x2E7E6
{
	switch (iLocal_92)
	{
		case 0:
			GlobalFunc_846(&uLocal_296);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_572))
			{
				sLocal_572 = "DEFAULT";
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_572, "DEFAULT"))
			{
				GlobalFunc_10616(0);
			}
			else
			{
				GlobalFunc_10835(sLocal_572);
			}
			iLocal_92 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_487(1, 0);
			}
			else
			{
				GlobalFunc_4956();
			}
			break;
	}
}











void func_410(bool bParam0, bool bParam1)//Position - 0x2F69F
{
	struct<3> Var0[2];
	float fVar7;
	
	GlobalFunc_846(&uLocal_296);
	func_427();
	if (!bParam1)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_295);
	}
	if (bParam0)
	{
		Var0[0 /*3*/] = { GlobalFunc_2574() };
		if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0[0 /*3*/], &(Var0[1 /*3*/]), &fVar7, 1, 1077936128, 0))
		{
		}
		else
		{
			func_425(Var0[0 /*3*/], &(Var0[1 /*3*/]), &fVar7);
		}
		Local_617 = { Var0[1 /*3*/] };
		fLocal_620 = fVar7;
		MISC::CLEAR_AREA_OF_VEHICLES(Local_617, 10f, 0, 0, 0, 0, 0);
		GlobalFunc_4972(Local_617, fLocal_620, 1, 0);
		func_422(Local_617, fLocal_620, 1);
		if (bParam1)
		{
			bLocal_335 = false;
		}
		else
		{
			bLocal_335 = true;
		}
	}
	else if ((((iLocal_91 == 3 || iLocal_91 == 4) || iLocal_91 == 5) && GlobalFunc_115(iLocal_272)) && GlobalFunc_115(iLocal_288))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0))
			{
				func_421(PLAYER::PLAYER_PED_ID(), iLocal_272, -1);
				Local_617 = { ENTITY::GET_ENTITY_COORDS(iLocal_272, 1) };
			}
		}
	}
	else
	{
		Local_617 = { -52.8746f, -110.5227f, 56.9431f };
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_617, 1, 0, 0, 1);
		func_422(Local_617, 71.4f, 1);
		func_421(PLAYER::PLAYER_PED_ID(), iLocal_272, -1);
	}
	GlobalFunc_Checkpoint1(4, "Drive home (CP3)", 0, 0, 0, 1);
	func_179(6);
	iLocal_91 = 7;
	iLocal_92 = 0;
	func_420(0);
	func_420(1);
	func_419(3, 0);
	func_420(4);
	func_419(7, 0);
	func_419(8, 0);
	func_419(5, 0);
	func_419(6, 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (!bParam1)
		{
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_295))
			{
				SYSTEM::WAIT(0);
			}
		}
		GlobalFunc_4967(iLocal_272, -1, 0);
	}
	else
	{
		GlobalFunc_8326(Local_617, 1112014848, 12, 5000, 0, 0);
	}
}









void func_419(int iParam0, int iParam1)//Position - 0x2FB21
{
	Local_340[iParam0 /*3*/].f_1 = iParam1;
}

void func_420(int iParam0)//Position - 0x2FB34
{
	if (Local_340[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_340[iParam0 /*3*/].f_1 = Local_340[iParam0 /*3*/];
	}
}

void func_421(int iParam0, int iParam1, int iParam2)//Position - 0x2FB5A
{
	if (GlobalFunc_4950(iParam0))
	{
		if (GlobalFunc_115(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
	}
}

void func_422(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x2FB9C
{
	func_423();
	while (!func_353(&iLocal_272, 15, Param0, fParam3, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (bParam4)
	{
		while (!func_360(&iLocal_288, Param0.x, Param0.f_1, (Param0.f_2 + 5f), 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_115(iLocal_288) && GlobalFunc_115(iLocal_272))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_288, iLocal_272, 0);
		}
	}
	else
	{
		while (!func_360(&iLocal_288, Param0.x, Param0.f_1, (Param0.f_2 + 5f), 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_115(iLocal_288) && GlobalFunc_115(iLocal_272))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_288, iLocal_272, 0);
		}
	}
	if (GlobalFunc_115(iLocal_288))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_288, 1);
		GlobalFunc_173(&uLocal_95, 3, iLocal_288, "TRACEY", 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_288, 32, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_288, 26, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_272, 1);
		func_352();
	}
	if (GlobalFunc_115(iLocal_272))
	{
		VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_272, 1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_272, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_272, 1, 1);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_272);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_272, 1);
		GlobalFunc_534(iLocal_272, 1);
		iLocal_273 = 1;
	}
	iLocal_292 = 1;
}

void func_423()//Position - 0x2FCD4
{
	iLocal_292 = 0;
	if (GlobalFunc_115(iLocal_288))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_288))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_288);
		}
	}
	GlobalFunc_69(&iLocal_288);
	if (iLocal_273)
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_272);
		iLocal_273 = 0;
	}
	GlobalFunc_7108(&iLocal_272);
}


void func_425(struct<3> Param0, var uParam3, var uParam4)//Position - 0x2FDAF
{
	struct<3> Var0[4];
	float fVar13[4];
	int iVar18;
	
	Var0[0 /*3*/] = { -170.324f, -52.57f, 51.683f };
	fVar13[0] = 159.9f;
	Var0[1 /*3*/] = { 1196.14f, -1069.13f, 40.3586f };
	fVar13[1] = 107.2f;
	Var0[2 /*3*/] = { -1513.565f, -676.1716f, 27.4587f };
	fVar13[2] = 53.2f;
	Var0[3 /*3*/] = { 55.9539f, 342.8233f, 111.6553f };
	fVar13[3] = 242.4f;
	iVar18 = 0;
	iLocal_571 = 1;
	while (iLocal_571 < 4)
	{
		if (SYSTEM::VDIST2(Var0[iLocal_571 /*3*/], Param0) < SYSTEM::VDIST2(Var0[iVar18 /*3*/], Param0))
		{
			iVar18 = iLocal_571;
		}
		iLocal_571++;
	}
	*uParam3 = { Var0[iVar18 /*3*/] };
	*uParam4 = fVar13[iVar18];
}


void func_427()//Position - 0x2FEAA
{
	GlobalFunc_69(&iLocal_289);
	if (ENTITY::DOES_ENTITY_EXIST(Local_276))
	{
		if (iLocal_316)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_276);
			iLocal_316 = 0;
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_276, 0);
		GlobalFunc_7108(&Local_276);
	}
}

void func_428(bool bParam0)//Position - 0x2FEE3
{
	GlobalFunc_846(&uLocal_296);
	func_427();
	if (bParam0)
	{
		GlobalFunc_4972(Local_486[3 /*8*/], 71.4f, 1, 0);
		func_422(Local_486[3 /*8*/], 71.4f, 1);
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_486[3 /*8*/], Local_486[3 /*8*/].f_1, (Local_486[3 /*8*/].f_2 + 8f), 1, 0, 0, 1);
			func_422(Local_486[3 /*8*/], 71.4f, 1);
			func_421(PLAYER::PLAYER_PED_ID(), iLocal_272, -1);
		}
		if (GlobalFunc_115(iLocal_272))
		{
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_272, 0f, -8f, 0f), 6f, 0, 0, 0, 0, 0);
		}
	}
	Local_276.f_6 = { Local_545[1 /*3*/] };
	Local_276.f_9 = fLocal_564[1];
	MISC::CLEAR_AREA_OF_VEHICLES(Local_276.f_6, 5f, 0, 0, 0, 0, 0);
	func_420(0);
	func_420(1);
	func_419(3, 0);
	func_419(4, 0);
	func_419(7, 0);
	func_419(8, 0);
	func_419(5, 0);
	func_419(6, 0);
	func_179(3);
	iLocal_91 = 4;
	iLocal_92 = 0;
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4967(iLocal_272, -1, 0);
	}
	else
	{
		GlobalFunc_8326(Local_486[3 /*8*/], 1112014848, 12, 5000, 0, 0);
		GlobalFunc_Checkpoint1(3, "Stalker appears (CP2)", 0, 0, 0, 1);
	}
}

void func_429(bool bParam0)//Position - 0x30044
{
	GlobalFunc_846(&uLocal_296);
	bLocal_621 = false;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			if (GlobalFunc_7698())
			{
				Local_617 = { 99.6208f, -21.0027f, 67.0114f };
				fLocal_620 = 251.1f;
				bLocal_621 = true;
				MISC::CLEAR_AREA_OF_VEHICLES(99.6208f, -21.0027f, 67.0114f, 7f, 0, 0, 0, 0, 0);
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_622 = GlobalFunc_10378(Local_617, fLocal_620);
			}
			else
			{
				MISC::CLEAR_AREA(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
				Local_617 = { 181.2331f, -33.9939f, 67.2522f };
				fLocal_620 = 255.3f;
			}
			GlobalFunc_4972(Local_617, fLocal_620, 1, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((GlobalFunc_115(iLocal_272) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_272, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)))
			{
				MISC::CLEAR_AREA(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 181.2331f, -33.9939f, 67.2522f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 255.3f);
				Local_617 = { 181.2331f, -33.9939f, 67.2522f };
			}
			else
			{
				MISC::CLEAR_AREA_OF_VEHICLES(99.6208f, -21.0027f, 67.0114f, 7f, 0, 0, 0, 0, 0);
				iLocal_622 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_622, 99.6208f, -21.0027f, 67.0114f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_622, 251.1f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_622);
				Local_617 = { 99.6208f, -21.0027f, 67.0114f };
				bLocal_621 = true;
			}
		}
		else
		{
			MISC::CLEAR_AREA(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 181.2331f, -33.9939f, 67.2522f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 255.3f);
			Local_617 = { 181.2331f, -33.9939f, 67.2522f };
		}
	}
	func_427();
	func_423();
	iLocal_93 = 0;
	func_430();
	iLocal_94 = 1;
	iLocal_91 = 1;
	iLocal_92 = 0;
	if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || bLocal_621)
	{
		func_179(1);
	}
	else
	{
		func_179(0);
	}
	func_420(0);
	func_419(1, 0);
	func_419(3, 0);
	func_419(4, 0);
	func_419(7, 0);
	func_419(8, 0);
	func_419(5, 0);
	func_419(6, 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (bLocal_621)
		{
			GlobalFunc_4967(iLocal_622, -1, 1);
		}
		else
		{
			GlobalFunc_4967(0, -1, 1);
		}
	}
	else
	{
		GlobalFunc_8326(Local_617, 1112014848, 12, 5000, 0, 0);
	}
	if (bLocal_621)
	{
		if (GlobalFunc_115(iLocal_622))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_622, 1, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_622, 10f);
		}
		SYSTEM::WAIT(0);
	}
}

void func_430()//Position - 0x3035D
{
	iLocal_300 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iLocal_301 = CLOCK::GET_CLOCK_HOURS();
	iLocal_302 = CLOCK::GET_CLOCK_MINUTES();
}






















void func_452(bool bParam0, bool bParam1)//Position - 0x31215
{
	if (bParam0)
	{
		func_453(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_58(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_453(bool bParam0, int iParam1, int iParam2)//Position - 0x31248
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_40(iParam1, iParam2, 1, 1);
		}
	}
}

void func_454(int iParam0, int iParam1, int iParam2)//Position - 0x312A7
{
	func_40(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}


void func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x31312
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_3004() && GlobalFunc_9009(iParam1, iParam2, iParam3))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		GlobalFunc_10757(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
	else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Var0, &fVar3, 1, 1077936128, 0))
	{
		GlobalFunc_10757(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
	}
}


















void func_474()//Position - 0x34B4C
{
	if (GlobalFunc_5899() == 1)
	{
		bLocal_532 = true;
	}
	else
	{
		bLocal_532 = false;
	}
	iLocal_614 = 1000;
	iLocal_615 = 1500;
	iLocal_613 = 3500;
	HUD::REQUEST_ADDITIONAL_TEXT("MET1", 0);
	func_483();
	func_481();
	func_480();
	func_479();
	func_478();
	func_477();
	GlobalFunc_2361(&Local_533, 200.34f, -30.73f, 60.91f, 244.07f, -45.73f, 77.22f, 30f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_276.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("issi2"), 1);
	func_475(1);
	iLocal_316 = 0;
	iLocal_332 = 0;
	iLocal_292 = 0;
	GlobalFunc_173(&uLocal_95, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	sLocal_572 = "DEFAULT";
	func_430();
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_573 = -1;
	if (GlobalFunc_Is_Mission_Retry())
	{
		MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	}
	else
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
}

void func_475(int iParam0)//Position - 0x34C3C
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mixer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mixer2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rubble"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tiptruck2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tiptruck"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("scrap"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pounder"), iParam0);
}


void func_477()//Position - 0x34D02
{
	Local_545[0 /*3*/] = { -224.0988f, -62.9169f, 48.8994f };
	fLocal_564[0] = 250.2f;
	Local_545[1 /*3*/] = { -98.7688f, -90.0482f, 56.5581f };
	fLocal_564[1] = 72.7f;
	Local_545[2 /*3*/] = { -190.0195f, -64.3358f, 50.6959f };
	fLocal_564[2] = 70.37f;
	Local_545[3 /*3*/] = { -254.3389f, -16.5055f, 48.7322f };
	fLocal_564[3] = 170.42f;
	Local_545[4 /*3*/] = { -145.0999f, -91.2274f, 54.1001f };
	fLocal_564[4] = 249.33f;
	Local_545[5 /*3*/] = { -35.9104f, -97.4508f, 56.3653f };
	fLocal_564[5] = 163.63f;
}

void func_478()//Position - 0x34DD6
{
	iLocal_571 = 0;
	Local_486[iLocal_571 /*8*/] = { 245.6922f, -209.0348f, 52.8895f };
	Local_486[iLocal_571 /*8*/].f_3 = 20f;
	Local_486[iLocal_571 /*8*/].f_4 = "MET1_LOC1";
	Local_486[iLocal_571 /*8*/].f_5 = "MET1_CHAT1";
	Local_486[iLocal_571 /*8*/].f_6 = "NULL";
	Local_486[iLocal_571 /*8*/].f_7 = 1;
	iLocal_571++;
	Local_486[iLocal_571 /*8*/] = { 52.766f, -283.8273f, 46.6203f };
	Local_486[iLocal_571 /*8*/].f_3 = 20f;
	Local_486[iLocal_571 /*8*/].f_4 = "MET1_LOC2";
	Local_486[iLocal_571 /*8*/].f_5 = "MET1_CHAT2";
	Local_486[iLocal_571 /*8*/].f_6 = "MET1_CHAT2C";
	Local_486[iLocal_571 /*8*/].f_7 = 2;
	iLocal_571++;
	Local_486[iLocal_571 /*8*/] = { -129.7824f, -259.7662f, 42.2812f };
	Local_486[iLocal_571 /*8*/].f_3 = 20f;
	Local_486[iLocal_571 /*8*/].f_4 = "MET1_LOC3";
	Local_486[iLocal_571 /*8*/].f_5 = "MET1_CHAT3";
	Local_486[iLocal_571 /*8*/].f_6 = "MET1_CHAT3C";
	Local_486[iLocal_571 /*8*/].f_7 = 2;
	iLocal_571++;
	Local_486[iLocal_571 /*8*/] = { -160.47f, -75.1948f, 52.7966f };
	Local_486[iLocal_571 /*8*/].f_3 = 40f;
	Local_486[iLocal_571 /*8*/].f_4 = "MET1_LOC4";
	Local_486[iLocal_571 /*8*/].f_5 = "MET1_CHAT4";
	Local_486[iLocal_571 /*8*/].f_6 = "MET1_CHAT4C";
	Local_486[iLocal_571 /*8*/].f_7 = 2;
	iLocal_571++;
	iLocal_519 = 0;
}

void func_479()//Position - 0x34F78
{
	Local_276.f_1 = joaat("tornado2");
	Local_276.f_2 = 0;
	Local_276.f_6 = { -58.8963f, -191.2678f, 51.1096f };
	Local_276.f_9 = 66.9f;
}

void func_480()//Position - 0x34FB0
{
	Local_380[0 /*3*/] = 0;
	Local_380[0 /*3*/].f_1 = "MET1AUD";
	Local_380[0 /*3*/].f_2 = "MET1_TRCC1";
	Local_380[1 /*3*/] = 0;
	Local_380[1 /*3*/].f_1 = "MET1AUD";
	Local_380[1 /*3*/].f_2 = "MET1_TRCC2";
	Local_380[2 /*3*/] = 0;
	Local_380[2 /*3*/].f_1 = "MET1AUD";
	Local_380[2 /*3*/].f_2 = "MET1_TRCC3";
	Local_380[3 /*3*/] = 0;
	Local_380[3 /*3*/].f_1 = "MET1AUD";
	Local_380[3 /*3*/].f_2 = "MET1_TRCC4";
	Local_380[4 /*3*/] = 0;
	Local_380[4 /*3*/].f_1 = "MET1AUD";
	Local_380[4 /*3*/].f_2 = "MET1_TRCC5";
	Local_396[0 /*3*/] = 0;
	Local_396[0 /*3*/].f_1 = "MET1AUD";
	Local_396[0 /*3*/].f_2 = "MET1_ST1";
	Local_396[1 /*3*/] = 0;
	Local_396[1 /*3*/].f_1 = "MET1AUD";
	Local_396[1 /*3*/].f_2 = "MET1_ST2";
	Local_396[2 /*3*/] = 0;
	Local_396[2 /*3*/].f_1 = "MET1AUD";
	Local_396[2 /*3*/].f_2 = "MET1_ST3";
	Local_396[3 /*3*/] = 0;
	Local_396[3 /*3*/].f_1 = "MET1AUD";
	Local_396[3 /*3*/].f_2 = "MET1_ST4";
	Local_417[0 /*3*/] = 0;
	Local_417[0 /*3*/].f_1 = "MET1AUD";
	Local_417[0 /*3*/].f_2 = "MET1_STW1";
	Local_417[1 /*3*/] = 0;
	Local_417[1 /*3*/].f_1 = "MET1AUD";
	Local_417[1 /*3*/].f_2 = "MET1_STW2";
	Local_417[2 /*3*/] = 0;
	Local_417[2 /*3*/].f_1 = "MET1AUD";
	Local_417[2 /*3*/].f_2 = "MET1_STW3";
	Local_427[0 /*3*/] = 0;
	Local_427[0 /*3*/].f_1 = "MET1AUD";
	Local_427[0 /*3*/].f_2 = "MET1_TRFC1";
	Local_427[1 /*3*/] = 0;
	Local_427[1 /*3*/].f_1 = "MET1AUD";
	Local_427[1 /*3*/].f_2 = "MET1_TRFC2";
	Local_427[2 /*3*/] = 0;
	Local_427[2 /*3*/].f_1 = "MET1AUD";
	Local_427[2 /*3*/].f_2 = "MET1_TRFC3";
	Local_437[0 /*3*/] = 0;
	Local_437[0 /*3*/].f_1 = "MET1AUD";
	Local_437[0 /*3*/].f_2 = "MET1_TSDEAD1";
	Local_437[1 /*3*/] = 0;
	Local_437[1 /*3*/].f_1 = "MET1AUD";
	Local_437[1 /*3*/].f_2 = "MET1_TSDEAD2";
	Local_437[2 /*3*/] = 0;
	Local_437[2 /*3*/].f_1 = "MET1AUD";
	Local_437[2 /*3*/].f_2 = "MET1_TSESCP1";
	Local_437[3 /*3*/] = 5000;
	Local_437[3 /*3*/].f_1 = "MET1AUD";
	Local_437[3 /*3*/].f_2 = "MET1_GOHOM1";
	Local_437[4 /*3*/] = 8000;
	Local_437[4 /*3*/].f_1 = "MET1AUD";
	Local_437[4 /*3*/].f_2 = "MET1_GOHOM2";
	Local_437[5 /*3*/] = 8000;
	Local_437[5 /*3*/].f_1 = "MET1AUD";
	Local_437[5 /*3*/].f_2 = "MET1_GOHOM3";
	Local_437[6 /*3*/] = 8000;
	Local_437[6 /*3*/].f_1 = "MET1AUD";
	Local_437[6 /*3*/].f_2 = "MET1_GOHOM4";
	Local_437[7 /*3*/] = 8000;
	Local_437[7 /*3*/].f_1 = "MET1AUD";
	Local_437[7 /*3*/].f_2 = "MET1_GOHOM5";
	Local_437[8 /*3*/] = 0;
	Local_437[8 /*3*/].f_1 = "MET1AUD";
	Local_437[8 /*3*/].f_2 = "MET1_GOHOMC";
}

void func_481()//Position - 0x35295
{
	Local_340[0 /*3*/] = { GlobalFunc_2371("MET1INITDRV", 1) };
	Local_340[1 /*3*/] = { GlobalFunc_2371("MET1TCAR", 1) };
	Local_340[2 /*3*/] = { GlobalFunc_2371("MET1WAIT", 1) };
	Local_340[3 /*3*/] = { GlobalFunc_2371("MET1WANT", -1) };
	Local_340[4 /*3*/] = { GlobalFunc_2371("MET1CHASE", 1) };
	Local_340[5 /*3*/] = { GlobalFunc_2371("MET1GETBKT", 1) };
	Local_340[6 /*3*/] = { GlobalFunc_2371("MET1DLT", 1) };
	Local_340[7 /*3*/] = { GlobalFunc_2371("MET1HOME", 1) };
	Local_340[8 /*3*/] = { GlobalFunc_2371("MET1HOTEL", 1) };
}


void func_483()//Position - 0x35352
{
	sLocal_574[0] = "NONE";
	sLocal_574[1] = "M_E_TRACEY_GO_TO_TRACEY";
	sLocal_574[2] = "M_E_TRACEY_ENTER_TRACEYS_CAR";
	sLocal_574[3] = "M_E_TRACEY_FIND_STALKER";
	sLocal_574[4] = "M_E_TRACEY_STOP_STALKERS_CAR";
	sLocal_574[5] = "M_E_TRACEY_DEAL_WITH_STALKER";
	sLocal_574[6] = "M_E_TRACEY_TAKE_TRACEY_HOME";
	sLocal_574[7] = "NONE";
}




void func_487(bool bParam0, bool bParam1)//Position - 0x35481
{
	GlobalFunc_846(&uLocal_296);
	if (ENTITY::DOES_ENTITY_EXIST(Local_276))
	{
		if (iLocal_316)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_276);
			iLocal_316 = 0;
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_276, 0);
	}
	if (iLocal_291)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_290);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_276.f_1);
	}
	if (bParam0)
	{
		GlobalFunc_69(&iLocal_289);
		GlobalFunc_7108(&Local_276);
	}
	else
	{
		GlobalFunc_132(&iLocal_289, 1, 0, 1);
		GlobalFunc_190(&Local_276);
	}
	GlobalFunc_4948(&uLocal_260, 0, 0);
	if (iLocal_293)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_294);
	}
	if (GlobalFunc_115(iLocal_272) && iLocal_273)
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_272);
		iLocal_273 = 0;
	}
	if (bParam0)
	{
		GlobalFunc_69(&iLocal_288);
		GlobalFunc_7108(&iLocal_272);
	}
	else
	{
		if (!bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_288))
				{
					TASK::CLEAR_PED_TASKS(iLocal_288);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_288, 0);
					GlobalFunc_132(&iLocal_288, 1, 0, 1);
				}
				else
				{
					GlobalFunc_132(&iLocal_288, 1, 0, 1);
				}
			}
		}
		GlobalFunc_190(&iLocal_272);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_533[0 /*3*/], Local_533[1 /*3*/], Local_533.f_7, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_541, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_276.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("issi2"), 0);
	func_475(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}




