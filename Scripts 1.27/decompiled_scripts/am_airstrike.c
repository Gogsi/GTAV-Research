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
		GlobalFunc_906();
		if (GlobalFunc_7680())
		{
			func_82();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			GlobalFunc_587();
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
			GlobalFunc_587();
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
		if (!GlobalFunc_439(&uLocal_68))
		{
			GlobalFunc_436(&uLocal_68, 0, 0);
		}
		else if (GlobalFunc_5071(&uLocal_68, 10000, 0))
		{
			Local_241 = 3;
		}
	}
	if (GlobalFunc_896())
	{
		Local_241 = 3;
	}
	if (Local_241.f_55 == 1)
	{
		if (!Local_241.f_56)
		{
			if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("AIRSTRIKE_1")) || GlobalFunc_74("AIRSTRIKE_2")) || GlobalFunc_74("AIRSTRIKE_4"))
			{
				GlobalFunc_159("AIRSTRIKE_3", -1);
				Local_241.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
		{
			Local_241 = 3;
		}
	}
	else if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895())
	{
		Local_241 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_241 = 3;
	}
}











void func_12()//Position - 0x392
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (GlobalFunc_105(Local_62))
	{
		if (GlobalFunc_5233(Local_241.f_2))
		{
			Local_62 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_241.f_2), 1) };
			Local_62.f_2 = (Local_62.f_2 - 5f);
		}
	}
	switch (Local_241.f_50)
	{
		case 0:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					iLocal_56 = 1;
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 750, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 1:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 3:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 750, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 4:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 750, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 6:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 7:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 8:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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
					GlobalFunc_436(&(Local_241.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_240, Local_241.f_50);
				}
			}
			else if (GlobalFunc_5071(&(Local_241.f_51), 500, 0))
			{
				GlobalFunc_434(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 9:
			if (!GlobalFunc_439(&(Local_241.f_51)))
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





void func_17()//Position - 0xDE5
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (GlobalFunc_5233(Local_241.f_2))
	{
		uVar0 = NETWORK::NET_TO_VEH(Local_241.f_2);
		Var4 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
	}
	if (!iLocal_58)
	{
		if (!GlobalFunc_105(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			Var1 = { Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
	}
	if (bLocal_57)
	{
		if (!iLocal_58)
		{
			if (GlobalFunc_5233(Local_241.f_2))
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
			GlobalFunc_5234(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0);
		}
	}
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
					bVar3 = !GlobalFunc_490();
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 1, bVar3, bVar3);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 100f, &(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1))
			{
				if (GlobalFunc_100(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f))
				{
					Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { Var0 };
				}
				if (GlobalFunc_74("AIRSTRIKE_1"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!iLocal_54)
				{
					if (!GlobalFunc_904(Local_241.f_2.f_3))
					{
						if (GlobalFunc_5233(Local_241.f_2))
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
						GlobalFunc_159("AIRSTRIKE_4", -1);
					}
					else
					{
						GlobalFunc_159("AIRSTRIKE_1", -1);
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
			if (GlobalFunc_5233(Local_241.f_2))
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
					if (!GlobalFunc_105(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
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
						if (!GlobalFunc_904(Local_241.f_2.f_3))
						{
							if (!GlobalFunc_105(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_241.f_2.f_3), 1), 0) <= 250f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var7, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) >= (60f * 2.5f))
									{
										GlobalFunc_10644(&uLocal_72, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
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
						if (!GlobalFunc_105(Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!GlobalFunc_439(&uLocal_66))
								{
									GlobalFunc_436(&uLocal_66, 0, 0);
								}
								else if (GlobalFunc_5071(&uLocal_66, 7500, 0))
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
								GlobalFunc_10644(&uLocal_72, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_239 = 1;
							}
						}
					}
				}
			}
			if (!GlobalFunc_5233(Local_241.f_2) || GlobalFunc_904(Local_241.f_2.f_3))
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
	
	if (!GlobalFunc_904(Local_241.f_2.f_3))
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
			if (!GlobalFunc_5233(Local_241.f_2))
			{
				if (GlobalFunc_904(Local_241.f_2.f_3))
				{
					func_71(3);
				}
			}
			else if (GlobalFunc_904(Local_241.f_2.f_3))
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
	if (!GlobalFunc_439(&uLocal_70))
	{
		GlobalFunc_436(&uLocal_70, 0, 0);
	}
	else if (GlobalFunc_356(Local_241.f_2.f_1) && GlobalFunc_356(Local_241.f_2.f_3.f_1))
	{
		if (GlobalFunc_5071(&uLocal_70, 3000, 0))
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
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2.f_3) && GlobalFunc_356(Local_241.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (GlobalFunc_5233(Local_241.f_2))
		{
			if (GlobalFunc_900(&(Local_241.f_2.f_3), Local_241.f_2, 22, Local_241.f_2.f_3.f_1, -1, 1, 1, 1))
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
		if (GlobalFunc_5233(Local_241.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_47);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_59 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_47);
			iLocal_49 = 1;
		}
	}
}


int func_54()//Position - 0x21BA
{
	struct<3> Var0;
	var uVar3;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (GlobalFunc_356(Local_241.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_66(&Var0, &uVar3);
				if (GlobalFunc_8397(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (GlobalFunc_901(&(Local_241.f_2), Local_241.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
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












void func_66(var uParam0, var uParam1)//Position - 0x2880
{
	float fVar0;
	
	*uParam0 = { GlobalFunc_5236(Local_59 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = GlobalFunc_830(*uParam0, Local_59);
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
		if (GlobalFunc_5233(Local_241.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_48);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_48);
			iLocal_50 = 1;
		}
	}
}




void func_77()//Position - 0x2AE5
{
	if (!iLocal_237)
	{
		if (!GlobalFunc_904(Local_241.f_2.f_3))
		{
			GlobalFunc_878(&uLocal_72, 3, NETWORK::NET_TO_PED(Local_241.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_237 = 1;
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


void func_82()//Position - 0x2BD6
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_241.f_2))
	{
		if (GlobalFunc_5233(Local_241.f_2) && !GlobalFunc_904(Local_241.f_2.f_3))
		{
			TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_241.f_2.f_3), NETWORK::NET_TO_VEH(Local_241.f_2), 0, PLAYER::PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	GlobalFunc_905(GlobalFunc_7658(1, 1), 11, GlobalFunc_314());
	GlobalFunc_491();
}
















void func_98(struct<20> Param0)//Position - 0x2F67
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_241, 57);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_298, 11);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		func_82();
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
	{
		bLocal_51 = true;
	}
	GlobalFunc_5237(64, 1);
	Local_298[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}








