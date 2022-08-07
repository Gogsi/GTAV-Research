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
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<3> Local_120 = { 0, 0, 0 } ;
	int iLocal_123 = 0;
	struct<3> Local_124[5];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149[5] = { 0, 0, 0, 0, 0 };
	float fLocal_155 = 0f;
	int iLocal_156 = 0;
	bool bLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 16;
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
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	struct<100> Local_328 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	bLocal_117 = true;
	iLocal_118 = 6;
	iLocal_119 = 18;
	iLocal_123 = -1;
	bLocal_157 = true;
	iLocal_158 = 1;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	iLocal_85 = iLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_145(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_137();
	MISC::_0x6F2135B6129620C1(1);
	if (GlobalFunc_747(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30778)
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_747(uLocal_93, 8))
	{
		if (!GlobalFunc_4938(iLocal_99))
		{
			if (GlobalFunc_892(0, iLocal_98))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			bLocal_117 = false;
		}
	}
	if (GlobalFunc_747(uLocal_93, 8388608))
	{
		func_145(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_145(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_129(10);
	}
	while (true)
	{
		if (!GlobalFunc_747(uLocal_93, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_0.f_1[0 /*3*/], &fVar1))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					GlobalFunc_812(&uLocal_93, 268435456);
				}
			}
		}
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_145(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
		{
			Local_86 = { ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) };
			fLocal_92 = SYSTEM::VDIST2(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = SYSTEM::VDIST2(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (GlobalFunc_4938(iLocal_99) || (GlobalFunc_747(uLocal_93, 16) && !GlobalFunc_747(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_129(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_92 > ((fLocal_116 * 1.5f) * (fLocal_116 * 1.5f)))
					{
						iLocal_102 = iLocal_102;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_145(1);
						return;
					}
					if (!GlobalFunc_4938(iLocal_99))
					{
						if (!GlobalFunc_747(uLocal_93, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_Mission_Fail_State.Failed_Script_Name), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!GlobalFunc_747(uLocal_93, 4))
					{
						func_111();
						GlobalFunc_812(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89996)
					{
						if (iLocal_104 != 262)
						{
							if (GlobalFunc_39(6) && !GlobalFunc_474(iLocal_104))
							{
							}
							else
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_129(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar3 = !GlobalFunc_747(uLocal_93, 64);
						GlobalFunc_5312(&uLocal_93, 128);
						if (!GlobalFunc_9670(3) && !Global_89996)
						{
							if (GlobalFunc_747(uLocal_93, 2097152))
							{
								if ((!GlobalFunc_747(uLocal_93, 1) || !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) && !Global_89996)
								{
									func_129(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_145(1);
						}
						if (GlobalFunc_4522())
						{
							func_145(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar3 = false;
						}
						if (!bLocal_117)
						{
							GlobalFunc_5211(&uLocal_93, 128);
							bVar3 = false;
						}
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (!GlobalFunc_82())
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar3 = false;
							}
						}
						if (GlobalFunc_126(1))
						{
							bVar3 = false;
						}
						if (Global_68245)
						{
							bVar3 = false;
						}
						if (GlobalFunc_488())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (GlobalFunc_160() || GlobalFunc_153(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar3 = false;
							}
							iVar4 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar4 < iLocal_118 && iVar4 >= iLocal_119)
								{
									GlobalFunc_5211(&uLocal_93, 128);
									bVar3 = false;
									if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
									{
										if (!GlobalFunc_747(uLocal_93, 134217728))
										{
											GlobalFunc_4306("MG_NA_TIME", iLocal_118, iLocal_119);
											GlobalFunc_5211(&uLocal_93, 134217728);
										}
									}
									else
									{
										GlobalFunc_5312(&uLocal_93, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_118 || iVar4 >= iLocal_119)
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar3 = false;
								if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
								{
									if (!GlobalFunc_747(uLocal_93, 134217728))
									{
										GlobalFunc_4306("MG_NA_TIME", iLocal_118, iLocal_119);
										GlobalFunc_5211(&uLocal_93, 134217728);
									}
								}
								else
								{
									GlobalFunc_5312(&uLocal_93, 134217728);
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_86(iLocal_85))
								{
									if (iLocal_95 == -1)
									{
										GlobalFunc_6774(&iLocal_95, 4, sLocal_100, 0, 0);
										GlobalFunc_5211(&uLocal_93, 2048);
									}
									else if (!GlobalFunc_747(uLocal_93, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
									}
									if (GlobalFunc_5079(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_68);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_68);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_95 != -1)
							{
								GlobalFunc_5084(&iLocal_95);
								GlobalFunc_5312(&uLocal_93, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							GlobalFunc_5084(&iLocal_95);
						}
						iVar5 = 2;
						bVar0 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_85);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							GlobalFunc_872();
							if (Global_35957)
							{
								GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_51 = func_36();
							GlobalFunc_5211(&uLocal_93, 2);
							func_129(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							GlobalFunc_587();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 6:
					if (GlobalFunc_747(Global_96007, 262144))
					{
						GlobalFunc_5312(&Global_96007, 262144);
						func_27();
					}
					if (GlobalFunc_747(uLocal_93, 2097152))
					{
						if (!GlobalFunc_9670(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
						{
							func_129(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_106) * 1000f)), iLocal_98, 0);
						GlobalFunc_235(&uLocal_106);
						GlobalFunc_5312(&uLocal_93, 256);
						GlobalFunc_51();
						if (bVar0)
						{
							GlobalFunc_5312(&uLocal_93, 2);
						}
						else if (GlobalFunc_747(uLocal_93, 2))
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
							else
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
						}
						func_129(0);
						if (iLocal_98 != -1)
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_Current_Checkpoint, 0, 0);
							}
						}
						func_5();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_145(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_145(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						GlobalFunc_2436(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						GlobalFunc_5084(&iLocal_95);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_100))
					{
						if (GlobalFunc_74(sLocal_100))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (GlobalFunc_4938(iLocal_99) && GlobalFunc_892(0, iLocal_98))
									{
										func_137();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_129(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0xB45
{
	char* sVar0;
	
	GlobalFunc_2285(&(Local_328.f_71));
	GlobalFunc_2285(&(Local_328.f_77));
	GlobalFunc_2285(&(Local_328.f_99));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REMOVE_ANIM_DICT("random@street_race");
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	switch (iLocal_123)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, 0);
			}
		}
	}
}



void func_5()//Position - 0xC53
{
	if (GlobalFunc_747(Global_SAVE_DATA.OFFROAD_iBitflags, 1))
	{
		GlobalFunc_5312(&(Global_SAVE_DATA.OFFROAD_iBitflags), 1);
		func_18();
		func_8();
		GlobalFunc_4907();
	}
}



void func_8()//Position - 0xCF9
{
	if (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned < Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[iLocal_123] || Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[iLocal_123] == 0)
	{
		Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iBestPlaces[iLocal_123] = Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned;
		Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned = 999;
	}
	if (iLocal_123 == Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace || Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace == -1)
	{
		if (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace != 5)
		{
			Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace++;
			switch (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace)
			{
				case 1:
					GlobalFunc_2436(69, 1, 0);
					GlobalFunc_2416(69, 1);
					GlobalFunc_2436(70, 1, 0);
					break;
				
				case 2:
					GlobalFunc_2436(69, 1, 0);
					GlobalFunc_2416(69, 1);
					GlobalFunc_2436(70, 1, 0);
					GlobalFunc_2416(70, 1);
					GlobalFunc_2436(71, 1, 0);
					break;
				
				case 3:
					GlobalFunc_2436(69, 1, 0);
					GlobalFunc_2416(69, 1);
					GlobalFunc_2436(70, 1, 0);
					GlobalFunc_2416(70, 1);
					GlobalFunc_2436(71, 1, 0);
					GlobalFunc_2416(71, 1);
					GlobalFunc_2436(72, 1, 0);
					break;
				
				case 4:
					GlobalFunc_2436(69, 1, 0);
					GlobalFunc_2416(69, 1);
					GlobalFunc_2436(70, 1, 0);
					GlobalFunc_2416(70, 1);
					GlobalFunc_2436(71, 1, 0);
					GlobalFunc_2416(71, 1);
					GlobalFunc_2436(72, 1, 0);
					GlobalFunc_2416(72, 1);
					GlobalFunc_2436(73, 1, 0);
					break;
				
				case 5:
					GlobalFunc_2436(69, 1, 0);
					GlobalFunc_2416(69, 1);
					GlobalFunc_2436(70, 1, 0);
					GlobalFunc_2416(70, 1);
					GlobalFunc_2436(71, 1, 0);
					GlobalFunc_2416(71, 1);
					GlobalFunc_2436(72, 1, 0);
					GlobalFunc_2416(72, 1);
					GlobalFunc_2436(73, 1, 0);
					GlobalFunc_2416(73, 1);
					GlobalFunc_2436(74, 1, 0);
					break;
			}
			GlobalFunc_6677("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			GlobalFunc_2436(69, 1, 0);
			GlobalFunc_2416(69, 1);
			GlobalFunc_2436(70, 1, 0);
			GlobalFunc_2416(70, 1);
			GlobalFunc_2436(72, 1, 0);
			GlobalFunc_2416(72, 1);
			GlobalFunc_2436(73, 1, 0);
			GlobalFunc_2416(73, 1);
			GlobalFunc_2436(74, 1, 0);
			GlobalFunc_2416(74, 1);
			GlobalFunc_2436(71, 1, 0);
			GlobalFunc_2416(71, 1);
		}
		switch (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace)
		{
			case 0:
				GlobalFunc_5773(69);
				GlobalFunc_5774(70);
				break;
			
			case 1:
				GlobalFunc_5773(70);
				GlobalFunc_5774(71);
				break;
			
			case 2:
				GlobalFunc_5773(71);
				GlobalFunc_5774(72);
				break;
			
			case 3:
				GlobalFunc_5773(72);
				GlobalFunc_5774(73);
				break;
			
			case 4:
				GlobalFunc_5773(73);
				GlobalFunc_5774(74);
				break;
			
			case 5:
				GlobalFunc_5773(74);
				break;
			}
	}
}










void func_18()//Position - 0x155F
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	switch (iLocal_123)
	{
		case 0:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}









int func_27()//Position - 0x17F2
{
	func_8();
	return 1;
}









var func_36()//Position - 0x1A6B
{
	struct<18> Var0;
	int iVar18;
	var uVar19;
	
	HUD::CLEAR_HELP(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_123;
	Var0.f_1 = { Local_120 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_328[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_328[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_328.f_83;
	Var0.f_17 = Local_328.f_83.f_1;
	GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneNeutral", 0, 1);
	SYSTEM::WAIT(400);
	uVar19 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_52, &Var0, 18, iLocal_96);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
	return uVar19;
}














void func_50()//Position - 0x1FA6
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_120);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_158)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_158 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_159)
	{
		if (func_52())
		{
			iLocal_159 = 1;
			func_51();
		}
	}
}

void func_51()//Position - 0x200E
{
	iLocal_47++;
}

int func_52()//Position - 0x201C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_328[iVar0 /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_328[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_328.f_83) || !ENTITY::DOES_ENTITY_EXIST(Local_328.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()//Position - 0x2084
{
	switch (iLocal_123)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()//Position - 0x20C6
{
	int iVar0;
	char* sVar1;
	
	if (!GlobalFunc_226(&uLocal_146))
	{
		GlobalFunc_7777(&uLocal_146);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_156) && !ENTITY::IS_ENTITY_DEAD(iLocal_156))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_156))
		{
			return;
		}
	}
	if (GlobalFunc_5182(&uLocal_146) >= 8f)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_328[(iVar0 - 1) /*14*/]))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			GlobalFunc_10641(&uLocal_162, "ORRAUD", sVar1, 3, 0, 0, 0);
			GlobalFunc_6877(&uLocal_146);
		}
	}
}
















void func_70()//Position - 0x295E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_328.f_83))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 <= iLocal_118 && iVar0 >= iLocal_119)
		{
			iLocal_158 = 0;
			return;
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_328.f_83, 0f, 0f, 0.75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()//Position - 0x29B9
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= iLocal_118 && iVar0 >= iLocal_119)
	{
		iLocal_327 = 0;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_156) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_327)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_156, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 64f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_160 = 0;
					iLocal_161 = 0;
					iLocal_327 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_156, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				iLocal_327 = 2;
				break;
			
			case 2:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_156, 242628503) != 1 || PED::IS_PED_FACING_PED(iLocal_156, PLAYER::PLAYER_PED_ID(), 20f)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_156, PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_161)
					{
						GlobalFunc_5653(iLocal_156, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						GlobalFunc_5653(iLocal_156, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_327 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_156))
				{
					GlobalFunc_6877(&uLocal_143);
					TASK::TASK_PLAY_ANIM(iLocal_156, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_327 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_156, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_328.f_83.f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_156, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					iLocal_327 = 0;
				}
				if (GlobalFunc_226(&uLocal_143))
				{
					if (GlobalFunc_5182(&uLocal_143) >= 5f && !iLocal_160)
					{
						iLocal_160 = 1;
						iLocal_327 = 1;
					}
					else if (GlobalFunc_5182(&uLocal_143) >= 10f && !iLocal_161)
					{
						iLocal_161 = 1;
						iLocal_327 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}



void func_74()//Position - 0x2DF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_328[iVar2 /*14*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_328[iVar2 /*14*/]))
		{
			if (func_79(Local_328[iVar2 /*14*/], 1, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_328[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_104);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_328[iVar2 /*14*/]))
			{
				if (GlobalFunc_226(&(Local_124[iVar2 /*3*/])))
				{
					if (GlobalFunc_5182(&(Local_124[iVar2 /*3*/])) > uLocal_149[iVar2])
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_328[iVar2 /*14*/].f_1, 0) && PED::IS_PED_IN_VEHICLE(Local_328[iVar2 /*14*/], Local_328[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							TASK::OPEN_SEQUENCE_TASK(&uVar3);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_328[iVar2 /*14*/].f_1, 1, iVar0);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_328[iVar2 /*14*/].f_1, 31, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(uVar3);
							if (!PED::IS_PED_INJURED(Local_328[iVar2 /*14*/]))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar2 /*14*/], uVar3);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						}
						GlobalFunc_6877(&(Local_124[iVar2 /*3*/]));
						uLocal_149[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
					}
				}
				else
				{
					GlobalFunc_7777(&(Local_124[iVar2 /*3*/]));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_328[iVar2 /*14*/]))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328[iVar2 /*14*/]) && !PED::IS_PED_RAGDOLL(Local_328[iVar2 /*14*/])) && !TASK::IS_PED_GETTING_UP(Local_328[iVar2 /*14*/]))
				{
					Local_328[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_328[iVar2 /*14*/].f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_ACHIEVE_HEADING(0, Local_328[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_328[iVar2 /*14*/].f_12, Local_328[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar2 /*14*/], uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					Local_328[iVar2 /*14*/].f_11 = 0;
				}
				if (PED::IS_PED_RAGDOLL(Local_328[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_328[iVar2 /*14*/]))
				{
					if (!Local_328[iVar2 /*14*/].f_10 && (PED::IS_PED_RAGDOLL(Local_328[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_328[iVar2 /*14*/])))
					{
						Local_328.f_101++;
					}
					Local_328[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_328[iVar2 /*14*/].f_10)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_ACHIEVE_HEADING(0, Local_328[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_328[iVar2 /*14*/].f_12, Local_328[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar2 /*14*/], uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					Local_328[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_328.f_83.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_328.f_83))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_328.f_83.f_1, 0))
		{
			iLocal_85 = Local_328.f_83.f_1;
		}
		if (func_79(Local_328.f_83, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_104);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
		if (!PED::IS_PED_INJURED(Local_328.f_83))
		{
			if (GlobalFunc_226(&uLocal_140))
			{
				if (GlobalFunc_5182(&uLocal_140) > fLocal_155)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_328.f_83.f_1, 0) && PED::IS_PED_IN_VEHICLE(Local_328.f_83, Local_328.f_83.f_1, 0))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_328.f_83.f_1, 1, iVar0);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_328.f_83.f_1, 31, iVar1);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						if (!PED::IS_PED_INJURED(Local_328.f_83))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_328.f_83, uVar3);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					}
					GlobalFunc_6877(&uLocal_140);
					fLocal_155 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
				}
			}
			else
			{
				GlobalFunc_7777(&uLocal_140);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_328.f_83))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_328.f_83) && !PED::IS_PED_RAGDOLL(Local_328.f_83)) && !TASK::IS_PED_GETTING_UP(Local_328.f_83))
			{
				Local_328.f_83.f_11 = 1;
			}
			else if (Local_328.f_83.f_11)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_ACHIEVE_HEADING(0, Local_328.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_328.f_83, uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				Local_328.f_83.f_11 = 0;
			}
			if (PED::IS_PED_RAGDOLL(Local_328.f_83) || TASK::IS_PED_GETTING_UP(Local_328.f_83))
			{
				if (!Local_328.f_83.f_10)
				{
					Local_328.f_101++;
				}
				Local_328.f_83.f_10 = 1;
			}
			else if (Local_328.f_83.f_10)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_ACHIEVE_HEADING(0, Local_328.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_328.f_83.f_12, Local_328.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_328.f_83, uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				iLocal_327 = 4;
				GlobalFunc_6877(&uLocal_143);
				Local_328.f_83.f_10 = 0;
			}
		}
	}
}

