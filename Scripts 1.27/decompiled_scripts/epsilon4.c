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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_149 = 0f;
	struct<3> Local_150 = { 0, 0, 0 } ;
	float fLocal_153 = 0f;
	struct<3> Local_154 = { 0, 0, 0 } ;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	char* sLocal_160 = NULL;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 16;
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
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	bool bLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	bool bLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	struct<43> Local_362[4];
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	struct<6> Local_537[11];
	int iLocal_604 = 0;
	struct<8> Local_605[2];
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	struct<15> Local_624 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_639 = 0f;
	int iLocal_640 = 0;
	var uLocal_641 = 15;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 15;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	var uLocal_759 = 0;
	int iLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	float fLocal_766 = 0f;
	float fLocal_767 = 0f;
	float fLocal_768 = 0f;
	float fLocal_769 = 0f;
	float fLocal_770 = 0f;
	struct<10> Local_771 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_781 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_79 = GlobalFunc_4946(60);
	uLocal_80 = GlobalFunc_4946(14);
	Local_143 = { 1813.294f, 4698.785f, 38.9553f };
	Local_146 = { 1827.178f, 4698.114f, 38.1653f };
	fLocal_149 = 187.4554f;
	Local_150 = { 1811.96f, 4697.071f, 39.1076f };
	fLocal_153 = 330.5137f;
	Local_154 = { 1814.02f, 4697.051f, 38.9678f };
	fLocal_157 = 24.0044f;
	iLocal_158 = joaat("weapon_digiscanner");
	uLocal_159 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_158);
	sLocal_160 = "empty";
	iLocal_338 = 1;
	iLocal_763 = -1;
	iLocal_764 = -1;
	iLocal_765 = -1;
	fLocal_766 = 30f;
	fLocal_767 = 0.35f;
	fLocal_768 = 0f;
	fLocal_769 = 0.02f;
	fLocal_770 = -0.05f;
	Local_82 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_82);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_9624(1);
		func_394();
	}
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_384(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	uLocal_161 = GlobalFunc_2835();
	uLocal_162 = GlobalFunc_2662(1855.08f, 4755.85f, 36.81f, 25f);
	iLocal_763 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1815.39f, 4698f, 38.87f, 3.5f, 3.5f, 3f, 0f, 0, 7);
	iLocal_764 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1824.12f, 4701.39f, 38.29f, 2.5f, 2.5f, 2.5f, 0f, 0, 7);
	iLocal_765 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1801.28f, 4700.25f, 39.42f, 2f, 2f, 2f, 0f, 0, 7);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		GlobalFunc_2838("Starting dynamic mix EPSILONISM_04_MIX");
		AUDIO::START_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	uLocal_359 = GRAPHICS::_0xBE197EAA669238F4(1751.65f, 4676.77f, 43.03f, 1.5f);
	GlobalFunc_8320();
	func_361();
	func_360();
	Local_771 = 0;
	func_359();
	iVar0 = 0;
	while (iVar0 < iLocal_535)
	{
		func_357(&(Local_362[iVar0 /*43*/]));
		iVar0++;
	}
	func_356(&(Local_605[0 /*8*/]), Local_150, fLocal_153, Local_82.f_28[0], 0);
	func_356(&(Local_605[1 /*8*/]), Local_154, fLocal_157, Local_82.f_28[1], 0);
	if (GlobalFunc_199())
	{
		if (GlobalFunc_198() == 0)
		{
			GlobalFunc_4972(Local_146, fLocal_149, 1, 0);
			func_353(1);
			GlobalFunc_4923(&Local_82, 0, 1);
			func_351();
			GlobalFunc_2838("Done replay setup");
		}
	}
	else if (GlobalFunc_2(0))
	{
		GlobalFunc_4972(Local_146, fLocal_149, 1, 0);
		func_353(0);
		GlobalFunc_4923(&Local_82, 1, 1);
		func_351();
	}
	GlobalFunc_9621(60, 0, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_Epsilon4", 0);
		func_333(Local_82.f_9, 0, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		if (GlobalFunc_1720())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == iLocal_158)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
		}
		switch (Local_771)
		{
			case 0:
				func_329();
				break;
			
			case 1:
				func_324();
				break;
			
			case 2:
				func_292();
				break;
			
			case 3:
				func_235();
				break;
			
			case 4:
				func_224();
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x3FA
{
	char* sVar0;
	
	switch (Local_771.f_1)
	{
		case 0:
			func_9();
			AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
			sVar0 = sLocal_160;
			switch (Local_771.f_9)
			{
				case 8:
					sVar0 = "EPS4_X1";
					break;
				
				case 2:
					sVar0 = "EPS4_X2";
					break;
				
				case 3:
					sVar0 = "EPS4_X3";
					break;
				
				case 4:
					sVar0 = "EPS4_X4";
					break;
				
				case 5:
					sVar0 = "EPS4_X5";
					break;
				
				case 6:
					sVar0 = "EPS4_X7";
					break;
				
				case 7:
					sVar0 = "EPS4_X8";
					break;
				
				default:
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_160))
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sVar0, 1);
			}
			Local_771.f_1 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_4();
				func_2(&(Local_605[0 /*8*/]));
				func_2(&(Local_605[1 /*8*/]));
				func_394();
			}
			break;
	}
}

void func_2(var uParam0)//Position - 0x4E0
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	GlobalFunc_881(uParam0);
}


void func_4()//Position - 0x537
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_535)
	{
		GlobalFunc_2346(&(Local_362[iVar0 /*43*/].f_1));
		iVar0++;
	}
}





void func_9()//Position - 0x60B
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	HUD::CLEAR_PRINTS();
	if (GlobalFunc_74("EPS4_T0") || GlobalFunc_74("EPS4_T1"))
	{
		HUD::CLEAR_HELP(1);
	}
}


void func_11()//Position - 0x64C
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (iLocal_348 == 0)
	{
		GlobalFunc_553(750);
	}
	func_222();
	func_9();
	GlobalFunc_7632(0);
	GlobalFunc_9621(55, 0, 1);
	func_22(76, 1);
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment = 0;
	if (!GlobalFunc_2(0))
	{
		while (!GlobalFunc_7022(1357988739, 6, 1, 60, 30000, 10000, -1, 0, -1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
	while (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == iLocal_158)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 12)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 12, 1);
		GlobalFunc_4(23, 12);
	}
	func_394();
}











void func_22(int iParam0, bool bParam1)//Position - 0xBAD
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2832(&uVar1, GlobalFunc_8310());
	func_48();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}


























