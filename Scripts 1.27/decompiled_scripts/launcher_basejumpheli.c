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
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 16;
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
	struct<170> Local_286 = { 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
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
	int iVar4;
	
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
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	iLocal_85 = iLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_159(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_151();
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
				func_159(0);
			}
			else
			{
				func_159(1);
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
		func_159(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_159(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_143(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		if (func_142() && !Global_96400)
		{
			func_141(1);
		}
		else if (Global_96400)
		{
		}
	}
	while (true)
	{
		if (Global_3)
		{
			func_159(1);
		}
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_159(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
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
						func_136();
						func_143(1);
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
							func_143(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_134())
					{
						iLocal_102 = iLocal_102;
						func_143(3);
					}
					else
					{
						func_136();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_159(1);
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
								func_159(0);
								break;
							}
						}
					}
					if (!GlobalFunc_747(uLocal_93, 4))
					{
						func_132();
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
						func_143(10);
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
									func_143(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_159(1);
						}
						if (GlobalFunc_4522())
						{
							func_159(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar2 = false;
						}
						if (!bLocal_117)
						{
							GlobalFunc_5211(&uLocal_93, 128);
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
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_85))
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar2 = false;
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
								if (bVar2)
								{
									if (iLocal_85 == iVar3)
									{
									}
									else
									{
										GlobalFunc_5211(&uLocal_93, 128);
										bVar2 = false;
									}
								}
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_107(iLocal_85))
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
										func_143(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_68);
									func_143(5);
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
						iVar4 = 2;
						bVar0 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar4 == 1)
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
							uLocal_51 = func_27();
							GlobalFunc_5312(&uLocal_93, 4);
							func_26();
							GlobalFunc_5211(&uLocal_93, 2);
							func_143(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_15();
						}
						else if (iVar4 == 0)
						{
							func_143(10);
						}
					}
					else
					{
						func_15();
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
							func_143(10);
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
						func_143(0);
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
						func_5();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_159(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_159(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_143(0);
					break;
				
				case 10:
					func_159(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_143(10);
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
					func_143(4);
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
										func_151();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_143(0);
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
									func_143(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_151();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_143(0);
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


void func_2()//Position - 0xA40
{
	GlobalFunc_2285(&uLocal_118);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_286);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_286.f_3));
}



void func_5()//Position - 0xA96
{
	if (iLocal_120 == 0)
	{
		VEHICLE::_0x0A436B8643716D14();
	}
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
}










void func_15()//Position - 0xC39
{
	func_16(&uLocal_460, Local_286);
}

void func_16(var uParam0, int iParam1)//Position - 0xC4B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (CAM::DOES_CAM_EXIST(*uParam0) && CAM::IS_CAM_ACTIVE(*uParam0))
	{
		Var6 = { CAM::GET_CAM_COORD(*uParam0) };
		Var0 = { CAM::GET_CAM_ROT(*uParam0, 2) };
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		}
		fVar9 = MISC::ATAN2((Var3.f_2 - Var6.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var6, 0));
		if (fVar9 > Var0.x)
		{
			Var0.x = GlobalFunc_551(Var0.x, fVar9, 0.07f);
		}
		CAM::SET_CAM_ROT(*uParam0, Var0, 2);
	}
}










void func_26()//Position - 0xF60
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_286) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_460))
	{
		CAM::SET_CAM_ACTIVE(uLocal_460, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_460, 0);
	}
	func_2();
}

var func_27()//Position - 0xFAA
{
	var uVar0;
	
	Global_SAVE_DATA.BJ_iLaunchRank = iLocal_120;
	switch (iLocal_120)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 9:
		case 10:
		case 11:
			func_36();
			break;
		
		case 7:
			func_36();
			GlobalFunc_7621(65, 0, 1, 1, 0);
			GlobalFunc_7621(66, 0, 1, 1, 0);
			break;
		
		default:
			break;
	}
	uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_52, &Local_286, 170, iLocal_96);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
	return uVar0;
}









void func_36()//Position - 0x529B
{
	CAM::DO_SCREEN_FADE_OUT(3000);
	func_16(&uLocal_460, Local_286);
	while (CAM::IS_SCREEN_FADING_OUT())
	{
		SYSTEM::WAIT(0);
		func_16(&uLocal_460, Local_286);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_286, 1);
	}
}














void func_50()//Position - 0x577E
{
	func_51();
}

