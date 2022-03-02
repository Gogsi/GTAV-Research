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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1000;
	var uLocal_45 = 1000;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	struct<61> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
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
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	var uLocal_364 = 0;
	bool bLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	struct<3> Local_389 = { 0, 0, 0 } ;
	struct<3> Local_392 = { 0, 0, 0 } ;
	struct<3> Local_395 = { 0, 0, 0 } ;
	struct<3> Local_398 = { 0, 0, 0 } ;
	struct<13> Local_401[4];
	struct<9> Local_454 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	struct<9> Local_467 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	struct<13> Local_480[3];
	struct<13> Local_520[3];
	struct<13> Local_560[6];
	struct<13> Local_639[2];
	int iLocal_666[3] = { 0, 0, 0 };
	int iLocal_670[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_677[2] = { 0, 0 };
	int iLocal_680[3] = { 0, 0, 0 };
	int iLocal_684[4] = { 0, 0, 0, 0 };
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	var uLocal_691 = 0;
	int iLocal_692 = 0;
	struct<6> Local_693[9];
	struct<6> Local_748 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_754[2];
	struct<6> Local_767 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	int iLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	struct<4> Local_781 = { 0, 0, 0, 0 } ;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	struct<6> Local_787[6];
	struct<6> Local_824 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_830 = 15;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 15;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 15;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	uLocal_91 = GlobalFunc_4946(64);
	uLocal_92 = GlobalFunc_4946(63);
	iLocal_93 = joaat("u_m_m_aldinapoli");
	iLocal_94 = joaat("premier");
	iLocal_168 = 1;
	iLocal_367 = 1;
	bLocal_368 = true;
	Local_389 = { -1304.754f, -38.3551f, 47.0814f };
	Local_392 = { -1340.555f, 17.6527f, 51.7458f };
	Local_395 = { -1388.436f, 138.2263f, 55.0734f };
	iLocal_779 = -1;
	iLocal_780 = joaat("u_m_m_markfost");
	Local_107 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_107);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_502(1);
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_90 = 0;
		while (!func_495(&Local_107, &uLocal_830))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_107, 0, 1);
		Global_68490 = 0;
		GlobalFunc_2838("Set up script for replay");
	}
	Local_454 = Local_107.f_28[0];
	Local_467 = Local_107.f_28[1];
	Local_480[0 /*13*/] = Local_107.f_28[2];
	Local_480[1 /*13*/] = Local_107.f_28[3];
	Local_480[2 /*13*/] = Local_107.f_28[4];
	Local_781.f_1 = Local_107.f_41[0];
	Local_824 = Local_107.f_41[1];
	iLocal_776 = Local_107.f_41[2];
	Local_748 = Local_107.f_35[0];
	Local_693[4 /*6*/] = Local_107.f_35[1];
	Local_693[5 /*6*/] = Local_107.f_35[2];
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_748);
	iLocal_353 = 1;
	iLocal_344 = 1;
	iLocal_371 = MISC::GET_GAME_TIMER();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 4);
	func_482();
	iVar0 = 0;
	while (iVar0 <= (Local_480 - 1))
	{
		if (GlobalFunc_115(Local_480[iVar0 /*13*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_480[iVar0 /*13*/], iLocal_773);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_480[iVar0 /*13*/], 0, iLocal_773);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_773, 1862763509);
		}
		iVar0++;
	}
	if (MISC::IS_NEXT_WEATHER_TYPE("THUNDER") || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 25f);
	}
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		if (GlobalFunc_2(0) && !GlobalFunc_199())
		{
			iVar1 = 0;
			GlobalFunc_4965(PLAYER::PLAYER_PED_ID(), -1291.596f, -12.9214f, 48.5137f, 294.7073f, 0, 1);
		}
		else
		{
			iVar1 = GlobalFunc_198();
		}
		GlobalFunc_2837("Replay stage grabbed: ", iVar1);
		if (Global_84544 == 1)
		{
			iVar1++;
		}
		switch (iVar1)
		{
			case 0:
				GlobalFunc_2837("Replay skipping to stage ", 1);
				GlobalFunc_4972(-1291.596f, -12.9214f, 48.5137f, 294.7073f, 1, 0);
				func_468(1, 0);
				break;
			
			case 1:
				GlobalFunc_2837("Replay skipping to stage ", 3);
				GlobalFunc_4972(-1190.22f, 36.83f, 52.03f, 299f, 1, 0);
				func_468(3, 0);
				break;
			
			case 2:
				GlobalFunc_2837("Replay skipping to stage ", 7);
				GlobalFunc_4972(-1324.854f, 60.2491f, 52.54f, 94.6913f, 1, 0);
				func_468(7, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSM", 0);
		SYSTEM::WAIT(0);
		func_452(Local_107.f_9, 0, 0, 0, 0, 0);
		if (GlobalFunc_115(Local_454))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_371) > 2000)
			{
				if (!iLocal_370)
				{
					GlobalFunc_593(Local_454, 0);
					GlobalFunc_2838("Added Mark to headshot watch");
					iLocal_370 = 1;
				}
			}
		}
		if (iLocal_168 == 8)
		{
			func_444();
		}
		else
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				switch (iLocal_168)
				{
					case 0:
						func_442();
						break;
					
					case 1:
						func_436();
						break;
					
					case 2:
						func_374();
						break;
					
					case 3:
						func_364();
						break;
					
					case 4:
						func_349();
						break;
					
					case 5:
						func_321();
						break;
					
					case 6:
						func_313();
						break;
					
					case 9:
						func_311();
						break;
					
					case 10:
						func_288();
						break;
					
					case 7:
						func_35();
						break;
				}
			}
			else
			{
				func_33(0);
			}
			if (iLocal_172 == 0)
			{
				func_1(iLocal_171);
			}
		}
	}
}

void func_1(int iParam0)//Position - 0x467
{
	if (iLocal_168 == iParam0)
	{
		iLocal_172 = 1;
		if (iLocal_168 == 3)
		{
			GlobalFunc_164("N1D_TAKE", 7500, 5);
		}
		if (GlobalFunc_188())
		{
			if (GlobalFunc_198() == 1)
			{
				GlobalFunc_4967(Local_767, -1, 1);
			}
			else
			{
				GlobalFunc_4967(0, -1, 1);
			}
		}
		func_17(1, 1, 1);
	}
	else
	{
		GlobalFunc_2838("Still skipping...");
		func_2();
	}
}

void func_2()//Position - 0x4C1
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		GlobalFunc_4935();
	}
	switch (iLocal_168)
	{
		case 0:
			GlobalFunc_2838("In INTRO_PHONECALL stage skip");
			if (iLocal_170 == 1)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
					GlobalFunc_5744();
				}
				iLocal_358 = 1;
				iLocal_170 = 2;
			}
			break;
		
		case 1:
			GlobalFunc_2838("In GO_TO_THE_GOLF_CLUB stage skip");
			if ((func_9(1) && func_8(1)) && func_7(1))
			{
				if (!GlobalFunc_188())
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1291.596f, -12.9214f, 48.5137f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 303.114f);
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("Skipping MS_GO_TO_CELBRITY...");
			iLocal_349 = 0;
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			if (!GlobalFunc_188())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1190.22f, 36.83f, 52.03f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299f);
				}
			}
			break;
		
		case 3:
			GlobalFunc_2838("In GO_TO_CELBRITY stage skip");
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			if (!GlobalFunc_188())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1102.455f, 73.615f, 53.2039f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 238f);
				}
				if (GlobalFunc_4924(Local_454))
				{
					if (GlobalFunc_4947(Local_748))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_454, Local_748, -1);
						}
					}
				}
			}
			break;
		
		case 4:
			GlobalFunc_2838("Skipping MS_CHASE_THE_GOLFER...");
			if (GlobalFunc_4947(Local_748))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Local_748);
				}
				ENTITY::SET_ENTITY_COORDS(Local_748, -1246.956f, -89.9753f, 42.904f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_748, 238f);
				if (GlobalFunc_4924(Local_454))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_454, Local_748, -1);
					}
				}
			}
			if (!GlobalFunc_188())
			{
				if (GlobalFunc_4947(Local_693[4 /*6*/]))
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_693[4 /*6*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_693[4 /*6*/], -1);
						}
					}
					ENTITY::SET_ENTITY_COORDS(Local_693[4 /*6*/], -1273.736f, -75.3014f, 44.6289f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_693[4 /*6*/], 242f);
				}
				else
				{
					GlobalFunc_2838("Skip buggy isn't okay, probably going to fail");
				}
			}
			iLocal_361 = 0;
			iLocal_170 = 2;
			break;
		
		case 5:
			GlobalFunc_2838("Skipping MS_CHASE_IN_CITY...");
			if (GlobalFunc_4947(Local_748))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_748, 450);
				GlobalFunc_2838("SKIPPED CITY CHASE SETTING HEALTH TO 450 ");
			}
			if (GlobalFunc_115(iLocal_776))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
				{
					ENTITY::DETACH_ENTITY(iLocal_776, 1, 1);
				}
			}
			GlobalFunc_881(&Local_454);
			iLocal_353 = 0;
			iLocal_361 = 0;
			GlobalFunc_6692(&Local_748);
			SYSTEM::WAIT(2000);
			iLocal_170 = 2;
			break;
		
		case 6:
			GlobalFunc_2838("Skipping MS_COLLECT_GOLF_CLUB...");
			if (!GlobalFunc_188())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_776, 1) + Vector(0f, 1.5f, 0f), 1, 0, 0, 1);
				}
			}
			iLocal_361 = 1;
			iLocal_170 = 2;
			break;
		
		case 7:
			if (iLocal_170 == 1)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
					GlobalFunc_5744();
				}
				iLocal_358 = 1;
				iLocal_170 = 2;
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (GlobalFunc_115(Local_480[iVar0 /*13*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_480[iVar0 /*13*/], 0);
				}
				iVar0++;
			}
			break;
		
		case 10:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			break;
	}
}





int func_7(int iParam0)//Position - 0x9A2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_520[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_520[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_520[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