void func_48()//Position - 0x1ED6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_164(iVar1, 14, iVar2))
				{
					func_49(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x1F97
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_164(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_49(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_49(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (func_90(iParam0, iVar0, &iVar46, 0))
	{
		func_52(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_50(iParam0, iVar0, &iVar46))
	{
		func_52(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x2150
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_164(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2217
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
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
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
				iVar5 = GlobalFunc_7197(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7197(iParam0, 9);
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
			iVar7 = GlobalFunc_8023(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_8023(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_8023(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
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
							GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_60(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
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
								iVar3 = func_60(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_58(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_90(iParam0, iVar10, &iVar4, 1))
							{
								func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_52(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_52(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_52(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_52(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_52(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_52(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
					iVar3 = func_60(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_60(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_60(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_90(iParam0, iVar10, &iVar4, 0))
		{
			func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_50(iParam0, iVar10, &iVar4))
		{
			func_52(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x322A
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
				if (func_164(iParam0, iParam1, iVar0))
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
				if (func_164(iParam0, iParam1, iVar1))
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
				return GlobalFunc_8023(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7197(iParam0, iParam1);
		}
	}
	return -99;
}


int func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x35D2
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
				iVar1 = GlobalFunc_7197(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7197(uParam0, 2);
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
									if (!GlobalFunc_8022(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_8022(uParam0, 3, 135, 150))
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
									if (!GlobalFunc_8022(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_8022(uParam0, 3, 243, 258))
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
									if (!GlobalFunc_8022(uParam0, 3, 176, 191) && !GlobalFunc_8022(uParam0, 3, 227, 242))
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
								iVar4 = GlobalFunc_7197(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7197(uParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7197(uParam0, 8);
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
								iVar7 = GlobalFunc_7197(uParam0, 8);
								iVar8 = GlobalFunc_7197(uParam0, 11);
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
								iVar9 = GlobalFunc_7197(uParam0, 11);
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






























int func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x78CB
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_164(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}










































































int func_164(int iParam0, int iParam1, int iParam2)//Position - 0x1DDEF
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
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
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
				if (!func_164(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_164(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_164(iParam0, 14, iVar4))
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
						iVar1 = GlobalFunc_7197(iParam0, iVar2);
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
			if (!func_164(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}


























































void func_222()//Position - 0x254A9
{
	AUDIO::STOP_SOUND(Local_624.f_2);
	AUDIO::STOP_SOUND(Local_624.f_3);
	AUDIO::STOP_SOUND(Local_624.f_4);
	AUDIO::STOP_SOUND(Local_624.f_5);
	Local_624.f_6 = 0;
	Local_624.f_7 = 0;
}


void func_224()//Position - 0x25552
{
	switch (Local_771.f_1)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("weapons@holster_1h");
			while (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == iLocal_158)
			{
				SYSTEM::WAIT(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (STREAMING::HAS_ANIM_DICT_LOADED("weapons@holster_1h"))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 3))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "weapons@holster_1h", "holster") >= 0.5f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_158);
			Local_771.f_1 = 1;
			break;
		
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_234(6);
				Local_771.f_9 = 1;
				Local_771.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_605[0 /*8*/]))
			{
				func_234(6);
				Local_771.f_9 = 2;
				Local_771.f_1 = 3;
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_605[1 /*8*/]))
			{
				func_234(6);
				Local_771.f_9 = 3;
				Local_771.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[0 /*8*/], 0, 2))
			{
				func_234(6);
				Local_771.f_9 = 4;
				Local_771.f_1 = 3;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[1 /*8*/], 0, 2))
			{
				func_234(6);
				Local_771.f_9 = 5;
				Local_771.f_1 = 3;
			}
			else if (func_227(&(Local_605[0 /*8*/])))
			{
				func_234(6);
				Local_771.f_9 = 6;
				Local_771.f_1 = 3;
			}
			else if (func_227(&(Local_605[1 /*8*/])))
			{
				func_234(6);
				Local_771.f_9 = 7;
				Local_771.f_1 = 3;
			}
			else if (GlobalFunc_115(Local_605[0 /*8*/]))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_605[0 /*8*/], 1) >= 50f)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					func_234(5);
					Local_771.f_1 = 3;
				}
			}
			break;
		
		case 3:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_351();
			break;
	}
}



int func_227(var uParam0)//Position - 0x257EE
{
	if (GlobalFunc_8619(*uParam0, 1090519040, 1097859072))
	{
		return 1;
	}
	return 0;
}







void func_234(int iParam0)//Position - 0x25AD6
{
	Local_771.f_8 = iParam0;
}

void func_235()//Position - 0x25AE5
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (Local_771.f_3 == 1)
	{
		func_290(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		if (iLocal_352 == 0)
		{
			func_289("EPS_4_MCS_1");
		}
		else if (iLocal_352 == 1)
		{
			func_289("EPS_4_MCS_2");
		}
		else
		{
			func_289("EPS_4_MCS_3");
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_2838("Trying to set player component variation");
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_352 == 0 || iLocal_352 == 2)
			{
				GlobalFunc_2838("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		GlobalFunc_2838("SKIP: Doing sync for cutscene skip");
		func_282(1, 1, 1);
		Local_771.f_3 = 0;
	}
	if (Local_771.f_1 == 0)
	{
		GlobalFunc_2837("Doing setup for RockScene:", iLocal_352);
		func_279(1);
		func_278();
		PAD::SET_PAD_SHAKE(0, 200, 150);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_2838("Trying to set player component variation");
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (iLocal_352 == 0 || iLocal_352 == 2)
			{
				GlobalFunc_2838("Trying to set Jimmy prop variation");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		if (!GlobalFunc_4947(iLocal_361))
		{
			iLocal_361 = VEHICLE::CREATE_VEHICLE(joaat("bison"), 1851.57f, 4772.12f, 39.8f, 31.35f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_361, 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_361, 5, 157);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_361);
		}
		func_276(&(Local_605[1 /*8*/]), 1);
		func_276(&(Local_605[0 /*8*/]), 1);
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			while (!GlobalFunc_8024(1, 1093140480, 0))
			{
				GlobalFunc_2838("Waiting for cutscene to be OK to start...");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_279(1);
				func_278();
				PAD::SET_PAD_SHAKE(0, 200, 150);
				if (iLocal_352 == 0)
				{
					func_289("EPS_4_MCS_1");
				}
				else if (iLocal_352 == 1)
				{
					func_289("EPS_4_MCS_2");
				}
				else
				{
					func_289("EPS_4_MCS_3");
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 500)
			{
				GlobalFunc_2838("Doing 500ms pause");
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				func_279(1);
				func_278();
				PAD::SET_PAD_SHAKE(0, 200, 150);
				SYSTEM::WAIT(0);
			}
			if (iLocal_352 == 0)
			{
				if (GlobalFunc_115(Local_605[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_605[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_624))
				{
					iLocal_640 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_640, "Artefact_Detector", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_362[iLocal_352 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_362[iLocal_352 /*43*/].f_1, "EPS_TV", 0, 0, 0);
				}
			}
			else if (iLocal_352 == 1)
			{
				if (GlobalFunc_115(Local_605[0 /*8*/]))
				{
					Local_605[0 /*8*/].f_7 = 0;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_624))
				{
					iLocal_640 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_640, "Artefact_Detector", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_362[iLocal_352 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_362[iLocal_352 /*43*/].f_1, "EPS_Battery", 0, 0, 0);
				}
			}
			else
			{
				if (GlobalFunc_115(Local_605[1 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605[1 /*8*/], "Jimmy_Boston", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_605[0 /*8*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_605[0 /*8*/], "Marnie", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_624))
				{
					iLocal_640 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_digiscanner"), 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_640, "Artefact_Detector", 0, 0, 0);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (GlobalFunc_115(Local_362[iLocal_352 /*43*/].f_1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_362[iLocal_352 /*43*/].f_1, "Old_Boot", 0, 0, 0);
				}
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::_0x48621C9FCA3EBD28(1);
			iVar0 = MISC::GET_GAME_TIMER();
			while ((MISC::GET_GAME_TIMER() - iVar0) < 1)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				SYSTEM::WAIT(0);
				RECORDING::_0x208784099002BC30("SF_Epsilon4", 0);
			}
			if (iLocal_352 >= 2)
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), -1, 1, 1);
				}
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
			GlobalFunc_10159(Local_362[iLocal_352 /*43*/].f_25, Local_362[iLocal_352 /*43*/].f_28, Local_362[iLocal_352 /*43*/].f_31, Local_362[iLocal_352 /*43*/].f_32, Local_362[iLocal_352 /*43*/].f_35, GlobalFunc_625(), 1, 1, 1, 0, 0);
			func_251(Local_362[iLocal_352 /*43*/].f_2, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
		}
		GlobalFunc_2837("Finished setup, moving to run loop for RockScene #:", iLocal_352);
		Local_771.f_1 = 1;
	}
	if (Local_771.f_1 == 1)
	{
		if (func_250())
		{
		}
		else if (Local_771.f_6)
		{
			Local_771.f_1 = 3;
		}
		else if (Local_771.f_4)
		{
			if (iLocal_352 < (iLocal_535 - 1))
			{
				func_234(2);
			}
			else
			{
				func_234(5);
			}
			Local_771.f_1 = 3;
			iLocal_352++;
		}
		else if (Local_771.f_5)
		{
			func_234(2);
			Local_771.f_1 = 3;
		}
		else
		{
			if (iLocal_352 >= 2)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17000)
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START(1847.472f, 4756.157f, 36.6968f, GlobalFunc_2836(271.4718f), 145f, 0);
						}
					}
				}
			}
			if (Local_771.f_2 == 0)
			{
				func_278();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					Local_771.f_2 = 1;
				}
				func_248();
				if (iLocal_352 >= 2)
				{
					func_247();
					func_246();
				}
				else if (iLocal_352 == 1)
				{
					if (func_245())
					{
						Local_771.f_2 = 1;
					}
					func_247();
				}
				else
				{
					if (func_245())
					{
						Local_771.f_2 = 1;
					}
					func_247();
					func_246();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_771.f_2 = -1;
					GlobalFunc_2838("Cutscene not active, setting event -1");
				}
			}
			if (Local_771.f_2 == 1)
			{
				func_244();
				func_245();
				func_248();
				if (iLocal_352 >= 2)
				{
					func_247();
					func_246();
				}
				else if (iLocal_352 == 1)
				{
					func_247();
				}
				else
				{
					func_247();
					func_246();
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					Local_771.f_2 = -1;
					GlobalFunc_2838("Cutscene not active, setting event -1");
				}
			}
			if (Local_771.f_2 == -1)
			{
				GlobalFunc_2838("Doing event -1...");
				if (iLocal_352 < (iLocal_535 - 1))
				{
					func_234(2);
				}
				else
				{
					func_234(4);
				}
				if (iLocal_352 >= 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS4_STOP");
					GlobalFunc_2346(&(Local_362[iLocal_352 /*43*/].f_1));
				}
				Local_771.f_1 = 3;
				iLocal_352++;
				GlobalFunc_2837("END CUTSCENE: iCurrentRock = ", iLocal_352);
			}
		}
	}
	if (Local_771.f_1 == 3)
	{
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_2838("Doing cleanup for RockScene");
		func_236(1, 0, 1, 1);
		func_351();
	}
}

void func_236(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26211
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_244()//Position - 0x264BB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(uLocal_165);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_164, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

int func_245()//Position - 0x26547
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			if (iLocal_352 >= 2)
			{
				GlobalFunc_2838("*** Forcing Michael's move state (end cutscene)");
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
				return 1;
			}
			else
			{
				GlobalFunc_2838("*** Forcing Michael's move state");
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != iLocal_158)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_246()//Position - 0x265C5
{
	if (GlobalFunc_115(Local_605[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			if (iLocal_352 >= 2)
			{
				if (GlobalFunc_115(Local_82.f_28[1]) && GlobalFunc_4947(iLocal_361))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_781);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_361, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_781);
					TASK::TASK_PERFORM_SEQUENCE(Local_82.f_28[1], uLocal_781);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_781);
					GlobalFunc_2838("Did Jimmy pass exit");
				}
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_82.f_28[1], 1764.089f, 4665.879f, 42.3031f, 1f, 20000, 1193033728, 1056964608);
				GlobalFunc_2838("Did Jimmy regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_605[1 /*8*/], -668482597, 0, 1, 0);
		}
	}
}

void func_247()//Position - 0x26681
{
	if (GlobalFunc_115(Local_605[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			if (iLocal_352 >= 2)
			{
				if (GlobalFunc_115(Local_82.f_28[0]) && GlobalFunc_4947(iLocal_361))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_781);
					TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_361, -1);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_361, 1743.33f, 4962.18f, 45.16f, 20f, 0, joaat("bison"), 786599, 5f, -1f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_361, 30f, 262275);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_781);
					TASK::TASK_PERFORM_SEQUENCE(Local_82.f_28[0], uLocal_781);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_781);
					GlobalFunc_2838("Did Marnie pass exit");
				}
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_82.f_28[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_82.f_28[0], 0f, 7f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
				GlobalFunc_2838("Did Marnie regular exit");
			}
			PED::FORCE_PED_MOTION_STATE(Local_605[0 /*8*/], -668482597, 0, 1, 0);
		}
	}
}

void func_248()//Position - 0x26776
{
	if (GlobalFunc_115(iLocal_640))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
		{
			if (iLocal_352 < 2)
			{
				GlobalFunc_2838("*** Detector exit");
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_640, PLAYER::PLAYER_PED_ID());
				GlobalFunc_2346(&iLocal_640);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_624))
				{
					GlobalFunc_2838("*** Recreating gDetector.hObj after cutscene...");
					Local_624 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				GlobalFunc_2838("*** Detector exit (end cutscene)");
				GlobalFunc_2346(&iLocal_640);
			}
		}
	}
}


int func_250()//Position - 0x267FB
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		func_234(6);
		Local_771.f_9 = 1;
		Local_771.f_1 = 3;
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_605[0 /*8*/]))
	{
		if (iLocal_352 < 2)
		{
			func_234(6);
			Local_771.f_9 = 2;
			Local_771.f_1 = 3;
			GlobalFunc_2838("Mission failed: Marnie dead");
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_605[1 /*8*/]))
	{
		if (iLocal_352 < 2)
		{
			func_234(6);
			Local_771.f_9 = 3;
			Local_771.f_1 = 3;
			GlobalFunc_2838("Mission failed: Jimmy dead");
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[0 /*8*/], 0, 2))
	{
		func_234(6);
		Local_771.f_9 = 4;
		Local_771.f_1 = 3;
		GlobalFunc_2838("Mission failed: Marnie injured");
		return 1;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[1 /*8*/], 0, 2))
	{
		func_234(6);
		Local_771.f_9 = 5;
		Local_771.f_1 = 3;
		GlobalFunc_2838("Mission failed: Jimmy injured");
		return 1;
	}
	return 0;
}

void func_251(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26912
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
					if (func_164(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_164(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_164(PLAYER::PLAYER_PED_ID(), 8, 1) || func_164(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_164(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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

























void func_276(var uParam0, bool bParam1)//Position - 0x28200
{
	if (GlobalFunc_4924(*uParam0))
	{
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
		}
		if (uParam0->f_3 != -1)
		{
			Local_537[uParam0->f_3 /*6*/].f_5 = 0;
			uParam0->f_3 = -1;
		}
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}


void func_278()//Position - 0x28293
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(uLocal_165);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_164, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
}

void func_279(int iParam0)//Position - 0x2831D
{
	if (iParam0 == 1)
	{
		if (func_280())
		{
			if ((MISC::ARE_STRINGS_EQUAL(Local_624.f_14, "NO_RECENT_ANIM") || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_624, "rcm_epsilonism4", Local_624.f_14, 3)) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_624, "rcm_epsilonism4", Local_624.f_14) >= 0.98f)
			{
				if (fLocal_639 > 80f)
				{
					Local_624.f_14 = "detector_level3_prop";
				}
				else if (fLocal_639 > 50f)
				{
					Local_624.f_14 = "detector_level2_prop";
				}
				else
				{
					Local_624.f_14 = "detector_level1_prop";
				}
				ENTITY::PLAY_ENTITY_ANIM(Local_624, Local_624.f_14, "rcm_epsilonism4", 16f, 0, 0, 0, 0, 0);
			}
		}
	}
	else if (func_280())
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_624.f_14, "NO_RECENT_ANIM"))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_624, "rcm_epsilonism4", Local_624.f_14, 1))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_624, "rcm_epsilonism4", Local_624.f_14) <= 0.05f)
				{
					ENTITY::STOP_ENTITY_ANIM(Local_624, Local_624.f_14, "rcm_epsilonism4", -4f);
					Local_624.f_14 = "NO_RECENT_ANIM";
				}
			}
		}
	}
}