char* func_75()//Position - 0x338C
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)//Position - 0x33C8
{
	if (iLocal_94 < 5)
	{
		if (iParam0 != 262)
		{
			GlobalFunc_2436(iParam0, 0, 0);
		}
		iLocal_104 = 262;
		GlobalFunc_5084(&iLocal_95);
		iLocal_94 = 9;
	}
}

void func_77()//Position - 0x33F5
{
	int iVar0[10];
	var uVar11;
	int iVar12;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar12]) && !PED::IS_PED_INJURED(iVar0[iVar12]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0[iVar12], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar11);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(300, 900));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar11);
				TASK::TASK_PERFORM_SEQUENCE(iVar0[iVar12], uVar11);
				TASK::CLEAR_SEQUENCE_TASK(&uVar11);
			}
		}
		iVar12++;
	}
	switch (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)//Position - 0x3505
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3526
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (Local_328.f_101 >= 3)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (bParam1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_FLEEING(iParam0))
			{
				return 1;
			}
			if (WEAPON::IS_PED_ARMED(iVar0, 4))
			{
				if (PED::IS_PED_SHOOTING(iVar0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 45f, 45f, 45f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			if (MISC::IS_BULLET_IN_AREA(Var1, 4f, 1))
			{
				return 1;
			}
			if (MISC::IS_PROJECTILE_IN_AREA((Var1.x - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.x + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), 0))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 25f)) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 25f))
			{
				return 1;
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(var uParam0, int iParam1)//Position - 0x36E0
{
	return func_81(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0, iParam1);
}

var func_81(int iParam0, int iParam1, var uParam2)//Position - 0x36F8
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, uParam2);
}