int func_8(int iParam0)//Position - 0xA34
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::REQUEST_MODEL(Local_480[iVar0 /*13*/].f_8);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_480[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_480[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

int func_9(int iParam0)//Position - 0xAC6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::REQUEST_MODEL(Local_401[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		STREAMING::REQUEST_MODEL(Local_693[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_401[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_693[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
		{
			return 0;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_401[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_693[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
			{
				iVar1 = 0;
			}
		}
	}
	return 1;
}








void func_17(int iParam0, int iParam1, int iParam2)//Position - 0xD41
{
	func_19(0, 0, iParam2, 1);
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


void func_19(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDB1
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
		if ((iLocal_47 != 0 && iLocal_47 != joaat("object")) && iLocal_47 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}














void func_33(int iParam0)//Position - 0x11A8
{
	iLocal_376 = iParam0;
	func_34(8);
}

void func_34(int iParam0)//Position - 0x11BB
{
	iLocal_168 = iParam0;
	iLocal_170 = 0;
}

void func_35()//Position - 0x11CA
{
	int iVar0;
	
	switch (iLocal_170)
	{
		case 0:
			GlobalFunc_2838("ENTERING END PHONECALL");
			iLocal_372 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					func_287(Local_480[iVar0 /*13*/], 0);
					GlobalFunc_146(&(Local_480[iVar0 /*13*/].f_11));
					iVar0++;
				}
				GlobalFunc_146(&iLocal_338);
				GlobalFunc_200(&uLocal_173, 2);
				GlobalFunc_200(&uLocal_173, 3);
				GlobalFunc_200(&uLocal_173, 4);
				GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uLocal_173, 3, 0, "NIGEL", 0, 1);
				GlobalFunc_173(&uLocal_173, 4, 0, "MRSTHORNHILL", 0, 1);
				iLocal_170 = 1;
				GlobalFunc_2838("ENTERING END PHONECALL LOOP");
			}
			break;
		
		case 1:
			func_245();
			if (!GlobalFunc_111())
			{
				if (!iLocal_358)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_372) > 3000)
					{
						if (GlobalFunc_10638(&uLocal_173, 64, "NIG1DAU", "NIG1D_OUTRO", 9, 1, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 10f, 1);
							iLocal_358 = 1;
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (GlobalFunc_1993())
					{
						iLocal_170 = 2;
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("CLEANUP END PHONECALL");
			HUD::CLEAR_PRINTS();
			func_36();
			break;
	}
}

void func_36()//Position - 0x12FB
{
	func_233(1);
	if (iLocal_369 == 1)
	{
		GlobalFunc_11088(GlobalFunc_4917(2), 12, 4, 1, 1);
	}
	func_37(99, 1);
	func_502(1);
}

void func_37(int iParam0, bool bParam1)//Position - 0x132A
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_62();
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

























void func_62()//Position - 0x2676
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
				if (GlobalFunc_10911(iVar1, 14, iVar2))
				{
					func_63(iVar1, 14, iVar2);
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

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x2737
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
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10911(iParam0, iParam1, iParam2))
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
				func_63(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_63(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11033(iParam0, iVar0, &iVar46, 0))
	{
		func_66(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11031(iParam0, iVar0, &iVar46))
	{
		func_66(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x29B7
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
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
				iVar5 = GlobalFunc_6694(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6694(iParam0, 9);
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
			iVar7 = GlobalFunc_7634(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7634(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7634(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11220(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_66(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11220(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_66(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11032(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11033(iParam0, iVar10, &iVar4, 1))
							{
								func_66(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_66(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_66(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_66(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_66(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_66(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_66(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11220(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_66(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11220(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_66(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11220(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_66(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11033(iParam0, iVar10, &iVar4, 0))
		{
			func_66(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11031(iParam0, iVar10, &iVar4))
		{
			func_66(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}







































































































































































void func_233(int iParam0)//Position - 0x261A5
{
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
}












void func_245()//Position - 0x26801
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_115(Local_454))
	{
		switch (iLocal_169)
		{
			case 0:
				func_282();
				if (func_263(Local_454, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
						if (GlobalFunc_4947(Local_748))
						{
							if (GlobalFunc_4924(Local_454))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
								{
									TASK::TASK_ENTER_VEHICLE(Local_454, Local_748, -1, -1, 1073741824, 1, 0);
								}
							}
						}
						GlobalFunc_2838("GS_WAIT_FOR_PLAYER, player threatened Glen; attacking...");
						GlobalFunc_173(&uLocal_173, 7, Local_480[0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (func_261())
						{
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
						}
						else
						{
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0);
						}
						func_255();
						iLocal_169 = 3;
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 11f, 11f, 11f, 0, 1, 0))
				{
					if (!GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 12, 4))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
						GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_1", 7, 0, 0);
						if (GlobalFunc_4947(Local_748))
						{
							if (GlobalFunc_4924(Local_454))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
								{
									TASK::TASK_ENTER_VEHICLE(Local_454, Local_748, -1, -1, 1073741824, 1, 0);
								}
							}
						}
						GlobalFunc_2838("GS_WAIT_FOR_PLAYER, player got too close to Glen (alert_dis); attacking...");
						func_255();
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
						iLocal_169 = 3;
					}
					else
					{
						iLocal_387 = MISC::GET_GAME_TIMER();
						iLocal_380 = MISC::GET_GAME_TIMER();
						iLocal_169 = 1;
					}
				}
				break;
			
			case 1:
				if (func_263(Local_454, 1, 1116471296, 1126825984, 0, 0, 0, 0) || iLocal_349 == 1)
				{
					GlobalFunc_2838("GS_PLAYER_IN_OUTFIT, player threatened Glen or returned a second time; attacking...");
					func_255();
				}
				else
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 11f, 11f, 11f, 0, 1, 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
						TASK::TASK_ACHIEVE_HEADING(0, 112f, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(uLocal_775, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
						TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
						if (GlobalFunc_115(Local_467))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_467);
						}
						iLocal_349 = 1;
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							iLocal_666[iVar0] = 0;
							iVar0++;
						}
						iLocal_169 = 0;
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_380) >= 2500)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_454, PLAYER::PLAYER_PED_ID()))
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
								GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0))
								{
									iLocal_380 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if ((GlobalFunc_4947(Local_748) && GlobalFunc_4947(Local_693[5 /*6*/])) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_693[5 /*6*/], 0))
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
							}
							iLocal_386 = MISC::GET_GAME_TIMER();
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_1", 7, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
							TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
							TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
							iLocal_169 = 2;
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_387) >= 15000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 11f, 11f, 11f, 0, 1, 0))
						{
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_BANK", "NIG1D_BANK_2", 7, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
							TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
							if (GlobalFunc_115(Local_781.f_1))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
							}
							iLocal_386 = MISC::GET_GAME_TIMER();
							iLocal_666[0] = 1;
							iLocal_169 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (func_263(Local_454, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					GlobalFunc_2838("GS_ANGRY_AT_PLAYER, player threatened Glen; attacking...");
					func_255();
				}
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 11f, 11f, 11f, 0, 1, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, -1094.57f, 60.98f, 52.67f, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_idle_high_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_swing_intro_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "iron_swing_action_high", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "swing_outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "mini@golf", "swing_react_bad_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_775, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
					TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
					if (GlobalFunc_115(Local_467))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_467);
					}
					iLocal_349 = 1;
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						iLocal_666[iVar1] = 0;
						iVar1++;
					}
					iLocal_169 = 0;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_380) >= 2500)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_454, PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_BUMPF", 7, 0, 0, 0))
							{
								iLocal_380 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				break;
			
			case 3:
				if (((GlobalFunc_4947(Local_748) && GlobalFunc_156(Local_454, Local_748, 1) < 10f) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 0)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_748))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_454, Local_748))
					{
						GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
						GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_3", 7, 0, 0);
						if (GlobalFunc_4924(Local_454))
						{
							if (!func_251())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_454, Local_748, "NIGEL1DGOLF", 786468, 0, 12, -1, -1082130432, 0, 1073741824);
							}
							else
							{
								iLocal_362 = 1;
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_454, Local_748, "NIGEL1DGOLF2", 786468, 0, 12, -1, -1082130432, 0, 1073741824);
							}
						}
						iLocal_169 = 4;
					}
				}
				else
				{
					func_287(Local_454, 1);
					iLocal_169 = 8;
				}
				func_250();
				break;
			
			case 4:
				func_248();
				func_247();
				if (GlobalFunc_4947(Local_748))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						if (iLocal_168 != 4)
						{
							if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_748) >= 200)
							{
								func_287(Local_454, 0);
								iLocal_169 = 6;
							}
							if (func_246())
							{
								iLocal_169 = 7;
							}
						}
					}
					else
					{
						iLocal_169 = 7;
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 1))
					{
						iLocal_169 = 7;
					}
				}
				break;
			
			case 5:
				if (GlobalFunc_4947(Local_748))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						iLocal_169 = 7;
					}
				}
				break;
			
			case 6:
				func_248();
				func_247();
				if (GlobalFunc_4947(Local_748))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 1))
					{
						iLocal_169 = 7;
					}
				}
				break;
			
			case 7:
				GlobalFunc_2838("Celeb crashed or forced out - quitting chase");
				if (iLocal_168 < 6)
				{
					GlobalFunc_164("N1D_COLLECT", 7500, 5);
					func_34(6);
				}
				if (GlobalFunc_4947(Local_748))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
					{
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
					}
				}
				func_287(Local_454, 1);
				iLocal_169 = 8;
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (!iLocal_373)
		{
			GlobalFunc_2838("bReplayCelebDeadCheck tripped, recording last 2 seconds");
			RECORDING::_0x293220DA1B46CEBC(2f, 2f, 0);
			iLocal_373 = 1;
		}
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 4))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 4);
		}
	}
}

int func_246()//Position - 0x2717F
{
	if (ENTITY::GET_ENTITY_SPEED(Local_748) < 0.15f && PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
	{
		iLocal_377++;
		if (iLocal_377 > 30)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Local_748);
			if (GlobalFunc_4947(Local_748) && GlobalFunc_115(Local_454))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_748, 2f, 3, 0);
				if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_454);
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
					GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_GIVEUP", "NIG1D_GIVEUP_1", 7, 0, 0);
					GlobalFunc_2838("Celeb vehicle stuck");
				}
			}
			return 1;
		}
	}
	else
	{
		iLocal_377 = 0;
	}
	return 0;
}

void func_247()//Position - 0x27238
{
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_454, 1), 20f, 1))
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!GlobalFunc_111())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_384) >= 3000)
				{
					switch (iLocal_378)
					{
						case 0:
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_7", 7, 0, 0);
							break;
						
						case 1:
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_8", 7, 0, 0);
							break;
						
						case 2:
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_9", 7, 0, 0);
							break;
						
						case 3:
							GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_10", 7, 0, 0);
							break;
					}
					iLocal_378++;
					iLocal_383 = MISC::GET_GAME_TIMER();
					iLocal_384 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_248()//Position - 0x2734D
{
	if (iLocal_168 == 4 || iLocal_168 == 5)
	{
		if (iLocal_379 < 5)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (!GlobalFunc_111())
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_385) > 15000)
					{
						if (GlobalFunc_4924(Local_454))
						{
							if (GlobalFunc_4951(Local_454, PLAYER::PLAYER_PED_ID()) < 40f)
							{
								GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
								GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								switch (iLocal_379)
								{
									case 0:
										if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_CHASE1", 8, 0, 0, 0))
										{
											GlobalFunc_2838("Chase conv 1 started...");
											iLocal_385 = MISC::GET_GAME_TIMER();
											iLocal_379++;
										}
										break;
									
									case 1:
										if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_CHASE2", 8, 0, 0, 0))
										{
											GlobalFunc_2838("Chase conv 2 started...");
											iLocal_385 = MISC::GET_GAME_TIMER();
											iLocal_379++;
										}
										break;
									
									case 2:
										if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_CHASE3", 8, 0, 0, 0))
										{
											GlobalFunc_2838("Chase conv 3 started...");
											iLocal_385 = MISC::GET_GAME_TIMER();
											iLocal_379++;
										}
										break;
									
									case 3:
										if (iLocal_168 == 5)
										{
											if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_CHASE4", 8, 0, 0, 0))
											{
												GlobalFunc_2838("Chase conv 4 started...");
												iLocal_385 = MISC::GET_GAME_TIMER();
												iLocal_379++;
											}
										}
										break;
									
									case 4:
										if (iLocal_168 == 5)
										{
											if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_CHASE5", 8, 0, 0, 0))
											{
												GlobalFunc_2838("Chase conv 5 started...");
												iLocal_385 = MISC::GET_GAME_TIMER();
												iLocal_379++;
											}
										}
										break;
									}
								}
							}
						}
					}
				}
			}
	}
}


void func_250()//Position - 0x274FD
{
	int iVar0;
	
	GlobalFunc_2838("RESET COURSE SECURITY");
	iLocal_352 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (GlobalFunc_115(Local_520[iVar0 /*13*/]))
		{
			iLocal_680[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_251()//Position - 0x27539
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_496(&uLocal_934, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
		{
			return 1;
		}
	}
	return 0;
}




void func_255()//Position - 0x276CA
{
	int iVar0;
	
	if (iLocal_356 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (GlobalFunc_115(Local_480[iVar0 /*13*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_480[iVar0 /*13*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
				TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 600));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(Local_480[iVar0 /*13*/], uLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_480[iVar0 /*13*/], 25, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_480[iVar0 /*13*/], 1);
				PED::SET_PED_KEEP_TASK(Local_480[iVar0 /*13*/], 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_480[iVar0 /*13*/], 1);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_773, 1862763509);
				iLocal_666[iVar0] = 4;
				if (!HUD::DOES_BLIP_EXIST(Local_480[iVar0 /*13*/].f_11))
				{
					Local_480[iVar0 /*13*/].f_11 = GlobalFunc_4955(Local_480[iVar0 /*13*/], 0, 0, 5);
				}
				GlobalFunc_2837("Attack player, security guard: ", iVar0);
			}
			iVar0++;
		}
		if (GlobalFunc_4947(Local_748))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 0))
			{
				if (GlobalFunc_4924(Local_454))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
						TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
						TASK::TASK_ENTER_VEHICLE(0, Local_748, -1, -1, 1073741824, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
						GlobalFunc_2838("Making Glen get into vehicle through MAKE_SECURITY_ATTACK()");
						iLocal_169 = 3;
					}
				}
			}
			else
			{
				func_287(Local_454, 1);
				iLocal_169 = 8;
			}
		}
		else
		{
			func_287(Local_454, 1);
		}
		if (GlobalFunc_115(Local_467))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_467, 1);
		}
		func_287(Local_467, 1);
		func_257();
		if (iLocal_168 <= 3 && GlobalFunc_115(Local_454))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
			if (GlobalFunc_115(Local_467))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_824, Local_467, PED::GET_PED_BONE_INDEX(Local_467, 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_ATTACHED(Local_781.f_1))
		{
			ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
		}
		GlobalFunc_574(790, 0);
		iLocal_356 = 1;
	}
}


void func_257()//Position - 0x27969
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GlobalFunc_115(Local_560[iVar0 /*13*/]))
		{
			func_258(iVar0);
			iLocal_670[iVar0] = 3;
		}
		iVar0++;
	}
}

void func_258(int iParam0)//Position - 0x2799F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_787[iParam0 /*6*/]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_787[iParam0 /*6*/]))
		{
			ENTITY::DETACH_ENTITY(Local_787[iParam0 /*6*/], 1, 1);
		}
	}
	func_287(Local_560[iParam0 /*13*/], 1);
}



int func_261()//Position - 0x27A82
{
	if ((GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_sniperrifle") || GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_heavysniper")) || GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_remotesniper"))
	{
		return 1;
	}
	return 0;
}