int func_280()//Position - 0x28431
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_624))
	{
		return 1;
	}
	return 0;
}


void func_282(int iParam0, int iParam1, int iParam2)//Position - 0x28458
{
	func_236(0, 0, iParam2, 1);
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







void func_289(char* sParam0)//Position - 0x29114
{
	GlobalFunc_8316(1, 1, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_290(bool bParam0, bool bParam1)//Position - 0x2912C
{
	if (bParam0)
	{
		func_291(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_251(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_291(bool bParam0, int iParam1, int iParam2)//Position - 0x2915F
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
			func_236(iParam1, iParam2, 1, 1);
		}
	}
}

void func_292()//Position - 0x291BE
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (Local_771.f_3 == 1)
	{
		func_290(1, 1);
		SYSTEM::WAIT(0);
		while (!func_320())
		{
			SYSTEM::WAIT(0);
		}
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
			CUTSCENE::REMOVE_CUTSCENE();
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 1);
		}
		if (iLocal_352 == 0)
		{
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_146, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_149);
			}
			func_276(&(Local_605[1 /*8*/]), 1);
			func_276(&(Local_605[0 /*8*/]), 1);
			if (GlobalFunc_4924(Local_605[1 /*8*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_82.f_28[1], 0);
				ENTITY::SET_ENTITY_COORDS(Local_605[1 /*8*/], 1829.75f, 4693.5f, 38.51f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_605[1 /*8*/], 27.46f);
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_605[1 /*8*/], 1) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(1829.75f, 4693.5f, 38.51f, &fVar1);
				ENTITY::SET_ENTITY_COORDS(Local_605[1 /*8*/], Var2.x, Var2.f_1, fVar1, 1, 0, 0, 1);
				GlobalFunc_2838("Setting Jimmy position (0)");
			}
			if (GlobalFunc_4924(Local_605[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_605[0 /*8*/], 1827.32f, 4692.59f, 38.53f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_605[0 /*8*/], 171.22f);
				GlobalFunc_2838("Setting Marnie position (0)");
			}
		}
		else if (iLocal_352 == 1)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1754.634f, 4675.789f, 42.9068f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 293.2275f);
			if (GlobalFunc_4924(Local_605[1 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_605[1 /*8*/], 1758.586f, 4670.085f, 42.6276f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_605[1 /*8*/], 262.4368f);
				GlobalFunc_2838("Setting Jimmy position (1)");
			}
			if (GlobalFunc_4924(Local_605[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_605[0 /*8*/], 1759.917f, 4683.584f, 42.7266f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_605[0 /*8*/], 148.3211f);
				GlobalFunc_2838("Setting Marnie position (1)");
			}
		}
		else if (iLocal_352 == 2)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1758.454f, 4829.431f, 39.729f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 168.2012f);
			if (GlobalFunc_4924(Local_605[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_605[0 /*8*/], 1755.005f, 4827.329f, 40.0736f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_605[0 /*8*/], 169.6486f);
				GlobalFunc_2838("Setting Marnie position (2)");
			}
		}
		SYSTEM::WAIT(750);
		func_282(1, 1, 1);
		Local_771.f_3 = 0;
	}
	if (Local_771.f_1 == 0)
	{
		GlobalFunc_2837("Doing setup for FindRock section:", iLocal_352);
		func_276(&(Local_605[1 /*8*/]), 0);
		iLocal_349 = 0;
		iLocal_351 = 0;
		iLocal_622 = 0;
		iLocal_358 = -1;
		iLocal_752 = 0;
		iLocal_753 = 0;
		iLocal_754 = MISC::GET_GAME_TIMER();
		iLocal_756 = MISC::GET_GAME_TIMER();
		iLocal_757 = 0;
		if (iLocal_352 == 0)
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != iLocal_158)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
				}
				GlobalFunc_7632(1);
			}
			if (GlobalFunc_4924(Local_605[1 /*8*/]))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Local_605[1 /*8*/], iLocal_158);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_605[1 /*8*/], 1826.246f, 4696.506f, 38.1187f, 1f, 20000, 0.1f, 0, 1193033728);
			}
			func_317(&(Local_605[1 /*8*/]), 1);
			iLocal_747 = 8;
			iLocal_748 = 8;
			iLocal_750 = 0;
			iLocal_749 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_352 == 1)
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != iLocal_158)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
					GlobalFunc_7632(1);
				}
			}
			func_317(&(Local_605[0 /*8*/]), 0);
			func_316(&(Local_605[1 /*8*/]), uLocal_759);
			iLocal_747 = 8;
			iLocal_748 = 8;
			iLocal_750 = 0;
			iLocal_749 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (iLocal_352 == 2)
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != iLocal_158)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
					GlobalFunc_7632(1);
				}
			}
			func_316(&(Local_605[0 /*8*/]), uLocal_762);
			func_315(&(Local_605[1 /*8*/]), iLocal_760);
			iLocal_747 = 11;
			iLocal_748 = 12;
			iLocal_750 = 0;
			iLocal_749 = 0;
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		GlobalFunc_173(&uLocal_167, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		GlobalFunc_173(&uLocal_167, 5, Local_605[1 /*8*/], "JIMMYBOSTON", 0, 1);
		GlobalFunc_173(&uLocal_167, 4, Local_605[0 /*8*/], "MARNIE", 0, 1);
		if (iLocal_352 == 0)
		{
			iLocal_360 = Local_605[1 /*8*/];
		}
		else
		{
			iLocal_360 = Local_605[0 /*8*/];
		}
		func_313(Local_362[iLocal_352 /*43*/].f_18, Local_362[iLocal_352 /*43*/].f_19, Local_362[iLocal_352 /*43*/].f_20, Local_362[iLocal_352 /*43*/].f_21, Local_362[iLocal_352 /*43*/].f_22);
		bLocal_335 = false;
		iLocal_336 = 0;
		iLocal_337 = 0;
		iLocal_338 = 1;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_341 = 0;
		iLocal_342 = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_347 = 0;
		iLocal_745 = 0;
		iLocal_746 = 0;
		HUD::CLEAR_HELP(1);
		iLocal_357 = MISC::GET_GAME_TIMER();
		iLocal_746 = MISC::GET_GAME_TIMER() + 1000;
		GlobalFunc_2837("Finished setup, moving to run loop for rock #:", iLocal_352);
		Local_771.f_1 = 1;
	}
	if (Local_771.f_1 == 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			func_234(6);
			Local_771.f_9 = 1;
			Local_771.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_605[0 /*8*/]))
		{
			func_234(6);
			Local_771.f_9 = 2;
			Local_771.f_1 = 3;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_605[1 /*8*/]))
		{
			func_234(6);
			Local_771.f_9 = 3;
			Local_771.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[0 /*8*/], 0, 2))
		{
			func_234(6);
			Local_771.f_9 = 4;
			Local_771.f_1 = 3;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_605[1 /*8*/], 0, 2))
		{
			func_234(6);
			Local_771.f_9 = 5;
			Local_771.f_1 = 3;
		}
		else if (func_227(&(Local_605[0 /*8*/])))
		{
			func_234(6);
			Local_771.f_9 = 6;
			Local_771.f_1 = 3;
		}
		else if (func_227(&(Local_605[1 /*8*/])))
		{
			func_234(6);
			Local_771.f_9 = 7;
			Local_771.f_1 = 3;
		}
		else if (!GlobalFunc_496(&uLocal_693, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
		{
			func_234(6);
			Local_771.f_9 = 8;
			Local_771.f_1 = 3;
		}
		else if (Local_771.f_6)
		{
			Local_771.f_1 = 3;
		}
		else if (Local_771.f_4)
		{
			func_234(3);
			Local_771.f_1 = 3;
		}
		else if (Local_771.f_5)
		{
			if (iLocal_352 == 0)
			{
				func_234(1);
				GlobalFunc_2838("P skipping to intro...");
			}
			else
			{
				iLocal_352 = (iLocal_352 - 1);
				func_234(3);
			}
			Local_771.f_1 = 3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_309(&(Local_605[iVar0 /*8*/]));
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_362[iLocal_352 /*43*/].f_1))
			{
				if (iLocal_352 == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_1", 8);
							GlobalFunc_2838("Requesting midtro now");
						}
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							GlobalFunc_2838("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (iLocal_352 == 1)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) < 100f)
					{
						if (!CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_2", 8);
							GlobalFunc_2838("Requesting midtro now");
						}
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) > 120f)
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							GlobalFunc_2838("Player moved away - unloading midtro");
							CUTSCENE::REMOVE_CUTSCENE();
						}
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) < 100f)
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						CUTSCENE::REQUEST_CUTSCENE("EPS_4_MCS_3", 8);
						GlobalFunc_2838("Requesting midtro now");
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_1, 1) > 120f)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GlobalFunc_2838("Player moved away - unloading midtro");
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set player component variation");
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (iLocal_352 == 0 || iLocal_352 == 2)
				{
					GlobalFunc_2838("Trying to set Jimmy prop variation");
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != iLocal_158)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
				}
			}
			func_308(&(Local_362[iLocal_352 /*43*/]));
			if (iLocal_352 == 0)
			{
				if (iLocal_745 == 0)
				{
					if (iLocal_746 < MISC::GET_GAME_TIMER())
					{
						if (!GlobalFunc_1720())
						{
							GlobalFunc_1("EPS4_T0");
							iLocal_746 = MISC::GET_GAME_TIMER() + 7500;
							iLocal_745++;
							iLocal_758 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_745 = 2;
						}
					}
				}
				else if (iLocal_745 == 1)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 25) || iLocal_746 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(1);
						iLocal_746 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_745++;
						iLocal_758 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_745 == 2)
				{
					if (iLocal_746 < MISC::GET_GAME_TIMER())
					{
						GlobalFunc_1("EPS4_T1");
						iLocal_746 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_745++;
						iLocal_758 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_745 == 3)
				{
					if (iLocal_746 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(1);
						iLocal_746 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_745++;
						iLocal_758 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_745 == 4)
				{
					if (iLocal_746 < MISC::GET_GAME_TIMER())
					{
						GlobalFunc_1("EPS4_T2");
						iLocal_746 = MISC::GET_GAME_TIMER() + 7500;
						iLocal_745++;
						iLocal_758 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_745 == 5)
				{
					if (iLocal_746 < MISC::GET_GAME_TIMER())
					{
						HUD::CLEAR_HELP(1);
						iLocal_746 = MISC::GET_GAME_TIMER() + 1000;
						iLocal_745++;
					}
				}
			}
			func_279(Local_624.f_1);
			if (iLocal_338 == 1)
			{
				GlobalFunc_846(&uLocal_163);
				if (!GlobalFunc_496(&uLocal_641, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					iLocal_338 = 0;
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_346 == 0 && iLocal_337)
				{
					if (!GlobalFunc_111())
					{
						iLocal_357 = MISC::GET_GAME_TIMER();
						iLocal_346 = 1;
					}
				}
				else if (iLocal_339 == 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_36, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_36, 7, 0, 0, 0))
					{
						if (!MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_36, sLocal_160))
						{
							if (GlobalFunc_115(iLocal_360))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							}
						}
						iLocal_758 = MISC::GET_GAME_TIMER();
						iLocal_339 = 1;
					}
				}
				else if (iLocal_345 == 0)
				{
					if (iLocal_352 == 0)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_164("EPS4_A2", 7500, 0);
							iLocal_357 = MISC::GET_GAME_TIMER();
							iLocal_345 = 1;
						}
					}
					else
					{
						iLocal_345 = 1;
					}
				}
				else if (iLocal_340 == 0)
				{
					if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_357) >= 7500)
					{
						if ((MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_37, sLocal_160) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_360, 30f, 30f, 30f, 0, 1, 0)) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_37, 7, 0, 0, 0))
						{
							if (!MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_37, sLocal_160))
							{
								if (GlobalFunc_115(iLocal_360))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
								}
							}
							iLocal_340 = 1;
							iLocal_758 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (iLocal_341 == 0)
				{
					if (!GlobalFunc_111())
					{
						iLocal_341 = 1;
						iLocal_355 = MISC::GET_GAME_TIMER();
						iLocal_356 = 0;
					}
				}
				else if (iLocal_337 == 0 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_2, 9f))
				{
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_2, 20f))
					{
						if (!iLocal_342)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_42, 7, 0, 0, 0))
								{
									if (GlobalFunc_115(iLocal_360))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
									}
									RECORDING::_0x293220DA1B46CEBC(3f, 5f, 0);
									iLocal_342 = 1;
								}
							}
						}
					}
					if (CAM::IS_AIM_CAM_ACTIVE())
					{
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_360, 30f) || iLocal_352 == 2)
						{
							if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_355) > 15000)
							{
								if (bLocal_335)
								{
									if (iLocal_351 == 0)
									{
										if (iLocal_749 < iLocal_747)
										{
											if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_40, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_40, 7, 0, 0, 0))
											{
												if (GlobalFunc_4924(iLocal_360))
												{
													TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
												}
												iLocal_355 = MISC::GET_GAME_TIMER();
												iLocal_749++;
												if (iLocal_352 == 2)
												{
													iLocal_351 = 1;
												}
											}
										}
									}
									else if (iLocal_751 < 12)
									{
										if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_40, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_HASSIG", 7, 0, 0, 0))
										{
											iLocal_355 = MISC::GET_GAME_TIMER();
											iLocal_751++;
										}
									}
								}
								else if (iLocal_750 < iLocal_748)
								{
									if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_41, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_41, 7, 0, 0, 0))
									{
										if (GlobalFunc_4924(iLocal_360))
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
										}
										iLocal_355 = MISC::GET_GAME_TIMER();
										iLocal_750++;
									}
								}
							}
							else if (bLocal_335 != Local_624.f_1)
							{
								bLocal_335 = Local_624.f_1;
								if (Local_624.f_1 == 0)
								{
									iLocal_351 = 0;
								}
								if (bLocal_335)
								{
									if (iLocal_356 < MISC::GET_GAME_TIMER())
									{
										if (GlobalFunc_111())
										{
											AUDIO::STOP_SCRIPTED_CONVERSATION(1);
										}
										iLocal_355 = (MISC::GET_GAME_TIMER() - 7500);
										iLocal_356 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_355 = (MISC::GET_GAME_TIMER() - 7500);
								}
							}
						}
					}
					else
					{
						iLocal_355 = (MISC::GET_GAME_TIMER() - 5000);
					}
				}
				if (iLocal_352 == 0)
				{
					if (iLocal_752 < 5)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_754) > 7500 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_115(Local_605[0 /*8*/]))
							{
								if (GlobalFunc_156(Local_605[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_NEARM", 6, 0, 0, 0))
									{
										iLocal_752++;
										iLocal_754 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else if (iLocal_352 == 1)
				{
					if (iLocal_752 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_754) > 7500 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_115(Local_605[1 /*8*/]))
							{
								if (GlobalFunc_156(Local_605[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_NEARJ", 6, 0, 0, 0))
									{
										iLocal_752++;
										iLocal_754 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_752 < 3)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_754) > 7500 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_115(Local_605[1 /*8*/]))
							{
								if (GlobalFunc_156(Local_605[1 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_NEARJP", 6, 0, 0, 0))
									{
										iLocal_752++;
										iLocal_754 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_753 < 4)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_754) > 7500 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_115(Local_605[0 /*8*/]))
							{
								if (GlobalFunc_156(Local_605[0 /*8*/], PLAYER::PLAYER_PED_ID(), 1) < 4f)
								{
									if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_NEARMP", 6, 0, 0, 0))
									{
										iLocal_753++;
										iLocal_754 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_2, 6.2f, 6.2f, 2f, 0, 0, 1))
				{
					if (iLocal_358 == -1)
					{
						iLocal_358 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_358) >= 1500)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
						}
						iLocal_536 = MISC::GET_GAME_TIMER();
						func_234(3);
						Local_771.f_1 = 3;
					}
				}
				else if (iLocal_336 == 0)
				{
					if (Local_624.f_6)
					{
						iLocal_336 = 1;
						iLocal_337 = 1;
					}
				}
				else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_2, (9f + 2f)))
				{
					iLocal_336 = 0;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_163))
				{
					uLocal_163 = GlobalFunc_2324(Local_143, 5, 0);
				}
				bLocal_335 = Local_624.f_1;
				if (GlobalFunc_496(&uLocal_641, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					iLocal_338 = 1;
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					HUD::CLEAR_PRINTS();
				}
				else if (iLocal_347 == 0)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_164("EPS4_A1", 7500, 0);
						iLocal_357 = MISC::GET_GAME_TIMER();
						iLocal_347 = 1;
					}
				}
				else if (iLocal_343 == 0)
				{
					if (iLocal_352 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_360, 30f, 30f, 30f, 0, 1, 0))
						{
							if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_38, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_38, 7, 0, 0, 0))
								{
									iLocal_343 = 1;
								}
							}
						}
					}
					else if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_38, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_38, 7, 0, 0, 0))
						{
							iLocal_343 = 1;
						}
					}
				}
				else if (iLocal_344 == 0)
				{
					if (iLocal_352 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_360, 30f, 30f, 30f, 0, 1, 0))
						{
							if ((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_357) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_39, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_39, 7, 0, 0, 0))
								{
									iLocal_344 = 1;
								}
							}
						}
					}
					else if ((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_357) >= 7500) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (MISC::ARE_STRINGS_EQUAL(Local_362[iLocal_352 /*43*/].f_39, sLocal_160) || GlobalFunc_10607(&uLocal_167, "EPS4AUD", Local_362[iLocal_352 /*43*/].f_39, 7, 0, 0, 0))
						{
							iLocal_344 = 1;
						}
					}
				}
			}
		}
	}
	if (Local_771.f_1 == 3)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		GlobalFunc_2838("In cleanup for FindRock");
		if (GlobalFunc_111())
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		}
		func_279(1);
		func_278();
		PAD::SET_PAD_SHAKE(0, 200, 150);
		if ((MISC::GET_GAME_TIMER() - iLocal_536) > 750)
		{
			func_222();
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 0);
			RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			func_276(&(Local_605[1 /*8*/]), 0);
			func_276(&(Local_605[0 /*8*/]), 0);
			func_351();
		}
	}
}
















