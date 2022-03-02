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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[3] = { 0, 0, 0 };
	int iLocal_70[3] = { 0, 0, 0 };
	int iLocal_74[3] = { 0, 0, 0 };
	int iLocal_78[3] = { 0, 0, 0 };
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84[3] = { 0, 0, 0 };
	var uLocal_88[3] = { 0, 0, 0 };
	var uLocal_92[3] = { 0, 0, 0 };
	var uLocal_96 = 0;
	char* sLocal_97 = NULL;
	var uLocal_98 = 16;
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
	var uLocal_262 = 0;
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
	struct<3> Var0;
	
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_50 = { 928.0903f, 1733.12f, 165.1067f };
	Local_53 = { 2374.21f, 316.6781f, 180.4001f };
	Local_56 = { -804.8174f, 4051.37f, 159.6384f };
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	func_140();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_128();
	}
	if (func_127())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_85(Local_47, 29, iLocal_59, 0, 0))
	{
		GlobalFunc_6828(29);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var0 = { GlobalFunc_80(PLAYER::PLAYER_ID()) };
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Var0.x - 2000f), (Var0.f_1 - 2000f), (Var0.x + 2000f), (Var0.f_1 + 2000f));
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!GlobalFunc_6827())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				if (!GlobalFunc_6827())
				{
					if (GlobalFunc_10589())
					{
						func_128();
					}
				}
				RECORDING::_0x208784099002BC30("RE_BP", 0);
				switch (iLocal_46)
				{
					case 0:
						if (func_66())
						{
							SYSTEM::SETTIMERA(15000);
							iLocal_60 = 1;
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!GlobalFunc_6827())
						{
							GlobalFunc_9034(1);
						}
						break;
				}
			}
			else
			{
				func_128();
			}
		}
		else
		{
			func_52();
			func_51();
			if (func_50())
			{
				func_33();
				if (func_32())
				{
					func_2();
				}
			}
			else if (iLocal_83 < 3)
			{
				func_2();
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x1EB
{
	func_128();
}

void func_2()//Position - 0x1F7
{
	GlobalFunc_82();
	GlobalFunc_7068();
	func_3(29, iLocal_59);
	func_128();
}

void func_3(int iParam0, int iParam1)//Position - 0x214
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





























int func_32()//Position - 0x17E0
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_33()//Position - 0x1810
{
	int iVar0;
	
	if (!GlobalFunc_111())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_84[iVar0], 0)) < 400f)
				{
					if (!iLocal_61)
					{
						if (iLocal_82 == 2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f)
							{
								iLocal_61 = 1;
								iLocal_82 = 3;
							}
							else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
							{
								iLocal_61 = 1;
								iLocal_82 = 3;
							}
						}
						if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_84[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_84[iVar0]))
						{
							iLocal_61 = 1;
							iLocal_64 = 1;
							iLocal_63 = 1;
							iLocal_82 = 3;
						}
					}
					if (!iLocal_61 || iLocal_82 < 3)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!TASK::IS_PED_IN_WRITHE(uLocal_84[iVar0]))
							{
								GlobalFunc_200(&uLocal_98, 1);
								GlobalFunc_878(&uLocal_98, 1, uLocal_84[iVar0], "BorderPatrol", 0, 1);
								if (iLocal_82 == 0)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (GlobalFunc_745())
										{
											GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_INS1", 4, 0, 0, 0);
										}
										else
										{
											GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
										}
										iLocal_82++;
									}
									else
									{
										GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
									}
								}
								else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_STOP", 4, 0, 0, 0);
									iLocal_82++;
								}
								else
								{
									GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_PULL", 4, 0, 0, 0);
								}
								iLocal_62 = 1;
								iLocal_82++;
								if (iLocal_82 >= 3)
								{
									iLocal_61 = 1;
								}
								SYSTEM::SETTIMERA(0);
							}
						}
					}
					else if (!iLocal_63)
					{
						if (!GlobalFunc_111() && !TASK::IS_PED_IN_WRITHE(uLocal_84[iVar0]))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_96, 1862763509);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_84[iVar0], 2, 1);
							GlobalFunc_200(&uLocal_98, 1);
							GlobalFunc_878(&uLocal_98, 1, uLocal_84[iVar0], "BorderPatrol", 0, 1);
							if (GlobalFunc_8354() == 0)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_ATTM", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 1)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_ATTF", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 2)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_ATTT", 4, 0, 0, 0);
							}
							iLocal_63 = 1;
							iLocal_61 = 1;
							SYSTEM::SETTIMERA(0);
						}
					}
					else if (!GlobalFunc_111())
					{
						if (!iLocal_65)
						{
							if (GlobalFunc_8354() == 0)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_REACTM", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 1)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_REACTF", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 2)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_REACTT", 4, 0, 0, 0);
							}
							iLocal_65 = 1;
						}
						if (SYSTEM::TIMERA() > 5000 && !TASK::IS_PED_IN_WRITHE(uLocal_84[iVar0]))
						{
							GlobalFunc_200(&uLocal_98, 1);
							GlobalFunc_878(&uLocal_98, 1, uLocal_84[iVar0], "BorderPatrol", 0, 1);
							if (GlobalFunc_8354() == 0)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_CONM", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 1)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_CONF", 4, 0, 0, 0);
							}
							else if (GlobalFunc_8354() == 2)
							{
								GlobalFunc_10643(&uLocal_98, "REBORAU", "REBOR_COTT", 4, 0, 0, 0);
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

















int func_50()//Position - 0x2327
{
	int iVar0;
	
	iLocal_83 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(uLocal_84[iVar0], 0)) < 62500f)
			{
				return 1;
			}
			else
			{
				iLocal_83++;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_51()//Position - 0x2381
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
		{
			if (!iLocal_64)
			{
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_84[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_84[iVar0]))
				{
					iLocal_61 = 1;
					iLocal_64 = 1;
					iLocal_63 = 1;
					iLocal_82 = 3;
				}
			}
			if (iLocal_63 || iLocal_64)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_66[iVar0])
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_88[iVar0]))
						{
							TASK::TASK_VEHICLE_MISSION(uLocal_84[iVar0], uLocal_88[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
						}
						if (!iLocal_64)
						{
							SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
						}
						else
						{
							SYSTEM::WAIT(0);
						}
						if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
							{
								TASK::TASK_DRIVE_BY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, 1, -753768974);
								PED::SET_PED_KEEP_TASK(uLocal_84[iVar0], 1);
							}
						}
						iLocal_70[iVar0] = 0;
						iLocal_66[iVar0] = 1;
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_70[iVar0])
					{
						if (!PED::IS_PED_INJURED(uLocal_84[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_88[iVar0]))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_84[iVar0], uLocal_88[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
							if (!iLocal_64)
							{
								SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
							}
							else
							{
								SYSTEM::WAIT(0);
							}
							if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
								{
									TASK::TASK_DRIVE_BY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, 1, -753768974);
									PED::SET_PED_KEEP_TASK(uLocal_84[iVar0], 1);
								}
							}
							iLocal_66[iVar0] = 0;
							iLocal_70[iVar0] = 1;
						}
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
				{
					TASK::TASK_COMBAT_PED(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(uLocal_84[iVar0], 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_74[iVar0])
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_84[iVar0], 579380604) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_84[iVar0], 579380604) != 0)
					{
						TASK::CLEAR_PED_TASKS(uLocal_84[iVar0]);
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_88[iVar0]))
						{
							TASK::TASK_VEHICLE_MISSION(uLocal_84[iVar0], uLocal_88[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
							TASK::TASK_LOOK_AT_ENTITY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						}
						iLocal_78[iVar0] = 0;
						iLocal_74[iVar0] = 1;
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !iLocal_78[iVar0])
				{
					if ((!PED::IS_PED_INJURED(uLocal_84[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(uLocal_88[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_84[iVar0]);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_84[iVar0], uLocal_88[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, 1);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						iLocal_74[iVar0] = 0;
						iLocal_78[iVar0] = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f, 2f, -1, 1036831949, 1);
			}
			if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(uLocal_84[iVar0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_84[iVar0], 0, 0);
					}
					if (!PED::IS_PED_IN_COMBAT(uLocal_84[iVar0], 0))
					{
						TASK::TASK_COMBAT_PED(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(uLocal_84[iVar0], 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 13f)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), PED::GET_VEHICLE_PED_IS_IN(uLocal_84[iVar0], 0)))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_84[iVar0], 3);
					}
					else
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_84[iVar0], 1);
					}
				}
				else
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_84[iVar0], 1);
				}
			}
			if (func_127())
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uLocal_84[iVar0]))
		{
			iLocal_64 = 1;
			iLocal_63 = 1;
		}
		iVar0++;
	}
}