int func_263(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x27ADC
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
		else if (func_264(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0, float fParam1)//Position - 0x27B97
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
				if (func_265(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_265(int iParam0, float fParam1)//Position - 0x27C0D
{
	return func_266(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_266(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x27C25
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_274(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_269();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6422(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}



int func_269()//Position - 0x27ED7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_274(int iParam0, int iParam1)//Position - 0x2802E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}








void func_282()//Position - 0x2844E
{
	switch (iLocal_692)
	{
		case 0:
			if (GlobalFunc_4924(Local_454) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (((GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_454, 35f) && iLocal_666[0] != 5) && iLocal_666[1] != 5) && iLocal_666[2] != 5)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
						if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_SWING", 8, 0, 0, 0))
						{
							iLocal_692 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_380 = MISC::GET_GAME_TIMER();
				iLocal_692 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_380) > 4500)
			{
				iLocal_692 = 0;
			}
			break;
	}
}





void func_287(int iParam0, int iParam1)//Position - 0x28619
{
	if (GlobalFunc_4924(iParam0))
	{
		if (iParam1 == 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 31, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, 0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 31, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 65536, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_775);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
		}
	}
}

void func_288()//Position - 0x28759
{
	int iVar0;
	
	switch (iLocal_170)
	{
		case 0:
			if (iLocal_360 == 0)
			{
				GlobalFunc_164("N1D_WANTED", 7500, 5);
				iLocal_360 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_287(Local_480[iVar0 /*13*/], 0);
				GlobalFunc_146(&(Local_480[iVar0 /*13*/].f_11));
				iVar0++;
			}
			GlobalFunc_2838("ENTERING LOSE THE COPS");
			iLocal_170 = 1;
			break;
		
		case 1:
			func_245();
			func_299();
			func_292();
			func_289();
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_170 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_358 = 0;
			func_34(7);
			break;
	}
}

void func_289()//Position - 0x287FD
{
	if (iLocal_367)
	{
		if (!GlobalFunc_115(Local_454) && func_291())
		{
			GlobalFunc_2838("Player achieved FOUR!");
			iLocal_367 = 0;
			GlobalFunc_553(792);
		}
	}
}


int func_291()//Position - 0x288A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_480[iVar0 /*13*/].f_9 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_292()//Position - 0x288CF
{
	int iVar0;
	
	if (iLocal_347 == 0)
	{
		if (func_298(0))
		{
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_297(&(Local_639[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_639[iVar0 /*13*/], 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_639[iVar0 /*13*/], 0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_296(&(Local_754[iVar0 /*6*/]), 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_754[iVar0 /*6*/].f_5, 1);
				iVar0++;
			}
			iLocal_347 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (GlobalFunc_115(Local_639[iVar0 /*13*/]))
			{
				func_293(iVar0);
			}
			iVar0++;
		}
	}
}

void func_293(int iParam0)//Position - 0x28975
{
	switch (iLocal_677[iParam0])
	{
		case 0:
			if (GlobalFunc_4947(Local_748))
			{
				if (GlobalFunc_115(Local_454))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(Local_454, Local_639[iParam0 /*13*/], 62f, 62f, 62f, 0, 1, 0))
						{
							if (GlobalFunc_4924(Local_639[iParam0 /*13*/]))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_639[iParam0 /*13*/], Local_454, -1);
								iLocal_677[iParam0] = 1;
							}
						}
						else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_639[iParam0 /*13*/], 1), 15f, 1))
						{
							GlobalFunc_173(&uLocal_173, 8, Local_639[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_639[iParam0 /*13*/], 1) < 45f)
							{
								GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
							}
							func_287(Local_639[iParam0 /*13*/], 0);
							iLocal_677[iParam0] = 3;
						}
					}
					else if (func_263(Local_639[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || ENTITY::IS_ENTITY_AT_ENTITY(Local_454, Local_639[iParam0 /*13*/], 30f, 30f, 30f, 0, 1, 0))
					{
						func_287(Local_639[iParam0 /*13*/], 0);
						iLocal_677[iParam0] = 3;
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_454, Local_639[iParam0 /*13*/], 38f, 38f, 38f, 0, 1, 0))
			{
				if (GlobalFunc_4924(Local_639[iParam0 /*13*/]))
				{
					GlobalFunc_173(&uLocal_173, 8, Local_639[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_639[iParam0 /*13*/], 1) < 45f)
					{
						GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_CURSE_HIGH", 34);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_639[iParam0 /*13*/]);
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_639[iParam0 /*13*/], Local_639[iParam0 /*13*/].f_4, 3f, -1, 1193033728, 1056964608);
					PED::SET_PED_KEEP_TASK(Local_639[iParam0 /*13*/], 1);
					iLocal_677[iParam0] = 2;
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_639[iParam0 /*13*/], Local_639[iParam0 /*13*/].f_4, 2f, 2f, 2f, 0, 1, 0))
			{
				func_287(Local_639[iParam0 /*13*/], 0);
				iLocal_677[iParam0] = 3;
			}
			break;
		
		case 3:
			break;
	}
}



void func_296(var uParam0, int iParam1)//Position - 0x28DEA
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_1, uParam0->f_4, 1, 1);
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
}

void func_297(int iParam0, int iParam1)//Position - 0x28E22
{
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_8))
	{
		*iParam0 = PED::CREATE_PED(26, iParam0->f_8, iParam0->f_1, 0f, 1, 1);
		if (GlobalFunc_115(*iParam0))
		{
			ENTITY::SET_ENTITY_HEADING(*iParam0, iParam0->f_7);
		}
		if (iParam1 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_8);
		}
	}
}

int func_298(int iParam0)//Position - 0x28E6E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_639[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_754[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_639[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_754[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_639[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_754[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

void func_299()//Position - 0x28F6C
{
	int iVar0;
	
	if (iLocal_344 == 0)
	{
		if (func_8(0))
		{
			GlobalFunc_2838("Celeb security loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_297(&(Local_480[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_480[iVar0 /*13*/], 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_480[iVar0 /*13*/], joaat("weapon_pistol"), -1, 0, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_480[iVar0 /*13*/], 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_480[iVar0 /*13*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_480[iVar0 /*13*/], iLocal_773);
				PED::SET_PED_DIES_WHEN_INJURED(Local_480[iVar0 /*13*/], 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(Local_480[iVar0 /*13*/].f_8, 1);
				iVar0++;
			}
			iLocal_344 = 1;
		}
	}
	else
	{
		func_300();
	}
}

void func_300()//Position - 0x29014
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (GlobalFunc_115(Local_480[iVar0 /*13*/]))
		{
			if (iLocal_356 == 0 && iLocal_350 == 0)
			{
				if (func_309())
				{
					GlobalFunc_2838("Monitor_Security, player has 'mucked about' with the celeb scene; attacking...");
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), -1098.865f, 69.9792f, 53.6198f, 1) < 45f)
					{
						GlobalFunc_173(&uLocal_173, 7, Local_480[iVar0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
						func_255();
					}
					else
					{
						func_306();
					}
				}
			}
			func_301(iVar0);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_480[iVar0 /*13*/].f_11))
			{
				HUD::REMOVE_BLIP(&(Local_480[iVar0 /*13*/].f_11));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_480[iVar0 /*13*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_480[iVar0 /*13*/]))
				{
					Local_480[iVar0 /*13*/].f_9 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_301(int iParam0)//Position - 0x29101
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_480[iParam0 /*13*/]))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 1) < 20f)
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1000, 0, 2);
			}
		}
	}
	switch (iLocal_666[iParam0])
	{
		case 0:
			if (func_263(Local_480[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::HAS_PED_RECEIVED_EVENT(Local_480[iParam0 /*13*/], 60))
			{
				if (func_265(Local_480[iParam0 /*13*/], 110f))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (func_261())
					{
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
					}
					GlobalFunc_2838("SS_GUARD_AREA, player threatened Celeb security; attacking...");
					func_255();
				}
			}
			else if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if ((ENTITY::IS_ENTITY_ON_SCREEN(Local_480[iParam0 /*13*/]) && func_265(Local_480[iParam0 /*13*/], 1126825984)) && GlobalFunc_156(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1) < 50f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0);
					GlobalFunc_2838("SS_GUARD_AREA, player tried sniping Celeb security but was spotted; attacking...");
					func_255();
				}
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_480[iParam0 /*13*/]))
			{
				if (func_261())
				{
					if (func_265(Local_480[iParam0 /*13*/], 1126825984))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 1, 0))
						{
							GlobalFunc_2838("SS_GUARD_AREA, player aimed Sniper Rifle when security could see them; attacking...");
							func_255();
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 25f, 25f, 25f, 0, 1, 0))
				{
					if (!GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 12, 4))
					{
						if (!func_305())
						{
							if (func_265(Local_480[iParam0 /*13*/], 1126825984) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 18f, 18f, 18f, 0, 1, 0))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_5", 7, 0, 0))
								{
									GlobalFunc_2838("SS_GUARD_AREA, player armed, not wearing outfit, guard has LOS or player within 18m; attacking...");
									func_255();
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 18f, 18f, 18f, 0, 1, 0))
						{
							if (iLocal_348 == 0)
							{
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
								{
									if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
										TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
										TASK::TASK_PERFORM_SEQUENCE(Local_480[iParam0 /*13*/], uLocal_774);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
										iLocal_386 = MISC::GET_GAME_TIMER();
										iLocal_348 = 1;
										iLocal_666[iParam0] = 1;
									}
								}
								else if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_1", 7, 1, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
									TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
									TASK::TASK_PERFORM_SEQUENCE(Local_480[iParam0 /*13*/], uLocal_774);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
									iLocal_386 = MISC::GET_GAME_TIMER();
									iLocal_348 = 1;
									iLocal_666[iParam0] = 1;
								}
							}
							else if (iLocal_350 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 12f, 12f, 12f, 0, 1, 0))
								{
									if (GlobalFunc_111())
									{
										GlobalFunc_4956();
									}
									GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
									if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0))
									{
										GlobalFunc_2838("SS_GUARD_AREA, non-outfit, player came back to area after being warned; attacking");
										func_255();
									}
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 18f, 18f, 18f, 0, 1, 0))
					{
						if (iLocal_348 == 0)
						{
							if (!GlobalFunc_111() && iLocal_358 == 0)
							{
								if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								if (GlobalFunc_4924(Local_467))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_467, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
								if (GlobalFunc_4924(Local_454))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_454, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
									TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "idle_c", 2f, -4f, -1, 1, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
									TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
								}
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
								if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0))
								{
									iLocal_348 = 1;
									iVar0 = 0;
									while (iVar0 <= 2)
									{
										iLocal_666[iVar0] = 5;
										iVar0++;
									}
								}
							}
						}
						else if (iLocal_350 == 1)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 12f, 12f, 12f, 0, 1, 0))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
								{
									GlobalFunc_2838("SS_GUARD_AREA, outfit, player came back to area after being warned; attacking");
									func_255();
								}
							}
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 50f, 50f, 50f, 0, 1, 0))
			{
				if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_748.f_5))
				{
					if (func_265(Local_480[iParam0 /*13*/], 1126825984))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
						{
							GlobalFunc_2838("SS_GUARD_AREA, player 50m away from group in non-buggy vehicle; attacking");
							func_255();
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 25f, 25f, 25f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 15f)
					{
						GlobalFunc_2839("Going too fast, going to trigger aggro: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
						if (PED::HAS_PED_RECEIVED_EVENT(Local_480[iParam0 /*13*/], 60) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 6f, 6f, 6f, 0, 1, 0))
						{
							if (func_265(Local_480[iParam0 /*13*/], 1126825984))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
								{
									GlobalFunc_2838("SS_GUARD_AREA, player went too fast too close to security; attacking");
									func_255();
								}
							}
						}
					}
					else if (func_265(Local_480[iParam0 /*13*/], 1126825984))
					{
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (iLocal_355 == 0)
						{
							if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_7", 7, 0, 0))
							{
								GlobalFunc_2837("'You can't drive through here buddy said by ped id: ", iParam0);
								if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_355 = 1;
								iLocal_386 = MISC::GET_GAME_TIMER();
								iLocal_666[iParam0] = 2;
							}
						}
						else
						{
							if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
							}
							iLocal_355 = 1;
							iLocal_386 = MISC::GET_GAME_TIMER();
							iLocal_666[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!func_305())
			{
				if (func_265(Local_480[iParam0 /*13*/], 1126825984))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 1) < 80f)
					{
						GlobalFunc_2838("SS_GO_TO_PLAYER, player armed, guard has LOS; attacking...");
						func_255();
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 9f, 9f, 9f, 0, 1, 0) && iLocal_350 == 1)
			{
				GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
				if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
				{
					if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_386 = MISC::GET_GAME_TIMER();
					iLocal_666[iParam0] = 3;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_386) >= 8000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_2", 7, 0, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "thanks_male_05", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(Local_480[iParam0 /*13*/], uLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
						iLocal_386 = MISC::GET_GAME_TIMER();
						iLocal_666[iParam0] = 2;
						GlobalFunc_2838("Guard: going into SS_WARN_PLAYER ");
					}
				}
			}
			break;
		
		case 2:
			if (!func_305())
			{
				if (func_265(Local_480[iParam0 /*13*/], 1126825984))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 1) < 80f)
					{
						GlobalFunc_2838("SS_WARN_PLAYER, player armed, guard has LOS; attacking...");
						func_255();
					}
				}
			}
			else if (!GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 12, 4))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 4f, 4f, 4f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 8f, 8f, 8f, 0, 1, 0) && iLocal_350 == 1))
				{
					GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
					{
						if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						iLocal_386 = MISC::GET_GAME_TIMER();
						iLocal_666[iParam0] = 3;
					}
					GlobalFunc_2838("SS_WARN_PLAYER, player got too close, going to aim...");
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 9f, 9f, 9f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 15f)
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								GlobalFunc_2839("SS_WARN_PLAYER, going too fast: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
								GlobalFunc_2838("SS_WARN_PLAYER, player in vehicle going too fast within 9m of guard; attacking...");
								func_255();
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_386) >= 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
						{
							GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
							if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_3", 7, 0, 0))
							{
								if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_386 = MISC::GET_GAME_TIMER();
								iLocal_666[iParam0] = 3;
								GlobalFunc_2838("SS_WARN_PLAYER, player took too long, going to aim...");
							}
						}
						else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 1) > 20f)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_480[iParam0 /*13*/], Local_480[iParam0 /*13*/].f_7, 0);
							TASK::TASK_CLEAR_LOOK_AT(Local_480[iParam0 /*13*/]);
							GlobalFunc_2838("SS_WARN_PLAYER, player >20m away, returning to SS_GUARD_AREA...");
							iLocal_666[iParam0] = 0;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 18f, 18f, 18f, 0, 1, 0))
			{
				if (iLocal_348 == 0)
				{
					if (!GlobalFunc_111() && iLocal_358 == 0)
					{
						if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), -1);
						}
						if (GlobalFunc_4924(Local_454))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_454, PLAYER::PLAYER_PED_ID(), -1);
						}
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
						if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_OUTFIT", 7, 0, 0, 0))
						{
							iLocal_348 = 1;
							iVar1 = 0;
							while (iVar1 <= 2)
							{
								iLocal_666[iVar1] = 5;
								iVar1++;
							}
						}
					}
				}
				else if (iLocal_350 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 12f, 12f, 12f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						if (GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 1, 0))
						{
							GlobalFunc_2838("SS_WARN_PLAYER, outfit worn, player came back to area after being warned; attacking");
							func_255();
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_305())
			{
				if (func_265(Local_480[iParam0 /*13*/], 1126825984))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 1) < 80f)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_2838("SS_AIM_AT_PLAYER, player armed, guard has LOS; attacking...");
						if (iLocal_356 == 0)
						{
							func_255();
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_480[iParam0 /*13*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(5, 200));
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
							TASK::TASK_PERFORM_SEQUENCE(Local_480[iParam0 /*13*/], uLocal_774);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_480[iParam0 /*13*/], 25, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_480[iParam0 /*13*/], 1);
							PED::SET_PED_KEEP_TASK(Local_480[iParam0 /*13*/], 1);
							TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_480[iParam0 /*13*/], 1);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_773, 1862763509);
							iLocal_666[iParam0] = 4;
							if (!HUD::DOES_BLIP_EXIST(Local_480[iParam0 /*13*/].f_11))
							{
								Local_480[iParam0 /*13*/].f_11 = GlobalFunc_4955(Local_480[iParam0 /*13*/], 0, 0, 5);
							}
							GlobalFunc_2837("Attack player, FORCE security guard: ", iParam0);
						}
					}
				}
			}
			else
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_480[iParam0 /*13*/], 1), 20f, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
					GlobalFunc_2838("SS_AIM_AT_PLAYER, bullet detected within 20m of a ped, attacking...");
					func_255();
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 7f, 7f, 5f, 0, 1, 0) || (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -1097.28f, 68.05f, 52.99f, 10f) && iLocal_350 == 1))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
					GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
					GlobalFunc_2838("SS_AIM_AT_PLAYER, player got too close, attacking...");
					func_255();
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 15f)
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								GlobalFunc_2839("SS_AIM_AT_PLAYER, going too fast: ", ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
								GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
								GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
								GlobalFunc_2838("SS_AIM_AT_PLAYER, player in vehicle above acceptable speed, within 20m; attacking...");
								func_255();
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_386) >= 10000)
					{
						if (GlobalFunc_115(Local_454))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 25f, 25f, 25f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 11f, 11f, 11f, 0, 1, 0))
							{
								if (GlobalFunc_4924(Local_480[iParam0 /*13*/]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_480[iParam0 /*13*/]);
									TASK::TASK_GO_STRAIGHT_TO_COORD(Local_480[iParam0 /*13*/], Local_480[iParam0 /*13*/].f_1, 3f, -1, Local_480[iParam0 /*13*/].f_7, 1056964608);
								}
								iLocal_350 = 1;
								iLocal_666[iParam0] = 0;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iParam0 /*13*/], 9f, 9f, 9f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_386) >= 12000)
								{
									if (GlobalFunc_111())
									{
										GlobalFunc_4956();
									}
									GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
									GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_4", 7, 0, 0);
									GlobalFunc_2838("SS_AIM_AT_PLAYER, player took too long and didn't move away, attacking...");
									func_255();
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_156(Local_480[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1) > 120f && (PED::IS_PED_IN_ANY_VEHICLE(Local_454, 0) || GlobalFunc_115(Local_454)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_480[iParam0 /*13*/].f_11))
				{
					HUD::REMOVE_BLIP(&(Local_480[iParam0 /*13*/].f_11));
					func_287(Local_480[iParam0 /*13*/], 1);
					iLocal_666[iParam0] = 6;
				}
			}
			else if (!GlobalFunc_6964(Local_480[iParam0 /*13*/], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_774);
				TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(5, 200));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(Local_480[iParam0 /*13*/], uLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_774);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_480[iParam0 /*13*/], 25, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_480[iParam0 /*13*/], 1);
				PED::SET_PED_KEEP_TASK(Local_480[iParam0 /*13*/], 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_480[iParam0 /*13*/], 1);
			}
			break;
		
		case 5:
			iLocal_350 = 0;
			if (func_263(Local_480[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::HAS_PED_RECEIVED_EVENT(Local_480[iParam0 /*13*/], 60))
			{
				GlobalFunc_2838("SS_STANDDOWN, player threatened Glen OR guard thought he'd get run over; attacking...");
				func_255();
			}
			else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_480[iParam0 /*13*/]))
			{
				if (func_261())
				{
					if (func_265(Local_480[iParam0 /*13*/], 1126825984))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						GlobalFunc_173(&uLocal_173, 7, Local_480[iParam0 /*13*/], "Nigel1DCelebSecurity", 0, 1);
						GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_SECUR", "NIG1D_SECUR_6", 7, 0, 0);
						GlobalFunc_2838("SS_STANDDOWN, player aiming Sniper Rifle, guard has LOS; attacking...");
						func_255();
					}
				}
			}
			break;
		
		case 6:
			break;
	}
}




