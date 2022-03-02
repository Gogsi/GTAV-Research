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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<61> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 16;
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
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	float fVar3;
	
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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_57 = { 0f, 0f, 0f };
	Local_60 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	Local_132 = { 1990.67f, 3810.16f, 31.24f };
	Local_135 = { 1973.84f, 3814.89f, 32.43f };
	Local_65 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_65);
	GlobalFunc_8954();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		func_674(1);
		func_659();
	}
	if (!GlobalFunc_199())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_143("Player not in a vehicle [TERMINATING]");
			func_674(1);
			func_659();
		}
		else
		{
			iLocal_129 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), 68.16914f, -1558.958f, 29.46904f, 1) < 10f)
			{
				Global_89962.f_12[0] = 0;
			}
			else if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), 589.4399f, 2736.708f, 42.03316f, 1) < 10f)
			{
				Global_89962.f_12[0] = 1;
			}
			else if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), -488.774f, -344.5721f, 34.36356f, 1) < 10f)
			{
				Global_89962.f_12[0] = 2;
			}
			else if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), 288.8808f, -585.4728f, 43.15428f, 1) < 10f)
			{
				Global_89962.f_12[0] = 3;
			}
			else if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), 304.8294f, -1383.674f, 31.67744f, 1) < 10f)
			{
				Global_89962.f_12[0] = 4;
			}
			else
			{
				Global_89962.f_12[0] = 5;
			}
		}
	}
	else
	{
		if (Global_89962.f_12[0] == 0)
		{
			Var0 = { 68.16914f, -1558.958f, 29.46904f };
			fVar3 = 49.90575f;
			GlobalFunc_4927(51, 0);
		}
		else if (Global_89962.f_12[0] == 1)
		{
			Var0 = { 589.4399f, 2736.708f, 42.03316f };
			fVar3 = -175.7105f;
			GlobalFunc_4927(52, 0);
		}
		else if (Global_89962.f_12[0] == 2)
		{
			Var0 = { -488.774f, -344.5721f, 34.36356f };
			fVar3 = 82.4042f;
			GlobalFunc_4927(53, 0);
		}
		else if (Global_89962.f_12[0] == 3)
		{
			Var0 = { 288.8808f, -585.4728f, 43.15428f };
			fVar3 = -20.80707f;
			GlobalFunc_4927(54, 0);
		}
		else if (Global_89962.f_12[0] == 4)
		{
			Var0 = { 304.8294f, -1383.674f, 31.67744f };
			fVar3 = -41.11603f;
			GlobalFunc_4927(55, 0);
		}
		else
		{
			Var0 = { 1126.194f, -1481.486f, 34.7016f };
			fVar3 = -91.43369f;
			GlobalFunc_4927(56, 0);
		}
		GlobalFunc_4972(Var0, fVar3, 1, 0);
		func_651(1, 1);
		STREAMING::REQUEST_MODEL(joaat("rumpo2"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("rumpo2")))
		{
			SYSTEM::WAIT(0);
		}
		MISC::CLEAR_AREA(Var0, 10f, 1, 0, 0, 0);
		iLocal_129 = VEHICLE::CREATE_VEHICLE(joaat("rumpo2"), Var0, fVar3, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_129);
		GlobalFunc_4967(iLocal_129, -1, 1);
		func_648(0);
		iLocal_138 = 0;
		iLocal_139 = 0;
		iLocal_140 = 0;
		SYSTEM::WAIT(250);
		func_647(1, 1, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_DG", 0);
		func_634(Local_65.f_9, 0, 0, 0, 0, 0);
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		switch (iLocal_126)
		{
			case 0:
				func_630();
				break;
			
			case 1:
				func_621();
				break;
			
			case 2:
				func_6();
				break;
			
			case 3:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x3F3
{
	switch (iLocal_127)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			if (GlobalFunc_115(iLocal_129))
			{
				func_674(1);
			}
			else
			{
				func_3("MRSP2_F_01", 1);
			}
			iLocal_127 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_659();
			}
			break;
	}
}


void func_3(char* sParam0, bool bParam1)//Position - 0x46C
{
	GlobalFunc_509(sParam0);
	func_674(bParam1);
}



void func_6()//Position - 0x4DF
{
	switch (iLocal_127)
	{
		case 0:
			GlobalFunc_9623("TMOM_2_RCM", 0);
			iLocal_128 = 0;
			iLocal_127 = 1;
			break;
		
		case 1:
			switch (iLocal_128)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("rcmtmom_2leadinout");
					if (func_612(1, 1093140480, 0) && STREAMING::HAS_ANIM_DICT_LOADED("rcmtmom_2leadinout"))
					{
						if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1736361794))
						{
							OBJECT::ADD_DOOR_TO_SYSTEM(1736361794, joaat("v_ilev_trevtraildr"), 1972.77f, 3815.37f, 33.66f, 1, 1, 0);
						}
						CUTSCENE::START_CUTSCENE(2048);
						RECORDING::_0x48621C9FCA3EBD28(1);
						GlobalFunc_79(500, 0);
						iLocal_128++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_608(Local_135, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						iLocal_128++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							RECORDING::_0x81CBAE94390F9F89();
							uLocal_307 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
							CAM::SET_CAM_PARAMS(uLocal_307, 1973.856f, 3818.222f, 34.3958f, -89.4995f, 0f, 65.3191f, 50f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_307, 1973.856f, 3818.222f, 34.3958f, -89.4995f, 0f, 65.3191f, 50f, 0, 1, 1, 2);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							uLocal_141 = PED::CREATE_SYNCHRONIZED_SCENE(1973.909f, 3817.762f, 33.438f, 0f, 0f, -59.4f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_141, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_141, "rcmtmom_2leadinout", "tmom_2_leadout_loop", 1000f, -1000f, 5, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							GlobalFunc_1286(&uLocal_142, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						}
					}
					else
					{
						GlobalFunc_5157(&uLocal_142, "TMOMAUD", "TMOM_2_RCMLO", 3, 1, 0);
						func_7(1);
					}
					break;
			}
			break;
	}
}

void func_7(int iParam0)//Position - 0x6B7
{
	if (iParam0 == 1)
	{
		func_236(221, 1);
		func_226(1, 0, 0, 0);
	}
	else
	{
		func_226(1, 1, 1, 1);
	}
	func_32(111, 1);
	GlobalFunc_8646(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 2, 40);
	func_659();
}

