void func_308(var uParam0)//Position - 0x2ABFD
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	bool bVar14;
	float fVar15;
	bool bVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	
	fVar0 = SYSTEM::VDIST(uParam0->f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (fVar0 > Local_624.f_11)
	{
		fVar7 = 0f;
		if (Local_624.f_8 > 0f)
		{
			fVar7 = (fVar7 + (SYSTEM::SIN(((fVar0 - Local_624.f_11) * (360f / Local_624.f_8))) * Local_624.f_10));
		}
		if (Local_624.f_9 > 0f)
		{
			fVar7 = (fVar7 + (SYSTEM::SIN(((fVar0 - Local_624.f_11) * (360f / Local_624.f_9))) * (Local_624.f_10 * -0.7f)));
		}
		Var4.x = ((Var1.x * SYSTEM::COS(fVar7)) - (Var1.f_1 * SYSTEM::SIN(fVar7)));
		Var4.f_1 = ((Var1.f_1 * SYSTEM::COS(fVar7)) + (Var1.x * SYSTEM::SIN(fVar7)));
	}
	else
	{
		Var4 = { Var1 };
	}
	Var8 = { uParam0->f_2 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var11 = { uParam0->f_2 - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -5f, 0f) };
	bVar14 = ((Var8.x * Var4.x) + (Var8.f_1 * Var4.f_1)) > 0f;
	fVar15 = (1f - (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var4.x, Var4.f_1, Var11.x, Var11.f_1) / 180f));
	if (fVar0 >= 10f)
	{
		Local_624.f_12 = 0.92f;
	}
	else
	{
		Local_624.f_12 = 0.95f;
	}
	bVar16 = (fVar15 > Local_624.f_12 && bVar14);
	Local_624.f_1 = bVar16;
	if (Local_624.f_6 == 1)
	{
		PAD::SET_PAD_SHAKE(0, 200, 150);
		if (fVar0 > 6.5f || bVar16 == 0)
		{
			AUDIO::STOP_SOUND(Local_624.f_4);
			Local_624.f_6 = 0;
			iLocal_353 = 0;
		}
	}
	else if (iLocal_353 < MISC::GET_GAME_TIMER())
	{
		if (fVar0 <= 6.5f && bVar16)
		{
			AUDIO::STOP_SOUND(Local_624.f_3);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_624.f_4, "CONTINUAL_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", 0, 0);
			Local_624.f_6 = 1;
		}
		else
		{
			fVar17 = (fVar0 - (6.5f + 2.5f));
			if (fVar17 < 0f)
			{
				fVar17 = 0f;
			}
			iVar18 = (125 + SYSTEM::ROUND(((fVar17 / 40f) * (1250f - 125f))));
			if (iVar18 > 1250)
			{
				iVar18 = 1250;
			}
			iLocal_353 = (MISC::GET_GAME_TIMER() + iVar18);
			iVar18 = (iVar18 / 3);
			if (iVar18 < 100)
			{
				iVar18 = 100;
			}
			iLocal_354 = (MISC::GET_GAME_TIMER() + iVar18);
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_624.f_3, "IDLE_BEEP", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", 0, 0);
			if (bVar16)
			{
				PAD::SET_PAD_SHAKE(0, 200, 150);
			}
			else
			{
				PAD::SET_PAD_SHAKE(0, 200, 100);
			}
		}
	}
	if (iLocal_354 > 0 && MISC::GET_GAME_TIMER() > iLocal_354)
	{
		AUDIO::STOP_SOUND(Local_624.f_3);
		iLocal_354 = 0;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		if (Local_624.f_7 == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_624.f_5, "SCAN", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", 0, 0);
			Local_624.f_7 = 1;
		}
		else if (bVar16)
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_624.f_5, "IsOnTarget", 1f);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_624.f_5, "IsOnTarget", 0f);
		}
		iLocal_758 = MISC::GET_GAME_TIMER();
	}
	else if (Local_624.f_7 == 1)
	{
		AUDIO::STOP_SOUND(Local_624.f_5);
		Local_624.f_7 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_624))
	{
		Local_624 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		fVar19 = ((fVar0 - 6.5f) / (uParam0->f_23 - 6.5f));
		if (fVar19 < 0f)
		{
			fVar19 = 0f;
		}
		else if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		if (Local_624.f_1)
		{
			fLocal_639 = (100f - (fVar19 * 100f));
		}
		else
		{
			fLocal_639 = (100f - (fVar19 * 100f));
			fLocal_639 = (fLocal_639 * -1f);
		}
		if (!Local_624.f_1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(209);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(67);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (fLocal_639 >= 95f && fLocal_639 <= 99.8f)
		{
			fLocal_639 = 94.9f;
		}
		else if (fLocal_639 <= -95f && fLocal_639 >= -99.8f)
		{
			fLocal_639 = -94.9f;
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_362[iLocal_352 /*43*/].f_2, 6.2f, 6.2f, 2f, 0, 0, 1))
		{
			fLocal_639 = 100f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_164, "SET_DISTANCE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_639);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		HUD::SET_TEXT_RENDER_ID(uLocal_165);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_164, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	}
	if (PAD::IS_CONTROL_PRESSED(0, 25))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		if (bLocal_350)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(15f, 1065353216);
			PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		}
		iLocal_348 = 1;
	}
	else if (GlobalFunc_1720())
	{
		iLocal_348 = 1;
	}
}