void func_51()//Position - 0x578A
{
	int iVar0;
	var uVar1;
	int iVar4;
	var uVar5;
	var uVar6;
	struct<3> Var7;
	float fVar10;
	var uVar11;
	bool bVar12;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	uVar11 = GlobalFunc_512(func_102(iLocal_120) == joaat("maverick"), 0.45f, 0.3f);
	iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar4) && iVar4 != iLocal_85)
	{
		Local_286.f_1 = iVar4;
	}
	if (!iLocal_457)
	{
		func_132();
		SYSTEM::WAIT(0);
		return;
	}
	if (func_98(Local_286.f_3, Local_286, 1, 1, 1, 1, 0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		func_141(0);
		iLocal_457 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_3) && !PED::IS_PED_INJURED(Local_286.f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0) && PED::IS_PED_IN_VEHICLE(Local_286.f_3, Local_286, 0))
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_286.f_3, Local_286, ENTITY::GET_ENTITY_COORDS(Local_286, 1) + Vector(100f, 100f, 100f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_286) + Vector(500f, 0f, 0f), 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_286), 262144, 50f, 50f, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_286.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(Local_286.f_3, 1);
			PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 251, 0);
			PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 255, 0);
			Local_286.f_3 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_286))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_286);
			Local_286 = 0;
		}
		if (GlobalFunc_74("PLAY_BASEJUMP_S"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	fVar10 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_4520(iLocal_120));
	if (fVar10 < 11664f)
	{
		if (!iLocal_459)
		{
			STREAMING::REQUEST_MODEL(func_96(iLocal_120));
			iLocal_459 = 1;
		}
	}
	else if (fVar10 > 13924f)
	{
		if (iLocal_459)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_96(iLocal_120));
			iLocal_459 = 0;
		}
	}
	if (fVar10 < 10000f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_286.f_3))
		{
			if ((STREAMING::HAS_MODEL_LOADED(func_96(iLocal_120)) && ENTITY::DOES_ENTITY_EXIST(Local_286)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0))
			{
				Local_286.f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_286, 4, func_96(iLocal_120), -1, 1, 1);
				if (!PED::IS_PED_INJURED(Local_286.f_3))
				{
					PED::SET_PED_HELMET(Local_286.f_3, 0);
					func_95(Local_286.f_3, iLocal_120);
					func_94();
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_286.f_3, func_93(iLocal_120));
					GlobalFunc_1286(&uLocal_121, 0, Local_286.f_3, func_92(iLocal_120), 1, 1);
					TASK::TASK_STAND_STILL(Local_286.f_3, -1);
					PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 251, 1);
					PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 255, 1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_286, 1, 1);
				VEHICLE::SET_HELI_BLADES_SPEED(Local_286, uVar11);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_286.f_3, 1, 0);
			if (!CAM::DOES_CAM_EXIST(uLocal_460) || !CAM::IS_CAM_RENDERING(uLocal_460))
			{
				VEHICLE::SET_HELI_BLADES_SPEED(Local_286, uVar11);
			}
			if (!MISC::IS_BIT_SET(Local_286.f_169, 0))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(Local_286.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_286.f_3, 1)) < 400f)
						{
							GlobalFunc_10641(&uLocal_121, "OJBJAUD", func_89(iLocal_120), 8, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(Local_286.f_3, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
							MISC::SET_BIT(&(Local_286.f_169), 0);
						}
					}
				}
			}
		}
	}
	else if (fVar10 > 12100f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_3))
		{
			uVar5 = Local_286.f_3;
			PED::SET_PED_KEEP_TASK(uVar5, 1);
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uVar5))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar5, 1, 0);
				PED::DELETE_PED(&uVar5);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uVar5);
			}
		}
	}
	func_16(&uLocal_460, Local_286);
	if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_286, 1) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) && func_73(Local_286.f_3, Local_286))
	{
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_286, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f)) };
		if (Var7.x < 0f || Var7.f_1 < 1f)
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_VEH_RADIO_STATION(Local_286, "OFF");
			GlobalFunc_5312(&uLocal_93, 64);
			bVar12 = true;
			if (iLocal_458)
			{
				if (GlobalFunc_74("PLAY_BASEJUMP_B") || GlobalFunc_74("PLAY_BASEJUMP_S"))
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_458 = 0;
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_460))
			{
				GlobalFunc_9530(0, 0, 1);
				GlobalFunc_7632(1);
				uLocal_460 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_57(iLocal_120), func_56(iLocal_120), func_55(iLocal_120), 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_460, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_460, "HAND_SHAKE", 0.07f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0))
			{
				iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Local_286.f_3, -1273030092);
				if (iVar0 != 0 && iVar0 != 1)
				{
					PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 134, 1);
					GlobalFunc_6877(&uVar1);
					while (GlobalFunc_5182(&uVar1) < 1f)
					{
						SYSTEM::WAIT(0);
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
						{
							func_54(iLocal_104);
							if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_3) && !PED::IS_PED_INJURED(Local_286.f_3))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0) && PED::IS_PED_IN_VEHICLE(Local_286.f_3, Local_286, 0))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_286.f_3, Local_286, ENTITY::GET_ENTITY_COORDS(Local_286, 1) + Vector(100f, 100f, 100f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_286) + Vector(500f, 0f, 0f), 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_286), 262144, 50f, 50f, 1);
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_286.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								}
								PED::SET_PED_KEEP_TASK(Local_286.f_3, 1);
								PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 251, 0);
								PED::SET_PED_CONFIG_FLAG(Local_286.f_3, 255, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_286))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_286);
							}
							if (GlobalFunc_74("PLAY_BASEJUMP_S"))
							{
								HUD::CLEAR_HELP(1);
							}
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							return;
						}
						else
						{
							func_16(&uLocal_460, Local_286);
						}
					}
					GlobalFunc_8641(&uLocal_461);
					while (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_286, 0) && GlobalFunc_5425(&uLocal_461) < 2f)
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_235(&uLocal_461);
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_286, 0))
					{
						bVar12 = false;
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						if (CAM::DOES_CAM_EXIST(uLocal_460))
						{
							CAM::DESTROY_CAM(uLocal_460, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						return;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_286.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_286))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar6);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_286, ENTITY::GET_ENTITY_COORDS(Local_286, 1) + Vector(100f, 100f, 100f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_286) + Vector(500f, 0f, 0f), 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_286), 262144, 50f, 50f, 1);
						TASK::CLOSE_SEQUENCE_TASK(uVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_286.f_3, uVar6);
						TASK::CLEAR_SEQUENCE_TASK(&uVar6);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
							PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					GlobalFunc_6877(&uVar1);
					while (GlobalFunc_5182(&uVar1) < 2f)
					{
						SYSTEM::WAIT(0);
						func_16(&uLocal_460, Local_286);
					}
				}
			}
		}
	}
	if (!bVar12)
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286, 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_286, 1)) < 225f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if ((!iLocal_458 || (iLocal_120 == 3 && !GlobalFunc_74("PLAY_BASEJUMP_B"))) || (iLocal_120 != 3 && !GlobalFunc_74("PLAY_BASEJUMP_S")))
			{
				if (iLocal_120 == 3)
				{
					if (!Global_67058)
					{
						GlobalFunc_1("PLAY_BASEJUMP_B");
					}
				}
				else if (!Global_67058)
				{
					GlobalFunc_1("PLAY_BASEJUMP_S");
				}
				iLocal_458 = 1;
			}
		}
		else if (iLocal_458)
		{
			if (GlobalFunc_74("PLAY_BASEJUMP_B") || GlobalFunc_74("PLAY_BASEJUMP_S"))
			{
				HUD::CLEAR_HELP(1);
			}
			iLocal_458 = 0;
		}
		if ((!PED::IS_PED_INJURED(Local_286.f_3) && TASK::GET_SCRIPT_TASK_STATUS(Local_286.f_3, -982327190) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_286.f_3, -982327190) != 1)
		{
			TASK::TASK_STAND_STILL(Local_286.f_3, -1);
		}
	}
}