void func_52()//Position - 0x2857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uLocal_84[iVar0]))
		{
			if (iLocal_62 || iLocal_61)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_92[iVar0]))
				{
					uLocal_92[iVar0] = GlobalFunc_7502(uLocal_84[iVar0], 1, 145);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_92[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_92[iVar0]));
		}
		iVar0++;
	}
}














int func_66()//Position - 0x2F2E
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar6 = joaat("sanchez");
	iVar7 = joaat("blazer");
	iVar8 = joaat("a_m_m_hillbilly_02");
	STREAMING::REQUEST_MODEL(iVar8);
	STREAMING::REQUEST_MODEL(iVar6);
	STREAMING::REQUEST_MODEL(iVar7);
	if ((STREAMING::HAS_MODEL_LOADED(iVar8) && STREAMING::HAS_MODEL_LOADED(iVar6)) && STREAMING::HAS_MODEL_LOADED(iVar7))
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_88[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_88[1], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_88[2], 0))
		{
			return 1;
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -25f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1, &Var0, &uVar3, 1, 1077936128, 0);
				if (!CAM::IS_SPHERE_VISIBLE(Var0, 5f))
				{
					PED::ADD_RELATIONSHIP_GROUP("re_border badGuys", &uLocal_96);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, uLocal_96, 1862763509);
					iVar4 = 0;
					while (iVar4 < 3)
					{
						Var0.x = (Var0.x + SYSTEM::TO_FLOAT(iVar4));
						Var0.f_1 = (Var0.f_1 + SYSTEM::TO_FLOAT(iVar4));
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						if (iVar5 > 1)
						{
							uLocal_88[iVar4] = VEHICLE::CREATE_VEHICLE(iVar6, Var0, uVar3, 1, 1);
						}
						else
						{
							uLocal_88[iVar4] = VEHICLE::CREATE_VEHICLE(iVar7, Var0, uVar3, 1, 1);
						}
						uLocal_84[iVar4] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_88[iVar4], 22, iVar8, -1, 1, 1);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_84[iVar4], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						PED::SET_PED_KEEP_TASK(uLocal_84[iVar4], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_84[iVar4], 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_84[iVar4], uLocal_96);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_84[iVar4], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_88[iVar4], ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
						PED::SET_PED_COMBAT_MOVEMENT(uLocal_84[iVar4], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_84[iVar4], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_84[iVar4], 2, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_84[iVar4], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_84[iVar4], 52, 1);
						PED::SET_PED_ACCURACY(uLocal_84[iVar4], 5);
						PED::SET_PED_FIRING_PATTERN(uLocal_84[iVar4], 1566631136);
						PED::SET_PED_SHOOT_RATE(uLocal_84[iVar4], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_84[iVar4], 1);
						PED::SET_PED_CONFIG_FLAG(uLocal_84[iVar4], 42, 1);
						PED::SET_PED_HELMET(uLocal_84[iVar4], 0);
						PED::SET_PED_MONEY(uLocal_84[iVar4], 233);
						AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_84[iVar4], "A_M_M_HILLBILLY_02_WHITE_MINI_04");
						AUDIO::STOP_PED_SPEAKING(uLocal_84[iVar4], 1);
						iVar4++;
					}
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_88[0], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_88[1], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uLocal_88[2], 2);
				}
			}
			switch (GlobalFunc_8354())
			{
				case 0:
					sLocal_97 = "MICHAEL";
					break;
				
				case 1:
					sLocal_97 = "FRANKLIN";
					break;
				
				case 2:
					sLocal_97 = "TREVOR";
					break;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			GlobalFunc_878(&uLocal_98, 0, PLAYER::PLAYER_PED_ID(), sLocal_97, 0, 1);
			GlobalFunc_878(&uLocal_98, 1, uLocal_84[0], "BorderPatrol", 0, 1);
		}
	}
	return 0;
}



















int func_85(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4E8E
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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










































int func_127()//Position - 0x64AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("ambulance"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("firetruk"))) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_96400 == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_128()//Position - 0x6543
{
	int iVar0;
	
	if (iLocal_60)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!PED::IS_PED_INJURED(uLocal_84[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_84[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(uLocal_84[iVar0], 1);
			}
			iVar0++;
		}
	}
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		if (GlobalFunc_6827())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












Vector3 func_140()//Position - 0x6D96
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1);
		iLocal_59 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_53, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_53, 1);
			iLocal_59 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_56, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_56, 1);
			iLocal_59 = 3;
		}
		if (iLocal_59 == 1)
		{
			return Local_50;
		}
		else if (iLocal_59 == 2)
		{
			return Local_53;
		}
		else if (iLocal_59 == 3)
		{
			return Local_56;
		}
	}
	return 0f, 0f, 0f;
}