void func_309(var uParam0)//Position - 0x2B11C
{
	int iVar0;
	
	if (GlobalFunc_4924(*uParam0) && PED::IS_PED_IN_GROUP(*uParam0))
	{
		if (uParam0->f_1 != 4 && uParam0->f_1 != 5)
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
	}
	func_311(*uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 3:
			break;
		
		case 1:
			if (!GlobalFunc_4924(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_604);
				while (uParam0->f_3 == -1)
				{
					if (Local_537[iVar0 /*6*/].f_5 == 0)
					{
						if (Local_537[iVar0 /*6*/].f_4 == 0)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(*uParam0, Local_537[iVar0 /*6*/], 3f, 3f, 3f, 0, 1, 0))
							{
								GlobalFunc_2837("Telling ped to go to marker: ", iVar0);
								Local_537[iVar0 /*6*/].f_5 = 1;
								uParam0->f_3 = iVar0;
							}
						}
					}
					iVar0 = (iVar0 + 1 % iLocal_604);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_537[uParam0->f_3 /*6*/], 1f, -1, 0.25f, 5, 1193033728);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (!uParam0->f_7)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 713668775) == 7)
					{
						GlobalFunc_2838("Eps reached marker! (follow nav to coord)");
						uParam0->f_1 = 2;
						uParam0->f_2 = 0;
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 2106541073) == 7)
				{
					GlobalFunc_2838("Eps reached marker! (go straight to coord)");
					uParam0->f_7 = 0;
					uParam0->f_1 = 2;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_4924(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				GlobalFunc_2837("Telling ped do sequence for marker: ", uParam0->f_3);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_166);
				if (Local_537[uParam0->f_3 /*6*/].f_4 == 0)
				{
					if (*uParam0 == Local_605[1 /*8*/])
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				else if (Local_537[uParam0->f_3 /*6*/].f_4 == 2)
				{
					TASK::TASK_ACHIEVE_HEADING(0, Local_537[uParam0->f_3 /*6*/].f_3, 0);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "peeing", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				else if (Local_537[uParam0->f_3 /*6*/].f_4 == 3)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "hippy_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				else if (Local_537[uParam0->f_3 /*6*/].f_4 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_166);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_166);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_166);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
				{
					Local_537[uParam0->f_3 /*6*/].f_5 = 0;
					uParam0->f_3 = -1;
					uParam0->f_1 = 1;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_4924(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_4, 1f, 1f, 1f, 0, 1, 0) || iLocal_352 > 0)
				{
					if (!PED::IS_PED_IN_GROUP(*uParam0))
					{
						TASK::CLEAR_PED_TASKS(*uParam0);
						PED::SET_PED_AS_GROUP_MEMBER(*uParam0, GlobalFunc_468());
						PED::SET_PED_CONFIG_FLAG(*uParam0, 167, 1);
					}
					iLocal_755 = MISC::GET_GAME_TIMER();
					if (iLocal_352 == 0)
					{
						PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
					}
					else
					{
						PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
					}
					PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 4f, -1082130432, -1082130432);
					uParam0->f_2 = 1;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (!PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 5;
					uParam0->f_2 = 0;
				}
				if (TASK::IS_PED_STILL(*uParam0))
				{
					if (!iLocal_349)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_755) > 6000)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_166);
							if (*uParam0 == Local_605[1 /*8*/])
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_entry_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_idle_a_jb", 8f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_jimmy_lookaround_exit_jb", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_entry_marnie", 4f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_idle_a_marnie", 8f, -4f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "rcm_epsilonism4", "eps_4_ig_1_marnie_lookaround_exit_marnie", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							TASK::CLOSE_SEQUENCE_TASK(uLocal_166);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_166);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_166);
							if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (*uParam0 == Local_605[1 /*8*/])
								{
									GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_DAWDJ", 7, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_DAWDM", 7, 0, 0, 0);
								}
							}
							iLocal_349 = 1;
						}
					}
					else
					{
						iLocal_755 = MISC::GET_GAME_TIMER();
						if (!GlobalFunc_6964(*uParam0, 242628503))
						{
							iLocal_349 = 0;
						}
					}
				}
				else
				{
					iLocal_755 = MISC::GET_GAME_TIMER();
					iLocal_349 = 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if ((((MISC::GET_GAME_TIMER() - iLocal_756) > 7500 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_336)
					{
						if (*uParam0 == Local_605[1 /*8*/])
						{
							if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_MESSJ", 7, 0, 0, 0))
							{
								iLocal_756 = MISC::GET_GAME_TIMER();
							}
						}
						else if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_MESSM", 7, 0, 0, 0))
						{
							iLocal_756 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_758) > 15000)
				{
					if ((((iLocal_757 < 4 && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !iLocal_336) && !GlobalFunc_1720())
					{
						if (*uParam0 == Local_605[1 /*8*/])
						{
							if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_PROMPTJ", 7, 0, 0, 0))
							{
								iLocal_758 = MISC::GET_GAME_TIMER();
								iLocal_757++;
							}
						}
						else if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_PROMPTM", 7, 0, 0, 0))
						{
							iLocal_758 = MISC::GET_GAME_TIMER();
							iLocal_757++;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_4924(*uParam0))
			{
				uParam0->f_1 = 0;
				uParam0->f_2 = 0;
			}
			else if (uParam0->f_2 == 0)
			{
				TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 20000, 4.5f, 1073741824, 1073741824, 0);
				uParam0->f_2 = 1;
			}
			else if (uParam0->f_2 == 1)
			{
				PED::SET_PED_AS_GROUP_MEMBER(*uParam0, GlobalFunc_468());
				if (PED::IS_PED_IN_GROUP(*uParam0))
				{
					uParam0->f_1 = 4;
					uParam0->f_2 = 0;
				}
			}
			break;
		
		default:
			break;
	}
}


void func_311(int iParam0)//Position - 0x2B883
{
	if (GlobalFunc_4924(iParam0) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_622 == 0)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0) && PED::IS_PED_RAGDOLL(iParam0))
			{
				GlobalFunc_2838("Player knocked Eps over!");
				iLocal_622 = 1;
				iLocal_623 = iParam0;
				TASK::CLEAR_PED_TASKS(iParam0);
			}
		}
		else if (GlobalFunc_4924(iLocal_623))
		{
			if (TASK::IS_PED_GETTING_UP(iLocal_623) || PED::IS_PED_ON_FOOT(iLocal_623))
			{
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_623 == Local_605[1 /*8*/])
					{
						if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_JKNOCK", 7, 0, 0, 0))
						{
							iLocal_622 = 0;
							iLocal_623 = 0;
						}
					}
					else if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "EPS4_MKNOCK", 7, 0, 0, 0))
					{
						iLocal_622 = 0;
						iLocal_623 = 0;
					}
				}
			}
		}
	}
}