void func_54(int iParam0)//Position - 0x601A
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

float func_55(int iParam0)//Position - 0x6047
{
	switch (iParam0)
	{
		case 0:
			return 46.7708f;
		
		case 1:
			return 30.5578f;
		
		case 2:
			return 31.1151f;
		
		case 3:
			return 43.4229f;
		
		case 7:
			return 48.6851f;
		
		case 9:
			return 46.947f;
		
		case 10:
			return 40.6109f;
		
		case 11:
			return 32.1049f;
			break;
	}
	return 45f;
}

Vector3 func_56(int iParam0)//Position - 0x60CE
{
	switch (iParam0)
	{
		case 0:
			return 6.5672f, 0f, -15.3269f;
		
		case 1:
			return 1.6743f, 0f, 13.7295f;
		
		case 2:
			return 2.2348f, 0f, 141.3733f;
		
		case 3:
			return 0.7682f, 0f, -154.1293f;
		
		case 7:
			return -1.8117f, 0f, 100.4016f;
		
		case 9:
			return 0.7611f, 0f, -71.8023f;
		
		case 10:
			return 2.3742f, 0f, 86.6743f;
		
		case 11:
			return 0.73f, 0f, 109.0678f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0)//Position - 0x6183
{
	switch (iParam0)
	{
		case 0:
			return -840.2545f, -1317.986f, 6.1066f;
		
		case 1:
			return 1210.955f, 153.4641f, 81.7073f;
		
		case 2:
			return 2489.731f, 1537.972f, 36.1861f;
		
		case 3:
			return -286.5149f, 6665.522f, 6.9225f;
		
		case 7:
			return -714.035f, 4491.083f, 79.9083f;
		
		case 9:
			return -1396.963f, 4363.597f, 43.1246f;
		
		case 10:
			return 2547.738f, 4967.683f, 46.0189f;
		
		case 11:
			return 1091.145f, -169.1484f, 70.757f;
			break;
	}
	return 0f, 0f, 0f;
}
















int func_73(int iParam0, int iParam1)//Position - 0x6676
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(uParam1)) || ENTITY::IS_ENTITY_DEAD(iParam0)) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) && GlobalFunc_1517(iParam0, iParam1) == -1)
	{
		return 1;
	}
	return 0;
}
