int func_305()//Position - 0x2A501
{
	if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object"))
	{
		if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_golfclub"))
		{
			return 0;
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	return 1;
}

void func_306()//Position - 0x2A565
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_454))
	{
		if (iLocal_168 < 3 || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_454, 1) > 100f)
		{
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (GlobalFunc_4924(Local_480[iVar0 /*13*/]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_480[iVar0 /*13*/], 1);
					if (iVar0 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_454))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480[iVar0 /*13*/], Local_454, 0);
							TASK::TASK_GO_TO_ENTITY(Local_480[iVar0 /*13*/], Local_454, 20000, 6f, 1073741824, 1073741824, 0);
						}
					}
					else
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_480[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Local_480[iVar0 /*13*/], joaat("weapon_pistol"), 1);
					PED::SET_PED_USING_ACTION_MODE(Local_480[iVar0 /*13*/], 1, -1, "DEFAULT_ACTION");
					GlobalFunc_2837("Alerted, security guard: ", iVar0);
				}
				iLocal_666[iVar0] = 3;
				iVar0++;
			}
			if (GlobalFunc_115(Local_454))
			{
				if (!GlobalFunc_6964(Local_454, 474215631))
				{
					TASK::CLEAR_PED_TASKS(Local_454);
					TASK::TASK_COWER(Local_454, -1);
				}
			}
			if (GlobalFunc_115(Local_467))
			{
				TASK::CLEAR_PED_TASKS(Local_467);
				if (ENTITY::IS_ENTITY_ATTACHED(Local_824))
				{
					ENTITY::DETACH_ENTITY(Local_824, 1, 1);
				}
				TASK::TASK_SMART_FLEE_PED(Local_467, PLAYER::PLAYER_PED_ID(), 300f, -1, 1, 0);
				GlobalFunc_2297(&Local_467, 1, 0, 1);
				iLocal_354 = 1;
			}
			iLocal_350 = 1;
			GlobalFunc_574(790, 0);
		}
		else
		{
			GlobalFunc_2838("Alert called, but guards need to attack instead");
			func_255();
		}
	}
}



int func_309()//Position - 0x2A75B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((!GlobalFunc_115(Local_480[iVar0 /*13*/]) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_480[iVar0 /*13*/], 1)) || PED::IS_PED_RAGDOLL(Local_480[iVar0 /*13*/]))
		{
			GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Player bumped celeb security with vehicle OR celeb security dead");
			return 1;
		}
		iVar0++;
	}
	if ((!GlobalFunc_115(Local_454) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_454, 1)) || PED::IS_PED_RAGDOLL(Local_454))
	{
		GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Celeb ragdoll OR player bumped celeb with vehicle OR celeb isn't alive");
		return 1;
	}
	if ((!GlobalFunc_115(Local_467) || GlobalFunc_7106(PLAYER::PLAYER_PED_ID(), Local_467, 1)) || PED::IS_PED_RAGDOLL(Local_467))
	{
		GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Celeb friend ragdoll OR player bumped friend with vehicle OR friend isn't alive");
		return 1;
	}
	if (GlobalFunc_4947(Local_748) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_748, 0))
		{
			GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Player in celeb's golf cart");
			return 1;
		}
	}
	else
	{
		GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Celeb golf cart not OK, player destroyed it?");
		return 1;
	}
	if (GlobalFunc_4947(Local_693[4 /*6*/]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_693[4 /*6*/], 0))
		{
			GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart behind celeb");
			return 1;
		}
	}
	else
	{
		GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Golf cart behind celeb not OK, player destroyed it?");
		return 1;
	}
	if (GlobalFunc_4947(Local_693[5 /*6*/]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_693[5 /*6*/], 0))
		{
			GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Player in golf cart next to celeb");
			return 1;
		}
	}
	else
	{
		GlobalFunc_2838("HAS_PLAYER_MUCKED_ABOUT(): Golf cart next to celeb not OK, player destroyed it?");
		return 1;
	}
	return 0;
}


void func_311()//Position - 0x2A947
{
	int iVar0;
	
	switch (iLocal_170)
	{
		case 0:
			if (iLocal_360 == 0)
			{
				GlobalFunc_164("N1D_LOSESEC", 7500, 5);
				iLocal_360 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(Local_480[iVar0 /*13*/].f_11))
				{
					HUD::SET_BLIP_SCALE(Local_480[iVar0 /*13*/].f_11, 0.7f);
				}
				iVar0++;
			}
			GlobalFunc_2838("ENTERING LOSE THE SECURITY ");
			iLocal_170 = 1;
			break;
		
		case 1:
			if (!func_291() && !func_312())
			{
				func_299();
			}
			else
			{
				iLocal_170 = 2;
			}
			func_245();
			func_292();
			func_289();
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				func_287(Local_480[iVar0 /*13*/], 0);
				GlobalFunc_146(&(Local_480[iVar0 /*13*/].f_11));
				iVar0++;
			}
			func_289();
			HUD::CLEAR_PRINTS();
			iLocal_358 = 0;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_360 = 0;
				func_34(10);
			}
			else
			{
				func_34(7);
			}
			break;
	}
}

int func_312()//Position - 0x2AA46
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (GlobalFunc_115(Local_480[iVar0 /*13*/]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480[iVar0 /*13*/], 70f, 70f, 70f, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_313()//Position - 0x2AA97
{
	switch (iLocal_170)
	{
		case 0:
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			iLocal_357 = 0;
			func_320();
			if (GlobalFunc_115(Local_781.f_1))
			{
				if (iLocal_360 == 0)
				{
					if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						GlobalFunc_164("N1D_COLLECT", 7500, 5);
						iLocal_360 = 1;
					}
				}
			}
			RECORDING::_0x293220DA1B46CEBC(4f, 10f, 1);
			GlobalFunc_4948(&uLocal_35, 0, 0);
			GlobalFunc_2838("ENTERING COLLECT GOLF CLUB ");
			iLocal_170 = 1;
			break;
		
		case 1:
			func_245();
			func_299();
			func_317();
			func_292();
			func_289();
			if (iLocal_366 == 0)
			{
				if (func_316(PLAYER::PLAYER_PED_ID()))
				{
					func_315();
				}
			}
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			if (GlobalFunc_115(Local_781.f_1))
			{
				if (iLocal_360 == 0)
				{
					if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						GlobalFunc_164("N1D_COLLECT", 7500, 5);
						iLocal_360 = 1;
					}
				}
			}
			if (!GlobalFunc_4947(Local_748))
			{
				if (GlobalFunc_115(iLocal_776))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
					{
						ENTITY::DETACH_ENTITY(iLocal_776, 1, 1);
					}
				}
			}
			if (GlobalFunc_115(Local_781.f_1))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 0.8f, 0.8f, 2f, 0, 1, 1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Local_781.f_1))
					{
						GlobalFunc_2838("Golf club attached to bag - correct?");
						AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_388, "COLLECT_IN_BAG", Local_781.f_1, "NIGEL_1D_SOUNDSET", 0, 0);
					}
					else
					{
						GlobalFunc_2838("Golf club NOT attached to bag - correct?");
						AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_388, "COLLECT_OUT_BAG", Local_781.f_1, "NIGEL_1D_SOUNDSET", 0, 0);
					}
					PAD::SET_PAD_SHAKE(0, 300, 128);
					iLocal_361 = 1;
					GlobalFunc_571(0, -1);
					iLocal_170 = 2;
				}
			}
			else
			{
				iLocal_170 = 2;
			}
			break;
		
		case 2:
			if (iLocal_361 == 1)
			{
				HUD::CLEAR_PRINTS();
				iLocal_358 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_781.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_781.f_1));
				}
				GlobalFunc_146(&iLocal_338);
				if (!func_291() && !func_312())
				{
					iLocal_360 = 0;
					func_34(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_360 = 0;
					func_34(10);
				}
				else
				{
					func_34(7);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_358 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_781.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_781.f_1));
				}
				GlobalFunc_146(&iLocal_338);
				func_33(4);
			}
			break;
	}
}


void func_315()//Position - 0x2AD85
{
	if (iLocal_366 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_NIGEL_1D_01", 0f);
			GlobalFunc_2838("*** Played special Nigel 1D police report ***");
			iLocal_366 = 1;
		}
	}
}

int func_316(int iParam0)//Position - 0x2ADB8
{
	if (GlobalFunc_496(&uLocal_830, ENTITY::GET_ENTITY_COORDS(iParam0, 1)))
	{
		return 1;
	}
	return 0;
}

void func_317()//Position - 0x2ADD6
{
	if (iLocal_363 == 0)
	{
		if (GlobalFunc_115(Local_781.f_1) && iLocal_168 == 6)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 25f, 25f, 25f, 0, 1, 0))
			{
				iLocal_363 = 1;
			}
		}
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_357 == 0)
		{
			if (iLocal_169 == 7 || iLocal_168 == 6)
			{
				if (GlobalFunc_115(Local_781.f_1))
				{
					if (iLocal_363 == 1)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 65f, 65f, 65f, 0, 1, 0))
						{
							GlobalFunc_164("N1D_RETPICKUP", 7500, 5);
							iLocal_357 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_169 == 7 || iLocal_168 == 6)
		{
			if (GlobalFunc_115(Local_781.f_1))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 140f, 140f, 140f, 0, 1, 0))
				{
					func_33(3);
				}
			}
		}
		if (iLocal_168 < 6)
		{
			if (GlobalFunc_115(Local_454))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 140f, 140f, 140f, 0, 1, 0) && !func_266(PLAYER::PLAYER_PED_ID(), Local_454, 1126825984, 1, 250, 7))
				{
					func_33(1);
				}
			}
		}
	}
}



void func_320()//Position - 0x2B019
{
	if (iLocal_343 == 1)
	{
		if (GlobalFunc_115(iLocal_776))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
			{
				ENTITY::DETACH_ENTITY(iLocal_776, 1, 1);
			}
		}
		GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
		GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_HIT", "NIG1D_HIT_11", 7, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_454) && GlobalFunc_115(Local_781.f_1))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_781.f_1, Local_454))
		{
			ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
		}
	}
	GlobalFunc_146(&iLocal_338);
	if (ENTITY::DOES_ENTITY_EXIST(Local_781.f_1))
	{
		iLocal_338 = HUD::ADD_BLIP_FOR_ENTITY(Local_781.f_1);
		HUD::SET_BLIP_COLOUR(iLocal_338, 2);
	}
}