void func_313(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2BA15
{
	AUDIO::PLAY_SOUND_FROM_ENTITY(Local_624.f_2, "DEVICE", PLAYER::PLAYER_PED_ID(), "EPSILONISM_04_SOUNDSET", 0, 0);
	if (Local_624.f_13 == 0)
	{
		Local_624.f_8 = uParam0;
		Local_624.f_9 = uParam1;
		Local_624.f_10 = uParam2;
		Local_624.f_11 = uParam3;
		Local_624.f_12 = uParam4;
	}
	Local_624.f_6 = 0;
	Local_624.f_7 = 0;
	Local_624.f_14 = "NO_RECENT_ANIM";
}


void func_315(var uParam0, int iParam1)//Position - 0x2BB11
{
	if (GlobalFunc_4924(*uParam0))
	{
		if (uParam0->f_1 == 2)
		{
			Local_537[iParam1 /*6*/].f_5 = 0;
		}
		uParam0->f_1 = 2;
		uParam0->f_2 = 0;
		Local_537[iParam1 /*6*/].f_5 = 1;
		uParam0->f_3 = iParam1;
		if (PED::IS_PED_IN_GROUP(*uParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*uParam0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_537[iParam1 /*6*/], 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*uParam0, Local_537[iParam1 /*6*/].f_3);
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_316(var uParam0, var uParam1)//Position - 0x2BB98
{
	if (GlobalFunc_4924(*uParam0))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 0;
		if (uParam0->f_3 != -1)
		{
			Local_537[uParam0->f_3 /*6*/].f_5 = 0;
		}
		uParam0->f_3 = uParam1;
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}

void func_317(var uParam0, bool bParam1)//Position - 0x2BBDB
{
	if (GlobalFunc_4924(*uParam0) && GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_1 = 4;
		uParam0->f_2 = 0;
		TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		if (bParam1)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 0);
		}
		uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	else
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
	}
}



int func_320()//Position - 0x2BD17
{
	if ((func_323() && func_322()) && func_321())
	{
		return 1;
	}
	return 0;
}

int func_321()//Position - 0x2BD3D
{
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4");
	STREAMING::REQUEST_ANIM_DICT("rcm_epsilonism4leadinout");
	if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4") && STREAMING::HAS_ANIM_DICT_LOADED("rcm_epsilonism4leadinout"))
	{
		return 1;
	}
	return 0;
}

int func_322()//Position - 0x2BD74
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_535)
	{
		STREAMING::REQUEST_MODEL(Local_362[iVar0 /*43*/]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(uLocal_159);
	STREAMING::REQUEST_MODEL(joaat("bison"));
	iVar0 = 0;
	while (iVar0 < iLocal_535)
	{
		if (!STREAMING::HAS_MODEL_LOADED(Local_362[iVar0 /*43*/]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_159) || !STREAMING::HAS_MODEL_LOADED(joaat("bison")))
	{
		return 0;
	}
	return 1;
}

int func_323()//Position - 0x2BDF0
{
	HUD::REQUEST_ADDITIONAL_TEXT("EPS4", 0);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_324()//Position - 0x2BE0E
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_2838("Can request assets for cutscene entity in Eps 4");
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_11086("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
		}
	}
	if (Local_771.f_3 == 1)
	{
		func_290(1, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		CUTSCENE::REQUEST_CUTSCENE("ep_4_rcm_concat", 8);
		GlobalFunc_2838("SKIP: Doing sync for intro skip");
		if (!GlobalFunc_2(0))
		{
			func_282(1, 1, 1);
		}
		Local_771.f_3 = 0;
	}
	if (Local_771.f_1 == 0)
	{
		GlobalFunc_2838("In Intro setup, waiting for cutscene to be ready...");
		if (GlobalFunc_8024(1, 1093140480, 0))
		{
			GlobalFunc_2838("Starting intro cutscene...");
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			if (GlobalFunc_4924(Local_82.f_28[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_82.f_28[0], "Marnie", 0, 0, 0);
			}
			if (GlobalFunc_4924(Local_82.f_28[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_82.f_28[1], 0);
				if (GlobalFunc_115(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_82.f_28[1])))
				{
					iLocal_640 = GlobalFunc_6830(Local_82.f_28[1], joaat("weapon_digiscanner"), 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_640, "Artefact_Detector", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_82.f_28[1], "Jimmy_Boston", 0, 0, 0);
			}
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EPS4_START");
			GlobalFunc_8954();
			RECORDING::_0x48621C9FCA3EBD28(1);
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			CAM::STOP_GAMEPLAY_HINT(0);
			func_282(1, 1, 0);
			GlobalFunc_10159(1833.393f, 4703.849f, 32.50218f, 1819.368f, 4693.413f, 43.89163f, 18f, 1816.55f, 4683.33f, 37.75f, 339.76f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			func_251(1812f, 4697f, 39.1f, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			while (!func_320())
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_2838("Loaded all assets! Moving to intro run loop...");
			Local_771.f_1 = 1;
		}
	}
	if (Local_771.f_1 == 1)
	{
		func_244();
		if (Local_771.f_4)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			func_234(2);
			Local_771.f_1 = 3;
		}
		else if (Local_771.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			Local_771.f_1 = 3;
		}
		else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_234(2);
			Local_771.f_1 = 3;
		}
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				GlobalFunc_2838("*** Forcing Michael's move state");
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 1827.161f, 4698.645f, 38.094f, 184.1384f, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_158, -1, 1, 1);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_2838("*** Teleport Mike");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 1827.161f, 4698.645f, 38.094f, 184.1384f, 0, 1);
		}
		func_326();
		func_325();
		if (GlobalFunc_115(iLocal_640))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_640, PLAYER::PLAYER_PED_ID());
				GlobalFunc_2346(&iLocal_640);
			}
		}
	}
	if (Local_771.f_1 == 3)
	{
		GlobalFunc_2838("Doing intro cleanup and progressing");
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_352 = 0;
			func_236(1, 0, 1, 1);
			GlobalFunc_4923(&Local_82, 0, 1);
			func_351();
		}
	}
}