void func_32(int iParam0, bool bParam1)//Position - 0x52C0
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
	func_186(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2832(&uVar1, GlobalFunc_8310());
	func_60();
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




























void func_60()//Position - 0x6665
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
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_61(iVar1, 14, iVar2);
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

int func_61(int iParam0, int iParam1, int iParam2)//Position - 0x6726
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
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
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
				func_61(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_61(iParam0, 14, uVar20[iVar18]))
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
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11272(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11272(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}





























































































































void func_186(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22FFF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::SET_TIME_SCALE(1f);
	GlobalFunc_53();
	GlobalFunc_52(1, 1);
	GlobalFunc_51();
	GlobalFunc_8382();
	GlobalFunc_3061(30000);
	if (iParam1 == 1)
	{
		GlobalFunc_7620(iParam0, iParam2, iParam3);
	}
	HUD::SET_MISSION_NAME(0, 0);
}








































void func_226(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x29B14
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










void func_236(int iParam0, int iParam1)//Position - 0x29E05
{
	struct<97> Var0;
	int iVar109;
	int iVar110;
	
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	GlobalFunc_5939(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (GlobalFunc_747(iParam1, 64))
		{
			GlobalFunc_3033(Global_88538[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!GlobalFunc_8633(Var0.f_3))
			{
				iVar109 = GlobalFunc_237(Var0.f_3);
				while (!func_596(iVar109, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar110 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar110)
	{
		if (!func_237(&Var0, iParam1))
		{
		}
		else
		{
			iVar110 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_237(var uParam0, var uParam1)//Position - 0x29F0D
{
	return func_238(uParam0, 489936/*func_595*/, 489765/*func_594*/, uParam1);
}

int func_238(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x29F25
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	var uVar135;
	char* sVar136;
	char[] cVar152[8];
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	int iVar195;
	struct<65> Var196;
	bool bVar261;
	int iVar262;
	bool bVar263;
	bool bVar264;
	int iVar265;
	float fVar266;
	float fVar267;
	bool bVar268;
	bool bVar269;
	struct<6> Var270;
	bool bVar276;
	char cVar277[64];
	char* sVar293;
	char cVar309[64];
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	bool bVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_35464 - 1000))
	{
		GlobalFunc_3061(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var121 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar124 = GlobalFunc_7733(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_68507 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_81155[Global_68507 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (GlobalFunc_8314() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		Global_89750 = 0;
		uParam0->f_61 = GlobalFunc_237(uParam0->f_3);
		if (func_586(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			GlobalFunc_7632(1);
			if (GlobalFunc_10760(uParam0, &Var125, &uVar128))
			{
				uParam0->f_4 = { Var125 };
				uParam0->f_7 = uVar128;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { Var125 };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = uVar128;
				if (Global_89726[uParam0->f_3] == 2)
				{
					Global_89734[uParam0->f_3 /*3*/] = { Var125 };
					Global_89744[uParam0->f_3] = uVar128;
				}
			}
			Global_88209 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				GlobalFunc_7934(21, 0);
			}
			GlobalFunc_7225(uParam0->f_2);
			if (func_569(uParam0->f_2, &Var129, &Var132, &uVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, uVar135);
					PED::SET_PED_NON_CREATION_AREA(Var129 - Var121, Var129 + Var121);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var129 - Var121, Var129 + Var121, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Var129, SYSTEM::VMAG(Var121), 1, 0, 0, 0);
				}
			}
			Global_89750++;
			if (GlobalFunc_2937(uParam0->f_2, &sVar184))
			{
				Global_89750++;
			}
			Global_89502 = uParam0->f_2;
			iVar192 = GlobalFunc_8315();
			if (iVar192 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar192]))
				{
					fVar193 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192]);
					fVar194 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192]);
					if (fVar193 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
					if (fVar194 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
				}
				GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar192 /*74*/]), &(Global_89734[iVar192 /*3*/]), &(Global_89744[iVar192]), &(Global_89726[iVar192]), &(Global_2544853[iVar192]));
				func_556(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_8060(PLAYER::PLAYER_PED_ID());
			}
			func_546(uParam0->f_3, uParam0->f_2);
			iLocal_64 = 0;
			Global_24491 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_64++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_64 > 150)
				{
					iLocal_64 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar195 = GlobalFunc_584(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar195]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar195], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar195]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (GlobalFunc_10759(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_388(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) != 3)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] = { Var196 };
					}
				}
				GlobalFunc_5169(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], 1);
				GlobalFunc_2932(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_89751 = -1;
				GlobalFunc_5935(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar262 = MISC::GET_GAME_TIMER();
						while (iVar262 + 500 < MISC::GET_GAME_TIMER() && iVar262 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar262 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, 1, 1);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!GlobalFunc_537(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1), 5f) && !GlobalFunc_537(uParam0->f_4, 0f, 0f, 0f, 5f))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_89751 = -1;
			GlobalFunc_5935(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar263 = false;
		bVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		bVar268 = false;
		bVar269 = false;
		GlobalFunc_9260(uParam0, &bVar263, &bVar264, &iVar265, &fVar266, &fVar267, &bVar268, &bVar269, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (GlobalFunc_2938(uParam0->f_2, &Var270))
			{
				MemCopy(&(uParam0->f_8), {Var270}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar268)
			{
				bVar268 = true;
			}
		}
		bVar276 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_379(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
			{
				bVar276 = true;
			}
		}
		else
		{
			MemCopy(&cVar277, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar277))
			{
				GlobalFunc_2940(uParam0->f_2, &sVar293, &cVar309);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar309))
				{
					StringConCat(&cVar277, &cVar309, 64);
				}
			}
			if (func_364(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
			{
				bVar276 = true;
			}
		}
		if (bVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar325 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar325 == 8 || iVar325 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar325 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_89750 > 0)
						{
							if (Global_89751 < 0)
							{
								Global_89751 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (GlobalFunc_2937(uParam0->f_2, &sVar329))
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_89751 + iVar328))
								{
									Global_89750 = (Global_89750 - 1);
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_89751 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_339(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar325 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar325 >= iVar327)
						{
							bVar337 = false;
							if (func_285(&(uParam0->f_17), bVar263, bVar264, 0))
							{
								bVar337 = true;
							}
							if (bVar337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 1);
								}
								GlobalFunc_2928(&(uParam0->f_17));
								func_339(uParam0);
								GlobalFunc_9259();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_87845 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_87678)
			{
				if (uParam0->f_62.f_19)
				{
					if (GlobalFunc_5934(uParam0))
					{
						Global_87678 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, 0);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar338]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				GlobalFunc_7632(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_35923)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::_0x487A82C650EB7799(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			GlobalFunc_749(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_13, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 0);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(uParam0->f_3));
		iVar339 = GlobalFunc_8315();
		if (iVar339 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar339]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89730[iVar339], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_89730[iVar339]));
				}
			}
			iVar340 = Global_89503[iVar339 /*74*/];
			if (iVar340 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar340);
			}
		}
		GlobalFunc_9271(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_3] = uParam0->f_2;
			GlobalFunc_5933(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		}
		GlobalFunc_5932(uParam0->f_3);
		GlobalFunc_8629(uParam0, &Var1);
		GlobalFunc_8628(uParam0);
		GlobalFunc_7222(uParam0->f_2);
		GlobalFunc_17(&Global_1312465);
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[uParam0->f_3] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_87678 = 0;
		Global_89751 = -1;
		GlobalFunc_54(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			GlobalFunc_7632(0);
		}
		return 1;
	}
	return 0;
}















