int func_86(int iParam0)//Position - 0x39A9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

























void func_111()//Position - 0x44CD
{
	int iVar0;
	char* sVar1;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if ((iVar0 <= iLocal_118 && iVar0 >= iLocal_119) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (bLocal_157)
	{
		func_121();
		func_120();
		switch (iLocal_123)
		{
			case 0:
				func_119(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_119(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_119(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_119(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_119(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_118(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_119(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_119(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_119(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_119(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_118(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_119(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_119(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_119(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_119(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_119(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_118(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_119(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_119(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_119(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_119(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_118(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_119(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_119(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_119(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_119(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_119(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_118(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_119(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_119(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_119(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_119(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_119(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_118(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_123)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar1))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar1))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED(sVar1, 1);
				}
			}
		}
	}
	func_112();
}

void func_112()//Position - 0x4BB0
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_109 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_328)
		{
			if (!GlobalFunc_105(Local_328[iVar5 /*14*/].f_2))
			{
				Local_328[iVar5 /*14*/].f_1 = VEHICLE::CREATE_VEHICLE(func_116(0), Local_328[iVar5 /*14*/].f_2, Local_328[iVar5 /*14*/].f_5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_328[iVar5 /*14*/].f_1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_328[iVar5 /*14*/].f_1, 1);
				if (GlobalFunc_105(Local_328[iVar5 /*14*/].f_6))
				{
					Local_328[iVar5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_328[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_328[iVar5 /*14*/].f_1, 1, 0);
				}
				else
				{
					Local_328[iVar5 /*14*/] = PED::CREATE_PED(4, func_115(), Local_328[iVar5 /*14*/].f_6, Local_328[iVar5 /*14*/].f_9, 1, 1);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_328[iVar5 /*14*/].f_12 = sVar3;
					Local_328[iVar5 /*14*/].f_13 = sVar4;
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
					TASK::TASK_PLAY_ANIM(0, sVar3, sVar4, 8f, -8f, -1, 8193, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar5 /*14*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				PED::SET_PED_HELMET(Local_328[iVar5 /*14*/], 1);
				PED::GIVE_PED_HELMET(Local_328[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_328.f_83.f_1 = VEHICLE::CREATE_VEHICLE(func_116(1), Local_328.f_83.f_2, Local_328.f_83.f_5, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_328.f_83.f_1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_328.f_83.f_1, 1);
		if (GlobalFunc_105(Local_328.f_83.f_6))
		{
			Local_328.f_83 = PED::CREATE_PED_INSIDE_VEHICLE(Local_328.f_83.f_1, 4, func_115(), -1, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_328.f_83.f_1, 1, 0);
		}
		else
		{
			Local_328.f_83 = PED::CREATE_PED(4, func_115(), Local_328.f_83.f_6, Local_328.f_83.f_9, 1, 1);
			iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_328.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_328.f_83.f_13 = sVar4;
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_STAND_STILL(0, GlobalFunc_254((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 1000), 1, 1000));
			TASK::TASK_PLAY_ANIM(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_328.f_83, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	else if (fLocal_109 < 225f)
	{
	}
	iLocal_156 = Local_328.f_83;
	if (!ENTITY::IS_ENTITY_DEAD(Local_328[0 /*14*/]))
	{
		GlobalFunc_1286(&uLocal_162, 1, Local_328[0 /*14*/], "MALE1", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_328[1 /*14*/]))
	{
		GlobalFunc_1286(&uLocal_162, 2, Local_328[1 /*14*/], "MALE2", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_328[2 /*14*/]))
	{
		GlobalFunc_1286(&uLocal_162, 3, Local_328[3 /*14*/], "MALE3", 0, 1);
	}
	if (!GlobalFunc_226(&uLocal_146))
	{
		GlobalFunc_7777(&uLocal_146);
	}
	else
	{
		GlobalFunc_6877(&uLocal_146);
	}
}



int func_115()//Position - 0x5030
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)//Position - 0x503D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_328.f_71)
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Local_328.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_123 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (Local_328.f_71[iVar0] == 0)
	{
		if (Local_328.f_71[0] == 0)
		{
			switch (iLocal_123)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_328.f_71[0];
		}
	}
	return Local_328.f_71[iVar0];
}


void func_118(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x5159
{
	if (GlobalFunc_105(Local_328.f_83.f_2))
	{
		Local_328.f_83.f_2 = { Param0 };
		Local_328.f_83.f_5 = fParam3;
		Local_328.f_83.f_6 = { Param4 };
		Local_328.f_83.f_9 = fParam7;
	}
}

void func_119(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x519D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_328)
	{
		if (!bVar1 && GlobalFunc_105(Local_328[iVar0 /*14*/].f_2))
		{
			Local_328[iVar0 /*14*/].f_2 = { Param0 };
			Local_328[iVar0 /*14*/].f_5 = fParam3;
			Local_328[iVar0 /*14*/].f_6 = { Param4 };
			Local_328[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()//Position - 0x5218
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_328)
	{
		Local_328[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_328[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_328.f_83.f_2 = { 0f, 0f, 0f };
	Local_328.f_83.f_5 = 0f;
}

void func_121()//Position - 0x5263
{
	switch (iLocal_123)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 1, 0, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0, 0, 0, 0, 0);
			break;
	}
}

var func_122()//Position - 0x5497
{
	return ((((((((GlobalFunc_1089(&(Local_328.f_71)) && GlobalFunc_1089(&(Local_328.f_77))) && GlobalFunc_1089(&(Local_328.f_99))) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_c@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_aa_smoke@male@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("random@street_race")) && STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"));
}


void func_124()//Position - 0x5553
{
	char cVar0[64];
	
	GlobalFunc_5303(&(Local_328.f_77), joaat("a_m_y_motox_01"));
	GlobalFunc_5303(&(Local_328.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_123)
	{
		case 0:
			GlobalFunc_5303(&(Local_328.f_71), joaat("sanchez"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 1:
			GlobalFunc_5303(&(Local_328.f_71), joaat("mesa"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("bjxl"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("patriot"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("dubsta2"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			GlobalFunc_5303(&(Local_328.f_71), joaat("sanchez"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 4:
			GlobalFunc_5303(&(Local_328.f_71), joaat("sanchez"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("blazer"));
			break;
		
		case 5:
			GlobalFunc_5303(&(Local_328.f_71), joaat("mesa"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("bfinjection"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("bjxl"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("sadler"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("rebel"));
			break;
		
		case 2:
			GlobalFunc_5303(&(Local_328.f_71), joaat("sanchez"));
			GlobalFunc_5303(&(Local_328.f_71), joaat("blazer"));
			break;
	}
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("random@street_race");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	if (iLocal_123 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_123)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar0);
	GlobalFunc_1090(&(Local_328.f_77));
	GlobalFunc_1090(&(Local_328.f_71));
	GlobalFunc_1090(&(Local_328.f_99));
}





void func_129(int iParam0)//Position - 0x585D
{
	iLocal_94 = iParam0;
}








void func_137()//Position - 0x5C03
{
	StringCopy(&Local_52, "Offroad_Races", 64);
	MISC::_0x6F2135B6129620C1(1);
	fLocal_116 = (6f + 4f);
	iLocal_98 = 4;
	GlobalFunc_5211(&uLocal_93, 4194304);
	iLocal_96 = 17000;
	iLocal_85 = 0;
	iLocal_118 = 0;
	iLocal_119 = 25;
	iLocal_102 = 0;
	iLocal_123 = func_141(Local_89, &Local_120);
	iLocal_104 = func_140(iLocal_123);
	fLocal_101 = (SYSTEM::TO_FLOAT(GlobalFunc_4523(iLocal_104)) + 5f);
	if (GlobalFunc_892(0, iLocal_98))
	{
		bLocal_157 = true;
	}
	else
	{
		func_76(iLocal_104);
		bLocal_157 = false;
	}
	if (iLocal_123 > Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_eCurrentRace)
	{
		if (GlobalFunc_474(func_140(iLocal_123)))
		{
		}
		iLocal_104 = 262;
		func_76(iLocal_104);
	}
	if (!GlobalFunc_474(func_140(iLocal_123)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (func_138(iLocal_104, 1))
		{
			iLocal_104 = 262;
		}
		func_76(iLocal_104);
	}
	if (iLocal_123 == 2)
	{
		iLocal_118 = 20;
		iLocal_119 = 3;
	}
	if (iLocal_123 == 1 || iLocal_123 == 5)
	{
		sLocal_100 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_100 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)//Position - 0x5CF6
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (bParam1)
	{
		return MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 15);
	}
	return MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 0);
}


int func_140(int iParam0)//Position - 0x5E62
{
	switch (iParam0)
	{
		case 0:
			return 69;
		
		case 1:
			return 70;
		
		case 3:
			return 72;
		
		case 4:
			return 73;
		
		case 5:
			return 74;
		
		case 2:
			return 71;
		
		default:
	}
	return 262;
}

int func_141(struct<3> Param0, var uParam3)//Position - 0x5EB6
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_142(0) };
	Var1[1 /*3*/] = { func_142(1) };
	Var1[3 /*3*/] = { func_142(3) };
	Var1[4 /*3*/] = { func_142(4) };
	Var1[5 /*3*/] = { func_142(5) };
	Var1[2 /*3*/] = { func_142(2) };
	Var1[6 /*3*/] = { func_142(6) };
	fVar23 = SYSTEM::VDIST2(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = SYSTEM::VDIST2(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)//Position - 0x5F75
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}



void func_145(bool bParam0)//Position - 0x6053
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 0, 0);
		}
	}
	GlobalFunc_5084(&iLocal_95);
	if (GlobalFunc_747(uLocal_93, 2))
	{
		func_5();
		GlobalFunc_5312(&uLocal_93, 2);
		GlobalFunc_1997(&iLocal_97);
	}
	iLocal_97 = -1;
	func_146();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_146()//Position - 0x609C
{
	GlobalFunc_5312(&uLocal_93, 4);
	GlobalFunc_587();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_51, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_68))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_68) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_68);
		}
	}
}