void func_321()//Position - 0x2B0D6
{
	switch (iLocal_170)
	{
		case 0:
			iLocal_169 = 6;
			func_287(Local_454, 0);
			if (GlobalFunc_4947(Local_748))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_748) > 600)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_748, 600);
				}
			}
			if (GlobalFunc_115(iLocal_776))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
				{
					GlobalFunc_2838("Reattaching bag to buggy!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_776, Local_748, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			if (GlobalFunc_115(Local_781.f_1) && GlobalFunc_115(Local_454))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_781.f_1))
				{
					GlobalFunc_2838("Reattaching club to bag!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, iLocal_776, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_781.f_1, Local_454))
				{
					GlobalFunc_2838("Glen still holding club, reattach to bag");
					ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, iLocal_776, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			GlobalFunc_2838("ENTERING CHASE IN CITY ");
			GlobalFunc_146(&iLocal_338);
			iLocal_338 = GlobalFunc_5743(Local_748, 0, 5);
			iLocal_170 = 1;
			break;
		
		case 1:
			func_245();
			func_317();
			GlobalFunc_4501(iLocal_338, Local_748, 140f, 1061158912, 0);
			func_289();
			if (bLocal_368)
			{
				if (GlobalFunc_115(Local_781.f_1) && GlobalFunc_115(iLocal_776))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_781.f_1, iLocal_776))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 0.8f, 0.8f, 2f, 0, 1, 1))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_388, "COLLECT_IN_BAG", Local_781.f_1, "NIGEL_1D_SOUNDSET", 0, 0);
								PAD::SET_PAD_SHAKE(0, 300, 128);
								iLocal_361 = 1;
								iLocal_170 = 2;
							}
						}
					}
				}
			}
			if (func_322())
			{
				iLocal_170 = 2;
			}
			break;
		
		case 2:
			if (iLocal_361)
			{
				HUD::CLEAR_PRINTS();
				iLocal_358 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_781.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_781.f_1));
				}
				GlobalFunc_146(&iLocal_338);
				if (!func_291() && !func_312())
				{
					iLocal_360 = 0;
					func_34(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_360 = 0;
					func_34(10);
				}
				else
				{
					func_34(7);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_360 = 0;
				func_34(6);
			}
			break;
	}
}

int func_322()//Position - 0x2B35A
{
	if (GlobalFunc_4947(Local_748))
	{
		if (GlobalFunc_115(Local_454))
		{
			GlobalFunc_10692(&uLocal_35, Local_748, 0, 0, 1, 1, 1);
			if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
			{
				func_323();
			}
			if ((func_246() || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_748, 0, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_748, 1, 0))
			{
				GlobalFunc_2838("Buggy stuck or front tyres burst in city - returning true");
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
				{
					TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
					TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
				}
				TASK::CLEAR_PED_TASKS(Local_454);
				func_287(Local_454, 1);
				return 1;
			}
			if (ENTITY::GET_ENTITY_HEALTH(Local_748) < 500)
			{
				GlobalFunc_2838("Buggy health below threshold - returning true");
				iLocal_343 = 1;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
			{
				GlobalFunc_2838("Celeb not in buggy while monitoring chase - returning true");
				return 1;
			}
		}
		else
		{
			GlobalFunc_2838("Celeb dead - returning true");
			return 1;
		}
	}
	else
	{
		GlobalFunc_2838("Buggy somehow not ok - returning true");
		return 1;
	}
	return 0;
}

void func_323()//Position - 0x2B44C
{
	if (GlobalFunc_115(Local_454))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_454, 20f, 20f, 20f, 0, 1, 0))
		{
			TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_454, 0.3f);
		}
		else
		{
			TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_454, 0f);
		}
	}
}


























void func_349()//Position - 0x2C46E
{
	switch (iLocal_170)
	{
		case 0:
			GlobalFunc_2838("CHASE THE GOLFER ");
			iLocal_383 = MISC::GET_GAME_TIMER();
			iLocal_384 = MISC::GET_GAME_TIMER();
			iLocal_385 = MISC::GET_GAME_TIMER();
			HUD::SET_BLIP_SCALE(iLocal_338, 1f);
			GlobalFunc_131(&(Local_693[3 /*6*/]));
			if (GlobalFunc_115(iLocal_776) && GlobalFunc_4947(Local_748))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
				{
					GlobalFunc_2838("Reattaching bag to buggy!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_776, Local_748, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			if ((GlobalFunc_115(Local_781.f_1) && GlobalFunc_115(Local_454)) && GlobalFunc_4947(Local_748))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_781.f_1))
				{
					GlobalFunc_2838("Reattaching club to bag!?");
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, iLocal_776, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_781.f_1, Local_454))
				{
					GlobalFunc_2838("Glen still holding club, reattach to bag");
					ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, iLocal_776, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			iLocal_377 = 0;
			func_362();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_170 = 1;
			break;
		
		case 1:
			func_361();
			func_245();
			func_299();
			func_317();
			func_353();
			func_292();
			func_289();
			func_315();
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			GlobalFunc_4501(iLocal_338, Local_454, 140f, 1061158912, 0);
			if (!GlobalFunc_115(Local_781.f_1))
			{
				HUD::CLEAR_PRINTS();
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				iLocal_358 = 0;
				GlobalFunc_146(&iLocal_338);
				func_33(4);
			}
			if (func_350() || !GlobalFunc_115(Local_454))
			{
				GlobalFunc_164("N1D_COLLECT", 7500, 5);
				func_34(6);
			}
			else
			{
				if (bLocal_368)
				{
					if (GlobalFunc_115(Local_781.f_1) && GlobalFunc_115(iLocal_776))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_781.f_1, iLocal_776))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_781.f_1, 0.8f, 0.8f, 2f, 0, 1, 1))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_388, "COLLECT_IN_BAG", Local_781.f_1, "NIGEL_1D_SOUNDSET", 0, 0);
									PAD::SET_PAD_SHAKE(0, 300, 128);
									iLocal_361 = 1;
									iLocal_170 = 2;
								}
							}
						}
					}
				}
				if (TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(Local_748) >= 200)
				{
					iLocal_170 = 2;
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (iLocal_361)
			{
				iLocal_358 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(Local_781.f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_781.f_1));
				}
				GlobalFunc_146(&iLocal_338);
				if (!func_291() && !func_312())
				{
					iLocal_360 = 0;
					func_34(9);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_360 = 0;
					func_34(10);
				}
				else
				{
					func_34(7);
				}
			}
			else
			{
				func_34(5);
			}
			break;
	}
}

int func_350()//Position - 0x2C768
{
	if (GlobalFunc_4947(Local_748))
	{
		if (GlobalFunc_115(Local_454))
		{
			GlobalFunc_10692(&uLocal_35, Local_748, 0, 0, 1, 1, 1);
			if ((func_246() || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_748, 0, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_748, 1, 0))
			{
				if (GlobalFunc_4947(Local_748))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
					{
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
						TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
					}
				}
				TASK::CLEAR_PED_TASKS(Local_454);
				func_287(Local_454, 1);
				GlobalFunc_2838("*** Celeb cart stuck or a front wheel is burst - chase monitor returning True");
				return 1;
			}
			else
			{
				func_352();
			}
			if (ENTITY::GET_ENTITY_HEALTH(Local_748) < 600)
			{
				iLocal_343 = 1;
				GlobalFunc_2838("*** Celeb cart below drop club threshold - chase monitor returning True");
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
			{
				GlobalFunc_2838("*** Celeb no longer in vehicle - chase monitor returning True");
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_748, PLAYER::PLAYER_PED_ID(), 1) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_748, 0, 2))
			{
				func_351();
				GlobalFunc_2837("VEHICLE HEALTH IS ", ENTITY::GET_ENTITY_HEALTH(Local_748));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_748);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_748, PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_2837("VEHICLE HEALTH IS ", ENTITY::GET_ENTITY_HEALTH(Local_748));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_748);
			}
		}
		else
		{
			GlobalFunc_2838("Celeb dead - returning true");
			return 1;
		}
	}
	else
	{
		GlobalFunc_2838("*** Celeb cart wrecked/not OK - chase monitor returning True");
		func_287(Local_454, 1);
		return 1;
	}
	return 0;
}

void func_351()//Position - 0x2C8C3
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		if (!GlobalFunc_111())
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_383) >= 6000)
			{
				GlobalFunc_173(&uLocal_173, 6, Local_454, "FOSTENBURG", 0, 1);
				if (GlobalFunc_10618(&uLocal_173, "NIG1DAU", "NIG1D_HIT", 7, 0, 0, 0))
				{
					iLocal_383 = MISC::GET_GAME_TIMER();
					iLocal_384 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_352()//Position - 0x2C92A
{
	if (iLocal_168 < 6)
	{
		if (GlobalFunc_4924(Local_454))
		{
			if (GlobalFunc_4947(Local_748))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
				{
					if (iLocal_362 == 0)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_454, Local_748, "NIGEL1DGOLF", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
						}
					}
					else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_748))
					{
						iLocal_362 = 0;
					}
				}
			}
		}
	}
}

void func_353()//Position - 0x2C99F
{
	int iVar0;
	
	if (iLocal_346 == 0)
	{
		if (func_360(0))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				func_297(&(Local_560[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_560[iVar0 /*13*/], 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_560[iVar0 /*13*/], 1);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				func_359(&(Local_787[iVar0 /*6*/]), 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_787[iVar0 /*6*/], Local_560[iVar0 /*13*/], PED::GET_PED_BONE_INDEX(Local_560[iVar0 /*13*/], 28422), 0.06f, 0.04f, 0f, -90f, 180f, 0f, 0, 0, 0, 0, 2, 1);
				iVar0++;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_787[0 /*6*/], Local_560[0 /*13*/], PED::GET_PED_BONE_INDEX(Local_560[0 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_787[1 /*6*/], Local_560[1 /*13*/], PED::GET_PED_BONE_INDEX(Local_560[1 /*13*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_787[2 /*6*/], Local_560[2 /*13*/], PED::GET_PED_BONE_INDEX(Local_560[2 /*13*/], 28422), 0f, 0f, 0.05f, 0f, -10f, -90f, 0, 0, 0, 0, 2, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_787[3 /*6*/], Local_560[3 /*13*/], PED::GET_PED_BONE_INDEX(Local_560[3 /*13*/], 28422), -0.01f, 0f, 0f, 10f, 0f, -90f, 0, 0, 0, 0, 2, 1);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (GlobalFunc_4924(Local_560[iVar0 /*13*/]))
				{
					TASK::TASK_PLAY_ANIM(Local_560[iVar0 /*13*/], "rcmnigel1d", Local_560[iVar0 /*13*/].f_12, 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				iVar0++;
			}
			iVar0 = 2;
			while (iVar0 <= 3)
			{
				if (GlobalFunc_4924(Local_560[iVar0 /*13*/]))
				{
					TASK::TASK_PLAY_ANIM(Local_560[iVar0 /*13*/], "mini@golf", Local_560[iVar0 /*13*/].f_12, 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				iVar0++;
			}
			iLocal_346 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_358(iVar0))
			{
				if (iLocal_670[iVar0] != 4)
				{
					iLocal_670[iVar0] = 4;
					GlobalFunc_2837("This Ambient Golfer is now dead: ", iVar0);
					func_356(iVar0);
				}
			}
			if (GlobalFunc_115(Local_560[iVar0 /*13*/]))
			{
				func_354(iVar0);
			}
			iVar0++;
		}
	}
}

void func_354(int iParam0)//Position - 0x2CBEC
{
	switch (iLocal_670[iParam0])
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_560[iParam0 /*13*/], 1), 50f, 0))
				{
					func_258(iParam0);
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
					}
					GlobalFunc_2838("AS_PLAYGOLF, bullet in area of ambient golfer (no vehicle); alerted...");
					func_306();
					iLocal_670[iParam0] = 1;
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_560[iParam0 /*13*/], 20f, 20f, 20f, 0, 1, 0))
				{
					if (func_263(Local_560[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (!func_305())
						{
							if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_FRIGHTENED_HIGH", 34);
							}
							func_258(iParam0);
							GlobalFunc_2838("AS_PLAYGOLF, player threatened ambient golfer; attacking...");
							func_306();
							iLocal_670[iParam0] = 1;
						}
						else
						{
							Local_398 = { ENTITY::GET_ENTITY_COORDS(Local_560[iParam0 /*13*/], 1) };
							Local_560[iParam0 /*13*/].f_10 = 1;
							func_355();
							if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
								GlobalFunc_2838("Played aggro line from ambient golfer...");
							}
							PED::SET_PED_CAN_BE_TARGETTED(Local_560[iParam0 /*13*/], 1);
							TASK::TASK_COMBAT_PED(Local_560[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							if (ENTITY::DOES_ENTITY_EXIST(Local_787[iParam0 /*6*/]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_787[iParam0 /*6*/]))
								{
									ENTITY::DETACH_ENTITY(Local_787[iParam0 /*6*/], 1, 1);
								}
							}
							iLocal_670[iParam0] = 1;
						}
					}
					else if (func_265(Local_560[iParam0 /*13*/], 1126825984))
					{
						if (!func_305())
						{
							if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
							}
							func_258(iParam0);
							GlobalFunc_2838("AS_PLAYGOLF, player armed and ambient golfer has LOS; attacking...");
							func_306();
							iLocal_670[iParam0] = 1;
						}
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 10f)
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_560[iParam0 /*13*/], 11f, 11f, 11f, 0, 1, 0) && PED::HAS_PED_RECEIVED_EVENT(Local_560[iParam0 /*13*/], 60)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_560[iParam0 /*13*/]))
				{
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
					}
					GlobalFunc_2837("This ambient golfer nearly got run over and is now attacking player: ", iParam0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_560[iParam0 /*13*/], 1);
					TASK::TASK_COMBAT_PED(Local_560[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					func_355();
					iLocal_670[iParam0] = 1;
				}
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_560[iParam0 /*13*/], 1), 50f, 1))
			{
				func_287(Local_560[iParam0 /*13*/], 1);
				func_356(iParam0);
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_SHOCKED_HIGH", 34);
				}
				GlobalFunc_2838("AS_PLAYGOLF, bullet in area of ambient golfer (in vehicle); attacking...");
				func_306();
				iLocal_670[iParam0] = 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_560[iParam0 /*13*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_560[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_2838("Player damaged an ambient golfer with their vehicle (or another vehicle damaged them?)");
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_FUCK_YOU", 34);
				}
				func_356(iParam0);
				func_258(iParam0);
				iLocal_670[iParam0] = 3;
			}
			break;
		
		case 1:
			if (func_263(Local_560[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0) && !func_305())
			{
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_173(&uLocal_173, 8, Local_560[iParam0 /*13*/], "NIGEL1DAMBIENTGOLFER1", 0, 1);
					GlobalFunc_5122(Local_560[iParam0 /*13*/], "GENERIC_CURSE_MED", 34);
				}
				GlobalFunc_2838("AS_ALERTED, player threatened ambient golfer and was armed; attacking...");
				func_306();
				func_258(iParam0);
				iLocal_670[iParam0] = 3;
			}
			break;
		
		case 3:
			if (!GlobalFunc_6964(Local_560[iParam0 /*13*/], 1805844857))
			{
				func_258(iParam0);
			}
			GlobalFunc_2297(&(Local_560[iParam0 /*13*/]), 1, 0, 1);
			break;
		
		case 4:
			break;
	}
}