int func_285(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x34513
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			func_327(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_327((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		func_291(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}






void func_291(int iParam0)//Position - 0x34BEA
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_292(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_292(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_292(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_292(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_292(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_292(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_292(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_292(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_292(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_292(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_292(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_292(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_292(50, 0);
			break;
	}
}

void func_292(int iParam0, int iParam1)//Position - 0x34D7A
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_294(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_294(int iParam0)//Position - 0x34EC1
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		GlobalFunc_8643(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9135(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_8989())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}

































void func_327(int iParam0, bool bParam1)//Position - 0x3AA70
{
	GlobalFunc_8644(iParam0);
	GlobalFunc_7700(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}












int func_339(var uParam0)//Position - 0x3BA5D
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_363(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_363(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9272(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_363(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9272(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (GlobalFunc_6710(Global_1312465))
	{
		iVar6 = GlobalFunc_208(Global_1312465);
		iVar7 = GlobalFunc_207(Global_1312465);
		sVar8 = "";
		sVar9 = "";
		if (!GlobalFunc_2929())
		{
			sVar8 = "SMOG";
		}
		if (func_340(&fVar1, 5f))
		{
			return GlobalFunc_9272(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_340(float fParam0, float fParam1)//Position - 0x3BC96
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_63 == -1)
	{
		iLocal_63 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_63);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}























int func_363(var uParam0, float fParam1)//Position - 0x3C815
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_57 };
	Var3 = { Local_60 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_57 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_57 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_60 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_60 };
	}
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 0);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 0);
	*fParam1 = (fVar10 / fVar9);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_364(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x3C8BE
{
	return func_365(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_365(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x3C8E5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_7981(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}














int func_379(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x3D15A
{
	return func_365(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}









int func_388(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x3D931
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8645(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11326(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_390(*uParam0, bParam8);
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


int func_390(int iParam0, bool bParam1)//Position - 0x3DA49
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		GlobalFunc_11327(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11327(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						GlobalFunc_11272(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11272(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11272(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11272(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




























































































































































int func_546(int iParam0, int iParam1)//Position - 0x6A996
{
	var uVar0;
	var uVar3;
	int iVar4;
	
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
	{
		return 0;
	}
	if (GlobalFunc_506(iParam1, &uVar0, &uVar3))
	{
		return 0;
	}
	iVar4 = GlobalFunc_8630(iParam0);
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iVar4] = 0;
	return 1;
}










void func_556(int iParam0, int iParam1)//Position - 0x6B62C
{
	int iVar0;
	struct<3> Var1;
	
	func_327(iParam0, 0);
	GlobalFunc_11327(iParam0, 0);
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], iParam1, &Var1, 16))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			}
		}
	}
}













int func_569(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x6DC7A
{
	struct<3> Var0;
	float fVar3;
	char[] cVar4[8];
	struct<3> Var12;
	var uVar15;
	char[] cVar16[8];
	
	*uParam3 = 40f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 1:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 2:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 3:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 4:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 6:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 7:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 11:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 9:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 10:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 13:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 14:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 15:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 12:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 16:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 17:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 18:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 19:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 20:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 22:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 74:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 23:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 24:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 67:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 25:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 26:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 27:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 28:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 58:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 59:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 60:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 38:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 40:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1393.829f, 3721.21f, 59.6646f };
			*uParam2 = { -77.4667f, -3.4089f, -29.2756f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 43:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 44:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 124:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 66:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 61:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 62:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 63:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 69:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 64:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 65:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 75:
			*uParam1 = { 1421.37f, -1909.6f, 70f };
			*uParam2 = { -89.49953f, -1E-06f, 166.0406f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 76:
			*uParam1 = { Vector(148.1897f, -2306.583f, 1375.146f) + Vector(-42.5f, 0f, 0f) };
			*uParam2 = { -78.9021f, 0f, 25.2484f };
			return 1;
			break;
		
		case 77:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 78:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = { -806.1221f, 173.3714f, 73.0859f };
			*uParam2 = { -1.4712f, 0f, -95.2503f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 80:
			*uParam1 = { -777.6068f, 187.453f, 74.1732f };
			*uParam2 = { -10.8798f, 0f, -156.0149f };
			return 1;
			break;
		
		case 81:
			*uParam1 = { -1313.857f, 117.7842f, 83.0089f };
			*uParam2 = { -81.4288f, -0.0005f, -4.4763f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 82:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 83:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 84:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 85:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { -779.5107f, 184.6536f, 97.9522f };
			*uParam2 = { -83.1792f, -0.0008f, 33.1776f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 88:
			*uParam1 = { -1350.398f, 355.7088f, 89.1898f };
			*uParam2 = { -83.1793f, -0.0008f, 94.8576f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 184:
			*uParam1 = { -11.4584f, 509.3831f, 199.7681f };
			*uParam2 = { -83.1793f, -0.0008f, 10.655f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 185:
			*uParam1 = { 21.0263f, 518.8938f, 195.3684f };
			*uParam2 = { -83.1792f, -0.0008f, 10.6496f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 186:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 187:
			*uParam1 = { 25.1207f, 538.1634f, 176.3949f };
			*uParam2 = { -9.1084f, 0f, 136.7439f };
			*uParam3 = 60f;
			return 1;
			break;
		
		case 188:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		
		case 189:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 190:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		
		case 191:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 94:
			*uParam1 = { -115.9504f, 359.3368f, 138.8368f };
			*uParam2 = { -84.145f, -0.0028f, 30.813f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 95:
			*uParam1 = { 388.4338f, 181.3034f, 128.5381f };
			*uParam2 = { -82.1573f, 0.0028f, -133.5252f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 96:
			*uParam1 = { -1368.703f, 50.4611f, 55.6791f };
			*uParam2 = { -25.2992f, 0f, 39.0928f };
			return 1;
			break;
		
		case 97:
			*uParam1 = { -1412.473f, -197.0279f, 73.1327f };
			*uParam2 = { -85.8754f, 0.0301f, 103.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 89:
			*uParam1 = { -828.6376f, 153.5095f, 94.4233f };
			*uParam2 = { -82.4779f, -87.738f, -38.5885f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 90:
			*uParam1 = { -886.2003f, 130.811f, 84.4115f };
			*uParam2 = { -82.1702f, -15.3164f, 27.7905f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 91:
			*uParam1 = { -1208.417f, -952.6558f, 28.0064f };
			*uParam2 = { -81.4289f, -0.0005f, 145.6032f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 92:
			*uParam1 = { -848.757f, 852.361f, 228.9125f };
			*uParam2 = { -81.4289f, -0.0005f, -13.8233f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 93:
			*uParam1 = { -1267.417f, -707.9901f, 48.813f };
			*uParam2 = { -81.4294f, -0.001f, 157.5229f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 108:
			*uParam1 = { 252.454f, 1118.039f, 245.2481f };
			*uParam2 = { -77.0357f, 0.0002f, -101.5461f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 109:
			*uParam1 = { -1817.594f, -685.8846f, 35.5217f };
			*uParam2 = { -77.0356f, 0.0002f, 3.4539f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 112:
			*uParam1 = { 815.9318f, 1275.719f, 387.0281f };
			*uParam2 = { -76.9465f, 0.0003f, 175.4883f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 113:
			*uParam1 = { -1664.928f, 493.0317f, 155.4287f };
			*uParam2 = { -76.9465f, 0.0003f, 149.7993f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 661.924f, 3503.337f, 60.5464f };
			*uParam2 = { -76.9465f, -0.0009f, -81.4523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 2409.799f, 4293.222f, 61.6806f };
			*uParam2 = { -76.568f, -3.7101f, 56.4411f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 137:
			*uParam1 = { 100.7403f, 3369.28f, 61.103f };
			*uParam2 = { -77.9654f, 2.7972f, -172.4415f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 138:
			*uParam1 = { 2441.216f, 3795.687f, 66.4953f };
			*uParam2 = { -75.6905f, -1.8311f, -34.0872f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 139:
			*uParam1 = { 1779.841f, 4588.321f, 64.2296f };
			*uParam2 = { -77.2461f, -2.1153f, 134.3354f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 140:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 141:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 142:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 143:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 144:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 145:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 146:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 147:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 148:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 149:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 150:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 118:
			*uParam1 = { -1064.281f, -1530.444f, 4.9643f };
			*uParam2 = { -6.3151f, 0f, -11.6771f };
			return 1;
			break;
		
		case 119:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 120:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 114:
			*uParam1 = { 70.2718f, -1555.779f, 54.57f };
			*uParam2 = { -79.8378f, 0.0014f, 146.7438f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 98:
			*uParam1 = { -611.2242f, -215.1656f, 69.3734f };
			*uParam2 = { -82.5325f, -23.1336f, 38.4436f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 99:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 100:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 101:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 102:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 103:
			*uParam1 = { -1733.709f, -1127.285f, 39.0047f };
			*uParam2 = { -83.9991f, 0.0016f, -37.0248f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 104:
			*uParam1 = { -1926.921f, -575.551f, 37.5216f };
			*uParam2 = { -81.4289f, -0.0005f, 163.5237f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 121:
			*uParam1 = { -832.9372f, -1357.882f, 31.1094f };
			*uParam2 = { -82.6154f, 0.0027f, -121.9677f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 122:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 196:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 197:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 123:
			*uParam1 = { -2008.929f, -494.5522f, 38.0431f };
			*uParam2 = { -74.6696f, 3.4735f, 101.1669f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -1500.457f, -682.8798f, 52.8456f };
			*uParam2 = { -82.2007f, -0.0021f, -20.62f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 115:
			*uParam1 = { -514.3963f, -19.7218f, 71.4872f };
			*uParam2 = { -85.8754f, 0.0302f, -142.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 116:
			*uParam1 = { -627.7501f, 245.722f, 107.7731f };
			*uParam2 = { -85.8754f, 0.0301f, 148.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 117:
			*uParam1 = { -831.1096f, -350.8676f, 64.5357f };
			*uParam2 = { -85.8754f, 0.0301f, 73.7675f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 105:
			*uParam1 = { -466.357f, -1586.527f, 42.1308f };
			*uParam2 = { -24.1059f, 0f, -157.2387f };
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1738.608f, -624.3743f, 12.7827f };
			*uParam2 = { -22.3162f, 0f, 105.6959f };
			return 1;
			break;
		
		case 107:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 110:
			*uParam1 = { -95.4359f, -413.3546f, 61.9024f };
			*uParam2 = { -84.9814f, -0.0003f, 154.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 111:
			*uParam1 = { -1290.972f, -697.7042f, 50.5674f };
			*uParam2 = { -84.9813f, -0.0003f, 54.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1969.998f, 3806.847f, 35.494f };
			*uParam2 = { -14.7978f, 0f, -11.4244f };
			return 1;
			break;
		
		case 127:
			*uParam1 = { 672.4669f, 3502.739f, 58.9099f };
			*uParam2 = { -83.2715f, 4.5479f, 61.6184f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { 1975.91f, 3822.413f, 34.0088f };
			*uParam2 = { -10.9024f, 0f, 154.0872f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { 1983.736f, 3822.763f, 57.6395f };
			*uParam2 = { -83.4323f, -0.0013f, 121.7344f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 130:
			*uParam1 = { 1978.229f, 3820.721f, 34.0738f };
			*uParam2 = { -8.2785f, 0f, 103.9586f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 132:
			*uParam1 = { 1973.951f, 3819.078f, 33.7825f };
			*uParam2 = { -5.3804f, 0f, -17.5258f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 133:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 134:
			*uParam1 = { 1994.985f, 3057.219f, 49.8043f };
			*uParam2 = { -49.0498f, 0.0012f, 99.8958f };
			*uParam3 = 41f;
			return 1;
			break;
		
		case 151:
			*uParam1 = { -113.8308f, 361.9919f, 138.5542f };
			*uParam2 = { -76.7137f, -0.0014f, 41.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 152:
			*uParam1 = { -1349.114f, 351.6396f, 100.0071f };
			*uParam2 = { -80.7411f, -0.0078f, 34.6522f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 153:
			*uParam1 = { -715.1777f, 255.9193f, 105.5536f };
			*uParam2 = { -84.0507f, -0.0034f, 89.2749f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 154:
			*uParam1 = { -715.3492f, 256.7212f, 105.5855f };
			*uParam2 = { -82.4496f, -0.003003f, 99.94753f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 155:
			*uParam1 = { -774.8297f, 164.9666f, 104.4211f };
			*uParam2 = { -81.8771f, -0.0817f, 178.2323f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 156:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 157:
			*uParam1 = { -720.5396f, 253.1793f, 105.7766f };
			*uParam2 = { -83.2751f, 3.4532f, -42.6086f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 158:
			*uParam1 = { 533.3047f, 120.3593f, 122.7126f };
			*uParam2 = { -83.8911f, -0.0019f, -129.3945f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 159:
			*uParam1 = { -827.4469f, -191.4707f, 63.4392f };
			*uParam2 = { -80.7034f, 0.0005f, -51.0296f };
			*uParam3 = 44.888f;
			return 1;
			break;
		
		case 160:
			*uParam1 = { -718.5201f, -159.4091f, 62.5628f };
			*uParam2 = { -79.3643f, 0.0002f, -33.1272f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 161:
			*uParam1 = { -786.2485f, 187.686f, 97.9448f };
			*uParam2 = { -80.7232f, 0.0002f, 104.9069f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 162:
			*uParam1 = { -1370.73f, -209.3841f, 70.322f };
			*uParam2 = { -85.8754f, 0.0301f, -94.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 163:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 164:
			*uParam1 = { -778.8658f, 185.7413f, 98.1194f };
			*uParam2 = { -84.2688f, 0.0243f, 42.5521f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 165:
			*uParam1 = { -1133.295f, -455.1246f, (95.9402f - 30f) };
			*uParam2 = { -85.6256f, 0f, 28.0351f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 166:
			*uParam1 = { -1046.601f, -478.8773f, 62.6878f };
			*uParam2 = { -77.3255f, -6.297f, 139.6857f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 167:
			*uParam1 = { -1184.291f, -505.4514f, 75.0146f };
			*uParam2 = { -82.6035f, 0.0014f, -31.0152f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 168:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		
		case 169:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 170:
			*uParam1 = { -657.0717f, -271.9325f, 61.5797f };
			*uParam2 = { -78.4277f, 9.0072f, -174.2934f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 171:
			*uParam1 = { -252.0919f, -81.0714f, 74.7886f };
			*uParam2 = { -86.5763f, 49.0804f, -90.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 173:
			*uParam1 = { -831.4534f, 178.1406f, 96.6498f };
			*uParam2 = { -73.1145f, -0.0027f, -93.0056f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 172:
			*uParam1 = { -250.7753f, -80.1775f, 74.8044f };
			*uParam2 = { -85.8438f, 27.439f, -107.783f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 174:
			*uParam1 = { -803.7232f, 181.6804f, 73.2304f };
			*uParam2 = { -5.3638f, 0f, -22.9153f };
			*uParam3 = 50f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -23.8601f, -1456.89f, 30.8716f };
			*uParam2 = { 2.4688f, 0f, -32.828f };
			*uParam3 = 37.6481f;
			return 1;
			break;
		
		case 176:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		
		case 177:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 178:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 179:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 180:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 181:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 182:
			*uParam1 = { -13.2465f, -1425.419f, 31.1279f };
			*uParam2 = { -30.6822f, 0.6787f, 15.1437f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 183:
			*uParam1 = { 14.9547f, 525.4391f, 170.6328f };
			*uParam2 = { -30.6819f, 0.6789f, -170.1687f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 193:
			*uParam1 = { -1175.938f, -1575.701f, 30.1692f };
			*uParam2 = { -84.0992f, -0.0012f, -19.5058f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 192:
			*uParam1 = { -1175.792f, -1576.049f, 30.8335f };
			*uParam2 = { -80.2938f, 0.0008f, -26.9162f };
			*uParam3 = 49.9377f;
			return 1;
			break;
		
		case 194:
			*uParam1 = { -1151.191f, -1365.485f, 9.0273f };
			*uParam2 = { -14.4946f, 0f, 176.3572f };
			return 1;
			break;
		
		case 195:
			*uParam1 = { -1171.874f, -1425.224f, 9.2445f };
			*uParam2 = { -17.1697f, 0f, -111.3917f };
			return 1;
			break;
		
		case 198:
			*uParam1 = { -14.2911f, -1443.628f, 56.3341f };
			*uParam2 = { -81.6191f, 0.0002f, -175.2965f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 199:
			*uParam1 = { 18.2618f, 537.6057f, 201.7112f };
			*uParam2 = { -81.6191f, 0.0002f, 31.4594f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 200:
			*uParam1 = { -0.9251f, -1606.806f, 54.3956f };
			*uParam2 = { -81.9792f, -0.0059f, -89.5973f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 201:
			*uParam1 = { 1.8601f, -1609.959f, 55.0489f };
			*uParam2 = { -81.9213f, 0.0006f, -30.8316f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 202:
			*uParam1 = { -1246.266f, -1614.218f, 30.1603f };
			*uParam2 = { -85.4036f, -0.0003f, -85.7066f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 203:
			*uParam1 = { -13.0353f, -1450.723f, 55.6841f };
			*uParam2 = { -83.5727f, -0.0019f, 129.2043f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 204:
			*uParam1 = { -11.3015f, -1423.062f, 55.8104f };
			*uParam2 = { -83.5727f, 0.0005f, 102.8099f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 206:
			*uParam1 = { 154.6263f, 769.2573f, 234.8318f };
			*uParam2 = { -83.5727f, -0.0019f, -173.7957f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 207:
			*uParam1 = { -264.6808f, 416.6765f, 134.8675f };
			*uParam2 = { -83.5727f, -0.0019f, 126.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 205:
			*uParam1 = { 13.4706f, 520.5046f, 195.3417f };
			*uParam2 = { -83.5727f, 0.0005f, -15.8635f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 208:
			*uParam1 = { -452.4845f, -1591.881f, 43.1702f };
			*uParam2 = { -15.7272f, 0f, 116.1361f };
			return 1;
			break;
		
		case 209:
			*uParam1 = { 41.4086f, -1491.707f, 94.2915f };
			*uParam2 = { -83.0867f, 0f, -132.4861f };
			return 1;
			break;
		
		case 210:
			*uParam1 = { 213.7408f, 224.4167f, 107.2885f };
			*uParam2 = { -17.6158f, 0f, 124.3368f };
			return 1;
			break;
		
		case 211:
			*uParam1 = { -26.0418f, -1435.756f, 56.3367f };
			*uParam2 = { -85.6549f, 0.0007f, -100.97f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 212:
			*uParam1 = { -26.9523f, -1443.459f, 56.3006f };
			*uParam2 = { -82.158f, 0.0001f, -120.4657f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 213:
			*uParam1 = { 13.481f, 547.7665f, 201.6628f };
			*uParam2 = { -85.4529f, 32.8556f, -165.2088f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 214:
			*uParam1 = { 9.7918f, 546.587f, 201.411f };
			*uParam2 = { -85.6569f, 7.19613f, 128.447f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 215:
			*uParam1 = { 5.4402f, 547.371f, 201.086f };
			*uParam2 = { -75.7499f, -5.6172f, -42.2747f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 216:
			*uParam1 = { -1150.732f, 941.2178f, 224.4071f };
			*uParam2 = { -84.8486f, -22.4675f, 10.6362f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 217:
			*uParam1 = { -1690.135f, -945.0534f, 33.3591f };
			*uParam2 = { -85.6549f, 0.0007f, -128.97f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 221:
			*uParam1 = { -527.845f, -32.3779f, 69.5368f };
			*uParam2 = { -77.7626f, 15.8623f, -13.8244f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 222:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 223:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 224:
			*uParam1 = { 504.4986f, -1318.499f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 226:
			*uParam1 = { 30.1511f, -1357.028f, 54.6942f };
			*uParam2 = { -78.5097f, 0.001f, 21.588f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 227:
			*uParam1 = { -380.8515f, 226.4113f, 109.5036f };
			*uParam2 = { -78.5097f, 0.001f, -153.161f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 228:
			*uParam1 = { 135.3769f, -1305.289f, 54.269f };
			*uParam2 = { -81.3478f, 0.0016f, 71.6158f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		
		case 229:
			*uParam1 = { 789.0312f, -738.351f, 52.6819f };
			*uParam2 = { -81.3478f, 0.0016f, -42.3726f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		
		case 230:
			*uParam1 = { -296.2211f, -1326.732f, 56.6653f };
			*uParam2 = { -78.5097f, 0.001f, 177.9219f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 218:
			*uParam1 = { -6.8196f, -1411.324f, 55.2464f };
			*uParam2 = { -78.7542f, -0.0029f, 172.9781f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 219:
			*uParam1 = { -237.5357f, -1534.073f, 57.4441f };
			*uParam2 = { -78.2577f, 0.0009f, 122.6248f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 220:
			*uParam1 = { -21.2522f, -1820.312f, 51.5856f };
			*uParam2 = { -76.786f, 0.0038f, -145.6433f };
			*uParam3 = 43.299f;
			return 1;
			break;
		
		case 225:
			*uParam1 = { 189.5486f, -1676.406f, 54.9378f };
			*uParam2 = { -76.6137f, 0.0002f, -45.2699f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 231:
			*uParam2 = { -89.49953f, -1E-06f, (166.0406f - 180f) };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		
		case 232:
			*uParam1 = { -79.1742f, -1020.333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 233:
			*uParam1 = { -79.1742f, -1020.333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 235:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 236:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 237:
			*uParam1 = { 133.4546f, -1306.806f, 55.17f };
			*uParam2 = { -79.386f, -0.0059f, 29.3671f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 238:
			*uParam1 = { 135.0825f, -1306.157f, 54.8922f };
			*uParam2 = { -83.3399f, 0.2592f, 40.162f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 239:
			*uParam1 = { -50.4324f, 348.2621f, 157.2838f };
			*uParam2 = { -83.7124f, 0.0772f, 28.1343f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 240:
			*uParam1 = { 1534.406f, 3607.274f, 36.6934f };
			*uParam2 = { -12.1833f, 0f, 9.7072f };
			return 1;
			break;
		
		case 241:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 242:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 273:
			*uParam1 = { -119.1385f, -444.0774f, 61.0046f };
			*uParam2 = { -85.9063f, 0.0045f, -35.758f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 274:
			*uParam1 = { -1857.702f, 2072.045f, 166.0882f };
			*uParam2 = { -85.9063f, 0.0045f, 126.242f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 245:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 250:
			*uParam1 = { 287.7224f, -3200.387f, 31.6541f };
			*uParam2 = { -83.4634f, -0.0001f, -168.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 251:
			*uParam1 = { -869.8748f, 66.6628f, 77.9598f };
			*uParam2 = { -83.4634f, -0.0001f, 62.087f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 252:
			*uParam1 = { -44.7279f, -1473.664f, 57.8914f };
			*uParam2 = { -83.4634f, -0.0001f, 107.5896f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 253:
			*uParam1 = { 1874.677f, 2621.563f, 71.5578f };
			*uParam2 = { -83.4635f, -0.0001f, -120.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 243:
			*uParam1 = { 437.0992f, -1462.18f, 54.8615f };
			*uParam2 = { -83.9471f, 0.0018f, 96.0313f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 244:
			*uParam1 = { 442.4368f, -1461.108f, 54.2539f };
			*uParam2 = { -72.1078f, -0.0029f, 104.5689f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 271:
			*uParam1 = { -1267.94f, -1104.505f, 32.918f };
			*uParam2 = { -80.9687f, 0f, -3.6111f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 272:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 246:
			*uParam1 = { -1201.496f, -1571.586f, 29.7218f };
			*uParam2 = { -84.4445f, 0.0015f, -51.2858f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 247:
			*uParam1 = { -1322.594f, -1669.339f, 27.6893f };
			*uParam2 = { -81.6907f, 0.0005f, 60.2722f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 278:
			*uParam1 = { 638.9762f, -1002.293f, 68.2444f };
			*uParam2 = { -82.3678f, -0.0043f, -59.3736f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 279:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 280:
			*uParam1 = { 2786.551f, -1451.673f, 26.3083f };
			*uParam2 = { -81.3303f, -0.0028f, -117.8646f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 264:
			*uParam1 = { 492.7402f, -1337.7f, 53.2989f };
			*uParam2 = { -74.0621f, -0.0069f, 128.6647f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 266:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 265:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 267:
			*uParam1 = { 2210.537f, 4919.154f, 41.1959f };
			*uParam2 = { -3.5325f, 0f, 169.681f };
			return 1;
			break;
		
		case 268:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 269:
			*uParam1 = { 415.3352f, -800.8342f, 51.2722f };
			*uParam2 = { -17.2722f, 0f, -24.592f };
			return 1;
			break;
		
		case 270:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 255:
			*uParam1 = { 411.8938f, -1481.106f, 55.0911f };
			*uParam2 = { -73.5286f, 0.0012f, 177.4479f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 248:
			*uParam1 = { 297.5302f, 179.229f, 129.4594f };
			*uParam2 = { -83.7434f, 0.0126f, 62.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 249:
			*uParam1 = { 294.6928f, 195.4445f, 129.4204f };
			*uParam2 = { -77.0175f, -0.0008f, 155.6596f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 281:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 50f;
			return 0;
			break;
		
		case 282:
			*uParam1 = { Vector(22.1187f, 2873.078f, -930.9908f) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f), 0f, 0f) };
			*uParam2 = { -89.49953f, -1E-06f, 1.040573f };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		
		case 283:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 284:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 275:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		
		case 276:
			*uParam1 = { 1893.4f, 2303.4f, (54.5f + 30f) };
			*uParam2 = { -89.4995f, 0.0001f, -15.996f };
			*uParam3 = 55f;
			return 1;
			break;
		
		case 277:
			*uParam1 = { 1076.988f, 2685.153f, (37.973f + 30f) };
			*uParam2 = { -89.4995f, 0.0796f, -93.9607f };
			*uParam3 = 55f;
			return 1;
			break;
		
		case 254:
			*uParam1 = { 150.8545f, -214.1522f, 79.4128f };
			*uParam2 = { -78.7899f, -0.0026f, -136.2629f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 285:
			*uParam1 = { 43.4637f, -2055.634f, 47.3524f };
			*uParam2 = { -80.4436f, 0f, -109.8209f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 256:
			*uParam1 = { -1241.5f, -1099.606f, 10.4958f };
			*uParam2 = { -8.2431f, 0f, 146.4822f };
			return 1;
			break;
		
		case 257:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 258:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 259:
			*uParam1 = { -725.9904f, -1305.716f, 30.7195f };
			*uParam2 = { -86.3376f, 0.0189f, -169.3006f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 260:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 261:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 286:
			*uParam1 = { -1275.476f, -1194.211f, 38.3756f };
			*uParam2 = { -84.3481f, -0.0001f, -125.4683f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 287:
			*uParam1 = { -876.4864f, -849.5565f, 45.7044f };
			*uParam2 = { -65.634f, -0.0013f, 106.1902f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 288:
			*uParam1 = { -1708.97f, -1055.762f, 44.8272f };
			*uParam2 = { -76.5326f, -0.0048f, -144.2845f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 262:
			*uParam1 = { -1153.228f, -1526.379f, 30.1087f };
			*uParam2 = { -87.0602f, 0.0019f, -17.9875f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 263:
			*uParam1 = { -562.2963f, -1256.627f, 38.9716f };
			*uParam2 = { -80.9113f, -0.0008f, 143.1449f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 289:
			*uParam1 = { 442.2141f, -229.2575f, 81.2032f };
			*uParam2 = { -83.8876f, -0.0064f, 45.2185f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 290:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 291:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 292:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 293:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 294:
			return func_569(293, uParam1, uParam2, uParam3);
			break;
		
		case 295:
			return func_569(292, uParam1, uParam2, uParam3);
			break;
		
		case 299:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 300:
			return func_569(303, uParam1, uParam2, uParam3);
			break;
		
		case 301:
			return func_569(303, uParam1, uParam2, uParam3);
			break;
		
		case 302:
			return func_569(303, uParam1, uParam2, uParam3);
			break;
		
		case 303:
			*uParam1 = { -1173.498f, -1515.83f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		
		case 296:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 297:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 298:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 304:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 305:
			*uParam1 = { 1395.495f, 3601.725f, 39.5656f };
			*uParam2 = { -6.5114f, 0f, 79.7777f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 306:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 307:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 308:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 309:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 310:
			*uParam1 = { 2022.29f, 3405.734f, 68.8313f };
			*uParam2 = { -84.787f, 0.0001f, 143.9959f };
			*uParam3 = 45f;
			return 1;
			break;
		
		case 311:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 312:
			*uParam1 = { -272.257f, 6628.256f, 8.3634f };
			*uParam2 = { -13.8262f, 0f, 79.1812f };
			return 1;
			break;
		
		case 313:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 314:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		
		case 234:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 316:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		case 315:
			*uParam1 = { 1976.576f, 3803.561f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		
		default:
			func_586(iParam0, &Var0, &fVar3, &cVar4);
			*uParam1 = { Var0 + Vector(0f, -5f, 0f) };
			*uParam2 = { 0f, 0f, -fVar3 };
			return 1;
			break;
	}
	func_586(iParam0, &Var12, &uVar15, &cVar16);
	*uParam1 = { Var12 + Vector(0f, -5f, 0f) };
	*uParam2 = { 0f, 0f, 0f };
	return 0;
}

















int func_586(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0x72FC1
{
	int iVar0;
	
	if (func_588(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				GlobalFunc_5936(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_85570[iVar0 /*9*/].f_3 };
					*uParam2 = Global_85570[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_85570[0 /*9*/].f_3 };
					*uParam2 = Global_85570[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_88210[0 /*109*/].f_4 };
				*uParam2 = Global_88210[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_88210[1 /*109*/].f_4 };
				*uParam2 = Global_88210[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_88210[2 /*109*/].f_4 };
				*uParam2 = Global_88210[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_88538[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}


int func_588(int iParam0, var uParam1, char* sParam2)//Position - 0x7326E
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			GlobalFunc_5936(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_85570[iVar3 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_85570[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_88210[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_88210[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_88210[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[0];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[2];
			StringCopy(sParam2, GlobalFunc_2942(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[2]), 32);
			return 1;
			break;
		
		case 11:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_588(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_588(8, uParam1, sParam2);
			break;
		
		case 13:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_588(208, uParam1, sParam2);
			break;
		
		case 24:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (GlobalFunc_506(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (GlobalFunc_5937(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_588(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_588(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_588(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_588(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_588(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_588(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			Var8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var8.x, -Var8.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			Var11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var11.x, -Var11.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			Var14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var14.x, -Var14.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			Var17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var17.x, -Var17.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}








int func_596(int iParam0, bool bParam1)//Position - 0x77A04
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_599(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_388(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_285(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_599(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x77BBC
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
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8645(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11326(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_390(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}









void func_608(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x788DA
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
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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




int func_612(int iParam0, float fParam1, int iParam2)//Position - 0x78B1B
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_7104(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_109())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}









void func_621()//Position - 0x78EB6
{
	switch (iLocal_127)
	{
		case 0:
			if (iLocal_140 == 0)
			{
				GlobalFunc_164("MRSP2_OBJ_03", 7500, 1);
				iLocal_140 = 1;
			}
			uLocal_131 = GlobalFunc_2324(Local_135, 5, 0);
			CUTSCENE::REQUEST_CUTSCENE("TMOM_2_RCM", 8);
			iLocal_127 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_129))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_135, 1f, 1f, Global_21.f_2, 1, 1, 0))
				{
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1973.324f, 3815.594f, 31.42936f, 1974.936f, 3812.747f, 34.438f, 6.5f, 0, 1, 0))
				{
					iLocal_127 = 2;
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_129, Local_132, 10f, 10f, 10f, 0, 1, 0))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					GlobalFunc_846(&uLocal_131);
					func_648(0);
				}
			}
			else
			{
				func_648(3);
			}
			break;
		
		case 2:
			GlobalFunc_846(&uLocal_131);
			if (GlobalFunc_2017("MRSP_01_HELP"))
			{
				GlobalFunc_5207("MRSP_01_HELP", 1);
			}
			func_648(2);
			break;
	}
}









void func_630()//Position - 0x792CE
{
	switch (iLocal_127)
	{
		case 0:
			GlobalFunc_4923(&Local_65, 0, 1);
			HUD::REQUEST_ADDITIONAL_TEXT("MRSP2", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_127 = 1;
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_129))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_129, 0))
				{
					GlobalFunc_846(&uLocal_130);
					if (!HUD::DOES_BLIP_EXIST(uLocal_131))
					{
						HUD::CLEAR_PRINTS();
						uLocal_131 = GlobalFunc_2324(Local_132, 5, 1);
					}
					if (iLocal_138 == 0)
					{
						GlobalFunc_164("MRSP2_OBJ_01", 7500, 1);
						iLocal_138 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_129, Local_132, Global_18, 1, 1, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 2f, 1);
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_129, 10f, 1, 0);
						iLocal_127 = 2;
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == joaat("rumpo2"))
					{
						GlobalFunc_846(&uLocal_130);
						GlobalFunc_190(&iLocal_129);
						iLocal_129 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
				}
				else
				{
					GlobalFunc_846(&uLocal_131);
					if (!HUD::DOES_BLIP_EXIST(uLocal_130))
					{
						HUD::CLEAR_PRINTS();
						uLocal_130 = GlobalFunc_5743(iLocal_129, 1, 5);
					}
					if (iLocal_139 == 0)
					{
						GlobalFunc_164("MRSP2_OBJ_02", 7500, 1);
						iLocal_139 = 1;
					}
				}
			}
			else
			{
				func_648(3);
			}
			break;
		
		case 2:
			GlobalFunc_846(&uLocal_131);
			GlobalFunc_846(&uLocal_130);
			func_648(1);
			break;
	}
}




void func_634(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x79582
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













void func_647(int iParam0, int iParam1, int iParam2)//Position - 0x79DA9
{
	func_226(0, 0, iParam2, 1);
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

void func_648(int iParam0)//Position - 0x79DDD
{
	iLocal_126 = iParam0;
	iLocal_127 = 0;
}



void func_651(bool bParam0, bool bParam1)//Position - 0x79EC4
{
	if (bParam0)
	{
		func_652(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_608(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_652(bool bParam0, int iParam1, int iParam2)//Position - 0x79EF7
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
			func_226(iParam1, iParam2, 1, 1);
		}
	}
}







void func_659()//Position - 0x7A103
{
	if (GlobalFunc_9159())
	{
	}
	STREAMING::REMOVE_ANIM_DICT("rcmtmom_2leadinout");
	func_660(&Local_65, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_660(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7A126
{
	GlobalFunc_7101(uParam0, iParam1);
	func_665(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}





void func_665(var uParam0, bool bParam1)//Position - 0x7A1FC
{
	func_666(&(uParam0->f_35), bParam1);
}

void func_666(var uParam0, bool bParam1)//Position - 0x7A20E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			GlobalFunc_7107(uParam0[iVar0]);
		}
		else
		{
			GlobalFunc_190(uParam0[iVar0]);
		}
		iVar0++;
	}
}








void func_674(bool bParam0)//Position - 0x7A493
{
	int iVar0;
	
	GlobalFunc_8958();
	if (!GlobalFunc_142())
	{
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
		if (Global_84542 == Global_89999)
		{
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4++;
		}
		Global_84542 = Global_89999;
		if (bParam0)
		{
			GlobalFunc_7620(iVar0, 1, 0);
			GlobalFunc_8957(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_96440[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
			}
			func_186(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}





















