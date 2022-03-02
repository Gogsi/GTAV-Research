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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	var uLocal_92 = 0;
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
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 16;
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
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
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
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_137(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_129();
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
				func_137(0);
			}
			else
			{
				func_137(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			func_137(1);
		}
	}
	if (GlobalFunc_747(uLocal_93, 8388608))
	{
		func_137(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_137(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_121(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_137(1);
		}
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_137(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
		{
			Local_86 = { ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) };
			uLocal_92 = SYSTEM::VDIST2(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			uLocal_92 = uLocal_92;
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
						func_117();
						func_121(1);
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
							func_121(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_115())
					{
						iLocal_102 = iLocal_102;
						func_121(3);
					}
					else
					{
						func_117();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_137(1);
						return;
					}
					if (!GlobalFunc_4938(iLocal_99))
					{
						if (!GlobalFunc_747(uLocal_93, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_137(0);
								break;
							}
						}
					}
					if (!GlobalFunc_747(uLocal_93, 4))
					{
						func_112();
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
						func_121(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar2 = !GlobalFunc_747(uLocal_93, 64);
						GlobalFunc_5312(&uLocal_93, 128);
						if (!GlobalFunc_9670(3) && !Global_89996)
						{
							if (GlobalFunc_747(uLocal_93, 2097152))
							{
								if ((!GlobalFunc_747(uLocal_93, 1) || !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) && !Global_89996)
								{
									func_121(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_137(1);
						}
						if (GlobalFunc_4522())
						{
							func_137(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar2 = false;
						}
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (!GlobalFunc_82())
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (GlobalFunc_126(1))
						{
							bVar2 = false;
						}
						if (Global_68245)
						{
							bVar2 = false;
						}
						if (GlobalFunc_488())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (GlobalFunc_160() || GlobalFunc_153(8, -1))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (GlobalFunc_82(uLocal_85))
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
										func_121(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_68);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_121(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								GlobalFunc_5084(&iLocal_95);
								GlobalFunc_5312(&uLocal_93, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_80();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							GlobalFunc_5084(&iLocal_95);
						}
						iVar3 = 2;
						bVar0 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar3 == 1)
						{
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
							uLocal_51 = func_24();
							GlobalFunc_5211(&uLocal_93, 2);
							func_121(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							GlobalFunc_587();
						}
						else if (iVar3 == 0)
						{
							func_121(10);
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
						GlobalFunc_82();
					}
					if (GlobalFunc_747(uLocal_93, 2097152))
					{
						if (!GlobalFunc_9670(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
						{
							func_121(10);
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
						func_121(0);
						if (iLocal_98 != -1)
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0, 0);
							}
						}
						GlobalFunc_587();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_137(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_137(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_121(0);
					break;
				
				case 10:
					func_137(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_121(10);
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
					func_121(4);
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
										func_129();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_121(0);
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
									func_121(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_129();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_121(0);
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


void func_2()//Position - 0x9F7
{
	GlobalFunc_2285(&uLocal_117);
	GlobalFunc_2285(&uLocal_119);
	STREAMING::REMOVE_ANIM_DICT("pickup_object");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@basejump@ig_15");
}






















var func_24()//Position - 0xE61
{
	var uVar0;
	
	Global_SAVE_DATA.BJ_iLaunchRank = iLocal_121;
	switch (iLocal_121)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
	uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_52, &Local_122, 170, iLocal_96);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
	return uVar0;
}

void func_25(bool bParam0)//Position - 0xED7
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_66(iLocal_121) };
	Var12 = { GlobalFunc_107(SYSTEM::COS(Var12.f_2), SYSTEM::SIN(Var12.f_2), MISC::TAN(Var12.x)) };
	STREAMING::NEW_LOAD_SCENE_START(func_64(iLocal_121), Var12, 5000f, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
	HUD::DISPLAY_HUD(0);
	HUD::DISPLAY_RADAR(0);
	GlobalFunc_7632(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
		{
			TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			while (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iLocal_296, 0) };
			Var6.f_2 = 0f;
			fVar15 = SYSTEM::VMAG(Var6);
			TASK::OPEN_SEQUENCE_TASK(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_296, 0) + Var6 };
				if (iLocal_121 == 12)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9, 1f, 20000, 1048576000, 0, GlobalFunc_830(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_296, 0)));
				}
				else
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var9, 1f, -1, GlobalFunc_830(Var9, ENTITY::GET_ENTITY_COORDS(iLocal_296, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				TASK::TASK_ACHIEVE_HEADING(0, GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_296, 0)), 0);
			}
			TASK::TASK_PLAY_ANIM(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar3);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar3);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar3);
			GlobalFunc_7632(1);
		}
	}
	GlobalFunc_7777(&uLocal_292);
	while ((GlobalFunc_5182(&uLocal_292) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
	{
		ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((GlobalFunc_5182(&uLocal_292) < 6f && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low") < 0.22f)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!bVar16 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
	GlobalFunc_235(&uLocal_292);
	func_40();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_8329() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (GlobalFunc_8329() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (GlobalFunc_8329() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!GlobalFunc_105(func_34(iLocal_121)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_34(iLocal_121), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
		{
			OBJECT::DELETE_OBJECT(&iLocal_296);
		}
		uVar4 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_32(iLocal_121), func_31(iLocal_121), func_30(iLocal_121), 1, 2);
		uVar5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_29(iLocal_121), func_28(iLocal_121), func_27(iLocal_121), 0, 2);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.2f);
		GlobalFunc_7777(&uVar0);
		while (GlobalFunc_5182(&uVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uVar5, uVar4, func_26(iLocal_121), 1, 1);
		GlobalFunc_6877(&uVar0);
		while (GlobalFunc_5182(&uVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_121)) / 1000f) + 0.3f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		Local_122.f_2 = iLocal_296;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
}

int func_26(int iParam0)//Position - 0x13B8
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)//Position - 0x13DD
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)//Position - 0x140D
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)//Position - 0x1447
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)//Position - 0x1489
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)//Position - 0x14B9
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)//Position - 0x14F3
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}


Vector3 func_34(int iParam0)//Position - 0x155F
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}






void func_40()//Position - 0x172A
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
	{
		OBJECT::DELETE_OBJECT(&iLocal_296);
	}
	GlobalFunc_9530(0, 0, 1);
	iLocal_296 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_296, func_46(iLocal_121), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var4, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_296, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	CAM::SET_CAM_ACTIVE(uVar8, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	while (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar7) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}

void func_41(var uParam0, var uParam1)//Position - 0x1857
{
	*uParam0 = { GlobalFunc_4520(iLocal_121) };
	switch (iLocal_121)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = GlobalFunc_739(GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = GlobalFunc_567(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = GlobalFunc_2776(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = GlobalFunc_739(GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = GlobalFunc_567(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = GlobalFunc_2776(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = GlobalFunc_739(GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = GlobalFunc_739(GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0), -180f, 180f);
			break;
	}
}





Vector3 func_46(int iParam0)//Position - 0x1B39
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)//Position - 0x1BAF
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

















Vector3 func_64(int iParam0)//Position - 0x2071
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}


Vector3 func_66(int iParam0)//Position - 0x21FA
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}














void func_80()//Position - 0x27C2
{
	switch (iLocal_121)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_81();
			break;
		
		default:
			break;
	}
}

void func_81()//Position - 0x27F9
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		Local_122.f_1 = iVar0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_296, 1) };
		if (SYSTEM::VDIST2(Var1, Local_89) > 25f)
		{
			func_82(0);
		}
	}
}

void func_82(int iParam0)//Position - 0x2846
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






























void func_112()//Position - 0x35AA
{
	struct<3> Var0;
	
	if (bLocal_295)
	{
		switch (iLocal_121)
		{
			case 4:
			case 5:
			case 8:
				iLocal_296 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_296, func_46(iLocal_121), 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_296, 1);
				break;
			
			case 6:
			case 12:
				iLocal_296 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_296, func_46(iLocal_121), 2, 1);
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_296);
				Var0 = { func_114(iLocal_121) };
				if (!GlobalFunc_105(Var0))
				{
					uLocal_297 = VEHICLE::CREATE_VEHICLE(joaat("bati"), Var0, func_113(iLocal_121), 1, 1);
					uLocal_297 = uLocal_297;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_113(int iParam0)//Position - 0x3672
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_114(int iParam0)//Position - 0x3690
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_115()//Position - 0x36BA
{
	switch (iLocal_121)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && GlobalFunc_1089(&uLocal_117)) && GlobalFunc_1089(&uLocal_119));
			break;
		
		case 12:
			return ((STREAMING::HAS_ANIM_DICT_LOADED("pickup_object") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@ig_15")) && GlobalFunc_1089(&uLocal_117));
			break;
		
		default:
			break;
	}
	return (GlobalFunc_1089(&uLocal_117) && GlobalFunc_1089(&uLocal_119));
}


void func_117()//Position - 0x3795
{
	switch (iLocal_121)
	{
		case 5:
		case 8:
			GlobalFunc_5303(&uLocal_117, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			GlobalFunc_5303(&uLocal_117, joaat("p_parachute_s"));
			GlobalFunc_5303(&uLocal_119, joaat("bati"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			GlobalFunc_5303(&uLocal_117, joaat("p_parachute_s"));
			STREAMING::REQUEST_ANIM_DICT("pickup_object");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	GlobalFunc_1090(&uLocal_117);
	GlobalFunc_1090(&uLocal_119);
}




void func_121(int iParam0)//Position - 0x38ED
{
	iLocal_94 = iParam0;
}








void func_129()//Position - 0x3C93
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5211(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_121 = func_133(Local_89, 0);
	switch (iLocal_121)
	{
		case 4:
			iLocal_104 = 128;
			break;
		
		case 5:
			iLocal_104 = 129;
			break;
		
		case 6:
			iLocal_104 = 130;
			break;
		
		case 8:
			iLocal_104 = 132;
			break;
		
		case 12:
			iLocal_104 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_104 == 128)
	{
		if (GlobalFunc_4524(19))
		{
			func_131(iLocal_104);
		}
	}
	GlobalFunc_5211(&uLocal_93, 4194304);
	iLocal_98 = 0;
	fLocal_101 = (SYSTEM::TO_FLOAT(GlobalFunc_4523(iLocal_104)) + 5f);
	fLocal_116 = 1.1f;
	sLocal_100 = "PLAY_BASEJUMP_G";
	if (iLocal_104 != 262)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			bLocal_295 = false;
			func_131(iLocal_104);
		}
		else
		{
			bLocal_295 = true;
		}
	}
	else
	{
		bLocal_295 = false;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bj")) > 0)
	{
		GlobalFunc_5211(&uLocal_93, 8);
	}
	else
	{
		GlobalFunc_5312(&uLocal_93, 8);
	}
	if (GlobalFunc_39(12))
	{
		GlobalFunc_5211(&uLocal_93, 8);
	}
	iLocal_96 = 17000;
}


void func_131(int iParam0)//Position - 0x3EC8
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


int func_133(struct<3> Param0, int iParam3)//Position - 0x3F07
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_134(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(Param0, GlobalFunc_4520(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_134(int iParam0)//Position - 0x3F56
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}



void func_137(bool bParam0)//Position - 0x3FC2
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
		GlobalFunc_587();
		GlobalFunc_5312(&uLocal_93, 2);
		GlobalFunc_1997(&iLocal_97);
	}
	iLocal_97 = -1;
	func_138();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_138()//Position - 0x400D
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