void func_325()//Position - 0x2C178
{
	var uVar0;
	
	if (GlobalFunc_115(Local_605[1 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(1829.8f, 4693.48f, 38.5f, &uVar0);
			ENTITY::SET_ENTITY_COORDS(Local_605[1 /*8*/], 1829.8f, 4693.48f, uVar0, 1, 0, 0, 1);
		}
	}
}

void func_326()//Position - 0x2C1C9
{
	if (GlobalFunc_115(Local_605[0 /*8*/]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Marnie", 0))
		{
			func_316(&(Local_605[0 /*8*/]), uLocal_761);
			Local_605[0 /*8*/].f_1 = 1;
			Local_605[0 /*8*/].f_2 = 1;
			if (Local_605[0 /*8*/].f_3 != -1)
			{
				Local_537[Local_605[0 /*8*/].f_3 /*6*/].f_5 = 0;
			}
			Local_605[0 /*8*/].f_3 = uLocal_761;
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_605[0 /*8*/], Local_537[Local_605[0 /*8*/].f_3 /*6*/], 1f, -1, 1193033728, 1056964608);
			PED::FORCE_PED_MOTION_STATE(Local_605[0 /*8*/], -668482597, 0, 1, 1);
			Local_605[0 /*8*/].f_7 = 1;
			GlobalFunc_2838("Done Marnie intro exit state");
		}
	}
}



void func_329()//Position - 0x2C2F4
{
	GlobalFunc_8320();
	if (Local_771.f_3 == 1)
	{
		func_290(1, 1);
		GlobalFunc_2838("SKIP: Doing sync for leadin skip");
		func_282(1, 1, 1);
		Local_771.f_3 = 0;
	}
	if (Local_771.f_1 == 0)
	{
		iLocal_353 = MISC::GET_GAME_TIMER();
		if (!GlobalFunc_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, 0, 1, 0))
		{
			GlobalFunc_2838("Doing setup for leadin");
			GlobalFunc_173(&uLocal_167, 4, Local_82.f_28[0], "MARNIE", 0, 1);
			if (func_321())
			{
				Local_771.f_1 = 1;
			}
		}
		else
		{
			GlobalFunc_2838("Skipping setup for leadin (repeat play/wrong area)");
			Local_771.f_1 = 1;
		}
	}
	if (Local_771.f_1 == 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_353) > 1250)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", 0, 0, 0);
			iLocal_353 = MISC::GET_GAME_TIMER();
		}
		if (!GlobalFunc_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.621f, 4698.734f, 41.36862f, 1831.158f, 4680.191f, 32.42626f, 16.5f, 0, 1, 0))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) >= 3f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!iLocal_332)
					{
						if (GlobalFunc_115(Local_82.f_28[0]))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_82.f_28[0], 0f, 0f, 0.2f, 1, 30000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_766);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_767);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_768);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_769);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_770);
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_166);
								TASK::TASK_LOOK_AT_ENTITY(0, Local_82.f_28[0], 15000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 1193033728);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_82.f_28[0], 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_166);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_166);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_166);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							}
							iLocal_332 = 1;
						}
					}
				}
				else
				{
					CAM::_0xCCD078C2665D2973(1);
				}
			}
			else
			{
				iLocal_332 = 1;
			}
			if (!iLocal_333)
			{
				if (GlobalFunc_4924(Local_82.f_28[0]) && !GlobalFunc_111())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_82.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
					TASK::TASK_PLAY_ANIM(Local_82.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 8f, -8f, -1, 2, 0, 0, 0, 0);
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("EP_4_RCM_CONCAT", 2, 8);
					GlobalFunc_2838("Done Marnie leadin anim - request concat cutscene");
					iLocal_333 = 1;
				}
			}
			else if (GlobalFunc_4924(Local_82.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_82.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_82.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.25f)
					{
						if (!iLocal_334)
						{
							if (GlobalFunc_10607(&uLocal_167, "EPS4AUD", "ESP4_RCL", 8, 0, 0, 0))
							{
								GlobalFunc_2838("Leadin convo done");
								iLocal_334 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_82.f_28[0], "rcm_epsilonism4leadinout", "ep_4_rcm_leadin_marnie") > 0.95f)
					{
						GlobalFunc_2838("Leadin done, launch cutscene");
						func_234(1);
						Local_771.f_1 = 3;
					}
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_82.f_28[0], 1) <= 1.5f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			GlobalFunc_2838("Replay in progress/wrong area, skipping leadin");
			func_234(1);
			Local_771.f_1 = 3;
		}
	}
	if (Local_771.f_1 == 3)
	{
		GlobalFunc_2838("Doing leadin cleanup and progressing");
		func_351();
	}
}




void func_333(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2C6E1
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}


















void func_351()//Position - 0x2D347
{
	if ((Local_771.f_4 || Local_771.f_5) || Local_771.f_6)
	{
		Local_771.f_3 = 1;
		if (Local_771.f_8 == 1)
		{
			GlobalFunc_2838("Sync for skip is TRUE and Intro is queued!");
		}
	}
	else
	{
		Local_771.f_3 = 0;
	}
	if (Local_771.f_6)
	{
		switch (Local_771.f_7)
		{
			case 0:
				Local_771.f_8 = 1;
				break;
			
			case 1:
				Local_771.f_8 = 2;
				iLocal_352 = 0;
				break;
			
			case 2:
				Local_771.f_8 = 3;
				iLocal_352 = 0;
				break;
			
			case 3:
				Local_771.f_8 = 2;
				iLocal_352 = 1;
				break;
			
			case 4:
				Local_771.f_8 = 3;
				iLocal_352 = 1;
				break;
			
			case 5:
				Local_771.f_8 = 2;
				iLocal_352 = 2;
				break;
			
			case 6:
				Local_771.f_8 = 3;
				iLocal_352 = 2;
				break;
			}
	}
	Local_771.f_4 = 0;
	Local_771.f_5 = 0;
	Local_771.f_6 = 0;
	Local_771 = Local_771.f_8;
	Local_771.f_1 = 0;
	Local_771.f_2 = 0;
}


void func_353(int iParam0)//Position - 0x2D53B
{
	Local_771.f_7 = iParam0;
	Local_771.f_6 = 1;
}



int func_356(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)//Position - 0x2D60F
{
	if (iParam5 != 0)
	{
		*uParam0 = iParam5;
		GlobalFunc_2838("*** Epsilonist exists, grabbing ped index");
	}
	else
	{
		*uParam0 = PED::CREATE_PED(5, iParam6, Param1, fParam4, 1, 1);
		GlobalFunc_2838("*** Epsilonist does not exist, creating new");
	}
	if (GlobalFunc_4924(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, 1862763509);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		PED::SET_PED_KEEP_TASK(*uParam0, 1);
		uParam0->f_1 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = -1;
		return 1;
	}
	return 0;
}

void func_357(var uParam0)//Position - 0x2D6A5
{
	struct<3> Var0;
	
	Var0 = { uParam0->f_2 };
	func_358("Rock created at: ", uParam0->f_2);
	uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, Var0, 1, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, uParam0->f_5, 0, 1);
		func_358("Rock rot vector: ", ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 0));
		func_358("Rock actual position: ", ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 0));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, 1);
	}
}

void func_358(char* sParam0, struct<3> Param1)//Position - 0x2D729
{
	sParam0 = sParam0;
	Param1 = { Param1 };
}

void func_359()//Position - 0x2D73D
{
	Local_624.f_2 = AUDIO::GET_SOUND_ID();
	Local_624.f_3 = AUDIO::GET_SOUND_ID();
	Local_624.f_4 = AUDIO::GET_SOUND_ID();
	Local_624.f_5 = AUDIO::GET_SOUND_ID();
	Local_624.f_12 = 0.92f;
	Local_624.f_13 = 0;
	Local_624.f_14 = "NO_RECENT_ANIM";
	uLocal_164 = unk_0x67D02A194A2FC2BD("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_164))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", 0);
	}
	HUD::LINK_NAMED_RENDERTARGET(iLocal_159);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		uLocal_165 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
}

void func_360()//Position - 0x2D7D4
{
	Local_771.f_4 = 0;
	Local_771.f_5 = 0;
	Local_771.f_6 = 0;
	Local_771.f_3 = 0;
	Local_771.f_8 = -1;
}