void func_355()//Position - 0x2D038
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GlobalFunc_115(Local_560[iVar0 /*13*/]))
		{
			if (Local_560[iVar0 /*13*/].f_10 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_560[iVar0 /*13*/], Local_398, 20f, 20f, 20f, 0, 1, 0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_560[iVar0 /*13*/], 1);
					TASK::TASK_COMBAT_PED(Local_560[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					if (ENTITY::DOES_ENTITY_EXIST(Local_787[iVar0 /*6*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_787[iVar0 /*6*/]))
						{
							ENTITY::DETACH_ENTITY(Local_787[iVar0 /*6*/], 1, 1);
						}
					}
					iLocal_670[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_356(int iParam0)//Position - 0x2D0E1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_560[iParam0 /*13*/]))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (GlobalFunc_115(Local_560[iVar0 /*13*/]))
			{
				if (func_357(Local_560[iParam0 /*13*/], Local_560[iVar0 /*13*/], 20f))
				{
					if (iLocal_670[iVar0] != 3)
					{
						GlobalFunc_2837("Making this Ambient Golfer flee from dead ped: ", iVar0);
						func_258(iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_357(int iParam0, int iParam1, float fParam2)//Position - 0x2D14D
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) <= (fParam2 * fParam2);
}

int func_358(int iParam0)//Position - 0x2D16D
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_560[iParam0 /*13*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_560[iParam0 /*13*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_787[iParam0 /*6*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_787[iParam0 /*6*/]))
				{
					ENTITY::DETACH_ENTITY(Local_787[iParam0 /*6*/], 1, 1);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_359(var uParam0, int iParam1)//Position - 0x2D1BF
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_5, uParam0->f_1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::SET_ENTITY_HEADING(*uParam0, uParam0->f_4);
		}
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
}

int func_360(int iParam0)//Position - 0x2D209
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::REQUEST_MODEL(Local_560[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::REQUEST_MODEL(Local_787[iVar0 /*6*/].f_5);
		iVar0++;
	}
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_560[iVar0 /*13*/].f_8))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_787[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_560[iVar0 /*13*/].f_8))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_787[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
		}
	}
	return 1;
}

void func_361()//Position - 0x2D307
{
	if (iLocal_354 == 0)
	{
		if (GlobalFunc_115(Local_467))
		{
			if (func_263(Local_467, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (GlobalFunc_115(Local_467))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_467, 1);
				}
				func_287(Local_467, 1);
				iLocal_354 = 1;
			}
		}
	}
}

void func_362()//Position - 0x2D357
{
	GlobalFunc_146(&uLocal_339);
	iLocal_689 = 6;
}


void func_364()//Position - 0x2D3A1
{
	switch (iLocal_170)
	{
		case 0:
			GlobalFunc_2838("ENTERING GET THE CLUB 1 ");
			if (iLocal_360 == 0)
			{
				GlobalFunc_164("N1D_TAKE", 7500, 5);
				iLocal_360 = 1;
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			GlobalFunc_146(&iLocal_338);
			iLocal_338 = GlobalFunc_4955(Local_454, 1, 0, 5);
			iLocal_170 = 1;
			break;
		
		case 1:
			func_372();
			func_361();
			func_353();
			func_299();
			func_368();
			func_245();
			func_365();
			func_289();
			func_315();
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			if (!GlobalFunc_115(Local_781.f_1))
			{
				HUD::CLEAR_PRINTS();
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				iLocal_358 = 0;
				GlobalFunc_146(&iLocal_338);
				func_33(4);
			}
			if (GlobalFunc_188())
			{
				iLocal_170 = 2;
			}
			if (GlobalFunc_115(Local_454))
			{
				if (PED::IS_PED_FLEEING(Local_454))
				{
					bLocal_365 = true;
				}
				if (GlobalFunc_4947(Local_748))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_454, Local_748, 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, iLocal_776, 0, 0.1f, 0f, -0.25f, -5f, 155f, 0f, 0, 0, 0, 0, 2, 1);
						iLocal_170 = 2;
					}
				}
				else if (GlobalFunc_115(iLocal_776))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_776))
					{
						ENTITY::DETACH_ENTITY(iLocal_776, 1, 1);
					}
				}
			}
			else
			{
				iLocal_170 = 2;
			}
			if (bLocal_365 == 1)
			{
				if (GlobalFunc_115(Local_454))
				{
					if (PED::IS_PED_RAGDOLL(Local_454))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_781.f_1))
						{
							ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
							iLocal_170 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (GlobalFunc_115(Local_454) && !bLocal_365)
			{
				func_34(4);
			}
			else
			{
				iLocal_360 = 0;
				func_34(6);
			}
			break;
	}
}

void func_365()//Position - 0x2D547
{
	switch (iLocal_689)
	{
		case 0:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1377.18f, 55.39f, 53.7f, 2f, 2f, 2f, 0, 1, 1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1379.154f, 57.95101f, 52.19011f, -1378.735f, 53.17284f, 54.94018f, 4f, 0, 1, 0))
					{
						iLocal_689 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_342))
			{
				uLocal_342 = GlobalFunc_4614();
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_340))
			{
				uLocal_340 = CAM::CREATE_CAMERA_WITH_PARAMS(180543640, -1409.452f, 53.5135f, 78.0868f, -26.7543f, 0f, -85.6976f, 50f, 0, 2);
				CAM::SET_CAM_SPLINE_DURATION(uLocal_340, 4500);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(uLocal_340, uLocal_342, 1500, 3);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_340, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_340, -1409.452f, 53.5135f, 78.0868f, -26.7543f, 0f, -85.6976f, 1500, 3, 2);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::DISPLAY_RADAR(0);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1368.33f, 56.4194f, 52.4637f, 1f, 20000, 1048576000, 0, 1193033728);
			}
			iLocal_689 = 2;
			break;
		
		case 2:
			if (!CAM::IS_CAM_ACTIVE(uLocal_342))
			{
				if (!CAM::IS_CAM_ACTIVE(uLocal_340))
				{
					CAM::SET_CAM_ACTIVE(uLocal_342, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 1, 3000, 1, 0, 0);
				}
			}
			else if (!CAM::IS_CAM_ACTIVE(uLocal_340))
			{
				CAM::SET_CAM_ACTIVE(uLocal_340, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 1, 3000, 1, 0, 0);
				iLocal_689 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1368.33f, 56.4194f, 52.4637f, 2f, 2f, 2f, 0, 1, 1))
			{
				SYSTEM::WAIT(2000);
				func_66(PLAYER::PLAYER_PED_ID(), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_5128(2);
				iLocal_369 = 1;
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1373.09f, 55.61f, 52.71f, 1f, 20000, 1048576000, 0, 1193033728);
				}
				SYSTEM::WAIT(500);
				iLocal_689 = 4;
			}
			break;
		
		case 4:
			if (!CAM::DOES_CAM_EXIST(uLocal_341))
			{
				uLocal_341 = CAM::CREATE_CAMERA_WITH_PARAMS(180543640, -1373.681f, 57.0584f, 54.9717f, -10.6657f, 0f, 91.5916f, 50f, 0, 2);
				CAM::SET_CAM_SPLINE_DURATION(uLocal_341, 4500);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(uLocal_341, uLocal_340, 1500, 3);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_341, -1382.719f, 55.216f, 58.0408f, -15.6873f, 0f, -88.6059f, 1500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uLocal_341, -1373.681f, 57.0584f, 54.9717f, -10.6657f, 0f, 91.5916f, 1500, 3, 2);
			}
			if (!CAM::IS_CAM_ACTIVE(uLocal_341))
			{
				CAM::RENDER_SCRIPT_CAMS(1, 1, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(uLocal_341, 1);
				SYSTEM::WAIT(3500);
				iLocal_689 = 5;
			}
			if (CAM::IS_CAM_ACTIVE(uLocal_342))
			{
				CAM::SET_CAM_ACTIVE(uLocal_342, 0);
			}
			if (CAM::IS_CAM_ACTIVE(uLocal_340))
			{
				CAM::SET_CAM_ACTIVE(uLocal_340, 0);
			}
			break;
		
		case 5:
			if (CAM::DOES_CAM_EXIST(uLocal_341))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_341))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
					CAM::SET_CAM_ACTIVE(uLocal_341, 0);
					SYSTEM::WAIT(2000);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::DISPLAY_RADAR(1);
					CAM::DESTROY_CAM(uLocal_342, 0);
					CAM::DESTROY_CAM(uLocal_340, 0);
					CAM::DESTROY_CAM(uLocal_341, 0);
				}
			}
			GlobalFunc_146(&uLocal_339);
			break;
		
		case 6:
			break;
	}
}



void func_368()//Position - 0x2D952
{
	int iVar0;
	
	if (iLocal_359 == 0)
	{
		if (func_9(0))
		{
			GlobalFunc_2838("Concierge scene loaded, creating now...");
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_297(&(Local_401[iVar0 /*13*/]), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401[iVar0 /*13*/], 1);
				iVar0++;
			}
			func_296(&(Local_693[0 /*6*/]), 0);
			PED::SET_PED_INTO_VEHICLE(Local_401[1 /*13*/], Local_693[0 /*6*/], -1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_401[1 /*13*/], 0);
			iLocal_359 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_401[iVar0 /*13*/].f_8);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_693[iVar0 /*6*/].f_5);
				iVar0++;
			}
		}
	}
	else
	{
		func_369();
	}
}

void func_369()//Position - 0x2DA0D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (GlobalFunc_115(Local_401[iVar0 /*13*/]))
		{
			func_370(iVar0);
		}
		iVar0++;
	}
}

void func_370(int iParam0)//Position - 0x2DA3B
{
	switch (iLocal_684[iParam0])
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_401[iParam0 /*13*/], 6f, 6f, 6f, 0, 1, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_401[iParam0 /*13*/], 150319005) != 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_401[iParam0 /*13*/], PLAYER::PLAYER_PED_ID(), 500, 12, 2);
				}
			}
			if (func_263(Local_401[iParam0 /*13*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (!GlobalFunc_111())
					{
						if (iParam0 == 0)
						{
							GlobalFunc_173(&uLocal_173, 7, Local_401[iParam0 /*13*/], "CONCIERGE", 0, 1);
							GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_9", 7, 0, 0);
						}
					}
				}
				func_362();
				func_371();
				iLocal_684[iParam0] = 1;
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_401[iParam0 /*13*/], 1), 30f, 1))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (!GlobalFunc_111())
					{
						if (iParam0 == 0)
						{
							GlobalFunc_173(&uLocal_173, 7, Local_401[iParam0 /*13*/], "CONCIERGE", 0, 1);
							GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							GlobalFunc_10630(&uLocal_173, "NIG1DAU", "NIG1D_FLEE", "NIG1D_FLEE_7", 7, 0, 0);
						}
					}
				}
				func_362();
				func_371();
				iLocal_684[iParam0] = 1;
			}
			break;
		
		case 1:
			break;
	}
}

void func_371()//Position - 0x2DBBD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_287(Local_401[iVar0 /*13*/], 1);
		iVar0++;
	}
}

void func_372()//Position - 0x2DBE3
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_316(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_373(PLAYER::PLAYER_PED_ID()))
			{
				func_33(1);
			}
			else
			{
				HUD::SET_BLIP_FLASHES(iLocal_338, 1);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_338))
		{
			GlobalFunc_2838("Recreated mission blip");
			iLocal_338 = GlobalFunc_4955(Local_454, 1, 0, 5);
		}
		else
		{
			HUD::SET_BLIP_FLASHES(iLocal_338, 0);
		}
	}
}

int func_373(int iParam0)//Position - 0x2DC4D
{
	if (GlobalFunc_496(&uLocal_882, ENTITY::GET_ENTITY_COORDS(iParam0, 0)))
	{
		return 1;
	}
	return 0;
}

void func_374()//Position - 0x2DC6B
{
	switch (iLocal_170)
	{
		case 0:
			RECORDING::_0x293220DA1B46CEBC(2f, 8f, 1);
			GlobalFunc_2838("ENTERING GO TO CELEBRITY ");
			if (iLocal_360 == 0)
			{
				GlobalFunc_164("N1D_TAKE", 7500, 5);
				iLocal_360 = 1;
			}
			GlobalFunc_146(&iLocal_338);
			if (GlobalFunc_115(Local_454))
			{
				iLocal_338 = GlobalFunc_4955(Local_454, 1, 0, 5);
			}
			iLocal_170 = 1;
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			break;
		
		case 1:
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			func_372();
			func_361();
			func_368();
			func_353();
			func_299();
			func_245();
			func_365();
			if (GlobalFunc_115(Local_454) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_454, 50f) || iLocal_169 == 3)
				{
					iLocal_170 = 2;
				}
				else if (GlobalFunc_188())
				{
					iLocal_170 = 2;
				}
				else if (iLocal_172 == 0)
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_454, 150f))
					{
						iLocal_170 = 2;
					}
				}
			}
			else
			{
				iLocal_170 = 2;
			}
			break;
		
		case 2:
			iLocal_358 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_11110(1, "MS_GET_THE_CLUB", 1, 0, 0, 1);
			}
			else
			{
				GlobalFunc_11110(1, "MS_GET_THE_CLUB", 1, 0, 0, 0);
			}
			if (GlobalFunc_115(Local_454))
			{
				func_34(3);
			}
			else
			{
				ENTITY::DETACH_ENTITY(Local_781.f_1, 1, 1);
				iLocal_360 = 0;
				func_34(6);
			}
			break;
	}
}






























