char* func_89(int iParam0)//Position - 0x6EE4
{
	bool bVar0;
	
	bVar0 = GlobalFunc_6712(PLAYER::PLAYER_PED_ID()) == true;
	switch (iParam0)
	{
		case 0:
			return GlobalFunc_1078(bVar0, "BJ_01F", "BJ_01L");
		
		case 1:
			return GlobalFunc_1078(bVar0, "BJ_02F", "BJ_02L");
		
		case 2:
			return GlobalFunc_1078(bVar0, "BJ_03F", "BJ_03L");
		
		case 3:
			return GlobalFunc_1078(bVar0, "BJ_04FG", "BJ_04L");
		
		case 7:
			return "BJ_08L";
		
		case 9:
			return GlobalFunc_1078(bVar0, "BJ_10LF", "BJ_10L");
		
		case 10:
			return GlobalFunc_1078(bVar0, "BJ_11LF", "BJ_11L");
		
		case 11:
			return "BJ_12L";
		
		default:
	}
	return "";
}



char* func_92(int iParam0)//Position - 0x7058
{
	return "EXT1HELIPILOT";
}

char* func_93(int iParam0)//Position - 0x7064
{
	switch (iParam0)
	{
		case 0:
			return "EXT1HELIPILOT";
		
		case 1:
			return "EXT1HELIPILOT";
		
		case 2:
			return "EXT1HELIPILOT";
		
		case 3:
			return "EXT1HELIPILOT";
		
		case 7:
			return "BJPilot_Train";
		
		case 9:
			return "EXT1HELIPILOT";
		
		case 10:
			return "EXT1HELIPILOT";
		
		case 11:
			return "BJPilot_Canal";
		
		default:
	}
	return "EXT1HELIPILOT";
}

void func_94()//Position - 0x70DF
{
	iLocal_47++;
}

void func_95(int iParam0, int iParam1)//Position - 0x70ED
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 1, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, 0);
			break;
	}
}

int func_96(int iParam0)//Position - 0x7193
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}


int func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x735D
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (((!ENTITY::DOES_ENTITY_EXIST(uParam1) || ENTITY::IS_ENTITY_DEAD(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) || FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (bParam3)
			{
				if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam5)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					return 1;
				}
			}
			if (bParam6)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, iVar0, 90f))
					{
						if (func_99(iParam0, 1) < 10f)
						{
							return 1;
						}
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
			if (PED::IS_PED_BEING_JACKED(iParam0) || !func_73(iParam0, iParam1))
			{
				return 1;
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 25f)) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 25f))
			{
				return 1;
			}
		}
		else if (bParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_99(var uParam0, int iParam1)//Position - 0x754B
{
	return func_100(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0, iParam1);
}

float func_100(int iParam0, int iParam1, int iParam2)//Position - 0x7563
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


int func_102(int iParam0)//Position - 0x75D6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}





int func_107(int iParam0)//Position - 0x7881
{
	return 0;
	return 1;
}

























void func_132()//Position - 0x8374
{
	if (bLocal_456)
	{
		switch (iLocal_120)
		{
			case 0:
				func_133(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
				break;
			
			case 1:
				func_133(1208.197f, 174.5777f, 81.0003f, 138.8786f);
				break;
			
			case 2:
				func_133(2463.904f, 1509.964f, 35.0372f, 88.9199f);
				break;
			
			case 3:
				func_133(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
				break;
			
			case 7:
				func_133(-742.5047f, 4493.466f, 75.2206f, 180.991f);
				break;
			
			case 9:
				func_133(-1367.687f, 4381.998f, 41.4017f, 277.8339f);
				break;
			
			case 10:
				func_133(2517.962f, 4971.619f, 44.7057f, 15.3895f);
				break;
			
			case 11:
				func_133(1054.534f, -179.6562f, 70.3162f, 30.046f);
				break;
			
			default:
				break;
			}
	}
}

void func_133(struct<3> Param0, float fParam3)//Position - 0x8494
{
	var uVar0;
	bool bVar1;
	
	fLocal_92 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (fLocal_92 > 25f || CAM::IS_SCREEN_FADED_OUT()))
	{
		if (fLocal_92 < 25600f)
		{
			if (!CAM::IS_SPHERE_VISIBLE(Param0, 6f) || CAM::IS_SCREEN_FADED_OUT())
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_286))
		{
			VEHICLE::DELETE_VEHICLE(&Local_286);
		}
		MISC::CLEAR_AREA(Param0, 4f, 1, 0, 0, 0);
		if (iLocal_120 == 0)
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-835.7629f, -1298.777f, 0f, -815.1855f, -1283.906f, 10f, 0, 1);
		}
		if (iLocal_120 == 3)
		{
			Local_286 = VEHICLE::CREATE_VEHICLE(joaat("frogger"), Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_286, 5);
		}
		else
		{
			Local_286 = VEHICLE::CREATE_VEHICLE(joaat("maverick"), Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_286, 6);
		}
		iLocal_85 = Local_286;
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_85, 1);
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &uVar0))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_286);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_286, 1);
		iLocal_457 = 1;
	}
	else
	{
		iLocal_457 = 0;
	}
}