void func_361()//Position - 0x2D7FA
{
	func_377(joaat("prop_tv_test"), 1751.65f, 4676.77f, 43.03f, -2.33f, 0.99f, 91.36f);
	func_376(1755.463f, 4678.62f, 44.1477f, -9.5251f, 0f, 122.2955f, 50.832f);
	func_375(3f, -4.5f, 0f);
	func_374(1689.951f, 4762.613f, 40.9216f, 272.5499f);
	func_373(1779.514f, 4691.447f, 39.34577f, 1744.225f, 4674.646f, 46.84829f, 16.5f);
	func_372("EPS4_JCHAT1", sLocal_160);
	func_371("EPS4_JGOOD", "EPS4_JBAD");
	func_370("EPS4_JRET1", "EPS4_JRET2");
	func_369("EPS4_JCLOSE");
	func_368(0f, 0f, 0f);
	func_367(30f, 115f, 0.9f);
	func_377(joaat("prop_battery_01"), 1756.68f, 4832.28f, 39.43f, 90f, 13.21f, 78.57f);
	func_376(1758.032f, 4826.561f, 41.459f, -11.6785f, 0f, 6.5381f, 34.3083f);
	func_375(2f, 4f, 0f);
	func_374(1690.267f, 4769.994f, 40.9216f, 269.3043f);
	func_373(1750.065f, 4833.117f, 36.87026f, 1763.224f, 4831.822f, 43.5425f, 13.75f);
	func_372("EPS4_MCHAT1", "EPS4_MCHAT2");
	func_371("EPS4_MGOOD", "EPS4_MBAD");
	func_370("EPS4_MRET1", "EPS4_MRET2");
	func_369("EPS4_MCLOSE");
	func_368(0f, 0f, 0f);
	func_367(30f, 195f, 0.9f);
	func_377(joaat("prop_old_boot"), 1847.863f, 4756.059f, 36.71f, -70.53f, 75.48f, 132.44f);
	func_376(1829.31f, 4756.158f, 42.4876f, -23.5614f, 0f, -92.2873f, 50f);
	func_375(7.5f, -7.5f, 0f);
	func_374(1689.775f, 4777.77f, 40.9216f, 267.4597f);
	func_373(1856.218f, 4755.223f, 34.67169f, 1841.114f, 4755.489f, 41.43402f, 13.75f);
	func_372("EPS4_PCHAT1", "EPS4_PCHAT2");
	func_371("EPS4_PGOOD", "EPS4_PBAD");
	func_370(sLocal_160, "EPS4_PRET2");
	func_369("EPS4_PCLOSE");
	func_368(0f, 0f, 0f);
	func_367(20.5f, 155f, 0.9f);
	func_366(1820.101f, 4701.099f, 38.545f, 280.7432f, 0);
	func_366(1803.044f, 4700.244f, 39.3123f, 72.1396f, 0);
	func_366(1820.482f, 4672.535f, 35.6368f, 253.4126f, 0);
	func_366(1819.87f, 4694.03f, 38.408f, 231.2265f, 0);
	func_366(1807.122f, 4684.418f, 38.5566f, 150.6129f, 0);
	func_366(1791.058f, 4689.403f, 40.5128f, 103.4073f, 0);
	func_366(1872.626f, 4718.827f, 37.2889f, 210.8288f, 1);
	uLocal_759 = func_366(1764.089f, 4665.879f, 42.3031f, 281.6336f, 2);
	uLocal_761 = func_366(1814.27f, 4651.32f, 37.58f, 173.1089f, 0);
	iLocal_760 = func_366(1846.512f, 4705.614f, 38.1214f, 25.7591f, 3);
	uLocal_762 = func_366(1790.414f, 4722.897f, 37.8533f, 221.4777f, 0);
	GlobalFunc_500(&uLocal_641);
	GlobalFunc_499(&uLocal_641, 1897.42f, 4596.51f, 36.4f);
	GlobalFunc_499(&uLocal_641, 1912.2f, 4676.93f, 39.44f);
	GlobalFunc_499(&uLocal_641, 1886.09f, 4733.68f, 39.48f);
	GlobalFunc_499(&uLocal_641, 1800.24f, 4820.64f, 40.96f);
	GlobalFunc_499(&uLocal_641, 1796.556f, 4893.541f, 40.4741f);
	GlobalFunc_499(&uLocal_641, 1782.651f, 4916.333f, 41.4418f);
	GlobalFunc_499(&uLocal_641, 1746.552f, 4942.362f, 42.8677f);
	GlobalFunc_499(&uLocal_641, 1702.537f, 4893.824f, 36.7751f);
	GlobalFunc_499(&uLocal_641, 1707.273f, 4814.81f, 40.9407f);
	GlobalFunc_499(&uLocal_641, 1729.46f, 4655.21f, 42.61f);
	GlobalFunc_499(&uLocal_641, 1772.05f, 4602.143f, 36.457f);
	GlobalFunc_498(&uLocal_641);
	GlobalFunc_5902(&uLocal_693, &uLocal_641, 20f);
}





int func_366(struct<3> Param0, float fParam3, int iParam4)//Position - 0x2DED9
{
	int iVar0;
	
	if (iLocal_604 >= 11)
	{
	}
	iVar0 = iLocal_604;
	iLocal_604++;
	Local_537[iVar0 /*6*/] = { Param0 };
	Local_537[iVar0 /*6*/].f_3 = fParam3;
	Local_537[iVar0 /*6*/].f_4 = iParam4;
	Local_537[iVar0 /*6*/].f_5 = 0;
	return iVar0;
}

void func_367(float fParam0, float fParam1, float fParam2)//Position - 0x2DF25
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_21 = fParam0;
	Local_362[iVar0 /*43*/].f_23 = fParam1;
	Local_362[iVar0 /*43*/].f_22 = fParam2;
}

void func_368(float fParam0, float fParam1, float fParam2)//Position - 0x2DF5B
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_18 = fParam0;
	Local_362[iVar0 /*43*/].f_19 = fParam1;
	Local_362[iVar0 /*43*/].f_20 = fParam2;
}

void func_369(char* sParam0)//Position - 0x2DF91
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_42 = sParam0;
}

void func_370(char* sParam0, char* sParam1)//Position - 0x2DFB1
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_38 = sParam0;
	Local_362[iVar0 /*43*/].f_39 = sParam1;
}

void func_371(char* sParam0, char* sParam1)//Position - 0x2DFDC
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_40 = sParam0;
	Local_362[iVar0 /*43*/].f_41 = sParam1;
}

void func_372(char* sParam0, char* sParam1)//Position - 0x2E007
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_36 = sParam0;
	Local_362[iVar0 /*43*/].f_37 = sParam1;
}

void func_373(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2E032
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_25 = { Param0 };
	Local_362[iVar0 /*43*/].f_25 = { Param3 };
	Local_362[iVar0 /*43*/].f_31 = fParam6;
}

void func_374(struct<3> Param0, float fParam3)//Position - 0x2E070
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_32 = { Param0 };
	Local_362[iVar0 /*43*/].f_35 = fParam3;
}

void func_375(struct<3> Param0)//Position - 0x2E09F
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_15 = { Param0 };
}

void func_376(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2E0C3
{
	int iVar0;
	
	iVar0 = (iLocal_535 - 1);
	if (iVar0 < 0)
	{
	}
	Local_362[iVar0 /*43*/].f_8 = { Param0 };
	Local_362[iVar0 /*43*/].f_11 = { Param3 };
	Local_362[iVar0 /*43*/].f_14 = fParam6;
}

void func_377(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x2E101
{
	int iVar0;
	
	if (iLocal_535 >= 4)
	{
	}
	iVar0 = iLocal_535;
	iLocal_535++;
	Local_362[iVar0 /*43*/] = iParam0;
	Local_362[iVar0 /*43*/].f_2 = { Param1 };
	Local_362[iVar0 /*43*/].f_5 = { Param4 };
	Local_362[iVar0 /*43*/].f_23 = 150f;
	Local_362[iVar0 /*43*/].f_24 = -1f;
	Local_362[iVar0 /*43*/].f_36 = sLocal_160;
	Local_362[iVar0 /*43*/].f_37 = sLocal_160;
	Local_362[iVar0 /*43*/].f_38 = sLocal_160;
	Local_362[iVar0 /*43*/].f_39 = sLocal_160;
	Local_362[iVar0 /*43*/].f_40 = sLocal_160;
	Local_362[iVar0 /*43*/].f_41 = sLocal_160;
}







int func_384(var uParam0)//Position - 0x2E29D
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	var uVar5;
	
	iVar0[0] = uLocal_79;
	iVar0[1] = uLocal_80;
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				uVar5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iVar5);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, 1);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_digiscanner"), -1, 1, 1);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, 0, 0, 0, 0);
					GlobalFunc_5705(uParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}










void func_394()//Position - 0x2E703
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		GlobalFunc_2838("...Random Character Script was triggered so additional cleanup required");
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iLocal_158);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GRAPHICS::_0x61F95E5BB3E0A8C6(uLocal_359);
	if (GlobalFunc_115(Local_605[0 /*8*/]) && GlobalFunc_115(Local_605[1 /*8*/]))
	{
		if (PED::IS_PED_IN_GROUP(Local_605[0 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_605[0 /*8*/]);
		}
		else if (PED::IS_PED_IN_GROUP(Local_605[1 /*8*/]))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_605[1 /*8*/]);
		}
	}
	GlobalFunc_132(&(Local_605[0 /*8*/]), 1, 1, 1);
	GlobalFunc_132(&(Local_605[1 /*8*/]), 1, 1, 1);
	HUD::RELEASE_NAMED_RENDERTARGET("digiscanner");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_161, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_162, 0);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_763);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_764);
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_765);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_04_MIX"))
	{
		GlobalFunc_2838("Stopping dynamic mix EPSILONISM_04_MIX");
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_04_MIX");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}
