void func_436()//Position - 0x33210
{
	switch (iLocal_170)
	{
		case 0:
			GlobalFunc_2838("ENTERING GO TO GOLF CLUB ");
			if (iLocal_360 == 0)
			{
				GlobalFunc_164("N1D_TAKE", 7500, 5);
				iLocal_360 = 1;
			}
			GlobalFunc_146(&iLocal_338);
			if (GlobalFunc_115(Local_454))
			{
				iLocal_338 = GlobalFunc_4955(Local_454, 1, 0, 5);
			}
			else
			{
				GlobalFunc_2838("Glen was not alive when trying to create the blip in GO_TO_THE_GOLF_CLUB() init");
				func_440();
				iLocal_338 = GlobalFunc_4955(Local_454, 1, 0, 5);
			}
			func_437(0);
			GlobalFunc_2838("ENTERING GO TO GOLF CLUB LOOP ");
			if (GlobalFunc_2(0) && iLocal_172)
			{
				func_17(1, 1, 1);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			iLocal_170 = 1;
			break;
		
		case 1:
			if (iLocal_353 == 0)
			{
				GlobalFunc_2838("Glen created in GO_TO_THE_GOLF_CLUB() SS_UPDATE");
				func_440();
			}
			else
			{
				func_372();
				func_353();
				func_361();
				func_368();
				func_299();
				func_245();
				func_365();
				if (GlobalFunc_115(Local_454))
				{
					if (func_316(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_170 = 2;
					}
				}
				else
				{
					iLocal_170 = 2;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(Local_454))
			{
				func_34(2);
			}
			else
			{
				iLocal_360 = 0;
				func_34(6);
			}
			break;
	}
}

void func_437(int iParam0)//Position - 0x3332C
{
	if (iLocal_689 != 5 || iParam0 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_339))
		{
			iLocal_339 = GlobalFunc_5920(-1377.18f, 55.39f, 53.7f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_339, 109);
		}
		iLocal_689 = 0;
	}
}



void func_440()//Position - 0x333B8
{
	while (iLocal_353 == 0)
	{
		if (func_441(0))
		{
			func_297(&Local_454, 0);
			PED::SET_PED_PROP_INDEX(Local_454, 0, 0, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_454, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Local_454, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_454, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_454, 1);
			GlobalFunc_593(Local_454, 0);
			func_297(&Local_467, 0);
			func_359(&Local_824, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_824, Local_467, PED::GET_PED_BONE_INDEX(Local_467, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			TASK::TASK_PLAY_ANIM(Local_467, "rcmnigel1d", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_467, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Local_467, 0);
			if (GlobalFunc_115(Local_454))
			{
				Local_781.f_3 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(Local_454, 1), 1067030938, 1069547520) };
			}
			iLocal_776 = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), Local_781.f_3, 1, 1, 0);
			func_296(&Local_748, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
			{
				if (GlobalFunc_4947(Local_748))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_748, "NIGEL_1D_GOLF_CART_A", 0);
				}
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_748, 1, 1);
			ENTITY::SET_ENTITY_HEALTH(Local_748, 1200);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_776, Local_748, 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_5, 1);
			Local_781.f_1 = OBJECT::CREATE_OBJECT(joaat("prop_golf_wood_01"), Local_781.f_3, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_781.f_1, Local_454, PED::GET_PED_BONE_INDEX(Local_454, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_454.f_8);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_775);
			TASK::TASK_ACHIEVE_HEADING(0, 112f, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcmnigel1d", "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_775, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_775);
			TASK::TASK_PERFORM_SEQUENCE(Local_454, uLocal_775);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_775);
			func_296(&(Local_693[4 /*6*/]), 0);
			func_296(&(Local_693[5 /*6*/]), 0);
			GlobalFunc_2838("Celeb created!");
			iLocal_353 = 1;
		}
		else
		{
			GlobalFunc_2838("Waiting for celeb assets...");
		}
		SYSTEM::WAIT(0);
	}
}

int func_441(int iParam0)//Position - 0x335F8
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_780);
	STREAMING::REQUEST_MODEL(joaat("a_m_y_golfer_01"));
	STREAMING::REQUEST_MODEL(Local_748.f_5);
	STREAMING::REQUEST_MODEL(Local_824.f_5);
	if (iParam0 == 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_780))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_golfer_01")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_748.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_824.f_5))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			SYSTEM::WAIT(0);
			iVar0 = 1;
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_780))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_golfer_01")))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_748.f_5))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_824.f_5))
			{
				iVar0 = 0;
			}
		}
	}
	return 1;
}

void func_442()//Position - 0x336C0
{
	switch (iLocal_170)
	{
		case 0:
			GlobalFunc_2838("ENTERING PHONE CALL 3 ");
			GlobalFunc_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_173, 3, 0, "NIGEL", 0, 1);
			GlobalFunc_173(&uLocal_173, 4, 0, "MRSTHORNHILL", 0, 1);
			if (iLocal_172 == 1)
			{
				GlobalFunc_79(500, 1);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			iLocal_358 = 0;
			iLocal_170 = 1;
			break;
		
		case 1:
			if (!iLocal_358)
			{
				if (GlobalFunc_10638(&uLocal_173, 64, "NIG1DAU", "NIG1D_INTRO", 9, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					iLocal_358 = 1;
				}
			}
			else
			{
				if (iLocal_353 == 0)
				{
					func_440();
				}
				else
				{
					func_368();
					func_299();
					func_245();
					func_353();
					func_361();
				}
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_1993())
					{
						if (GlobalFunc_890() && iLocal_356 == 0)
						{
							iLocal_358 = 0;
						}
						else
						{
							iLocal_170 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				GlobalFunc_5744();
			}
			GlobalFunc_200(&uLocal_173, 3);
			GlobalFunc_200(&uLocal_173, 4);
			iLocal_358 = 0;
			if (func_316(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_353 == 0)
				{
					func_440();
				}
				else
				{
					func_34(2);
				}
			}
			else
			{
				func_34(1);
			}
			break;
	}
}


void func_444()//Position - 0x33824
{
	char* sVar0;
	
	switch (iLocal_170)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_146(&iLocal_338);
			switch (iLocal_376)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "N1D_ESCAPE";
					break;
				
				case 2:
					sVar0 = "N1D_NOLOCATE";
					break;
				
				case 4:
					sVar0 = "N1D_CLUBDES";
					break;
				
				case 3:
					sVar0 = "N1D_CLUBLOST";
					break;
			}
			if (iLocal_376 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			iLocal_170 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_445();
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					GlobalFunc_4935();
				}
				func_233(1);
				func_502(0);
			}
			break;
	}
}

