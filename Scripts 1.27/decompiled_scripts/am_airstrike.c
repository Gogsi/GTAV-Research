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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	struct<57> Local_241 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_298[2];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_98(ScriptParam_0);
	}
	while (true)
	{
		func_97();
		if (func_87())
		{
			func_82();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_81();
			switch (func_80(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_79() > 0)
					{
						Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_79() == 3)
					{
						Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_82();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_79())
				{
					case 0:
						Local_241 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x122
{
	switch (Local_241.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_241.f_2.f_2 == 3 && iLocal_56 == 0)
	{
		Local_241 = 3;
	}
	func_17();
	if (Local_241.f_53 && Local_241.f_50 < 10)
	{
		func_12();
	}
	if (Local_241.f_50 >= 10)
	{
		if (!func_11(&uLocal_68))
		{
			func_10(&uLocal_68, 0, 0);
		}
		else if (func_9(&uLocal_68, 10000, 0))
		{
			Local_241 = 3;
		}
	}
	if (func_8())
	{
		Local_241 = 3;
	}
	if (Local_241.f_55 == 1)
	{
		if (!Local_241.f_56)
		{
			if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_241.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!func_3(PLAYER::PLAYER_ID(), 1))
		{
			Local_241 = 3;
		}
	}
	else if (func_3(PLAYER::PLAYER_ID(), 1) || func_2())
	{
		Local_241 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_241 = 3;
	}
}

bool func_2()//Position - 0x23D
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18, 0);
}

int func_3(int iParam0, bool bParam1)//Position - 0x259
{
	if (bParam1)
	{
		if (func_4(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_4(int iParam0)//Position - 0x285
{
	return func_5(iParam0);
}

bool func_5(int iParam0)//Position - 0x293
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)//Position - 0x2AD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)//Position - 0x2C4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_8()//Position - 0x2D7
{
	return Global_1312418;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x2E3
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x341
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)//Position - 0x386
{
	return uParam0->f_1;
}

void func_12()//Position - 0x392
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (func_16(Local_62))
	{
		if (func_14(Local_241.f_2))
		{
			Local_62 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_241.f_2), 1) };
			Local_62.f_2 = (Local_62.f_2 - 5f);
		}
	}
	switch (Local_241.f_50)
	{
		case 0:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), PLAYER::PLAYER_PED_ID(), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					iLocal_56 = 1;
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!MISC::IS_BIT_SET(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2));
					Var3.f_2 = (Var3.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1, 0, -1f, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
					Local_241.f_50++;
					iLocal_56 = 0;
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)//Position - 0xD56
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)//Position - 0xD63
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_15(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xD83
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_16(struct<3> Param0)//Position - 0xDBB
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0xDE5
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_14(Local_241.f_2))
	{
		uVar0 = NETWORK::NET_TO_VEH(Local_241.f_2);
		Var4 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
	}
	if (!iLocal_58)
	{
		if (!func_16(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			Var1 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (func_23(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (bLocal_57)
	{
		if (!iLocal_58)
		{
			if (func_14(Local_241.f_2))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_65 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 0);
				}
				else
				{
					iLocal_58 = 1;
				}
			}
			else
			{
				iLocal_58 = 1;
			}
		}
		else
		{
			fLocal_65 = (fLocal_65 - 3.75f);
		}
		iVar7 = SYSTEM::FLOOR(fLocal_65);
		if (fLocal_65 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_65 >= 0f)
		{
			func_18(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0xEF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_21(6, iVar0);
		Global_1328872.f_2704[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_2704.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_2704.f_147[iVar0] = iParam3;
		Global_1328872.f_2704.f_138[iVar0] = iParam2;
		Global_1328872.f_2704.f_210[iVar0] = iParam4;
		Global_1328872.f_2704.f_219[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_2704.f_228[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_2704.f_357[iVar0] = iParam7;
		Global_1328872.f_2704.f_366[iVar0] = fParam8;
		Global_1328872.f_2704.f_401[iVar0] = iParam9;
		Global_1328872.f_2704.f_410[iVar0] = iParam10;
		Global_1328872.f_2704.f_165[iVar0] = iParam11;
		Global_1328872.f_2704.f_174[iVar0] = iParam12;
		Global_1328872.f_2704.f_183[iVar0] = iParam13;
		Global_1328872.f_2704.f_192[iVar0] = iParam14;
		Global_1328872.f_2704.f_201[iVar0] = iParam15;
		Global_1328872.f_2704.f_419[iVar0] = iParam16;
		if (iParam15 == 4 && func_20())
		{
			Global_1328872.f_764 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 1000)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328872.f_768 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328872.f_767 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328872.f_764 = 1;
			}
			if (func_19())
			{
				Global_1328872.f_768 = 1;
			}
		}
	}
}

int func_19()//Position - 0x10D1
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()//Position - 0x10F5
{
	if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)//Position - 0x1126
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)//Position - 0x113F
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x1158
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_24()//Position - 0x119C
{
}

void func_25()//Position - 0x11A4
{
	struct<3> Var0;
	bool bVar3;
	
	func_77();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!iLocal_55)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_76();
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 1, bVar3, bVar3);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 100f, &(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1))
			{
				if (func_75(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f))
				{
					Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!iLocal_54)
				{
					if (!func_74(Local_241.f_2.f_3))
					{
						if (func_14(Local_241.f_2))
						{
							func_73();
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_241.f_2.f_3));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_241.f_2.f_3), uLocal_48);
							VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_241.f_2), SYSTEM::ROUND(50f));
							iLocal_54 = 1;
						}
					}
				}
			}
			else if (!iLocal_53)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_72(PLAYER::PLAYER_PED_ID()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_53 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()//Position - 0x12F1
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_241.f_2))
			{
				bLocal_57 = true;
				uVar0 = NETWORK::NET_TO_VEH(Local_241.f_2);
				if (!HUD::DOES_BLIP_EXIST(uLocal_46))
				{
					uLocal_46 = HUD::ADD_BLIP_FOR_ENTITY(uVar0);
					HUD::SET_BLIP_SPRITE(uLocal_46, 16);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_46, "AIRSTRIKE_5");
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_46, 0);
				}
				else
				{
					HUD::SET_BLIP_ROTATION(uLocal_46, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEADING(uVar0)));
				}
				if (!iLocal_52)
				{
					if (!func_16(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
					{
						Var7 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_59 };
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1) <= (60f * 5f))
					{
						AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NET_TO_VEH(Local_241.f_2));
						iLocal_52 = 1;
					}
				}
				if (!iLocal_238)
				{
					if (!Local_241.f_54)
					{
						if (!func_74(Local_241.f_2.f_3))
						{
							if (!func_16(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_241.f_2.f_3), 1), 0) <= 250f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_72, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_238 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_241.f_50 < 10)
				{
					if (!Local_241.f_53)
					{
						if (!func_16(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_66))
								{
									func_10(&uLocal_66, 0, 0);
								}
								else if (func_9(&uLocal_66, 7500, 0))
								{
									Local_241.f_53 = 1;
								}
								Var1 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_241.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_241.f_53 = 1;
								Local_241.f_50 = 100;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_241.f_53 = 1;
							Local_241.f_50 = 100;
							Local_241.f_54 = 1;
							if (!iLocal_239)
							{
								func_30(&uLocal_72, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_239 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_241.f_2) || func_74(Local_241.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()//Position - 0x15E4
{
	var uVar0;
	
	if (!func_74(Local_241.f_2.f_3))
	{
		if (func_28(Local_241.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_241.f_2.f_3))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_241.f_2.f_3);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)//Position - 0x1627
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_29()//Position - 0x164B
{
	if (Local_241.f_55 == 1)
	{
		return Local_241.f_55;
	}
	else if (Local_241.f_55 == 2)
	{
		return Local_241.f_55;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_241.f_55 = 1;
		return Local_241.f_55;
	}
	Local_241.f_55 = 2;
	return Local_241.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16A6
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x16F4
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_43();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_36();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_34())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_32();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_45();
	}
	return 0;
}

void func_32()//Position - 0x19C0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_33()//Position - 0x19F1
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_34()//Position - 0x1A86
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1AAD
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_36()//Position - 0x1B46
{
	if (func_42(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_37();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_37()//Position - 0x1BE7
{
	func_38();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_38()//Position - 0x1C00
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_41(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_40(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_42(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_39(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_39(int iParam0)//Position - 0x1CFD
{
	return iParam0 < 3;
}

int func_40(int iParam0)//Position - 0x1D09
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)//Position - 0x1D46
{
	if (func_39(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x1D70
{
	return Global_34913 == iParam0;
}

void func_43()//Position - 0x1D7E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)//Position - 0x1DD5
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_45()//Position - 0x1E10
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1E67
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

Vector3 func_47(int iParam0)//Position - 0x1EBD
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_48()//Position - 0x1ED0
{
	if (HUD::DOES_BLIP_EXIST(uLocal_46))
	{
		HUD::REMOVE_BLIP(&uLocal_46);
	}
}

void func_49()//Position - 0x1EE7
{
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_71(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_71(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_241.f_2))
			{
				if (func_74(Local_241.f_2.f_3))
				{
					func_71(3);
				}
			}
			else if (func_74(Local_241.f_2.f_3))
			{
				func_71(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()//Position - 0x1F62
{
	if (!func_11(&uLocal_70))
	{
		func_10(&uLocal_70, 0, 0);
	}
	else if (func_70(Local_241.f_2.f_1) && func_70(Local_241.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_70, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()//Position - 0x1FBF
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2.f_3) && func_70(Local_241.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (func_14(Local_241.f_2))
		{
			if (func_53(&(Local_241.f_2.f_3), Local_241.f_2, 22, Local_241.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_241.f_2.f_3), Global_1574053);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_241.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_241.f_2.f_3), 1);
				func_52();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_241.f_2.f_3), uLocal_47);
				VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_241.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_241.f_2.f_3.f_1);
	return 1;
}

void func_52()//Position - 0x20A4
{
	if (!iLocal_49)
	{
		if (func_14(Local_241.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_59 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
			iLocal_49 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2132
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x21BA
{
	struct<3> Var0;
	var uVar3;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (func_70(Local_241.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_66(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_55(&(Local_241.f_2), Local_241.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_241.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_241.f_2), 2);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_241.f_2), 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_241.f_2), 1);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_241.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_241.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_241.f_2), 1, 1);
						VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(NETWORK::NET_TO_VEH(Local_241.f_2), 1000);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_241.f_2), 0);
						VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_241.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_241.f_2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_241.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x22D2
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam10);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam8)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
			else
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
			}
		}
		VEHICLE::SET_VEHICLE_IS_STOLEN(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)//Position - 0x2355
{
	Global_2404548 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404548++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_57(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404548++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x2452
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x2608
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)//Position - 0x2632
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_60(int iParam0, bool bParam1)//Position - 0x267D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()//Position - 0x26BE
{
	return Global_1312737;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)//Position - 0x26CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x27C6
{
	if (func_65(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_64(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_64(var uParam0)//Position - 0x27FC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0, var uParam1)//Position - 0x2813
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_64(iParam0) };
		Global_2445595 = { func_64(uParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445582))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445595))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_66(var uParam0, var uParam1)//Position - 0x2880
{
	float fVar0;
	
	*uParam0 = { func_68(Local_59 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_67(*uParam0, Local_59);
}

var func_67(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x28F8
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_68(struct<3> Param0, float fParam3, float fParam4, float fParam5)//Position - 0x2912
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_69(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_69(struct<3> Param0, float fParam3)//Position - 0x295B
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_70(int iParam0)//Position - 0x2992
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_71(int iParam0)//Position - 0x29B0
{
	Local_241.f_2.f_2 = iParam0;
}

int func_72(int iParam0)//Position - 0x29C0
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()//Position - 0x29F5
{
	if (!iLocal_50)
	{
		if (func_14(Local_241.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_48);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_74(var uParam0)//Position - 0x2A8C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

bool func_75(struct<3> Param0, struct<3> Param3)//Position - 0x2AAB
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_76()//Position - 0x2AD4
{
	return Global_90014.f_290 > 0;
}

void func_77()//Position - 0x2AE5
{
	if (!iLocal_237)
	{
		if (!func_74(Local_241.f_2.f_3))
		{
			func_78(&uLocal_72, 3, NETWORK::NET_TO_PED(Local_241.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_237 = 1;
		}
	}
}

void func_78(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2B1A
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_79()//Position - 0x2BB5
{
	return Local_241;
}

int func_80(int iParam0)//Position - 0x2BBF
{
	return Local_298[iParam0 /*5*/];
}

void func_81()//Position - 0x2BCE
{
}

void func_82()//Position - 0x2BD6
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (func_14(Local_241.f_2) && !func_74(Local_241.f_2.f_3))
		{
			TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_241.f_2.f_3), NETWORK::NET_TO_VEH(Local_241.f_2), 0, PLAYER::PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_84(func_86(1, 1), 11, func_85());
	func_83();
}

void func_83()//Position - 0x2C58
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_84(int iParam0, int iParam1, var uParam2)//Position - 0x2C64
{
	struct<4> Var0;
	
	Var0 = 293;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_85()//Position - 0x2C9A
{
	return -1;
}

int func_86(int iParam0, bool bParam1)//Position - 0x2CA3
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_87()//Position - 0x2D08
{
	bool bVar0;
	
	func_94(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_92())
	{
		return 1;
	}
	if (func_91(157))
	{
		if (!func_90())
		{
			return 1;
		}
	}
	if (func_91(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x2D9B
{
	switch (func_89())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()//Position - 0x2DCF
{
	return Global_24444;
}

bool func_90()//Position - 0x2DDA
{
	return Global_2428131.f_572;
}

int func_91(int iParam0)//Position - 0x2DE9
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_92()//Position - 0x2E00
{
	return Global_2435238;
}

bool func_93()//Position - 0x2E0C
{
	return Global_2428131.f_567;
}

void func_94(var uParam0)//Position - 0x2E1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_95(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_95(int iParam0)//Position - 0x2E8B
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_96(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_96(int iParam0, var uParam1)//Position - 0x2F0C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97()//Position - 0x2F5A
{
	SYSTEM::WAIT(0);
}

void func_98(struct<20> Param0)//Position - 0x2F67
{
	func_104(func_105(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_102(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_241, 57);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_298, 11);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_101())
	{
		func_82();
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	if (func_3(PLAYER::PLAYER_ID(), 1))
	{
		bLocal_51 = true;
	}
	func_99(64, 1);
	Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_99(int iParam0, bool bParam1)//Position - 0x2FEA
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_100() /*8053*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_100() /*8053*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_100() /*8053*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_100() /*8053*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_100() /*8053*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_100() /*8053*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_100() /*8053*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_100() /*8053*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_100() /*8053*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_100() /*8053*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_100() /*8053*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_100() /*8053*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_100() /*8053*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_100() /*8053*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_100() /*8053*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_100() /*8053*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_100() /*8053*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_100() /*8053*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_100() /*8053*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_100()//Position - 0x3244
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_101()//Position - 0x3251
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_91(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_102(int iParam0, int iParam1, bool bParam2)//Position - 0x32AA
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
		if (!func_103())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_93())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_91(155))
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_83();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_83();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_103()//Position - 0x33BF
{
	return Global_1315874;
}

void func_104(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x33CB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_83();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_105(int iParam0)//Position - 0x33EA
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