bool func_134()//Position - 0x85BB
{
	return GlobalFunc_1089(&uLocal_118);
}


void func_136()//Position - 0x8610
{
	switch (iLocal_120)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			func_138();
			break;
		
		default:
			break;
	}
	GlobalFunc_1090(&uLocal_118);
}


void func_138()//Position - 0x8695
{
	if (iLocal_120 == 3)
	{
		GlobalFunc_5303(&uLocal_118, joaat("frogger"));
	}
	else
	{
		GlobalFunc_5303(&uLocal_118, joaat("maverick"));
	}
}



void func_141(int iParam0)//Position - 0x8747
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

int func_142()//Position - 0x8768
{
	struct<3> Var0;
	float fVar3;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = SYSTEM::VDIST2(Var0, Local_89);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(Local_89, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_143(int iParam0)//Position - 0x87DB
{
	iLocal_94 = iParam0;
}








void func_151()//Position - 0x8B81
{
	iLocal_98 = 0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5211(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_120 = func_155(Local_89, 1);
	GlobalFunc_5211(&uLocal_93, 64);
	switch (iLocal_120)
	{
		case 0:
			iLocal_104 = 124;
			break;
		
		case 1:
			iLocal_104 = 125;
			break;
		
		case 2:
			iLocal_104 = 126;
			break;
		
		case 3:
			iLocal_104 = 127;
			break;
		
		case 7:
			iLocal_104 = 131;
			break;
		
		case 9:
			iLocal_104 = 133;
			break;
		
		case 10:
			iLocal_104 = 134;
			break;
		
		case 11:
			iLocal_104 = 135;
			break;
		
		default:
			break;
	}
	if (iLocal_120 == 4)
	{
		if (GlobalFunc_4524(19))
		{
			GlobalFunc_5211(&uLocal_93, 8388608);
			return;
		}
	}
	if (iLocal_120 == 7)
	{
		if (GlobalFunc_230(16) && !GlobalFunc_230(65))
		{
			GlobalFunc_5211(&uLocal_93, 8388608);
			return;
		}
	}
	if (iLocal_120 == 0)
	{
		GlobalFunc_5211(&uLocal_93, 524288);
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		GlobalFunc_5211(&uLocal_93, 8388608);
		return;
	}
	GlobalFunc_5211(&uLocal_93, 4194304);
	GlobalFunc_5211(&uLocal_93, 16);
	fLocal_101 = (SYSTEM::TO_FLOAT(GlobalFunc_4523(iLocal_104)) + 5f);
	if (iLocal_104 != 262)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			bLocal_456 = false;
			func_54(iLocal_104);
		}
		else
		{
			bLocal_456 = true;
		}
	}
	else
	{
		bLocal_456 = false;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bj")) > 0)
	{
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




int func_155(struct<3> Param0, int iParam3)//Position - 0x8E68
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_156(iVar3))
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

int func_156(int iParam0)//Position - 0x8EB7
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



void func_159(bool bParam0)//Position - 0x8F23
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
	func_160();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_160()//Position - 0x8F6C
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