void func_445()//Position - 0x338DF
{
	int iVar0;
	
	GlobalFunc_881(&Local_454);
	GlobalFunc_881(&Local_467);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_881(&(Local_401[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		GlobalFunc_881(&(Local_560[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_881(&(Local_639[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_881(&(Local_480[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_881(&(Local_520[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		GlobalFunc_6692(&(Local_693[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_6692(&(Local_754[iVar0 /*6*/]));
		iVar0++;
	}
	GlobalFunc_6692(&Local_748);
	GlobalFunc_130(&(Local_781.f_1));
	GlobalFunc_130(&iLocal_776);
	GlobalFunc_130(&Local_824);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		GlobalFunc_130(&(Local_787[iVar0 /*6*/]));
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_781))
	{
		OBJECT::REMOVE_PICKUP(Local_781);
	}
	GlobalFunc_146(&iLocal_338);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_146(&(Local_480[iVar0 /*13*/].f_11));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_773);
	GlobalFunc_5905(2, uLocal_364);
}







void func_452(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x33BB1
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
















void func_468(int iParam0, int iParam1)//Position - 0x3466C
{
	func_471(1, 1);
	if (iParam1 == 1)
	{
		func_469();
	}
	iLocal_171 = iParam0;
	if (iLocal_171 == 3)
	{
		GlobalFunc_2838("We are trying to skip to Get The Club...");
	}
	else if (iLocal_171 == 1)
	{
		GlobalFunc_2838("We are trying to skip to Go to Golf Club...");
	}
	iLocal_172 = 0;
	func_1(iLocal_171);
}

void func_469()//Position - 0x346B2
{
	HUD::CLEAR_PRINTS();
	func_445();
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	iLocal_690 = 0;
	func_470();
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DTRANS");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DGOLF2");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("NIGEL1DCRASH");
	}
	iLocal_353 = 0;
	iLocal_344 = 0;
	func_482();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1330.118f, -72.3159f, 48.1812f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 326f);
	}
	func_34(1);
}

void func_470()//Position - 0x34764
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_401[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_520[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_480[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_560[iVar0 /*13*/].f_8);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_639[iVar0 /*13*/].f_8);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_780);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_693[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_754[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_787[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

void func_471(bool bParam0, bool bParam1)//Position - 0x3486C
{
	if (bParam0)
	{
		func_475(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_472(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_472(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3489F
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
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_66(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_66(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_66(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_66(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_47 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_47 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_475(bool bParam0, int iParam1, int iParam2)//Position - 0x34AA4
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
			func_19(iParam1, iParam2, 1, 1);
		}
	}
}







void func_482()//Position - 0x34C77
{
	int iVar0;
	
	func_492();
	iLocal_169 = 0;
	iLocal_690 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_680[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_666[iVar0] = 0;
		iVar0++;
	}
	iLocal_378 = 0;
	iLocal_379 = 0;
	uLocal_388 = AUDIO::GET_SOUND_ID();
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_1D_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		if (GlobalFunc_4947(Local_748))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_748, "NIGEL_1D_GOLF_CART_A", 0);
		}
	}
	iLocal_343 = 0;
	iLocal_345 = 0;
	iLocal_346 = 0;
	iLocal_348 = 0;
	iLocal_355 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_354 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	iLocal_359 = 0;
	iLocal_360 = 0;
	iLocal_347 = 0;
	iLocal_356 = 0;
	uLocal_364 = GlobalFunc_5101(2);
	PED::ADD_RELATIONSHIP_GROUP("SecurityGroup", &iLocal_773);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_773, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_773);
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DTRANS");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DGOLF");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DGOLF2");
	TASK::REQUEST_WAYPOINT_RECORDING("NIGEL1DCRASH");
	STREAMING::REQUEST_ANIM_DICT("rcmnigel1d");
	STREAMING::REQUEST_ANIM_DICT("mini@golf");
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1D", 0);
	STREAMING::REQUEST_MODEL(joaat("caddy"));
	while (((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1d")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@golf")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DTRANS")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DGOLF2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("NIGEL1DCRASH")) || !STREAMING::HAS_MODEL_LOADED(joaat("caddy")))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256);
	uLocal_777 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
	PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
	uLocal_778 = PED::ADD_SCENARIO_BLOCKING_AREA(-1379.33f, 45.13f, 50.68f, -1368.01f, 69.83f, 55.9f, 0, 1, 1, 1);
	if (iLocal_779 == -1)
	{
		iLocal_779 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1375.08f, 55.55f, 52.93f, 4f, 6f, 4f, 355f, 0, 7);
	}
	GlobalFunc_9621(64, 2, 0);
	if (GlobalFunc_116(0))
	{
		GlobalFunc_6685(0);
	}
	GlobalFunc_500(&uLocal_830);
	GlobalFunc_499(&uLocal_830, -1313.714f, -27.2202f, 48.0314f);
	GlobalFunc_499(&uLocal_830, -1294.066f, -27.0136f, 47.5724f);
	GlobalFunc_499(&uLocal_830, -1069.844f, -143.769f, 39.7493f);
	GlobalFunc_499(&uLocal_830, -925.2529f, -89.9079f, 38.3457f);
	GlobalFunc_499(&uLocal_830, -1010.948f, 40.0643f, 49.9277f);
	GlobalFunc_499(&uLocal_830, -1122.838f, 233.7037f, 64.7587f);
	GlobalFunc_499(&uLocal_830, -1282.578f, 188.8798f, 59.2769f);
	GlobalFunc_499(&uLocal_830, -1328.153f, 192.0178f, 57.8136f);
	GlobalFunc_499(&uLocal_830, -1386.75f, 167.32f, 57.11f);
	GlobalFunc_499(&uLocal_830, -1411.5f, 109.64f, 51.49f);
	GlobalFunc_499(&uLocal_830, -1399.63f, -10.83f, 51.93f);
	GlobalFunc_499(&uLocal_830, -1359.54f, 18.93f, 52.52f);
	GlobalFunc_499(&uLocal_830, -1342.27f, 16.92f, 52.16f);
	GlobalFunc_498(&uLocal_830);
	GlobalFunc_5902(&uLocal_882, &uLocal_830, 100f);
	GlobalFunc_500(&uLocal_934);
	GlobalFunc_499(&uLocal_934, -1100.2f, 77.1233f, 53.2703f);
	GlobalFunc_499(&uLocal_934, -1040.69f, 97.3963f, 51.9067f);
	GlobalFunc_499(&uLocal_934, -977.9333f, -5.5166f, 45.6548f);
	GlobalFunc_499(&uLocal_934, -1039.687f, -35.872f, 45.4867f);
	GlobalFunc_499(&uLocal_934, -1062.19f, -2.8635f, 49.6013f);
	GlobalFunc_498(&uLocal_934);
	iLocal_172 = 1;
}










void func_492()//Position - 0x355EC
{
	Local_454.f_1 = { -1096.855f, 67.6858f, 52.952f };
	Local_454.f_7 = 112f;
	Local_454.f_8 = iLocal_780;
	Local_748.f_1 = { -1099.91f, 61.2608f, 52.8124f };
	Local_748.f_4 = 243f;
	Local_748.f_5 = joaat("caddy");
	Local_467.f_1 = { -1096.258f, 69.723f, 53.0107f };
	Local_467.f_7 = 163f;
	Local_467.f_8 = joaat("a_m_y_golfer_01");
	Local_824.f_1 = { Local_467.f_1 };
	Local_824.f_5 = joaat("prop_golf_wood_01");
	Local_693[0 /*6*/].f_1 = { -1370.192f, 61.6015f, 52.4847f };
	Local_693[0 /*6*/].f_4 = 206f;
	Local_693[0 /*6*/].f_5 = joaat("caddy");
	Local_693[1 /*6*/].f_1 = { -1373.868f, 65.9104f, 52.5826f };
	Local_693[1 /*6*/].f_4 = 224f;
	Local_693[1 /*6*/].f_5 = joaat("caddy");
	Local_693[2 /*6*/].f_1 = { -1302.413f, -6.6432f, 48.8636f };
	Local_693[2 /*6*/].f_4 = 20f;
	Local_693[2 /*6*/].f_5 = joaat("caddy");
	Local_693[3 /*6*/].f_1 = { -1328.512f, 26.7404f, 52.4943f };
	Local_693[3 /*6*/].f_4 = 272f;
	Local_693[3 /*6*/].f_5 = joaat("caddy");
	Local_693[4 /*6*/].f_1 = { -1102.335f, 75.7757f, 53.2591f };
	Local_693[4 /*6*/].f_4 = 293f;
	Local_693[4 /*6*/].f_5 = joaat("caddy");
	Local_693[5 /*6*/].f_1 = { -1103.023f, 65.6267f, 53.056f };
	Local_693[5 /*6*/].f_4 = 203f;
	Local_693[5 /*6*/].f_5 = joaat("caddy");
	Local_693[6 /*6*/].f_1 = { -1356.7f, 145.34f, 55.67f };
	Local_693[6 /*6*/].f_4 = 187f;
	Local_693[6 /*6*/].f_5 = joaat("caddy");
	Local_693[7 /*6*/].f_1 = { -1158.52f, 68.38f, 55.97f };
	Local_693[7 /*6*/].f_4 = 226.84f;
	Local_693[7 /*6*/].f_5 = joaat("caddy");
	Local_693[8 /*6*/].f_1 = { -1165.397f, 72.9072f, 55.6258f };
	Local_693[8 /*6*/].f_4 = 238f;
	Local_693[8 /*6*/].f_5 = joaat("caddy");
	Local_767.f_1 = { -1191.22f, 36.83f, 52.03f };
	Local_767.f_4 = -77.1337f;
	Local_767.f_5 = joaat("caddy");
	Local_480[0 /*13*/].f_1 = { -1105.622f, 66.4609f, 53.07f };
	Local_480[0 /*13*/].f_7 = 118f;
	Local_480[0 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_480[1 /*13*/].f_1 = { -1090.09f, 64.3905f, 52.5607f };
	Local_480[1 /*13*/].f_7 = 238f;
	Local_480[1 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_480[2 /*13*/].f_1 = { -1093.736f, 73.8568f, 53.0388f };
	Local_480[2 /*13*/].f_7 = 319f;
	Local_480[2 /*13*/].f_8 = joaat("s_m_m_highsec_01");
	Local_520[0 /*13*/].f_1 = { -1298.49f, -23.89f, 47.99f };
	Local_520[0 /*13*/].f_7 = 126.55f;
	Local_520[0 /*13*/].f_4 = { -1314.059f, -35.6361f, 48.1836f };
	Local_520[0 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_520[1 /*13*/].f_1 = { -1344.505f, 18.8674f, 51.9921f };
	Local_520[1 /*13*/].f_7 = 205f;
	Local_520[1 /*13*/].f_4 = { -1344.4f, 18.11f, 52.19f };
	Local_520[1 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_520[2 /*13*/].f_1 = { -1376.71f, 140.2f, 55.25f };
	Local_520[2 /*13*/].f_7 = 99f;
	Local_520[2 /*13*/].f_4 = { -1375.577f, 131.1931f, 55.3238f };
	Local_520[2 /*13*/].f_8 = joaat("s_m_m_security_01");
	Local_401[0 /*13*/].f_1 = { -1377.18f, 55.39f, 53.7f };
	Local_401[0 /*13*/].f_7 = 101f;
	Local_401[0 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_401[1 /*13*/].f_1 = { -1369.305f, 52.1333f, 52.4768f };
	Local_401[1 /*13*/].f_7 = 20f;
	Local_401[1 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_401[2 /*13*/].f_1 = { -1366.581f, 54.04f, 52.4633f };
	Local_401[2 /*13*/].f_7 = 94f;
	Local_401[2 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_401[3 /*13*/].f_1 = { -1367.691f, 60.2214f, 52.4635f };
	Local_401[3 /*13*/].f_7 = 126f;
	Local_401[3 /*13*/].f_8 = joaat("s_m_y_valet_01");
	Local_560[0 /*13*/].f_1 = { -1161.109f, 72.2742f, 55.6518f };
	Local_560[0 /*13*/].f_7 = 328.424f;
	Local_560[0 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[0 /*13*/].f_12 = "idle_b";
	Local_560[1 /*13*/].f_1 = { -1159.803f, 71.7432f, 55.6988f };
	Local_560[1 /*13*/].f_7 = 344.2791f;
	Local_560[1 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[1 /*13*/].f_12 = "idle_c";
	Local_560[2 /*13*/].f_1 = { -1143.173f, 112.0022f, 58.1151f };
	Local_560[2 /*13*/].f_7 = 109f;
	Local_560[2 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[2 /*13*/].f_12 = "wood_idle_low_b";
	Local_560[3 /*13*/].f_1 = { -1157.17f, 79.4863f, 56.7109f };
	Local_560[3 /*13*/].f_7 = 159f;
	Local_560[3 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[3 /*13*/].f_12 = "wedge_idle_high_c";
	Local_560[4 /*13*/].f_1 = { -1060.173f, 79.7097f, 51.0781f };
	Local_560[4 /*13*/].f_7 = 222f;
	Local_560[4 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[4 /*13*/].f_12 = "wedge_idle_high_b";
	Local_560[5 /*13*/].f_1 = { -1025.151f, 8.619f, 48.7672f };
	Local_560[5 /*13*/].f_7 = 133f;
	Local_560[5 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_560[5 /*13*/].f_12 = "putt_idle_high_b";
	Local_787[0 /*6*/].f_1 = { Local_560[0 /*13*/].f_1 };
	Local_787[0 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_787[1 /*6*/].f_1 = { Local_560[1 /*13*/].f_1 };
	Local_787[1 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_787[2 /*6*/].f_1 = { Local_560[2 /*13*/].f_1 };
	Local_787[2 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_787[3 /*6*/].f_1 = { Local_560[3 /*13*/].f_1 };
	Local_787[3 /*6*/].f_5 = joaat("prop_golf_wood_01");
	Local_787[4 /*6*/].f_1 = { Local_560[4 /*13*/].f_1 };
	Local_787[4 /*6*/].f_5 = joaat("prop_golf_iron_01");
	Local_787[5 /*6*/].f_1 = { Local_560[5 /*13*/].f_1 };
	Local_787[5 /*6*/].f_5 = joaat("prop_golf_putter_01");
	Local_639[0 /*13*/].f_1 = { -1096.278f, -117.3159f, 40.537f };
	Local_639[0 /*13*/].f_4 = { -1095.01f, -56.45f, 43.83f };
	Local_639[0 /*13*/].f_7 = 343f;
	Local_639[0 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_639[1 /*13*/].f_1 = { -1115.548f, -104.4307f, 40.8407f };
	Local_639[1 /*13*/].f_4 = { -1139.619f, -114.8868f, 40.0996f };
	Local_639[1 /*13*/].f_7 = 45f;
	Local_639[1 /*13*/].f_8 = joaat("a_m_y_golfer_01");
	Local_754[0 /*6*/].f_1 = { -1100.818f, -103.591f, 40.874f };
	Local_754[0 /*6*/].f_4 = 99f;
	Local_754[0 /*6*/].f_5 = joaat("caddy");
	Local_754[1 /*6*/].f_1 = { -1114.088f, -97.6378f, 41.0175f };
	Local_754[1 /*6*/].f_4 = 233f;
	Local_754[1 /*6*/].f_5 = joaat("caddy");
}



int func_495(var uParam0, var uParam1)//Position - 0x35F0D
{
	int iVar0[7];
	char* sVar8;
	int iVar9;
	var uVar10;
	
	sVar8 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			GlobalFunc_500(uParam1);
			GlobalFunc_499(uParam1, -1313.714f, -27.2202f, 48.0314f);
			GlobalFunc_499(uParam1, -1294.066f, -27.0136f, 47.5724f);
			GlobalFunc_499(uParam1, -1069.844f, -143.769f, 39.7493f);
			GlobalFunc_499(uParam1, -925.2529f, -89.9079f, 38.3457f);
			GlobalFunc_499(uParam1, -1010.948f, 40.0643f, 49.9277f);
			GlobalFunc_499(uParam1, -1122.838f, 233.7037f, 64.7587f);
			GlobalFunc_499(uParam1, -1282.578f, 188.8798f, 59.2769f);
			GlobalFunc_499(uParam1, -1328.153f, 192.0178f, 57.8136f);
			GlobalFunc_499(uParam1, -1386.75f, 167.32f, 57.11f);
			GlobalFunc_499(uParam1, -1411.5f, 109.64f, 51.49f);
			GlobalFunc_499(uParam1, -1379.52f, 111.05f, 54.28f);
			GlobalFunc_499(uParam1, -1371.77f, 24.07f, 52.88f);
			GlobalFunc_499(uParam1, -1342.27f, 16.92f, 52.16f);
			GlobalFunc_498(uParam1);
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar9]);
				iVar9++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar8);
			iLocal_90 = 1;
			break;
		
		case 1:
			if ((!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			func_496(41, 1);
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, 1, 1);
			PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 1);
			uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], -1096.855f, 67.6858f, 52.952f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar10);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uVar10, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar10);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar10);
			TASK::CLEAR_SEQUENCE_TASK(&uVar10);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[4], -1096.258f, 69.723f, 53.0107f, 163f, 1, 1);
			TASK::TASK_PLAY_ANIM(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
			uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], -1096.258f, 69.723f, 53.0107f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_28[2] = PED::CREATE_PED(26, iVar0[0], -1105.622f, 66.4609f, 53.07f, 118f, 1, 1);
			uParam0->f_28[3] = PED::CREATE_PED(26, iVar0[0], -1090.09f, 64.3905f, 52.5607f, 238f, 1, 1);
			uParam0->f_28[4] = PED::CREATE_PED(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, 1, 1);
			iVar9 = 2;
			while (iVar9 <= 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar9], 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[iVar9], joaat("weapon_pistol"), -1, 0, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[iVar9], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[iVar9], 1);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[iVar9], 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_28[iVar9], 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				iVar9++;
			}
			uParam0->f_35[0] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_35[0], 1, 1);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_35[0], 1200);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[5], 1);
			uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[6], -1099.91f, 63.2608f, 52.8124f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_35[1] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1102.335f, 75.7757f, 53.2591f, 293f, 1, 1);
			uParam0->f_35[2] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1103.023f, 65.6267f, 53.056f, 203f, 1, 1);
			iVar9 = 1;
			while (iVar9 <= 2)
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[iVar9]);
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar9]);
				iVar9++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_496(int iParam0, bool bParam1)//Position - 0x364ED
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				uLocal_106 = GlobalFunc_4528();
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				GlobalFunc_4527();
				MISC::CLEAR_AREA_OF_PEDS(-1100.5f, 789.8f, 164.34f, 20f, 0);
				GlobalFunc_4526(0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				GlobalFunc_4526(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1, 1, 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				PED::SET_PED_NON_CREATION_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 1);
				MISC::CLEAR_AREA_OF_PEDS(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				MISC::CLEAR_AREA_OF_PEDS(-573.394f, 289.3696f, 79.06918f, 15f, 0);
				MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 1);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
				PED::CLEAR_PED_NON_CREATION_AREA();
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 0);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 1, 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				MISC::CLEAR_AREA(-1035.73f, 365.44f, 68.91f, 35f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1035.73f, 365.44f, 68.91f, 27f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 1, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f);
				MISC::CLEAR_AREA(-1096.855f, 67.6858f, 52.952f, 15f, 1, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
	}
}






void func_502(int iParam0)//Position - 0x36A45
{
	int iVar0;
	
	if (GlobalFunc_9162())
	{
	}
	func_233(iParam0);
	func_470();
	GlobalFunc_860();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1D_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_1D_SCENE");
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_2297(&(Local_401[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_2297(&(Local_520[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		GlobalFunc_2297(&(Local_480[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		GlobalFunc_2297(&(Local_560[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_2297(&(Local_639[iVar0 /*13*/]), 1, 0, 1);
		iVar0++;
	}
	GlobalFunc_2297(&Local_467, 1, 0, 1);
	GlobalFunc_2297(&Local_454, 1, 0, 1);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		GlobalFunc_131(&(Local_693[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_131(&(Local_754[iVar0 /*6*/]));
		iVar0++;
	}
	GlobalFunc_131(&Local_748);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		GlobalFunc_129(&(Local_787[iVar0 /*6*/]), 0);
		iVar0++;
	}
	GlobalFunc_7621(188, 1, 0, 1, 0);
	Global_33157 = 1;
	SYSTEM::WAIT(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_777, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_778, 0);
	if (iLocal_779 > -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_779);
	}
	STREAMING::REMOVE_ANIM_DICT("rcmnigel1d");
	STREAMING::REMOVE_ANIM_DICT("mini@golf");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_503(&Local_107, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_503(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x36BE2
{
	GlobalFunc_7246(uParam0, iParam1);
	GlobalFunc_8620(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}































